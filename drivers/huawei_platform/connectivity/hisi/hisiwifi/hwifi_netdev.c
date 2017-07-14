/*
 *
 * Copyright (C), 2001-2021, Huawei Tech. Co., Ltd.
 *
 *
 * File Name     : hwifi_netdev.c
 * Version       : Initial Draft
 * Author        : gongxianglin 00213814
 * Created       : 2012/8/27
 * Last Modified :
 * Description   : net device handler
 * Function List :
 * History       :
 * 1.Date        : 2012/8/27
 *   Author      : gongxianglin 00213814
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
#include <linux/netdevice.h>
#include <net/cfg80211.h>      /* wdev_priv */
#include <linux/etherdevice.h> /* eth_type_trans */
#include <linux/notifier.h>
#include <linux/inetdevice.h>

#include "hi110x.h"
#include "hwifi_bus.h"
#include "hwifi_utils.h"
#include "hwifi_hcc.h"
#include "hwifi_netdev.h"
#include "hwifi_cfgapi.h"
#include "hwifi_android.h"
#include "hwifi_wpa_ioctl.h"
#include "hwifi_wl_config_ioctl.h"
#include "hwifi_msg.h"
#include "cfg80211_stru.h"
#include "hi110x_pm.h"
#include "hwifi_tps.h"
#include "hwifi_cfg80211.h"
#include "hwifi_perform.h"

#include "hwifi_config.h"
#include "hwifi_dev_err.h"

#include <linux/udp.h>
#include <linux/ip.h>
#include <linux/etherdevice.h>
/* Hi1101 bug fix wx221449 2014/12/09 DTS2014102309423 begin */
#include "hwifi_rfauth_ioctl.h"
/* Hi1101 bug fix wx221449 2014/12/09 DTS2014102309423 end */

/*
 * 2 Global Variable Definition
 */

struct ndev_priv_struct {
    struct wireless_dev   wdev;      /* netdev->ieee80211_ptr point to */
    struct hi110x_device *hi110x_dev;
};

/* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 begin */
/*
 0                   1                   2                   3
 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1
 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 |V=2|P|X|  CC   |M|     PT      |       sequence number         |
 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 |                           timestamp                           |
 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+
 |           synchronization source (SSRC) identifier            |
 +=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+=+
 |            contributing source (CSRC) identifiers             |
 |                             ....                              |
 +-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
struct rtp_hdr{
#if defined(__LITTLE_ENDIAN_BITFIELD)
    /* byte 0 */
    __be16   cc_count:4;
    __be16   extension:1;
    __be16   padding:1;
    __be16   version:2;    /* version=2 */

    /* byte 1 */
     __be16   payload:7;  /* scope */
     __be16   marker:1;
    /* bytes 2,3 */
     __be16 seq_no;
    /* bytes 4-7 */
     unsigned int timestamp;
    /* bytes 8-11 */
     unsigned int ssrc;              /* stream number is used here. */
#elif defined (__BIG_ENDIAN_BITFIELD)
    /* byte 1 */
     __be16   payload:7;  /* scope */
     __be16   marker:1;

    /* byte 0 */
    __be16   cc_count:4;
    __be16   extension:1;
    __be16   padding:1;
    __be16   version:2;    /* version=2 */

    /* bytes 2,3 */
     __be16 seq_no;
    /* bytes 4-7 */
     unsigned int timestamp;
    /* bytes 8-11 */
     unsigned int ssrc;              /* stream number is used here. */
#else
#error
#endif
};
/* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 end */

/*
 * 3 Function Definition
 */
 /*
 * Prototype    : netdev_to_hi110xdev
 * Description  : get hi110x dev from netdev
 * Input        : None
 * Output       : None
 * Return Value : struct hi110x_device
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/9/10
 *     Author       : gongxianglin 00213814
 *     Modification : Created function
 *
 */
STATIC inline struct hi110x_device* netdev_to_hi110xdev(struct net_device *ndev)
{
    return ((struct ndev_priv_struct *)netdev_priv(ndev))->hi110x_dev;
}

