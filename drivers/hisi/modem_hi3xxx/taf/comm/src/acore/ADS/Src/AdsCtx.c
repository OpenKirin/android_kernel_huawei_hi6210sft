/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : AdsCtx.c
  版 本 号   : 初稿
  作    者   : 鲁琳/l60609
  生成日期   : 2011年12月6日
  最近修改   :
  功能描述   : ADS上下文管理
  函数列表   :
  修改历史   :
  1.日    期   : 2011年12月6日
    作    者   : 鲁琳/l60609
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "AdsCtx.h"
#include "AdsUpLink.h"
#include "AdsDownLink.h"
#include "AdsFilter.h"
#include "AdsDebug.h"
#include "mdrv.h"
/* Added by l00167671 for NV拆分项目 , 2013-05-17, begin */
#include "NasNvInterface.h"
#include "TafNvInterface.h"
/* Added by l00167671 for NV拆分项目 , 2013-05-17, end*/

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
/*lint -e767*/
#define    THIS_FILE_ID                 PS_FILE_ID_ADS_CTX_C
/*lint +e767*/

/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

VOS_UINT32                              g_ulAdsULTaskId        = 0;  /* ADS上行任务ID */
VOS_UINT32                              g_ulAdsDLTaskId        = 0;  /* ADS下行任务ID */
VOS_UINT32                              g_ulAdsULTaskReadyFlag = 0;  /* ADS上行任务运行状态 */
VOS_UINT32                              g_ulAdsDLTaskReadyFlag = 0;  /* ADS下行任务运行状态 */

/* ADS模块的上下文 */
ADS_CTX_STRU                            g_stAdsCtx;

/*****************************************************************************
  3 函数实现
*****************************************************************************/
/*****************************************************************************
 函 数 名  : ADS_IsValidRabId
 功能描述  : 检查RabId的是否为有效值
 输入参数  : VOS_UINT8 ucRabId
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月12日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 ADS_IsValidRabId(VOS_UINT8 ucRabId)
{

    /* RabId的有效值为{5,15} */
    if ((ucRabId < ADS_RAB_ID_MIN)
     || ( ucRabId > ADS_RAB_ID_MAX))
    {
        ADS_ERROR_LOG1(ACPU_PID_ADS_UL, "ADS_IsValidRabId: ucRabId is", ucRabId);
        return VOS_ERR;
    }
    else
    {
        return VOS_OK;
    }
}

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */

/*****************************************************************************
 函 数 名  : ADS_UL_GetSpecInstanceSndPermitFlg
 功能描述  : 指定实例的所有RAB是否允许发送
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_TRUE 有RAB允许发送
             VOS_TRUE 所有RAB都不允许发送
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年12月5日
    作    者   : l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 ADS_UL_GetSpecInstanceSndPermitFlg(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT8                           i;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* 查找该实例的每个RAB队列 */
    for (i = ADS_RAB_ID_MIN; i < (ADS_RAB_ID_MAX + 1); i++)
    {
        /* 队列有效*/
        if (VOS_TRUE == pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid)
        {
            /* 队列允许发送 */
            if (VOS_TRUE == pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg)
            {
                return VOS_TRUE;
            }
        }
    }

    return VOS_FALSE;
}

/*****************************************************************************
 函 数 名  : ADS_UL_IsAllRabNotSndPermitFlg
 功能描述  : 判断是否所有的RAB都不允许发送，如果是返回VOS_TRUE，否则返回VOS_FALSE
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月27日
    作    者   : l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 ADS_UL_IsAllRabNotSndPermitFlg(VOS_VOID)
{
    VOS_UINT8                           i;

    /* 查找两个实例 */
    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        if (VOS_TRUE == ADS_UL_GetSpecInstanceSndPermitFlg(i))
        {
            return VOS_FALSE;
        }
    }

    return VOS_TRUE;
}

/* Added by l60609 for AP适配项目 ，2012-08-31 Begin */
/*****************************************************************************
 函 数 名  : ADS_UL_CheckAllQueueEmpty
 功能描述  : 所有的PDP都去激活，队列为空
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年8月31日
    作    者   : l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_UINT32 ADS_UL_CheckAllQueueEmpty(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx = VOS_NULL_PTR;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    for (i = ADS_RAB_ID_MIN; i < ADS_RAB_ID_MAX + 1; i++)
    {
        if (VOS_FALSE != pstAdsUlCtx->astAdsUlQueue[i].ucIsQueueValid)
        {
            break;
        }
    }

    /* 所有的PDP都去激活　*/
    if ((ADS_RAB_ID_MAX + 1) != i)
    {
        return VOS_FALSE;
    }

    return VOS_TRUE;
}
/* Added by l60609 for AP适配项目 ，2012-08-31 End */
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

/*****************************************************************************
 函 数 名  : ADS_UL_SetProtectTmrLen
 功能描述  : 设置ADS上行发送数据保护定时器时长
 输入参数  : 无
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年04月12日
    作    者   : A00165503
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
*****************************************************************************/
VOS_VOID ADS_UL_SetProtectTmrLen(VOS_UINT32 ulTimerLen)
{
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen = ulTimerLen;
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

    return;
}

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
/*****************************************************************************
 函 数 名  : ADS_UL_IsQueueExistent
 功能描述  : 判断队列是否存在
 输入参数  : VOS_UINT8                           ucInstanceIndex,
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月12日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
*****************************************************************************/
VOS_UINT32 ADS_UL_IsQueueExistent(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    /* 队列为空 */
    if (VOS_NULL_PTR == ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId))
    {
        ADS_WARNING_LOG(ACPU_PID_ADS_UL, "ADS_UL_IsQueueExistent: g_stAdsCtx.stAdsUlCtx.astAdsUlQueue[ulIndex].pstAdsUlLink is NULL");
        return VOS_ERR;
    }
    else
    {
        return VOS_OK;
    }
}

/* Added by A00165503 for DTS2013092200927, 2013-09-22, Begin */
/*****************************************************************************
 函 数 名  : ADS_UL_IsAnyQueueExist
 功能描述  : 检测是否有队列存在
 输出参数  : ucInstance - 实体索引
 返 回 值  : VOS_TRUE
             VOS_FALSE
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年8月22日
    作    者   : A00165503
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 ADS_UL_IsAnyQueueExist(VOS_UINT8 ucInstance)
{
    VOS_UINT8                           ucRabId;

    for (ucRabId = ADS_RAB_ID_MIN; ucRabId <= ADS_RAB_ID_MAX; ucRabId++)
    {
        if (VOS_OK == ADS_UL_IsQueueExistent(ucInstance, ucRabId))
        {
            return VOS_TRUE;
        }
    }

    return VOS_FALSE;
}
/* Added by A00165503 for DTS2013092200927, 2013-09-22, End */

