/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 *
 * File Name     : hi110x_pm.c
 * Version       : Initial Draft
 * Author        : z00209041
 * Created       : 2013/1/10
 * Last Modified :
 * Description   : related pm modules
 * Function List :
 * History       :
 * 1.Date        : 2013/1/10
 *   Author      : z00209041
 *   Modification: Created file
 *
 */


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*
 * 1 Header File Including
 */
#include <linux/kthread.h>
#include <linux/suspend.h>
#include <linux/wakelock.h>
#include "hwifi_utils.h"
#include "hi110x.h"
#include "hi110x_pm.h"
#include "hwifi_cfg80211.h"
#include "hwifi_msg.h"
#include "hwifi_roam_fsm.h"
#include "hsdio.h"
#include "hwifi_hcc.h"
#include "hwifi_perform.h"
#include "hwifi_dev_err.h"
/*
 * 2 Global Variable Definition
 */
/* Start of zhangwei 64406 2013-03-26 B295 增加预编译宏 */
#ifdef WLAN_POWER_MANAGEMENT
/*extern int32 g_sdio_status;*/

enum GROUP_PKTFILTER_STATE{
    GROUP_PKTFILTER_OFF = 0,
    GROUP_PKTFILTER_ON
};

enum KEEPALIVE_STATE{
    KEEPALIVE_OFF = 0,
    KEEPALIVE_ON
};

#define RUN_MODE_LEN 32
static char g_run_mode[RUN_MODE_LEN] = {0};
struct hi110x_pm_info   *g_pm_info   = NULL;
struct wlan_pm_s        *g_wlan_info = NULL;

uint32 g_watchdog_timeout = DEFAULT_WATCHDOG_TIMEOUT;
module_param(g_watchdog_timeout, uint, S_IRUGO|S_IWUSR);

uint32 g_cur_cpufreq = 0xFF;
module_param(g_cur_cpufreq, uint, S_IRUGO|S_IWUSR);

uint32 g_sdio_rate_40M = MAXCAP_40MHZ_RATE;
module_param(g_sdio_rate_40M, uint, S_IRUGO|S_IWUSR);

uint32 g_sdio_rate_80M = MAXCAP_80MHZ_RATE;
module_param(g_sdio_rate_80M, uint, S_IRUGO|S_IWUSR);

uint32 g_sdio_rate_160M = MAXCAP_160MHZ_RATE;
module_param(g_sdio_rate_160M, uint, S_IRUGO|S_IWUSR);

uint32 g_powermgmt_switch = DEFAULT_POWER_STATUS;
uint32 g_keepconnect_switch = FALSE;

extern volatile uint32 g_flowctrl_flag;
extern int32 g_lCpuId;
extern struct semaphore sdio_wake_sema;
extern int32 g_sleep_policy;
/*
 * 3 Function Definition
 */
extern int32 sdio_reset_comm(struct mmc_card *card);
extern int32 wlan_pm_register(struct wlan_pm_s *g_wlan_info);
extern void wlan_pm_unregister(struct wlan_pm_s *g_wlan_info);
extern int32 wlan_power_set(uint8 on);

#define SDIO_RESET_RETRY 5
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
void hi110x_sdio_powerset_time_record(int32 poweron)
{
    if(g_pm_info)
    {
        if(poweron)
            g_pm_info->pm_stat.power_on_time = cpu_clock(UINT_MAX);
        else
            g_pm_info->pm_stat.power_off_time = cpu_clock(UINT_MAX);
    }else{
        HWIFI_WARNING("Maybe call  %s function too early", __FUNCTION__);
    }
}
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */

/* DTS2014030510175    Hi110x bug fix z00209041 20140320  begin */
/*
 * Prototype    : hi110x_sdio_download_patch
 * Description  : download patch
 * Input        : None
 * Output       : None
 * Return Value :
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/19
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_sdio_download_patch(void)
{
    int32 ret = SUCC;
    /*download wlan patch*/
    if (NULL != g_wlan_info->wlan_patch_download)
    {
        ret = g_wlan_info->wlan_patch_download();
    }
    else
    {
        HWIFI_ERROR("Invalid null g_wlan_info->download_patch!");
        ret = -EFAIL;
    }
    HWIFI_DEBUG("Succeed to download patch!");

    return ret;
}
/* DTS2014030510175    Hi110x bug fix z00209041 20140320  end */

/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
/*
 * Prototype    : hi110x_pm_stat_clear
 * Description  : clear pm some stat, not all
 * Input        : struct sdio_func *func
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/12/30
 *     Author       : z00262551
 *     Modification : Created function
 *
 */
void hi110x_pm_stat_clear(void)
{
    if(!g_pm_info)
        return;
    g_pm_info->hi110x_dev->pm_info->pm_stat.sleep_count = 0;
    g_pm_info->hi110x_dev->pm_info->pm_stat.wakeup_count = 0;
    g_pm_info->hi110x_dev->pm_info->pm_stat.host_dev_wakeup = 0;
#if 0
    g_pm_info->hi110x_dev->pm_info->pm_stat.sleep_fail_count = 0;
    g_pm_info->hi110x_dev->pm_info->pm_stat.wakeup_fail_count = 0;
    g_pm_info->hi110x_dev->pm_info->pm_stat.sleep_fail_cpu_time = 0;
    g_pm_info->hi110x_dev->pm_info->pm_stat.wakeup_fail_cpu_time = 0;
#endif
}
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */

/*
 * Prototype    : hi110x_pm_sdio_deinit
 * Description  : deinit sdio
 * Input        : struct sdio_func *func
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_pm_dev_deinit(struct sdio_func *func)
{
    int32               ret;

    HWIFI_ASSERT(NULL != func);
    HWIFI_INFO("Pm Sdio deinit");
    sdio_claim_host(func);
    hi110x_pm_stop_wdg(g_pm_info);
    sdio_writeb(func, 0, REG_FUNC1_INT_ENABLE, &ret);
    if (!intr_mode)
    {
        ret |= sdio_release_irq(func);
    }

    ret |= sdio_disable_func(func);

    /* set sdio status flag */
    /*g_sdio_status = FALSE;*/
    /*disable sdio state*/
    bus_set_state(g_pm_info->hi110x_dev->hcc->io_dev, FALSE);
    sdio_release_host(func);

    HWIFI_INFO("Pm Sdio deinit Done.");

    return ret;
}

/*
 * Prototype    : hi110x_pm_enable_sdio_isr
 * Description  : reinit sdio when wake up
 * Input        : struct sdio_func *func
 * Output       :
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
 STATIC int32 hi110x_pm_enable_sdio_isr (struct sdio_func *func)
{
    int32 ret = SUCC;

    sdio_claim_host(func);
    /*
     * enable four interrupt sources in function 1:
     *      data ready for host to read
     *      read data error
     *      message from arm is available
     *      device has receive message from host
     * */
    sdio_writeb(func, HI110X_FUNC1_INT_MASK, REG_FUNC1_INT_ENABLE, &ret);
    if (ret < 0)
    {
        HWIFI_ERROR("pm reinit sdio write interrupt enable reg fail.");
        sdio_disable_func(func);
        sdio_release_host(func);

        return -EFAIL;
    }

    /* 设置SDIO状态以及总线状态标志 */
    bus_set_state(g_pm_info->hi110x_dev->hcc->io_dev, TRUE);

    sdio_release_host(func);

    return ret;
}