/*
* Prototype    :
* Description  : upload packet to network stack
* Input        : char main_type, char sub_type, struct sk_buff *skb, void *context
* Output       : None
* Return Value : fail or succ
* Calls        :
* Called By    :
*
*   History        :
*   1.Date         : 2012/9/10
*     Author       : gongxianglin 00213814
*     Modification : Created function
*
*/
STATIC int32 hwifi_netdev_rx( uint8 mtype, uint8 stype, struct sk_buff *skb, void *context)
{
    struct ethhdr*  eth_hdr_t=NULL;
    struct net_device    *ndev;
    int32                 ret;
     struct hi110x_device* hi110x_dev;
    ndev            = (struct net_device *)context;

    /* fill skb struct for up layer operator */
    skb->dev        = ndev;
    skb->protocol   = eth_type_trans(skb, ndev);
    skb->ip_summed    = CHECKSUM_NONE;
/* Start of zhanghua 00209041 2013-03-23 B295 增量UDP吞吐量优化维测 */
#ifdef WLAN_PERFORM_DEBUG
    if ((g_perform_cfg_info->trigger_mode) && ((Hi1101_RX == g_perform_cfg_info->trigger_direction)||(Hi1101_ALL == g_perform_cfg_info->trigger_direction)))
    {
        /* start to statistic performance at network layer */
        hwifi_perform_rx_network_statistic(netdev_to_hi110xdev(ndev), skb->len);
    }

    /* statistic performance at network layer,before netif_rx, make bypass */
    if ((g_perform_cfg_info->trigger_mode) && (g_perform_cfg_info->network_bypass) && ((Hi1101_RX == g_perform_cfg_info->trigger_direction)||(Hi1101_ALL == g_perform_cfg_info->trigger_direction)))
    {
        hwifi_perform_rx_network_bypass(netdev_to_hi110xdev(ndev), skb);
        return SUCC;
    }
#endif
/* End of zhanghua 00209041 2013-03-23 B295 增量UDP吞吐量优化维测 */

	/* DTS2014032401941  Hi110x bug fix zhouxinfeng/z00262551 2014/3/29 begin */
    /*not multicast pkts*/
    eth_hdr_t= eth_hdr(skb);
    if(is_unicast_ether_addr(eth_hdr_t->h_dest))
    {
        HWIFI_DEBUG("uncast ether type:0x%x", ntohs(eth_hdr_t->h_proto));
        hi110x_dev = netdev_to_hi110xdev(ndev);
        if(likely(hi110x_dev))
            hcc_net_work_state_detect_cancel(hi110x_dev->hcc);
    }
    else
    {
        HWIFI_DEBUG("cast:ether type:0x%x", ntohs(eth_hdr_t->h_proto));
    }
	/* DTS2014032401941  Hi110x bug fix zhouxinfeng/z00262551 2014/3/29 end */

	/* DTS2014102400870  Hi1101 bug fix hubiaoyong/hwx212164  2014/10/21 begin */
	ndev->stats.rx_bytes += skb->len;
    ndev->stats.rx_packets++;
	/* DTS2014102400870  Hi1101 bug fix hubiaoyong/hwx212164  2014/10/21 end */

    ret = netif_rx_ni(skb);
    if (ret < 0)
    {
        HWIFI_WARNING("Failed to upload data to network stack![ret=%d]",ret);
        dev_kfree_skb_any(skb);
        return ret;
    }


    return SUCC;
}

int32 hwifi_wlan_open(struct net_device *ndev)
{
    int ret = SUCC;
    struct hi110x_device       *hi110x_dev;
    hi110x_dev = netdev_to_hi110xdev(ndev);
    HWIFI_BUG_ON(!hi110x_dev);
    HWIFI_INFO("Hisi wlan open enter");

    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/7 begin */
    INIT_COMPLETION(hi110x_dev->cfg->init_done);
    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/7 end */

    hcc_transfer_lock(hi110x_dev->hcc);
    /*pm reinit had been moved to hsdio.c!*/
    ret = hsdio_bus_enable(hi110x_dev->hcc->io_dev);
    if (ret < 0)
    {
        hcc_transfer_unlock(hi110x_dev->hcc);
        HWIFI_ERROR("Failed to enable sdio bus!");
        return ret;
    }
    hcc_transfer_reset(hi110x_dev->hcc, FALSE);
    /*we should set hcc running when receive the ready msg from device*/
    hcc_transfer_unlock(hi110x_dev->hcc);
    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/7 begin */

    /* DTS2014021205713  Hi110x bug fix z00209041 2014/3/4 start */
    /* DTS2013070108272, add extra time ---已添加等待完成变量，不再做延时*/
    /* DTS2014123006341 Hi110x bug fix zhouxinfeng/z00262551 2014/12/30 begin */
    ret = wait_for_completion_timeout(&hi110x_dev->cfg->init_done, 6*HZ);
    /* DTS2014123006341 Hi110x bug fix zhouxinfeng/z00262551 2014/12/30 end */
    if(ret > 0)
    {
        HWIFI_INFO("Device Init Succ Received, wlan Open Succuess.");
        /* DTS2014040305509  Hi110x bug fix d00223710 2014/3/4 begin */
		/* device is reseting now,wait 200ms */
		msleep(200);
		/* DTS2014040305509  Hi110x bug fix d00223710 2014/3/4 end */
        ret = 0;
    }else if(ret < 0)
    {
        HWIFI_WARNING("Device Init Succ Wait was Interrupted! ret=%d", ret);
        ret = -EFAIL;
    }else
    {
        HWIFI_ERROR("Wait For Device Init Succ Msg Timeout.");
        ret = -EFAIL;
        HWIFI_ERROR("WiFI Wlan Open Failed! Did not Received Device Init Succ Message!");
    }
    /* DTS2014021205713  Hi110x bug fix z00209041 2014/3/4 end */
    /* DTS2013110402060  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/7 end */
#if 1

    /* DTS2014021205713  Hi110x bug fix z00209041 2014/3/4 start */
    if (TRUE != hi110x_dev->cfg->init_flag)
    {
        HWIFI_WARNING("Can not Receive Data Init Succ, retry again");
    }
    /* DTS2014021205713  Hi110x bug fix z00209041 2014/3/4 end */

     /* DTS2013122806065 hi1101 bug fix dengwenhua/d00223710 begin */
    else if(IS_P2P_ON(hi110x_dev->cfg))  /*解决P2P模式下下电再上电p2p不可用问题*/
    {
    	/* DTS2014031306922 Hi110x bug fix d00223710 begin */
    	/* 给予device100毫秒初始化时间,立即下发极小概率可能会导致此命令丢失 */
    	//msleep(100);
    	/* DTS2014031306922 Hi110x bug fix d00223710 end */

        HWIFI_INFO("p2p flag is on,set p2p flag to device.");
        ret = hwifi_send_p2p_flag(hi110x_dev->cfg, 1);
        if (SUCC != ret)
        {
            HWIFI_WARNING("Failed to set p2p flag to device,ret=%d", ret);
        }
    }
    /* DTS2013122806065 hi1101 bug fix dengwenhua/d00223710 end */
#endif

    HWIFI_INFO("Hisi wlan open %s!", (ret)?"failed":"sucuess");
    return ret;
}
EXPORT_SYMBOL(hwifi_wlan_open);