/*****************************************************************************
 函 数 名  : ADS_UL_InsertQueue
 功能描述  : 将数据插入对应的队列
 输入参数  : VOS_UINT8                           ucInstanceIndex
           　IMM_ZC_STRU                        *pstData
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月12日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数
  2.日    期   : 2012年02月24日
    作    者   : f00179208
    修改内容   : V7R1C50项目，上行队列管理使用RABID来索引
  3.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : DTS2012020708222: ADS性能优化
  4.日    期   : 2012年4月27日
    作    者   : l60609
    修改内容   : DTS2012041802250: ADS上行10ms延时
  5.日    期   : 2012年8月31日
    作    者   : l60609
    修改内容   : AP适配项目：上行队列限长
  6.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
  7.日    期   : 2013年05月09日
    作    者   : f00179208
    修改内容   : DTS2013050806891:ADS上行组包优化
  8.日    期   : 2014年06月03日
    作    者   : f00179208
    修改内容   : CCPU LOAD优化
*****************************************************************************/
VOS_UINT32 ADS_UL_InsertQueue(
    VOS_UINT8                           ucInstanceIndex,
    IMM_ZC_STRU                        *pstData,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          ulNonEmptyEvent;
    VOS_UINT32                          ulAllUlQueueDataNum;
    /* Modified by f00179208 for DTS2013110804470, 2013-11-08 Begin */
#if(FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT                            ulQueueLen;
#endif
    /* Modified by f00179208 for DTS2013110804470, 2013-11-08 end */
    /* Added by m00217266 for DTS2014032902757, 2014-4-4, begin */
    VOS_ULONG                           ulLockLevel;

    ulNonEmptyEvent = VOS_FALSE;

    /* 此接口不释放pstData，由上层模块根据函数返回值判断是否需要释放内存 */
    /* 判断RabId是否为有效值 */
    if (VOS_OK != ADS_IsValidRabId(ucRabId))
    {
        ADS_WARNING_LOG1(ACPU_PID_ADS_UL, "ADS_UL_InsertQueue: ucRabId is", ucRabId);
        return VOS_ERR;
    }

    /* 队列加锁 */
    /*lint -e571*/
    VOS_SpinLockIntLock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /*lint +e571*/

    /* 结点存在，但队列不存在 */
    if (VOS_OK != ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* 队列操作完成解锁 */
        VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
        ADS_WARNING_LOG(ACPU_PID_ADS_UL, "ADS_UL_InsertQueue:the queue is not ext!");
        return VOS_ERR;
    }

    /* Modified by f00179208 for DTS2013110804470, 2013-11-08 Begin */
#if(FEATURE_OFF == FEATURE_SKB_EXP)
    ulQueueLen = IMM_ZcQueueLen(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));

    if (ulQueueLen >= ADS_UL_GET_MAX_QUEUE_LENGTH(ucInstanceIndex))
    {
        /* 队列操作完成解锁 */
        VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
        ADS_DBG_UL_DROPPED_PACKET_NUM(1);
        return VOS_ERR;
    }

    /* 插入队列前将数据打上时间戳 */
    pstData->tstamp.tv64 = (VOS_INT64)VOS_GetSlice();
#endif

    /* 插入队列 */
    IMM_ZcQueueTail(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId), pstData);

    /* 队列由空变为非空 */
    if (1 == IMM_ZcQueueLen(ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId)))
    {
        ulNonEmptyEvent = VOS_TRUE;
    }

    /* 队列操作完成解锁 */
    VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /* Added by m00217266 for DTS2014032902757, 2014-4-4, end */

    /* Modified by f00179208 for DTS2013110804470, 2013-11-08 Begin */
    /* Added by f00179208 for DTS2013050806891, 2013-05-09, Begin */
    ulAllUlQueueDataNum = ADS_UL_GetAllQueueDataNum();

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    /* Modified by f00179208 for ccpu_load, 2014-06-03, Begin */
    /* Modified by f00179208 for DTS2014102301586, 2014-11-08, Begin */
    if (VOS_TRUE == ADS_UL_GET_THRESHOLD_ACTIVE_FLAG())
    {
        /* (1).jiffies超时,则直接触发发数,并停止发数定时器
           (2).队列中数据已到攒包门限且当前没有在处理数据,触发上行缓存缓存处理事件
           (3).队列由空变为非空时启动数据统计定时器以及保护定时器
         */
        ADS_UL_ADD_STAT_PKT_NUM(1);

        /* 超时长度为非零则需要启动触发发数 */
        if (0 != ADS_UL_GET_JIFFIES_EXP_TMR_LEN())
        {
            if (ADS_TIME_AFTER_EQ(ADS_GET_CURR_KERNEL_TIME(),
                                  (ADS_UL_GET_JIFFIES_TMR_CNT() + ADS_UL_GET_JIFFIES_EXP_TMR_LEN())))
            {
                /* Modified by w00316404 for DTS2015102603158, 2015-10-26 Begin */
                ADS_StopTimer(ACPU_PID_ADS_UL, TI_ADS_UL_SEND, ADS_TIMER_STOP_CAUSE_USER);
                ADS_UL_SET_JIFFIES_TMR_CNT(ADS_GET_CURR_KERNEL_TIME());
                ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
                /* Modified by w00316404 for DTS2015102603158, 2015-10-26 End */

                return VOS_OK;
            }
        }

        if (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG()))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }

        /* 队列由空变为非空 */
        if (VOS_TRUE == ulNonEmptyEvent)
        {
            ADS_StartTimer(ACPU_PID_ADS_UL, TI_ADS_UL_DATA_STAT, ADS_UL_GET_STAT_TIMER_LEN());
            ADS_StartTimer(ACPU_PID_ADS_UL, TI_ADS_UL_SEND, ADS_UL_GET_PROTECT_TIMER_LEN());
        }
    }
    else
    {
        /* (1).队列由空变为非空时触发上行缓存处理事件
           (2).队列中数据已到攒包门限的整数倍且当前没有在处理数据
               触发上行缓存缓存处理事件
         */
        if (VOS_TRUE == ulNonEmptyEvent)
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
        else
        {
            /* Modified by l60609 for DTS2012041802250, 2012-04-25 Begin */
            if (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG()))
            {
                ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
            }
            /* Modified by l60609 for DTS2012041802250, 2012-04-25 End */
        }
    }
    /* Modified by f00179208 for DTS2014102301586, 2014-11-08, Begin */
    /* Modified by f00179208 for ccpu_load, 2014-06-03, End */
#else
    /* (1).从TCP/IP协议栈过来的的数据，ucTailPktInd为0.
           当队列由空到非空,
           或是达到攒包门限且当前没有在数据处理时触发上行缓存处理事件.
       (2).USB过来的数据非最后一个包ucTailPktInd为2，最后一个包ucTailPktInd为1
           当为最后一个IP包,
           或是达到攒包门限且当前没有在数据处理时触发上行缓存处理事件.
     */

    if (0 == pstData->private_mem.ucTailPktInd)
    {
        if ((VOS_TRUE == ulNonEmptyEvent)
         || (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG())))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
    }
    else
    {
        if ((1 == pstData->private_mem.ucTailPktInd)
         || (ADS_UL_IS_REACH_THRESHOLD(ulAllUlQueueDataNum, ADS_UL_GET_SENDING_FLAG())))
        {
            ADS_UL_SndEvent(ADS_UL_EVENT_DATA_PROC);
        }
    }
#endif
    /* Added by f00179208 for DTS2013050806891, 2013-05-09, End */

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : ADS_UL_GetInstanceAllQueueDataNum
 功能描述  : 获取一个实例中所有上行缓存队列中的数据包个数
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月7日
    作    者   : 鲁琳/l60609
    修改内容   :DSDA Phase II: 新生成函数

*****************************************************************************/
VOS_UINT32 ADS_UL_GetInstanceAllQueueDataNum(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulTotalNum;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    ulTotalNum = 0;

    for (i = ADS_RAB_ID_MIN; i < ADS_RAB_ID_MAX + 1; i++)
    {
        if (VOS_NULL_PTR != pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink)
        {
            ulTotalNum += pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink->qlen;
        }
    }

    return ulTotalNum;
}

