
/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : NasMmcCtx.c
  版 本 号   : 初稿
  作    者   : f00179208
  生成日期   : 2011年12月06日
  最近修改   :
  功能描述   : RNIC CTX文件
  函数列表   :

  修改历史   :
  1.日    期   : 2011年12月06日
    作    者   : f00179208
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "RnicCtx.h"
#include "RnicEntity.h"
#include "PsCommonDef.h"
#include "AtRnicInterface.h"
#include "RnicProcMsg.h"
#include "RnicDemandDialFileIO.h"
#include "RnicLog.h"
/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
#include "RnicDebug.h"
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
/*lint -e960*/
#define    THIS_FILE_ID        PS_FILE_ID_RNIC_CTX_C
/*lint +e960*/


/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/* RNIC CTX,用于保存RNIC的全局变量 */
RNIC_CTX_STRU                           g_stRnicCtx;

/* Added by j00174725 for clean warning, 2013-07-22, Begin */
extern RNIC_STATS_INFO_STRU                    g_astRnicStats[RNIC_NET_ID_MAX_NUM];
/* Added by j00174725 for clean warning, 2013-07-22, End */

/*****************************************************************************
 函 数 名  : RNIC_RnicCtxInit
 功能描述  : 初始化RNIC的CTX
 输入参数  : pstRnicCtx:RNIC上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月06日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年6月05日
   作    者   : z60575
   修改内容   : DTS2012060508406，按需断开功耗问题修改
 3.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
 3.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : C核单独复位项目:初始化复位信号量
 4.日    期   : 2013年07月222日
   作    者   : j00177245
   修改内容   : 清理编译warning
 5.日    期   : 2014年02月14日
   作    者   : m00217266
   修改内容   : 初始化L-C互操作项目新增加的全局变量
 6.日    期   : 2014年6月3日
   作    者   : m00217266
   修改内容   : DTS2014052902453
*****************************************************************************/
VOS_VOID RNIC_InitCtx(
    RNIC_CTX_STRU                      *pstRnicCtx
)
{
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
    VOS_UINT8                           ucIndex;

    /* Added by j00174725 for clean warning, 2013-07-22, Begin */
    PS_MEM_SET(g_astRnicStats, 0, sizeof(g_astRnicStats));
    /* Added by j00174725 for clean warning, 2013-07-22, End */

    /* Added by m00217266 for L-C互操作项目, 2014-2-19, begin */
    PS_MEM_SET((VOS_VOID *)&g_stRnicRmnetConfigCheckInfo, 0, sizeof(g_stRnicRmnetConfigCheckInfo));
    /* Added by m00217266 for L-C互操作项目, 2014-2-19, end */

    for (ucIndex = 0 ; ucIndex < RNIC_NET_ID_MAX_NUM ; ucIndex++)
    {
        /* 初始化RNIC上行上下文 */
        RNIC_InitUlCtx(&(pstRnicCtx->astSpecCtx[ucIndex].stUlCtx));

        /* 初始化RNIC下行上下文 */
        RNIC_InitDlCtx(&(pstRnicCtx->astSpecCtx[ucIndex].stDlCtx));

        /* 初始化RNIC PDP上下文 */
        RNIC_InitPdpCtx(&(pstRnicCtx->astSpecCtx[ucIndex].stPdpCtx), ucIndex);

        /* Added by A00165503 for DTS2012053004651, 2012-05-31, Begin */
        /* 初始化流控状态 */
        pstRnicCtx->astSpecCtx[ucIndex].enFlowCtrlStatus = RNIC_FLOW_CTRL_STATUS_STOP;
        /* Added by A00165503 for DTS2012053004651, 2012-05-31, End */

        /* 初始化流量统计定时器 */
        pstRnicCtx->astSpecCtx[ucIndex].enTiDsFlowStats  = TI_RNIC_DSFLOW_STATS_0 + ucIndex;

        /* 初始化模块ID */
        /* 初始化的时候就已经确定了哪张网卡对应哪个MODEM */
        pstRnicCtx->astSpecCtx[ucIndex].enModemId        = RNIC_GET_MODEM_ID_BY_NET_ID(ucIndex);

        /* Added by m00217266 for DTS2014052902453, 2014-6-3, begin */
        /* Modified by l60609 for L-C互操作项目, 2014-1-14, begin */
        pstRnicCtx->astSpecCtx[ucIndex].enModemType      = RNIC_MODEM_TYPE_INSIDE;
        /* Modified by l60609 for L-C互操作项目, 2014-1-14, end */
        /* Added by m00217266 for DTS2014052902453, 2014-6-3, end */

        /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, begin */
        /* Del by j00174725 for RNIC DEV SPLIT, 2014-08-26, End */
    }

    /* 初始化RABID信息 */
    for (ucIndex = 0 ; ucIndex < RNIC_MODEM_ID_MAX_NUM ; ucIndex++)
    {
        RNIC_InitRabidInfo(&pstRnicCtx->astRabIdInfo[ucIndex]);
    }

    /* Added by m00217266 for L-C互操作项目, 2014-1-27, begin */
    /* 初始化PDNID信息 */
    RNIC_InitPdnIdInfo(&pstRnicCtx->stPdnIdInfo);
    /* Added by m00217266 for L-C互操作项目, 2014-1-27, end */

    /* 初始化RNIC定时器上下文 */
    RNIC_InitAllTimers(pstRnicCtx->astTimerCtx);

    /* 初始化拨号模式信息 */
    RNIC_InitDialMode(&(pstRnicCtx->stDialMode));
    /* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

    /* 初始化拨号断开定时器超时次数参数统计 */
    RNIC_ClearTiDialDownExpCount();

    /* Add By z60575 for DTS2012060508406, 2012-6-5 begin */
    RNIC_SetTimer4WakeFlg(VOS_FALSE);
    /* Add By z60575 for DTS2012060508406, 2012-6-5 end */

    /* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
    /* 初始化复位信号量 */
    RNIC_InitResetSem();
    /* Added by f00179208 for CCPU RESET, 2013-04-15, End */

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitRabidInfo
 功能描述  : 初始化Rabid对应的信息
 输入参数  : pstRabIdInfo:RabId信息地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年12月10日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitRabidInfo(
    RNIC_RABID_INFO_STAU               *pstRabIdInfo
)
{

    PS_MEM_SET(pstRabIdInfo->aucRmNetId,
               RNIC_RM_NET_ID_BUTT,
               RNIC_RAB_ID_MAX_NUM);

    return;
}

/* Added by m00217266 for L-C互操作项目, 2014-2-8, begin */
/*****************************************************************************
 函 数 名  : RNIC_InitPdnIdInfo
 功能描述  : 初始化Pdnid对应的信息
 输入参数  : pstPdnIdInfo:PdnId信息地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2014年02月08日
   作    者   : m00217266
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitPdnIdInfo(
    RNIC_PDNID_INFO_STAU               *pstPdnIdInfo
)
{

    PS_MEM_SET(pstPdnIdInfo->aucRmNetId,
               RNIC_RM_NET_ID_BUTT,
               RNIC_PDN_ID_MAX);

    return;
}
/* Added by m00217266 for L-C互操作项目, 2014-2-8, end */

/*****************************************************************************
 函 数 名  : RNIC_InitDlCtx
 功能描述  : 初始化RNIC下行的CTX
 输入参数  : pstDlCtx:下行上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月12日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitDlCtx(
    RNIC_DL_CTX_STRU                   *pstDlCtx
)
{
    pstDlCtx->stDLDataStats.ulDLCurDataRate         = 0;
    pstDlCtx->stDLDataStats.ulDLTotalDroppedPkts    = 0;
    pstDlCtx->stDLDataStats.ulDLPeriodRcvPkts       = 0;
    pstDlCtx->stDLDataStats.ulDLPeriodRcvBytes      = 0;
    pstDlCtx->stDLDataStats.ulDLTotalRcvBytes       = 0;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitUlCtx
 功能描述  : 初始化RNIC上行的CTX
 输入参数  : pstUlCtx:上行上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月12日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitUlCtx(
    RNIC_UL_CTX_STRU                   *pstUlCtx
)
{
    pstUlCtx->stULDataStats.ulULTotalRcvPktsInDeactive  = 0;
    pstUlCtx->stULDataStats.ulULCurDataRate             = 0;
    pstUlCtx->stULDataStats.ulULTotalDroppedPkts        = 0;
    pstUlCtx->stULDataStats.ulULPeriodSndPkts           = 0;
    pstUlCtx->stULDataStats.ulULPeriodSndBytes          = 0;
    pstUlCtx->stULDataStats.ulULTotalSndBytes           = 0;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitPdpCtx
 功能描述  : 初始化指定网卡PDP上下文
 输入参数  : pstPdpCtx:PDP上下文首地址
             ucRmNetId:网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月12日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_InitPdpCtx(
    RNIC_PDP_CTX_STRU                  *pstPdpCtx,
    VOS_UINT8                           ucRmNetId
)
{
    RNIC_InitIpv4PdpCtx(&(pstPdpCtx->stIpv4PdpInfo));
    RNIC_InitIpv6PdpCtx(&(pstPdpCtx->stIpv6PdpInfo));

    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    RNIC_InitIpv4v6PdpCtx(&(pstPdpCtx->stIpv4v6PdpInfo), ucRmNetId);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */

    return;
}

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : RNIC_ResetDialMode
 功能描述  : 重置拨号模式信息
 输入参数  : pstDialMode:拨号模式上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID RNIC_ResetDialMode(
    RNIC_DIAL_MODE_STRU                *pstDialMode
)
{
    pstDialMode->enDialMode             = AT_RNIC_DIAL_MODE_MANUAL;
    pstDialMode->ulIdleTime             = RNIC_DIAL_DEMA_IDLE_TIME;
    pstDialMode->enEventReportFlag      = RNIC_FORBID_EVENT_REPORT;

    return;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

/*****************************************************************************
 函 数 名  : RNIC_InitDialMode
 功能描述  : 初始化拨号模式信息
 输入参数  : pstDialMode:拨号模式上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月12日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年1月31日
   作    者   : w00199382
   修改内容   : 初始化/proc/dial下的文件
*****************************************************************************/
VOS_VOID RNIC_InitDialMode(
    RNIC_DIAL_MODE_STRU                *pstDialMode
)
{
    VOS_UINT32                          ulRlst;

    pstDialMode->enDialMode             = AT_RNIC_DIAL_MODE_MANUAL;
    pstDialMode->ulIdleTime             = RNIC_DIAL_DEMA_IDLE_TIME;
    pstDialMode->enEventReportFlag      = RNIC_FORBID_EVENT_REPORT;

    ulRlst                              = RNIC_InitDemandDialFile();

    if ( VOS_ERR == ulRlst)
    {
       RNIC_ERROR_LOG(ACPU_PID_RNIC, "RNIC_InitDialMode:RNIC_InitDemandDialFile ERR!");
    }

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitIpv4PdpCtx
 功能描述  : 初始化IPV4 PDP上下文
 输入参数  : pstIpv4PdpCtx:IPV4 PDP上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月19日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitIpv4PdpCtx(
    RNIC_IPV4_PDP_INFO_STRU            *pstIpv4PdpCtx
)
{
    pstIpv4PdpCtx->enRegStatus = RNIC_PDP_REG_STATUS_DEACTIVE;
    /* Modified by l60609 for L-C互操作项目, 2014-1-14, begin */
    pstIpv4PdpCtx->ucRabId     = RNIC_RAB_ID_INVALID;
    pstIpv4PdpCtx->ucPdnId     = RNIC_PDN_ID_INVALID;
    /* Modified by l60609 for L-C互操作项目, 2014-1-14, end */
    pstIpv4PdpCtx->ulIpv4Addr  = 0;
    pstIpv4PdpCtx->aucRsv[0]   = 0;
    pstIpv4PdpCtx->aucRsv[1]   = 0;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitIpv6PdpCtx
 功能描述  : 初始化IPV6 PDP上下文
 输入参数  : pstIpv4PdpCtx:IPV6 PDP上下文首地址
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月19日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_InitIpv6PdpCtx(
    RNIC_IPV6_PDP_INFO_STRU            *pstIpv6PdpCtx
)
{
    pstIpv6PdpCtx->enRegStatus = RNIC_PDP_REG_STATUS_DEACTIVE;
    /* Modified by l60609 for L-C互操作项目, 2014-1-14, begin */
    pstIpv6PdpCtx->ucRabId     = RNIC_RAB_ID_INVALID;
    pstIpv6PdpCtx->ucPdnId     = RNIC_PDN_ID_INVALID;
    /* Modified by l60609 for L-C互操作项目, 2014-1-14, end */
    pstIpv6PdpCtx->aucRsv[0]   = 0;
    pstIpv6PdpCtx->aucRsv[1]   = 0;

    PS_MEM_SET(pstIpv6PdpCtx->aucIpv6Addr,
               0x00,
               RNIC_MAX_IPV6_ADDR_LEN);

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_InitIpv4v6PdpCtx
 功能描述  : 初始化指定网卡IPV4V6 PDP上下文
 输入参数  : pstIpv4v6PdpCtx:IPV4V6 PDP上下文首地址
             ucRmNetId:网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月19日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_InitIpv4v6PdpCtx(
    RNIC_IPV4V6_PDP_INFO_STRU          *pstIpv4v6PdpCtx,
    VOS_UINT8                           ucRmNetId
)
{
    RNIC_PDP_CTX_STRU                  *pstPdpAddr;

    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    /* 获取PDP上下文地址 */
    pstPdpAddr                              = RNIC_GetPdpCtxAddr(ucRmNetId);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */

    /* Modified by l60609 for L-C互操作项目, 2014-1-14, begin */
    pstIpv4v6PdpCtx->enRegStatus            = RNIC_PDP_REG_STATUS_DEACTIVE;
    pstIpv4v6PdpCtx->ucRabId                = RNIC_RAB_ID_INVALID;
    pstIpv4v6PdpCtx->ucPdnId                = RNIC_PDN_ID_INVALID;
    /* Modified by l60609 for L-C互操作项目, 2014-1-14, end */

    pstPdpAddr->stIpv4PdpInfo.ucRabId       = RNIC_RAB_ID_INVALID;
    pstPdpAddr->stIpv6PdpInfo.ucRabId       = RNIC_RAB_ID_INVALID;

    pstIpv4v6PdpCtx->ulIpv4Addr             = 0;
    pstIpv4v6PdpCtx->aucRsv[0]   = 0;
    pstIpv4v6PdpCtx->aucRsv[1]   = 0;

    PS_MEM_SET(pstIpv4v6PdpCtx->aucIpv6Addr,
               0x00,
               RNIC_MAX_IPV6_ADDR_LEN);
}

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : RNIC_InitResetSem
 功能描述  : 初始化RNIC复位的信号量
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID RNIC_InitResetSem(VOS_VOID)
{
    g_stRnicCtx.hResetSem  = VOS_NULL_PTR;

    /* 分配二进制信号量 */
    if (VOS_OK != VOS_SmBCreate( "RNIC", 0, VOS_SEMA4_FIFO, &g_stRnicCtx.hResetSem))
    {
        vos_printf("Create rnic acpu cnf sem failed!\r\n");
        RNIC_DBG_SET_SEM_INIT_FLAG(VOS_FALSE);
        RNIC_DBG_CREATE_BINARY_SEM_FAIL_NUM(1);

        return;
    }
    else
    {
        RNIC_DBG_SAVE_BINARY_SEM_ID(g_stRnicCtx.hResetSem);
    }

    RNIC_DBG_SET_SEM_INIT_FLAG(VOS_TRUE);

    return;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

/*****************************************************************************
 函 数 名  : RNIC_GetRnicCtxAddr
 功能描述  : 获取当前RNIC的CTX
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 返回当前RNIC的CTX地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月06日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
RNIC_CTX_STRU* RNIC_GetRnicCtxAddr(VOS_VOID)
{
    return &(g_stRnicCtx);
}

/*****************************************************************************
 函 数 名  : RNIC_GetRnicTiDialDownExpCount
 功能描述  : 获取拨号模式统计拨号断开计数器
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 拨号模式统计拨号断开计数器
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 RNIC_GetTiDialDownExpCount( VOS_VOID)
{
    return (g_stRnicCtx.ulTiDialDownExpCount);
}


/*****************************************************************************
 函 数 名  : RNIC_TiDialDownExpCountPlusOne
 功能描述  : 累加拨号模式统计拨号断开计数器
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_IncTiDialDownExpCount( VOS_VOID)
{
    (g_stRnicCtx.ulTiDialDownExpCount)++;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_ClearRnicTiDialDownExpCount
 功能描述  : 拨号模式统计拨号断开计数器清零
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID RNIC_ClearTiDialDownExpCount( VOS_VOID)
{
    g_stRnicCtx.ulTiDialDownExpCount = 0;

    return;
}

/* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
/*****************************************************************************
 函 数 名  : RNIC_GetCurrentUlRate
 功能描述  : 获取指定网卡的上行速率
 输入参数  : ucRmNetId: 网卡ID
 输出参数  : 无
 返 回 值  : 当前RNIC速率的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_UINT32 RNIC_GetCurrentUlRate(VOS_UINT8 ucRmNetId)
{
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    return (g_stRnicCtx.astSpecCtx[ucRmNetId].stUlCtx.stULDataStats.ulULCurDataRate);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */
}

/*****************************************************************************
 函 数 名  : RNIC_SetCurrentUlRate
 功能描述  : 设置指定网卡的上行速率
 输入参数  : ulULDataRate:上行速率
             ucRmNetId: 网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月13日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_SetCurrentUlRate(
    VOS_UINT32                          ulULDataRate,
    VOS_UINT8                           ucRmNetId
)
{
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    g_stRnicCtx.astSpecCtx[ucRmNetId].stUlCtx.stULDataStats.ulULCurDataRate = ulULDataRate;
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */

    return;
}


/*****************************************************************************
 函 数 名  : RNIC_GetCurrentDlRate
 功能描述  : 获取指定网卡的下行速率
 输入参数  : ucRmNetId: 网卡ID
 输出参数  : 无
 返 回 值  : 当前RNIC速率的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_UINT32 RNIC_GetCurrentDlRate(VOS_UINT8 ucRmNetId)
{
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    return (g_stRnicCtx.astSpecCtx[ucRmNetId].stDlCtx.stDLDataStats.ulDLCurDataRate);
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */
}

/*****************************************************************************
 函 数 名  : RNIC_SetCurrentDlRate
 功能描述  : 设置指定网卡的下行速率
 输入参数  : ulDLDataRate:下行速率
             ucRmNetId: 网卡ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
VOS_VOID RNIC_SetCurrentDlRate(
    VOS_UINT32                          ulDLDataRate,
    VOS_UINT8                           ucRmNetId
)
{
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, Begin */
    g_stRnicCtx.astSpecCtx[ucRmNetId].stDlCtx.stDLDataStats.ulDLCurDataRate = ulDLDataRate;
    /* Modified by f00179208 for DSDA Phase I, 2012-11-28, End */

    return;
}
/* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

/*****************************************************************************
 函 数 名  : RNIC_GetDialModeAddr
 功能描述  : 获取按需拨号的模式以及时长的地址
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 按需拨号模式及时长的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
RNIC_DIAL_MODE_STRU* RNIC_GetDialModeAddr(VOS_VOID)
{
    return &(g_stRnicCtx.stDialMode);
}

/* Modified by f00179208 for DSDA Phase I, 2012-11-22, Begin */
/*****************************************************************************
 函 数 名  : RNIC_GetPdpCtxAddr
 功能描述  : 获取RNIC模块指定网卡PDP上下文的地址
 输入参数  : ucRmNetId -- 网卡索引
 输出参数  : 无
 返 回 值  : RNIC模块指定网卡PDP上下文的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月07日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
RNIC_PDP_CTX_STRU* RNIC_GetPdpCtxAddr(VOS_UINT8 ucRmNetId)
{
    return &(g_stRnicCtx.astSpecCtx[ucRmNetId].stPdpCtx);
}

/*****************************************************************************
 函 数 名  : RNIC_GetUlCtxAddr
 功能描述  : 获取RNIC模块指定网卡上行上下文的地址
 输入参数  : ucRmNetId -- 网卡索引
 输出参数  : 无
 返 回 值  : RNIC模块指定网卡上行上下文的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月17日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
RNIC_UL_CTX_STRU* RNIC_GetUlCtxAddr(VOS_UINT8 ucRmNetId)
{
    return &(g_stRnicCtx.astSpecCtx[ucRmNetId].stUlCtx);
}

/*****************************************************************************
 函 数 名  : RNIC_GetDlCtxAddr
 功能描述  : 获取RNIC模块指定网卡下行上下文的地址
 输入参数  : ucRmNetId -- 网卡索引
 输出参数  : 无
 返 回 值  : RNIC模块指定网卡下行上下文的地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月17日
   作    者   : f00179208
   修改内容   : 新生成函数
 2.日    期   : 2012年11月23日
   作    者   : f00179208
   修改内容   : DSDA Phase I: RNIC多实例
*****************************************************************************/
RNIC_DL_CTX_STRU* RNIC_GetDlCtxAddr(VOS_UINT8 ucRmNetId)
{
    return &(g_stRnicCtx.astSpecCtx[ucRmNetId].stDlCtx);
}
/* Modified by f00179208 for DSDA Phase I, 2012-11-22, End */

/*****************************************************************************
 函 数 名  : RNIC_GetTimerAddr
 功能描述  : 获取RNIC CTX模块中定时器的上下文
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 定时器上下文地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2011年12月12日
   作    者   : f00179208
   修改内容   : 新生成函数

*****************************************************************************/
RNIC_TIMER_CTX_STRU*  RNIC_GetTimerAddr( VOS_VOID )
{
    return g_stRnicCtx.astTimerCtx;
}

/* Add By z60575 for DTS2012060508406, 2012-6-5 begin */
/*****************************************************************************
 函 数 名  : RNIC_GetTimer4WakeFlg
 功能描述  : 获取RNIC CTX模块中是否设置Timer4唤醒标志
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 定时器上下文地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年6月5日
   作    者   : z60575
   修改内容   : DTS2012060508406, 新生成函数

*****************************************************************************/
VOS_UINT32 RNIC_GetTimer4WakeFlg(VOS_VOID)
{
    return g_stRnicCtx.ulSetTimer4WakeFlg;
}

/*****************************************************************************
 函 数 名  : RNIC_SetTimer4WakeFlg
 功能描述  : 设置RNIC CTX模块中是否设置Timer4唤醒标志
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 定时器上下文地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年6月5日
   作    者   : z60575
   修改内容   : DTS2012060508406, 新生成函数

*****************************************************************************/
VOS_VOID RNIC_SetTimer4WakeFlg(VOS_UINT32 ulFlg)
{
    g_stRnicCtx.ulSetTimer4WakeFlg = ulFlg;
}
/* Add By z60575 for DTS2012060508406, 2012-6-5 end */

/* Added by f00179208 for DSDA Phase I, 2012-11-22, Begin */
/*****************************************************************************
 函 数 名  : RNIC_GetSpecNetCardPrivateAddr
 功能描述  : 获取RNIC模块指定网卡私有数据虚存地址
 输入参数  : ucRmNetId -- 网卡索引
 输出参数  : 无
 返 回 值  : RNIC模块指定网卡私有数据虚存地址
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年11月24日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
RNIC_NETCARD_DEV_INFO_STRU *RNIC_GetSpecNetCardPrivateAddr(VOS_UINT8 ucRmNetId)
{
    return g_stRnicCtx.astSpecCtx[ucRmNetId].pstNetDevInfo;
}

/*****************************************************************************
 函 数 名  : RNIC_SetSpecNetCardPrivate
 功能描述  : 设置RNIC模块指定网卡私有数据虚存
 输入参数  : pstPriv:私有数据指针
             ucRmNetId -- 网卡索引
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年11月24日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID RNIC_SetSpecNetCardPrivate(
    RNIC_NETCARD_DEV_INFO_STRU         *pstPriv,
    VOS_UINT8                           ucRmNetId
)
{
    g_stRnicCtx.astSpecCtx[ucRmNetId].pstNetDevInfo = pstPriv;

    return;
}

/*****************************************************************************
 函 数 名  : RNIC_GetSpecNetCardCtxAddr
 功能描述  : 获取RNIC指定网卡的上下文
 输入参数  : ucIndex -- 网卡索引
 输出参数  : 无
 返 回 值  : RNIC指定网卡的上下文地址
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年11月24日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
RNIC_SPEC_CTX_STRU *RNIC_GetSpecNetCardCtxAddr(VOS_UINT8 ucRmNetId)
{
    return &(g_stRnicCtx.astSpecCtx[ucRmNetId]);
}

/* Added by f00179208 for DSDA Phase I, 2012-11-22, End */

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : RNIC_GetResetSem
 功能描述  : 获取RNIC复位信号量
 输入参数  : 无
 输出参数  : 无
 返 回 值  : RNIC复位信号量
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_SEM RNIC_GetResetSem(VOS_VOID)
{
    return g_stRnicCtx.hResetSem;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