int32 hwifi_wlan_close(struct net_device *ndev)
{
    struct hi110x_device       *hi110x_dev;
    hi110x_dev = netdev_to_hi110xdev(ndev);
    HWIFI_BUG_ON(!hi110x_dev);
    HWIFI_INFO("Hisi wlan close enter intr_mode = %d",intr_mode);
    /**
     *1、在关闭网卡前，先关闭RF;
     *2、打开网卡后，打开RF的动作由对端完成
     */
    hwifi_shutdown_RF(hi110x_dev->cfg);

    hwifi_set_init_flag(hi110x_dev->cfg, FALSE);

    /*before stop, we must do some stuff:
      1.stop hcc tx queue
      2.stop sdio tx,rx queue, disable sdio interrupts
      3.reset sdio assem info
      4.power off wlan device*/
    hcc_transfer_lock(hi110x_dev->hcc);
    /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
    spin_lock_bh(&hi110x_dev->hcc->tx_skb_wake_lock);
    hcc_set_tx_queue_status(hi110x_dev->hcc, hcc_stop);
    spin_unlock_bh(&hi110x_dev->hcc->tx_skb_wake_lock);
    /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */
    hcc_transfer_reset(hi110x_dev->hcc, TRUE);
    hsdio_bus_disable(hi110x_dev->hcc->io_dev);
    hcc_transfer_unlock(hi110x_dev->hcc);
    HWIFI_INFO("Hisi wlan close leave");
    return SUCC;
}
EXPORT_SYMBOL(hwifi_wlan_close);
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
int32 hwifi_wlan_reset(struct net_device *ndev)
{
    struct hi110x_device       *hi110x_dev;
    hi110x_dev = netdev_to_hi110xdev(ndev);
    HWIFI_BUG_ON(!hi110x_dev);
    HWIFI_INFO("Hisi wlan close reset");
    hcc_transfer_lock(hi110x_dev->hcc);
    hcc_queues_reset(hi110x_dev->hcc, TRANS_UNLOCK);
    hcc_transfer_unlock(hi110x_dev->hcc);
    HWIFI_INFO("Hisi wlan close reset done.");
    return SUCC;
}
EXPORT_SYMBOL(hwifi_wlan_reset);
/*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */

/*
 * Prototype    : hwifi_netdev_open
 * Description  : open netdev
 * Input        : struct net_device *ndev
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/9/1
 *     Author       : gongxianglin 00213814
 *     Modification : Created function
 *
 */
STATIC int32 hwifi_netdev_open(struct net_device *ndev)
{
    struct hi110x_device       *hi110x_dev;

    hi110x_dev = netdev_to_hi110xdev(ndev);
    HWIFI_INFO("hwifi_netdev_open enter intr_mode = %d",intr_mode);
    wlan_opera_lock(hi110x_dev->pm_info);
    if (atomic_read(&hi110x_dev->pm_info->wlanopen_cnt) > 0)
    {
        HWIFI_INFO("wlan0 is up already");
        wlan_opera_unlock(hi110x_dev->pm_info);
        return SUCC;
    }

#ifndef HI110X_VERSION_MPW1
    {
        int32                                           ret;
        /* wlan power on when open wlan0,
           make sure it is not in Hostapd start process
           and p2p is off, and it is STA mode */
        /* DTS2013121902757   Hi110x bug fix z00209041 20131218 begin */
        if ( hi110x_dev->pm_info->powermgmt_state
            && IS_STA(hi110x_dev->cfg))
        /* DTS2013121902757   Hi110x bug fix z00209041 20131218 end */
        {
			hi110x_wake_lock(hi110x_dev->pm_info);
           ret =  hwifi_wlan_open(ndev);
            if (ret < 0)
            {
                HWIFI_ERROR("sdio reset failed when wlan0 up");
                hi110x_gpio_intr_enable(FALSE);
				hi110x_wake_unlock(hi110x_dev->pm_info);
                                    wlan_opera_unlock(hi110x_dev->pm_info);
                return ret;
            }
        }
        else
        {
            HWIFI_INFO("AP mode release wakelock");
        }
    }
#endif

    /* TBD: now do this in sdio probe */
#if 0
    if (0 != hsdio_bus_enable())
    {
        HWIFI_ERROR("enable bus fail");
        return -EIO;
    }
#endif
    set_bit(HI_STATUS_WLAN_READY, &hi110x_dev->status);

    /*TBD: need deal with wireless state? */
    netif_tx_start_all_queues(ndev);
    atomic_inc(&hi110x_dev->pm_info->wlanopen_cnt);
    wlan_opera_unlock(hi110x_dev->pm_info);
    HWIFI_INFO("hwifi_netdev_open leave");
    return SUCC;
}

/*
 * Prototype    : hwifi_netdev_stop
 * Description  : down netdev
 * Input        : struct net_device* ndev
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/9/1
 *     Author       : gongxianglin 00213814
 *     Modification : Created function
 *
 */
