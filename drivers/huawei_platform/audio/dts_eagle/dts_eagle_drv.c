/*
 * dts_eagle_drv.c -- dts driver
 *
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#include <linux/module.h>   /* Needed by all modules */
#include <linux/kernel.h>   /* Needed for KERN_INFO */
#include <linux/init.h>     /* Needed for the macros */
#include <linux/version.h>
#include <linux/fs.h>
#include <linux/cdev.h>
#include <linux/device.h>
#include <linux/semaphore.h>
#include <linux/errno.h>
#include <linux/uaccess.h>
#include <linux/slab.h>
#include <linux/string.h>
#include <linux/io.h>
#include <linux/of.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>
#include <linux/of_gpio.h>
#include <linux/errno.h>
#include <linux/kthread.h>
#include <linux/platform_device.h>
#include <linux/ioctl.h>
#include <linux/debugfs.h>

#include "dts_eagle_drv.h"
#include "hisi/hifidsp/hifi_lpp.h"

#define DTS_EAGLE_DRIVER_FIRST_MINOR    1
#define DTS_EAGLE_DRIVER_MINOR_CNT      4

enum {
    AUDIO_DEVICE_OUT_EARPIECE = 0,
    AUDIO_DEVICE_OUT_SPEAKER,
    AUDIO_DEVICE_OUT_WIRED_HEADSET,
    AUDIO_DEVICE_OUT_WIRED_HEADPHONE,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO_HEADSET,
    AUDIO_DEVICE_OUT_BLUETOOTH_SCO_CARKIT,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_HEADPHONES,
    AUDIO_DEVICE_OUT_BLUETOOTH_A2DP_SPEAKER,
    AUDIO_DEVICE_OUT_AUX_DIGITAL,
    AUDIO_DEVICE_OUT_ANLG_DOCK_HEADSET,
    AUDIO_DEVICE_OUT_DGTL_DOCK_HEADSET,
    AUDIO_DEVICE_OUT_USB_ACCESSORY,
    AUDIO_DEVICE_OUT_USB_DEVICE,
    AUDIO_DEVICE_OUT_REMOTE_SUBMIX,
    AUDIO_DEVICE_OUT_ANC_HEADSET,
    AUDIO_DEVICE_OUT_ANC_HEADPHONE,
    AUDIO_DEVICE_OUT_PROXY,
    AUDIO_DEVICE_OUT_FM,
    AUDIO_DEVICE_OUT_FM_TX,
    AUDIO_DEVICE_OUT_COUNT
};
#define AUDIO_DEVICE_COMBO 0x400000 /* bit 23 */

enum {                  /* cache block */
    CB_0 = 0,
    CB_1,
    CB_2,
    CB_3,
    CB_4,
    CB_5,
    CB_6,
    CB_7,
    CB_COUNT
};

enum {                  /* cache block description */
    CBD_DEV_MASK = 0,
    CBD_OFFSG,
    CBD_CMD0,
    CBD_SZ0,
    CBD_OFFS1,
    CBD_CMD1,
    CBD_SZ1,
    CBD_OFFS2,
    CBD_CMD2,
    CBD_SZ2,
    CBD_OFFS3,
    CBD_CMD3,
    CBD_SZ3,
    CBD_COUNT,
};


#define dts_eagle_drv_dbg_msg(fmt, ...)  printk(KERN_INFO "DTS_EAGLE_DRIVER: " fmt "\n", ##__VA_ARGS__) //pr_debug
#define dts_eagle_drv_err_msg(fmt, ...)  printk(KERN_INFO "DTS_EAGLE_DRIVER: " fmt "\n", ##__VA_ARGS__) //pr_err

/* dts eagle driver */
static dev_t            dts_eagle_dev;
static struct   cdev    dts_eagle_char_dev;
static struct   class   *p_dts_eagle_class;
#if LINUX_VERSION_CODE < KERNEL_VERSION(2,6,37)
static DECLARE_MUTEX(lock);
#else
static DEFINE_SEMAPHORE(lock);
#endif

/* dts eagle parameter cache */
#define DEPC_MAX_SIZE 524288

static int _ref_cnt;
static char *_depc;
static s32 _depc_size;
static s32 _c_bl[CB_COUNT][CBD_COUNT];
static u32 _device_primary;
static u32 _device_all;


#define SEC_BLOB_MAX_CNT    10
#define SEC_BLOB_MAX_SIZE   0x4004 /*extra 4 for size*/
static char *_sec_blob[SEC_BLOB_MAX_CNT];

#ifdef CONFIG_DEBUG_FS
static struct dentry *debug_dir;
#define DBG_SIZE_CACHE 70*1024
#endif

#if 0
/* hpx master control */
//static u32 _is_hpx_enabled;
static const struct of_device_id dts_eagle_match_table[] = {
    {.compatible = "dts,eagle",},
    {},
};

MODULE_DEVICE_TABLE(of, dts_eagle_match_tabledddd);
#endif

static int hpx_param_sync_cmd_hifi(void)
{
    AUDIO_EFFECT_HPX_PARAM_SYNC_STRU hpx_param_sync;
    AUDIO_EFFECT_HPX_PARAM_SYNC_CNF_STRU sync_result_info;
    int err = -1;
    int ret = 0;

    hpx_param_sync.uhwMsgId = ID_AP_AUDIO_CMD_PARAM_SYNC_CMD;
    hpx_param_sync.uhwReserve = 0;
    sync_result_info.uhwMsgId= ID_AP_AUDIO_CMD_PARAM_SYNC_CNF;
    sync_result_info.uhwResult= 0;

    ret = hifi_misc_sync_msg(&hpx_param_sync, sizeof(AUDIO_EFFECT_HPX_PARAM_SYNC_STRU), &sync_result_info, sizeof(AUDIO_EFFECT_HPX_PARAM_SYNC_CNF_STRU));
    if (0 != ret) {
        dts_eagle_drv_err_msg("hifi_misc_sync_msg is failed.\n");
    }

    err = sync_result_info.uhwResult;
    if (0 != err) {
        dts_eagle_drv_err_msg("the result of hpx sync cmd is %d.\n", err);
    }

    return err;
}