/*****************************************************************************
 函 数 名  : ADS_UL_GetAllQueueDataNum
 功能描述  : 获取所有上行缓存队列中的数据包个数
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月7日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_UINT32 ADS_UL_GetAllQueueDataNum(VOS_VOID)
{
    VOS_UINT32                          ulTotalNum;
    VOS_UINT8                           i;

    ulTotalNum = 0;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        ulTotalNum = ulTotalNum + ADS_UL_GetInstanceAllQueueDataNum(i);
    }

    return ulTotalNum;
}

/*****************************************************************************
 函 数 名  : ADS_UL_CreateQueue
 功能描述  : 创建上行缓存队列
 输入参数  : VOS_UINT8                           ucInstanceIndex,
             VOS_UINT8                           ucRabId,
             ADS_QCI_TYPE_ENUM_UINT8             enPrio
             ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月6日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数
  2.日    期   : 2012年02月21日
    作    者   : f00179208
    修改内容   : V7R1C50项目，创建队列时根据优先级设置队列的信息
  3.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
  4.日    期   : 2013年05月22日
    作    者   : f00179208
    修改内容   : V3R3 PPP PROJECT
*****************************************************************************/
VOS_UINT32 ADS_UL_CreateQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
)
{
    IMM_ZC_HEAD_STRU                   *pstUlQueue;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* RabId的队列已经存在 */
    if (VOS_OK == ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* 对应的调度优先级也一样或者是比之前的要低，不更新QCI直接返回OK */
        if (enPrio >= pstAdsUlCtx->astAdsUlQueue[ucRabId].enPrio)
        {
            return VOS_OK;
        }
        /* 如果对应的调度优先级比之前的要高，需要更新该PDP的队列优先级，并对队列管理进行排序 */
        else
        {
            ADS_UL_UpdateQueueInPdpModified(ucInstanceIndex, enPrio, ucRabId);
            return VOS_OK;
        }
    }

    /* ucRabID的队列不存在, 需要创建队列头结点 */
    pstUlQueue = (IMM_ZC_HEAD_STRU *)PS_MEM_ALLOC(ACPU_PID_ADS_UL, sizeof(IMM_ZC_HEAD_STRU));

    if (VOS_NULL_PTR == pstUlQueue)
    {
        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_UL_CreateQueue: pstUlQueue is null");
        return VOS_ERR;
    }

    /* 队列初始化 */
    IMM_ZcQueueHeadInit(pstUlQueue);

    /* Added by f00179208 for V7R1C50, 2012-02-20 Begin */
    /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, Begin */
    /* 将队列信息更新到上行上下文 */
    ADS_UL_SetQueue(ucInstanceIndex,
                    ucRabId,
                    VOS_TRUE,
                    pstUlQueue,
                    enPrio,
                    enPktType);
    /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, End */

    /* 队列不可能被用尽，一个RABID对应一个队列，而无效的已经在消息处理处屏蔽，
       故不需要判断是否满，可以直接重新排序 */
    ADS_UL_OrderQueueIndex(ucInstanceIndex, ucRabId);
    /* Added by f00179208 for V7R1C50, 2012-02-20 End */

    /*lint -e429*/
    return VOS_OK;
    /*lint +e429*/
}

/*****************************************************************************
 函 数 名  : ADS_UL_ClearQueue
 功能描述  : 清空队列中的数据
 输入参数  : VOS_UINT8                           ucRabId,
             IMM_ZC_HEAD_STRU                   *pstQueue,
             VOS_SPINLOCK                       *pstSpinLock
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月13日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数
  2.日    期   : 2012年8月31日
    作    者   : l60609
    修改内容   : AP适配项目：使用自旋锁
  3.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
  4.日    期   : 2014年04月03日
    作    者   : m00217266
    修改内容   : DTS2014032902757
*****************************************************************************/
VOS_VOID ADS_UL_ClearQueue(
    VOS_UINT8                           ucRabId,
    IMM_ZC_HEAD_STRU                   *pstQueue
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulQueueCnt;
    IMM_ZC_STRU                        *pstNode;

    /* Modified by m00217266 for DTS2014032902757, 2014-4-3, begin */
    ulQueueCnt = IMM_ZcQueueLen(pstQueue);

    for (i = 0; i < ulQueueCnt; i++)
    {
        pstNode = IMM_ZcDequeueHead(pstQueue);

        /* 释放结点内容 */
        IMM_ZcFree(pstNode);
    }
    /* Modified by m00217266 for DTS2014032902757, 2014-4-3, end */
}

/*****************************************************************************
 函 数 名  : ADS_UL_DestroyQueue
 功能描述  : 销毁上行缓存队列
 输入参数  : VOS_UINT8                           ucInstanceIndex
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月6日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数
  2.日    期   : 2012年02月20日
    作    者   : f00179208
    修改内容   : V7R1C50项目，增加队列调度的优先级以及上行队列管理使用RABID来索引
  3.日    期   : 2012年9月12日
    作    者   : l60609
    修改内容   : AP适配项目：增加锁处理
  4.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
  5.日    期   : 2013年05月22日
    作    者   : f00179208
    修改内容   : V3R3 PPP PROJECT
*****************************************************************************/
VOS_VOID ADS_UL_DestroyQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    /* Modified by m00217266 for DTS2014032902757, 2014-4-4, begin */
    VOS_ULONG                           ulLockLevel;

    /* Modified by f00179208 for V7R1C50, 2012-02-20 Begin */
    /* 结点存在但队列为空 */
    if (VOS_ERR == ADS_UL_IsQueueExistent(ucInstanceIndex, ucRabId))
    {
        /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, Begin */
        /* Rab Id以及优先级置为无效值 */
        ADS_UL_SetQueue(ucInstanceIndex,
                        ucRabId,
                        VOS_FALSE,
                        VOS_NULL_PTR,
                        ADS_QCI_TYPE_BUTT,
                        ADS_PDP_TYPE_BUTT);
        /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, End */

        /* 根据最新的队列管理进行排序 */
        ADS_UL_UpdateQueueInPdpDeactived(ucInstanceIndex, ucRabId);

        return;
    }

    /* 队列加锁 */
    /*lint -e571*/
    VOS_SpinLockIntLock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /*lint +e571*/

    /* Modified by l60609 for AP适配项目 ，2012-09-10 Begin */
    /* 销毁队列中的数据 */
    ADS_UL_ClearQueue(ucRabId,
                      ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));
    /* Modified by l60609 for AP适配项目 ，2012-09-10 End */

    /* 销毁队列头结点*/
    PS_MEM_FREE(ACPU_PID_ADS_DL, ADS_UL_GET_QUEUE_LINK_PTR(ucInstanceIndex, ucRabId));

    /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, Begin */
    /* 将队列信息更新到上行上下文 */
    ADS_UL_SetQueue(ucInstanceIndex,
                    ucRabId,
                    VOS_FALSE,
                    VOS_NULL_PTR,
                    ADS_QCI_TYPE_BUTT,
                    ADS_PDP_TYPE_BUTT);
    /* Modified by f00179208 for V3R3 PPP RPOJECT 2013-05-22, End */

    /* 队列操作完成解锁 */
    VOS_SpinUnlockIntUnlock(ADS_UL_GET_QUEUE_LINK_SPINLOCK(ucInstanceIndex, ucRabId), ulLockLevel);
    /* Modified by m00217266 for DTS2014032902757, 2014-4-4, end */

    /* 根据最新的队列管理进行排序 */
    ADS_UL_UpdateQueueInPdpDeactived(ucInstanceIndex, ucRabId);

    /* Modified by f00179208 for V7R1C50, 2012-02-20 End */
}