STATIC int32 hwifi_netdev_stop(struct net_device* ndev)
{
    /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 begin */
    int32 excp_stat;
    struct hi110x_device       *hi110x_dev = netdev_to_hi110xdev(ndev);
    HWIFI_INFO("hwifi_netdev_stop enter");
    wlan_opera_lock(hi110x_dev->pm_info);
    /*when close expcetion function, can not hold opera lock.*/
    excp_stat = hwifi_exception_enable_set(hi110x_dev->hcc, FALSE);
    cancel_work_sync(&hi110x_dev->hcc->excp_worker);
    if (atomic_read(&hi110x_dev->pm_info->wlanopen_cnt) <= 0)
    {
        HWIFI_INFO("wlan0 is down already");
		hwifi_exception_enable_set(hi110x_dev->hcc, excp_stat);
		wlan_opera_unlock(hi110x_dev->pm_info);
        return SUCC;
    }

    /* TBD: disconnect */
    clear_bit(HI_STATUS_WLAN_READY, &hi110x_dev->status);

    hwifi_scan_done(hi110x_dev->cfg);

#ifndef HI110X_VERSION_MPW1
    /* DTS2013121902757   Hi110x bug fix z00209041 20131218 begin */
    if ( hi110x_dev->pm_info->powermgmt_state
        && IS_STA(hi110x_dev->cfg))
    /* DTS2013121902757   Hi110x bug fix z00209041 20131218 end */
        {
            /*power down*/
            hwifi_wlan_close(ndev);
			hi110x_wake_unlock(hi110x_dev->pm_info);
			hi110x_wakelocks_release_detect(hi110x_dev->pm_info);
        }
        else
        {
            /*Just reset the hcc queues*/
            hwifi_wlan_reset(ndev);
        }
#endif

    atomic_dec(&hi110x_dev->pm_info->wlanopen_cnt);
    hwifi_exception_enable_set(hi110x_dev->hcc, excp_stat);
    wlan_opera_unlock(hi110x_dev->pm_info);

    /*DTS2013122804682   Hi110x bug fix zhouxinfeng/z00262551 2014/1/2 end */
    HWIFI_INFO("hwifi_netdev_stop leave");

    return SUCC;
}

/*
 * Prototype    : hwifi_netdev_start_xmit
 * Description  : down netdev
 * Input        : struct net_device* ndev
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/9/1
 *     Author       : gongxianglin 00213814
 *     Modification : Created function
 *
 */
STATIC netdev_tx_t hwifi_netdev_start_xmit(struct sk_buff *skb, struct net_device *ndev)
{
    struct hi110x_device       *hi110x_dev;

    /*
     * not need check, beacause if hi110x_dev is null,
     * the net can't be open
     */
    hi110x_dev = netdev_to_hi110xdev(ndev);

    if (skb->len <= ETHER_HEADER_SIZE)
    {
        HWIFI_WARNING("Net packet len(%u) less than ethernet header len", skb->len);
        dev_kfree_skb_any(skb);
        return NETDEV_TX_OK;
    }

#ifdef __ROAM__
    /* if need buffer data when roaming, put skb into roam buffering queue */
    if (roam_need_data_buffering(hi110x_dev->cfg, skb))
    {
        roam_data_buffering(hi110x_dev->cfg, skb);
        return NETDEV_TX_OK;
    }
#endif

    if (hcc_tx(hi110x_dev->hcc, HCC_TYPE_DATA, HCC_SUBTYPE_ANY, skb) == SUCC)
    {
        ndev->stats.tx_packets++;
        ndev->stats.tx_bytes += skb->len;
    }
    else
    {
        dev_kfree_skb_any(skb);
        ndev->stats.rx_dropped++;
    }

    return NETDEV_TX_OK;
}

/*
 * Prototype    : hwifi_netdev_set_mac
 * Description  : down netdev
 * Input        : struct net_device* ndev
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/9/1
 *     Author       : gongxianglin 00213814
 *     Modification : Created function
 *
 */
STATIC int32 hwifi_netdev_set_mac(struct net_device *ndev, void *addr)
{
    struct hi110x_device   *hi110x_dev;
    struct sockaddr        *phwaddr  = addr;
    int32                   ret;

    hi110x_dev = netdev_to_hi110xdev(ndev);

    hi110x_wake_lock(hi110x_dev->pm_info);

    /* wid->firmware,set mac address to firmware */
    ret = hwifi_set_mac(hi110x_dev->cfg, phwaddr->sa_data);
    if (ret != SUCC)
    {
        HWIFI_WARNING("Failed to set mac address!");
        hi110x_wake_unlock(hi110x_dev->pm_info);

        return ret;
    }

    /* update mac addr to network stack */
    memcpy(ndev->dev_addr, phwaddr->sa_data, ETH_ALEN);
    hi110x_wake_unlock(hi110x_dev->pm_info);

    return SUCC;
}

/*
 * Prototype    : hwifi_netdev_do_ioctl
 * Description  : device ioctl
 * Input        : struct net_device* ndev
                : struct ifreq *ifr
                : int cmd
 * Output       : None
 * Return Value : int
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/10/15
 *     Author       : dengwenhua d00223710
 *     Modification : Created function
 *
 */
