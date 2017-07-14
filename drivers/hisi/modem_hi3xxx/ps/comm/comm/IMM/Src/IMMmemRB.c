/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : IMMmemRB.c
  版 本 号   : 初稿
  作    者   : s00164817
  生成日期   : 2011年12月29日
  最近修改   :
  功能描述   : IMM垃圾回收释放子模块
  函数列表   :
  修改历史   :
  1.日    期   : 2011年12月29日
    作    者   : s00164817
    修改内容   : 创建文件

******************************************************************************/



/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "IMMmemRB.h"
#include "product_config.h"
#if ( FEATURE_ON == FEATURE_SKB_EXP )
#include "IMMmem.h"
#else
#include "IMMmem_Intra.h"
#endif
#include "IMMmemMntn.h"
#include "v_timer.h"
#include "v_id.h"
#include "IMMmemZC.h"
#include "LUPQueue.h"
#include "TtfMemoryMap.h"
#include "PsCommonDef.h"



#include <linux/interrupt.h>


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/*lint -e767*/
#define    THIS_FILE_ID                 PS_FILE_ID_IMM_RB_C
/*lint +e767*/

#if (FEATURE_ON == FEATURE_SKB_EXP)
/* 垃圾回收任务优先级 */
const VOS_UINT8 IMM_RB_FREE_TASK_PRI_LINUX                  = 85;

/* 垃圾回收任务定时器时长 */
const VOS_UINT16 IMM_RB_TX_MEM_FREE_INTERVAL_LINUX          = 1000;

/* 垃圾释放任务栈深度 */
const VOS_UINT16 IMM_RB_RX_MEM_FREE_TASK_STACK_SIZE_LINUX   = 4096;

/* A核TTF内存回收队列 */
LUP_QUEUE_STRU  *g_pstAcpuTTFMemFreeQue                     = VOS_NULL_PTR;

/* A核IMM内存释放队列 */
LUP_QUEUE_STRU  *g_pstAcpuIMMMemFreeQue                     = VOS_NULL_PTR;

/* 内存回收门限 */
VOS_UINT8        g_ulFreeIMMMemBlkNoticNum                  = 0x1f;

/* A CPU 内存回收定时器启动标志 */
VOS_UINT32       g_ulACPUTimerStartFlag                     = PS_FALSE;

/* IMM MEM RB 释放任务信号量 */
VOS_SEM         g_ulImmMemRbFreeSem                         = 0;

/* IMM MEM RB 可维可测实体 */
IMM_MEM_RB_MNTN_INFO_STRU               g_stImmMemRbMntnEntity;

/* IMM MEM RB 自旋锁 */
VOS_SPINLOCK                            g_stImmRbSpinLock;

/*其它版本支持IPC，中断号相同*/
#define IMM_IPC_MEM_FREE_INT                        (IPC_INT_DICC_RELDATA)
#define IMM_IPC_MEM_RECYCLE_INT                     (IPC_INT_DICC_RELDATA)

#define IMM_MEM_CONNECT_IPC_MEMFREE_INT(a,b,c)       mdrv_ipc_int_connect(a,b,c)
#define IMM_MEM_ENABLE_IPC_INT(a)                    mdrv_ipc_int_enable(a)
#define IMM_MEM_TRIG_IPC_MEMRB_INT(a,b)              mdrv_ipc_int_send(a,(IPC_INT_LEV_E)(b))




/*****************************************************************************
  3 函数实现
*****************************************************************************/
/******************************************************************************
 函 数 名  : IMM_DebugLOG
 功能描述  : IMM 封装的打印
 输入参数  : VOS_CHAR *pcString
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_DebugLOG
(
    VOS_CHAR       *pcString
)
{
    vos_printf(pcString);

    return;
}/* IMM_DebugLOG */


/******************************************************************************
 函 数 名  : IMM_DebugLOG1
 功能描述  : IMM 封装的打印
 输入参数  : VOS_CHAR *pcString
             VOS_INT32 lPara1
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_DebugLOG1
(
    VOS_CHAR       *pcString,
    VOS_INT32       lPara1
)
{
    vos_printf(pcString, lPara1);

    return;
}/* IMM_DebugLOG1 */


/******************************************************************************
 函 数 名  : IMM_DebugLOG2
 功能描述  : IMM 封装的打印
 输入参数  : VOS_CHAR *pcString
             VOS_INT32 lPara1
             VOS_INT32 lPara2
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_DebugLOG2
(
    VOS_CHAR       *pcString,
    VOS_INT32       lPara1,
    VOS_INT32       lPara2
)
{
    vos_printf(pcString, lPara1, lPara2);

    return;
}/* IMM_DebugLOG2 */