/*****************************************************************************
 函 数 名  : ADS_UL_GetInsertIndex
 功能描述  : 获取需要插入的索引
 输入参数  : VOS_UINT8                           ucInstanceIndex
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年02月22日
    作    者   : f00179208
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_UINT32 ADS_UL_GetInsertIndex(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* 根据优先级来获取上行上下文中队列的Index值 */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        if (pstAdsUlCtx->aucPrioIndex[i] == ucRabId)
        {
            break;
        }
    }

    return i;

}

/*****************************************************************************
 函 数 名  : ADS_UL_UpdateQueueInPdpActive
 功能描述  : 根据新PDP激活后所带的优先级对上行队列管理排序
 输入参数  : VOS_UINT8                           ucInstanceIndex
             VOS_UINT32                          ulIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年02月21日
    作    者   : f00179208
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_VOID ADS_UL_OrderQueueIndex(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucIndex
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          j;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* 如果该PDP的优先级比较高，需要插入到其他PDP的前面，比其优先级低的需要向后移一位 */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        if (pstAdsUlCtx->astAdsUlQueue[ucIndex].enPrio < pstAdsUlCtx->astAdsUlQueue[pstAdsUlCtx->aucPrioIndex[i]].enPrio)
        {
            for (j = ADS_RAB_NUM_MAX - 1; j > i; j--)
            {
                pstAdsUlCtx->aucPrioIndex[j] = pstAdsUlCtx->aucPrioIndex[j - 1];
            }
            pstAdsUlCtx->aucPrioIndex[i] = ucIndex;

            break;
        }
    }
}

/*****************************************************************************
 函 数 名  : ADS_UL_UpdateQueueInPdpModified
 功能描述  : 根据PDP信息的修改所带的优先级对上行队列管理排序
 输入参数  : VOS_UINT8                           ucInstanceIndex,
             ADS_QCI_TYPE_ENUM_UINT8             enPrio
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年02月21日
    作    者   : f00179208
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_VOID ADS_UL_UpdateQueueInPdpModified(
    VOS_UINT8                           ucInstanceIndex,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulIndex;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* 将修改的优先级更新到对于的队列管理中 */
    pstAdsUlCtx->astAdsUlQueue[ucRabId].enPrio = enPrio;

    /* 获取修改的RABID在aucPrioIndex数组中位置 */
    ulIndex = ADS_UL_GetInsertIndex(ucInstanceIndex, ucRabId);

    /* 没有找到，则不做处理 */
    if (ulIndex >= ADS_RAB_NUM_MAX)
    {
        return;
    }

    /* 先将修改对应位后面的向前移动一位 */
    for (i = ulIndex; i <  ADS_RAB_NUM_MAX - 1; i++)
    {
        pstAdsUlCtx->aucPrioIndex[i] = pstAdsUlCtx->aucPrioIndex[i + 1UL];
    }
    pstAdsUlCtx->aucPrioIndex[ADS_RAB_NUM_MAX - 1] = ADS_RAB_ID_INVALID;

    /* 移动后相当于是重新插入到队列管理中 */
    ADS_UL_OrderQueueIndex(ucInstanceIndex, ucRabId);

}

/*****************************************************************************
 函 数 名  : ADS_UL_UpdateQueueInPdpDeactive
 功能描述  : PDP去激活删除对于的队列信息后，对队列管理进行排序
 输入参数  : VOS_UINT8                           ucInstanceIndex,
             VOS_UINT8                           ucRabId
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年02月21日
    作    者   : f00179208
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_VOID ADS_UL_UpdateQueueInPdpDeactived(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId
)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulIndex;
    ADS_UL_CTX_STRU                    *pstAdsUlCtx;

    pstAdsUlCtx = ADS_GetUlCtx(ucInstanceIndex);

    /* 根据删除的PDP索引，将其后面的元素向前移动一位 */
    ulIndex = ADS_UL_GetInsertIndex(ucInstanceIndex, ucRabId);

    if (ulIndex >= ADS_RAB_NUM_MAX)
    {
        return;
    }

    for (i = ulIndex; i < ADS_RAB_NUM_MAX - 1; i++)
    {
        pstAdsUlCtx->aucPrioIndex[i] = pstAdsUlCtx->aucPrioIndex[i + 1UL];
    }
    pstAdsUlCtx->aucPrioIndex[ADS_RAB_NUM_MAX - 1] = ADS_RAB_ID_INVALID;

}

/*****************************************************************************
 函 数 名  : ADS_UL_SetQueue
 功能描述  : 在创建和销毁队列的时候，设置上行队列上下文信息
 输入参数  : VOS_UINT8                           ucInstanceIndex,
             VOS_UINT8                           ucRabId,
             VOS_UINT8                           ucIsQueueValid,
             IMM_ZC_HEAD_STRU                   *pstUlQueue,
             ADS_QCI_TYPE_ENUM_UINT8             enPrio
             ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月12日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数
  2.日    期   : 2012年02月20日
    作    者   : f00179208
    修改内容   : V7R1C50项目，增加队列调度的优先级
  3.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例
  4.日    期   : 2013年05月22日
    作    者   : f00179208
    修改内容   : V3R3 PPP PROJECT
*****************************************************************************/
VOS_VOID ADS_UL_SetQueue(
    VOS_UINT8                           ucInstanceIndex,
    VOS_UINT8                           ucRabId,
    VOS_UINT8                           ucIsQueueValid,
    IMM_ZC_HEAD_STRU                   *pstUlQueue,
    ADS_QCI_TYPE_ENUM_UINT8             enPrio,
    ADS_CDS_IPF_PKT_TYPE_ENUM_UINT8     enPktType
)
{
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].pstAdsUlLink   = pstUlQueue;
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].ucIsQueueValid = ucIsQueueValid;
    /* Added by f00179208 for V7R1C50, 2012-02-20 Begin */
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].enPrio         = enPrio;
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].usRecordNum    = 0;
    /* Added by f00179208 for V7R1C50, 2012-02-20 End */

    /* Added by f00179208 for V3R3 PPP RPOJECT 2013-05-22, Begin */
    g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex].stAdsUlCtx.astAdsUlQueue[ucRabId].enPktType      = enPktType;
    /* Added by f00179208 for V3R3 PPP RPOJECT 2013-05-22, End */

}
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