/*
 * Prototype    : hi110x_pm_sdio_init
 * Description  : reinit sdio when wake up
 * Input        : struct sdio_func *func
 * Output       :
 * Return Value : succ or fail
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 hi110x_pm_sdio_init(struct sdio_func *func)
{
    int32               ret = 0;

    HWIFI_ASSERT(NULL != func);
    HWIFI_INFO("Pm sdio init");
    sdio_claim_host(func);
    ret = sdio_enable_func(func);
    if (ret < 0)
    {
        HWIFI_ERROR("Failed to enable sdio func!");
        sdio_release_host(func);

        return -EFAIL;
    }

    ret = sdio_set_block_size(func, SDIO_BLOCK_SIZE);
    if (ret < 0)
    {
        HWIFI_ERROR("Failed to set sdio block size!");
        sdio_disable_func(func);
        sdio_release_host(func);

        return -EFAIL;
    }

    sdio_release_host(func);
    HWIFI_INFO("Pm sdio init Sucuess");

    return SUCC;
}

/* DTS2013120901517  Hi110x bug fix z00209041 日期（2013年/11月/8日） begin */
/*
 * Prototype    : hi110x_sdio_reinit
 * Description  : reinit sdio
 * Input        : None
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/12/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_sdio_reinit(void)
{
    int32  ret;
    uint32 loop;
    struct sdio_func *func = g_pm_info->sdio_func;
    HWIFI_INFO("pm reinit sdio enter...");
    hi110x_gpio_intr_enable(0);
    if (NULL != func)
    {
        ret = sdio_reset_comm(func->card);
        if (ret)
        {
            HWIFI_WARNING("reset sdio failed,retry %d times!",SDIO_RESET_RETRY);

            for(loop=0;loop<SDIO_RESET_RETRY;loop++)
            {
                /* DTS2014030510175    Hi110x bug fix z00209041 20140320  begin */
                mdelay(100);
                /* DTS2014030510175    Hi110x bug fix z00209041 20140320  end */
                if (SUCC == sdio_reset_comm(func->card))
                {
                    HWIFI_INFO("sdio_reset_comm succ at %d times!",loop);
                    break;
                }
            }
            if (SDIO_RESET_RETRY == loop)
            {
                hi110x_gpio_intr_enable(1);
                HWIFI_WARNING("reset sdio failed after retry %d times,exit %s!",SDIO_RESET_RETRY,__FUNCTION__);
                return -EFAIL;
            }
        }

        /* sdio function1初始化
         * 1、使能fuction1
         * 2、设置块大小
         */
        ret = hi110x_pm_sdio_init(func);
        if (ret < 0)
        {
            hi110x_gpio_intr_enable(1);
            HWIFI_WARNING("pm sdio function1 init failed...");
            return ret;
        }

        /* 使能SDIO中断 */
        ret = hi110x_pm_enable_sdio_isr(func);
        if (ret < 0)
        {
            hi110x_gpio_intr_enable(1);
            HWIFI_WARNING("pm enable sdio isr failed...");
            return ret;
        }

    }
    else
    {
        hi110x_gpio_intr_enable(1);
        HWIFI_ERROR("pm sdio func is NULL\n");
        return -EFAIL;
    }

    HWIFI_INFO("pm reinit sdio success...");
    hi110x_gpio_intr_enable(1);
    return SUCC;
}
/* DTS2013120901517   Hi110x bug fix z00209041 日期（2013年/11月/8日） end */

/*
 * Prototype    : hi110x_pm_dev_wakeup
 * Description  : wake up process
 * Input        : None
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/12/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_pm_dev_wakeup(void)
{
    int32  ret;
    uint32 loop;
    struct hi110x_sdio *hi_sdio = bus_to_sdio(g_pm_info->hi110x_dev->hcc->io_dev);
    struct sdio_func *func = g_pm_info->sdio_func;
    HWIFI_INFO("pm dev wake up enter...");
    hi110x_gpio_intr_enable(0);
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/z00262551 2013/12/5 begin */
    hisdio_heartbeat_timer_stop(hi_sdio);
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/z00262551 2013/12/5 end */
    if (NULL != func)
    {
        /* pull up GPIO, allow data transfer */
        g_wlan_info->wlan_gpio_state_set(TRUE);

        /* wait for device wakeup */
        /* DTS2013110707763 Hi110x bug fix l00225847 20131111 begin */
        /*  DTS2014092203023  Hi110x bug fix z00262551 begin */
        ret = down_timeout(&sdio_wake_sema, 6*HZ);
        /*  DTS2014092203023  Hi110x bug fix z00262551 end */
        if (-ETIME == ret)
        {
            hi110x_gpio_intr_enable(1);
            HWIFI_ERROR("sdio controller is not ready!");
            return -EFAIL;
        }
        up(&sdio_wake_sema);

        hsdio_sdio_iocfg(PINCTRL_STATE_DEFAULT);

        /* DTS2013110707763 Hi110x bug fix l00225847 20131111 end */
        ret = sdio_reset_comm(func->card);
        if (ret)
        {
            HWIFI_WARNING("reset sdio failed,retry %d times!",SDIO_RESET_RETRY);

            for(loop=0;loop<SDIO_RESET_RETRY;loop++)
            {
                /* DTS2013120901517   Hi110x bug fix l00225847 20131210 begin */
                g_wlan_info->wlan_gpio_state_set(FALSE);
                /* DTS2015011700949  Hi110x bug fix hwx212164 2015/02/10 begin */
                mdelay(50);
                /* DTS2015011700949 Hi110x bug fix hwx212164 2015/02/10 end */
                g_wlan_info->wlan_gpio_state_set(TRUE);
                mdelay(500);
                /* DTS2013120901517   Hi110x bug fix l00225847 20131210 end */
                if (SUCC == sdio_reset_comm(func->card))
                {
                    HWIFI_INFO("sdio_reset_comm succ at %d times!",loop);
                    break;
                }
            }
            if (SDIO_RESET_RETRY == loop)
            {
                hi110x_gpio_intr_enable(1);
                HWIFI_WARNING("reset sdio failed after retry %d times,exit %s!",SDIO_RESET_RETRY,__FUNCTION__);
                if(!(g_pm_info->pm_stat.wakeup_fail_count++))
                    g_pm_info->pm_stat.wakeup_fail_cpu_time = cpu_clock(UINT_MAX);
                /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 begin */
                hwifi_exception_submit(g_pm_info->hi110x_dev->hcc);
                /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 end */
                return -EFAIL;
            }
        }

        /* 设置SDIO 状态*/
        /*g_sdio_status = TRUE;*/

        /* sdio function1初始化
         * 1、使能fuction1
         * 2、设置块大小
         */
        ret = hi110x_pm_sdio_init(func);
        if (ret < 0)
        {
            hi110x_gpio_intr_enable(1);
            HWIFI_WARNING("pm sdio function1 init failed...");
            if(!(g_pm_info->pm_stat.wakeup_fail_count++))
                g_pm_info->pm_stat.wakeup_fail_cpu_time = cpu_clock(UINT_MAX);
            /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 begin */
            hwifi_exception_submit(g_pm_info->hi110x_dev->hcc);
            /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 end */
            return ret;
        }

        /* 使能SDIO中断 */
        ret = hi110x_pm_enable_sdio_isr(func);
        if (ret < 0)
        {
            hi110x_gpio_intr_enable(1);
            HWIFI_WARNING("pm enable sdio isr failed...");
            if(!(g_pm_info->pm_stat.wakeup_fail_count++))
                g_pm_info->pm_stat.wakeup_fail_cpu_time = cpu_clock(UINT_MAX);
            /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 begin */
            hwifi_exception_submit(g_pm_info->hi110x_dev->hcc);
            /*DTS2013120203675   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 end */
            return ret;
        }

        /* 启动喂狗*/
        if (g_pm_info)
        {
            hi110x_pm_start_wdg(g_pm_info);
        }
    }
    else
    {
        hi110x_gpio_intr_enable(1);
        HWIFI_ERROR("pm sdio func is NULL\n");
        if(!(g_pm_info->pm_stat.wakeup_fail_count++))
            g_pm_info->pm_stat.wakeup_fail_cpu_time = cpu_clock(UINT_MAX);
        return -EFAIL;
    }

    /*hcc state should be updated when both device wake up host
    and host wakeup device, and the reinit process had been protected by
    hcc_tx_transfer_lock!*/
    hcc_set_tx_queue_status(g_pm_info->hi110x_dev->hcc, hcc_running);

    HWIFI_INFO("wake up success...");
    g_pm_info->pm_stat.wakeup_count++;
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/z00262551 2013/12/5 begin */
    hisdio_heartbeat_timer_start(hi_sdio, hi_sdio->heartbeat.work_timeout);
    /*DTS2013120500048   Hi110x bug fix zhouxinfeng/z00262551 2013/12/5 end */
    hi110x_gpio_intr_enable(1);
    return SUCC;
}


/*
 * Prototype    : hi110x_wlan_power_set
 * Description  : wlan enable GPIO, set power on or off
 * Input        : None
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_wlan_power_set(uint8 value)
{
    HWIFI_INFO("hi110x wlan set  [power %s]" ,
                (FALSE==value)? "down":"up");
    /* DTS2013110603488   Hi110x bug fix l00225847 20131106  begin */
    /* do not enable gpio_intr before wifi enable */
    hsdio_sdio_iocfg(PINCTRL_STATE_IDLE);
    if (FALSE == value)
    {
        hi110x_gpio_intr_enable(value);
        wlan_power_set(value);
    }
    else
    {
        wlan_power_set(value);
        hi110x_gpio_intr_enable(value);
        hsdio_sdio_iocfg(PINCTRL_STATE_DEFAULT);
    }
    /* DTS2013110603488   Hi110x bug fix l00225847 20131106  end */
}