/******************************************************************************
 函 数 名  : IMM_DebugLOG3
 功能描述  : IMM 封装的打印
 输入参数  : VOS_CHAR *pcString
             VOS_INT32 lPara1
             VOS_INT32 lPara2
             VOS_INT32 lPara3
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_DebugLOG3
(
    VOS_CHAR       *pcString,
    VOS_INT32       lPara1,
    VOS_INT32       lPara2,
    VOS_INT32       lPara3
)
{
    vos_printf(pcString, lPara1, lPara2, lPara3);

    return;
}/* IMM_DebugLOG3 */


/******************************************************************************
 函 数 名  : IMM_DebugLOG4
 功能描述  : IMM 封装的打印
 输入参数  : VOS_CHAR *pcString
             VOS_INT32 lPara1
             VOS_INT32 lPara2
             VOS_INT32 lPara3
             VOS_INT32 lPara4
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_DebugLOG4
(
    VOS_CHAR       *pcString,
    VOS_INT32       lPara1,
    VOS_INT32       lPara2,
    VOS_INT32       lPara3,
    VOS_INT32       lPara4
)
{
    vos_printf(pcString, lPara1, lPara2, lPara3, lPara4);

    return;
}/* IMM_DebugLOG4 */


/******************************************************************************
 函 数 名  : IMM_RbMemRelDataIsr
 功能描述  : IMM_RB 释放内存中断服务程序
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_RbMemRelDataIsr(VOS_VOID)
{

    if ( VOS_NULL == g_ulImmMemRbFreeSem )
    {
        return ;
    }

    /* give semphore 调用OM提供的封装函数，释放信号量ulMemFreeSem */
    VOS_SmV(g_ulImmMemRbFreeSem);
    g_stImmMemRbMntnEntity.ulImmMemRbReceiveIntCnt++;

    return ;
}/* IMM_RbMemRelDataIsr */


/******************************************************************************
 函 数 名  : IMM_RbMemFreeQueInit
 功能描述  : IMM_RB 释放内存队列初始化
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

******************************************************************************/
VOS_VOID IMM_RbMemFreeQueInit(VOS_VOID)
{
    /*lint -e778*/
    g_pstAcpuTTFMemFreeQue  = (LUP_QUEUE_STRU *)DRV_DDR_PHY_TO_VIRT(CORESHARE_MEM_WAN_ADDR + (TTF_MEM_FREE_QUE_LEN + 5)* sizeof(VOS_VOID *));
    g_pstAcpuIMMMemFreeQue  = (LUP_QUEUE_STRU *)DRV_DDR_PHY_TO_VIRT(CORESHARE_MEM_WAN_ADDR + TTF_MEM_FREE_AREA_SIZE + (IMM_MEM_FREE_QUE_LEN + 5)* sizeof(VOS_VOID *));
    /*lint +e778*/

    return;
}/* IMM_RbMemFreeQueInit */

/*****************************************************************************
函 数 名  : IMM_RbIsrInit
功能描述  : IMM_Rb用户通道中断初始化函数
输入参数  : VOS_UINT32  ulPid           调用的PID
            VOS_UINT32  ulIntLevel      中断级别
            VOIDFUNCPTR pfuncRecvIsr    中断服务函数指针
输出参数  : 无
返 回 值  : 操作成功与否, IMM_SUCC - 成功, 其它 - 失败
调用函数  :
被调函数  :

修改历史      :
 1.日    期   : 2011年12月8日
   作    者   : y00171741
   修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 IMM_RbIsrInit(VOS_UINT32 ulPid, VOS_UINT32 ulIntLevel,
                            VOIDFUNCPTR pfuncRecvIsr)
{
    VOS_INT32  lIntRet;


    /* 挂接中断 */
    /*Add by y45445 for PS FUSION PC ST 20120109 begin*/
#ifndef WTTF_PS_FUSION_PC_ST
    lIntRet = IMM_MEM_CONNECT_IPC_MEMFREE_INT(((IPC_INT_LEV_E)ulIntLevel), ((VOIDFUNCPTR)pfuncRecvIsr), VOS_NULL);
#else
    lIntRet = VHW_IPC_IntConnect(ulPid,((IPC_INT_LEV_E)ulIntLevel), ((VOIDFUNCPTR)pfuncRecvIsr), VOS_NULL);