/*****************************************************************************
 函 数 名  : ADS_UL_SndEvent
 功能描述  : 触发上行事件
 输入参数  : ulEvent                    - 事件ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_UL_SndEvent(VOS_UINT32 ulEvent)
{
    if (1 == g_ulAdsULTaskReadyFlag)
    {
        (VOS_VOID)VOS_EventWrite(g_ulAdsULTaskId, ulEvent);
    }

    return;
}

/*****************************************************************************
 函 数 名  : ADS_UL_ProcEvent
 功能描述  : ADS上行事件处理
 输入参数  : ulEvent                    - 事件ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_UL_ProcEvent(VOS_UINT32 ulEvent)
{
    if (ulEvent & ADS_UL_EVENT_DATA_PROC)
    {
        ADS_UL_ProcLinkData();
        ADS_DBG_UL_PROC_EVENT_NUM(1);
    }

    return;
}

/*****************************************************************************
 函 数 名  : ADS_DL_SndEvent
 功能描述  : 触发下行事件
 输入参数  : ulEvent                    - 事件ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_DL_SndEvent(VOS_UINT32 ulEvent)
{
    if (1 == g_ulAdsDLTaskReadyFlag)
    {
        (VOS_VOID)VOS_EventWrite(g_ulAdsDLTaskId, ulEvent);
    }

    return;
}

/*****************************************************************************
 函 数 名  : ADS_DL_ProcEvent
 功能描述  : ADS下行事件处理
 输入参数  : ulEvent                    - 事件ID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_DL_ProcEvent(VOS_UINT32 ulEvent)
{
    if (ulEvent & ADS_DL_EVENT_IPF_RD_INT)
    {
        ADS_DBG_DL_PROC_RD_EVENT_NUM(1);
        ADS_DL_ProcIpfResult();
    }
    else if (ulEvent & ADS_DL_EVENT_IPF_ADQ_EMPTY_INT)
    {
        ADS_DBG_DL_PROC_AD_EMPTY_EVENT_NUM(1);
        ADS_DL_ProcAdqEmptyEvent(ulEvent);
    }
    else
    {
        ADS_DBG_DL_PROC_OTHER_EVENT_NUM(1);
    }

    return;
}

/* Added by l60609 for DSDA Phase II, 2012-12-20, Begin */
/*****************************************************************************
 函 数 名  : ADS_DL_ProcAdqEmptyEvent
 功能描述  : ADS_DL_EVENT_IPF_ADQ_EMPTY_INT事件处理
 输入参数  : VOS_UINT32 ulEvent
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年12月20日
    作    者   : l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_DL_ProcAdqEmptyEvent(VOS_UINT32 ulEvent)
{
#if (FEATURE_OFF == FEATURE_SKB_EXP)
    ADS_DL_ProcIpfAdqEmtpyEvent();
    ADS_DBG_DL_PROC_ADQ_EMPTY_EVENT_NUM(1);
#endif
    return;
}
/* Added by l60609 for DSDA Phase II, 2012-12-20, End */

/* Added by A00165503 for DTS2012112206761, 2012-11-19, Begin */
/*****************************************************************************
 函 数 名  : ADS_DL_InitFcAssemParamInfo
 功能描述  : 初始化底软动态组包参数
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月19日
    作    者   : A00165503
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID ADS_DL_InitFcAssemParamInfo(VOS_VOID)
{
    ADS_DL_FC_ASSEM_STRU               *pstFcAssemInfo;

    pstFcAssemInfo = ADS_DL_GET_FC_ASSEM_INFO_PTR(ADS_INSTANCE_INDEX_0);

    pstFcAssemInfo->ulEnableMask     = VOS_FALSE;
    pstFcAssemInfo->ulFcActiveFlg    = VOS_FALSE;
    pstFcAssemInfo->ulTmrCnt         = ADS_GET_CURR_KERNEL_TIME();
    pstFcAssemInfo->ulRdCnt          = 0;
    pstFcAssemInfo->ulRateUpLev      = 0;
    pstFcAssemInfo->ulRateDownLev    = 0;
    pstFcAssemInfo->ulExpireTmrLen   = 0;
    pstFcAssemInfo->pFcAssemTuneFunc = VOS_NULL_PTR;

    return;
}
/* Added by A00165503 for DTS2012112206761, 2012-11-19, End */

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : ADS_DL_ResetFcAssemParamInfo
 功能描述  : 重置底软动态组包参数
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月19日
    作    者   : A00165503
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID ADS_DL_ResetFcAssemParamInfo(VOS_VOID)
{
    ADS_DL_FC_ASSEM_STRU               *pstFcAssemInfo;

    pstFcAssemInfo = ADS_DL_GET_FC_ASSEM_INFO_PTR(ADS_INSTANCE_INDEX_0);

    pstFcAssemInfo->ulFcActiveFlg    = VOS_FALSE;
    pstFcAssemInfo->ulRdCnt          = 0;

    return;
}
/*****************************************************************************
 函 数 名  : ADS_GetULResetSem
 功能描述  : 获取ADS UL复位信号量
 输入参数  : 无
 输出参数  : 无
 返 回 值  : ADS复位信号量
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_SEM ADS_GetULResetSem(VOS_VOID)
{
    return g_stAdsCtx.hULResetSem;
}

/*****************************************************************************
 函 数 名  : ADS_GetDLResetSem
 功能描述  : 获取ADS DL复位信号量
 输入参数  : 无
 输出参数  : 无
 返 回 值  : ADS复位信号量
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2013年04月15日
   作    者   : f00179208
   修改内容   : 新生成函数
*****************************************************************************/
VOS_SEM ADS_GetDLResetSem(VOS_VOID)
{
    return g_stAdsCtx.hDLResetSem;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

/* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
/*****************************************************************************
 函 数 名  : ADS_GetCurrentRate
 功能描述  : 设置当前上行速率
 输入参数  : 无
 输出参数  : VOS_UINT32                         *pulUlBpsRate,
             VOS_UINT32                         *pulDlBpsRate
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年1月10日
   作    者   : l60609
   修改内容   : 新生成函数

 2.日    期   : 2012年11月24日
   作    者   : l60609
   修改内容   : DSDA Phase II：双实例
*****************************************************************************/
VOS_UINT32 ADS_GetCurrentRate(
    VOS_UINT32                         *pulUlBpsRate,
    VOS_UINT32                         *pulDlBpsRate
)
{
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, Begin */
    /* FC只有stick用，只返回实例0的 */
    *pulUlBpsRate = g_stAdsCtx.astAdsSpecCtx[ADS_INSTANCE_INDEX_0].stAdsStatsInfoCtx.stULDataStats.ulULCurDataRate << 3;
    *pulDlBpsRate = g_stAdsCtx.astAdsSpecCtx[ADS_INSTANCE_INDEX_0].stAdsStatsInfoCtx.stDLDataStats.ulDLCurDataRate << 3;
    /* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : ADS_GetTiCtx
 功能描述  : 获取ADS上行的上下文
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : ADS_TIMER_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月13日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
ADS_UL_CTX_STRU* ADS_GetUlCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsUlCtx);
}

/*****************************************************************************
 函 数 名  : ADS_GetTiCtx
 功能描述  : 获取ADS下行的上下文
 输入参数  : VOS_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : ADS_TIMER_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月13日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
ADS_DL_CTX_STRU* ADS_GetDlCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsDlCtx);
}

/*****************************************************************************
 函 数 名  : ADS_GetStatsInfoCtx
 功能描述  : 获取ADS状态的上下文
 输入参数  : VOS_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : ADS_STATS_INFO_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年1月10日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
ADS_STATS_INFO_CTX_STRU* ADS_GetStatsInfoCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    return &(pstAdsSpecCtx->stAdsStatsInfoCtx);
}

/*****************************************************************************
 函 数 名  : ADS_GetTiCtx
 功能描述  : 获取ADS定时器的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : ADS_TIMER_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月13日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

*****************************************************************************/
ADS_TIMER_CTX_STRU* ADS_GetTiCtx(VOS_VOID)
{
    return g_stAdsCtx.astAdsTiCtx;
}

/*****************************************************************************
 函 数 名  : ADS_GetAllCtx
 功能描述  : 获取ADS所有的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : ADS_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:新生成函数

*****************************************************************************/
ADS_CTX_STRU* ADS_GetAllCtx(VOS_VOID)
{
    return &g_stAdsCtx;
}

/*****************************************************************************
 函 数 名  : ADS_InitUlCtx
 功能描述  : 初始化上行的上下文
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月6日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年2月20日
    作    者   : f00179208
    修改内容   : 新增ADS优先级的NV项，上行上下文初始化时从NV中读出

  3.日    期   : 2012年4月12日
    作    者   : A00165503
    修改内容   : DTS2012020708222: ADS性能优化

  4.日    期   : 2012年8月31日
    作    者   : l60609
    修改内容   : AP适配项目：增加上行释放队列

  5.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II :双实例
  6.日    期   : 2013年05月22日
    作    者   : f00179208
    修改内容   : V3R3 PPP PROJECT
*****************************************************************************/
VOS_VOID ADS_InitUlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulRst;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* 默认从第一个队列开始调度 */
    pstAdsSpecCtx->stAdsUlCtx.ucAdsUlCurIndex      = 0;

    /* Added by f00179208 for V7R1C50, 2012-02-20 Begin */
    for (i = 0; i < ADS_RAB_ID_MAX + 1; i++)
    {
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink    = VOS_NULL_PTR;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid  = VOS_FALSE;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPrio          = ADS_QCI_TYPE_BUTT;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].usRecordNum     = 0;
        /* Added by f00179208 for V3R3 PPP RPOJECT 2013-05-22, Begin */
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPktType       = ADS_CDS_IPF_PKT_TYPE_IP;
        /* Added by f00179208 for V3R3 PPP RPOJECT 2013-05-22, End */

        /* Added by l60609 for AP适配项目 ，2012-09-10 Begin */
        /* 锁初始化 */
        VOS_SpinLockInit(&(pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].stSpinLock));
        /* Added by l60609 for AP适配项目 ，2012-09-10 End */
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg  = VOS_TRUE;
    }

    PS_MEM_SET(pstAdsSpecCtx->stAdsUlCtx.aucPrioIndex, 0, ADS_RAB_NUM_MAX);

    /* 读NV，将优先级加权数读写到ADS上下文中 */
    ulRst = NV_ReadEx(ucInstanceIndex,
                      en_NV_Item_ADS_Queue_Scheduler_Pri,
                      &(pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv),
                      sizeof(ADS_UL_QUEUE_SCHEDULER_PRI_NV_STRU));
    if(NV_OK != ulRst)
    {
        pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus = VOS_FALSE;

        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }

        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitUlCtx: NV read failed !");
    }

    if (VOS_FALSE == pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus)
    {
        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }
    }
    /* Added by f00179208 for V7R1C50, 2012-02-20 End */
    pstAdsSpecCtx->stAdsUlCtx.ucModemSndPermitFlg    = VOS_TRUE;

    /* Added by l60609 for AP适配项目 ，2012-08-31 Begin */