/*
 * Prototype    : hi110x_pm_poweron_reinit
 * Description  : after wake up, reinit host sdio
 * Input        : None
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_pm_poweron_reinit(void)
{
    /*DTS2013120205683   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 begin */
    int retry_count = 0;
    int ret = SUCC;
    static int force_load= 1;/*debug*/
    struct sdio_func *func = g_pm_info->sdio_func;

    /* power up wlan enable */
    /* DTS2013110603488   Hi110x bug fix l00225847 20131106  begin */
    /* do not enable gpio_intr before wifi enable */
retry:
    hsdio_sdio_iocfg(PINCTRL_STATE_IDLE);
    wlan_power_set(FALSE);
    /*  DTS2013110603488  Hi110x bug fix l00225847 20131106  end */
    mdelay(2);
    /* DTS2013120901517   Hi110x bug fix l00225847 20131210  begin */
    /* do not enable gpio_intr before patch download */
    wlan_power_set(TRUE);
    /* DTS2013120901517   Hi110x bug fix l00225847 20131210  end */
    hsdio_sdio_iocfg(PINCTRL_STATE_DEFAULT);

    if (NULL != func)
    {
        ret = sdio_reset_comm(func->card);
        if(ret && !force_load)
        {
            HWIFI_ERROR("reset comm failed! please attention!");
            ret = -EFAIL;
            goto failed;
        }

        /* 设置SDIO状态*/
        /*g_sdio_status = TRUE;*/

        /* sdio function1初始化
         * 1、使能fuction1
         * 2、设置块大小
         */
        ret = hi110x_pm_sdio_init(func);
        if(ret && !force_load)
        {
            HWIFI_ERROR("Failed to init pm sdio!");
            ret = -EFAIL;
            goto failed;
        }

        /* DTS2014030510175    Hi110x bug fix z00209041 20140320  begin */
        /* download patch */
        ret = hi110x_sdio_download_patch();
        if (ret < 0)
        {
            HWIFI_WARNING("Download patch Failed...");
            ret = -EFAIL;
            goto failed;
        }
        /* DTS2014030510175    Hi110x bug fix z00209041 20140320  begin */

        /* DTS2013120901517   Hi110x bug fix l00225847 20131210  begin */
        /* enable gpio_int after patch download */
        hi110x_gpio_intr_enable(TRUE);
        /* DTS2013120901517   Hi110x bug fix l00225847 20131210  end */

        /* 使能SDIO中断 */
        ret = hi110x_pm_enable_sdio_isr(func);
        if (ret < 0)
        {
            HWIFI_WARNING("pm enable sdio isr failed...");
            ret = -EFAIL;
            goto failed;
        }
    }
    else
    {
        HWIFI_ERROR("pm sdio func is NULL\n");
        ret = -EFAIL;
    }

    return ret;
failed:
    if(retry_count < 2 && exception_enable)
    {
        retry_count++;
        HWIFI_WARNING("power on failed, we retry... %d times", retry_count);
        goto retry;
    }
    /*DTS2013120205683   Hi110x bug fix zhouxinfeng/z00262551 2013/12/3 end */
    return ret;
}

/*
 * Prototype    : hi110x_feed_watchdog
 * Description  : feed watchdog for low power manager
 * Input        : struct hi110x_sdio *hi_sdio
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_pm_feed_wdg(struct hi110x_pm_info *pm_info)
{
    struct cfg_struct *cfg;

    cfg = pm_info->hi110x_dev->cfg;
    HWIFI_ASSERT(cfg != NULL);

    /* DTS2013121206795   Hi110x bug fix z00209041 日期（2013年/11月/8日） begin */
    if (!g_powermgmt_switch)
    {
        HWIFI_INFO("lower power switch is off");
        return;
    }
    /* DTS2013121206795   Hi110x bug fix z00209041 日期（2013年/11月/8日） end */

    /**
     * 需要同时满足两个条件才能喂狗:
     * 1、用户处于STA模式
     * 2、关联成功
     */
    /* DTS2013110501752   Hi110x bug fix 张华/z00209041 日期（2013年/11月/8日） begin */
    if (IS_STA(cfg) && IS_CONNECTED(cfg) && IS_GET_IPADDR(pm_info))
    /* DTS2013110501752   Hi110x bug fix 张华/z00209041 日期（2013年/11月/8日） end */
    {
        HWIFI_DEBUG("WiFi Feed Watchdog");
        /* DTS2015041605894 Hi1101 bug fix hwx212164 2015/04/16 begin */
        if (cfg->hi110x_dev->pm_info->in_suspend)
        {
            int watchdog_timeout = g_watchdog_timeout * HZ / 1000;
            watchdog_timeout = (watchdog_timeout > 0) ?
                watchdog_timeout : (DEFAULT_WATCHDOG_TIMEOUT * HZ / 1000);
            HWIFI_DEBUG("suspend enter powersave after watchdog_timeout:%d", watchdog_timeout);
            mod_timer(&pm_info->watchdog_timer, jiffies + watchdog_timeout);
        } else {
            mod_timer(&pm_info->watchdog_timer, jiffies + DEFAULT_WATCHDOG_TIMEOUT * HZ / 1000);
        }
        /* DTS2015041605894 Hi1101 bug fix hwx212164 2015/04/16 end */
    }
    else if (TRUE == IS_AP(cfg))
    {
        /* DTS2013111802227 AP睡眠功能打开 */
        mod_timer(&pm_info->watchdog_timer, jiffies + g_watchdog_timeout * HZ);
    }
}

/*
 * Prototype    : hi110x_pm_allow_sleep
 * Description  : allow Device deep sleep, pull down GPIO
 * Input        : struct hi110x_pm_info *pm_info
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_pm_allow_sleep(struct hi110x_pm_info *pm_info)
{
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    if (g_powermgmt_switch && (!pm_info->roam_trigger))
    {
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
        HWIFI_INFO("Host Sdio Start to Sleep, Sdio deinit and Power off Wlan Device");
        hi110x_pm_dev_deinit(pm_info->sdio_func);
        hsdio_bus_suspend(pm_info->hi110x_dev->hcc->io_dev);

        /*set tx queue to sleep mode,
          tx chan will wake up when have tx data transfer.*/
        hcc_set_tx_queue_status(pm_info->hi110x_dev->hcc, hcc_sleeping);

        /* 通知漫游现在已经为深睡眠状态 */
        if (pm_info->get_deepsleep_state)
        {
            HWIFI_INFO("Notify roam,now Device is deep sleep");
            pm_info->get_deepsleep_state(DEEPSLEEP_STATE);
        }
        else
        {
            HWIFI_INFO("Roam is not register get_deepsleep_state func");
        }

        /* pull Host wakeup Dev GPIO down, allow Device sleep */
        HWIFI_INFO("Pull down GPIO, Notify Wlan Device to Sleep");

        hsdio_sdio_iocfg(PINCTRL_STATE_IDLE);

        g_wlan_info->wlan_gpio_state_set(FALSE);

        /* DTS2013111406057  Hi110x bug fix z00209041 2013/11/26 begin */
        HWIFI_INFO("We still hold %d wifi wake lock. unlock one",
                    pm_info->wklock_cnt);
        hi110x_wake_unlock(pm_info);
        /* DTS2013111406057  Hi110x bug fix z00209041 2013/11/26 end */

        HWIFI_INFO("WiFi Sleep Process Done.");
        /* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 begin */
        pm_info->pm_stat.sleep_count++;
        /* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 end */
    }
    else
    {
        HWIFI_INFO("Don't allow to deepsleep...");
    }
}

/*
 * Prototype    : fit_max_cpufreq
 * Description  : fit max cpu freq 240MHz
 * Input        : struct cfg_struct *cfg
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 fit_max_cpufreq(struct cfg_struct *cfg)
{
    int32 ret;

    HWIFI_ASSERT(cfg != NULL);
    ret = hwifi_fit_cpufreq(cfg, WLCPU_240MHZ);
    return ret;
}

/*
 * Prototype    : cpufreq40M_process
 * Description  : last cpu freq is 40MHz,process for perform statistic
 * Input        : struct cfg_struct *cfg
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/8/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 cpufreq40M_process(struct cfg_struct *cfg)
{
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/8 begin */
    int32 ret = SUCC;
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/8 end */

    if (g_perform_statistic->total_sdio_rate > (g_sdio_rate_40M - EXIT_THRESHOLD_DELTA)
        || g_perform_statistic->total_pps_rate > BPS_TO_PPS(g_sdio_rate_40M - EXIT_THRESHOLD_DELTA))
    {
        HWIFI_DEBUG("Device cpu freq fit max to 240MHz; 40MHz->240MHz");
        ret = fit_max_cpufreq(cfg);
    }

    return ret;
}