#endif
    /*Add by y45445 for PS FUSION PC ST 20120109 end*/

    if (lIntRet != VOS_OK)
    {
        IMM_LOG1(ulPid, IMM_PRINT_ERROR, "IMM_RbIsrInit connect %d ISR fail", (VOS_INT32)ulIntLevel);
        return IMM_FAIL;
    }

    /* 使能通知中断 */
    /*Add by y45445 for PS FUSION PC ST 20120109 begin*/
#ifndef WTTF_PS_FUSION_PC_ST
    IMM_MEM_ENABLE_IPC_INT((IPC_INT_LEV_E)ulIntLevel);
#else
    VHW_IPC_IntEnable(ulPid,ulIntLevel);
#endif
    /*Add by y45445 for PS FUSION PC ST 20120109 end*/

    return IMM_SUCC;
}/* IMM_RbIsrInit */

/*****************************************************************************
 函 数 名  : IMM_RbRxFreeMemTaskInit
 功能描述  : IMM_RbRxFreeMem的初始化
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbRxFreeMemTaskInit( VOS_VOID )
{
    /* 初始化 IMM MEM RB 可维可测实体 */
    PS_MEM_SET(&g_stImmMemRbMntnEntity, 0x0, sizeof(IMM_MEM_RB_MNTN_INFO_STRU));

    /* 初始化信号量 */
    if ( VOS_OK != VOS_SmBCreate("g_ulImmMemRbFreeSem", 0, VOS_SEMA4_FIFO, (VOS_SEM *)&g_ulImmMemRbFreeSem ) )
    {
        IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "IMM_RB, IMM_RbRxFreeMemTaskInit, ERROR, Create g_ulImmMemRbFreeSem fail!\n");
        return;
    }

    VOS_SpinLockInit(&g_stImmRbSpinLock);
    IMM_RbMemFreeQueInit();
    IMM_RbIsrInit(UEPS_PID_IMM_RB_FREE, IMM_IPC_MEM_FREE_INT, (VOIDFUNCPTR)IMM_RbMemRelDataIsr);
    IMM_MemRegExtFreeCallBack(IMM_RbRemoteFreeMem);
    IMM_MntnInit();


    return ;
}/* IMM_RbRxFreeMemTaskInit */


/*****************************************************************************
 函 数 名  : IMM_MemGetRbMntnEntityAddr
 功能描述  : 获取IMM Rb可维可测实体地址
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年3月9日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_MemGetRbMntnEntityAddr( VOS_VOID )
{
    return  (VOS_UINT32)(&g_stImmMemRbMntnEntity);
}


/*****************************************************************************
 函 数 名  : IMM_MemGetFreeMntnEntityAddr
 功能描述  : 获取IMM FREE可维可测实体地址
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年3月9日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_MemGetFreeMntnEntityAddr( VOS_VOID )
{
    return  (VOS_UINT32)(&g_stImmMemFreeMntnEntity);
}


/*****************************************************************************
 函 数 名  : IMM_MemFreePidInit
 功能描述  : IMM 数据接收PID初始化
 输入参数  : ip - 初始化状态
 输出参数  : 无
 返 回 值  : 成功VOS_OK, 失败VOS_ERR
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_RbMemFreePidInit( enum VOS_INIT_PHASE_DEFINE ip )
{
    switch( ip )
    {
        case VOS_IP_LOAD_CONFIG:
            break;

        case VOS_IP_FARMALLOC:
        case VOS_IP_INITIAL:
        case VOS_IP_ENROLLMENT:
        case VOS_IP_LOAD_DATA:
        case VOS_IP_FETCH_DATA:
        case VOS_IP_STARTUP:
        case VOS_IP_RIVAL:
        case VOS_IP_KICKOFF:
        case VOS_IP_STANDBY:
        case VOS_IP_BROADCAST_STATE:
        case VOS_IP_RESTART:
            break;
        default:
            break;
       }

       return VOS_OK;

}/* IMM_RbMemFreePidInit */