#if(FEATURE_OFF == FEATURE_SKB_EXP)
    pstAdsSpecCtx->stAdsUlCtx.ulUlMaxQueueLength     = ADS_UL_MAX_QUEUE_LENGTH;
#endif
    /* Added by l60609 for AP适配项目 ，2012-08-31 End */

    return;
}

/*****************************************************************************
 函 数 名  : ADS_InitDlCtx
 功能描述  : 初始化下行的上下文
 输入参数  : ucInstance --- 实例号(ModemId)
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月6日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_InitDlCtx(VOS_UINT8 ucInstance)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;
    VOS_UINT32                          i;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstance]);

    /* 初始化下行的RAB信息 */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ucRabId        = ADS_RAB_ID_INVALID;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].enPktType      = ADS_CDS_IPF_PKT_TYPE_IP;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ulExParam      = 0;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].pRcvDlDataFunc = VOS_NULL_PTR;
    }

    /* Added by A00165503 for DTS2012071003092, 2012-07-17, Begin */
    //ADS_DL_StartProtectTimer();
    /* Added by A00165503 for DTS2012071003092, 2012-07-17, End */

    /* Added by A00165503 for DTS2012112206761, 2012-11-19, Begin */
    /* 初始化底软动态组包参数 */
    ADS_DL_InitFcAssemParamInfo();
    /* Added by A00165503 for DTS2012112206761, 2012-11-19, End */

    return;
}

/*****************************************************************************
 函 数 名  : ADS_InitStatsInfoCtx
 功能描述  : 初始化数据统计的上下文
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年1月10日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

  2.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:双实例

*****************************************************************************/
VOS_VOID ADS_InitStatsInfoCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    pstAdsSpecCtx->stAdsStatsInfoCtx.stULDataStats.ulULPeriodSndBytes = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stULDataStats.ulULCurDataRate    = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stDLDataStats.ulDLPeriodRcvBytes = 0;
    pstAdsSpecCtx->stAdsStatsInfoCtx.stDLDataStats.ulDLCurDataRate    = 0;
}

/*****************************************************************************
 函 数 名  : ADS_InitSpecCtx
 功能描述  : 初始化每个实例专有的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:新生成函数

  2.日    期   : 2013年9月22日
    作    者   : A00165503
    修改内容   : DTS2013092200927: 定时器使用优化
*****************************************************************************/
VOS_VOID ADS_InitSpecCtx(VOS_VOID)
{
    VOS_UINT8                           i;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        /* 初始化上行上下文 */
        ADS_InitUlCtx(i);

        /* 初始化下行上下文 */
        ADS_InitDlCtx(i);

        /* 初始化数据统计的上下文 */
        ADS_InitStatsInfoCtx(i);
    }
}