/*
 * Prototype    : cpufreq80M_process
 * Description  : last cpu freq is 80MHz,process for perform statistic
 * Input        : struct cfg_struct *cfg
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 cpufreq80M_process(struct cfg_struct *cfg)
{
    int32 ret = SUCC;

    if (g_perform_statistic->total_sdio_rate > (g_sdio_rate_80M - EXIT_THRESHOLD_DELTA)
        || g_perform_statistic->total_pps_rate > BPS_TO_PPS(g_sdio_rate_80M - EXIT_THRESHOLD_DELTA))
    {
        HWIFI_DEBUG("Device cpu freq fit max to 240MHz; 80MHz->240MHz");
        ret = fit_max_cpufreq(cfg);
    }
    else if (g_perform_statistic->total_sdio_rate < (g_sdio_rate_40M - ENTER_THRESHOLD_DELTA)
        && g_perform_statistic->total_pps_rate < BPS_TO_PPS(g_sdio_rate_40M - ENTER_THRESHOLD_DELTA))
    {
        HWIFI_DEBUG("Device cpu freq fit; 80MHz->40MHz");
        ret = hwifi_fit_cpufreq(cfg, WLCPU_40MHZ);
    }
    else
    {
        HWIFI_DEBUG("do not need to change cpu freq, now is 80 MHz");
    }

    return ret;
}

/*
 * Prototype    : cpufreq160M_process
 * Description  : last cpu freq is 160MHz,process for perform statistic
 * Input        : struct cfg_struct *cfg
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/23
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 cpufreq160M_process(struct cfg_struct *cfg)
{
    int32 ret = SUCC;

    if (g_perform_statistic->total_sdio_rate < (g_sdio_rate_80M - ENTER_THRESHOLD_DELTA)
        && g_perform_statistic->total_pps_rate < BPS_TO_PPS(g_sdio_rate_80M - ENTER_THRESHOLD_DELTA))
    {
        HWIFI_DEBUG("Device cpu freq fit; 160MHz->80MHz");
        ret = hwifi_fit_cpufreq(cfg, WLCPU_80MHZ);
    }
    else
    {
        HWIFI_DEBUG("do not need to change cpu freq, now is 160 MHz");
    }

    return ret;
}

/*
 * Prototype    : cpufreq240M_process
 * Description  : last cpu freq is 240MHz,process for perform statistic
 * Input        : struct cfg_struct *cfg
 * Output       : None
 *   History        :
 *   1.Date         : 2014/8/5
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC int32 cpufreq240M_process(struct cfg_struct *cfg)
{
    int32 ret = SUCC;

    if (g_perform_statistic->total_sdio_rate < (g_sdio_rate_80M - ENTER_THRESHOLD_DELTA)
        && g_perform_statistic->total_pps_rate < BPS_TO_PPS(g_sdio_rate_80M - ENTER_THRESHOLD_DELTA))
    {
        HWIFI_DEBUG("Device cpu freq fit; 240MHz->80MHz");
        ret = hwifi_fit_cpufreq(cfg, WLCPU_80MHZ);
    }
    else
    {
        HWIFI_DEBUG("do not need to change cpu freq, now is 240 MHz");
    }

    return ret;
}


/*
 * Prototype    : hi110x_reduce_freq_process
 * Description  : process reduce cpu freq
 * Input        : struct cfg_struct *cfg

 *   History        :
 *   1.Date         : 2013/8/13
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_reduce_freq_process(struct cfg_struct *cfg)
{
    int32 ret = SUCC;
    uint8 last_cpufreq;

    HWIFI_ASSERT(cfg != NULL);

    last_cpufreq = g_pm_info->last_cpufreq;
    /**
     * 各个频率下收发的最大承载量
     * 吞吐量 MAXCAP_40MHZ_RATE...........cpu频率40MHz
     * 吞吐量 80MHZ_MAXCAP_RATE...........cpu频率80MHz
     * 吞吐量 160MHZ_MAXCAP_RATE..........cpu频率160MHz
     * 吞吐量 240MHZ_MAXCAP_RATE..........cpu频率240MHz
     */
    switch (last_cpufreq)
    {
        case WLCPU_40MHZ:
            ret = cpufreq40M_process(cfg);
            break;
        case WLCPU_80MHZ:
            ret = cpufreq80M_process(cfg);
            break;
        case WLCPU_160MHZ:
            ret = cpufreq160M_process(cfg);
            break;
        case WLCPU_240MHZ:
            ret = cpufreq240M_process(cfg);
            break;

        default:
            break;
    }

    return SUCC;
}

/*
 * Prototype    : hi110x_fitcpu_for_throughput
 * Description  : fit cpu frequency fot throughput
 * Input        : struct hi110x_sdio *hi_sdio
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/13
 *     Author       : z00209041
 *     Modification : Created function
 *     Modification : Created function
 *
 */
int32 hi110x_fitcpu_for_throughput(struct hi110x_sdio *hi_sdio, uint32 len, uint32 pkt_cnt)
{
    struct cfg_struct   *cfg;
    int                  ret = SUCC;

    HWIFI_ASSERT(hi_sdio != NULL);
    HWIFI_ASSERT(hi_sdio->hi110x_dev != NULL);
    HWIFI_ASSERT(hi_sdio->hi110x_dev->cfg != NULL);

    cfg = hi_sdio->hi110x_dev->cfg;

    /**
     *动态配置CPU频率的几个条件
      1、睡眠的GPIO引脚为高电平
      2、未配置静态CPU频率
      3、网卡为open状态
     */
    if (g_wlan_info->wlan_gpio_state_get()
        && !g_cur_cpufreq
        && (atomic_read(&hi_sdio->hi110x_dev->pm_info->wlanopen_cnt) > 0))
    {
        hwifi_perform_rwtotal_sdio_statistic(len, pkt_cnt);
        ret = hi110x_reduce_freq_process(cfg);
    }

    return ret;
}

/*
 * Prototype    : hi110x_pm_stop_wdg
 * Description  : stop watchdog
 * Input        : struct hi110x_pm_info *pm_info
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/6/26
 *     Author       : z00262551
 *     Modification : Created function
 *
 */
int32 hi110x_pm_stop_wdg(struct hi110x_pm_info *pm_info)
{
    HWIFI_INFO("Stop wlan watchdog");
    if(in_interrupt())
    {
        return del_timer(&pm_info->watchdog_timer);
    }
    else
    {
        return del_timer_sync(&pm_info->watchdog_timer);
    }
}

/*
 * Prototype    : hi110x_pm_stop_wdg
 * Description  : stop watchdog
 * Input        : struct hi110x_pm_info *pm_info
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/6/26
 *     Author       : z00262551
 *     Modification : Created function
 *
 */
int32 hi110x_pm_start_wdg(struct hi110x_pm_info *pm_info)
{
    /*only set the flag , start watchdog wait for next transfer*/
    /*FIXME? need protect?*/
    HWIFI_INFO("Start wlan watchdog [<== %pF]", __builtin_return_address(0));
    hi110x_pm_feed_wdg(pm_info);

    return SUCC;
}

/*
 * Prototype    : hi110x_stop_powermgmt
 * Description  : stop powermgmt
 * Input        : struct hi110x_device *hi110x_dev
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/8/26
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_stop_powermgmt(struct hi110x_device *hi110x_dev)
{
/* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    int32 ret;

    HWIFI_ASSERT(hi110x_dev != NULL);
    HWIFI_ASSERT(hi110x_dev->pm_info != NULL);

    spin_lock_bh(&hi110x_dev->pm_info->suspend_lock);
    HWIFI_INFO("stop wlan powermgmt...");

    ret = hi110x_pm_powermode_set(hi110x_dev->cfg, HI110X_POWERMODE_OFF);

    g_powermgmt_switch = FALSE;
    spin_unlock_bh(&hi110x_dev->pm_info->suspend_lock);
    hi110x_pm_stop_wdg(hi110x_dev->pm_info);

    return ret;
/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
}

/*
 * Prototype    : hi110x_start_powermgmt
 * Description  : start powermgmt
 * Input        : struct hi110x_device *hi110x_dev
 * Output       : None
 *   History        :
 *   1.Date         : 2013/8/26
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
 /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
int32 hi110x_start_powermgmt(struct hi110x_device *hi110x_dev, uint32 roam_results)
{
    int32 ret = SUCC;

    HWIFI_ASSERT(hi110x_dev != NULL);
    HWIFI_ASSERT(hi110x_dev->pm_info != NULL);

    HWIFI_INFO("start wlan powermgmt...");

    spin_lock_bh(&hi110x_dev->pm_info->suspend_lock);
    g_powermgmt_switch = TRUE;

    /* roam success */
    if (roam_results)
    {
        if (hi110x_dev->pm_info->screen_state)
        {
            ret = hi110x_pm_powermode_set(hi110x_dev->cfg, HI110X_POWERMODE_MIN);
        }
        else
        {
            ret = hi110x_pm_powermode_set(hi110x_dev->cfg, HI110X_POWERMODE_MAX);
        }
    }
    spin_unlock_bh(&hi110x_dev->pm_info->suspend_lock);
    hi110x_pm_start_wdg(hi110x_dev->pm_info);

    return ret;
}