/*****************************************************************************
 函 数 名  : IMM_RbMemFreeFromQue
 功能描述  : 从核间释放队列中释放IMM内存
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbMemFreeFromQue(VOS_VOID)
{
    IMM_MEM_STRU *pstMem = VOS_NULL_PTR;
    VOS_UINT32    ulResult;


    if (g_pstAcpuIMMMemFreeQue == VOS_NULL_PTR)
    {
        vos_printf("g_pstAcpuIMMMemFreeQue is null\n");
        return;
    }

    if (g_pstAcpuIMMMemFreeQue->ulMaxNum != (IMM_MEM_FREE_QUE_LEN+1))
    {
        vos_printf("g_pstAcpuIMMMemFreeQue ulMaxNum err: %u \n", g_pstAcpuIMMMemFreeQue->ulMaxNum);
        return;
    }

    while(PS_TRUE != (LUP_IsQueEmpty(g_pstAcpuIMMMemFreeQue)))
    {
        ulResult = LUP_DeSharedQueAcpu(g_pstAcpuIMMMemFreeQue, (VOS_VOID **)&pstMem);
        g_stImmMemRbMntnEntity.ulImmMemRbDeQTotalCnt++;

        if (PS_SUCC != ulResult)
        {
            g_stImmMemRbMntnEntity.ulImmMemRbDeQFailCnt++;
            vos_printf("ADS_IMMMemFree: LUP_DeSharedQueAcpu fail\n");
            return;
        }

        IMM_MemFree(pstMem);
    }

    return;
}/* IMM_RbMemFreeFromQue */


/*****************************************************************************
 函 数 名  : IMM_RbRxFreeMemTask
 功能描述  : 接受对端的释放任务请求
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbRxFreeMemTask(VOS_VOID)
{

    /* 解决UT死循环问题 */
#ifdef __UT_CENTER__
    VOS_UINT32                          ulLoop;
#endif

    IMM_RbRxFreeMemTaskInit();

#ifndef __UT_CENTER__
    for ( ; ; )
#else
    for (ulLoop = 0; ulLoop < 1; ulLoop++)
#endif
    {
        /* semphore take g_stImcLinuxManageEntity.ulRatRxRelSkBuffSem */
        if(VOS_OK != VOS_SmP(g_ulImmMemRbFreeSem, 0))
        {
            IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "IMM_RB, IMM_RbRxFreeMemTask : ERROR : VOS_SmP Failed!\n");
            continue;
        }

        /* 释放 */
        IMM_RbMemFreeFromQue();

#if ( FEATURE_ON == FEATURE_IMM_MEM_DEBUG )
    IMM_MntnRptPoolLeakInfo();
#endif
    }

}/* IMM_RbRxFreeMemTask */


/*****************************************************************************
 函 数 名  : IMM_RbRemoteFreeMem
 功能描述  : 需要释放的内存，把地址放入释放队列
 输入参数  : VOS_UINT32 *pAddr
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : Created
*****************************************************************************/
VOS_VOID IMM_RbRemoteFreeMem(VOS_VOID *pucAddr)
{
    VOS_UINT32                          ulResult;
    VOS_UINT32                          ulNum;
    VOS_INT32                           lIsrRet;    /* 中断操作返回值 */
    VOS_ULONG                           ulFlags = 0UL;

    if ( VOS_NULL_PTR == pucAddr )
    {
        VOS_SpinLockIntLock(&g_stImmRbSpinLock, ulFlags);
        g_stImmMemFreeMntnEntity.ulImmMemExtFreeFailCnt++;
        VOS_SpinUnlockIntUnlock(&g_stImmRbSpinLock, ulFlags);
        IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_WARNING, "IMM_RB, IMM_RbRemoteFreeMem, pucAddr is Null!\n");
        return;
    }

    VOS_SpinLockIntLock (&g_stImmRbSpinLock, ulFlags);

    /* 将TTF_MEM地址放入释放队列 */
    ulResult    = LUP_EnSharedQueAcpu(g_pstAcpuTTFMemFreeQue, pucAddr);
    g_stImmMemRbMntnEntity.ulImmMemRbEnQTotalCnt++;
    ulNum       = LUP_QueCnt(g_pstAcpuTTFMemFreeQue);
    VOS_SpinUnlockIntUnlock(&g_stImmRbSpinLock, ulFlags);

    if (PS_SUCC != ulResult)
    {
        VOS_SpinLockIntLock (&g_stImmRbSpinLock, ulFlags);
        g_stImmMemRbMntnEntity.ulImmMemRbEnQFailCnt++;
        VOS_SpinUnlockIntUnlock(&g_stImmRbSpinLock, ulFlags);
        IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "ERROR:IMM_RbRemoteFreeMem: LUP_EnSharedQueAcpu fail!\n");
    }