STATIC int32 hwifi_netdev_do_ioctl(struct net_device *ndev, struct ifreq *ifr, int cmd)
{
    int32 ret;
    struct hi110x_device* hi110x_dev;

    if ((NULL == ndev) || (NULL == ifr) || (NULL == ifr->ifr_data))
    {
        HWIFI_WARNING("Invalid NULL params!");
        return -EFAIL;
    }

    hi110x_dev = netdev_to_hi110xdev(ndev);

    hi110x_wake_lock(hi110x_dev->pm_info);

    if (SIOCDEVPRIVATE == cmd)
    {
        /* wpa_supplicant/hostapd ioctl cmd */
        HWIFI_DEBUG("wpa_supplicant/hostapd ioctl cmd,cmd=0x%x", cmd);
        ret = hwifi_wpa_ioctl_cmd(hi110x_dev, ifr, cmd);
    }
    /* android private cmd */
    else if ((SIOCDEVPRIVATE + 1) == cmd)
    {
        HWIFI_DEBUG("Android private cmd,cmd=0x%x", cmd);
        ret = hwifi_android_priv_cmd(ndev, ifr, cmd);
    }
    /* MT TPS */
    else if ( (SIOCDEVPRIVATE + 2) == cmd )
    {
        HWIFI_INFO("tps_ioctl_cmd,cmd=0x%x", cmd);
        ret = hwifi_tps_ioctl_cmd(hi110x_dev, ifr, cmd);
    }
    else if (SIOCDEVPRIVATE + 3 == cmd)
    {
        /* wl_config ioctl cmd */
        HWIFI_DEBUG("wl_config ioctl cmd,cmd=0x%x", cmd);
        ret = hwifi_wl_config_ioctl_cmd(hi110x_dev, ifr, cmd);
    }
    /* Hi1101 bug fix wx221449 2014/12/09 DTS2014102309423 begin */
    else if (SIOCDEVPRIVATE + 4 == cmd)
    {
        /* wifi rf auth cmd */
        HWIFI_INFO("wl_config ioctl cmd,cmd=0x%x", cmd);
        ret = hwifi_android_ioctl_cmd(hi110x_dev, ifr, cmd);
    }
    /* Hi1101 bug fix wx221449 2014/12/09 DTS2014102309423 end */
    else
    {
        HWIFI_WARNING("Invalid ioctl cmd![cmd=0x%x]",cmd);
        hi110x_wake_unlock(hi110x_dev->pm_info);
        return -EOPNOTSUPP;
    }
    hi110x_wake_unlock(hi110x_dev->pm_info);

    /* DTS2014112500562 Hi1101 bug fix d00223710 2014/11/25 begin */
    HWIFI_INFO("ioctl command complete,ret=%d", ret);
    /* DTS2014112500562 Hi1101 bug fix d00223710 2014/11/25 end */

    return ret;
}

/*
 * Prototype    : hwifi_netdev_change_mtu
 * Description  : change mtu
 * Input        : struct net_device *dev, int new_mtu
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/9
 *     Author       : g00213814
 *     Modification : Created function
 *
 */
int32 hwifi_netdev_change_mtu(struct net_device *dev, int32 new_mtu)
{
// cancel by luolingzhi for change mtu when wlan0 up
/*
if (netif_running(dev))
{
	HWIFI_WARNING("Can not change MTU when netdev is running,must be down to change!");
	return -EFAIL;
}
*/
#define HI110X_MTU_MAX  1500
#define HI110X_MTU_MIN  512

    /* wpa_supplicant通过L2直接发送EAPOL/WAI等数据
     * L2不能分片 故设定MTU为最大值
     * 需排查wpa_supplicant有无超过1500数据
     */
    if ((new_mtu > HI110X_MTU_MAX) || (new_mtu < HI110X_MTU_MIN))
    {
        HWIFI_WARNING("Invalid new_mtu:%d ,size only in:%d ~ %d", new_mtu,HI110X_MTU_MIN, HI110X_MTU_MAX);
        return -EFAIL;
    }

    dev->mtu = new_mtu;
    return SUCC;
}

/* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 begin */
/*
 *AC to queue mapping
 *
 * AC_VO -> queue 3
 * AC_VI -> queue 2
 * AC_BE -> queue 1
 * AC_BK -> queue 0
 */
static const ac_user_pro hwifi_1d_to_queue[8] = { AC_BE, AC_BK, AC_BK, AC_BE, AC_VI, AC_VI, AC_VO, AC_VO };
STATIC ac_user_pro hwifi_skb_to_ac_queue(struct sk_buff *skb)
{
    	skb->priority = cfg80211_classify8021d(skb);
	return hwifi_1d_to_queue[skb->priority];
}
/* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 end */

/*
 * 3 Function Definition
 */
/*
 * Prototype    : hwifi_select_queue
 * Description  : 根据报文类型选择不同的网络发送队列
 * Input        : struct net_device *dev
 *                struct sk_buff *skb
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/12
 *     Author       : lwx164577
 *     Modification : Created function
 *
 */