STATIC void hi110x_set_roam_state(struct hi110x_device *hi110x_dev, uint32 state)
{
    hi110x_dev->pm_info->roam_trigger = state;

    return;
}
/* DTS2014050806333 HI1101 bug fix 2014-6-13 end */

/* DTS2014011602689  Hi110x bug fix zhouxinfeng/z00262551 2014/1/27 begin */
STATIC int32 hi110x_get_ba_status(struct hi110x_device *hi110x_dev)
{
    if(unlikely(!hi110x_dev||!hi110x_dev->cfg))
    {
        /*If not init, we forbid sleep*/
        return TRUE;
    }
#ifdef WLAN_ARRG_DYNAMIC_CONTROL
    return hi110x_dev->cfg->aggre_info.aggr_start;
#else
    return FALSE;
#endif
}
/* DTS2014011602689  Hi110x bug fix zhouxinfeng/z00262551 2014/1/27 end */

/*
 * Prototype    : hi110x_send_sleepmsg
 * Description  : send msg to Device, sleep device
 * Input        : None
 * Output       : None
 * Return Value :
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/6/21
 *     Author       : z00209041
 *     Modification : Created function
 *   2.Date         :2013/11/6
 *     MOdifcation  : z00262551 zhouxinfeng 2013/11/7:DTS2013110402060
 */
 /* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 begin */
int32 hi110x_sleep_request(struct sdio_func *func)
{
    int32 ba_s;
    int wlan_state;
    uint32      queue_len;
    int32       ret = SUCC;
    wlan_state = g_wlan_info->wlan_gpio_state_get();
    if ((FLOWCTRL_ON == g_flowctrl_flag) && (TRUE == wlan_state))
    {

        if (g_hi110x_dev->hcc != NULL)
        {
            queue_len = check_txqueue_status(g_hi110x_dev->hcc);
            /* DTS2014011602689  Hi110x bug fix zhouxinfeng/z00262551 2014/1/27 begin */
            ba_s            = hi110x_get_ba_status(g_hi110x_dev);
            /* DTS2014011602689  Hi110x bug fix zhouxinfeng/z00262551 2014/1/27 end */
            if (!queue_len && !ba_s)
            {
                g_pm_info->allowsleep_flag = TRUE;

                HWIFI_INFO("Send sleep request msg to device");
                sdio_claim_host(func);
                /* set msg to Device for low powermanagement */
                sdio_writel(func, HOST2HI110X_TRYSLEEP_MSG, REG_FUNC1_WRITE_MSG, &ret);
                if (ret < 0)
                {
                    HWIFI_WARNING("Failed to send device sleep msg!ret=%d", ret);
                    ret = -EFAIL;
                }
                sdio_release_host(func);
                return ret;
            }
            else
            {
                /*We can sleep when
                  *1.tx queue empty
                  *2.Device ba had been deleted*/
                HWIFI_INFO("Tx queue has %s data now, device ba did %s delete, we can't sleep.",
                                        queue_len?"":"no",
                                        ba_s?"not":"");
                return PM_FORBID_SLEEP;
            }
        }
        else
        {
            HWIFI_ERROR("Cat not check tx queue status, hcc ptr is NULL");

            return PM_FORBID_SLEEP;
        }
    }
    else
    {
        HWIFI_INFO("Flow Ctrl %s, device is %s, Can't request device sleep.",
                   (FLOWCTRL_ON == g_flowctrl_flag)?"On":"Off",
                   (TRUE == wlan_state)?"running":"already sleeping");
        return PM_FORBID_SLEEP;
    }

    return SUCC;
}
/* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 end */
/*
 * Prototype    : hi110x_pm_watchdog
 * Description  : pm timeout process function, start watchdog thread
 * Input        :
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *    z00262551 zhouxinfeng 2013/11/7:DTS2013110402060
 */
STATIC void hi110x_pm_watchdog_timeout(struct hi110x_pm_info *pm_info)
{
    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 begin */
    struct hi110x_sdio *hi_sdio = bus_to_sdio(pm_info->hi110x_dev->hcc->io_dev);

    if (!g_powermgmt_switch)
    {
        HWIFI_WARNING("low power manager is off");
        return;
    }

    hi110x_wake_lock(pm_info);
    if(hsdio_sleep_submit(hi_sdio, &hi_sdio->sleep_work))
    {
        /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
         hi110x_wake_unlock(pm_info);
        /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */
        HWIFI_WARNING("Sleep Event Submit Failed!");
    }
    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/z00262551 2013/11/7 end */
}

/*
 * Prototype    : hi110x_patch_writesb
 * Description  : provide interface for pm driver
 * Input        : uint8* buf, uint32 len
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/12/24
 *     Author       : shenligang swx143599
 *     Modification : Created function
 *
 */
STATIC int32 hi110x_patch_writesb(uint8* buf, uint32 len)
{
    int ret;
    struct sdio_func *func = g_pm_info->sdio_func;

    if (NULL == func)
    {
        HWIFI_ERROR("Sdio device is NOT initialized\n");
        return -EFAIL;
    }

    if (NULL == buf || len == 0)
    {
        HWIFI_ERROR("Write buf is NULL\n");
        return -EFAIL;
    }

    len  = SDIO_ALIGN_4_OR_BLK(len);

    sdio_claim_host(func);
    ret = sdio_writesb(func, REG_FUNC1_FIFO, buf, len);
    if (ret < 0)
    {
        HWIFI_ERROR("sdio_writesb error:%d\n", ret);
    }
    sdio_release_host(func);

    return ret;
}

/*
 * Prototype    : hi110x_patch_readsb
 * Description  : provide interface for pm driver
 * Input        : uint8* buf, uint32 len
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/12/24
 *     Author       : shenligang swx143599
 *     Modification : Created function
 *
 */
STATIC int32 hi110x_patch_readsb(uint8* buf, uint32 len)
{
    uint8   int_mask;
    uint8  *ver_info;
    int     ret;
    int     timeout = HI110X_VER_MAX_TIMEOUT;
    uint32  xfer_count;
    int     i;
    struct sdio_func *func = g_pm_info->sdio_func;

    if (NULL == func)
    {
        HWIFI_ERROR("sdio device is NOT initialized");

        return -EFAIL;
    }

    if (NULL == buf || 0 == len)
    {
        HWIFI_ERROR("Invalid NULL read buf");

        return -EFAIL;
    }

    sdio_claim_host(func);
    do {
        int_mask = sdio_readb(func, REG_FUNC1_INT_STATUS, &ret);
        //If run_mode is factory, the code run the factory branch.
        if(!strcmp(g_run_mode,"factory"))
        {
            //HWIFI_ERROR("sdio_readb run FTY");
            if(ret)
            {
                HWIFI_ERROR("sdio_readb failed ret=%d", ret);
                sdio_release_host(func);
                return -EFAIL;
            }

            if (int_mask & HI110X_FUNC1_INT_MASK)
            {
                break;
            }
        }
        else
        {
            //HWIFI_ERROR("sdio_readb run normal: %s", g_run_mode);
            if (ret >= 0 && (int_mask & HI110X_FUNC1_INT_MASK))
            {
                break;
            }
        }
        /* max timeout 100 ms*/
        timeout--;
        msleep(5);
    } while (timeout > 0);

    if (0 == timeout)
    {
        HWIFI_ERROR("read int mask timeout, int_mask=%x", int_mask);
        sdio_release_host(func);
        return -EFAIL;
    }

    sdio_writeb(func, int_mask, REG_FUNC1_INT_STATUS, &ret);
    if (ret < 0)
    {
        HWIFI_ERROR("clear int mask error:%d", ret);
        sdio_release_host(func);
        return -EFAIL;
    }

    xfer_count = sdio_readl(func, REG_FUNC1_XFER_COUNT, &ret);
    if (ret < 0)
    {
        HWIFI_ERROR("read xfer_count err:%d", ret);
        sdio_release_host(func);
        return -EFAIL;
    }

    HWIFI_DEBUG("xfer_cout=%d, len=%d", xfer_count, len);

    if (xfer_count < len)
    {
        len = xfer_count;
        HWIFI_INFO("xfer_count(%d) not equal to len(%d)", xfer_count, len);
    }

    ver_info = kzalloc((xfer_count + 1), GFP_KERNEL);
    if (NULL == ver_info)
    {
        sdio_release_host(func);
        return -ENOMEM;
    }

    memset(ver_info, 0, xfer_count);
    ret = sdio_readsb(func, ver_info, REG_FUNC1_FIFO, xfer_count);
    if (ret < 0)
    {
        HWIFI_ERROR("hsdio_readsb error:%d", ret);
    }
    else
    {
        for (i = 0; i < len; i++)
        {
            buf[i] = ver_info[i];
        }
    }
    kfree(ver_info);

    sdio_release_host(func);

    return xfer_count;
}