#ifndef WTTF_PS_FUSION_PC_ST
    if ( 0 == (ulNum & g_ulFreeIMMMemBlkNoticNum))
    {
        /* 触发IPC中断 */
        lIsrRet = IMM_MEM_TRIG_IPC_MEMRB_INT(IPC_CORE_COMARM, IMM_IPC_MEM_RECYCLE_INT);
        VOS_SpinLockIntLock (&g_stImmRbSpinLock, ulFlags);
        g_stImmMemRbMntnEntity.ulImmMemRbSendIntCnt++;
        VOS_SpinUnlockIntUnlock(&g_stImmRbSpinLock, ulFlags);
        if (lIsrRet != VOS_OK)
        {
            IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "ERROR:IMM_RbRemoteFreeMem: mdrv_ipc_int_send fail!\n");
        }
    }
#else
    lIsrRet = VHW_IPC_IntSend((IPC_INT_CORE_E)IPC_CORE_COMARM, (IPC_INT_LEV_E)IPC_INT_DICC_RELDATA);
    g_stImmMemRbMntnEntity.ulImmMemRbSendIntCnt++;

    if (lIsrRet != VOS_OK)
    {
        IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "ERROR:IMM_RbRemoteFreeMem: mdrv_ipc_int_send fail!\n");
    }
#endif
    return;
}/*IMM_RbRemoteFreeMem*/


/*****************************************************************************
 函 数 名  : IMM_RbMemRelMsgProc
 功能描述  : IMM_RB 内存释放任务消息处理函数
 输入参数  : MsgBlock *pMsg 待处理消息
 输出参数  : 无
 返 回 值  : VOS_OK
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_RbMemRelMsgProc(const MsgBlock *pMsg)
{
    return VOS_OK;
} /* IMM_RbMemRelMsgProc */


/*****************************************************************************
 函 数 名  : IMM_RbMemFreeFidInit
 功能描述  : IMM 内存释放任务初始化
 输入参数  : ip - 初始化状态
 输出参数  : 无
 返 回 值  : 成功VOS_OK, 失败VOS_ERR
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_RbMemFreeFidInit ( enum VOS_INIT_PHASE_DEFINE ip )
{
    VOS_UINT32                          ulRslt;
    VOS_UINT32                          ulReturnCode;

    switch( ip )
    {
        case   VOS_IP_LOAD_CONFIG:

            /* IMM_RB 模块注册PID */
            ulRslt = VOS_RegisterPIDInfo(UEPS_PID_IMM_RB_FREE,
                                (Init_Fun_Type)IMM_RbMemFreePidInit,
                                (Msg_Fun_Type)IMM_RbMemRelMsgProc);

            if( VOS_OK != ulRslt )
            {
                IMM_LOG1(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "reg IMM_RbMemFreeFidInit VOS_RegisterPIDInfo FAIL! ulRslt: %d\n", (VOS_INT32)ulRslt);
                return (VOS_UINT32)VOS_ERROR;
            }

            ulRslt = VOS_RegisterTaskPrio(UEPS_FID_IMM_RB_FREE, IMM_RB_FREE_TASK_PRI_LINUX);
            if( VOS_OK != ulRslt )
            {
                IMM_LOG1(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "reg MEMRECYLE task priority register FAIL ulRslt : %d !\n", (VOS_INT32)ulRslt);
                return (VOS_UINT32)VOS_ERROR;
            }

            /* IMM_RbRxFreeMemTask自处理任务注册 */
            ulReturnCode = VOS_RegisterSelfTask(UEPS_FID_IMM_RB_FREE,
            (VOS_TASK_ENTRY_TYPE)IMM_RbRxFreeMemTask, VOS_PRIORITY_P5, (VOS_UINT32)IMM_RB_RX_MEM_FREE_TASK_STACK_SIZE_LINUX);

            if ( VOS_NULL_BYTE == ulReturnCode )
            {
                IMM_LOG(UEPS_PID_IMM_RB_FREE, IMM_PRINT_ERROR, "IMM_RB, IMM_RbMemFreeFidInit, ERROR, Fail regist IMM_RxFreeMemTask \n" );

                return VOS_ERR;
            }

            break;

        case   VOS_IP_FARMALLOC:
        case   VOS_IP_INITIAL:
        case   VOS_IP_ENROLLMENT:
        case   VOS_IP_LOAD_DATA:
        case   VOS_IP_FETCH_DATA:
        case   VOS_IP_STARTUP:
        case   VOS_IP_RIVAL:
        case   VOS_IP_KICKOFF:
        case   VOS_IP_STANDBY:
        case   VOS_IP_BROADCAST_STATE:
        case   VOS_IP_RESTART:
            break;

        default:
            break;
    }

    return VOS_OK;
}/* IMM_RbMemFreeFidInit */