/* Added by m00217266 for DTS2014032902757, 2014-4-4, begin */
/*****************************************************************************
 函 数 名  : ADS_ResetUlCtx
 功能描述  : 重置下行的上下文
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年4月14日
    作    者   : m00217266
    修改内容   : DTS2014032902757(与函数ADS_InitUlCtx基本一致，只删除了spinloc初始化)

*****************************************************************************/
VOS_VOID ADS_ResetUlCtx(VOS_UINT8 ucInstanceIndex)
{
    VOS_UINT32                          i;
    VOS_UINT32                          ulRst;
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx = VOS_NULL_PTR;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* 默认从第一个队列开始调度 */
    pstAdsSpecCtx->stAdsUlCtx.ucAdsUlCurIndex      = 0;

    for (i = 0; i < ADS_RAB_ID_MAX + 1; i++)
    {
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].pstAdsUlLink    = VOS_NULL_PTR;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucIsQueueValid  = VOS_FALSE;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPrio          = ADS_QCI_TYPE_BUTT;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].usRecordNum     = 0;
        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].enPktType       = ADS_CDS_IPF_PKT_TYPE_IP;

        pstAdsSpecCtx->stAdsUlCtx.astAdsUlQueue[i].ucRabSndPermitFlg  = VOS_TRUE;
    }

    PS_MEM_SET(pstAdsSpecCtx->stAdsUlCtx.aucPrioIndex, 0, ADS_RAB_NUM_MAX);

    /* 读NV，将优先级加权数读写到ADS上下文中 */
    ulRst = NV_ReadEx(ucInstanceIndex,
                      en_NV_Item_ADS_Queue_Scheduler_Pri,
                      &(pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv),
                      sizeof(ADS_UL_QUEUE_SCHEDULER_PRI_NV_STRU));
    if(NV_OK != ulRst)
    {
        pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus = VOS_FALSE;

        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }

        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitUlCtx: NV read failed !");
    }

    if (VOS_FALSE == pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ulStatus)
    {
        for (i = 0; i < ADS_UL_QUEUE_SCHEDULER_PRI_MAX; i++)
        {
            pstAdsSpecCtx->stAdsUlCtx.stQueuePriNv.ausPriWeightedNum[i] = ADS_UL_DEFAULT_PRI_WEIGHTED_NUM;
        }
    }

    pstAdsSpecCtx->stAdsUlCtx.ucModemSndPermitFlg    = VOS_TRUE;

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    pstAdsSpecCtx->stAdsUlCtx.ulUlMaxQueueLength     = ADS_UL_MAX_QUEUE_LENGTH;
#endif

    return;
}
/* Added by m00217266 for DTS2014032902757, 2014-4-4, end */

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : ADS_ResetDlCtx
 功能描述  : 重置下行的上下文
 输入参数  : VOS_UINT8 ucInstanceIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年04月15日
    作    者   : f00179208
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID ADS_ResetDlCtx(VOS_UINT8 ucInstanceIndex)
{
    ADS_SPEC_CTX_STRU                  *pstAdsSpecCtx  = VOS_NULL_PTR;
    VOS_UINT32                          i;

    pstAdsSpecCtx = &(g_stAdsCtx.astAdsSpecCtx[ucInstanceIndex]);

    /* 重置下行的RAB信息 */
    for (i = 0; i < ADS_RAB_NUM_MAX; i++)
    {
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ucRabId        = ADS_RAB_ID_INVALID;
        pstAdsSpecCtx->stAdsDlCtx.astAdsDlRabInfo[i].ulExParam      = 0;
    }

    /* 重置底软动态组包参数 */
    ADS_DL_ResetFcAssemParamInfo();

    return;
}

/*****************************************************************************
 函 数 名  : ADS_ResetSpecCtx
 功能描述  : 重置每个实例专有的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年04月15日
    作    者   : f00179208
    修改内容   : 新生成函数

  2.日    期   : 2013年9月22日
    作    者   : A00165503
    修改内容   : DTS2013092200927: 定时器使用优化

  3.日    期   : 2014年4月14日
    作    者   : m00217266
    修改内容   : DTS2014032902757: c核单独复位时上行ads空指针
*****************************************************************************/
VOS_VOID ADS_ResetSpecCtx(VOS_VOID)
{
    VOS_UINT8                           i;

    for (i = 0; i < ADS_INSTANCE_MAX_NUM; i++)
    {
        /* 初始化上行上下文 */
        /* Added by m00217266 for DTS2014032902757, 2014-4-4, begin */
        ADS_ResetUlCtx(i);
        /* Added by m00217266 for DTS2014032902757, 2014-4-4, end */

        /* 初始化下行上下文 */
        ADS_ResetDlCtx(i);

        /* 初始化数据统计的上下文 */
        ADS_InitStatsInfoCtx(i);
    }
}

/*****************************************************************************
 函 数 名  : ADS_ResetIpfCtx
 功能描述  : 重置和IPF相关的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年04月15日
    作    者   : f00179208
    修改内容   : 新生成函数
  2.日    期   : 2014年06月03日
    作    者   : f00179208
    修改内容   : CCPU LOAD优化
*****************************************************************************/
VOS_VOID ADS_ResetIpfCtx(VOS_VOID)
{
#if (FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT8                           ucAdqIndex;

    for (ucAdqIndex = 0; ucAdqIndex < ADS_DL_ADQ_MAX_NUM; ucAdqIndex++)
    {
        PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlAdBuff[ucAdqIndex],
                   0x00,
                   (VOS_SIZE_T)(IPF_DLAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S)));
    }
#endif

    /* 初始化上行BD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfUlBdBuff, 0x00, (VOS_SIZE_T)(IPF_ULBD_DESC_SIZE * sizeof(IPF_CONFIG_ULPARAM_S)));

    /* 初始化下行RD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlRdBuff, 0x00, (VOS_SIZE_T)(IPF_DLRD_DESC_SIZE * sizeof(IPF_RD_DESC_S)));

    /* 默认上行数据发送保护定时器时长为10ms */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen   = 10;

    /* Added by f00179208 for ccpu_load, 2014-06-03, Begin */
    /* 默认上行数据统计定时器时长为100ms */
    g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.stThresholdStatInfo.ulStatTmrLen = 100;
    g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.stThresholdStatInfo.ulStatPktNum = 0;

    /* 默认攒包的最大个数 */
    if (VOS_TRUE == g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo.ulActiveFlag)
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = ADS_UL_DATA_THRESHOLD_ONE;
    }
    else
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = 32;
    }
    /* Added by f00179208 for ccpu_load, 2014-06-03, End */

    /* 默认数据不在发送 */
    g_stAdsCtx.stAdsIpfCtx.ucSendingFlg = VOS_FALSE;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

/*****************************************************************************
 函 数 名  : ADS_InitIpfCtx
 功能描述  : 初始化和IPF相关的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II: 新生成函数
  2.日    期   : 2014年06月03日
    作    者   : f00179208
    修改内容   : CCPU LOAD优化
*****************************************************************************/
VOS_VOID ADS_InitIpfCtx(VOS_VOID)
{
    /* Added by f00179208 for ccpu_load, 2014-06-03, Begin */
    VOS_UINT32                          ulRst;
    ADS_NV_DYNAMIC_THRESHOLD_STRU       stThreshold;
    ADS_UL_DYNAMIC_ASSEM_INFO_STRU     *pstUlAssemParmInfo;
    /* Added by f00179208 for ccpu_load, 2014-06-03, End */

#if(FEATURE_OFF == FEATURE_SKB_EXP)
    VOS_UINT8                           i;

    for (i = 0; i < ADS_DL_ADQ_MAX_NUM; i++)
    {
        PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlAdBuff[i], 0x00, (VOS_SIZE_T)(IPF_DLAD0_DESC_SIZE * sizeof(IPF_AD_DESC_S)));
    }

    /* 初始化上行源内存释放队列 */
    IMM_ZcQueueHeadInit(&g_stAdsCtx.stAdsIpfCtx.stUlSrcMemFreeQue);