/*
 * Prototype    : early_parse_run_mode_cmdline
 *   Description    : set run_mode to normal or factory.
 *   1.Date         : 2016/7/14
 *     Author       : z00218307
 *     Modification : Created function
 *
 */
static int __init early_parse_run_mode_cmdline(char * p)
{
    if(!p)
    {
        printk("get run mode fail!");
        return 0;
    }
    strncpy(g_run_mode, p, RUN_MODE_LEN);
    return 0;
}
early_param("androidboot.swtype", early_parse_run_mode_cmdline);

/*
 * Prototype    : hi110x_pm_powermode_set
 *   History        :
 *   1.Date         : 2013/8/2
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_pm_powermode_set(struct cfg_struct *cfg, int32 ps_mode)
{
    int32 ret;

    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 begin */
    ret = wl_pwrm_set(cfg, ps_mode);
    if(SUCC != ret)
    {
        HWIFI_WARNING("wl_pwrm_set return failed,ret=%d",ret);
        return ret;
    }
    /* DTS2014010801661 Hi110x bug fix hongjiujin/hkf74032 2014/1/16 end */

    ret = wl_pwrm_enable(cfg,POWER_SAVE_ENABLE);
    if (ret < 0)
    {
        HWIFI_WARNING("set powermode wid failed, when early suspend");
        return ret;
    }

    return SUCC;
}

/*
 * Prototype    : hi110x_set_suspend
 * Description  : set state for driver, early suspend or late resume
 * Input        : struct hi110x_sdio *hi_sdio, int32 value
 * Output       :
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/2/27
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_set_suspend(struct hi110x_pm_info *pm_info, int32 value)
{
    struct cfg_struct   *cfg;
    int32                ret;
    int32                ps_mode;

    if ((NULL == pm_info)
        || (NULL == pm_info->hi110x_dev)
        || (NULL == pm_info->hi110x_dev->cfg))
    {
        HWIFI_WARNING("pm has not init");
        return -EFAIL;
    }

    /**
     * 1、判断低功耗的总开关是否打开
     * 2、判断Android上层是否有选择始终保持关联和正在充电时保持关联
     */
    cfg = pm_info->hi110x_dev->cfg;

    /* DTS2014111406700 Hi110x bug fix d00223710 2014/11/17 begin */
#ifdef __ROAM__
    if(value)
    {
        hwifi_set_dev_roam_report_enabled(cfg, ROAM_DEVICE_SCAN_TRIGGER_REPORT_DISABLE);
    }
    else
    {
        hwifi_set_dev_roam_report_enabled(cfg, ROAM_DEVICE_SCAN_TRIGGER_REPORT_ENABLE);
    }
#endif
    /* DTS2014111406700 Hi110x bug fix d00223710 2014/11/17 end */


    if ((!pm_info->connect_finished) || !IS_CONNECTED(cfg))
    {
           HWIFI_INFO("it can't set wifi early suspend now (connect_finished:%d,connected:%d)",
           pm_info->connect_finished, cfg->conn.status);
           return SUCC;
    }

    if (IS_AP(cfg))
    {
        HWIFI_WARNING("AP Mode do not need power save");
    }
    else
    {
        /* DTS2013121902757   Hi110x bug fix z00209041 20131218 begin */
        if (IS_P2P_ON(cfg))
        {
            /**
             * 1、P2P模式配置省电模式1，屏亮灭不做改变
             * 2、屏灭时不做组播帧过滤
             */
            ps_mode = (cfg->sta_info.manual_pwrm != 0xFF) ?
            cfg->sta_info.manual_pwrm : HI110X_POWERMODE_MIN;

            ret = hi110x_pm_powermode_set(cfg, ps_mode);
            if (ret < 0)
            {
                HWIFI_WARNING("set powermode wid failed, when early suspend");
                return ret;
            }
        }
        /* DTS2013121902757   Hi110x bug fix z00209041 20131218 end */
        else
        {
            if (value)
            {
                /* set early suspended */
                /**
                 * 1、暗屏STA模式，enable packet filter
                 * 2、设置省电模式2
                 */
                ret = hwifi_set_pktfilter(cfg, GROUP_PKTFILTER_ON);
                if (ret < 0)
                {
                    HWIFI_WARNING("Failed to set pktfilter interval wid when early suspend");
                    return ret;
                }

                /* set fast max powermode */
                /* DTS2013111801471  Hi110x bug fix z00209041 20131118 begin */
                ps_mode = (cfg->sta_info.manual_pwrm != 0xFF) ?
                cfg->sta_info.manual_pwrm : HI110X_POWERMODE_MAX;
                /* DTS2013111801471  Hi110x bug fix z00209041 20131118 end */


                /* DTS2014051303141  Hi110x bug fix z00209041 20140515 begin */
                if (KEEPCONNECT_ENABLE_ALWAYS == g_sleep_policy
                    || KEEPCONNECT_ENABLE_WHENPLUGGED == g_sleep_policy)
                {
                    HWIFI_INFO("set min powermode in always-connect, when early suspend");
                    ret = hi110x_pm_powermode_set(cfg, HI110X_POWERMODE_MIN);
                    if (ret < 0)
                    {
                        HWIFI_WARNING("set powermode wid failed in always-connect, when early suspend");
                        return ret;
                    }
                }
                else
                {
                    ret = hi110x_pm_powermode_set(cfg, ps_mode);
                    if (ret < 0)
                    {
                        HWIFI_WARNING("set powermode wid failed, when early suspend");
                        return ret;
                    }
                }
                /* DTS2014051303141  Hi110x bug fix z00209041 20140515 end */
            }
            else
            {
                /* set resume */
                /* disable pkt filter */
                ret = hwifi_set_pktfilter(cfg, GROUP_PKTFILTER_OFF);
                if (ret < 0)
                {
                    HWIFI_WARNING("set pktfilter interval wid failed, when early suspend");
                    return ret;
                }

                /* set fast min powermode */
                ps_mode = (cfg->sta_info.manual_pwrm != 0xFF) ?
                cfg->sta_info.manual_pwrm : HI110X_POWERMODE_MIN;

                ret = hi110x_pm_powermode_set(cfg, ps_mode);
                if (ret < 0)
                {
                    HWIFI_WARNING("set powermode wid failed, when late resume");
                    return ret;
                }

            }
          }
    }

    return SUCC;
}

/*
 * Prototype    : hi110x_suspend_action
 * Description  : start to suspend action
 * Input        : struct hi110x_pm_info *pm_info
 * Output       :
 *   History        :
 *   1.Date         : 2013/8/27
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_suspend_action(struct hi110x_pm_info *pm_info)
{
    if (g_powermgmt_switch)
    {
        if (hi110x_set_suspend(pm_info, pm_info->in_suspend) != 0)
        {
            HWIFI_WARNING("set early suspend state failed");
        }
    }
    else
    {
        HWIFI_INFO("wlan powermgmt is off now ...");
    }
}

STATIC void hi110x_do_early_suspend(struct hi110x_pm_info *pm_info)
{
    HWIFI_BUG_ON(!pm_info);
    HWIFI_INFO("change state to early suspend");
    hi110x_wake_lock(pm_info);
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    spin_lock_bh(&pm_info->suspend_lock);
    pm_info->screen_state = SCREEN_OFF;
    pm_info->in_suspend = TRUE;
    hi110x_suspend_action(pm_info);
    spin_unlock_bh(&pm_info->suspend_lock);
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 end */

    hi110x_wake_unlock(pm_info);
}

