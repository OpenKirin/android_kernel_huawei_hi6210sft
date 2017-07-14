
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
#include <linux/regulator/driver.h>

/* added by xwx271409 for DTS2015083108688 at 2015.09.28 to match 32-bit user space and 64-bit kernel space begin */
#include <linux/compat.h>
#include <linux/fs.h>
#include <linux/uaccess.h>
/* added by xwx271409 for DTS2015083108688 at 2015.09.28 to match 32-bit user space and 64-bit kernel space end */

#include <linux/of_address.h>
#include <linux/module.h>
#include "jpu.h"

#define JPU_PLATFORM_DEVICE_NAME "hisilicon,k3jpeg"
#define JPU_DEV_NAME "jpu"
#define JPU_LDO_NAME "ldo_jpu"

//hisi l00206966 @modify begin
#define JPU_INSTANCE_POOL_SIZE 102400   //added by lwx215919 for DTS2015020303144 at 2015.02./03
//hisi l00206966 @modify end
#define JPU_PHYSICAL_POOL_SIZE 98360
typedef struct jpu_drv_context_t {
    struct fasync_struct *async_queue;
} jpu_drv_context_t;

/* To track the allocated memory buffer */
typedef struct jpudrv_buffer_pool_t {
    struct list_head list;
    struct jpudrv_buffer_t jb;
} jpudrv_buffer_pool_t;

static struct regulator_bulk_data jpu_regulator = {0};

#ifndef VM_RESERVED
#define VM_RESERVED (VM_DONTEXPAND | VM_DONTDUMP)
#endif

// end customer definition

static jpudrv_buffer_t s_instance_pool = {0};
static jpu_drv_context_t s_jpu_drv_context = {0};
static int s_jpu_major = 0;
//hisi l00206966 @add begin
struct class *jpu_class  =NULL;
struct device *s_jpu_dev = NULL;
//hisi l00206966 @add end
static u32 s_jpu_open_count = 0;
static int s_jpu_irq          = 0;
static void __iomem *s_jpu_reg_virt_base = NULL;

static int s_interrupt_flag = 0;
static wait_queue_head_t s_interrupt_wait_q;

static spinlock_t s_jpu_lock       = __SPIN_LOCK_UNLOCKED(s_jpu_lock);
static struct list_head s_jbp_head = LIST_HEAD_INIT(s_jbp_head);
static unsigned long midphy_addr = 0;   //added by lwx215919 for DTS2015020303144 at 2015.02.03

/* implement to power management functions */

static int jpu_alloc_dma_buffer(jpudrv_buffer_t *jb)
{
    if (NULL == jb)
    {
        printk(KERN_ERR "[JPUDRV] invalid parameter jb (null) in function[%s].",__func__);
        return -1;
    }

    if (JPU_PHYSICAL_POOL_SIZE != jb->size)
    {
        printk(KERN_ERR "[JPUDRV] not support malloc %d bytes.", jb->size);
        return -1;
    }

    //modified by xwx271409 for DTS2015033104067 to update to Andorid 5.1 end
#ifdef CONFIG_ARM64
    jb->base = (unsigned long)dma_alloc_coherent(s_jpu_dev, PAGE_ALIGN(jb->size), (dma_addr_t *) (&jb->phys_addr), GFP_DMA | GFP_KERNEL);
#else
    jb->base = (unsigned long)dma_alloc_coherent(NULL, PAGE_ALIGN(jb->size), (dma_addr_t *) (&jb->phys_addr), GFP_DMA | GFP_KERNEL);
#endif
	//modified by xwx271409 for DTS2015033104067 to update to Andorid 5.1 end
    if ((void *)(jb->base) == NULL)
    {
        printk(KERN_ERR "[JPUDRV] Physical memory allocation error size=%d\n", jb->size);
        return -1;
    }
    printk(KERN_INFO "[JPUDRV] Physical memory jb->phys_addr=0x%lx,jb->base=0x%lx\n", jb->phys_addr,jb->base);  //added log by xwx271409 at 2015.08.24
    midphy_addr = jb->phys_addr;    //added by lwx215919 for DTS2015020303144 at 2015.02.03

    /* added by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space */
    printk(KERN_INFO "[JPUDRV] Physical memory allocation jb->phys_addr=0x%llx,jb->base:0x%lx\n", jb->phys_addr, jb->base);
    return 0;
}

