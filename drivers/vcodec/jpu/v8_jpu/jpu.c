#include <linux/kernel.h>
#include <linux/mm.h>
#include <linux/interrupt.h>
#include <linux/ioport.h>
#include <linux/platform_device.h>
#include <linux/dma-mapping.h>
#include <linux/wait.h>
#include <linux/list.h>
#include <linux/clk.h>
#include <linux/delay.h>
#include <linux/uaccess.h>
#include <linux/cdev.h>
#include <linux/slab.h>
#include <linux/sched.h>
#include <linux/of.h>
#include <linux/of_irq.h>
#include <linux/of_address.h>
#include <linux/of_platform.h>
#include <linux/module.h>
#include <linux/hisi/hisi_ion.h>

#include <linux/regulator/consumer.h>
#include <linux/regulator/driver.h>

#include <linux/ion.h>
#include <linux/mman.h>
#include <asm/cacheflush.h>

#ifndef CONFIG_ARM64
#include <asm/outercache.h>
#else
#include <linux/compat.h>
#endif

#include "soc_irqs.h"
#include "soc_ao_sctrl_interface.h"
#include "soc_media_sctrl_interface.h"
#include "soc_pmctrl_interface.h"
#include "soc_peri_sctrl_interface.h"
#include "soc_baseaddr_interface.h"

#include "video_reg_ops.h"
#include "video_harden.h"
#include "video_config.h"

#define LOG_TAG "CNM_JPU_DRV"
#include "jpu.h"
#include "jmm.h"

#ifndef VM_RESERVED /*for kernel*/
#define VM_RESERVED (VM_DONTEXPAND | VM_DONTDUMP)
#endif

//#define DUMP_JPU_POWER_REG
/* added by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
#define JPU_MAX_BITSTREAM_SIZE         (16383 * 1024)      // the same to MAX_JPU_BITSTREAM_SIZE
#define JPU_PHYSICAL_POOL_SIZE         98360
#define JPU_PHYSICAL_POOL_PAGE_SIZE    102400              // (JPU_PHYSICAL_POOL_SIZE + 4095) & (~4095)
#define JPU_RESERVED_MEMORY_SIZE       (19 * 1024 * 1024)
#define JPU_RESERVED_MEMORY_PAGE_SIZE  (19 * 1024 * 1024)  // (JPU_RESERVED_MEMORY_SIZE + 4095) & (~4095)
#define JPU_REG_PAGE_SIZE              4096                // (0x300 + 4095) & (~4095), mmap page size need align 4096
/* added by xwx271409 for DTS2015103003045 at 2015.10.30 end */

#define JPU_DEV_NAME "cnm_jpu"
#define JPU_IRQ_NAME "JPU_CODEC_IRQ"

typedef struct jpu_drv_context_t {
    struct fasync_struct *async_queue;
} jpu_drv_context_t;

/* To track the allocated memory buffer */
typedef struct jpudrv_buffer_pool_t {
    struct list_head list;
    struct jpudrv_buffer_t jb;
} jpudrv_buffer_pool_t;

STATIC jpu_mm_t s_jmem = {0};
STATIC jpudrv_buffer_t s_jpeg_memory = {0};
STATIC jpudrv_buffer_t s_jpu_instance_pool = {0};
STATIC jpu_drv_context_t s_jpu_drv_context = {0};
STATIC int s_jpu_major = 0;
STATIC struct cdev s_jpu_cdev = {0};
STATIC u32 s_jpu_open_count = 0;
STATIC int s_jpu_irq = 0;
STATIC u32 s_jpu_reg_phy_base = 0x0;
STATIC int s_jpu_interrupt_flag = 0;
STATIC wait_queue_head_t s_jpu_interrupt_wait_q = {0};

#ifdef MIT2_UT_SWITCH
STATIC u32 __iomem *s_jpu_reg_virt_base = NULL;
#else
STATIC void __iomem *s_jpu_reg_virt_base = NULL;
STATIC void __iomem *s_jpu_qos_virt_addr = NULL;
#endif //MIT2_UT_SWITCH

STATIC struct list_head s_jbp_head = LIST_HEAD_INIT(s_jbp_head);

STATIC struct class *cnm_jpu_class = NULL;
STATIC struct device *cnm_jpu_dev = NULL;

STATIC struct ion_device *s_ion_dev = NULL;
STATIC struct ion_client *s_ion_client = NULL;
STATIC struct ion_handle *s_ion_handle = NULL;
STATIC int s_jpu_systemMMU_support = 0;

STATIC int jpu_regulator_enable(void);
STATIC void jpu_regulator_disable(void);

STATIC int jpu_clk_get(void);
STATIC void jpu_clk_put(void);

STATIC int jpu_clk_enable(void);
STATIC void jpu_clk_disable(void);

STATIC int jpu_pll_clk_enable(void);
STATIC void jpu_pll_clk_disable(void);

extern struct ion_device * get_ion_device(void);

/* V8R2B020 not support jpu, z62576, 20140412, begin */
extern int is_hi6210(void);
/* V8R2B020 not support jpu, z62576, 20140412, end */

static struct semaphore jpu_busy_lock;

/* Added by y00251056 for jpu reserved memmory start */
#define HISI_JPU_RESERVED_MEMMORY           (PAGE_ALIGN(17*1024*1024))    //(1)bitstream-buffer + instance-buffer (2)4k align
/* Added by y00251056 for jpu reserved memmory end */

typedef struct
{
    struct clk *clk_medpll_src;
    struct clk *clk_medpll_src_gated;
    struct clk *pclk_codec_jpu;
    struct clk *aclk_codec_jpu;
    struct clk *clk_codec_jpu;

    unsigned int clk_medpll_src_bit         : 1;
    unsigned int clk_medpll_src_gated_bit   : 1;
    unsigned int pclk_codec_jpu_bit         : 1;
    unsigned int aclk_codec_jpu_bit         : 1;
    unsigned int clk_codec_jpu_bit          : 1;

    unsigned int reserve                    : 27;

    /*for common image, z62576, 20140429, begin*/
    u32 clk_freq;
    u32 wait_timeout_coeff;
    /*for common image, z62576, 20140429, end*/
} jpu_clk;

static jpu_clk s_jpu_clk;
/*added bu h00255928 end*/


STATIC int jpu_alloc_dma_buffer(jpudrv_buffer_t *jb)
{
    if (NULL == jb)
    {
        printk(KERN_ERR "[JPUDRV] invalid parameter jb (null) in function[%s].",__func__);
        return -1;
    }

    jb->phys_addr = (unsigned int)jmem_alloc(&s_jmem, jb->size, 0);
    if (jb->phys_addr  == (unsigned int)-1)
    {
        jpu_loge("[JPUDRV] Physical memory allocation error size=%d\n", jb->size);
        return -1;
    }
    jb->base = (unsigned long)(s_jpeg_memory.base + (jb->phys_addr - s_jpeg_memory.phys_addr));

    jpu_logd("[JPUDRV] jb->size=%u, jb->phys_addr=0x%x, jb->base=0x%lx, s_jpeg_memory.phys_addr=0x%x, s_jpeg_memory.base=0x%lx\n",
             jb->size,
             jb->phys_addr,
             jb->base,
             s_jpeg_memory.phys_addr,
             s_jpeg_memory.base);

    return 0;
}

STATIC void jpu_free_dma_buffer(jpudrv_buffer_t *jb)
{
    if (NULL == jb)
    {
        jpu_loge( "[JPUDRV] jb has been freed, don't free again\n");
        return;
    }

    if (jb->base)
    {
        jmem_free(&s_jmem, jb->phys_addr, 0);
    }

    jpu_logd("[JPUDRV] jb->base=0x%lx, jb->phys_addr=0x%x\n", jb->base, jb->phys_addr);
}

STATIC int jpu_free_buffers(void)
{
    jpudrv_buffer_pool_t *pool = NULL, *n = NULL;
    jpudrv_buffer_t jb;

    jpu_logd("enter.\n");

    list_for_each_entry_safe(pool, n, &s_jbp_head, list)
    {
        jb = pool->jb;
        if (jb.base)
        {
            jpu_free_dma_buffer(&jb);
            list_del(&pool->list);
            kfree(pool);
        }
    }

    return 0;
}

STATIC irqreturn_t jpu_irq_handler(int irq, void *dev_id)
{
    jpu_drv_context_t *dev = (jpu_drv_context_t *)dev_id;
    disable_irq_nosync(s_jpu_irq);
    //jpu_logd("enter.\n");

    if (dev->async_queue)
    {
        kill_fasync(&dev->async_queue, SIGIO, POLL_IN);	// notify the interrupt to userspace
    }

    s_jpu_interrupt_flag = 1;
    wake_up_interruptible(&s_jpu_interrupt_wait_q);
    return IRQ_HANDLED;
}