STATIC void hi110x_do_late_resume(struct hi110x_pm_info *pm_info)
{
    HWIFI_BUG_ON(!pm_info);
    HWIFI_INFO("change state to late resume");

    hi110x_wake_lock(pm_info);
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    spin_lock_bh(&pm_info->suspend_lock);
    pm_info->in_suspend = FALSE;
    pm_info->screen_state = SCREEN_ON;
    hi110x_suspend_action(pm_info);
    spin_unlock_bh(&pm_info->suspend_lock);
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 end */
    hi110x_wake_unlock(pm_info);
}

#ifdef CONFIG_HAS_EARLYSUSPEND
/*
 * Prototype    : hi110x_early_suspend
 * Description  : set cfg to dev, when early suspend
 * Input        : struct early_suspend *early_sup
 * Output       :
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/2/27
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC void hi110x_early_suspend(struct early_suspend *early_sup)
{
    struct hi110x_pm_info *pm_info;

    pm_info = container_of(early_sup, struct hi110x_pm_info, early_suspend);
    hi110x_do_early_suspend(pm_info);

}

/*
 * Prototype    : hi110x_late_resume
 * Description  : set cfg to dev, when host change state to late resume
 * Input        : struct early_suspend *early_sup
 * Output       :
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/2/27
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
STATIC void hi110x_late_resume(struct early_suspend *early_sup)
{
    struct hi110x_pm_info *pm_info;

    pm_info = container_of(early_sup, struct hi110x_pm_info, early_suspend);
    hi110x_do_late_resume(pm_info);
}
#else
static int hi110x_pm_fb_notify(struct notifier_block *nb,
                 unsigned long action, void *data)
{
    struct hi110x_pm_info *pm_info;
    struct fb_event *fb_event = data;
    int *blank = NULL;
    /*struct fb_event *event = data;*/
    pm_info = container_of(nb, struct hi110x_pm_info, pm_notifier);
    HWIFI_BUG_ON(blank);
    blank = fb_event->data;
    HWIFI_DEBUG("ACTION:%lu, blank:%d", action, *blank);

    switch(*blank){
    case FB_BLANK_UNBLANK:
        /*resume device*/
        switch(action) {
        case FB_EARLY_EVENT_BLANK:
            hi110x_do_late_resume(pm_info);
            break;
        case FB_EVENT_BLANK:
            break;
        default:
            break;
        }
        break;
    case FB_BLANK_VSYNC_SUSPEND:
    case FB_BLANK_HSYNC_SUSPEND:
    case FB_BLANK_NORMAL:
    case FB_BLANK_POWERDOWN:
    default:
        /*suspend device*/
        switch(action) {
        case FB_EARLY_EVENT_BLANK:
            hi110x_do_early_suspend(pm_info);
            break;
        case FB_EVENT_BLANK:
            break;
        default:
            break;
        }
        break;
    }

    return NOTIFY_OK;
}
#endif
/*
 * Prototype    : hi110x_wake_lock(struct hi110x_device *hi110x_dev)
 * Description  : add wake lock, return wake lock count
 * Input        : struct hi110x_device *hi110x_dev
 * Output       : None
 * Return Value : None
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/26
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_wake_lock(struct hi110x_pm_info *pm_info)
{
#ifdef CONFIG_HAS_WAKELOCK
    unsigned long flags;

    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 begin */
    spin_lock_irqsave(&pm_info->wklock_spinlock, flags);
    HWIFI_DEBUG("pm wake lock, wake_lock_cnt = %d", pm_info->wklock_cnt);
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 end */
    if(!pm_info->wklock_cnt)
    {
            HWIFI_DEBUG("get wakelock:%s", pm_info->wklock_wifi.ws.name);
        wake_lock(&pm_info->wklock_wifi);
    }
    pm_info->wklock_cnt++;
    pm_info->hold_func = (void*)_RET_IP_;
    pm_info->hold_wklock_cnt = pm_info->wklock_cnt;
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 begin */
    spin_unlock_irqrestore(&pm_info->wklock_spinlock, flags);
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 begin */
#endif
}

/*
 * Prototype    : hi110x_wake_unlock(struct hi110x_device *hi110x_dev)
 * Description  : delete wake lock, return wake lock count
 * Input        : struct hi110x_device *hi110x_dev
 * Output       : None
 * Return Value : None
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/26
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_wake_unlock(struct hi110x_pm_info *pm_info)
{
#ifdef CONFIG_HAS_WAKELOCK
    unsigned long flags;

    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 begin */
    spin_lock_irqsave(&pm_info->wklock_spinlock, flags);
    HWIFI_DEBUG("pm wake unlock, wake_lock_cnt = %d", pm_info->wklock_cnt);
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 end */
    if(pm_info->wklock_cnt)
    {
        pm_info->wklock_cnt--;
        if(!pm_info->wklock_cnt)
        {
                HWIFI_DEBUG("release wakelock:%s", pm_info->wklock_wifi.ws.name);
            wake_unlock(&pm_info->wklock_wifi);
        }
    }
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 begin */
    spin_unlock_irqrestore(&pm_info->wklock_spinlock, flags);
    /* DTS2013111209640 Hi110x bug fix l00225847 20131121 end */
#endif
}

/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
/*
 * Prototype    : hi110x_wake_release_lock(struct hi110x_device *hi110x_dev)
 * Description  : delete wake lock, return remain wake locks
 * Input        : struct hi110x_device *hi110x_dev, int locks
 * Output       : None
 * Return Value : None
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/12/28
 *     Author       : z00262551
 *     Modification : Created function
 *
 */
int  hi110x_wake_release_lock(struct hi110x_pm_info *pm_info, int locks)
{
    int ret = 0;
#ifdef CONFIG_HAS_WAKELOCK
    unsigned long flags;
    if(!locks)
        goto end;
    spin_lock_irqsave(&pm_info->wklock_spinlock, flags);
    HWIFI_DEBUG("pm release %d wake lock", locks);
    if(unlikely(pm_info->wklock_cnt <  locks))
    {
        HWIFI_WARNING("Request unlock %d wakelock, but we just had %d", locks,  pm_info->wklock_cnt);
        locks = pm_info->wklock_cnt;
    }

    if(pm_info->wklock_cnt)
    {
        pm_info->wklock_cnt -= locks;
        if(!pm_info->wklock_cnt)
        {
                HWIFI_DEBUG("release wakelock:%s", pm_info->wklock_wifi.ws.name);
            wake_unlock(&pm_info->wklock_wifi);
        }
    }

    spin_unlock_irqrestore(&pm_info->wklock_spinlock, flags);
#endif
end:
    return ret;
}
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */

/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
/*
 * Prototype    : hi110x_wakelocks_release_detect
 * Description  : release all wakelock, before call this function , please make sure the rx/tx queue is empty and no data transfer!!
 * Input        : struct hi110x_pm_info *pm_info
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/10/26
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_wakelocks_release_detect(struct hi110x_pm_info *pm_info)
{
    /*before call this function , please make sure the rx/tx queue is empty and no data transfer!!*/
    HWIFI_ASSERT(NULL != pm_info);
    if (wake_lock_active(&pm_info->wklock_wifi))
    {
        HWIFI_INFO("We still hold %s   %d wake locks, Now release all",
                    pm_info->wklock_wifi.ws.name,
                    pm_info->wklock_cnt);
        pm_info->wklock_cnt = 1;
        hi110x_wake_unlock(pm_info);
    }
}
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */

/*
 * Prototype    : hi110x_get_screen_state
 * Description  : get screen state
                  0 : OFF
                  1 : ON
 *   History        :
 *   1.Date         : 2013/8/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hi110x_get_screen_state(struct hi110x_pm_info *pm_info)
{
    HWIFI_ASSERT(pm_info != NULL);

    return pm_info->screen_state;
}
/* DTS2013112503428  Hi110x bug fix zhouxinfeng/z00262551 2013/11/21 begin */
STATIC int hi110x_pm_log_dump(hwifi_union_log* log)
{
    struct hi110x_pm_info   *pm_info = (struct hi110x_pm_info *)log->data;
    if(!pm_info)
    {
        HWIFI_UNION_PRINT(log, "pm_info is null ptr");
        return 0;
    }
    HWIFI_UNION_PRINT(log,"wlanopen_cnt:%d, powermgmt_state:%d,screen_state:%d,allowsleep_flag:%d",
                          atomic_read(&pm_info->wlanopen_cnt),
                          pm_info->powermgmt_state,
                          pm_info->screen_state,
                          pm_info->allowsleep_flag);
    HWIFI_UNION_PRINT(log,"in_suspend:%d, connect_finished:%d,iface_state:%d,roam_trigger:%d, last_cpufreq:%u, wklock_cnt:%d",
                          pm_info->in_suspend,
                          pm_info->connect_finished,
                          pm_info->iface_state,
                          pm_info->roam_trigger,
                          pm_info->last_cpufreq,
                          pm_info->wklock_cnt);
    if(pm_info->hold_func)
            HWIFI_UNION_PRINT(log,"last %pF hold the %d wake lock%s", pm_info->hold_func, pm_info->hold_wklock_cnt,
                                                pm_info->hold_wklock_cnt > 1?"s":"");
    HWIFI_UNION_PRINT(log, "Wlan iface state:%s\n\n", (IFACE_OFF==pm_info->iface_state)?
                                    "OFF":"ON");
    HWIFI_UNION_PRINT(log,"pm stat:sleep count:%d,wakeup count:%d, sleep fail %d times, wakeup fail %d times",
            pm_info->pm_stat.sleep_count,
            pm_info->pm_stat.wakeup_count,
            pm_info->pm_stat.sleep_fail_count,
            pm_info->pm_stat.wakeup_fail_count);
    HWIFI_UNION_PRINT(log, "Host wake up device %u times, device wake up host %u times",
            pm_info->pm_stat.host_dev_wakeup,
            pm_info->pm_stat.dev_host_wakeup);
    if(pm_info->pm_stat.sleep_fail_count)
    {
        hi110x_print_cpu_time_str(pm_info->pm_stat.sleep_fail_cpu_time,log->loglevel,
                               "WiFi sleep fail first occured at ");
    }
    if(pm_info->pm_stat.wakeup_fail_count)
    {
        hi110x_print_cpu_time_str(pm_info->pm_stat.wakeup_fail_cpu_time,log->loglevel,
                               "WiFi wake up fail first occured at ");
    }
    hi110x_print_cpu_time_str(pm_info->pm_stat.power_on_time, log->loglevel,
                               "WiFi last power on time  at ");
    hi110x_print_cpu_time_str(pm_info->pm_stat.power_off_time, log->loglevel,
                               "WiFi last power off time at ");
    if(g_wlan_info && g_wlan_info->wlan_gpio_state_get)
        HWIFI_UNION_PRINT(log, "Wlan wake up Host gpio is %s\n",g_wlan_info->wlan_gpio_state_get()?"high":"low");
    HWIFI_UNION_PRINT(log,"\n");
    HWIFI_UNION_PRINT(log,"\n");
    return 0;
}

STATIC hwifi_union_log hi110x_pm_log =
{
    .module = "hisilicon pm",
    .cb   = hi110x_pm_log_dump,
};
/* DTS2013112503428  Hi110x bug fix zhouxinfeng/z00262551 2013/11/21 end */
/*
 * Prototype    : hi110x_pm_alloc
 * Description  : initialize sdio pm interface
 * Input        :
 * Output       : None
 * Return Value : succ or fail
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
struct hi110x_pm_info * hi110x_pm_alloc(struct hi110x_device *hi110x_dev, struct device *dev)
{
    struct hi110x_pm_info   *pm_info;
    struct sdio_func        *func;

    func = container_of(dev, struct sdio_func, dev);
    g_wlan_info = (struct wlan_pm_s *)kzalloc(sizeof(struct wlan_pm_s), GFP_KERNEL);
    if (NULL == g_wlan_info)
    {
        return NULL;
    }

    pm_info = (struct hi110x_pm_info *)kzalloc(sizeof(struct hi110x_pm_info), GFP_KERNEL);
    if (NULL == pm_info)
    {
        kfree(g_wlan_info);
        return NULL;
    }

    pm_info->sdio_func                      = func;
    g_wlan_info->sdio_reinit                = hi110x_sdio_reinit;
    g_wlan_info->dev_wakeup                 = hi110x_pm_dev_wakeup;
    g_wlan_info->wlan_patch_read            = hi110x_patch_readsb;
    g_wlan_info->wlan_patch_write           = hi110x_patch_writesb;
    hwifi_union_log_register(&hi110x_pm_log, (void*)pm_info);
    /* init pm infomation */
    spin_lock_init(&pm_info->suspend_lock);
    spin_lock_init(&pm_info->irq_lock);
    mutex_init(&pm_info->wlan_lock);
    /* init wake lock */
#ifdef CONFIG_HAS_WAKELOCK
    wake_lock_init(&pm_info->wklock_wifi, WAKE_LOCK_SUSPEND, "hi110x_wlan_wakelock");
    spin_lock_init(&pm_info->wklock_spinlock);
    pm_info->wklock_cnt      = 0;
#endif

    if (wlan_pm_register(g_wlan_info) != 0)
    {
        HWIFI_ERROR("Failed to register pm info!");
        kfree(g_wlan_info);

#ifdef CONFIG_HAS_WAKELOCK
        wake_lock_destroy(&pm_info->wklock_wifi);
#endif
        kfree(pm_info);
        return NULL;
    }

    /* host wake up device GPIO set High */
    if (NULL == g_wlan_info->wlan_gpio_state_set)
    {
        HWIFI_WARNING("Gpio set state function is NULL");
        wlan_pm_unregister(g_wlan_info);
        kfree(g_wlan_info);
#ifdef CONFIG_HAS_WAKELOCK
        wake_lock_destroy(&pm_info->wklock_wifi);
#endif
        kfree(pm_info);
        return NULL;
    }
    g_wlan_info->wlan_gpio_state_set(TRUE);

    /* register early suspend function */
#ifdef CONFIG_HAS_EARLYSUSPEND
    pm_info->in_suspend = FALSE;        /* can not set early suspend or late resume before getting ip */
    pm_info->connect_finished = FALSE;

    pm_info->early_suspend.level = EARLY_SUSPEND_LEVEL_BLANK_SCREEN + 20;
    pm_info->early_suspend.suspend = hi110x_early_suspend;
    pm_info->early_suspend.resume = hi110x_late_resume;
    register_early_suspend(&pm_info->early_suspend);
#else
    pm_info->in_suspend = FALSE;        /* can not set early suspend or late resume before getting ip */
    pm_info->connect_finished = FALSE;
    pm_info->pm_notifier.notifier_call = hi110x_pm_fb_notify;
    fb_register_client(&pm_info->pm_notifier);
#endif

    /* init pm powermgmt enable flag */
    atomic_set(&pm_info->wlanopen_cnt, 0);
    pm_info->powermgmt_state = TRUE;
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    pm_info->roam_trigger    = FALSE;
    pm_info->screen_state    = SCREEN_ON;
    pm_info->last_cpufreq    = WLCPU_160MHZ;


    g_pm_info = pm_info;
    pm_info->hi110x_dev = hi110x_dev;
    pm_info->get_deepsleep_state = NULL;
    pm_info->set_roam_state      = hi110x_set_roam_state;
    /* DTS2014050806333 HI1101 bug fix 2014-6-13 begin */
    /* init pm stat timer, determine when to sleep device */
    init_timer(&pm_info->watchdog_timer);
    pm_info->watchdog_timer.data        = (unsigned long)pm_info;
    pm_info->watchdog_timer.function    = (void *)hi110x_pm_watchdog_timeout;
    HWIFI_INFO("Succeed to alloc and init pm_info!");
    return pm_info;
}

/*
 * Prototype    : hi110x_pm_free
 * Description  : initialize sdio pm interface
 * Input        :
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/1/10
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
void hi110x_pm_free(struct hi110x_pm_info *pm_info)
{
    del_timer_sync(&pm_info->watchdog_timer);
#ifdef CONFIG_HAS_EARLYSUSPEND
    unregister_early_suspend(&pm_info->early_suspend);
#else
    fb_unregister_client(&pm_info->pm_notifier);
#endif
    wlan_pm_unregister(g_wlan_info);
    kfree(g_wlan_info);
#ifdef CONFIG_HAS_WAKELOCK
    wake_lock_destroy(&pm_info->wklock_wifi);
#endif
    kfree(pm_info);
    HWIFI_INFO("Pm free done!");
}

/* Start of zhangwei 64406 2013-03-26 B295 增加预编译宏 */
#endif
/* End of zhangwei 64406 2013-03-26 B295 增加预编译宏 */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