static int hpx_param_finish_cmd_hifi(unsigned int para_id, unsigned int offset, unsigned int hpx_size)
{
    AUDIO_EFFECT_HPX_PARAM_FINISH_STRU hpx_param_update_finished;
    AUDIO_EFFECT_HPX_PARAM_FINISH_CNF_STRU update_finished_result_info;
    int err = -1;
    int ret = 0;

    hpx_param_update_finished.uhwMsgId = ID_AP_AUDIO_CMD_PARAM_FINISH_CMD;
    hpx_param_update_finished.uhwReserve = 0;
    hpx_param_update_finished.uhwParaId = para_id;
    hpx_param_update_finished.uhwOffset = offset;
    hpx_param_update_finished.uhwSize = hpx_size;
    update_finished_result_info.uhwMsgId = ID_AP_AUDIO_CMD_PARAM_FINISH_CNF;
    update_finished_result_info.uhwResult = 0;

    ret = hifi_misc_sync_msg(&hpx_param_update_finished, sizeof(AUDIO_EFFECT_HPX_PARAM_FINISH_STRU), &update_finished_result_info, sizeof(AUDIO_EFFECT_HPX_PARAM_FINISH_CNF_STRU));
    if (0 != ret) {
        dts_eagle_drv_err_msg("hifi_misc_sync_msg is failed.\n");
    }

    err = update_finished_result_info.uhwResult;
    if (0 != err) {
        dts_eagle_drv_err_msg("the result of hpx sync cmd is %d.\n", err);
    }

    return err;
}

/* hpx driver copy parameters to hifi through hifi_misc interface */
static int hifi_misc_sync_write_hpx_param(unsigned int para_id, unsigned int offset, const char *hpx_data, unsigned int hpx_size)
{
    int ret = 0;
    phys_addr_t hifi_hpx_param_phy_addr = 0;
    void*     hifi_hpx_param_vir_addr = NULL;
    char *hpx_param_write_addr = NULL;

    if ((NULL == hpx_data) || ((hpx_size + offset)> DRV_DSP_DTS_HPX_PARM_SIZE)) {
        dts_eagle_drv_err_msg("hpx_data is NULL or hpx_size is out of limit. hpx_data %p, hpx_size %d, offset %d.\n", hpx_data, hpx_size, offset);
        ret = -1;
        goto EXIT;
    }

    hifi_hpx_param_phy_addr = (phys_addr_t)DRV_DSP_DTS_HPX_PARM_ADDR;
    dts_eagle_drv_dbg_msg("hifi_hpx_param_phy_addr = 0x%p\n", (void*)hifi_hpx_param_phy_addr);

    hifi_hpx_param_vir_addr = (unsigned char*)ioremap_wc(hifi_hpx_param_phy_addr, DRV_DSP_DTS_HPX_PARM_SIZE);
    if (NULL == hifi_hpx_param_vir_addr) {
        dts_eagle_drv_err_msg("hifi_hpx_param_vir_addr ioremap_wc fail.\n");
        ret = -1;
        goto EXIT;
    }
    dts_eagle_drv_dbg_msg("hifi_hpx_param_vir_addr = 0x%p. (*hifi_hpx_param_vir_addr) = 0x%x\n",
            hifi_hpx_param_vir_addr, (*(int *)hifi_hpx_param_vir_addr));

    hpx_param_write_addr = (char*)(hifi_hpx_param_vir_addr + offset);
    memcpy(hpx_param_write_addr, hpx_data, hpx_size);
    dts_eagle_drv_dbg_msg("hpx write parameters successfully, param id : 0x%08x.\n", para_id);

EXIT:
	if (hifi_hpx_param_vir_addr != NULL) {
		iounmap(hifi_hpx_param_vir_addr);
	}
    return ret;
}

/*
 * Internal functions
 */
static inline void *_getd(struct dts_eagle_param_desc *depd)
{
    return (void *)(((char *)depd) + sizeof(struct dts_eagle_param_desc));
}

static void _init_cb_descs(void)
{
    int i;
    for (i = 0; i < CB_COUNT; i++) {
        _c_bl[i][CBD_DEV_MASK] = 0;

        _c_bl[i][CBD_OFFSG] = _c_bl[i][CBD_OFFS1] =
        _c_bl[i][CBD_OFFS2] = _c_bl[i][CBD_OFFS3] = 0xFFFFFFFF;

        _c_bl[i][CBD_CMD0] = _c_bl[i][CBD_SZ0] =
        _c_bl[i][CBD_CMD1] = _c_bl[i][CBD_SZ1] =
        _c_bl[i][CBD_CMD2] = _c_bl[i][CBD_SZ2] =
        _c_bl[i][CBD_CMD3] = _c_bl[i][CBD_SZ3] = 0;
    }
}

static s32 _get_cb_for_dev(int device)
{
    s32 i;
    if (device & AUDIO_DEVICE_COMBO) {
        for (i = 0; i < CB_COUNT; i++) {
            if ((_c_bl[i][CBD_DEV_MASK] & device) == device)
                return i;
        }
    } else {
        for (i = 0; i < CB_COUNT; i++) {
            if ((_c_bl[i][CBD_DEV_MASK] & device) && !(_c_bl[i][CBD_DEV_MASK] & AUDIO_DEVICE_COMBO))
            return i;
        }
    }
    dts_eagle_drv_err_msg("%s: device %i not found", __func__, device);
    return -EINVAL;
}