STATIC int jpu_open(struct inode *inode, struct file *filp)
{
    int ret = -1;

    ret = down_interruptible(&jpu_busy_lock);
    if (0 != ret) {
        jpu_logi("[JPUDRV] jpu_open down_interruptible failed\n");
        return -EINTR;
    }

    jpu_logi("[JPUDRV] enter. s_jpu_open_count=%d\n", s_jpu_open_count);

    if (s_jpu_open_count > 0) {
        jpu_logi("[JPUDRV] don't need to open device, the open count is %d", s_jpu_open_count);

        filp->private_data = (void *)(&s_jpu_drv_context);
        up(&jpu_busy_lock);
        return 0;
    }

    ret = jpu_regulator_enable();
    if ( 0 != ret ) {
        jpu_loge("[JPUDRV] jpu regulator enable failed.\n");
        up(&jpu_busy_lock);
        return -EIO;
    }

    jpu_logd("[JPUDRV] enter. s_jpu_open_count=%u\n", s_jpu_open_count);

    filp->private_data = (void *)(&s_jpu_drv_context);

    jpu_logi("[JPUDRV] DEV OPENED!\n");

    up(&jpu_busy_lock);

    return 0;

}

STATIC long jpu_ioctl(struct file *filp, u_int cmd, u_long arg)
{
    int ret = 0;
    unsigned long ret_value = 0;
    u32 timeout = 0;

    if (NULL == filp || 0 == arg) {
        return -EFAULT;
    }

    if (_IOC_NR(cmd) > JDI_IOCTL_MAXDR) {
        return -ENOTTY;
    }

    switch (cmd)
    {
    case JDI_IOCTL_ALLOCATE_PHYSICAL_MEMORY:
        {
            jpudrv_buffer_pool_t *jbp = NULL;

            jpu_logd("[JPUDRV] JDI_IOCTL_ALLOCATE_PHYSICAL_MEMORY\n");
            jbp = kzalloc(sizeof(*jbp), GFP_KERNEL);
            if (!jbp)
            {
                return -ENOMEM;
            }
            ret_value = copy_from_user(&(jbp->jb), (jpudrv_buffer_t *)arg, sizeof(jpudrv_buffer_t));

            if (ret_value)
            {
                kfree(jbp);
                return -EFAULT;
            }
            /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
            if (jbp->jb.size > JPU_MAX_BITSTREAM_SIZE)
            {
                jpu_loge("[JPUDRV] invalid size[%u] in JDI_IOCTL_ALLOCATE_PHYSICAL_MEMORY\n", jbp->jb.size);
                kfree(jbp);
                return -EFAULT;
            }
            /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 end */
            ret = jpu_alloc_dma_buffer(&(jbp->jb));
            if (ret == -1)
            {
                ret = -ENOMEM;
                kfree(jbp);
                break;
            }

            ret_value = copy_to_user((void __user *)arg, &(jbp->jb), sizeof(jpudrv_buffer_t));
            if (ret_value)
            {
                jpu_free_dma_buffer(&(jbp->jb));
                kfree(jbp);
                ret = -EFAULT;
                break;
            }

            ret = down_interruptible(&jpu_busy_lock);
            if (0 != ret) {
                jpu_loge("[JPUDRV] down_interruptible failed\n");
                jpu_free_dma_buffer(&(jbp->jb));
                kfree(jbp);
                jbp = NULL;
                return -EINTR;
            }

            list_add(&jbp->list, &s_jbp_head);
            up(&jpu_busy_lock);
        }
        break;

    case JDI_IOCTL_FREE_PHYSICALMEMORY:
        {
            jpudrv_buffer_pool_t *jbp = NULL, *n = NULL;
            jpudrv_buffer_t jb = {0};

            jpu_logd("[JPUDRV] JDI_IOCTL_FREE_PHYSICALMEMORY\n");
            ret_value = copy_from_user(&jb, (jpudrv_buffer_t *)arg, sizeof(jpudrv_buffer_t));

            if (ret_value)
            {
                return -EACCES;
            }

            if (jb.base)
            {
                jpu_free_dma_buffer(&jb);
            }

            ret = down_interruptible(&jpu_busy_lock);
            if (0 != ret) {
                jpu_loge("[JPUDRV] down_interruptible failed\n");
                return -EINTR;
            }
            list_for_each_entry_safe(jbp, n, &s_jbp_head, list)
            {
                if (jbp->jb.base == jb.base)
                {
                    list_del(&jbp->list);
                    kfree(jbp);
                    break;
                }
            }
            up(&jpu_busy_lock);
        }
        break;

    case JDI_IOCTL_WAIT_INTERRUPT:
        {
            jpu_logd("[JPUDRV] JDI_IOCTL_WAIT_INTERRUPT enter\n");

            /*for common image, z62576, 20140429, begin*/
            timeout = (u32) arg * s_jpu_clk.wait_timeout_coeff;
            /*for common image, z62576, 20140429, end*/

            if (!wait_event_interruptible_timeout(s_jpu_interrupt_wait_q, s_jpu_interrupt_flag != 0, msecs_to_jiffies(timeout)))
            {
                ret = -ETIME;
                jpu_loge("[JPUDRV] JDI_IOCTL_WAIT_INTERRUPT timeout\n");
                break;
            }

            s_jpu_interrupt_flag = 0;
            enable_irq(s_jpu_irq);
            jpu_logd("[JPUDRV] JDI_IOCTL_WAIT_INTERRUPT leave\n");
        }
        break;

    case JDI_IOCTL_SET_CLOCK_GATE:
        {
            u32 clkgate = 0;

            if (get_user(clkgate, (u32 __user *) arg))
            {
                return -EFAULT;
            }

            jpu_logd("[JPUDRV] JDI_IOCTL_SET_CLOCK_GATE: clkgate=%u\n", clkgate);

        }
        break;

    case JDI_IOCTL_GET_INSTANCE_POOL:
        {
            jpu_logd("[JPUDRV] JDI_IOCTL_GET_INSTANCE_POOL\n");

            ret = down_interruptible(&jpu_busy_lock);
            if (0 != ret) {
                jpu_loge("[JPUDRV] down_interruptible failed\n");
                return -EINTR;
            }

            if (s_jpu_instance_pool.base != 0)
            {
                ret_value = copy_to_user((void __user *)arg, &s_jpu_instance_pool, sizeof(jpudrv_buffer_t));
                if (ret_value != 0)
                {
                    ret = -EFAULT;
                }
            }
            else
            {
                ret_value = copy_from_user(&s_jpu_instance_pool, (jpudrv_buffer_t *)arg, sizeof(jpudrv_buffer_t));
                if (ret_value == 0)
                {
                    /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 begin */
                    if (JPU_PHYSICAL_POOL_SIZE != s_jpu_instance_pool.size)
                    {
                        up(&jpu_busy_lock);
                        jpu_loge("[JPUDRV] invalid parameter[%u] to get instance pool\n", s_jpu_instance_pool.size);
                        s_jpu_instance_pool.base = 0;
                        return -EFAULT;
                    }
                    /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 end */
                    if (jpu_alloc_dma_buffer(&s_jpu_instance_pool) != -1)
                    {
                        memset((void *)s_jpu_instance_pool.base, 0x0, s_jpu_instance_pool.size);
                        ret_value = copy_to_user((void __user *)arg, &s_jpu_instance_pool, sizeof(jpudrv_buffer_t));
                        if (ret_value == 0)
                        {
                            // success to get memory for instance pool
                            up(&jpu_busy_lock);
                            break;
                        }
                    }
                }

                ret = -EFAULT;
            }
            up(&jpu_busy_lock);
        }
        break;

    case JDI_IOCTL_GET_SYSTEMMMU_SURPPORT:
        {
            jpu_logd("[JPUDRV] JDI_IOCTL_GET_SYSTEMMMU_SURPPORT\n");

            ret = down_interruptible(&jpu_busy_lock);
            if (0 != ret) {
                jpu_loge("[JPUDRV] down_interruptible failed\n");
                return -EINTR;
            }

            ret_value = copy_to_user((void __user *)arg, &s_jpu_systemMMU_support, sizeof(int));

            up(&jpu_busy_lock);

            if (ret_value != 0)
            {
                ret = -EFAULT;
            }
            jpu_logd("[JPUDRV] s_jpu_systemMMU_support =%d\n", s_jpu_systemMMU_support);
        }
        break;
    case JDI_IOCTL_RESERVED_MEMORY_ALLOC:
        {
            size_t mm_size = 0;
            struct iommu_map_format iommu_format;
            jpu_logd("[JPUDRV] JDI_IOCTL_RESERVED_MEMORY_ALLOC");

            ret = down_interruptible(&jpu_busy_lock);
            if (0 != ret) {
                jpu_loge("[JPUDRV] down_interruptible failed\n");
                return -EINTR;
            }

            if (1 != s_jpu_systemMMU_support)
            {
                jpu_loge("[JPUDRV] systemMMU is not support.\n");
                up(&jpu_busy_lock);
                return -EFAULT;
            }
            /*call ION function to get reserved phyical address and virtual address*/

            ret_value = copy_from_user(&s_jpeg_memory, (jpudrv_buffer_t *)arg, sizeof(jpudrv_buffer_t));

            mm_size = (unsigned long)(s_jpeg_memory.size);

            if (0 != ret_value)
            {
                jpu_loge("[JPUDRV] fail to copy_from_user.\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }
            /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 begin */
            if (JPU_RESERVED_MEMORY_SIZE != s_jpeg_memory.size)
            {
                jpu_loge("[JPUDRV] invalid parameter[%u] to get reserved memory\n", s_jpeg_memory.size);
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }
            /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 end */

            s_ion_dev = get_ion_device();
            if (NULL == s_ion_dev)
            {
                jpu_loge("[JPUDRV] fail to get ion device.\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            s_ion_client = ion_client_create(s_ion_dev, "jpu");
            if (IS_ERR(s_ion_client))
            {
                jpu_loge("[JPUDRV] fail to create ion client.\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            s_ion_handle = ion_alloc(s_ion_client,
                                     ION_8K_ALIGN(s_jpeg_memory.size),
                                     IOMMU_PAGE_SIZE,
                                     ION_HEAP(ION_SYSTEM_HEAP_ID),
                                     0);
            if (IS_ERR(s_ion_handle))
            {
                jpu_loge("[JPUDRV] fail to  ion alloc reserved memory.\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            iommu_format.is_tile = 0;
            if (0 != ion_map_iommu(s_ion_client,s_ion_handle,&iommu_format))
            {
                jpu_loge("[JPUDRV] fail to  ion_phys().\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            s_jpeg_memory.size = (unsigned int)iommu_format.iova_size;
            s_jpeg_memory.phys_addr = iommu_format.iova_start;
            s_jpeg_memory.base = (unsigned long)ion_map_kernel(s_ion_client, s_ion_handle);


            jpu_logd("[JPUDRV] s_jpeg_memory.phys_addr = 0x%x s_jpeg_memory.base = 0x%lx s_jpeg_memory.size = %u\n",
                s_jpeg_memory.phys_addr, s_jpeg_memory.base ,s_jpeg_memory.size);

            if (IS_ERR((void *)s_jpeg_memory.base) || (0 == s_jpeg_memory.base ))
            {
                jpu_loge("[JPUDRV] fail to ion_map_kernel\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            if (jmem_init(&s_jmem, s_jpeg_memory.phys_addr, s_jpeg_memory.size) < 0)
            {
                jpu_loge("[JPUDRV] fail to init jmem system\n");
                ret = -EFAULT;
                goto ERROR_RESERVED_MEMORY_ALLOC;
            }

            ret_value = copy_to_user((void __user *)arg, &s_jpeg_memory, sizeof(jpudrv_buffer_t));
            if (ret_value != 0)
            {
               jpu_loge("[JPUDRV] fail to copy_to_user\n");
               ret = -EFAULT;
            }

ERROR_RESERVED_MEMORY_ALLOC:

            if (0 != ret)
            {
                jmem_exit(&s_jmem);

                /* modifide by w00228831 for DTS2015101401429, judge wheather empty before unmap, begin */
                if (!IS_ERR((void *)s_jpeg_memory.base) && (s_jpeg_memory.base != 0)
                   && (s_ion_client != NULL) && (s_ion_handle != NULL))
                /* modifide by w00228831 for DTS2015101401429, judge wheather empty before unmap, end*/

                {
                    ion_unmap_kernel(s_ion_client, s_ion_handle);
                    memset(&s_jpeg_memory, 0x00, sizeof(jpudrv_buffer_t));
                }

                if (!IS_ERR(s_ion_handle) && (s_ion_handle != NULL))
                {
                    ion_free(s_ion_client, s_ion_handle);
                    s_ion_handle = NULL;
                }

                if (!IS_ERR(s_ion_client) && (s_ion_client != NULL))
                {
                    ion_client_destroy(s_ion_client);
                    s_ion_client = NULL;
                }
            }

            up(&jpu_busy_lock);
        }
        break;
    default:
        {
            jpu_loge("[JPUDRV] No such IOCTL, cmd is %d\n", cmd);
        }
        break;
    }

    return ret;
}

#ifdef CONFIG_COMPAT
long compat_get_jpudrv_data(u_int cmd, void __user *data, void __user *data32)
{

    long ret = 0;
    unsigned int ui = 0;
    unsigned long long ull =0;
    compat_ulong_t ul = 0;

    ret  = get_user(ui, &(((compat_jpudrv_buffer_t *)data32)->size));
    ret |= put_user(ui, &(((jpudrv_buffer_t *)data)->size));
    ret |= get_user(ui, &(((compat_jpudrv_buffer_t *)data32)->phys_addr));
    ret |= put_user(ui, &(((jpudrv_buffer_t *)data)->phys_addr));
    ret |= get_user(ull, &(((compat_jpudrv_buffer_t *)data32)->base));
    ret |= put_user(ull, &(((jpudrv_buffer_t *)data)->base));
    ret |= get_user(ul, &(((compat_jpudrv_buffer_t *)data32)->virt_addr));
    ret |= put_user(ul, &(((jpudrv_buffer_t *)data)->virt_addr));

    return ret;
}

long compat_put_jpudrv_data(u_int cmd, void __user *data32, void __user *data)
{
    long ret = 0;
    unsigned int ui = 0;
    unsigned long long ull =0;
    compat_ulong_t ul = 0;

    ret  = get_user(ui, &(((jpudrv_buffer_t *)data)->size));
    ret |= put_user(ui, &(((compat_jpudrv_buffer_t *)data32)->size));
    ret |= get_user(ui, &(((jpudrv_buffer_t *)data)->phys_addr));
    ret |= put_user(ui, &(((compat_jpudrv_buffer_t *)data32)->phys_addr));
    ret |= get_user(ull, &(((jpudrv_buffer_t *)data)->base));
    ret |= put_user(ull, &(((compat_jpudrv_buffer_t *)data32)->base));
    ret |= get_user(ul, &(((jpudrv_buffer_t *)data)->virt_addr));
    ret |= put_user(ul, &(((compat_jpudrv_buffer_t *)data32)->virt_addr));

    return ret;
}

STATIC long jpu_compat_ioctl(struct file *filp, u_int cmd, u_long arg)
{
    long ret = 0;
    void __user *data32 = NULL;
    void __user *data = NULL;
    data32 = compat_ptr(arg);

    switch(cmd)
    {
        case JDI_IOCTL_GET_INSTANCE_POOL:
        case JDI_IOCTL_FREE_PHYSICALMEMORY:
        case JDI_IOCTL_ALLOCATE_PHYSICAL_MEMORY:
        case JDI_IOCTL_RESERVED_MEMORY_ALLOC:
            {
                /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 begin */
                if (NULL == data32)
                {
                    jpu_loge("[JPUDRV] invalid parameter arg in jpu_compat_ioctl.");
                    return -1;
                }
                /* added check by xwx271409 for DTS2015103003011 at 2015.10.30 end */
                data = compat_alloc_user_space(sizeof(jpudrv_buffer_t));
                if (NULL == data)
                   return -EFAULT;

                ret = compat_get_jpudrv_data(cmd, data, data32);
                if (0 != ret)
                    return ret;

                ret = jpu_ioctl(filp,  cmd,  (unsigned long)data);
                if (0 != ret)
                    return ret;

                ret = compat_put_jpudrv_data(cmd, data32, data);

                return ret;
            }
            break;

        default:
            {
                ret = jpu_ioctl(filp, cmd, (unsigned long)data32);
                return ret;
            }
    }
}
#endif

STATIC int jpu_release(struct inode *inode, struct file *filp)
{
    int ret = 0;

    /* added by h00255928 start */
    ret = down_interruptible(&jpu_busy_lock);
    if (0 != ret)
    {
        jpu_loge("[JPUDRV] down_interruptible() failed.");
        return -EINTR;
    }
    /* added by h00255928 end */

    jpu_logi("[JPUDRV] jpu_release s_jpu_open_count=%d\n", s_jpu_open_count);

    if (s_jpu_open_count > 0)
    {
        /* found and free the not handled buffer by user applications */
        jpu_free_buffers();
    }

    if (s_jpu_open_count > 0)
    {
         jpu_logi("[JPUDRV] can't close device, the open count is %d", s_jpu_open_count);
         up(&jpu_busy_lock);
         return 0;
    }

    if (s_jpu_instance_pool.base != 0)
    {
        jpu_free_dma_buffer(&s_jpu_instance_pool);
        s_jpu_instance_pool.base = 0;
    }

    jpu_regulator_disable();

    if (1 == s_jpu_systemMMU_support && NULL != s_ion_client && NULL != s_ion_handle)
    {
        jpu_logi("[JPUDRV] ion_unmap_kernel()\n");
        jmem_exit(&s_jmem);

        if ((!IS_ERR((void *)s_jpeg_memory.base)) && (s_jpeg_memory.base != 0))
        {
            ion_unmap_kernel(s_ion_client, s_ion_handle);
            memset(&s_jpeg_memory, 0x00, sizeof(jpudrv_buffer_t));
        }

        if ((!IS_ERR(s_ion_handle)) && (s_ion_handle != NULL))
        {
            ion_free(s_ion_client, s_ion_handle);
            s_ion_handle = NULL;
        }

        if (!IS_ERR(s_ion_client) && (s_ion_client != NULL))
        {
            ion_client_destroy(s_ion_client);
            s_ion_client = NULL;
        }
    }

     up(&jpu_busy_lock);

    return 0;
}

STATIC int jpu_map_to_register(struct file *fp, struct vm_area_struct *vm)
{
    unsigned long pfn = 0;
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
    unsigned long start = vm->vm_start;
    unsigned int size = vm->vm_end - start;
    if (JPU_REG_PAGE_SIZE != size)
    {
        jpu_loge("[JPUDRV] invalid size[%u] in jpu_map_to_register\n", size);
        return -1;
    }
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 end */
    vm->vm_flags |= VM_IO | VM_RESERVED;
    vm->vm_page_prot = pgprot_noncached(vm->vm_page_prot);
    pfn = s_jpu_reg_phy_base >> PAGE_SHIFT;

    jpu_logd("[JPUDRV] s_jpu_reg_phy_base=0x%x, pfn=%lu, vm->vm_pgoff=%lu, vm_start=0x%lx, vm_end=0x%lx\n",
            s_jpu_reg_phy_base,
            pfn,
            vm->vm_pgoff,
            vm->vm_start,
            vm->vm_end);

    return remap_pfn_range(vm, vm->vm_start, pfn, vm->vm_end-vm->vm_start, vm->vm_page_prot) ? -EAGAIN : 0;
}

static int hisi_jpu_mmap(struct ion_client* client, struct ion_handle *handle, struct vm_area_struct * vma)
{
        struct sg_table *table = NULL;
        struct scatterlist *sg = NULL;
        struct page *page = NULL;
        unsigned long remainder = 0;
        unsigned long len = 0;
        unsigned long addr = 0;
        int i = 0;
        int ret = 0;
        /* modified by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
        table = ion_sg_table(client, handle);
        if (NULL == table)
        {
            jpu_loge("[JPUDRV] ion_sg_table return null");
            return -1;
        }
        /* modified by xwx271409 for DTS2015103003045 at 2015.10.30 end */
        vma->vm_page_prot = pgprot_writecombine(vma->vm_page_prot);
        addr = vma->vm_start;
        for_each_sg(table->sgl, sg, table->nents, i) {
                page = sg_page(sg);
                remainder = vma->vm_end - addr;
                len = min(sg_dma_len(sg), remainder);
                ret = remap_pfn_range(vma, addr, page_to_pfn(page), len,
                        vma->vm_page_prot);
                if (ret != 0) {
                    jpu_loge("[JPUDRV] failed to remap_pfn_range! ret=%d\n",ret);
                }
                addr += len;
                if (addr >= vma->vm_end)
                        return 0;
        }

        return 0;
}

STATIC int jpu_map_to_physical_memory(struct file *fp, struct vm_area_struct *vm)
{
    int ret = 0;
    jpu_logd("vm_pgoff=%lu, vm_start=0x%lx, vm_end=0x%lx",
            vm->vm_pgoff,
            vm->vm_start,
            vm->vm_end);
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
    unsigned long pyhs_start = vm->vm_pgoff << PAGE_SHIFT;
    unsigned long start = vm->vm_start;
    unsigned int size = vm->vm_end - start;

    if (pyhs_start != (unsigned long)s_jpeg_memory.phys_addr || size != s_jpeg_memory.size)
    {
        jpu_loge("[JPUDRV] error in [%s] pyhs_addr == [0x%lx],size == [%u] s_jpeg_memory.phys_addr == [0x%x]\n", __func__, pyhs_start, size, s_jpeg_memory.phys_addr);
        return -EAGAIN;
    }
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 end */

    if (1 == s_jpu_systemMMU_support)
    {
        if (NULL == s_ion_handle)
        {
            return -EAGAIN;
        }
        else
        {
            ret = hisi_jpu_mmap(s_ion_client, s_ion_handle, vm);
            if (ret != 0)
            {
                jpu_loge("[JPUDRV] hisi_jpu_mmap err.");
            }
        }
    }
    else
    {
        vm->vm_flags |= VM_IO | VM_RESERVED;
        vm->vm_page_prot = pgprot_writecombine(vm->vm_page_prot);

        ret = remap_pfn_range(vm, vm->vm_start, vm->vm_pgoff, vm->vm_end-vm->vm_start, vm->vm_page_prot) ? -EAGAIN : 0;
        if (ret != 0)
        {
            jpu_loge("[JPUDRV] jpu_map_to_physical_memory err.");
        }
    }

    return ret;

}

STATIC int jpu_map_to_instance_pool_memory(struct file *fp, struct vm_area_struct *vm)
{
    int ret = 0;
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
    unsigned long pyhs_start = vm->vm_pgoff << PAGE_SHIFT;
    unsigned long start = vm->vm_start;
    unsigned int size = vm->vm_end - start;
    if (pyhs_start != s_jpu_instance_pool.phys_addr || JPU_PHYSICAL_POOL_PAGE_SIZE != size)
    {
        jpu_loge( "[JPUDRV] error pyhs_addr == [0x%lx],size == [%u] s_jpu_instance_pool.phys_addr == [0x%x] \n", pyhs_start, size, s_jpu_instance_pool.phys_addr);
        return -EAGAIN;
    }
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 end */
    jpu_logd("[JPUDRV] vm_pgoff=%lu, vm_start=0x%lx, vm_end=0x%lx",
            vm->vm_pgoff,
            vm->vm_start,
            vm->vm_end);

    ret = remap_pfn_range(vm, vm->vm_start, vm->vm_pgoff, vm->vm_end-vm->vm_start, vm->vm_page_prot) ? -EAGAIN : 0;
    if (ret != 0)
    {
        jpu_loge("[JPUDRV] jpu_map_to_instance_pool_memory err.");
    }

    return ret;
}


/*!
 * @brief memory map interface for jpu file operation
 * @return  0 on success or negative error code on error
 */
STATIC int jpu_mmap(struct file *fp, struct vm_area_struct *vm)
{
    jpu_logd("[JPUDRV] enter [%s].\n", __func__);
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 begin */
    if (NULL == vm)
    {
        jpu_loge("[JPUDRV] invalid vm(null) in jpu_map_to_register.\n");
        return -1;
    }
    /* added check by xwx271409 for DTS2015103003045 at 2015.10.30 end */
    if (vm->vm_pgoff)
    {
        if (s_jpu_systemMMU_support == 0)
        {
            if (vm->vm_pgoff == (s_jpu_instance_pool.phys_addr>>PAGE_SHIFT))
            {
                return  jpu_map_to_instance_pool_memory(fp, vm);
            }
        }
        return jpu_map_to_physical_memory(fp, vm);
    }
    else
    {
        return jpu_map_to_register(fp, vm);
    }
}

#ifndef MIT2_UT_SWITCH
struct file_operations jpu_fops = {
    .owner = THIS_MODULE,
    .open = jpu_open,
    .unlocked_ioctl = jpu_ioctl,
#ifdef CONFIG_COMPAT //Modified for 64-bit platform
    .compat_ioctl = jpu_compat_ioctl,
#endif //CONFIG_COMPAT
    .release = jpu_release,
    .mmap = jpu_mmap,
};
#else
struct file_operations jpu_fops = {0};
#endif

STATIC int jpu_probe(struct platform_device *pdev)
{
    int err = 0;
    struct resource *res = NULL;
    struct ion_heap_info_data mem_data = {0};

    jpu_logd("[JPUDRV] jpu_probe enter\n");
    /* V8R2B020 not support jpu, z62576, 20140412, begin */
    if (0 == video_get_support_jpu()) {
        jpu_loge("[JPUDRV] jpu_probe, platform not support jpu.\n");
        return -1;
    }
    /* V8R2B020 not support jpu, z62576, 20140412, end */

    s_jpu_systemMMU_support = 1;

    memset(&s_jpu_clk,0,sizeof(jpu_clk));

    if (pdev == NULL)
    {
        jpu_loge("[JPUDRV] jpu_probe fail, pdev is NULL\n");
        return -1;
    }

    /* get jpu reg base addr */
    res = platform_get_resource(pdev, IORESOURCE_MEM, 0);
    if (res) 	// if platform driver is implemented
    {
        s_jpu_reg_phy_base = res->start;
        s_jpu_reg_virt_base = ioremap(res->start, (res->end - res->start + 1));
        jpu_logi("[JPUDRV] jpu base address get from platform driver base addr=0x%x, virtualbase=%pK\n", s_jpu_reg_phy_base , s_jpu_reg_virt_base);
    }
    else
    {
        err = -ENODEV;
        jpu_loge("[JPUDRV] jpu platform_get_resource(IORESOURCE_MEM) failed\n");
        goto ERROR_PROVE_DEVICE;
    }

    /* get the major number of the character device */
    if ((alloc_chrdev_region(&s_jpu_major, 0, 1, JPU_DEV_NAME)) < 0)
    {
        err = -EBUSY;
        jpu_loge("[JPUDRV] could not allocate major number\n");
        goto ERROR_PROVE_DEVICE;
    }

    /* initialize the device structure and register the device with the kernel */
    cdev_init(&s_jpu_cdev, &jpu_fops);
    if ((cdev_add(&s_jpu_cdev, s_jpu_major, 1)) < 0)
    {
        err = -EBUSY;
        jpu_loge("[JPUDRV] could not allocate chrdev\n");
        goto ERROR_PROVE_DEVICE;
    }

    /* register sysfs */
    cnm_jpu_class = class_create(THIS_MODULE, JPU_DEV_NAME);
    if (IS_ERR(cnm_jpu_class))
    {
        err = -EBUSY;
        jpu_loge("[JPUDRV] can't creat jpu class");
        goto ERROR_PROVE_DEVICE;
    }

    cnm_jpu_dev = device_create(cnm_jpu_class, NULL, s_jpu_major, NULL, JPU_DEV_NAME);
    if (cnm_jpu_dev == NULL)
    {
        err = -EBUSY;
        jpu_loge("[JPUDRV] can't creat jpu device");
        goto ERROR_PROVE_DEVICE;
    }

    res = platform_get_resource(pdev, IORESOURCE_IRQ, 0);
    if (res) 	// if platform driver is implemented
    {
        s_jpu_irq = res->start;
        jpu_logi("[JPUDRV] : jpu irq number get from platform driver irq=0x%x\n", s_jpu_irq );
    }
    else
    {
        err = -ENODEV;
        jpu_loge("[JPUDRV] jpu platform_get_resource(IORESOURCE_IRQ) failed\n");
        goto ERROR_PROVE_DEVICE;
    }

    if (1 != s_jpu_systemMMU_support)                                           /*从ION中申请内存，而不再采用预留内存的方式*/
    {
        if (0 != hisi_ion_get_heap_info(ION_JPU_HEAP_ID, &mem_data)) {
            jpu_loge("[JPUDRV] hisi_ion_get_heap_info(gralloc) failed\n");
            goto ERROR_PROVE_DEVICE;
        }

        if (0 == mem_data.heap_size) {
            jpu_loge("[JPUDRV] gralloc memory size is 0.\n");
            goto ERROR_PROVE_DEVICE;
        }

        if (mem_data.heap_size < HISI_JPU_RESERVED_MEMMORY)
        {
            jpu_loge("[JPUDRV] jpu memory size is %d.\n", mem_data.heap_size);
            goto ERROR_PROVE_DEVICE;
        }

        s_jpeg_memory.size = mem_data.heap_size;
        s_jpeg_memory.phys_addr = (unsigned long)(mem_data.heap_phy);
        s_jpeg_memory.base = (unsigned long)video_ioremap(s_jpeg_memory.phys_addr, PAGE_ALIGN(s_jpeg_memory.size));

        jpu_logd("[JPUDRV] s_jpeg_memory.phys_addr=0x%x, s_jpeg_memory.base=0x%lx, s_jpeg_memory.size=%d",
                s_jpeg_memory.phys_addr, s_jpeg_memory.base, s_jpeg_memory.size);

        if (!s_jpeg_memory.base)
        {
            jpu_loge("[JPUDRV] fail to remap video memory physical phys_addr=0x%x, base=0x%lx, size=%d\n",
                s_jpeg_memory.phys_addr, s_jpeg_memory.base, (int)s_jpeg_memory.size);
            goto ERROR_PROVE_DEVICE;
        }

        if (jmem_init(&s_jmem, s_jpeg_memory.phys_addr, s_jpeg_memory.size) < 0)
        {
            jpu_loge("[JPUDRV] fail to init jmem system\n");
            goto ERROR_PROVE_DEVICE;
        }
    }

    err = request_irq(s_jpu_irq, jpu_irq_handler, IRQF_TRIGGER_RISING, JPU_IRQ_NAME, (void *)(&s_jpu_drv_context));
    if (err)
    {
        jpu_loge("[JPUDRV] fail to register interrupt handler\n");
        goto ERROR_PROVE_DEVICE;
    }

    jpu_logi("[JPUDRV] success to probe jpu device with reserved video memory phys_addr=0x%x, base = 0x%lx\n",
        s_jpeg_memory.phys_addr, s_jpeg_memory.base);

    return 0;

ERROR_PROVE_DEVICE:

    if (cnm_jpu_dev)
    {
        device_destroy(cnm_jpu_class, s_jpu_major);
    }

    if (cnm_jpu_class)
    {
        class_destroy(cnm_jpu_class);
    }

    cdev_del(&s_jpu_cdev);

    if (s_jpu_major)
    {
        unregister_chrdev_region(s_jpu_major, 1);
    }

    if (s_jpu_reg_virt_base)
    {
        iounmap((void *)s_jpu_reg_virt_base);
    }

    if (1 != s_jpu_systemMMU_support && s_jpeg_memory.base)
    {
        video_iounmap((void *)s_jpeg_memory.base);
    }

    return err;
}

STATIC int jpu_remove(struct platform_device *pdev)
{
    jpu_logd("[JPUDRV] enter [%s].\n", __func__);

    if (s_jpu_instance_pool.base)
    {
        jpu_free_dma_buffer(&s_jpu_instance_pool);
        s_jpu_instance_pool.base = 0;
    }

    if (s_jpeg_memory.base)
    {
        video_iounmap((void *)s_jpeg_memory.base);
        memset(&s_jpeg_memory, 0x00, sizeof(jpudrv_buffer_t));
        jmem_exit(&s_jmem);
    }

    if (cnm_jpu_dev)
    {
        device_destroy(cnm_jpu_class, s_jpu_major);
    }

    if (cnm_jpu_class)
    {
        class_destroy(cnm_jpu_class);
    }

    cdev_del(&s_jpu_cdev);

    if (s_jpu_major > 0)
    {
        unregister_chrdev_region(s_jpu_major, 1);
        s_jpu_major = 0;
    }

    if (s_jpu_irq)
    {
        free_irq(s_jpu_irq, &s_jpu_drv_context);
    }

    if (s_jpu_reg_virt_base)
    {
        iounmap(s_jpu_reg_virt_base);
    }

    return 0;
}

#ifdef CONFIG_PM
STATIC int jpu_suspend(struct platform_device *pdev, pm_message_t state)
{
    if (0 < s_jpu_open_count)
    {
        jpu_logd("[JPUDRV] [open_count=%d]", s_jpu_open_count);
        jpu_regulator_disable();
    }

    return 0;
}

STATIC int jpu_resume(struct platform_device *pdev)
{
    int ret = 0;

    if (s_jpu_open_count > 0)
    {
        jpu_logd("[JPUDRV] [open_count=%d]", s_jpu_open_count);

        ret = jpu_regulator_enable();
        if ( 0 != ret )
        {
            jpu_loge("[JPUDRV] jpu resume resume failed.");
            return -EIO;
        }
        jpu_logi("[JPUDRV] jpu resume successfully");

    }
    else
    {
    }
    return 0;
}
#else
#define  jpu_suspend    NULL
#define  jpu_resume     NULL
#endif   /* !CONFIG_PM */

#ifndef MIT2_UT_SWITCH
static const struct of_device_id hisi_jpu_dt_match[] = {
    {.compatible = "hisi,cnm_jpu", },
    {}
};

STATIC struct platform_driver jpu_driver = {
    .driver = {
        .name = JPU_DEV_NAME,
        .of_match_table = hisi_jpu_dt_match
    },
    .probe = jpu_probe,
    .remove = jpu_remove,
    .suspend = jpu_suspend,
    .resume = jpu_resume,
};
#else
STATIC struct platform_driver jpu_driver = {0};
#endif

STATIC void jpu_variable_init(void)
{
    jpu_logd("[JPUDRV] enter [%s].\n", __func__);

    memset(&s_jmem, 0x00, sizeof(s_jmem));
    memset(&s_jpeg_memory, 0x00, sizeof(s_jpeg_memory));
    memset(&s_jpu_instance_pool, 0x00, sizeof(s_jpu_instance_pool));
    memset(&s_jpu_drv_context, 0x00, sizeof(s_jpu_drv_context));
    memset(&s_jpu_cdev, 0x00, sizeof(s_jpu_cdev));
    memset(&s_jpu_interrupt_wait_q, 0x00, sizeof(s_jpu_interrupt_wait_q));

    s_jpu_major             = 0;
    s_jpu_open_count        = 0;
    s_jpu_irq               = IRQ_JPEG;
    s_jpu_reg_phy_base      = 0;
    s_jpu_interrupt_flag    = 0;
    s_jpu_reg_virt_base     = NULL;
    s_jpu_qos_virt_addr     = NULL;
    s_ion_dev               = NULL;
    s_ion_client            = NULL;
    s_ion_handle            = NULL;
}

STATIC int __init jpu_init(void)
{
    int res;
    res = 0;

    jpu_logi("[JPUDRV] jpu_init\n");

    jpu_variable_init();

    init_waitqueue_head(&s_jpu_interrupt_wait_q);

    s_jpu_instance_pool.base = 0;

    res = platform_driver_register(&jpu_driver);

    sema_init(&jpu_busy_lock, 1);

    jpu_logi("[JPUDRV] end jpu_init result=0x%x\n", res);

    return res;
}

STATIC void __exit jpu_exit(void)
{
    jpu_logi("[JPUDRV] jpu_exit\n");

    platform_driver_unregister(&jpu_driver);

    return;
}

/***********************************************************************************
* Function:       jpu_dump_power_reg
* Description:    dump SCCTRL/AO_SCCTRL/PMCTRL register about JPU power on/off,
                  rst en/dis, clk en/dis.
* Data Accessed:
* Data Updated:
* Input:          NA
* Output:
* Return:          0
* Others:
***********************************************************************************/
#ifdef DUMP_JPU_POWER_REG
static void jpu_dump_power_reg(int power)
{
    unsigned int reg_value;

    reg_value = phy_reg_readl(SOC_AO_SCTRL_BASE_ADDR, SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_AO_SCTRL_SC_PW_MTCMOS_STAT0_ADDR = 0x%0x, VIDEO_HARDEN, BIT[2].\n", reg_value);

    reg_value = phy_reg_readl(SOC_PMCTRL_BASE_ADDR, SOC_PMCTRL_MEDPLLCTRL_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_PMCTRL_MEDPLLCTRL_ADDR = 0x%0x, MEDPLL, BIT[0].\n", reg_value);

    if (1 == power) {
        reg_value = phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR, SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(0), 0, 31);
        jpu_logi("[JPUDRV] SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR = 0x%0x, JPU, BIT[7][3:0].\n", reg_value);

        reg_value = phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR, SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(0), 0, 31);
        jpu_logi("[JPUDRV] SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR = 0x%0x, JPU, BIT[23][19:16].\n", reg_value);
    }

    reg_value = phy_reg_readl(SOC_AO_SCTRL_BASE_ADDR, SOC_AO_SCTRL_SC_PW_RST_STAT0_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_AO_SCTRL_SC_PW_RST_STAT0_ADDR = 0x%0x, VIDEO_HARDEN, BIT[2].\n", reg_value);

    reg_value = phy_reg_readl(SOC_AO_SCTRL_BASE_ADDR, SOC_AO_SCTRL_SC_PW_ISO_STAT0_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_AO_SCTRL_SC_PW_ISO_STAT0_ADDR = 0x%0x, VIDEO_HARDEN, BIT[2].\n", reg_value);

    reg_value = phy_reg_readl(SOC_AO_SCTRL_BASE_ADDR, SOC_AO_SCTRL_SC_PW_CLK_STAT0_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_AO_SCTRL_SC_PW_CLK_STAT0_ADDR = 0x%0x, VIDEO_HARDEN, BIT[2].\n", reg_value);

    if (1 == power) {
        reg_value = phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR, SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(0), 0, 31);
        jpu_logi("[JPUDRV] SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR = 0x%0x, JPU, BIT[3].\n", reg_value);

        reg_value = phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR, SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(0), 0, 31);
        jpu_logi("[JPUDRV] SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR = 0x%0x, JPU, BIT[4].\n", reg_value);
    }

    reg_value = phy_reg_readl(SOC_AO_SCTRL_BASE_ADDR, SOC_AO_SCTRL_SC_PW_STAT1_ADDR(0), 0, 31);
    jpu_logi("[JPUDRV] SOC_AO_SCTRL_SC_PW_STAT1_ADDR = 0x%0x, VIDEO_HARDEN, BIT[23][22].\n", reg_value);
}
#endif

STATIC int jpu_regulator_enable(void)
{
    int ret = -1;

    jpu_logi("[JPUDRV] enter %s.\n", __func__);

    ret = video_harden_regulator_enable(VIDEO_HARDEN_DEV_ID_JPEG);
    if (0 != ret) {
        jpu_loge("[JPUDRV] video harden regulator enable failed!\n");
        return ret;
    }

    ret = jpu_clk_get();
    if (0 != ret) {
        jpu_loge("[JPUDRV] get jpu clock failed!\n");
        goto err;
    }

    ret = jpu_pll_clk_enable();
    if ( 0 != ret ) {
        jpu_loge("[JPUDRV] jpu pll clk enable failed!");
        goto err;
    }

    /*for common image, z62576, 20140429, begin*/
    /* MEDIA_SC JPU clock DIV [0xCC4] */
    if (0 != clk_set_rate(s_jpu_clk.clk_codec_jpu, s_jpu_clk.clk_freq)) {
       jpu_loge("[JPUDRV] clk_codec_jpu set rate failed.\n");
       goto err;
    }
    /*for common image, z62576, 20140429, end*/

    ret = video_harden_rstdis_isodis_clken(VIDEO_HARDEN_DEV_ID_JPEG);
    if (0 != ret) {
       jpu_loge("[JPUDRV] video harden rstdis_iso_dis_clken failed!\n");
       goto err;
    }

    /* MEDIA_SC JPU RST DIS [0x530]: disable JPU HARDEN soft reset */
    phy_reg_writel(SOC_MEDIA_SCTRL_BASE_ADDR,
                  SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_ADDR(CALC_REG_OFFSET),
                  SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_START,
                  SOC_MEDIA_SCTRL_SC_MEDIA_RSTDIS_media_rstdis_codec_jpeg_END,
                  0x1);

    ret = jpu_clk_enable();
    if (0 != ret) {
       jpu_loge("[JPUDRV] jpu clk enable failed!\n");
       goto err;
    }

    ret = video_harden_video_noc_enable(VIDEO_HARDEN_DEV_ID_JPEG);
    if (0 != ret) {
       jpu_loge("[JPUDRV] video_harden_video_noc_enable failed!\n");
       goto err;
    }

    s_jpu_qos_virt_addr = ioremap(SOC_MEDIANOC_SERVICE_VIDEO_BASE_ADDR, PAGE_ALIGN(SZ_8K));
    jpu_logi("[JPUDRV] qos phy addr=0x%x, qos vir addr=%pK\n", SOC_MEDIANOC_SERVICE_VIDEO_BASE_ADDR, s_jpu_qos_virt_addr);

    if (s_jpu_qos_virt_addr)
    {
        /* MEDNOC SERVICE VIDEO Qos [0x20C]: JPU fixed Mode */
        iowrite32(0x0, s_jpu_qos_virt_addr+0x20c);

        /* MEDNOC SERVICE VIDEO Qos [0x208]: JPU priority */
        iowrite32(0x0303, s_jpu_qos_virt_addr+0x208);

        iounmap((void *)s_jpu_qos_virt_addr);
    }

#ifdef DUMP_JPU_POWER_REG
    jpu_dump_power_reg(1);
#endif

    jpu_logi("[JPUDRV] regulator enable sucessful.\n");

    return 0;

err:
   jpu_loge("[JPUDRV] regulator enable failed!\n");
   jpu_regulator_disable();
   return -1;
}


STATIC void jpu_regulator_disable(void)
{
    jpu_logi("[JPUDRV] enter. jpu regulator disable.\n");

    video_harden_video_noc_disable(VIDEO_HARDEN_DEV_ID_JPEG);

    jpu_clk_disable();

    /* MEDIA_SC SC_MEDIA_RSTEN [0x52C]: enable JPU HARDDIS soft reset */
    phy_reg_writel(SOC_MEDIA_SCTRL_BASE_ADDR,
                   SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_ADDR(CALC_REG_OFFSET),
                   SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_START,
                   SOC_MEDIA_SCTRL_SC_MEDIA_RSTEN_media_rsten_codec_jpeg_END,
                   0x1);

    video_harden_clkdis_isoen_rsten(VIDEO_HARDEN_DEV_ID_JPEG);

    jpu_pll_clk_disable();

    video_harden_regulator_disable(VIDEO_HARDEN_DEV_ID_JPEG);

    jpu_clk_put();

#ifdef DUMP_JPU_POWER_REG
    jpu_dump_power_reg(0);
#endif

    jpu_logi("[JPUDRV] jpu regulator disable sucessful.\n");

}


STATIC int jpu_clk_get(void)
{
    int ret = -1;

    struct device_node *np = NULL;
    struct platform_device *pdev=NULL;
    struct device *dev = NULL;

    jpu_logi("[JPUDRV] enter. jpu_clk_get.\n");
    np = of_find_compatible_node(NULL, NULL, "hisi,cnm_jpu");
    if (np == NULL) {
        jpu_loge("[JPUDRV] the device node cnm_jpu is null\n");
        return ret;
    }

    pdev = of_find_device_by_node(np);
    if (pdev == NULL) {
        jpu_loge("[JPUDRV] the device cnm_jpu is null\n");
        return ret;
    }
    dev = &pdev->dev;

    /* 1. must enable clk_medpll_src_gated before all media_sctrl handle
       2. must disalbe clk_medpll_src_gated after all media_sctrl handle */
    /* get medpll src gated handle */
    s_jpu_clk.clk_medpll_src_gated = clk_get(dev, "CLK_MEDPLL_SRC_GATED");
    if (IS_ERR(s_jpu_clk.clk_medpll_src_gated))
    {
        jpu_loge("[JPUDRV] jpu_clk_get:get clk_medpll_src_gated failed.\n");
        return ret;
    }

    /* get JPU config clock */
    s_jpu_clk.pclk_codec_jpu = clk_get(dev, "PCLK_CODEC_JPEG");
    if (IS_ERR(s_jpu_clk.pclk_codec_jpu))
    {
        jpu_loge("[JPUDRV] jpu_clk_get:get PCLK_CODEC_JPEG clock failed.\n");
        return ret;
    }

    /* get JPU AXI clock */
    s_jpu_clk.aclk_codec_jpu = clk_get(dev, "ACLK_CODEC_JPEG");
    if (IS_ERR(s_jpu_clk.aclk_codec_jpu))
    {
        jpu_loge("[JPUDRV] jpu_clk_get:get ACLK_CODEC_JPU clock failed.\n");
        return ret;
    }

    /* get JPU clock */
    s_jpu_clk.clk_codec_jpu = clk_get(dev, "CLK_CODEC_JPEG");
    if (IS_ERR(s_jpu_clk.clk_codec_jpu)) {
        jpu_loge("[JPUDRV] jpu_clk_get:get CLK_CODEC_JPU clock failed.\n");
        return ret;
    }

    /*for common image, z62576, 20140429, begin*/
    if (of_property_read_u32(np, "JPU_CORE_CLOCK_FREQ", &(s_jpu_clk.clk_freq))){
        jpu_loge("[JPUDRV] %s: read JPU_CORE_CLOCK_FREQ error\n", __func__);
        return ret;
    }
    jpu_logi("[JPUDRV] %s: read JPU_CORE_CLOCK_FREQ: %u.\n", __func__, s_jpu_clk.clk_freq);

    if (of_property_read_u32(np, "JPU_WAIT_TIMEOUT_COEFF", &(s_jpu_clk.wait_timeout_coeff))){
        jpu_loge("[JPUDRV] %s: read JPU_WAIT_TIMEOUT_COEFF error\n", __func__);
        return ret;
    }
    jpu_logi("[JPUDRV] %s: read JPU_WAIT_TIMEOUT_COEFF: %u.\n", __func__, s_jpu_clk.wait_timeout_coeff);
    /*for common image, z62576, 20140429, end*/

    jpu_logi("[JPUDRV] jpu_clk_get is successful.\n");

    return 0;
}

STATIC void jpu_clk_put(void)
{

    jpu_logi("[JPUDRV] enter. jpu_clk_put.\n");

    /* release JPU clock */
    if (NULL != s_jpu_clk.clk_codec_jpu)
    {
        clk_put(s_jpu_clk.clk_codec_jpu);
        s_jpu_clk.clk_codec_jpu = NULL;
    }

    /* release JPU AXI clock */
    if (NULL != s_jpu_clk.aclk_codec_jpu)
    {
        clk_put(s_jpu_clk.aclk_codec_jpu);
        s_jpu_clk.aclk_codec_jpu = NULL;
    }

    /* release JPU config */
    if (NULL != s_jpu_clk.pclk_codec_jpu)
    {
        clk_put(s_jpu_clk.pclk_codec_jpu);
        s_jpu_clk.pclk_codec_jpu = NULL;
    }

    /* release medpll src gated */
    if (NULL != s_jpu_clk.clk_medpll_src_gated)
    {
        clk_put(s_jpu_clk.clk_medpll_src_gated);
        s_jpu_clk.clk_medpll_src_gated = NULL;
    }

    jpu_logi("[JPUDRV] jpu_clk_put is successful.\n");

    return;

}

STATIC int jpu_clk_enable(void)
{
    int ret = -1;


    jpu_logi("[JPUDRV] enter jpu clock enable.\n");
    /* enbale JPU pixel clk */
    if (0 != clk_prepare_enable(s_jpu_clk.pclk_codec_jpu))
    {
        jpu_loge("[JPUDRV] pclk_codec_jpu enable failed!.\n");
        jpu_clk_disable();
        return ret;
    }
    s_jpu_clk.pclk_codec_jpu_bit  = 1;


    /* enable JPU Axi clk */
    if (0 != clk_prepare_enable(s_jpu_clk.aclk_codec_jpu))
    {
        jpu_loge("[JPUDRV] aclk_codec_jpu enable failed!.\n");
        jpu_clk_disable();
        return ret;
    }
    s_jpu_clk.aclk_codec_jpu_bit  = 1;


    /* enable JPU clk */
    if (0 != clk_prepare_enable(s_jpu_clk.clk_codec_jpu))
    {
        jpu_loge("[JPUDRV] clk_codec_jpu enable failed!.\n");
        jpu_clk_disable();
        return ret;
    }
    s_jpu_clk.clk_codec_jpu_bit   = 1;

    jpu_logi("[JPUDRV] jpu_clk_enable is successful.\n");

    return 0;
}

STATIC void jpu_clk_disable(void)
{
    jpu_logi("[JPUDRV] enter jpu clock disable.\n");

    /* JPU clk disable */
    if ( (NULL != s_jpu_clk.clk_codec_jpu) && (1 == s_jpu_clk.clk_codec_jpu_bit) )
    {
        clk_disable_unprepare(s_jpu_clk.clk_codec_jpu);
        s_jpu_clk.clk_codec_jpu_bit = 0;
    }

    /* JPU AXI clk disable */
    if ( (NULL != s_jpu_clk.aclk_codec_jpu) && (1 == s_jpu_clk.aclk_codec_jpu_bit) )
    {
        clk_disable_unprepare(s_jpu_clk.aclk_codec_jpu);
        s_jpu_clk.aclk_codec_jpu_bit= 0;
    }

    /* JPU pixel clk disable */
    if ( (NULL != s_jpu_clk.pclk_codec_jpu) && (1 == s_jpu_clk.pclk_codec_jpu_bit) )
    {
        clk_disable_unprepare(s_jpu_clk.pclk_codec_jpu);
        s_jpu_clk.pclk_codec_jpu_bit = 0;
    }

    jpu_logi("[JPUDRV] jpu_clk_disable is successful.\n");

    return;

}

STATIC int jpu_pll_clk_enable(void)
{
    int ret = -1;

    jpu_logi("[JPUDRV] enter jpu pll clock enable.\n");

    /* medpll src gated enable */
    if (0 != clk_prepare_enable(s_jpu_clk.clk_medpll_src_gated))
    {
        jpu_loge("[JPUDRV] clk_medpll_src_gated enable failed!.\n");
        jpu_pll_clk_disable();
        return ret;
    }
    s_jpu_clk.clk_medpll_src_gated_bit= 1;

    jpu_logi("[JPUDRV] jpu_pll_clk_enable is successful.\n");

    return 0;

}

STATIC void jpu_pll_clk_disable(void)
{
    jpu_logi("[JPUDRV] jpu pll clock disable.\n");

    /* medpll src gated disable */
    if ((NULL != s_jpu_clk.clk_medpll_src_gated) && (1 == s_jpu_clk.clk_medpll_src_gated_bit))
    {
        clk_disable_unprepare(s_jpu_clk.clk_medpll_src_gated);
        s_jpu_clk.clk_medpll_src_gated_bit = 0;
    }

    jpu_logi("[JPUDRV] jpu_pll_clk_disable is successful.\n");

    return;
}

#if 0
STATIC void jpu_regulator_open_dump(void)
{
    unsigned int regTmp = 0xffff;
    unsigned int regExpect = 0x0;
    int errFlag = 0;
    int *pPanic =NULL;
    int ret = 0;


    ret = down_interruptible(&jpu_busy_lock);
    if (0 != ret) {
        jpu_loge("down_interruptible() failed.");
        return;
    }

    jpu_logd("jpu regulator dump ======>\n");

    /*================== PMCTRL MEDPLLCTRL [0x038]: 初始化PLL ==================*/
    regTmp =  phy_reg_readl(SOC_PMCTRL_BASE_ADDR,
                            SOC_PMCTRL_MEDPLLCTRL_ADDR(CALC_REG_OFFSET),
                            SOC_PMCTRL_MEDPLLCTRL_medpll_en_START,
                            SOC_PMCTRL_MEDPLLCTRL_medpll_en_END);
    jpu_logd("MEDPLLCTRL = 0x%x, addr=0x%x\n", regTmp,
    (SOC_PMCTRL_BASE_ADDR+SOC_PMCTRL_MEDPLLCTRL_ADDR(CALC_REG_OFFSET)));
    regExpect = 0x1;
#if 1
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDPLLCTRL = 0x%x, expect=0x%x\n", regTmp, regExpect);
        errFlag = -1;
    }
#endif
    regExpect = 0x0;
    regTmp = 0xffff;


    /*================== MEDIA_SC NOC CLK DIV [0xCBC] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_START,
                            3);
                            //SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_END);
    jpu_logd("MEDIA CLKCFG2: NOC CLK DIV = 0x%x, addr=0x%x\n", regTmp,
        (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET)));
    regExpect = 5;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLKCFG2: NOC CLK DIV = 0x%x, expect=0x%x\n", regTmp, regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;

    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_vld0_END);
    jpu_logd("MEDIA CLKCFG2: NOC CLK DIV's para valid flag = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET)));
    regExpect = 0x1;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLKCFG2: NOC CLK DIV's para valid flag = 0x%x\n", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;


    /*================== MEDIA_SC JPU DIV [0xCC4] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_START,
                            19);
    jpu_logd("MEDIA CLKCFG2: JPU CLK DIV = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(CALC_REG_OFFSET)));
    regExpect = 5;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLKCFG2: JPU CLK DIV = 0x%x\n", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;

    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_vld2_START);
    jpu_logd("MEDIA CLKCFG2: jpu CLK DIV's para valid flag = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(CALC_REG_OFFSET)));
    regExpect = 0x1;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLKCFG2: jpu CLK DIV's para valid flag = 0x%x\n", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;

    /*================== AO_SC PW MTCMOS STAT [0x838] ==================*/
    /*================== AO_SC PW CLK STAT [0x808] ==================*/
    /*================== AO_SC PW ISO STAT [0x828] ==================*/
    /*================== AO_SC PW RST STAT [0x818] ==================*/
    ret = video_harden_regen_rstdis_isodis_clken_check(VIDEO_HARDEN_DEV_ID_VCODEC);
    if (ret != 0) {
        errFlag = -1;
    }


    /*================== MEDIA_SC JPU RST STAT [0x534] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_END);
    jpu_logd("MEDIA RST STAT: codec_jpu = 0x%x, addr=0x%x\n", regTmp,
        (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(CALC_REG_OFFSET)));

    regExpect = 0x0;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA RST STAT: codec_jpu = 0x%x\n", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;


    /*================== MEDIA_SC JPU (DIV PRE)GATING STAT [0x528] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_END);
    jpu_logd("MEDIA CLK STAT: (DIV PRE)media_gating_codec_jpu = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(CALC_REG_OFFSET)));

    regExpect = 0x1;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLK STAT: (DIV PRE)media_gating_codec_jpu = 0x%x", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;


    up(&jpu_busy_lock);

    if(errFlag == 0) {
        return;
    }

    jpu_loge("###########################jPU power on flow err!###########################");

    *pPanic =1;
}

STATIC void jpu_regulator_release_dump(void)
{
    unsigned int regTmp = 0xffff;
    unsigned int regExpect = 0x0;
    int errFlag = 0;
    int *pPanic =0;
    int ret = 0;


    ret = down_interruptible(&jpu_busy_lock);
    if (0 != ret)
    {
        jpu_loge("down_interruptible() failed.");
        return;
    }

    jpu_logd("jpu regulator release dump ======>\n");

    /*================== PMCTRL MEDPLLCTRL [0x038]: 初始化PLL ==================*/
    regTmp =  phy_reg_readl(SOC_PMCTRL_BASE_ADDR,
                            SOC_PMCTRL_MEDPLLCTRL_ADDR(CALC_REG_OFFSET),
                            SOC_PMCTRL_MEDPLLCTRL_medpll_en_START,
                            SOC_PMCTRL_MEDPLLCTRL_medpll_en_END);
    jpu_logd("MEDPLLCTRL = 0x%x, addr=0x%x\n", regTmp,
    (SOC_PMCTRL_BASE_ADDR+SOC_PMCTRL_MEDPLLCTRL_ADDR(CALC_REG_OFFSET)));
    regTmp = 0xffff;


    /*================== MEDIA_SC NOC CLK DIV [0xCBC] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_START,
                            3);
                            //SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_media_clkcfg0_noc_value0_END);
    jpu_logd("MEDIA CLKCFG2: NOC CLK DIV = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET)));
    regTmp = 0xffff;


    /*================== MEDIA_SC JPU DIV [0xCC4] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG2_media_clkcfg2_codec_jpeg_value2_START,
                            19);
    jpu_logd("MEDIA CLKCFG2: JPU CLK DIV = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLKCFG0_ADDR(CALC_REG_OFFSET)));


    /*================== AO_SC PW MTCMOS STAT [0x838] ==================*/
    /*================== AO_SC PW CLK STAT [0x808] ==================*/
    /*================== AO_SC PW ISO STAT [0x828] ==================*/
    /*================== AO_SC PW RST STAT [0x818] ==================*/
    ret = video_harden_regdis_clkdis_isoen_rsten_check(VIDEO_HARDEN_DEV_ID_VCODEC);
    if ( ret != 0) {
        errFlag = -1;
    }


    /*================== MEDIA_SC JPU RST STAT [0x534] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_media_rst_stat_codec_jpeg_START);
    jpu_logd("MEDIA RST STAT: codec_jpu = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_RST_STAT_ADDR(CALC_REG_OFFSET)));

    regExpect = 0x1;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA RST STAT: codec_jpu = 0x%x\n", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;


    /*================== MEDIA_SC jPU (DIV PRE)GATING STAT [0x528] ==================*/
    regTmp =  phy_reg_readl(SOC_MEDIA_SCTRL_BASE_ADDR,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(CALC_REG_OFFSET),
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_START,
                            SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_media_clken_codec_jpeg_clk_stat_START);
    jpu_logd("MEDIA CLK STAT: (DIV PRE)media_gating_codec_jpu = 0x%x, addr=0x%x\n", regTmp,
    (SOC_MEDIA_SCTRL_BASE_ADDR+SOC_MEDIA_SCTRL_SC_MEDIA_CLK_STAT_ADDR(CALC_REG_OFFSET)));

    regExpect = 0x0;
    if (regTmp != regExpect) {
        jpu_loge("ERR:MEDIA CLK STAT: (DIV PRE)media_gating_codec_jpu = 0x%x", regExpect);
        errFlag = -1;
    }
    regExpect = 0x0;
    regTmp = 0xffff;

    up(&jpu_busy_lock);

    if(errFlag == 0) {
        return;
    }

    jpu_loge("###########################jPU power off flow err!###########################");

    (*(int *)pPanic) =1;

}

#endif

module_init(jpu_init);
module_exit(jpu_exit);

MODULE_AUTHOR("A customer using C&M JPU, Inc.");
MODULE_DESCRIPTION("JPU linux driver");
MODULE_LICENSE("GPL");