static void jpu_free_dma_buffer(jpudrv_buffer_t *jb)
{
    if (NULL==jb)
    {
        printk(KERN_ERR "[JPUDRV] jb has freed, don't free again\n");
        return ;
    }

    if (jb->base)
    {
        dma_free_coherent(0, PAGE_ALIGN(jb->size), (void *)jb->base, jb->phys_addr);
        //added by lwx215919 for DTS2015020303144 at 2015.02.03 begin
		if(midphy_addr)
			midphy_addr = 0;
        //added by lwx215919 for DTS2015020303144 at 2015.02.03 end 
    }
}

static int jpu_free_buffers(void)
{
    jpudrv_buffer_pool_t *pool =NULL, *n =NULL;
    jpudrv_buffer_t jb = {0};

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

static irqreturn_t jpu_irq_handler(int irq, void *dev_id)
{
    jpu_drv_context_t *dev = (jpu_drv_context_t *)dev_id;
    disable_irq_nosync(s_jpu_irq);

    if (dev->async_queue)
        kill_fasync(&dev->async_queue, SIGIO, POLL_IN); // notify the interrupt to userspace

    s_interrupt_flag = 1;
    wake_up_interruptible(&s_interrupt_wait_q);
    return IRQ_HANDLED;
}

static int jpu_open(struct inode *inode, struct file *filp)
{
    printk(KERN_INFO "[JPUDRV] jpu_open\n");
    spin_lock(&s_jpu_lock);
    s_jpu_open_count++;

    filp->private_data = (void *)(&s_jpu_drv_context);
    spin_unlock(&s_jpu_lock);
    return 0;
}

static long jpu_ioctl(struct file *filp, u_int cmd, u_long arg)
{
    int ret = 0;
    u32 timeout =0;

    if (NULL == filp || 0 == arg) {
        return -EFAULT;
    }

    if (_IOC_NR(cmd) > JDI_IOCTL_MAXDR) {
        return -ENOTTY;
    }

    switch (cmd)
    {
    case JDI_IOCTL_WAIT_INTERRUPT:
        {
            timeout = (u32) arg;
            if (!wait_event_interruptible_timeout(s_interrupt_wait_q, s_interrupt_flag != 0, msecs_to_jiffies(timeout)))
            {
                ret = -ETIME;
                break;
            }

            s_interrupt_flag = 0;
            enable_irq(s_jpu_irq);
        }
        break;
    case JDI_IOCTL_SET_CLOCK_GATE:
        {
            u32 clkgate = 0;
            if (get_user(clkgate, (u32 __user *) arg))
            {
                printk(KERN_INFO "[JPUDRV] invalid parameter in JDI_IOCTL_SET_CLOCK_GATE \n");
                return -EFAULT;
            }

            printk(KERN_INFO "[JPUDRV] to operate jpu regulator  = %d\n", clkgate);

            if (clkgate)
            {
                if (regulator_bulk_enable(1, &jpu_regulator))
                {
                    printk(KERN_ERR "[JPUDRV] failed to enable jpu regulators\n");
                    return -EFAULT;
                }
            } else
            {
                if(regulator_bulk_disable(1, &jpu_regulator))
                {
                    printk(KERN_ERR "[JPUDRV] failed to disable jpu regulators\n");
                    return -EFAULT;
                }
            }

        }
        break;
    case JDI_IOCTL_GET_INSTANCE_POOL:
        {
            spin_lock(&s_jpu_lock);
            if (s_instance_pool.base != 0)
            {
                /* added by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space */
                printk(KERN_INFO "[JPUDRV] Get the old memory, s_instance_pool.base:0x%lx\n", s_instance_pool.base);
                ret = copy_to_user((void __user *)arg, &s_instance_pool, sizeof(jpudrv_buffer_t));
                if (ret != 0)
                    ret = -EFAULT;

                spin_unlock(&s_jpu_lock);
            }
            else
            {
                /* added by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space */
                printk(KERN_INFO "[JPUDRV] Alloc the new memory\n");
                ret = copy_from_user(&s_instance_pool, (jpudrv_buffer_t *)arg, sizeof(jpudrv_buffer_t));
                spin_unlock(&s_jpu_lock);

                if (ret == 0)
                {
                    if (JPU_PHYSICAL_POOL_SIZE != s_instance_pool.size)
                    {
                         printk(KERN_ERR "[JPUDRV] invalid parameter[%u] to get instance pool\n", s_instance_pool.size);
                         s_instance_pool.base = 0x0;
                         return -EFAULT;
                    }

                    printk(KERN_INFO "[JPUDRV] alloc new memory\n");    //added log by xwx271409 at 2015.08.24
                    if (jpu_alloc_dma_buffer(&s_instance_pool) != -1)
                    {
                        memset((void *)s_instance_pool.base, 0x0, s_instance_pool.size);
                        ret = copy_to_user((void __user *)arg, &s_instance_pool, sizeof(jpudrv_buffer_t));
                        if (ret == 0)
                        {
                            // success to get memory for instance pool
                            //spin_unlock(&s_jpu_lock);
                            break;
                        }
                    }
                }
                printk(KERN_INFO "[JPUDRV] alloc new memory failure\n");  //added log by xwx271409 at 2015.08.24
                ret = -EFAULT;
            }
        }
        break;
    default:
        {
            printk(KERN_ERR "No such IOCTL, cmd is %d\n", cmd);
        }
        break;
    }
    return ret;
}

/* added by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space begin */
#ifdef CONFIG_COMPAT
long compat_get_jpudrv_data(void __user *data, void __user *data32)
{

    long ret = 0;
    unsigned int ui = 0;
    unsigned long long ull =0;
    compat_ulong_t ul = 0;

    ret  = get_user(ui, &(((compat_jpudrv_buffer_t *)data32)->size));
    ret |= put_user(ui, &(((jpudrv_buffer_t *)data)->size));
    ret |= get_user(ull, &(((compat_jpudrv_buffer_t *)data32)->phys_addr));
    ret |= put_user(ull, &(((jpudrv_buffer_t *)data)->phys_addr));
    ret |= get_user(ull, &(((compat_jpudrv_buffer_t *)data32)->base));
    ret |= put_user(ull, &(((jpudrv_buffer_t *)data)->base));
    ret |= get_user(ul, &(((compat_jpudrv_buffer_t *)data32)->virt_addr));
    ret |= put_user(ul, &(((jpudrv_buffer_t *)data)->virt_addr));

    return ret;
}

long compat_put_jpudrv_data(void __user *data32, void __user *data)
{
    long ret = 0;
    unsigned int ui = 0;
    unsigned long long ull =0;
    compat_ulong_t ul = 0;

    ret  = get_user(ui, &(((jpudrv_buffer_t *)data)->size));
    ret |= put_user(ui, &(((compat_jpudrv_buffer_t *)data32)->size));
    ret |= get_user(ull, &(((jpudrv_buffer_t *)data)->phys_addr));
    ret |= put_user(ull, &(((compat_jpudrv_buffer_t *)data32)->phys_addr));
    ret |= get_user(ull, &(((jpudrv_buffer_t *)data)->base));
    ret |= put_user(ull, &(((compat_jpudrv_buffer_t *)data32)->base));
    ret |= get_user(ul, &(((jpudrv_buffer_t *)data)->virt_addr));
    ret |= put_user(ul, &(((compat_jpudrv_buffer_t *)data32)->virt_addr));

    return ret;
}

static long jpu_compat_ioctl(struct file *filp, u_int cmd, u_long arg)
{
    long ret = 0;
    void __user *data32 = NULL;
    void __user *data = NULL;
    data32 = compat_ptr(arg);

    switch (cmd)
    {
        case JDI_IOCTL_GET_INSTANCE_POOL:
        {
            printk(KERN_INFO "[JPUDRV] in function:%s, line:%d\n", __FUNCTION__, __LINE__);
            if (NULL == data32)
            {
                printk(KERN_ERR "invalid parameter arg.");
                return -1;
            }
            data = compat_alloc_user_space(sizeof(jpudrv_buffer_t));
            if (NULL == data)
                return -EFAULT;

            ret = compat_get_jpudrv_data(data, data32);
            if (0 != ret)
                return ret;

            ret = jpu_ioctl(filp, cmd, (unsigned long)data);
            if (0 != ret)
                return ret;

            ret = compat_put_jpudrv_data(data32, data);

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
/* added by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space end */

static int jpu_release(struct inode *inode, struct file *filp)
{
    printk(KERN_INFO "[JPUDRV] jpu_release\n");
    spin_lock(&s_jpu_lock);
    s_jpu_open_count--;

    if (s_jpu_open_count <= 0)
    {
        /* found and free the not handled buffer by user applications */
        jpu_free_buffers();
    }

    spin_unlock(&s_jpu_lock);
    return 0;
}

//hisi l00206966 @modify begin
static int jpu_map_to_physical_memory(struct file *fp, struct vm_area_struct *vm)
{
    //added by lwx215919 for DTS2015020303144 at 2015.02.03 begin
    unsigned long start = vm->vm_start;
    unsigned int size = vm->vm_end - start;
    unsigned long pyhs_start = vm->vm_pgoff << PAGE_SHIFT;
    if((pyhs_start != midphy_addr && pyhs_start != JPU_BASE_ADDR)
       || (pyhs_start ==  midphy_addr && size != JPU_INSTANCE_POOL_SIZE)
       || (pyhs_start == JPU_BASE_ADDR && (size - 1) != JPU_REG_SIZE))
   {
        printk(KERN_ERR "error pyhs_addr == [%lu],size == [%d] midphy_addr == [%lu] \n",pyhs_start,size,midphy_addr);
        return -EAGAIN;
    }
    //added by lwx215919 for DTS2015020303144 at 2015.02.03 end
    vm->vm_flags |= VM_IO | VM_RESERVED;
    vm->vm_page_prot = pgprot_noncached(vm->vm_page_prot);

    return remap_pfn_range(vm, vm->vm_start, vm->vm_pgoff, vm->vm_end-vm->vm_start, vm->vm_page_prot) ? -EAGAIN : 0;
}

/*!
 * @brief memory map interface for jpu file operation
 * @return  0 on success or negative error code on error
 */
static int jpu_mmap(struct file *fp, struct vm_area_struct *vm)
{
    if (NULL == vm)
    {
        jpu_loge("[JPUDRV] invalid vm(null) in jpu_map_to_register.\n");
        return -1;
    }
    printk(KERN_INFO "[JPUDRV]  jpu_map_to_physical_memory\n");
    return jpu_map_to_physical_memory(fp, vm);
}
//hisi l00206966 @modify end
struct file_operations jpu_fops = {
    .owner          = THIS_MODULE,
    .open           = jpu_open,
/* modifed by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space begin */
    .unlocked_ioctl = jpu_ioctl,
#ifdef CONFIG_COMPAT
    .compat_ioctl = jpu_compat_ioctl,
#endif //CONFIG_COMPAT
/* modifed by xwx271409 for DTS2015083108688 to match 32-bit user space and 64-bit kernel space end */
    .release        = jpu_release,
    .mmap           = jpu_mmap,
};

static int jpu_setup_cdev(void)
{
    unsigned int minor = 0;
    struct device *dev = NULL;

    printk(KERN_INFO "[JPUDRV] :in jpu_setup_cdev\n");
    dev = device_create(jpu_class, 0, MKDEV(s_jpu_major, minor), NULL, JPU_DEV_NAME);
    if (NULL == dev)
    {
        printk(KERN_ERR "[JPUDRV] : Can't create device\n");
        return -ENOMEM;
    }

    s_jpu_dev = dev;
    return 0;
}

static int jpu_probe(struct platform_device *pdev)
{
    int err = 0;

    if (NULL == pdev)
    {
        vpu_loge("jpu_probe fail, pdev is NULL\n");
        return -1;
    }

    struct device *dev       = &pdev->dev;
    struct device_node *node = dev->of_node;
    u8 __iomem *reset_mmio1 = NULL;
    reset_mmio1 = ioremap(0xfff35000,4);
    u8 __iomem *reset_mmio2 = NULL;
    reset_mmio2 = ioremap(0xfff31000,4);
    printk(KERN_ERR "[JPUDRV] jpu_probe\n");

    if (!node) {
        printk(KERN_INFO "[JPUDRV] NOT FOUND device node %s!\n", JPU_PLATFORM_DEVICE_NAME);
        goto ERROR_PROVE_DEVICE;
    }
    printk(KERN_INFO "[JPUDRV] jpu_probe node name = %s \n",node->name);

    jpu_regulator.supply = JPU_LDO_NAME;
    err = regulator_bulk_get(dev, 1, &jpu_regulator);
    if (err){
        printk(KERN_ERR "[JPUDRV] couldn't get regulators jpu %d\n", err);
        goto ERROR_PROVE_DEVICE;
    }

    s_jpu_reg_virt_base = of_iomap(node, 0);
    if (!s_jpu_reg_virt_base)
    {
        printk(KERN_ERR "[JPUDRV] : jpu base address get failed!\n");
        goto ERROR_PROVE_DEVICE;
    }
    printk(KERN_INFO "[JPUDRV] : jpu base address get from defined value base virtualbase=0x%pK\n", s_jpu_reg_virt_base);

    /* get the major number of the character device */
    s_jpu_major = register_chrdev(s_jpu_major, JPU_DEV_NAME, &jpu_fops);
    if (s_jpu_major < 0)
    {
        printk(KERN_ERR "[JPUDRV] : fail to register driver\n");
        err = -EBUSY;
        goto ERROR_PROVE_DEVICE;
    }

    jpu_class=class_create(THIS_MODULE,JPU_DEV_NAME);
    if (NULL == jpu_class)
    {
        printk(KERN_ERR "[JPUDRV] : fail to create  driver\n");
        err =  -ENOMEM;
        goto ERROR_PROVE_DEVICE;
    }

    jpu_setup_cdev();
    if (NULL == s_jpu_dev)
    {
        printk(KERN_ERR "[JPUDRV] : Can't register char driver\n");
        goto ERROR_PROVE_DEVICE;
    }


    s_jpu_irq = irq_of_parse_and_map(node, 0);
    if (!s_jpu_irq)
    {
        printk(KERN_ERR "[JPUDRV] :  get jpu interrupt handler s_jpu_irq failed \n");
        goto ERROR_PROVE_DEVICE;
    }

    printk(KERN_INFO "[JPUDRV] :  interrupt handler s_jpu_irq = %d \n",s_jpu_irq);

    err = request_irq(s_jpu_irq, jpu_irq_handler, 0, "JPU_CODEC_IRQ", (void *)(&s_jpu_drv_context));
    if (err)
    {
        printk(KERN_ERR "[JPUDRV] :  fail to register interrupt handler\n");
        goto ERROR_PROVE_DEVICE;
    }

    printk(KERN_INFO "[JPUDRV] success to probe jpu device with non reserved video memory\n");

    return 0;
ERROR_PROVE_DEVICE:

    if (s_jpu_major){
        unregister_chrdev(s_jpu_major, JPU_DEV_NAME);
        s_jpu_major = 0;
    }

    if (s_jpu_reg_virt_base){
        iounmap(s_jpu_reg_virt_base);
        s_jpu_reg_virt_base = NULL;
    }

    if (s_jpu_irq){
        free_irq(s_jpu_irq, (void *)0);
        s_jpu_irq = 0;
    }

    return err;
}

static int jpu_remove(struct platform_device *pdev)
{
    return 0;
}

static int jpu_suspend(struct platform_device *pdev, pm_message_t state)
{
     printk("%s+.\n",__func__);
    //jpu_clk_disable(s_jpu_clk);
     printk("%s-.\n",__func__);
    return 0;

}

static int jpu_resume(struct platform_device *pdev)
{
     printk("%s+.\n",__func__);
    //jpu_clk_enable(s_jpu_clk);
     printk("%s-.\n",__func__);
    return 0;
}

static const struct of_device_id jpu_project_match_table[] = {
    {
        .compatible = JPU_PLATFORM_DEVICE_NAME,
        .data = NULL,
    },
    {
    },
};

static struct platform_driver jpu_driver = {
    .driver  = {
    .name    = JPU_PLATFORM_DEVICE_NAME,
    .owner   = THIS_MODULE,
    .of_match_table = of_match_ptr(jpu_project_match_table),
           },
    .probe   = jpu_probe,
    .remove  = jpu_remove,
    .suspend = jpu_suspend,
    .resume  = jpu_resume,
};

static int __init jpu_init(void)
{
    int res = 0;
    printk(KERN_INFO "jpu_init\n");

    init_waitqueue_head(&s_interrupt_wait_q);
    s_instance_pool.base = 0;
    res = platform_driver_register(&jpu_driver);

    printk(KERN_INFO "end jpu_init result=0x%x\n", res);
    return res;
}

static void __exit jpu_exit(void)
{
//hisi l00206966 @modify begin
    printk(KERN_INFO "jpu_exit s_jpu_open_count=%d\n", s_jpu_open_count);
    if (s_jpu_major > 0)
    {
        unregister_chrdev(s_jpu_major, JPU_DEV_NAME);
        s_jpu_major = 0;
    }

//hisi l00206966 @modify begin
    if (s_instance_pool.base)
    {
        printk(KERN_INFO "jpu_exit jpu_free_dma_buffer\n");
        jpu_free_dma_buffer(&s_instance_pool);
        s_instance_pool.base = 0;
    }

//hisi l00206966 @modify begin
    if(s_jpu_dev)
    {
        device_destroy(jpu_class, MKDEV(s_jpu_major, 0));
        class_destroy(jpu_class);
    }
//hisi l00206966 @modify end

    if (s_jpu_irq){
        free_irq(s_jpu_irq, &s_jpu_drv_context);
        s_jpu_irq = 0;
    }

    if (s_jpu_reg_virt_base){
        iounmap(s_jpu_reg_virt_base);
        s_jpu_reg_virt_base = NULL;
    }

    platform_driver_unregister(&jpu_driver);
    return;
}

MODULE_AUTHOR("A customer using C&M JPU, Inc.");
MODULE_DESCRIPTION("JPU linux driver");
MODULE_LICENSE("GPL");
MODULE_DEVICE_TABLE(of, sample_project_match_table);

module_init(jpu_init);
module_exit(jpu_exit);