static s32 dts_eagle_write_hpx_param(uint32_t id, uint32_t offset, const char *pBuf, uint32_t size)
{
    int ret = -1;
    dts_eagle_drv_dbg_msg("Write hpx param to dsp 0x%08x, %d, 0x%p, %d",id, offset, pBuf, size);

    ret = hpx_param_sync_cmd_hifi();
    if (ret != 0) {
        dts_eagle_drv_err_msg("%s: sync cmd is failed, ret = %d", __func__, ret);
        return ret;
    }

    ret = hifi_misc_sync_write_hpx_param(id, offset, pBuf, size);
    if (ret < 0) {
        dts_eagle_drv_err_msg("%s: error hifi_misc_sync_write_hpx_param, ret = %d", __func__, ret);
    }

    ret = hpx_param_finish_cmd_hifi(id, offset, size);
    if (ret != 0) {
        dts_eagle_drv_err_msg("%s: finish cmd is failed, ret = %d", __func__, ret);
        return ret;
    }
    
    return ret;
}

/*
 * Driver functions
 */
static int dts_eagle_open(struct inode *i, struct file *f)
{
    dts_eagle_drv_dbg_msg("%s", __func__);
    return 0;
}

static int dts_eagle_close(struct inode *i, struct file *f)
{
    dts_eagle_drv_dbg_msg("%s", __func__);
    return 0;
}

