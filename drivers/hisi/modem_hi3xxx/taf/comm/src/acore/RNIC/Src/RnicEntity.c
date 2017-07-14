/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : RnicEntity.c
  版 本 号   : 初稿
  作    者   : 范晶
  生成日期   : 2011年12月06日
  最近修改   :
  功能描述   : RNIC实体操作
  函数列表   :

  修改历史   :
  1.日    期   : 2011年12月06日
    作    者   : 范晶
    修改内容   : 创建文件

******************************************************************************/
#ifdef  __cplusplus
  #if  __cplusplus
  extern "C"{
  #endif
#endif

/******************************************************************************
   1 头文件包含
******************************************************************************/
#include "v_typdef.h"
#include "ImmInterface.h"
#include "RnicProcMsg.h"
#include "RnicLog.h"
#include "RnicEntity.h"
#include "RnicDebug.h"
/* Added by f00179208 for DSDA Phase I, 2012-11-28, Begin */
#include "RnicCtx.h"
/* Added by f00179208 for DSDA Phase I, 2012-11-28, End */
/* Modified by m00217266 for L-C互操作项目, 2014-1-21, begin */
#if (FEATURE_ON == FEATURE_CL_INTERWORK)
#include "SdioInterface.h"
#endif
#include "RnicConfigInterface.h"
/* Modified by m00217266 for L-C互操作项目, 2014-1-21, end */

/* Added by j00174725 for DTS2014080800660, 2014-08-05, Begin */
#include "product_config.h"
/* Added by j00174725 for DTS2014080800660, 2014-08-05, End */

/* Added by j00174725 for DTS2014080800660, 2014-08-05, Begin */
#if (VOS_WIN32 == VOS_OS_VER)
#include <stdio.h>
#endif
/* Added by j00174725 for DTS2014080800660, 2014-08-05, End */
#include "mdrv.h"




/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/

#define THIS_FILE_ID PS_FILE_ID_RNIC_ENTITY_C

/******************************************************************************
   2 外部函数变量声明
******************************************************************************/

/******************************************************************************
   3 私有定义
******************************************************************************/

/******************************************************************************
   4 全局变量定义
*****************************************************************************/
/*lint -e762*/
/* Modified by l60609 for AP适配项目 ，2012-09-03 Begin */
#if (FEATURE_OFF == FEATURE_SKB_EXP)
extern int netif_rx(struct sk_buff *skb);
extern int netif_rx_ni(struct sk_buff *skb);
#else
/* Added by z60575 for DTS2012060902909, 2012-06-09 begin */
extern int netif_rx_ni_balong(struct sk_buff *skb);
/* Added by z60575 for DTS2012060902909, 2012-06-09, End */
#endif
/* Modified by l60609 for AP适配项目 ，2012-09-03 End */

/*lint +e762*/

/******************************************************************************
   5 函数实现
******************************************************************************/
/*****************************************************************************
 函 数 名  : RNIC_ProcUlDataInPdpActive
 功能描述  : 在PDP激活的状态，RNIC发送数据时的处理过程
 输入参数  : pstSkb :SKBUF数据首地址
             pstPriv:私有数据首地址
             ucRabid:链路承载号
             ucNetIndex:网卡ID
             enIpType:IPv4或IPv6
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2011年12月13日
   作    者   : 范晶
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
 3.日    期   : 2013年6月3日
   作    者   : L47619
   修改内容   : V3R3 Share-PDP项目修改
*****************************************************************************/
VOS_VOID RNIC_SendULDataInPdpActive(
    IMM_ZC_STRU                        *pstImmZc,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucRabId,
    VOS_UINT8                           ucNetIndex,
    ADS_PKT_TYPE_ENUM_UINT8             enIpType
)
{
    RNIC_UL_CTX_STRU                   *pstUlCtx;
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    VOS_UINT8                           ucSendAdsRabId;
    MODEM_ID_ENUM_UINT16                enModemId;

    pstUlCtx                            = RNIC_GET_UL_CTX_ADDR(ucNetIndex);
    enModemId                           = RNIC_GET_MODEM_ID_BY_NET_ID(ucNetIndex);

    /* 根据Modem Id组装RabId */
    if (MODEM_ID_0 == enModemId)
    {
        ucSendAdsRabId = ucRabId;
    }
#if (FEATURE_ON == FEATURE_MULTI_MODEM)
    else if (MODEM_ID_1 == enModemId)
    {
        ucSendAdsRabId = ucRabId | RNIC_RABID_TAKE_MODEM_1_MASK;
    }
#endif
    else
    {
        /* 不是Modem0和Modem1发来的数据，直接丢弃 */
        RNIC_DBG_MODEM_ID_UL_DISCARD_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        /* 丢包统计 */
        pstPriv->stStats.tx_dropped++;
        pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ProcUlDataInPdpActive:Modem Id failed");
        return;
    }

    if (VOS_OK != ADS_UL_SendPacketEx(pstImmZc, enIpType, ucSendAdsRabId))
    {
        RNIC_DBG_SEND_UL_PKT_FAIL_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        /* 丢包统计 */
        pstPriv->stStats.tx_dropped++;
        pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ProcUlDataInPdpActive:Send packet failed");
        return;
    }

    RNIC_DBG_SEND_UL_PKT_NUM(1, ucNetIndex);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    /* 统计网卡发送信息 */
    pstPriv->stStats.tx_packets++;
    pstPriv->stStats.tx_bytes += pstImmZc->len;

    /* 统计发送的上行数据包个数，用于按需拨号断开 */
    pstUlCtx->stULDataStats.ulULPeriodSndPkts++;

    /* 统计发送的数据字节数，用于流量上报 */
    pstUlCtx->stULDataStats.ulULPeriodSndBytes += pstImmZc->len;
    pstUlCtx->stULDataStats.ulULTotalSndBytes  += pstImmZc->len;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_TransSkbToImmZC
 功能描述  : 将SKBUF转换成A核共享内存
 输入参数  : pstSkb   :SKBUF数据包首地址
             pstPriv  :网卡私有地址指针
             ucNetIndex:网卡ID
 输出参数  : pstImmZc : A核共享数据内存
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2011年12月18日
   作    者   : 范晶
   修改内容   : 新生成函数
 2.日    期   : 2012年04月27日
   作    者   : 范晶
   修改内容   : 问题单号:DTS2012042302535,下行->A核->上行的数据包需要重新做一次
                跨核内存转换
 3.日    期   : 2012年8月30日
   作    者   : l60609
   修改内容   : AP适配项目 ：V9R1只处理系统内存
 4.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_UINT32 RNIC_TransSkbToImmZC(
    IMM_ZC_STRU                       **pstImmZc,
    struct sk_buff                     *pstSkb,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucNetIndex
)
{
    /* Modified by l60609 for AP适配项目 ，2012-08-30 Begin */
#if(FEATURE_ON == FEATURE_SKB_EXP)
    RNIC_UL_CTX_STRU                   *pstUlCtx = VOS_NULL_PTR;
    /* Added by f00179208 for DTS2012042302535，2012-04-26 Begin */
    IMM_MEM_STRU                       *pstImmMem = VOS_NULL_PTR;
    /* Added by f00179208 for DTS2012042302535，2012-04-26 Begin */
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    pstUlCtx                            = RNIC_GET_UL_CTX_ADDR(ucNetIndex);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */
#endif

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    *pstImmZc = (IMM_ZC_STRU *)pstSkb;

    return VOS_OK;
#else
    /* 如果是Linux系统提供的数据，需要转换成跨核内存 */
    if (MEM_TYPE_SYS_DEFINED == pstSkb->private_mem.enType)
    {
        *pstImmZc = IMM_ZcStaticCopy((IMM_ZC_STRU *)pstSkb);

        /* 内存搬移失败需要释放内存 */
        if (VOS_NULL_PTR == *pstImmZc)
        {
            /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
             RNIC_DBG_UL_CHANGE_IMMZC_FAIL_NUM(1, ucNetIndex);
            /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

            /* 丢包统计 */
            pstPriv->stStats.tx_dropped++;
            pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

            /* 释放内存, 该接口内部来区分内存的来源 */
            IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
            RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SkbTransToImmZC:Malloc IMM failed");
            return VOS_ERR;
        }

        /* 转换成功后，内核不释放LINUX系统提供的数据内存，由RNIC直接释放掉 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
    }
    /* 如果是用户管理的内存提供的数据 */
    else
    {
        /* Modified by f00179208 for DTS2012042302535，2012-04-26 Begin */
        pstImmMem = (IMM_MEM_STRU *)pstSkb->private_mem.pMem;

        /* A核共享内存池的内存,不需要转换 */
        if (IMM_MEM_POOL_ID_SHARE == pstImmMem->enPoolId)
        {
            *pstImmZc = (IMM_ZC_STRU *)pstSkb;
        }
        /* A核共享内存池以外的内存，需要重新转换一次跨核内存 */
        else
        {
            *pstImmZc = IMM_ZcStaticCopy((IMM_ZC_STRU *)pstSkb);

            /* 内存搬移失败需要释放内存 */
            if (VOS_NULL_PTR == *pstImmZc)
            {
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
                 RNIC_DBG_UL_CHANGE_IMMZC_FAIL_NUM(1, ucNetIndex);
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

                /* 丢包统计 */
                pstPriv->stStats.tx_dropped++;
                pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

                /* 释放内存, 该接口内部来区分内存的来源 */
                IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
                RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SkbTransToImmZC:Malloc IMM failed");
                return VOS_ERR;
            }

            /* 转换成功后，内核不释放LINUX系统提供的数据内存，由RNIC直接释放掉 */
            IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
        }
        /* Modified by f00179208 for DTS2012042302535，2012-04-26 Begin */
    }

    return VOS_OK;
#endif
    /* Modified by l60609 for AP适配项目 ，2012-08-30 End */
}

/*****************************************************************************
 函 数 名  : RNIC_ProcUlIpv4Data
 功能描述  : RNIC处理IPV4的上行数据
 输入参数  : pstSkb   :SKBUF数据包首地址
             pstNetDev:网卡设备指针
             ucNetIndex:网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2011年12月15日
   作    者   : 范晶
   修改内容   : 新生成函数
 2.日    期   : 2012年8月30日
   作    者   : l60609
   修改内容   : AP适配项目：在RNIC_TransSkbToImmZC中已统计转换失败的次数
 3.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_SendULIpv4Data(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucNetIndex
)
{
    VOS_UINT32                          ulRst;
    IMM_ZC_STRU                        *pstImmZc;
    VOS_UINT8                           ucRabId;

    pstImmZc                            = VOS_NULL_PTR;

    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    RNIC_DBG_RECV_UL_IPV4_PKT_NUM(1, ucNetIndex);

    ucRabId = RNIC_GET_SPEC_NET_IPV4_RABID(ucNetIndex);

    /* 非法RABID */
    if (RNIC_RAB_ID_INVALID == ucRabId)
    {
        RNIC_DBG_RAB_ID_ERR_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        /* 告警信息 */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendULIpv4Data:ipv4 is not act!");
        return;
    }

    /* 将应用下发的数据转换成跨核内存 */
    ulRst = RNIC_TransSkbToImmZC(&pstImmZc, pstSkb, pstPriv, ucNetIndex);
    if (VOS_OK != ulRst)
    {
        /* 如果转换失败，直接返回，不做后续的数据处理 */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendULIpv4Data: TransSkbToImmZC Fail!");
        return;
    }

    /* PDP激活的情况下数据的处理 */
    /* Modified by L47619 for V3R3 Share-PDP Project, 2013-6-6, begin */
    RNIC_SendULDataInPdpActive(pstImmZc, pstPriv, ucRabId, ucNetIndex, ADS_PKT_TYPE_IPV4);
    /* Modified by L47619 for V3R3 Share-PDP Project, 2013-6-6, end */
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_ProcUlIpv6Data
 功能描述  : RNIC处理IPV6的上行数据
 输入参数  : pstSkb   :SKBUF数据包首地址
             pstNetDev:网卡设备指针
             ucNetIndex:网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2011年12月15日
   作    者   : 范晶
   修改内容   : 新生成函数
 2.日    期   : 2012年8月30日
   作    者   : l60609
   修改内容   : AP适配项目：在RNIC_TransSkbToImmZC中已统计转换失败的次数
 3.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_SendULIpv6Data(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucNetIndex
)
{
    VOS_UINT32                          ulRst;
    IMM_ZC_STRU                        *pstImmZc;
    VOS_UINT8                           ucRabId;

    pstImmZc                            = VOS_NULL_PTR;

    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    RNIC_DBG_RECV_UL_IPV6_PKT_NUM(1, ucNetIndex);

    ucRabId = RNIC_GET_SPEC_NET_IPV6_RABID(ucNetIndex);

    /* 非法RABID */
    if (RNIC_RAB_ID_INVALID == ucRabId)
    {
        RNIC_DBG_RAB_ID_ERR_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        /* 告警信息 */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendULIpv6Data:ipv6 is net act!");
        return;
    }

     /* 将应用下发的数据转换成跨核内存 */
    ulRst = RNIC_TransSkbToImmZC(&pstImmZc, pstSkb, pstPriv, ucNetIndex);
    if (VOS_OK != ulRst)
    {
        /* 如果转换失败，直接返回，不做后续的数据处理 */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendULIpv6Data: TransSkbToImmZC Fail!");
        return;
    }

    /* PDP激活的情况下数据的处理 */
    /* Modified by L47619 for V3R3 Share-PDP Project, 2013-6-6, begin */
    RNIC_SendULDataInPdpActive(pstImmZc, pstPriv, ucRabId, ucNetIndex, ADS_PKT_TYPE_IPV6);
    /* Modified by L47619 for V3R3 Share-PDP Project, 2013-6-6, end */
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    return;

}


/*****************************************************************************
 函 数 名  : RNIC_ProcDemDial
 功能描述  : RNIC处理按需拨号
 输入参数  : struct sk_buff  *pstSkb,
             pBuf -- 存储数据的缓存的ID

 输出参数  : 无
 返 回 值  : OK
             ERROR
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2010年1月19日
    作    者   :  范晶
    修改内容   : 新生成函数
  2.日    期   : 2012年6月6日
    作    者   : A00165503
    修改内容   : DTS2012060502819: 灌包方式触发按需拨号, 导致频繁上报事件
  3.日    期   : 2012年11月23日
    作    者   : f00179208
    修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_UINT32 RNIC_ProcDemDial(
    struct sk_buff                     *pstSkb
)
{
    RNIC_DIAL_MODE_STRU                *pstDialMode;
    /* Added by A00165503 for DTS2012060502819, 2012-06-06, Begin */
    RNIC_TIMER_STATUS_ENUM_UINT8        enTiStatus;
    /* Added by A00165503 for DTS2012060502819, 2012-06-06, End */
    VOS_UINT32                          ulIpAddr;

    /* 获取IP地址 */
    ulIpAddr = *((VOS_UINT32 *)((pstSkb->data) + RNIC_IP_HEAD_DEST_ADDR_OFFSET));

    /* 获取按需拨号的模式以及时长的地址 */
    pstDialMode = RNIC_GetDialModeAddr();

    /*如果是广播包，则不发起按需拨号，直接过滤调*/
    if ( RNIC_IPV4_BROADCAST_ADDR == ulIpAddr )
    {
        /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
        RNIC_DBG_UL_RECV_IPV4_BROADCAST_NUM(1, RNIC_RM_NET_ID_0);
        /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

        /* 释放内存 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
        return VOS_ERR;
    }

    /* Added by A00165503 for DTS2012060502819, 2012-06-06, Begin */
    /* 获取当前拨号保护定时器的状态 */
    enTiStatus  = RNIC_GetTimerStatus(TI_RNIC_DEMAND_DIAL_PROTECT);

    /*为了防止按需拨号上报太快，启动一个两秒定时器，*/
    if (RNIC_TIMER_STATUS_STOP == enTiStatus)
    {
        /* 通知应用进行拨号操作 */
        if (RNIC_ALLOW_EVENT_REPORT == pstDialMode->enEventReportFlag)
        {
            if (VOS_OK == RNIC_SendDialEvent(DEVICE_ID_WAN, RNIC_DAIL_EVENT_UP))
            {
                /* 启动拨号保护定时器  */
                RNIC_StartTimer(TI_RNIC_DEMAND_DIAL_PROTECT, TI_RNIC_DEMAND_DIAL_PROTECT_LEN);
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
                RNIC_DBG_SEND_APP_DIALUP_SUCC_NUM(1, RNIC_RM_NET_ID_0);
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */
                RNIC_NORMAL_LOG(ACPU_PID_RNIC, "RNIC_ProcDemDial: Send dial event succ.");
            }
            else
            {
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
                RNIC_DBG_SEND_APP_DIALUP_FAIL_NUM(1, RNIC_RM_NET_ID_0);
                /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */
                RNIC_WARNING_LOG(ACPU_PID_RNIC, "RNIC_ProcDemDial: Send dial event fail.");
            }

            RNIC_MNTN_TraceDialConnEvt();
        }
    }
    /* Added by A00165503 for DTS2012060502819, 2012-06-06, End */

    /* 释放内存 */
    IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

    return VOS_OK;
}

/* Modified by l60609 for L-C互操作项目, 2014-1-14, begin */
#if (FEATURE_ON == FEATURE_CL_INTERWORK)
/*****************************************************************************
 函 数 名  : RNIC_RcvOutsideModemUlData
 功能描述  : CDMA模式接收到TCP/IP协议栈的上行数据
 输入参数  : struct sk_buff                     *pstSkb
             struct net_device                  *pstNetDev
             RNIC_NETCARD_DEV_INFO_STRU         *pstPriv
             VOS_UINT8                           ucNetIndex
 输出参数  : 无
 返 回 值  : netdev_tx_t
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月7日
    作    者   : m00217266
    修改内容   : 新生成函数

*****************************************************************************/
netdev_tx_t RNIC_RcvOutsideModemUlData(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucNetIndex
)
{
    VOS_UINT8                           ucIpType;
    VOS_UINT8                           ucPdnId;
    VOS_ULONG                           ulRslt;
    VOS_UINT32                          ulDataLen;
    RNIC_UL_CTX_STRU                   *pstUlCtx    = VOS_NULL_PTR;

    ulRslt                              = SDIO_ERR;
    ulDataLen                           = pstSkb->len;
    pstUlCtx                            = RNIC_GET_UL_CTX_ADDR(ucNetIndex);

    /* 普通的IP首部为20字节 */
    /*-------------------------------------------------------------------
      |      0        |       1        |       2        |       3        |
      |---------------|----------------|----------------|----------------|
      |0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7|
      --------------------------------------------------------------------
      | 协议  | 首部  |    服务类型    |            总长度               |
      | 版本  | 长度  |     (TOS)      |           (字节数)              |
      --------------------------------------------------------------------
      |            16位标识            | 标志 |         13位片偏移       |
      --------------------------------------------------------------------
      | 生存时间(TTL) |    8位协议     |        16位首部校验和           |
      --------------------------------------------------------------------
      |                           32位源IP地址                           |
      --------------------------------------------------------------------
      |                           32位目的IP地址                         |
      --------------------------------------------------------------------
    */
    /* 获取协议版本号 */
    ucIpType    = RNIC_GET_IP_VERSION(pstSkb->data[0]);

    /* IP报文类型判断 */
    switch(ucIpType)
    {
        /* IPv4 报文  IPv6 报文 */
        case RNIC_IPV4_VERSION:
            ucPdnId = RNIC_GET_SPEC_NET_IPV4_PDNID(ucNetIndex);
            break;

        case RNIC_IPV6_VERSION:
            ucPdnId = RNIC_GET_SPEC_NET_IPV6_PDNID(ucNetIndex);
            break;

        default:
            /* 可维可测 */
            RNIC_DBG_RECV_UL_ERR_PKT_NUM(1, ucNetIndex);
            pstPriv->stStats.tx_dropped++;
            pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

            /* 释放内存 */
            IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
            return NETDEV_TX_OK;
    }

    /* 非法Pdn Id */
    if (RNIC_PDN_ID_INVALID == ucPdnId)
    {
        RNIC_DBG_PDN_ID_ERR_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        return NETDEV_TX_OK;
    }

    ulRslt  = SDIO_UL_SendPacket(pstSkb, ucPdnId);

    if (SDIO_OK != ulRslt)
    {
        RNIC_DBG_SEND_UL_PKT_FAIL_NUM(1, ucNetIndex);
        pstPriv->stStats.tx_dropped++;
        pstUlCtx->stULDataStats.ulULTotalDroppedPkts++;

        /* 释放内存 */
        IMM_ZcFree(pstSkb);
    }
    else
    {
        RNIC_DBG_SEND_UL_PKT_NUM(1, ucNetIndex);

        /* 统计网卡发送信息 */
        pstPriv->stStats.tx_packets++;
        pstPriv->stStats.tx_bytes += ulDataLen;

        /* 统计发送的上行数据包个数 */
        pstUlCtx->stULDataStats.ulULPeriodSndPkts++;

        /* 统计发送的数据字节数，用于流量上报 */
        pstUlCtx->stULDataStats.ulULPeriodSndBytes += ulDataLen;
        pstUlCtx->stULDataStats.ulULTotalSndBytes  += ulDataLen;
    }

    return NETDEV_TX_OK;
}
#endif
/*****************************************************************************
 函 数 名  : RNIC_RcvInsideModemUlData
 功能描述  : 接收到TCP/IP协议栈3GPP的上行数据
 输入参数  : struct sk_buff                     *pstSkb
             struct net_device                  *pstNetDev
             RNIC_NETCARD_DEV_INFO_STRU         *pstPriv
             VOS_UINT8                           ucNetIndex
 输出参数  : 无
 返 回 值  : netdev_tx_t
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月7日
    作    者   : m00217266
    修改内容   : 新生成函数

*****************************************************************************/
netdev_tx_t RNIC_RcvInsideModemUlData(
    struct sk_buff                     *pstSkb,
    struct net_device                  *pstNetDev,
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucNetIndex
)
{
    VOS_UINT8                           ucIpType;
    /* Modified by l60609 for AP适配项目 ，2012-08-30 Begin */
    /* Added by A00165503 for DTS2012053004651, 2012-05-31, Begin */
#if(FEATURE_ON == FEATURE_SKB_EXP)
    VOS_UINT32                          ulSndPermitFlg;
#endif
    /* Added by A00165503 for DTS2012053004651, 2012-05-31, End */

#if (FEATURE_ON == FEATURE_SKB_EXP)
    /* Added by A00165503 for DTS2012053004651, 2012-05-31, Begin */
    /* 获取上行允许发送标识 */
    ulSndPermitFlg = ADS_UL_IsSendPermit();
#endif

    /* 流控启动时, 直接丢弃数据包 */
#if (FEATURE_ON == FEATURE_SKB_EXP)
    if ((RNIC_FLOW_CTRL_STATUS_START == RNIC_GET_FLOW_CTRL_STATUS(ucNetIndex))
     && (VOS_FALSE == ulSndPermitFlg))
#else
    if (RNIC_FLOW_CTRL_STATUS_START == RNIC_GET_FLOW_CTRL_STATUS(ucNetIndex))
#endif
    /* Modified by l60609 for AP适配项目 ，2012-09-03 End */
    {
        RNIC_DBG_FLOW_CTRL_UL_DISCARD_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree((IMM_ZC_STRU *)pstSkb);

        return NETDEV_TX_OK;
    }
    /* Added by A00165503 for DTS2012053004651, 2012-05-31, End */
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    /* 普通的IP首部为20字节 */
    /*-------------------------------------------------------------------
      |      0        |       1        |       2        |       3        |
      |---------------|----------------|----------------|----------------|
      |0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7||0|1|2|3|4|5|6|7|
      --------------------------------------------------------------------
      | 协议  | 首部  |    服务类型    |            总长度               |
      | 版本  | 长度  |     (TOS)      |           (字节数)              |
      --------------------------------------------------------------------
      |            16位标识            | 标志 |         13位片偏移       |
      --------------------------------------------------------------------
      | 生存时间(TTL) |    8位协议     |        16位首部校验和           |
      --------------------------------------------------------------------
      |                           32位源IP地址                           |
      --------------------------------------------------------------------
      |                           32位目的IP地址                         |
      --------------------------------------------------------------------
    */
    /* 获取协议版本号 */
    ucIpType    = RNIC_GET_IP_VERSION(pstSkb->data[0]);

    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    /* 只在网卡0上面才会触发按需拨号 */
    if ((RNIC_IPV4_VERSION == ucIpType)
     && (AT_RNIC_DIAL_MODE_DEMAND_DISCONNECT == RNIC_GET_DIAL_MODE())
     && (RNIC_PDP_REG_STATUS_DEACTIVE == RNIC_GET_SPEC_NET_IPV4_REG_STATE(ucNetIndex))
     && (RNIC_RM_NET_ID_0 == ucNetIndex))
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */
    {

        /* 处理按需拨号 */
        if (VOS_ERR == RNIC_ProcDemDial(pstSkb))
        {
            RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_StartXmit, the data is discared!");
        }

        return NETDEV_TX_OK;
    }

    /* IP报文类型判断 */
    switch(ucIpType)
    {
        /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
        /* IPv4 报文 */
        case RNIC_IPV4_VERSION:
            RNIC_SendULIpv4Data(pstSkb, pstNetDev, pstPriv, ucNetIndex);
            break;

        /* IPv6 报文 */
        case RNIC_IPV6_VERSION:
            RNIC_SendULIpv6Data(pstSkb, pstNetDev, pstPriv, ucNetIndex);
            break;

        default:
            RNIC_DBG_RECV_UL_ERR_PKT_NUM(1, ucNetIndex);

            /* 释放内存 */
            IMM_ZcFree((IMM_ZC_STRU *)pstSkb);
            break;
        /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */
    }

    return NETDEV_TX_OK;
}
/* Modified by l60609 for L-C互操作项目, 2014-1-14, end */

/*****************************************************************************
 函 数 名  : RNIC_AddMacHead
 功能描述  : 给IMM_ZC_STRU 零拷贝结构添加MAC头
 输入参数  : IMM_ZC_STRU *pstImmZc
             const VOS_UINT8  *pucAddData
             VOS_UINT16 usLen
 输出参数  : 无
 返 回 值  : VOS_OK 添加成功
             VOS_ERR 添加失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : S62952
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 RNIC_AddMacHead (
    IMM_ZC_STRU                        *pstImmZc,
    const VOS_UINT8                    *pucAddData
)
{
    VOS_UINT8                          *pucDestAddr;


    if (VOS_NULL == pstImmZc)
    {
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_AddMacHead :pstImmZc ptr is null!");
        return VOS_ERR;
    }

    if (VOS_NULL == pucAddData)
    {
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_AddMacHead: pucData ptr is null!");
        return VOS_ERR;
    }

    if(RNIC_ETH_HDR_SIZE > (pstImmZc->data - pstImmZc->head))
    {
        return VOS_ERR;
    }

    pucDestAddr = skb_push(pstImmZc, RNIC_ETH_HDR_SIZE);

    VOS_MemCpy(pucDestAddr, pucAddData, RNIC_ETH_HDR_SIZE);

    return VOS_OK;

}

/* Modified by l60609 for L-C互操作项目, 2014-01-06, Begin */
#if (FEATURE_ON == FEATURE_CL_INTERWORK)
/*****************************************************************************
 函 数 名  : RNIC_ShowSdioDlData
 功能描述  : 打印sdio模块过来的数据
 输入参数  : pstSkb   :SKBUF数据首地址
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2014年03月11日
   作    者   : m00217266
   修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID RNIC_ShowSdioDlData(
    VOS_UINT8                           ucPdnId,
    IMM_ZC_STRU                        *pstImmZc
)
{
    VOS_UINT32                          i;

    /* RNIC 上行数据打印开关，打印去mac头的数据 */
    if (VOS_TRUE == g_ulRnicPrintDlDataFlg)
    {
        vos_printf("RNIC_ShowSdioDlData : dl data pdn id is %d. \r\n", ucPdnId);
        vos_printf("RNIC_ShowSdioDlData : dl data len is %d. \r\n", pstImmZc->len);
        vos_printf("RNIC_ShowSdioDlData : dl data content is: \r\n");

        for (i = 0; i < pstImmZc->len; i++)
        {
            if (pstImmZc->data[i] > 0xf)
            {
                vos_printf("%x", pstImmZc->data[i]);
            }
            else
            {
                vos_printf("0%x", pstImmZc->data[i]);
            }
        }
        vos_printf("\r\n");
    }

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_RcvSdioDlData
 功能描述  : 接收SDIO的下行数据
 输入参数  : VOS_UINT8                           ucPdnId
             IMM_ZC_STRU                        *pstData
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月6日
    作    者   : m00217266
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 RNIC_RcvSdioDlData(
    VOS_UINT8                           ucPdnId,
    IMM_ZC_STRU                        *pstImmZc
)
{
    VOS_UINT8                           ucNetIndex;
    ADS_PKT_TYPE_ENUM_UINT8             enPktType;
    VOS_UINT8                           ucIpType;
    VOS_UINT32                          ulRet;

    /* 可谓可测，打印数据包内容和pdn id */
    RNIC_ShowSdioDlData(ucPdnId, pstImmZc);

    /* 根据PDNid获取对应的RMNETid */
    ucNetIndex     = RNIC_GET_RM_NET_ID_BY_PDN_ID(ucPdnId);

    /* 获取协议版本号 */
    ucIpType    = RNIC_GET_IP_VERSION(pstImmZc->data[0]);

    if (RNIC_IPV4_VERSION == ucIpType)
    {
        enPktType = ADS_PKT_TYPE_IPV4;
    }
    else if (RNIC_IPV6_VERSION == ucIpType)
    {
        enPktType = ADS_PKT_TYPE_IPV6;
    }
    else    /* 数据包类型与承载支持类型不一致 */
    {
        RNIC_DBG_RECV_DL_ERR_PKT_NUM(1, ucNetIndex);
        RNIC_ERROR_LOG1(ACPU_PID_RNIC, "RNIC_RcvSdioDlData, Ip Type is !", ucIpType);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        return RNIC_ERROR;
    }

    ulRet = RNIC_SendDlData(ucNetIndex, pstImmZc, enPktType);
    return ulRet;
}
#endif

/*****************************************************************************
 函 数 名  : RNIC_RcvAdsDlData
 功能描述  : RNIC收到ADS下行数据
 输入参数  : ucRabid  :链路承载号
             pstData  :SKBUF数据包首地址
             enPdpType:PDP 类型
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年2月10日
    作    者   : m00217266
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32  RNIC_RcvAdsDlData(
    VOS_UINT8                           ucExRabid,
    IMM_ZC_STRU                        *pstImmZc,
    ADS_PKT_TYPE_ENUM_UINT8             enPktType,
    VOS_UINT32                          ulExParam
)
{
    VOS_UINT32                          ulRet;
    VOS_UINT8                           ucRmNetId;

    ucRmNetId = RNIC_GET_RMNETID_FROM_EXPARAM(ulExParam);

    ulRet = RNIC_SendDlData(ucRmNetId, pstImmZc, enPktType);

    return ulRet;
}


/*****************************************************************************
 函 数 名  : RNIC_SendDlData
 功能描述  : RNIC_SendDlData接收数据时的处理过程
 输入参数  : ucNetIndex :网卡id
             pstData    :SKBUF数据包首地址
             enPdpType  :PDP 类型
 输出参数  : 无
 返 回 值  :
 调用函数  : VOS_UINT32:RNIC_OK, RNIC_ERROR
 被调函数  :

 修改历史     :
  1.日    期   : 2011年12月06日
    作    者   : 范晶
    修改内容   : 新生成函数
  2.日    期   : 2011年06月08日
    作    者   : zhangyizhan 60575
    修改内容   : DTS2012060708396配合北京修改
  3.日    期   : 2011年06月09日
    作    者   : zhangyizhan 60575
    修改内容   : DTS2012060902909性能问题修改，,V3R2/V7R1统一调用netif_rx
  4.日    期   : 2012年6月20日
    作    者   : A00165503
    修改内容   : DTS2012061904440: 增加用户面时延统计
  5.日    期   : 2012年6月20日
    作    者   : f00179208
    修改内容   : DTS2012070306267: 调用内核接口失败后，不需要释放内存
  6.日    期   : 2012年11月23日
    作    者   : f00179208
    修改内容   : DSDA Phase I: RNIC多实例
  7.日    期   : 2014年6月13日
    作    者   : A00165503
    修改内容   : DTS2014052607108: 规避下行灌包插拔核复位问题
*****************************************************************************/
VOS_UINT32 RNIC_SendDlData(
    VOS_UINT8                           ucNetIndex,
    IMM_ZC_STRU                        *pstImmZc,
    ADS_PKT_TYPE_ENUM_UINT8             enPktType
)
{
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv     = VOS_NULL_PTR;
    RNIC_DL_CTX_STRU                   *pstDlCtx    = VOS_NULL_PTR;
    VOS_UINT8                          *pucAddData  = VOS_NULL_PTR;

    /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, begin */
    /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, End */

    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    if (ucNetIndex >= RNIC_RM_NET_ID_BUTT)
    {
        RNIC_DBG_NETID_DL_DISCARD_NUM(1, RNIC_RM_NET_ID_0);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        /* 打印错误LOG */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData:ucNetIndex is null!");

        return RNIC_INVAL;
    }

    pstDlCtx       = RNIC_GET_DL_CTX_ADDR(ucNetIndex);

    /* 获取网卡私有数据地址 */
    pstPriv        = RNIC_GET_SPEC_PRIV_INFO_ADDR(ucNetIndex);

    /* RNIC的私有数据为空 */
    if (VOS_NULL_PTR == pstPriv)
    {
        RNIC_DBG_NETCAED_DL_DISCARD_NUM(1, ucNetIndex);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        /* 打印错误LOG */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData:priv ptr is null!");

        return RNIC_INVAL;
    }

    /* 网卡未打开 */
    if (RNIC_NETCARD_STATUS_CLOSED == pstPriv->enStatus)
    {
        RNIC_DBG_DISCARD_DL_PKT_NUM(1, ucNetIndex);

        /* 丢包统计，释放内存 */
        pstPriv->stStats.rx_dropped++;
        pstDlCtx->stDLDataStats.ulDLTotalDroppedPkts++;
        IMM_ZcFree(pstImmZc);

        /* 打印错误LOG */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData:Netcard is closed!");

        return RNIC_OK;
    }

    /* skb数据长度超出有效值(不包含MAC头) */
    if ((pstImmZc->len) > RNIC_MAX_PACKET)
    {
        RNIC_DBG_RECV_DL_BIG_PKT_NUM(1, ucNetIndex);

        /* 统计丢包和错包信息 */
        pstPriv->stStats.rx_errors++;
        pstPriv->stStats.rx_length_errors++;
        pstDlCtx->stDLDataStats.ulDLTotalDroppedPkts++;

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        /* 打印错误LOG */
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData:Data is invalid!");

        return RNIC_OK;
    }

    /* 填充MAC帧头，调用ImmZc接口将MAC帧头填入ImmZc中 */
    if (ADS_PKT_TYPE_IPV4 == enPktType)
    {
        RNIC_DBG_RECV_DL_IPV4_PKT_NUM(1, ucNetIndex);
        pucAddData = (VOS_UINT8*)&g_astRnicManageTbl[ucNetIndex].stIpv4Ethhead;
    }
    else if (ADS_PKT_TYPE_IPV6 == enPktType)
    {
        RNIC_DBG_RECV_DL_IPV6_PKT_NUM(1, ucNetIndex);
        pucAddData = (VOS_UINT8*)&g_astRnicManageTbl[ucNetIndex].stIpv6Ethhead;
    }
    else   /* 数据包类型与承载支持类型不一致 */
    {
        RNIC_DBG_RECV_DL_ERR_PKT_NUM(1, ucNetIndex);
        RNIC_ERROR_LOG1(ACPU_PID_RNIC, "RNIC_SendDlData, Rab is different from PktType!", enPktType);

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        return RNIC_ERROR;
    }

    if (VOS_OK != RNIC_AddMacHead(pstImmZc, pucAddData))
    {
        RNIC_DBG_ADD_DL_MACHEAD_FAIL_NUM(1, ucNetIndex);
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData, IMM_ZcAddMacHead fail!");

        /* 释放内存 */
        IMM_ZcFree(pstImmZc);

        return RNIC_ERROR;
    }

    pstImmZc->protocol = eth_type_trans(pstImmZc, pstPriv->pstNetDev);

    /* 统计网卡接收数据信息 */
    pstPriv->stStats.rx_packets++;
    pstPriv->stStats.rx_bytes += pstImmZc->len;

    /* Added by z60575 for DTS2012060902909, 2012-06-09 begin */
    /* 调用 netif_rx()函数将接收的数据节点递给内核 */
    /* Modify by z60575 for DTS2012060708396, 2012-06-08 begin */
#if (FEATURE_OFF == FEATURE_SKB_EXP)
    /* Modify by w00316404 for DTS2015071004300, 2015-08-10 begin */
    if (NET_RX_SUCCESS != netif_rx_ni((struct sk_buff *)pstImmZc))
    /* Modify by w00316404 for DTS2015071004300, 2015-08-10 end */
#else
    if (NET_RX_SUCCESS != netif_rx_ni_balong((struct sk_buff *)pstImmZc))
#endif
    {
        RNIC_DBG_SEND_DL_PKT_FAIL_NUM(1, ucNetIndex);

        /* 丢包统计，释放内存 */
        pstPriv->stStats.rx_dropped++;
        pstDlCtx->stDLDataStats.ulDLTotalDroppedPkts++;
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_SendDlData:Send data failed!");
        return RNIC_ERROR;
    }
    /* Modify by z60575 for DTS2012060708396, 2012-06-08 end */
    /* Added by z60575 for DTS2012060902909, 2012-06-09 end */

    /* 增加下行发送数据统计 */
    RNIC_DBG_SEND_DL_PKT_NUM(1, ucNetIndex);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, begin */
    /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, End */

    /* 统计收到的下行数据字节数，用于流量上报 */
    pstDlCtx->stDLDataStats.ulDLPeriodRcvBytes += pstImmZc->len;
    pstDlCtx->stDLDataStats.ulDLTotalRcvBytes  += pstImmZc->len;

    return RNIC_OK;

}
/* Modified by l60609 for L-C互操作项目, 2014-01-06, End */

/* Added by A00165503 for DTS2012053004651, 2012-05-31, Begin */
/*****************************************************************************
 函 数 名  : RNIC_StartFlowCtrl
 功能描述  : 启动上行流控
 输入参数  : ucRmNetId : 网卡ID
 输出参数  : 无
 返 回 值  : VOS_OK     - 启动流控成功
             VOS_ERR    - 启动流控失败
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年5月31日
   作    者   : A00165503
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
unsigned int RNIC_StartFlowCtrl(unsigned char ucRmNetId)
{
    /* Added by f00179208 for DSDA Phase I, 2012-12-10, Begin */
    RNIC_SET_FLOW_CTRL_STATUS(RNIC_FLOW_CTRL_STATUS_START, ucRmNetId);
    /* Added by f00179208 for DSDA Phase I, 2012-12-10, End */

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : RNIC_StopFlowCtrl
 功能描述  : 停止上行流控
 输入参数  : ucRmNetId : 网卡ID
 输出参数  : 无
 返 回 值  : VOS_OK     - 停止流控成功
             VOS_ERR    - 停止流控失败
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年5月31日
   作    者   : A00165503
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
unsigned int RNIC_StopFlowCtrl(unsigned char ucRmNetId)
{
    /* Added by f00179208 for DSDA Phase I, 2012-12-10, Begin */
    RNIC_SET_FLOW_CTRL_STATUS(RNIC_FLOW_CTRL_STATUS_STOP, ucRmNetId);
    /* Added by f00179208 for DSDA Phase I, 2012-12-10, End */

    return VOS_OK;
}
/* Added by A00165503 for DTS2012053004651, 2012-05-31, End */

/* Added by m00217266 for L-C互操作项目, 2014-1-21, begin */
/*****************************************************************************
 函 数 名  : RNIC_ConfigRmnetStatus
 功能描述  : 配置当前网卡状态（外部模块接口）
 输入参数  : 无
 输出参数  : 无
 返 回 值  : unsigned long
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年1月21日
    作    者   : m00217266
    修改内容   : 新生成函数

*****************************************************************************/
unsigned long RNIC_ConfigRmnetStatus(
    RNIC_RMNET_CONFIG_STRU             *pstConfigInfo
)
{
    /*可维可测，输出配置信息*/
    RNIC_MNTN_SndRmnetConfigInfoMsg(pstConfigInfo);
    RNIC_DBG_CONFIGCHECK_ADD_TOTLA_NUM();

    /* 参数检查 */
    /* 内部modem需要检查 rab id是否异常 */
    if (RNIC_MODEM_TYPE_INSIDE == pstConfigInfo->enModemType)
    {
        if (!RNIC_RAB_ID_IS_VALID(pstConfigInfo->ucRabId))
        {
            RNIC_DBG_CONFIGCHECK_ADD_RABID_ERR_NUM();
            RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild RAB id !");
            return VOS_ERR;
        }
    }
    /* 外部modem需要检查 pdn id是否异常 */
    else if (RNIC_MODEM_TYPE_OUTSIDE == pstConfigInfo->enModemType)
    {
        if (!RNIC_PDN_ID_IS_VALID(pstConfigInfo->ucPdnId))
        {
            RNIC_DBG_CONFIGCHECK_ADD_PDNID_ERR_NUM();
            RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild Pdn id !");
            return VOS_ERR;
        }
    }
    /* 无效MODEM TYPE */
    else
    {
        RNIC_DBG_CONFIGCHECK_ADD_MODEMTYPE_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild modem type!");
        return VOS_ERR;
    }


    /* 网卡操作类型异常直接返回error */
    if (!RNIC_RMNET_STATUS_IS_VALID(pstConfigInfo->enRmnetStatus))
    {
        RNIC_DBG_CONFIGCHECK_ADD_RMNETSTATUS_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild Rmnet Status !");
        return VOS_ERR;
    }

    /* IP类型非法直接返回error */
    if (!RNIC_IP_TYPE_IS_VALID(pstConfigInfo->enIpType))
    {
        RNIC_DBG_CONFIGCHECK_ADD_IPTYPE_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild IP type !");
        return VOS_ERR;
    }

    /* modem id异常检查，目前只接收配置modem0 */
    if (MODEM_ID_0 != pstConfigInfo->usModemId)
    {
        RNIC_DBG_CONFIGCHECK_ADD_MODEMID_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild modem id !");
        return VOS_ERR;
    }

    /* ucRmNetId 异常检查 目前RNIC_RM_NET_ID_3和RNIC_RM_NET_ID_4给副卡使用*/
    if (!RNIC_MODEM_0_RMNET_ID_IS_VALID(pstConfigInfo->ucRmNetId))
    {
        RNIC_DBG_CONFIGCHECK_ADD_RMNETID_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: invaild RmNet id !");
        return VOS_ERR;
    }

    /* 发送内部消息 */
    if (VOS_OK != RNIC_SndRnicRmnetConfigReq(pstConfigInfo))
    {
        RNIC_DBG_CONFIGCHECK_ADD_SND_ERR_NUM();
        RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_ConfigRmnetStatus: send pdp status ind fail !");
        return VOS_ERR;
    }

    RNIC_DBG_CONFIGCHECK_ADD_SUCC_NUM();
    return VOS_OK;
}
/* Added by m00217266 for L-C互操作项目, 2014-1-21, end */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