#define UDP_PROTOCOL                0x11
#define ETHER_TYPE_OFFSET           12
#define IP_PROTOCOL_FIELD_OFFSET    23    /* ip protocol field offset */
/*DTS2013122007483   Hi110x bug fix zhouxinfeng/z00262551 2014/1/3 begin */
uint16 hwifi_select_queue(struct net_device *dev, struct sk_buff *skb)
{
    ac_user_pro ac_pro;
    struct hi110x_device       *hi110x_dev = netdev_to_hi110xdev(dev);
    hcc_queue_type ret = HCC_QUEUE_COUNT;
    uint16 ether_type = (uint16)((skb->data[ETHER_TYPE_OFFSET] << 8) | skb->data[ETHER_TYPE_OFFSET+1]);
    ac_pro = hwifi_skb_to_ac_queue(skb);
    if ((ETHER_TYPE_IP == ether_type))
    {
        if (UDP_PROTOCOL == skb->data[IP_PROTOCOL_FIELD_OFFSET])
        {
            uint32 udp_dport_offset = ETHER_HEADER_SIZE
                                   + ((uint32)(skb->data[ETHER_HEADER_SIZE]&0x0f) << 2) /* ip header size */
                                   + 2; /* udp src port */
            if ((0x00 == skb->data[udp_dport_offset])
                && ((0x43 == skb->data[udp_dport_offset+1]) || (0x44 == skb->data[udp_dport_offset+1])))
            {
                /* DHCP - udp dst port 67/68 */
                HWIFI_INFO("DHCP packe,packet len=%d", skb->len);
                ret =  DATA_HI_QUEUE;
            } else{
                ret = hcc_get_tx_net_queue_mapping(hi110x_dev->hcc, skb);
            }
	    /* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 begin */
            if(AC_VO == ac_pro)
            {
                /*UDP VO stream, if udp vo we should disable aggreagtion*/
                hcc_net_stream_try_connect(hi110x_dev->hcc, STREAM_UDP_VO);
            }
	   /* DTS2014020701562  Hi110x bug fix zhouxinfeng/z00262551 2014/2/27 end */

        }
        else
        {
                /*tcp filter*/
                ret = hcc_get_tx_net_queue_mapping(hi110x_dev->hcc, skb);
        }
    }
    else if (ETHER_TYPE_802_1X == ether_type)
    {
        HWIFI_INFO("802_1X packet,packet len=%d", skb->len);
        ret =  DATA_HI_QUEUE;
    }
    else if (ETHER_TYPE_ARP == ether_type)
    {
        HWIFI_INFO("ARP packet,packet len=%d", skb->len);
        ret =  DATA_HI_QUEUE;
		/* DTS2014032401941  Hi110x bug fix zhouxinfeng/z00262551 2014/3/29 begin */
        hcc_net_work_state_detect(hi110x_dev->hcc);
		/* DTS2014032401941  Hi110x bug fix zhouxinfeng/z00262551 2014/3/29 end */
    }
    else if (ETHER_TYPE_802_1X_PREAUTH == ether_type)
    {
        HWIFI_INFO("802_1X_PREAUTH packet,packet len=%d", skb->len);
        ret =  DATA_HI_QUEUE;
    }

    HWIFI_WARN((ret > HCC_QUEUE_COUNT), "select wrong net queue type %u\n", ret);

    if(ret >= HCC_QUEUE_COUNT)
        ret = DATA_LO_QUEUE;


    return ret;
}
/*DTS2013122007483   Hi110x bug fix zhouxinfeng/z00262551 2014/1/3 end */


STATIC const struct net_device_ops hwifi_netdev_ops = {
    .ndo_open             = hwifi_netdev_open,
    .ndo_stop             = hwifi_netdev_stop,
    .ndo_start_xmit      = hwifi_netdev_start_xmit,
    .ndo_set_mac_address = hwifi_netdev_set_mac,
    .ndo_change_mtu      = hwifi_netdev_change_mtu,
    .ndo_do_ioctl        = hwifi_netdev_do_ioctl,
    .ndo_select_queue    = hwifi_select_queue,
};


#ifdef ARP_OFFLOAD_SUPPORT


/*
 * 3 Function Definition
 */
/*
 * Prototype    : hi110x_ipa_update
 * Description  : update
 * Input        : struct notifier_block *  this
 *            uint32 ipa
 *            bool add
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/12
 *     Author       : lwx164577
 *     Modification : Created function
 *
 */

int32  hi110x_ipa_update(struct hi110x_device *hi110x_dev, uint32 ipa, bool add)
{
    struct sk_buff     *skb;
    struct set_ipa_msg *msg;
    int32               ret;
    uint16              msg_size;

    HWIFI_ASSERT(NULL != hi110x_dev);
    ipa = cpu_to_be32(ipa);
    msg_size = sizeof(struct set_ipa_msg);

    skb = hwifi_alloc_skb_for_cmd(msg_size);
    if (NULL == skb)
    {
        return -EFAIL;
    }

    msg = (struct set_ipa_msg *)skb_put(skb, msg_size);

    /* set the msg header */
    hwifi_fill_msg_hdr(&msg->msg_hdr, HOST_CMD_CONFIG, msg_size);
    hwifi_fill_int_wid(&msg->ipa_wid, WID_STACK_IP_ADDR, (add ? ipa : 0));

    ret = hwifi_send_cmd(hi110x_dev->cfg, skb);
    if (SUCC != ret)
    {
        HWIFI_WARNING("Event:%s failed to send ip address\n",add ? "UP":"DOWN");
    }
    else
    {
        HWIFI_INFO("Event: %s succeed to send ip address ip:%u.%s.%s.%u\n",
                     add ? "UP":"DOWN",
                    ((ipa >> 24)& 0xff),
                    "**",
                    "**",
                    (ipa & 0xff)
                    );
    }

    return ret;

}

/*
 * 3 Function Definition
 */
/*
 * Prototype    : hi110x_inet_event
 * Description  : inet callback function to handle ip address change event
 * Input        : struct notifier_block *  this
 *            unsigned long  event
 *            void * ptr
 * Output       : None
 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/3/12
 *     Author       : lwx164577
 *     Modification : Created function
 *
 */