#endif

    /* 初始化上行BD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfUlBdBuff, 0x00, (VOS_SIZE_T)(IPF_ULBD_DESC_SIZE * sizeof(IPF_CONFIG_ULPARAM_S)));

    /* 初始化下行RD BUFF*/
    PS_MEM_SET(g_stAdsCtx.stAdsIpfCtx.astIpfDlRdBuff, 0x00, (VOS_SIZE_T)(IPF_DLRD_DESC_SIZE * sizeof(IPF_RD_DESC_S)));

    /* 默认上行数据发送保护定时器时长为10ms */
    g_stAdsCtx.stAdsIpfCtx.ulProtectTmrLen   = 10;

    /* Added by f00179208 for ccpu_load, 2014-06-03, Begin */
    /* Modified by f00179208 for DTS2014102301586, 2014-11-08, Begin */
    pstUlAssemParmInfo = &g_stAdsCtx.stAdsIpfCtx.stUlAssemParmInfo;

    PS_MEM_SET(&stThreshold, 0x00, (VOS_SIZE_T)sizeof(ADS_NV_DYNAMIC_THRESHOLD_STRU));

    ulRst = NV_ReadEx(MODEM_ID_0,
                      en_NV_Item_ADS_DYNAMIC_THRESHOLD_CFG,
                      &stThreshold,
                      sizeof(ADS_NV_DYNAMIC_THRESHOLD_STRU));
    if(NV_OK != ulRst)
    {
        pstUlAssemParmInfo->ulActiveFlag                      = VOS_FALSE;
        pstUlAssemParmInfo->ulProtectTmrExpCnt                = 0;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel1    = 80;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel2    = 150;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel3    = 500;
        pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel4    = 0xFFFFFFFF;

        pstUlAssemParmInfo->stThresholdLevel.ulThreshold1     = 1;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold2     = 13;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold3     = 60;
        pstUlAssemParmInfo->stThresholdLevel.ulThreshold4     = 64;
        ADS_ERROR_LOG(ACPU_PID_ADS_UL, "ADS_InitIpfCtx: NV read failed !");
    }

    pstUlAssemParmInfo->ulActiveFlag                      = stThreshold.ulActiveFlag;
    pstUlAssemParmInfo->ulProtectTmrExpCnt                = stThreshold.ulProtectTmrExpCnt;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel1    = stThreshold.stWaterMarkLevel.ulWaterLevel1;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel2    = stThreshold.stWaterMarkLevel.ulWaterLevel2;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel3    = stThreshold.stWaterMarkLevel.ulWaterLevel3;
    pstUlAssemParmInfo->stWaterMarkLevel.ulWaterLevel4    = stThreshold.stWaterMarkLevel.ulWaterLevel4;

    pstUlAssemParmInfo->stThresholdLevel.ulThreshold1     = stThreshold.stThresholdLevel.ulThreshold1;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold2     = stThreshold.stThresholdLevel.ulThreshold2;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold3     = stThreshold.stThresholdLevel.ulThreshold3;
    pstUlAssemParmInfo->stThresholdLevel.ulThreshold4     = stThreshold.stThresholdLevel.ulThreshold4;

    /* 默认上行数据统计定时器时长为100ms */
    pstUlAssemParmInfo->stThresholdStatInfo.ulStatTmrLen = 100;
    pstUlAssemParmInfo->stThresholdStatInfo.ulStatPktNum = 0;

    /* 超时时长大于零才需要启动jiffies保护定时器 */
    if (0 != pstUlAssemParmInfo->ulProtectTmrExpCnt)
    {
        pstUlAssemParmInfo->ulProtectTmrCnt = ADS_GET_CURR_KERNEL_TIME();
    }

    /* 默认攒包的最大个数 */
    if (VOS_TRUE == pstUlAssemParmInfo->ulActiveFlag)
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = ADS_UL_DATA_THRESHOLD_ONE;
    }
    else
    {
        g_stAdsCtx.stAdsIpfCtx.ulThredHoldNum = 32;
    }
    /* Modified by f00179208 for DTS2014102301586, 2014-11-08, End */
    /* Added by f00179208 for ccpu_load, 2014-06-03, End */

    /* 默认数据不在发送 */
    g_stAdsCtx.stAdsIpfCtx.ucSendingFlg = VOS_FALSE;
}

/*****************************************************************************
 函 数 名  : ADS_InitTiCtx
 功能描述  : 初始化定时器的上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月13日
    作    者   : 鲁琳/l60609
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID ADS_InitTiCtx(VOS_VOID)
{
    VOS_UINT32                          i;

    for (i = 0; i < ADS_MAX_TIMER_NUM; i++)
    {
        g_stAdsCtx.astAdsTiCtx[i].hTimer        = VOS_NULL_PTR;
        g_stAdsCtx.astAdsTiCtx[i].enTimerStatus = ADS_TIMER_STATUS_STOP;
    }

    return;
}

/* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
/*****************************************************************************
 函 数 名  : ADS_InitResetSem
 功能描述  : 初始化ADS复位的信号量
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
VOS_VOID ADS_InitResetSem(VOS_VOID)
{
    g_stAdsCtx.hULResetSem  = VOS_NULL_PTR;
    g_stAdsCtx.hDLResetSem  = VOS_NULL_PTR;

    /* 分配二进制信号量 */
    if (VOS_OK != VOS_SmBCreate( "UL", 0, VOS_SEMA4_FIFO, &g_stAdsCtx.hULResetSem))
    {
        vos_printf("Create ADS acpu UL_CNF sem failed!\r\n");
        ADS_UL_DBG_CREATE_BINARY_SEM_FAIL_NUM(1);
        ADS_DBG_SET_SEM_INIT_FLAG(VOS_FALSE);

        return;
    }
    else
    {
        ADS_UL_DBG_SAVE_BINARY_SEM_ID(g_stAdsCtx.hULResetSem);
    }

    if (VOS_OK != VOS_SmBCreate( "DL", 0, VOS_SEMA4_FIFO, &g_stAdsCtx.hDLResetSem))
    {
        vos_printf("Create ADS acpu DL_CNF sem failed!\r\n");
        ADS_DL_DBG_CREATE_BINARY_SEM_FAIL_NUM(1);
        ADS_DBG_SET_SEM_INIT_FLAG(VOS_FALSE);

        return;
    }
    else
    {
        ADS_DL_DBG_SAVE_BINARY_SEM_ID(g_stAdsCtx.hDLResetSem);
    }

    ADS_DBG_SET_SEM_INIT_FLAG(VOS_TRUE);

    return;
}
/* Added by f00179208 for CCPU RESET, 2013-04-15, End */

/*****************************************************************************
 函 数 名  : ADS_InitCtx
 功能描述  : 初始化ADS上下文
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月24日
    作    者   : l60609
    修改内容   : DSDA Phase II:初始化上下文
  2.日    期   : 2013年04月15日
    作    者   : 范晶
    修改内容   : C核单独复位
  3.日    期   : 2013年06月04日
    作    者   : l00198894
    修改内容   : Share-PDP项目增加过滤表初始化
  4.日    期   : 2013年07月222日
    作    者   : j00177245
    修改内容   : 清理编译warning
*****************************************************************************/
VOS_VOID ADS_InitCtx(VOS_VOID)
{
    /* Added by j00174725 for clean warning, 2013-07-22, Begin */
    PS_MEM_SET(&g_stAdsStats, 0, sizeof(g_stAdsStats));
    /* Added by j00174725 for clean warning, 2013-07-22, End */

    /* 初始化每个实例的上下文 */
    ADS_InitSpecCtx();

    /* 初始化IPF相关的上下文 */
    ADS_InitIpfCtx();

    /* 初始化定时器上下文 */
    ADS_InitTiCtx();

    /* Added by f00179208 for CCPU RESET, 2013-04-15, Begin */
    /* 初始化复位信号量 */
    ADS_InitResetSem();
    /* Added by f00179208 for CCPU RESET, 2013-04-15, End */

    /* Added by l00198894 for Share-PDP Project, 2013-06-04, Begin */
    /* 初始化ADS过滤器上下文 */
    ADS_FILTER_InitCtx();
    /* Added by l00198894 for Share-PDP Project, 2013-06-04, End */

    /* 初始化当前实例索引值 */
    g_stAdsCtx.ucAdsCurInstanceIndex = ADS_INSTANCE_INDEX_0;
}
/* Modified by l60609 for DSDA Phase II, 2012-11-24, End */

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