/*****************************************************************************
 函 数 名  : IMM_RbMemSetNoticeNum
 功能描述  : 设置内存释放触发门限
 输入参数  : VOS_UINT8 ulNoticeNum
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年2月14日
    作    者   : y00171741
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbMemSetNoticeNum( VOS_UINT8 ulNoticeNum )
{
    g_ulFreeIMMMemBlkNoticNum = ulNoticeNum;
    return;
}/* IMM_RbMemSetNoticeNum */


/*****************************************************************************
 函 数 名  : IMM_RbMemClrIsr
 功能描述  : 清除IPF中断计数器
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年2月14日
    作    者   : y00171741
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbMemClrIsr( VOS_VOID )
{
    g_stImmMemRbMntnEntity.ulImmMemRbReceiveIntCnt = 0;
    return;
}/* IMM_RbMemClrIsr */


/*****************************************************************************
 函 数 名  : IMM_RbMemPrintIsrCnt
 功能描述  : 打印IPF中断次数
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年2月14日
    作    者   : y00171741
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_RbMemPrintIsrCnt( VOS_VOID )
{
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, IMM_PRINT_NORMAL, "IPF中断次数: %d \n" , (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbReceiveIntCnt);
    return;
}/* IMM_RbMemPrintIsrCnt */


/*****************************************************************************
 函 数 名  : IMM_MemRbShowMntnInfo
 功能描述  : 打印 IMM MEM RB内存可维可测信息
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年1月19日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_MemRbShowMntnInfo( VOS_VOID )
{
    IMM_LOG(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "==========================================\n" );
    IMM_LOG(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "IMM MEM RB 可维可测信息 :\n" );
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "C2A 核间释放队列中节点个数  : %d \n", (VOS_INT32)LUP_QueCnt(g_pstAcpuIMMMemFreeQue));
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "A2C 核间释放队列中节点个数  : %d \n", (VOS_INT32)LUP_QueCnt(g_pstAcpuTTFMemFreeQue));
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 出队失败次数       : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbDeQFailCnt);
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 出队总次数         : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbDeQTotalCnt);
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 入队失败次数       : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbEnQFailCnt);
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 入队总次数         : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbEnQTotalCnt);
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 收到IPF中断次数    : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbReceiveIntCnt);
    IMM_LOG1(UEPS_PID_IMM_RB_FREE, PS_PRINT_NORMAL, "ImmMemRb 向IPF发送中断次数  : %d \n", (VOS_INT32)g_stImmMemRbMntnEntity.ulImmMemRbSendIntCnt);


    return;

}/* IMM_MemMntnInfo */


/*****************************************************************************
 函 数 名  : IMM_MemShowMntnInfo
 功能描述  : 输出 IMM MEM 可维可测信息，包括 IMM MEM RB可维可测信息
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年3月7日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_MemShowMntnInfo( VOS_VOID )
{
    IMM_MemFreeShowMntnInfo();
    IMM_MemRbShowMntnInfo();
}


/*****************************************************************************
 函 数 名  : IMM_MemClearMntnInfo
 功能描述  : 清除 IMM 内存可维可测信息
 输入参数  : VOS_VOID
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年3月9日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID IMM_MemClearMntnInfo( VOS_VOID )
{
    PS_MEM_SET(&g_stImmMemFreeMntnEntity, 0x0, sizeof(IMM_MEM_FREE_MNTN_INFO_STRU));
    PS_MEM_SET(&g_stImmMemRbMntnEntity, 0x0, sizeof(IMM_MEM_RB_MNTN_INFO_STRU));
}

#else
/*****************************************************************************
 函 数 名  : IMM_RbRemoteFreeMem
 功能描述  : 需要释放的内存，把地址放入释放队列
 输入参数  : VOS_UINT32 *pAddr
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : Created
*****************************************************************************/
VOS_VOID IMM_RbRemoteFreeMem(VOS_VOID *pucAddr)
{
    return;
}

/*****************************************************************************
 函 数 名  : IMM_RbMemFreeFidInit
 功能描述  : IMM 内存释放任务初始化
 输入参数  : ip - 初始化状态
 输出参数  : 无
 返 回 值  : 成功VOS_OK, 失败VOS_ERR
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月2日
    作    者   : s00164817
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 IMM_RbMemFreeFidInit ( enum VOS_INIT_PHASE_DEFINE ip )
{
    return VOS_OK;
}

#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