int32  hi110x_inet_event(struct notifier_block *this, unsigned long event, void *ptr)
{
    struct hi110x_device   *hi110x_dev;  /* get device struct hi110x_device */
    struct net_device      *ndev;
    struct in_ifaddr       *ifa = (struct in_ifaddr *)ptr;
    int32                   ret;
    int32                   ps_mode;

    /* DTS2015021009868 Hi110x bug fix hwx212164 2015/02/13 begin */
    if ((!ifa) || (!ifa->ifa_dev->dev))
    /* DTS2015021009868 Hi110x bug fix hwx212164 2015/02/13 end */
    {
        HWIFI_WARNING("if_addr is NULL\n");
        return NOTIFY_DONE;
    }

    ndev = ifa->ifa_dev->dev;
    /* DTS2015021009868 Hi110x bug fix hwx212164 2015/02/13 begin */
    if (ndev->netdev_ops != &hwifi_netdev_ops)
    {
        HWIFI_WARNING("The netdev_ops is not match");
        return NOTIFY_DONE;
    }
    /* DTS2015021009868 Hi110x bug fix hwx212164 2015/02/13 end */

    hi110x_dev = netdev_to_hi110xdev(ndev);
    if ((NULL == hi110x_dev) || (NULL == hi110x_dev->cfg))
    {
        HWIFI_WARNING("The hi110x_dev is not match");
        return NOTIFY_DONE;
    }

    switch (event)
    {
    case NETDEV_UP:
        HWIFI_INFO("Netdev up");
        /* DTS2014041800671 Hi1101 bug fix begin */
        /* 注connect_finished不能在其他地方设置true，严格与内核地址变动保持一致,wl_set_pwrm_late此函数除外 */
		hi110x_dev->pm_info->connect_finished = TRUE;
		/* DTS2014041800671 Hi1101 bug fix end */

        /*call ip address update function */
        ret = hi110x_ipa_update(hi110x_dev, ifa->ifa_address , TRUE);

        /* DTS2013121206795   Hi110x bug fix z00209041 日期（2013年/11月/8日） begin */
        /* DTS2013032707492 get ip then start power saving */
		/* DTS2014040303285 Hi110x bug fix yuanlu/WX164715 20140403 begin */
        if (IS_CONNECTED(hi110x_dev->cfg))
        {
            if (g_powermgmt_switch) {
                hi110x_pm_start_wdg(hi110x_dev->pm_info);

                /* DTS2013121902757   Hi110x bug fix z00209041 20131218 begin */
                /* 设置P2P Client模式省电模式1 */
                if (IS_P2P_ON(hi110x_dev->cfg) && IS_STA(hi110x_dev->cfg))
                {
                    ps_mode = HI110X_POWERMODE_MIN;
                    ret = hi110x_pm_powermode_set(hi110x_dev->cfg, ps_mode);
                    if (ret < 0)
                    {
                        HWIFI_WARNING("set powermode wid failed, when early suspend");
                        return ret;
                    }

                }
            }
            /* DTS2013121902757   Hi110x bug fix z00209041 20131218 begin */
        }
		/* DTS2014040303285 Hi110x bug fix yuanlu/WX164715 20140403 end */
        /* DTS2013121206795   Hi110x bug fix z00209041 日期（2013年/11月/8日） end */

        break;

    case NETDEV_DOWN:
        HWIFI_INFO("Netdev down");
        /* DTS2014041800671 Hi1101 bug fix begin */
        /* 注connect_finished不能在其他地方设置false，严格与内核地址变动保持一致 */
		hi110x_dev->pm_info->connect_finished = FALSE;
		/* DTS2014041800671 Hi1101 bug fix end */
        /* call ip address update function */
        ret = hi110x_ipa_update(hi110x_dev, ifa->ifa_address , FALSE);
        break;

    default:
        ret = -EFAIL;
        break;
    }

    return ((SUCC == ret) ? NOTIFY_OK : NOTIFY_DONE);
}

STATIC struct notifier_block  hi110x_inet_notifier = {
        .notifier_call = hi110x_inet_event
};

#endif

/* DTS2013121907342    Hi110x p2p powersave z00209041 20140118 start */
/*
 * Prototype    : hwifi_iface_process
 * Description  : 根据wpa_supplicant上层状态机的切换，决定开关网卡
 * Input        : struct hi110x_device *hi110x_dev
                  int32 state

 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/8/31
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
static int hwifi_iface_process(struct hi110x_device *hi110x_dev, int32 state)
{
    int32 ret = SUCC;

    if ((IFACE_OFF == state) && (atomic_read(&hi110x_dev->pm_info->wlanopen_cnt) > 0))
    {
        HWIFI_INFO("set wlan down cmd from wpa_supplicant");
        ret = hwifi_netdev_stop(hi110x_dev->netdev);
    }
    else if ((IFACE_ON == state) && (atomic_read(&hi110x_dev->pm_info->wlanopen_cnt) <= 0))
    {
        HWIFI_INFO("set wlan up cmd from wpa_supplicant");
        ret = hwifi_netdev_open(hi110x_dev->netdev);
    }

    return ret;
}


/*
 * Prototype    : hwifi_sm_power_handle
 * Description  : 根据wpa_supplicant上层状态机的切换，决定开关网卡
 * Input        : struct hi110x_device *hi110x_dev
                  int32 state
                  int32 p2p_powermgmt_flag

 * Return Value : int32
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2013/8/31
 *     Author       : z00209041
 *     Modification : Created function
 *
 */