static long dts_eagle_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
{
    s32 ret = 0;
    down(&lock);
    switch (cmd)
    {
        case DTS_EAGLE_IOCTL_GET_CACHE_SIZE: {
            dts_eagle_drv_dbg_msg("%s: called with control 0x%X (get param cache size)", __func__, cmd);

            if (copy_to_user((void *)arg, &_depc_size, sizeof(_depc_size))) {
                dts_eagle_drv_err_msg("%s: error writing size", __func__);
                up(&lock);
                return -EFAULT;
            }
            break;
        }

        case DTS_EAGLE_IOCTL_SET_CACHE_SIZE: {
            s32 size = 0;
            dts_eagle_drv_dbg_msg("%s: called with control 0x%X (allocate param cache)", __func__, cmd);

            if (copy_from_user((void *)&size, (void *)arg, sizeof(size))) {
                dts_eagle_drv_err_msg("%s: error copying size (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, &size, sizeof(size));
                up(&lock);
                return -EFAULT;
            } else if (size < 0 || size > DEPC_MAX_SIZE) {
                dts_eagle_drv_err_msg("%s: cache size %d not allowed (min 0, max %d)", __func__, size, DEPC_MAX_SIZE);
                up(&lock);
                return -EINVAL;
            }

            if (_depc) {
                dts_eagle_drv_dbg_msg("%s: previous param cache of size %u freed", __func__, _depc_size);
                _depc_size = 0;
                kfree(_depc);
                _depc = NULL;
            }

            if (size)
                _depc = kzalloc(size, GFP_KERNEL);
            else
                dts_eagle_drv_dbg_msg("%s: %d bytes requested for param cache, nothing allocated", __func__, size);

            if (_depc) {
                dts_eagle_drv_dbg_msg("%s: %d bytes allocated for param cache", __func__, size);
                _depc_size = size;
            } else {
                dts_eagle_drv_err_msg("%s: error allocating param cache (kzalloc failed on %d bytes)", __func__, size);
                _depc_size = 0;
                up(&lock);
                return -ENOMEM;
            }
            break;
        }

        case DTS_EAGLE_IOCTL_GET_PARAM: {
            struct dts_eagle_param_desc depd;
            s32 offset = 0, for_pre = 0, get_from_core = 0;
            void *buf, *buf_m = NULL;

            dts_eagle_drv_dbg_msg("%s: control 0x%X (get param)", __func__, cmd);

            if (copy_from_user((void *)&depd, (void *)arg, sizeof(depd))) {
                dts_eagle_drv_err_msg("%s: error copying dts_eagle_param_desc (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, &depd, sizeof(depd));
                up(&lock);
                return -EFAULT;
            }
            if (depd.device & DTS_EAGLE_FLAG_IOCTL_PRE) {
                dts_eagle_drv_dbg_msg("%s: using for premix", __func__);
                for_pre = 1;
            }

            if (depd.device & DTS_EAGLE_FLAG_IOCTL_GETFROMCORE) {
                dts_eagle_drv_dbg_msg("%s: 'get from core' requested", __func__);
                get_from_core = 1;
                depd.offset = -1;
            }

            depd.device &= DTS_EAGLE_FLAG_IOCTL_MASK;
            if (depd.offset == -1) {
                buf = buf_m = kzalloc(depd.size, GFP_KERNEL);
                if (!buf_m) {
                    dts_eagle_drv_err_msg("%s: out of memory", __func__);
                    up(&lock);
                    return -ENOMEM;
                }
                //if (get_from_core)
                    //ret = core_dts_eagle_get(depd.id, depd.size, buf);
                //else
                    //ret = msm_dts_eagle_handle_adm(&depd, buf, for_pre, true);
            } else {
                s32 cb = _get_cb_for_dev(depd.device);
                if (cb < 0) {
                    dts_eagle_drv_err_msg("%s: no cache for device %i found", __func__, depd.device);
                    up(&lock);
                    return -EINVAL;
                }

                offset = _c_bl[cb][CBD_OFFSG] + depd.offset;
                if ((offset + depd.size) > _depc_size) {
                    dts_eagle_drv_err_msg("%s: invalid size %d and/or offset %d", __func__, depd.size, offset);
                    up(&lock);
                    return -EINVAL;
                }
                buf = (void *)&_depc[offset];
            }
            if (ret < 0)
                dts_eagle_drv_err_msg("%s: error %i getting data", __func__, ret);
            else if (copy_to_user((void *)(((char *)arg) + sizeof(depd)), buf, depd.size)) {
                dts_eagle_drv_err_msg("%s: error copying get data", __func__);
                up(&lock);
                kfree(buf_m);
                return -EFAULT;
            }
            kfree(buf_m);
            break;
        }

        case DTS_EAGLE_IOCTL_SET_PARAM: {
            struct dts_eagle_param_desc depd;
            s32 offset = 0, just_set_cache = 0, for_pre = 0;
            s32 tgt;
            s32 ret = -1;

            dts_eagle_drv_dbg_msg("%s: control 0x%X (set param)", __func__, cmd);

            if (copy_from_user((void *)&depd, (void *)arg, sizeof(depd))) {
                dts_eagle_drv_err_msg("%s: error copying dts_eagle_param_desc (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, &depd, sizeof(depd));
                up(&lock);
                return -EFAULT;
            }

            if (depd.device & DTS_EAGLE_FLAG_IOCTL_PRE) {
                dts_eagle_drv_dbg_msg("%s: using for premix", __func__);
                for_pre = 1;
            }

            if (depd.device & DTS_EAGLE_FLAG_IOCTL_JUSTSETCACHE) {
                dts_eagle_drv_dbg_msg("%s: 'just set cache' requested", __func__);
                just_set_cache = 1;
            }

            depd.device &= DTS_EAGLE_FLAG_IOCTL_MASK;
            tgt = _get_cb_for_dev(depd.device);
            if (tgt < 0) {
                dts_eagle_drv_err_msg("%s: no cache for device %i found", __func__, depd.device);
                up(&lock);
                return -EINVAL;
            }

            offset = _c_bl[tgt][CBD_OFFSG] + depd.offset;
            if ((offset + depd.size) > _depc_size) {
                dts_eagle_drv_err_msg("%s: invalid size %i and/or offset %i for parameter (target cache block %i with offset %i, global cache is size %u)", __func__, depd.size, offset, tgt,
                _c_bl[tgt][CBD_OFFSG], _depc_size);
                up(&lock);
                return -EINVAL;
            }

            if((just_set_cache == 0) && (memcmp((void *)&_depc[offset], (void *)(((char *)arg)+sizeof(depd)),depd.size) == 0)){
                dts_eagle_drv_err_msg("%s: no need change hpx param", __func__);
                just_set_cache =1;
            }

            if (copy_from_user((void *)&_depc[offset], (void *)(((char *)arg)+sizeof(depd)), depd.size)) {
                dts_eagle_drv_err_msg("%s: error copying param to cache (src:%p, tgt:%p, size:%i)", __func__, ((char *)arg)+sizeof(depd), &_depc[offset], depd.size);
                up(&lock);
                return -EFAULT;
            }

            dts_eagle_drv_dbg_msg("%s: param info: param = 0x%X, size = %i, offset = %i, device = %i, cache block %i, global offset = %i, first bytes as integer = %i",
                                __func__, depd.id, depd.size, depd.offset,
                                depd.device, tgt, offset, *(int *)&_depc[offset]);

            if (!just_set_cache) {
                ret = dts_eagle_write_hpx_param(depd.id, (uint32_t) depd.offset, &_depc[offset], depd.size);
            }

            break;
        }

        case DTS_EAGLE_IOCTL_SET_CACHE_BLOCK: {
            u32 b_[CBD_COUNT+1], *b = &b_[1], cb;
            dts_eagle_drv_dbg_msg("%s: with control 0x%X (set cache block)", __func__, cmd);

            if (copy_from_user((void *)b_, (void *)arg, sizeof(b_))) {
                dts_eagle_drv_err_msg("%s: error copying cache block data (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, b_, sizeof(b_));
                up(&lock);
                return -EFAULT;
            }

            cb = b_[0];
            if (cb >= CB_COUNT) {
                dts_eagle_drv_err_msg("%s: cache block %u out of range (max %u)", __func__, cb, CB_COUNT-1);
                up(&lock);
                return -EINVAL;
            }

            dts_eagle_drv_dbg_msg("%s: cache block %i set: devices 0x%X, global offset %u, offsets 1:%u 2:%u 3:%u, cmds/sizes 0:0x%X %u 1:0x%X %u 2:0x%X %u 3:0x%X %u",
                                    __func__, cb, _c_bl[cb][CBD_DEV_MASK], _c_bl[cb][CBD_OFFSG],
                                    _c_bl[cb][CBD_OFFS1], _c_bl[cb][CBD_OFFS2],
                                    _c_bl[cb][CBD_OFFS3], _c_bl[cb][CBD_CMD0], _c_bl[cb][CBD_SZ0],
                                    _c_bl[cb][CBD_CMD1], _c_bl[cb][CBD_SZ1], _c_bl[cb][CBD_CMD2],
                                    _c_bl[cb][CBD_SZ2], _c_bl[cb][CBD_CMD3], _c_bl[cb][CBD_SZ3]);

            if (    (b[CBD_OFFSG]+b[CBD_OFFS1]+b[CBD_SZ1]) > _depc_size ||
                    (b[CBD_OFFSG]+b[CBD_OFFS2]+b[CBD_SZ2]) > _depc_size ||
                    (b[CBD_OFFSG]+b[CBD_OFFS3]+b[CBD_SZ3]) > _depc_size) {
                dts_eagle_drv_err_msg("%s: cache block bounds out of range", __func__);
                up(&lock);
                return -EINVAL;
            }
            memcpy(_c_bl[cb], b, sizeof(_c_bl[cb]));
            break;
        }

        case DTS_EAGLE_IOCTL_SET_ACTIVE_DEVICE: {
            u32 data[2];
            s32 tgt, l_offset, g_offset, size, id;

            dts_eagle_drv_dbg_msg("%s: with control 0x%X (set active device)", __func__, cmd);

            if (copy_from_user((void *)data, (void *)arg, sizeof(data))) {
                dts_eagle_drv_err_msg("%s: error copying active device data (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, data, sizeof(data));
                up(&lock);
                return -EFAULT;
            }

            if (data[1] != 0) {
                _device_primary = data[0];
                dts_eagle_drv_dbg_msg("%s: primary device %i", __func__, data[0]);
            } else {
                _device_all = data[0];
                dts_eagle_drv_dbg_msg("%s: all devices 0x%X", __func__, data[0]);
            }

            // get cb for the route
            tgt = _get_cb_for_dev(data[0]);
            //tgt = _get_cb_for_dev(data[1]);
            if (tgt < 0) {
                dts_eagle_drv_err_msg("%s: no cache for device %i found", __func__, data[1]);
                up(&lock);
                return -EINVAL;
            }

            // Write the premix parameters
            g_offset = _c_bl[tgt][CBD_OFFSG];
            l_offset = 0;
            id = _c_bl[tgt][CBD_CMD0];
            size = _c_bl[tgt][CBD_SZ0];
            ret = dts_eagle_write_hpx_param(id, l_offset, &_depc[l_offset + g_offset], size);

/*            // Write the premix fader  parameters
            l_offset = _c_bl[tgt][CBD_OFFS1];
            id = _c_bl[tgt][CBD_CMD1];
            size = _c_bl[tgt][CBD_SZ1];
            ret = dts_eagle_write_hpx_param(id, l_offset, &_depc[l_offset + g_offset], size);
*/
            // Write the postmix parameters
            l_offset = _c_bl[tgt][CBD_OFFS2];
            id = _c_bl[tgt][CBD_CMD2];
            size = _c_bl[tgt][CBD_SZ2];
            ret = dts_eagle_write_hpx_param(id, l_offset, &_depc[l_offset + g_offset], size);

/*            // Write the postmix fader parameters
            l_offset = _c_bl[tgt][CBD_OFFS3];
            id = _c_bl[tgt][CBD_CMD3];
            size = _c_bl[tgt][CBD_SZ3];
            ret = dts_eagle_write_hpx_param(id, l_offset, &_depc[l_offset + g_offset], size);
*/
            break;
        }

        case DTS_EAGLE_IOCTL_GET_LICENSE: {
            u32 target = 0;
            s32 size = 0, size_only;
            dts_eagle_drv_dbg_msg("%s: with control 0x%X (get license)", __func__, cmd);

            if (copy_from_user((void *)&target, (void *)arg, sizeof(target))) {
                dts_eagle_drv_err_msg("%s: error reading license index. (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, &target, sizeof(target));
                up(&lock);
                return -EFAULT;
            }

            size_only = target & (1<<31) ? 1 : 0;
            target &= 0x7FFFFFFF;
            if (target < 0 || target >= SEC_BLOB_MAX_CNT) {
                dts_eagle_drv_err_msg("%s: license index %i out of bounds (max index is %i)", __func__, target, SEC_BLOB_MAX_CNT);
                up(&lock);
                return -EINVAL;
            }

            if (_sec_blob[target] == NULL) {
                dts_eagle_drv_err_msg("%s: license index %i never initialized", __func__, target);
                up(&lock);
                return -EINVAL;
            }

            size = ((s32 *)_sec_blob[target])[0];
            if (size <= 0 || size > SEC_BLOB_MAX_SIZE) {
                dts_eagle_drv_err_msg("%s: license size %i for index %i invalid (min size is 1, max size is %i)", __func__, size, target, SEC_BLOB_MAX_SIZE);
                up(&lock);
                return -EINVAL;
            }

            if (size_only) {
                dts_eagle_drv_dbg_msg("%s: reporting size of license data only", __func__);

                if (copy_to_user((void *)(((char *)arg)+sizeof(target)), (void *)&size, sizeof(size))) {
                    dts_eagle_drv_err_msg("%s: error copying license size", __func__);
                    up(&lock);
                    return -EFAULT;
                }
            } else if (copy_to_user((void *)(((char *)arg)+sizeof(target)), (void *)&(((s32 *)_sec_blob[target])[1]), size)) {
                dts_eagle_drv_err_msg("%s: error copying license data", __func__);
                up(&lock);
                return -EFAULT;
            } else {
                dts_eagle_drv_dbg_msg("%s: license file %i bytes long from license index %i returned to user", __func__, size, target);
            }

            break;
        }

        case DTS_EAGLE_IOCTL_SET_LICENSE: {
            s32 target[2] = {0, 0};
            dts_eagle_drv_dbg_msg("%s: control 0x%X (set license)", __func__, cmd);

            if (copy_from_user((void *)target, (void *)arg, sizeof(target))) {
                dts_eagle_drv_err_msg("%s: error reading license index (src:%p, tgt:%p, size:%zu)", __func__, (void *)arg, target, sizeof(target));
                up(&lock);
                return -EFAULT;
            }

            if (target[0] < 0 || target[0] >= SEC_BLOB_MAX_CNT) {
                dts_eagle_drv_err_msg("%s: license index %i out of bounds (max index is %i)", __func__, target[0], SEC_BLOB_MAX_CNT-1);
                up(&lock);
                return -EINVAL;
            }

            if (target[1] == 0) {
                dts_eagle_drv_dbg_msg("%s: request to free license index %i", __func__, target[0]);
                kfree(_sec_blob[target[0]]);
                _sec_blob[target[0]] = NULL;
                break;
            }

            if (target[1] <= 0 || target[1] >= SEC_BLOB_MAX_SIZE) {
                dts_eagle_drv_err_msg("%s: license size %i for index %i invalid (min size is 1, max size is %i)",__func__, target[1], target[0], SEC_BLOB_MAX_SIZE);
                up(&lock);
                return -EINVAL;
            }

            if (_sec_blob[target[0]] != NULL) {
                if (((s32 *)_sec_blob[target[0]])[1] != target[1]) {
                    dts_eagle_drv_dbg_msg("%s: request new size for already allocated license index %i", __func__, target[0]);
                    kfree(_sec_blob[target[0]]);
                    _sec_blob[target[0]] = NULL;
                }
            }

            dts_eagle_drv_dbg_msg("%s: allocating %i bytes for license index %i", __func__, target[1], target[0]);
            _sec_blob[target[0]] = kzalloc(target[1] + 4, GFP_KERNEL);

            if (!_sec_blob[target[0]]) {
                dts_eagle_drv_err_msg("%s: error allocating license index %i (kzalloc failed on %i bytes)", __func__, target[0], target[1]);
                up(&lock);
                return -ENOMEM;
            }

            ((s32 *)_sec_blob[target[0]])[0] = target[1];
            if (copy_from_user((void *)&(((s32 *)_sec_blob[target[0]])[1]), (void *)(((char *)arg)+sizeof(target)), target[1])) {
                dts_eagle_drv_err_msg("%s: error copying license to index %i, size %i (src:%p, tgt:%p, size:%i)",
                                __func__, target[0], target[1],
                                ((char *)arg)+sizeof(target), &(((s32 *)_sec_blob[target[0]])[1]), target[1]);
                up(&lock);
                return -EFAULT;
            } else {
                dts_eagle_drv_dbg_msg("%s: license file %i bytes long copied to index license index %i", __func__, target[1], target[0]);
            }
            break;
        }

        case DTS_EAGLE_IOCTL_GET_CACHE_PREMIX:{
            int offset, cidx = -1, size;

            dts_eagle_drv_dbg_msg("%s: control 0x%X (get param)", __func__, cmd);

            cidx = _get_cb_for_dev(_device_primary);
            if (cidx < 0) {
                up(&lock);
                return -EINVAL;
            }

            offset = _c_bl[cidx][CBD_OFFSG];
            cmd = _c_bl[cidx][CBD_CMD0];
            size = _c_bl[cidx][CBD_SZ0];

            if (_depc_size == 0 || !_depc || offset < 0 || size <= 0 || cmd == 0 || (offset + size) > _depc_size) {
                dts_eagle_drv_err_msg("%s: primary device %i cache index %i general error - cache size = %u, cache ptr = %p, offset = %i, size = %i, cmd = %i",
                                        __func__, _device_primary, cidx, _depc_size, _depc, offset, size, cmd);
                up(&lock);
                return -EINVAL;
            }

            dts_eagle_drv_dbg_msg("%s: first 6 integers %i %i %i %i %i %i", __func__,
                                    *((int *)&_depc[offset]), *((int *)&_depc[offset+4]),
                                    *((int *)&_depc[offset+8]), *((int *)&_depc[offset+12]),
                                    *((int *)&_depc[offset+16]), *((int *)&_depc[offset+20]));

            dts_eagle_drv_dbg_msg("%s: sending full data block, with cache index = %d device mask 0x%X, param = 0x%X, offset = %d, and size = %d",
                                    __func__, cidx, _c_bl[cidx][CBD_DEV_MASK], cmd, offset, size);

            if (copy_to_user((void *)arg, &_depc[offset], size)) {
                dts_eagle_drv_err_msg("%s: error copying premix data to userspace", __func__);
                up(&lock);
                return -EFAULT;
            }
            break;
        }

        case DTS_EAGLE_IOCTL_GET_CACHE_POSTMIX: {
            int offset, cidx = -1, size;

            dts_eagle_drv_dbg_msg("%s: control 0x%X (get param)", __func__, cmd);

            cidx = _get_cb_for_dev(_device_primary);
            if (cidx < 0) {
                up(&lock);
                return -EINVAL;
            }

            offset = _c_bl[cidx][CBD_OFFSG] + _c_bl[cidx][CBD_OFFS2];
            cmd = _c_bl[cidx][CBD_CMD2];
            size = _c_bl[cidx][CBD_SZ2];

            if (_depc_size == 0 || !_depc || offset < 0 || size <= 0 || cmd == 0 || (offset + size) > _depc_size) {
                dts_eagle_drv_err_msg("%s: primary device %i cache index %i general error - cache size = %u, cache ptr = %p, offset = %i, size = %i, cmd = %i",
                                        __func__, _device_primary, cidx, _depc_size, _depc, offset, size, cmd);
                up(&lock);
                return -EINVAL;
            }

            dts_eagle_drv_dbg_msg("%s: first 6 integers %i %i %i %i %i %i", __func__,
                                    *((int *)&_depc[offset]), *((int *)&_depc[offset+4]),
                                    *((int *)&_depc[offset+8]), *((int *)&_depc[offset+12]),
                                    *((int *)&_depc[offset+16]), *((int *)&_depc[offset+20]));

            dts_eagle_drv_dbg_msg("%s: sending full data block, with cache index = %d device mask 0x%X, param = 0x%X, offset = %d, and size = %d",
                                    __func__, cidx, _c_bl[cidx][CBD_DEV_MASK], cmd, offset, size);

            if (copy_to_user((void *)arg, &_depc[offset], size)) {
                dts_eagle_drv_err_msg("%s: error copying postmix data to userspace", __func__);
                up(&lock);
                return -EFAULT;
            }
            break;
        }

        default:
            dts_eagle_drv_err_msg("%s: control 0x%X (invalid control)", __func__, cmd);
            up(&lock);
            return -EINVAL;
    }

    up(&lock);
    return 0;
}

#ifdef CONFIG_COMPAT
static long dts_eagle_compat_ioctl(struct file *f, unsigned int cmd, unsigned long arg)
{
    unsigned int retCmd = 0;
    switch (cmd)
    {
        case DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_SIZE: {
            retCmd = DTS_EAGLE_IOCTL_GET_CACHE_SIZE;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_SET_CACHE_SIZE: {
            retCmd = DTS_EAGLE_IOCTL_SET_CACHE_SIZE;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_GET_PARAM: {
            retCmd = DTS_EAGLE_IOCTL_GET_PARAM;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_SET_PARAM: {
            retCmd = DTS_EAGLE_IOCTL_SET_PARAM;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_SET_CACHE_BLOCK: {
            retCmd = DTS_EAGLE_IOCTL_SET_CACHE_BLOCK;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_SET_ACTIVE_DEVICE: {
            retCmd = DTS_EAGLE_IOCTL_SET_ACTIVE_DEVICE;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_GET_LICENSE: {
            retCmd = DTS_EAGLE_IOCTL_GET_LICENSE;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_SET_LICENSE: {
            retCmd = DTS_EAGLE_IOCTL_SET_LICENSE;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_PREMIX:{
            retCmd = DTS_EAGLE_IOCTL_GET_CACHE_PREMIX;
            break;
        }

        case DTS_EAGLE_COMPAT_IOCTL_GET_CACHE_POSTMIX: {
            retCmd = DTS_EAGLE_IOCTL_GET_CACHE_POSTMIX;
            break;
        }

        default:
            dts_eagle_drv_err_msg("%s: control 0x%X (invalid control)", __func__, cmd);
            return -EINVAL;
    }

    return dts_eagle_ioctl(f, retCmd, arg);
}
#endif

static struct file_operations dts_eagle_fops =
{
    .owner          =   THIS_MODULE,
    .open           =   dts_eagle_open,
    .release        =   dts_eagle_close,
    .unlocked_ioctl =   dts_eagle_ioctl,
#ifdef CONFIG_COMPAT
    .compat_ioctl   =   dts_eagle_compat_ioctl,
#endif
};

#ifdef CONFIG_DEBUG_FS
static int hpx_eagle_read_param(char *buf)
{
    int offset, cidx = -1, size;
    unsigned int cmd;
    char *ptr_cur;
    s32 ret = 0;

    memset(buf, 0, DBG_SIZE_CACHE);

    down(&lock);
    cidx = _get_cb_for_dev(_device_primary);
    if (cidx < 0) {
        up(&lock);
        return -EINVAL;
    }

    offset = _c_bl[cidx][CBD_OFFSG];
    cmd = _c_bl[cidx][CBD_CMD0];
    size = _c_bl[cidx][CBD_SZ0];

    if (_depc_size == 0 || !_depc || offset < 0 || size <= 0 || cmd == 0 || (offset + size) > _depc_size) {
        dts_eagle_drv_err_msg("%s: primary device %i cache index %i general error - cache size = %u, cache ptr = %p, offset = %i, size = %i, cmd = %i",
                                __func__, _device_primary, cidx, _depc_size, _depc, offset, size, cmd);
        up(&lock);
        return -EINVAL;
    }

    dts_eagle_drv_dbg_msg("%s: first 6 integers %i %i %i %i %i %i", __func__,
                            *((int *)&_depc[offset]), *((int *)&_depc[offset+4]),
                            *((int *)&_depc[offset+8]), *((int *)&_depc[offset+12]),
                            *((int *)&_depc[offset+16]), *((int *)&_depc[offset+20]));

    dts_eagle_drv_dbg_msg("%s: sending full data block, with cache index = %d device mask 0x%X, param = 0x%X, offset = %d, and size = %d",
                            __func__, cidx, _c_bl[cidx][CBD_DEV_MASK], cmd, offset, size);

    ptr_cur = buf;
    memcpy(ptr_cur, &_depc[offset], size);

    dts_eagle_drv_dbg_msg("premix size:%d", size);

    ptr_cur +=size;
    *((int *)&ptr_cur[0]) = *((int *)&ptr_cur[4] ) =
    *((int *)&ptr_cur[8]) = *((int *)&ptr_cur[12]) =
    *((int *)&ptr_cur[16]) = 0x5a5a5a5a;

    offset = _c_bl[cidx][CBD_OFFSG] + _c_bl[cidx][CBD_OFFS2];
    cmd = _c_bl[cidx][CBD_CMD2];
    size = _c_bl[cidx][CBD_SZ2];

    if (_depc_size == 0 || !_depc || offset < 0 || size <= 0 || cmd == 0 || (offset + size) > _depc_size) {
        dts_eagle_drv_err_msg("%s: primary device %i cache index %i general error - cache size = %u, cache ptr = %p, offset = %i, size = %i, cmd = %i",
                                __func__, _device_primary, cidx, _depc_size, _depc, offset, size, cmd);
        up(&lock);
        return -EINVAL;
    }

    dts_eagle_drv_dbg_msg("%s: first 6 integers %i %i %i %i %i %i", __func__,
                            *((int *)&_depc[offset]), *((int *)&_depc[offset+4]),
                            *((int *)&_depc[offset+8]), *((int *)&_depc[offset+12]),
                            *((int *)&_depc[offset+16]), *((int *)&_depc[offset+20]));

    ptr_cur +=20;
    memcpy(ptr_cur, &_depc[offset], size);

    ptr_cur +=size;

    dts_eagle_drv_dbg_msg("postmix size:%d", size);

    *((int *)&ptr_cur[0]) = *((int *)&ptr_cur[4] ) =
    *((int *)&ptr_cur[8]) = *((int *)&ptr_cur[12]) =
    *((int *)&ptr_cur[16]) = 0x2a2a2a2a;

    up(&lock);
    return ret;
}


static int hpx_eagle_read(struct file *file, char __user *user_buf,
				size_t count, loff_t *ppos)
{
	char *kn_buf = NULL;
	ssize_t byte_read = 0;
	kn_buf = kzalloc(DBG_SIZE_CACHE, GFP_KERNEL);
	pr_err("%s(%u) : hpx read enter",__FUNCTION__,__LINE__);

	if (NULL == kn_buf) {
		pr_err("kn_buf is null\n");
		return simple_read_from_buffer(user_buf, count, ppos, "vmalloc fail\n", 18);
	}

	if(hpx_eagle_read_param(kn_buf)) {
		pr_err("hpx eagle read param failed\n");
		kfree(kn_buf);
		kn_buf = NULL;
		return 0;
	}

	byte_read = simple_read_from_buffer(user_buf, count, ppos, kn_buf, DBG_SIZE_CACHE);

	kfree(kn_buf);
	kn_buf = NULL;

	return byte_read;
}

static const struct file_operations hpx_eagle_fops = {
	.read  = hpx_eagle_read,
};
#endif

static const struct of_device_id dts_eagle_id_match[] = {
    { .compatible = "huawei,dts_eagle", },
    {},
};
MODULE_DEVICE_TABLE(of, dts_eagle_id_match);

static int dts_eagle_probe(struct platform_device *pdev)
{
    struct device *dev_ret;
    int ret = -ENODEV;
    const struct of_device_id *match;

    match = of_match_device(dts_eagle_id_match, &pdev->dev);
    if (!match) {
        pr_err("get dts_eagle device info err\n");
        return -ENOENT;
    }

    dts_eagle_drv_dbg_msg("%s", __func__);

     if ((ret = alloc_chrdev_region(&dts_eagle_dev, DTS_EAGLE_DRIVER_FIRST_MINOR, DTS_EAGLE_DRIVER_MINOR_CNT, "dts_eagle_ioctl")) < 0)
    {
        return ret;
    }

    cdev_init(&dts_eagle_char_dev, &dts_eagle_fops);

    if ((ret = cdev_add(&dts_eagle_char_dev, dts_eagle_dev, DTS_EAGLE_DRIVER_MINOR_CNT)) < 0)
    {
        return ret;
    }

    if (IS_ERR(p_dts_eagle_class = class_create(THIS_MODULE, "char")))
    {
        cdev_del(&dts_eagle_char_dev);
        unregister_chrdev_region(dts_eagle_dev, DTS_EAGLE_DRIVER_MINOR_CNT);
        return PTR_ERR(p_dts_eagle_class);
    }

    if (IS_ERR(dev_ret = device_create(p_dts_eagle_class, NULL, dts_eagle_dev, NULL, "dts_eagle")))
    {
        class_destroy(p_dts_eagle_class);
        cdev_del(&dts_eagle_char_dev);
        unregister_chrdev_region(dts_eagle_dev, DTS_EAGLE_DRIVER_MINOR_CNT);
        return PTR_ERR(dev_ret);
    }

    if (!_ref_cnt++) {
        _init_cb_descs();
    }

#ifdef CONFIG_DEBUG_FS
	debug_dir = debugfs_create_dir("hpx", NULL);
	if (!debug_dir) {
		pr_err("eagle: Failed to create hpx debugfs dir\n");
		return 0;
	}

	if (!debugfs_create_file("eagle", 0644, debug_dir, NULL, &hpx_eagle_fops))
		pr_err("eagle: Failed to create eagle debugfs file\n");

#endif

    return ret;
}

static int dts_eagle_remove(struct platform_device *pdev)
{
    device_destroy(p_dts_eagle_class, dts_eagle_dev);
    class_destroy(p_dts_eagle_class);
    cdev_del(&dts_eagle_char_dev);
    unregister_chrdev_region(dts_eagle_dev, DTS_EAGLE_DRIVER_MINOR_CNT);

    dts_eagle_drv_dbg_msg("%s", __func__);
    --_ref_cnt;

#ifdef CONFIG_DEBUG_FS
	debugfs_remove_recursive(debug_dir);
#endif

    return 0;
}

static struct platform_driver dts_eagle_driver = {
    .driver = {
        .name  = "dts_eagle",
        .owner = THIS_MODULE,
        .of_match_table = of_match_ptr(dts_eagle_id_match),
    },
    .probe  = dts_eagle_probe,
    .remove = dts_eagle_remove,
};

static int __init dts_eagle_drv_init(void)
{
    return platform_driver_register(&dts_eagle_driver);
}

static void __exit dts_eagle_drv_exit(void)
{
    platform_driver_unregister(&dts_eagle_driver);
}

module_init(dts_eagle_drv_init);
module_exit(dts_eagle_drv_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Magesh Devaprakash <magesh.devaprakash@dts.com>");
MODULE_DESCRIPTION("dts eagle drv() char driver");