int32 hwifi_sm_power_handle(struct hi110x_device *hi110x_dev, int32 state, int32 p2p_powermgmt_flag)
{
    int32 ret = SUCC;
    HWIFI_ASSERT(hi110x_dev != NULL);
    HWIFI_ASSERT(hi110x_dev->pm_info != NULL);
    HWIFI_ASSERT(hi110x_dev->cfg != NULL);
    /* DTS2013112101861  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/21 begin */
    if(hi110x_dev->hcc)
        cancel_work_sync(&hi110x_dev->hcc->excp_worker);
    /* DTS2013112101861  Hi110x bug fix zhouxinfeng/zwx165479 2013/11/21 end */
    /* 保存wpa_supplicant下发的状态 */
    hi110x_dev->pm_info->iface_state = state;

    if (g_powermgmt_switch)
    {
        /**
         *1、判断现在网卡状态 ON OFF
         *2、如果传入的状态与现有网卡状态不一致，那么按传入状态执行
         *3、考虑异常处理情况 TBD:如果处理异常处理场景，保存状态，不作任何处理
         * 异常处理状待添加
         */
        if(IS_STA(hi110x_dev->cfg))
        {
            if (IS_P2P_ON(hi110x_dev->cfg))
            {
                if (TRUE == p2p_powermgmt_flag)
                {
                    ret = hwifi_iface_process(hi110x_dev, state);
                }
                else
                {
                    /*TBD:netlink*/
                    HWIFI_WARNING("hi110x wlan now at state P2P mode, STA SM can not shutdown");
                    goto exit;
                }
            }
            else
            {
                ret = hwifi_iface_process(hi110x_dev, state);
            }
        }
        else
        {
            HWIFI_INFO("hi110x wlan now at state AP mode or P2P GO mode");
            goto exit;
        }
    }
    else
    {
        HWIFI_INFO("low powermgmt is not on, scan low powermgmt is not useful...");
        goto exit;
    }

    return ret;

exit:
    return -EFAIL;
}
/* DTS2013121907342    Hi110x p2p powersave z00209041 20140118 end */


/*
 * Prototype    : hwifi_netdev_register
 * Description  : alloc and register net device
 * Input        : struct cfg_struct *cfg
 *
 * Output       : None
 * Return Value : struct net_device*
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/8/31
 *     Author       : 00213814
 *     Modification : Created function
 *
 */
struct net_device* hwifi_netdev_register(struct hi110x_device *hi110x_dev, struct device *dev)
{
    struct ndev_priv_struct    *priv;
    struct net_device          *ndev;
    struct wireless_dev        *wdev;
    int8                        mac_addr[ETH_ALEN];

    HWIFI_ASSERT(NULL != dev);

/* DTS2013111108200 Hi110x bug fix z00217036 hangtianqi WX160629  2013/11/15 begin */
    hwifi_get_mac_addr(mac_addr);
/* DTS2013111108200 Hi110x bug fix z00217036 hangtianqi WX160629  2013/11/15 end */

    /*
     * alloc net device structure
     */
    ndev = alloc_netdev_mqs(sizeof(struct ndev_priv_struct), "wlan%d", ether_setup, NET_TX_QUEUES, NET_RX_QUEUES);
    if (!ndev)
    {
        HWIFI_ERROR("Failed to alloc netdev memory");
        return NULL;
    }

    /* this is importable */
    priv = netdev_priv(ndev);
    memset(priv, 0, sizeof(struct ndev_priv_struct));
    priv->hi110x_dev = hi110x_dev;

    wdev = &priv->wdev;
    wdev->netdev = ndev;
    wdev->wiphy = wl_get_wiphy(hi110x_dev->cfg);
    wdev->iftype = NL80211_IFTYPE_STATION;

    /* set netdevice param */
    SET_NETDEV_DEV(ndev, dev);
    ndev->netdev_ops        = &hwifi_netdev_ops;
    ndev->ieee80211_ptr        = wdev;
    /* TBD: room for hcc and pad */
    /*DTS2012111207372 z00209041*/
    ndev->needed_headroom   = HCC_MAX_HEAD_SIZE ;

    /*we doubt this tailroom was nerver effect,
      there is no copy,so need to add skb align space.*/
    ndev->needed_tailroom   = HCC_PACKET_ALIGN_LEN ;

    memcpy(ndev->dev_addr, mac_addr, ETH_ALEN);

    if (register_netdev(ndev) < 0)
    {
        HWIFI_ERROR("Failed to register network device");
        free_netdev(ndev);

        return NULL;
    }

    hcc_rx_register(hi110x_dev->hcc, HCC_TYPE_DATA, hwifi_netdev_rx, ndev);

#ifdef ARP_OFFLOAD_SUPPORT
    if(register_inetaddr_notifier(&hi110x_inet_notifier))
    {
        HWIFI_WARNING("Failed to register inetaddr notifier\n");
    }
#endif

    HWIFI_INFO("Net device registered");


    return ndev;
}

/*
 * Prototype    : hwifi_netdev_unregister
 * Description  : unregister netdevice and free mem
 * Input        : struct net_device*
 * Output       : None
 * Return Value : void
 * Calls        :
 * Called By    :
 *
 *   History        :
 *   1.Date         : 2012/8/31
 *     Author       : g00213814
 *     Modification : Created function
 *
 */
void hwifi_netdev_unregister(struct net_device* ndev)
{
    struct hi110x_device    *hi110x_dev;

    if (NULL == ndev)
    {
        HWIFI_WARNING("Net device is null");
        return;
    }

    hi110x_dev = netdev_to_hi110xdev(ndev);
    if (hi110x_dev != NULL)
    {
        clear_bit(HI_STATUS_WLAN_READY, &hi110x_dev->status);
        hcc_rx_unregister(hi110x_dev->hcc, HCC_TYPE_DATA);
    }
    else
    {
        HWIFI_WARNING("Hi110x_dev is null");
    }

#ifdef ARP_OFFLOAD_SUPPORT
    unregister_inetaddr_notifier(&hi110x_inet_notifier);
#endif

    netif_tx_stop_all_queues(ndev);
    unregister_netdev(ndev);
    free_netdev(ndev);

    HWIFI_INFO("Net device unregistered");
}



#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

