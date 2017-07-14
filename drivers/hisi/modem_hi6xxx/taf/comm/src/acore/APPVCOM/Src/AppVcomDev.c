/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : AppVcomDev.c
  版 本 号   : 初稿
  作    者   : sunshaohua
  生成日期   : 2011年10月05日
  最近修改   :
  功能描述   : 虚拟串口处理函数

  函数列表   :

  修改历史   :
  1.日    期   : 2011年10月05日
    作    者   : sunshaohua
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
   1 头文件包含
*****************************************************************************/
#include "PsTypeDef.h"
#include "vos.h"
#include "PsCommonDef.h"
#include "AppVcomDev.h"

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
/*lint -e767 */
#define    THIS_FILE_ID        PS_FILE_ID_APP_VCOM_DEV_C
/*lint -e767 */

/*****************************************************************************
   2 全局变量定义
*****************************************************************************/
/* Added by z00220246 for DSDA Phase I, 2012-11-23, begin */

/* VCOM CTX,用于保存VCOM的全局变量*/
APP_VCOM_DEV_CTX_STRU                   g_astVcomCtx[APP_VCOM_MAX_NUM];

/* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
APP_VCOM_DEBUG_INFO_STRU                g_stAppVcomDebugInfo;
/* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

/* Added by z00220246 for DSDA Phase I, 2012-11-23, end */


/* 虚拟串口文件操作接口 */
#if (VOS_OS_VER == VOS_WIN32)
static struct file_operations           g_stOperations_Fops;
#else
static const struct file_operations     g_stOperations_Fops =
{
    .owner = THIS_MODULE,
    .read  = APP_VCOM_Read,
    /* Added by A00165503 for DTS2013080604846, 2013-08-06, Begin */
    .poll  = APP_VCOM_Poll,
    /* Added by A00165503 for DTS2013080604846, 2013-08-06, End */
    .write = APP_VCOM_Write,
    .open  = APP_VCOM_Open,
    .release = APP_VCOM_Release,
};
#endif

/* Modified by z00189113 for ErrLog&FTM, 2013-8-23 Begin */

/* APPVCOM的规格和应用
APPVCOM ID   缓存大小  用途           是否AT的CLIENT    ModemId
APPVCOM        4K      RIL                   是         MODEM0
APPVCOM1       4K      RIL                   是         MODEM0
APPVCOM2       4K      工程菜单              是         MODEM0
APPVCOM3       8K      生产装备(AT SERVER)   是         MODEM0
APPVCOM4       4K      audio RIL             是         MODEM0
APPVCOM5       4K      RIL                   是         MODEM1
APPVCOM6       4K      RIL                   是         MODEM1
APPVCOM7       8K      生产装备(AT SERVER)   是         MODEM1
APPVCOM8       4K      工程菜单/HIDP         是         MODEM1
APPVCOM9       4K      AGPS                  是         MODEM0
APPVCOM10      4K      NFC/BIP               是         MODEM0
APPVCOM11      4K      ISDB                  是         MODEM0
APPVCOM12      4K      audio ril             是         MODEM1
APPVCOM13      4K      SIM                   是         MODEM0
APPVCOM14      4K      SIM                   是         MODEM1
APPVCOM15      4K      NFC                   是         MODEM1
APPVCOM16      4K      HIDP                  是         MODEM0
APPVCOM17      4K      预留                  是         MODEM0
APPVCOM18      4K      预留                  是         MODEM0
APPVCOM19      4K      预留                  是         MODEM0
APPVCOM20      4K      预留                  是         MODEM0
APPVCOM21      4K      预留                  是         MODEM0
APPVCOM22      4K      预留                  是         MODEM0
APPVCOM23      4K      预留                  是         MODEM0
APPVCOM24      4K      预留                  是         MODEM0
APPVCOM25      4K      预留                  是         MODEM0
APPVCOM26      4K      预留                  是         MODEM0
APPVCOM27      2M      CBT                   是         MODEM0
APPVCOM28      4K      T/L装备               否
APPVCOM29      16K     errlog                否
APPVCOM30      2M      log 3.5               否
APPVCOM31      2M      log 3.5               否
*/
#if (FEATURE_ON == FEATURE_VCOM_EXT)
const APP_VCOM_DEV_CONFIG_STRU g_astAppVcomCogfigTab[] =
{
    {APP_VCOM_DEV_NAME_0, APP_VCOM_SEM_NAME_0, 0x1000, 0},                      /* APPVCOM */
    {APP_VCOM_DEV_NAME_1, APP_VCOM_SEM_NAME_1, 0x1000, 0},                      /* APPVCOM1 */
    {APP_VCOM_DEV_NAME_2, APP_VCOM_SEM_NAME_2, 0x1000, 0},                      /* APPVCOM2 */
    {APP_VCOM_DEV_NAME_3, APP_VCOM_SEM_NAME_3, 0x2000, 0},                      /* APPVCOM3 */
    {APP_VCOM_DEV_NAME_4, APP_VCOM_SEM_NAME_4, 0x1000, 0},                      /* APPVCOM4 */
    {APP_VCOM_DEV_NAME_5, APP_VCOM_SEM_NAME_5, 0x1000, 0},                      /* APPVCOM5 */
    {APP_VCOM_DEV_NAME_6, APP_VCOM_SEM_NAME_6, 0x1000, 0},                      /* APPVCOM6 */
    {APP_VCOM_DEV_NAME_7, APP_VCOM_SEM_NAME_7, 0x2000, 0},                      /* APPVCOM7 */
    {APP_VCOM_DEV_NAME_8, APP_VCOM_SEM_NAME_8, 0x1000, 0},                      /* APPVCOM8 */
    {APP_VCOM_DEV_NAME_9, APP_VCOM_SEM_NAME_9, 0x1000, 0},                      /* APPVCOM9 */
    {APP_VCOM_DEV_NAME_10, APP_VCOM_SEM_NAME_10, 0x1000, 0},                    /* APPVCOM10 */
    {APP_VCOM_DEV_NAME_11, APP_VCOM_SEM_NAME_11, 0x1000, 0},                    /* APPVCOM11 */
    {APP_VCOM_DEV_NAME_12, APP_VCOM_SEM_NAME_12, 0x1000, 0},                    /* APPVCOM12 */
    {APP_VCOM_DEV_NAME_13, APP_VCOM_SEM_NAME_13, 0x1000, 0},                    /* APPVCOM13 */
    {APP_VCOM_DEV_NAME_14, APP_VCOM_SEM_NAME_14, 0x1000, 0},                    /* APPVCOM14 */
    {APP_VCOM_DEV_NAME_15, APP_VCOM_SEM_NAME_15, 0x1000, 0},                    /* APPVCOM15 */
    {APP_VCOM_DEV_NAME_16, APP_VCOM_SEM_NAME_16, 0x1000, 0},                    /* APPVCOM16 */
    {APP_VCOM_DEV_NAME_17, APP_VCOM_SEM_NAME_17, 0x1000, 0},                    /* APPVCOM17 */
    {APP_VCOM_DEV_NAME_18, APP_VCOM_SEM_NAME_18, 0x1000, 0},                    /* APPVCOM18 */
    {APP_VCOM_DEV_NAME_19, APP_VCOM_SEM_NAME_19, 0x1000, 0},                    /* APPVCOM19 */
    {APP_VCOM_DEV_NAME_20, APP_VCOM_SEM_NAME_20, 0x1000, 0},                    /* APPVCOM20 */
    {APP_VCOM_DEV_NAME_21, APP_VCOM_SEM_NAME_21, 0x1000, 0},                    /* APPVCOM21 */
    {APP_VCOM_DEV_NAME_22, APP_VCOM_SEM_NAME_22, 0x1000, 0},                    /* APPVCOM22 */
    {APP_VCOM_DEV_NAME_23, APP_VCOM_SEM_NAME_23, 0x1000, 0},                    /* APPVCOM23 */
    {APP_VCOM_DEV_NAME_24, APP_VCOM_SEM_NAME_24, 0x1000, 0},                    /* APPVCOM24 */
    {APP_VCOM_DEV_NAME_25, APP_VCOM_SEM_NAME_25, 0x1000, 0},                    /* APPVCOM25 */
    {APP_VCOM_DEV_NAME_26, APP_VCOM_SEM_NAME_26, 0x1000, 0},                    /* APPVCOM26 */
    {APP_VCOM_DEV_NAME_27, APP_VCOM_SEM_NAME_27, 0x200000, 0},                  /* APPVCOM27 */
    {APP_VCOM_DEV_NAME_28, APP_VCOM_SEM_NAME_28, 0x1000, 0},                    /* APPVCOM28 */
    {APP_VCOM_DEV_NAME_29, APP_VCOM_SEM_NAME_29, 0x4000, 0},                    /* APPVCOM29 */
    /* Modified by f00179208 for DTS2012110606688, 2013-11-06 Begin */
    {APP_VCOM_DEV_NAME_30, APP_VCOM_SEM_NAME_30, 0x200000, 0},                  /* APPVCOM30 */
    {APP_VCOM_DEV_NAME_31, APP_VCOM_SEM_NAME_31, 0x200000, 0}                   /* APPVCOM31 */
    /* Modified by f00179208 for DTS2012110606688, 2013-11-06 End */
    /* Modified by z00189113 for for ErrLog&FTM, 2013-8-23 End */
};
#else
const APP_VCOM_DEV_CONFIG_STRU g_astAppVcomCogfigTab[] =
{
    {APP_VCOM_DEV_NAME_0, APP_VCOM_SEM_NAME_0, 0x1000, 0},                      /* APPVCOM */
    {APP_VCOM_DEV_NAME_1, APP_VCOM_SEM_NAME_1, 0x1000, 0}                       /* APPVCOM1 */
#if 0
    {APP_VCOM_DEV_NAME_2, APP_VCOM_SEM_NAME_2, 0x1000},                         /* APPVCOM2 */
    {APP_VCOM_DEV_NAME_3, APP_VCOM_SEM_NAME_3, 0x2000},                         /* APPVCOM3 */
    {APP_VCOM_DEV_NAME_4, APP_VCOM_SEM_NAME_4, 0x1000}                          /* APPVCOM4 */
#endif
};
#endif

/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
APP_VCOM_DEBUG_CFG_STRU              g_stAppVcomDebugCfg;
/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
/*****************************************************************************
   3 函数、变量声明
*****************************************************************************/

/*****************************************************************************
   4 函数实现
*****************************************************************************/
/*****************************************************************************
 函 数 名  : APP_VCOM_GetVcomCtxAddr
 功能描述  : 获取当前设备的全局变量
 输入参数  : VOS_UINT8 ucIndex
 输出参数  : 无
 返 回 值  : APP_VCOM_DEV_CTX_STRU*
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年12月5日
    作    者   : z00220246
    修改内容   : 新生成函数

*****************************************************************************/
APP_VCOM_DEV_CTX_STRU* APP_VCOM_GetVcomCtxAddr(VOS_UINT8 ucIndex)
{
    return &(g_astVcomCtx[ucIndex]);
}

/*****************************************************************************
 函 数 名  : APP_VCOM_GetAppVcomDevEntity
 功能描述  : 获取当前VCOM的设备实体指针
 输入参数  : VOS_UINT8 ucIndex
 输出参数  :
 返 回 值  : 返回当前VCOM的设备实体
 调用函数  :
 被调函数  :

 修改历史     :
 1.日    期   : 2012年12月03日
   作    者   : z00220246
   修改内容   : 新生成函数

*****************************************************************************/
APP_VCOM_DEV_ENTITY_STRU* APP_VCOM_GetAppVcomDevEntity(VOS_UINT8 ucIndex)
{
    return (g_astVcomCtx[ucIndex].pstAppVcomDevEntity);
}

/*****************************************************************************
 函 数 名  : APP_VCOM_RegDataCallback
 功能描述  : VCOM上行数据处理模块为AT模块提供的注册上行AT码流接收函数接口
 输入参数  : VOS_UINT8  ucDevIndex,    SEND_UL_AT_FUNC pFunc
 输出参数  : 无
 返 回 值  : VOS_UINT32

 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 APP_VCOM_RegDataCallback(VOS_UINT8 ucDevIndex, SEND_UL_AT_FUNC pFunc)
{
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    /* 索引号错误*/
    if (ucDevIndex >= APP_VCOM_DEV_INDEX_BUTT)
    {
        return VOS_ERR;
    }

    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucDevIndex);

    /* 函数指针赋给全局变量*/
    pstVcomCtx->pSendUlAtFunc = pFunc;

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_RegEvtCallback
 功能描述  : VCOM为外部模块提供的注册端口事件处理函数接口
 输入参数  : VOS_UINT8  ucDevIndex,    EVENT_FUNC pFunc
 输出参数  : 无
 返 回 值  : VOS_UINT32

 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT32 APP_VCOM_RegEvtCallback(VOS_UINT8 ucDevIndex, EVENT_FUNC pFunc)
{
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    /* 索引号错误*/
    if (ucDevIndex >= APP_VCOM_DEV_INDEX_BUTT)
    {
        return VOS_ERR;
    }

    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucDevIndex);

    /* 函数指针赋给全局变量*/
    pstVcomCtx->pEventFunc = pFunc;

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_GetIndexFromMajorDevId
 功能描述  : 根据主设备号，得到设备在全局变量中的索引号
 输入参数  : VOS_UINT32 ulMajorDevId
 输出参数  : 无
 返 回 值  : VOS_UINT8 设备索引号

 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : 新生成函数

*****************************************************************************/
VOS_UINT8 APP_VCOM_GetIndexFromMajorDevId(VOS_UINT ulMajorDevId)
{
    VOS_UINT8                           ucLoop;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    for (ucLoop = 0; ucLoop < APP_VCOM_MAX_NUM; ucLoop++)
    {
        pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucLoop);

        if (pstVcomCtx->ulAppVcomMajorId == ulMajorDevId)
        {
            break;
        }
    }

    return ucLoop;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_InitSpecCtx
 功能描述  : 初始化VCOM 模块全局变量
 输入参数  : VOS_UINT8 ulDevIndex
 输出参数  : 无
 返 回 值  : 无
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : 新生成函数

*****************************************************************************/
VOS_VOID  APP_VCOM_InitSpecCtx(VOS_UINT8 ucDevIndex)
{
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    if (ucDevIndex >= APP_VCOM_MAX_NUM)
    {
        return;
    }

    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucDevIndex);

    VOS_MemSet(pstVcomCtx->aucSendSemName, 0, APP_VCOM_SEM_NAME_MAX_LEN);
    VOS_MemSet(pstVcomCtx->aucAppVcomName, 0, APP_VCOM_DEV_NAME_MAX_LEN);

    VOS_MemCpy(pstVcomCtx->aucAppVcomName,
               g_astAppVcomCogfigTab[ucDevIndex].pcAppVcomName,
               VOS_StrLen(g_astAppVcomCogfigTab[ucDevIndex].pcAppVcomName));

    VOS_MemCpy(pstVcomCtx->aucSendSemName,
               g_astAppVcomCogfigTab[ucDevIndex].pcSendSemName,
               VOS_StrLen(g_astAppVcomCogfigTab[ucDevIndex].pcSendSemName));

    pstVcomCtx->ulAppVcomMajorId = APP_VCOM_MAJOR_DEV_ID + ucDevIndex;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Setup
 功能描述  : 将虚拟串口添加到字符设备中
 输入参数  : APP_VCOM_DEV_ENTITY_STRU *pstDev
             VOS_UINT8                 ucIndex
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年10月18日
    作    者   : sunshaohua
    修改内容   : 新生成函数

  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I

*****************************************************************************/
VOS_VOID APP_VCOM_Setup(
    APP_VCOM_DEV_ENTITY_STRU *pstDev,
    VOS_UINT8                 ucIndex
)
{
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, begin */
    VOS_INT                             iErr;
    dev_t                               ulDevno;
    static struct class                *pstCom_class;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

    ulDevno = MKDEV(pstVcomCtx->ulAppVcomMajorId, ucIndex);

    cdev_init(&pstDev->stAppVcomDev, &g_stOperations_Fops);

    iErr = cdev_add(&pstDev->stAppVcomDev, ulDevno, 1);
    if (iErr)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Setup cdev_add error! ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return;
    }

#if (VOS_OS_VER == VOS_WIN32)

#else
    pstCom_class = class_create(THIS_MODULE, pstVcomCtx->aucAppVcomName);

    device_create(pstCom_class,
                  NULL,
                  MKDEV(pstVcomCtx->ulAppVcomMajorId, ucIndex),
                  "%s",
                  pstVcomCtx->aucAppVcomName);
#endif
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, End */

    return;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Init
 功能描述  : 虚拟串口初始化
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_OK    成功
             VOS_ERR   失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年10月18日
    作    者   : sunshaohua
    修改内容   : 新生成函数
  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I
  3.日    期   : 2013年08月01日
    作    者   : j00177245
    修改内容   : 调整appvcom初始化时序
  4.日    期   : 2013年10月25日
    作    者   : j00177245
    修改内容   : 增加appvcom可维可测记录到文件
  5.日    期   : 2014年4月22日
    作    者   : A00165503
    修改内容   : DTS2014042208020: 增加写信号量初始化
*****************************************************************************/
VOS_INT __init APP_VCOM_Init(VOS_VOID)
{
    VOS_INT                             iResult1;
    VOS_INT                             iResult2;
    dev_t                               ulDevno;

    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, begin */
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDevp;


    printk("APP_VCOM_Init entry,%u",VOS_GetSlice());

    pstVcomCtx = VOS_NULL_PTR;
    pstVcomDevp  = VOS_NULL_PTR;

    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
    /* 初始化可维可测全局变量 */
    VOS_MemSet(&g_stAppVcomDebugInfo, 0x0, sizeof(g_stAppVcomDebugInfo));
    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

    /* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    VOS_MemSet(&g_stAppVcomDebugCfg, 0x0, sizeof(g_stAppVcomDebugCfg));
    /* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 初始化虚拟设备 */
    for (ucIndex = 0; ucIndex < APP_VCOM_MAX_NUM; ucIndex++)
    {
        /* 初始化全局变量 */
        APP_VCOM_InitSpecCtx(ucIndex);

        /* 获取全局变量指针 */
        pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

        /* 将设备号转换成dev_t 类型 */
        ulDevno = MKDEV(pstVcomCtx->ulAppVcomMajorId, ucIndex);

        iResult1 = register_chrdev_region(ulDevno, 1, pstVcomCtx->aucAppVcomName);

        /* 注册失败则动态申请设备号 */
        if (iResult1 < 0)
        {
            iResult2 = alloc_chrdev_region(&ulDevno, 0, 1, pstVcomCtx->aucAppVcomName);

            if (iResult2 < 0 )
            {
                return VOS_ERROR;
            }

            pstVcomCtx->ulAppVcomMajorId = MAJOR(ulDevno);
        }

        /* 动态申请设备结构体内存 */
        pstVcomCtx->pstAppVcomDevEntity = kmalloc(sizeof(APP_VCOM_DEV_ENTITY_STRU) , GFP_KERNEL);

        if (VOS_NULL_PTR == pstVcomCtx->pstAppVcomDevEntity)
        {
            /* 去注册该设备，返回错误 */
            unregister_chrdev_region(ulDevno, 1);
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
            APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Init malloc device Entity fail. ");
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
            return VOS_ERROR;
        }

        /* 获取设备实体指针 */
        pstVcomDevp = pstVcomCtx->pstAppVcomDevEntity;

        VOS_MemSet(pstVcomDevp, 0, sizeof(APP_VCOM_DEV_ENTITY_STRU));

        /* Modified by L60609 for add app vcom，2013-06-17,  Begin */
        pstVcomDevp->pucAppVcomMem = kmalloc(g_astAppVcomCogfigTab[ucIndex].ulAppVcomMemSize, GFP_KERNEL);

        if (VOS_NULL_PTR == pstVcomDevp->pucAppVcomMem)
        {
            /* 去注册该设备，返回错误 */
            unregister_chrdev_region(ulDevno, 1);
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
            APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Init malloc device buff fail. ");
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
            kfree(pstVcomCtx->pstAppVcomDevEntity);
            pstVcomCtx->pstAppVcomDevEntity = VOS_NULL_PTR;
            return VOS_ERROR;
        }
        /* Modified by L60609 for add app vcom，2013-06-17,  End */

        init_waitqueue_head(&pstVcomDevp->Read_Wait);

        /* Added by l00373346 for DTS2017041014735, 2017-04-18, Begin */
        mutex_init(&pstVcomDevp->stMutex);
        /* Added by l00373346 for DTS2017041014735, 2017-04-18, End */
        APP_VCOM_Setup(pstVcomDevp, ucIndex);

        /* 创建信号量 */
        /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
        sema_init(&pstVcomDevp->stMsgSendSem,1);
        /* Modified by j00174725 for appvcom init, 2013-8-1, end */

        /* Added by A00165503 for DTS2014042208020, 2014-04-22, Begin */
        sema_init(&pstVcomDevp->stWrtSem, 1);
        /* Added by A00165503 for DTS2014042208020, 2014-04-22, End */
    }

   /* Modified by z00220246 for DSDA Phase I, 2012-11-23, End */

    printk("APP_VCOM_Init eixt,%u",VOS_GetSlice());

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Release
 功能描述  : 文件关闭函数
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_OK    成功
             VOS_ERROR   失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月14日
    作    者   : sunshaohua
    修改内容   : 新生成函数
*****************************************************************************/
int APP_VCOM_Release(
    struct inode                       *inode,
    struct file                        *filp
)
{
    VOS_UINT                            ulDevMajor;
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    if (VOS_NULL_PTR == inode || VOS_NULL_PTR == filp)
    {
        return VOS_ERROR;
    }

    /* 获取主设备号 */
    ulDevMajor = imajor(inode);

    /* 根据主设备号得到设备在全局变量中的索引值 */
    ucIndex = APP_VCOM_GetIndexFromMajorDevId(ulDevMajor);

    if (ucIndex >= APP_VCOM_MAX_NUM)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Release ucIndex is error. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        return VOS_ERROR;
    }

    /* 获取VCOM全局变量 */
    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

    if (VOS_NULL_PTR == pstVcomCtx->pstAppVcomDevEntity)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Release VcomDevEntity is NULL. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return VOS_ERROR;
    }

    /* 将设备结构体指针赋值给文件私有数据指针 */
    filp->private_data = pstVcomCtx->pstAppVcomDevEntity;

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Release enter. ");
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    if(NULL != pstVcomCtx->pEventFunc)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
		(VOS_VOID)(pstVcomCtx->pEventFunc(APP_VCOM_EVT_RELEASE));
		/* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
    }

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Open
 功能描述  : 文件打开函数
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_OK    成功
             VOS_ERROR   失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月14日
    作    者   : sunshaohua
    修改内容   : 新生成函数
  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I
*****************************************************************************/
int APP_VCOM_Open(
    struct inode                       *inode,
    struct file                        *filp
)
{
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, begin */
    VOS_UINT                            ulDevMajor;
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    if (VOS_NULL_PTR == inode || VOS_NULL_PTR == filp)
    {
        return VOS_ERROR;
    }

    /* 获取主设备号 */
    ulDevMajor = imajor(inode);

    /* 根据主设备号得到设备在全局变量中的索引值 */
    ucIndex = APP_VCOM_GetIndexFromMajorDevId(ulDevMajor);

    if (ucIndex >= APP_VCOM_MAX_NUM)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Open ucIndex is error. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return VOS_ERROR;
    }

    /* 获取VCOM全局变量 */
    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

    if (VOS_NULL_PTR == pstVcomCtx->pstAppVcomDevEntity)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Open VcomDevEntity is NULL. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return VOS_ERROR;
    }

    /* 将设备结构体指针赋值给文件私有数据指针 */
    filp->private_data = pstVcomCtx->pstAppVcomDevEntity;

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Open enter. ");
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, End */

    if(NULL != pstVcomCtx->pEventFunc)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        (VOS_VOID)(pstVcomCtx->pEventFunc(APP_VCOM_EVT_OPEN));
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
    }

    return VOS_OK;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Read
 功能描述  : 虚拟串口读操作
 输入参数  : struct file *stFilp
             char __user *buf
             size_t       count
             loff_t      *ppos
 输出参数  : 无
 返 回 值  : ssize_t
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年10月18日
    作    者   : sunshaohua
    修改内容   : 新生成函数
  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I
  3.日    期   : 2013年08月01日
    作    者   : j00177245
    修改内容   : 调整appvcom初始化时序
  4.日    期   : 2013年10月28日
    作    者   : f00179208
    修改内容   : DTS2013102801414:手机打电话及挂电话慢，上层读VCOM会读到0字节的长度
*****************************************************************************/
ssize_t APP_VCOM_Read(
    struct file                        *stFilp,
    char __user                        *buf,
    size_t                              count,
    loff_t                             *ppos
)
{
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, begin */
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDev;
    struct cdev                        *pstCdev;
    VOS_UINT                            ulDevMajor;
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    /* 获得设备结构体指针 */
    pstVcomDev = stFilp->private_data;

    /* 获得设备主设备号 */
    pstCdev = &(pstVcomDev->stAppVcomDev);
    ulDevMajor = MAJOR(pstCdev->dev);

    /* 获得设备在全局变量中的索引值 */
    ucIndex = APP_VCOM_GetIndexFromMajorDevId(ulDevMajor);

    if (ucIndex >= APP_VCOM_MAX_NUM)
    {
        return APP_VCOM_ERROR;
    }

    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, read count:%d, current_len:%d. ", count, pstVcomDev->current_len);
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, f_flags:%d. ", stFilp->f_flags);
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, wait_event 111, flag:%d. ", pstVcomDev->ulReadWakeUpFlg);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    if (stFilp->f_flags & O_NONBLOCK)
    {
        return APP_VCOM_ERROR;
    }

#if (VOS_OS_VER == VOS_WIN32)

#else
    /*lint -e730 修改人:l60609;检视人:z60575;原因:两个线程会同时写该全局变量  */
    /* Modified by f00179208 for DTS2013102801414, 2013-10-28, Begin */
    if (wait_event_interruptible(pstVcomDev->Read_Wait, (pstVcomDev->current_len != 0)))
    {
        return -ERESTARTSYS;
    }
    /* Modified by f00179208 for DTS2013102801414, 2013-10-28, End */
    /*lint +e730 修改人:l60609;检视人:z60575;原因:两个线程会同时写该全局变量  */
#endif

    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
    if (0 == pstVcomDev->current_len)
    {
        g_stAppVcomDebugInfo.ulReadLenErr[ucIndex]++;
    }
    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, wait_event 222,flag:%d. ", pstVcomDev->ulReadWakeUpFlg);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 获取信号量 */
    /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
    down(&pstVcomCtx->pstAppVcomDevEntity->stMsgSendSem);
    /* Modified by j00174725 for appvcom init, 2013-8-1, end */

    if (count > pstVcomDev->current_len)
    {
        count = pstVcomDev->current_len;
    }

    if (copy_to_user(buf, pstVcomDev->pucAppVcomMem, (VOS_ULONG)count))
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Read, copy_to_user fail. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        /* 释放信号量 */
        /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
        up(&pstVcomCtx->pstAppVcomDevEntity->stMsgSendSem);
        /* Modified by j00174725 for appvcom init, 2013-8-1, end */
        return APP_VCOM_ERROR;
    }

    if ((pstVcomDev->current_len - count) > 0)
    {
        /* FIFO数据前移 */
        memmove(pstVcomDev->pucAppVcomMem, (pstVcomDev->pucAppVcomMem + count), (pstVcomDev->current_len - count));

        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, FIFO move. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
    }

    /* 有效数据长度减小*/
    pstVcomDev->current_len -= count;

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Read, read %d bytes, current_len:%d. ", count, pstVcomDev->current_len);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 释放信号量 */
    /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
    up(&pstVcomCtx->pstAppVcomDevEntity->stMsgSendSem);
    /* Modified by j00174725 for appvcom init, 2013-8-1, end */

    return (ssize_t)count;
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, End */
}

/*****************************************************************************
 函 数 名  : APP_VCOM_Write
 功能描述  : 虚拟串口写操作
 输入参数  : struct file       *stFilp
             const char __user *buf
             size_t             count
             loff_t            *ppos
 输出参数  : 无
 返 回 值  : ssize_t
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年10月18日
    作    者   : sunshaohua
    修改内容   : 新生成函数
  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I
  3.日    期   : 2013年10月25日
    作    者   : j00177245
    修改内容  :  增加appvcom可维可测记录到文件
  4.日    期   : 2014年4月22日
    作    者   : A00165503
    修改内容   : DTS2014042208020: 增加APPVCOM9和APPVCOM12的缓存处理
*****************************************************************************/
ssize_t APP_VCOM_Write(
    struct file                        *stFilp,
    const char __user                  *buf,
    size_t                              count,
    loff_t                             *ppos
)
{
    VOS_UINT8                          *pucDataBuf;
    VOS_INT                             iRst;
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDev;
    struct cdev                        *pstCdev;
    VOS_UINT                            ulDevMajor;
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;

    /* 获得设备结构体指针 */
    pstVcomDev = stFilp->private_data;

    /* 获得设备主设备号 */
    pstCdev = &(pstVcomDev->stAppVcomDev);
    ulDevMajor = MAJOR(pstCdev->dev);

    /* 获得设备在全局变量中的索引值 */
    ucIndex = APP_VCOM_GetIndexFromMajorDevId(ulDevMajor);

    if(ucIndex >= APP_VCOM_MAX_NUM)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Write, ucIndex fail. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return APP_VCOM_ERROR;
    }

    /* 获得全局变量地址 */
    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

    /* 申请内存 */
    pucDataBuf = kmalloc(count, GFP_KERNEL);
    if (VOS_NULL_PTR == pucDataBuf )
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Write, kmalloc fail. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        return APP_VCOM_ERROR;
    }

    /* buffer清零 */
    VOS_MemSet(pucDataBuf, 0x00, (VOS_SIZE_T)count);

    if (copy_from_user(pucDataBuf, buf, (VOS_ULONG)count))
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Write, copy_from_user fail. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        kfree(pucDataBuf);
        return APP_VCOM_ERROR;
    }

    /* Added by A00165503 for DTS2014042208020, 2014-04-22, Begin */
#if (FEATURE_ON == FEATURE_VCOM_EXT)
    if ((APP_VCOM_DEV_INDEX_9 == ucIndex) || (APP_VCOM_DEV_INDEX_12 == ucIndex))
    {
        down(&pstVcomCtx->pstAppVcomDevEntity->stWrtSem);

        if (VOS_NULL_PTR != pstVcomCtx->pstAppVcomDevEntity->pucWrtBuffer)
        {
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
            APP_VCOM_TRACE_NORM(ucIndex, "APP_VCOM_Write: free buff. ");
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

            kfree(pstVcomCtx->pstAppVcomDevEntity->pucWrtBuffer);
            pstVcomCtx->pstAppVcomDevEntity->pucWrtBuffer   = VOS_NULL_PTR;
            pstVcomCtx->pstAppVcomDevEntity->ulWrtBufferLen = 0;
        }

        if (VOS_NULL_PTR == pstVcomCtx->pSendUlAtFunc)
        {
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
            APP_VCOM_TRACE_NORM(ucIndex, "APP_VCOM_Write: save buff. ");
            /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

            pstVcomCtx->pstAppVcomDevEntity->pucWrtBuffer   = pucDataBuf;
            pstVcomCtx->pstAppVcomDevEntity->ulWrtBufferLen = count;
            up(&pstVcomCtx->pstAppVcomDevEntity->stWrtSem);
            return (ssize_t)count;
        }

        up(&pstVcomCtx->pstAppVcomDevEntity->stWrtSem);
    }
#endif
    /* Added by A00165503 for DTS2014042208020, 2014-04-22, End */

    /* 调用回调函数处理buf中的AT码流*/
    if (VOS_NULL_PTR == pstVcomCtx->pSendUlAtFunc)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Write, pSendUlAtFunc is null. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        kfree(pucDataBuf);
        return APP_VCOM_ERROR;
    }

    /* Modified by l00373346 for DTS2017041014735, 2017-04-18, Begin */
    mutex_lock(&pstVcomDev->stMutex);

    iRst = pstVcomCtx->pSendUlAtFunc(ucIndex, pucDataBuf, (VOS_UINT32)count);
    if (VOS_OK != iRst)
    {
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
        g_stAppVcomDebugInfo.ulAtCallBackErr[ucIndex]++;
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(ucIndex, "APP_VCOM_Write, AT_RcvFromAppCom fail. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        /* Added by l00373346 for DTS2017041014735, 2017-04-18, Begin */
        mutex_unlock(&pstVcomDev->stMutex);
        /* Added by l00373346 for DTS2017041014735, 2017-04-18, End */
        kfree(pucDataBuf);

        return APP_VCOM_ERROR;
    }

    mutex_unlock(&pstVcomDev->stMutex);
    /* Modified by l00373346 for DTS2017041014735, 2017-04-18, End */

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Write, write %d bytes, AT_RcvFromAppCom Success.",count);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 释放内存 */
    kfree(pucDataBuf);

    return (ssize_t)count;
}

/* Added by A00165503 for DTS2013080604846, 2013-08-06, Begin */
/*****************************************************************************
 函 数 名  : APP_VCOM_Poll
 功能描述  : 虚拟串口POLL
 输入参数  : struct file *fp
             struct poll_table_struct *wait
 输出参数  : 无
 返 回 值  : 0
             POLLIN | POLLRDNORM
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年8月6日
    作    者   : A00165503
    修改内容   : 新生成函数
*****************************************************************************/
unsigned int APP_VCOM_Poll(struct file *fp, struct poll_table_struct *wait)
{
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDev = VOS_NULL_PTR;
    unsigned int                        mask = 0;

    struct cdev                        *pstCdev;
    VOS_UINT                            ulDevMajor;
    VOS_UINT8                           ucIndex;

    pstVcomDev = fp->private_data;

    pstCdev = &(pstVcomDev->stAppVcomDev);
    ulDevMajor = MAJOR(pstCdev->dev);
    ucIndex = APP_VCOM_GetIndexFromMajorDevId(ulDevMajor);

    poll_wait(fp, &pstVcomDev->Read_Wait, wait);

    if (0 != pstVcomDev->current_len)
    {
        mask |= POLLIN | POLLRDNORM;
    }

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(ucIndex, "APP_VCOM_Poll, mask = %d. ", mask);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    return mask;
}
/* Added by A00165503 for DTS2013080604846, 2013-08-06, End */

/*****************************************************************************
 函 数 名  : APP_VCOM_Send
 功能描述  : 接收AT模块的码流，写入设备中
 输入参数  : APP_VCOM_DEV_INDEX_UINT8 enDevIndex
             VOS_UINT8  *pData
             VOS_UINT32 uslength
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2011年12月20日
    作    者   : lijun 00171473
    修改内容   : 新生成函数
  2.日    期   : 2012年11月23日
    作    者   : z00220246
    修改内容   : DSDA Phase I
  3.日    期   : 2013年08月01日
    作    者   : j00177245
    修改内容   : 调整appvcom初始化时序
  4.日    期   : 2013年10月25日
    作    者   : j00177245
    修改内容   : 增加appvcom可维可测记录到文件
  5.日    期   : 2014年4月22日
    作    者   : A00165503
    修改内容   : DTS2014042208020: 增加APPVCOM9和APPVCOM12的缓存处理
*****************************************************************************/
VOS_UINT32  APP_VCOM_Send (
    APP_VCOM_DEV_INDEX_UINT8            enDevIndex,
    VOS_UINT8                          *pData,
    VOS_UINT32                          uslength
)
{
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, begin */
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDev;
    /* Added by A00165503 for DTS2014042208020, 2014-04-22, Begin */
#if (FEATURE_ON == FEATURE_VCOM_EXT)
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;
#endif
    /* Added by A00165503 for DTS2014042208020, 2014-04-22, End */

    if (enDevIndex >= APP_VCOM_MAX_NUM)
    {
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
        g_stAppVcomDebugInfo.ulDevIndexErr++;
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(enDevIndex, "APP_VCOM_Send, enDevIndex is error. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */
        return VOS_ERR;
    }

    /* Added by A00165503 for DTS2014042208020, 2014-04-22, Begin */
#if (FEATURE_ON == FEATURE_VCOM_EXT)
    pstVcomCtx = APP_VCOM_GetVcomCtxAddr(enDevIndex);
    if (VOS_NULL_PTR == pstVcomCtx)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(enDevIndex, "APP_VCOM_Send, pstVcomCtx is null. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        return VOS_ERR;
    }
#endif
    /* Added by A00165503 for DTS2014042208020, 2014-04-22, End */

    /* 获得设备实体指针 */
    pstVcomDev = APP_VCOM_GetAppVcomDevEntity(enDevIndex);

    if (VOS_NULL_PTR == pstVcomDev)
    {
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
        g_stAppVcomDebugInfo.ulVcomDevErr[enDevIndex]++;
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_ERR(enDevIndex, "APP_VCOM_Send, pstVcomDev is null. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        return VOS_ERR;
    }

    /* Added by A00165503 for DTS2014042208020, 2014-04-22, Begin */
#if (FEATURE_ON == FEATURE_VCOM_EXT)
    if ((APP_VCOM_DEV_INDEX_9 == enDevIndex) || (APP_VCOM_DEV_INDEX_12 == enDevIndex))
    {
        down(&pstVcomDev->stWrtSem);

        if (VOS_NULL_PTR != pstVcomDev->pucWrtBuffer)
        {
            if (VOS_NULL_PTR != pstVcomCtx->pSendUlAtFunc)
            {
                /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
                APP_VCOM_TRACE_NORM(enDevIndex, "APP_VCOM_Send: handle buff. ");
                /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

                (VOS_VOID)pstVcomCtx->pSendUlAtFunc(enDevIndex,
                                        pstVcomDev->pucWrtBuffer,
                                        pstVcomDev->ulWrtBufferLen);

                kfree(pstVcomDev->pucWrtBuffer);
                pstVcomDev->pucWrtBuffer   = VOS_NULL_PTR;
                pstVcomDev->ulWrtBufferLen = 0;
            }
        }

        up(&pstVcomDev->stWrtSem);
    }
#endif
    /* Added by A00165503 for DTS2014042208020, 2014-04-22, End */

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(enDevIndex, "APP_VCOM_Send, uslength:%d, current_len:%d. ", uslength, pstVcomDev->current_len);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 获取信号量 */
    /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
    down(&pstVcomDev->stMsgSendSem);
    /* Modified by j00174725 for appvcom init, 2013-8-1, end */

    /* 队列满则直接返回 */
    if (g_astAppVcomCogfigTab[enDevIndex].ulAppVcomMemSize == pstVcomDev->current_len)
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_NORM(enDevIndex, "APP_VCOM_Send: VCOM MEM FULL. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
        g_stAppVcomDebugInfo.ulMemFullErr[enDevIndex]++;
        /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

        /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
        up(&pstVcomDev->stMsgSendSem);
        /* Modified by j00174725 for appvcom init, 2013-8-1, end */
        return VOS_ERR;
    }

    /* 发送数据大于剩余Buffer大小 */
    if (uslength > (g_astAppVcomCogfigTab[enDevIndex].ulAppVcomMemSize - pstVcomDev->current_len))
    {
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
        APP_VCOM_TRACE_NORM(enDevIndex, "APP_VCOM_Send: data more than Buffer. ");
        /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

        uslength = g_astAppVcomCogfigTab[enDevIndex].ulAppVcomMemSize - (VOS_UINT32)pstVcomDev->current_len;
    }

    /* 复制到BUFFER */
    memcpy(pstVcomDev->pucAppVcomMem + pstVcomDev->current_len, pData, uslength);
    pstVcomDev->current_len += uslength;

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(enDevIndex, "APP_VCOM_Send, written %d byte(s), new len: %d. ", uslength, pstVcomDev->current_len);
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    /* 释放信号量 */
    /* Modified by j00174725 for appvcom init, 2013-8-1, begin */
    up(&pstVcomDev->stMsgSendSem);
    /* Modified by j00174725 for appvcom init, 2013-8-1, end */
#ifdef __PC_UT__

#else
    wake_up_interruptible(&pstVcomDev->Read_Wait);
#endif

    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
    if (0 == pstVcomDev->current_len)
    {
        g_stAppVcomDebugInfo.ulSendLenErr[enDevIndex]++;
    }
    /* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
    APP_VCOM_TRACE_INFO(enDevIndex, "APP_VCOM_Send, wakeup. ");
    /* Modified by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

    return VOS_OK;
    /* Modified by z00220246 for DSDA Phase I, 2012-11-23, End */
}

/* Added by j00174725 for Appvcom Debug Project, 2013-10-25, begin */
/*****************************************************************************
 函 数 名  : APP_VCOM_ShowDebugInfo
 功能描述  : 打印appvcom的可维可测信息
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年09月21日
    作    者   : j00174725
    修改内容  : 新增函数
*****************************************************************************/
VOS_VOID APP_VCOM_ShowDebugInfo(VOS_VOID)
{
    int                                 i;
    vos_printf("App Vcom Debug Info:");
    vos_printf("Index Err: %d\r\n", g_stAppVcomDebugInfo.ulDevIndexErr);

    for (i = 0; i < APP_VCOM_MAX_NUM; i++)
    {
        vos_printf("\r\n");
        vos_printf("AppVcom[%d] Callback Function Return Err Num: %d\r\n", i, g_stAppVcomDebugInfo.ulAtCallBackErr[i]);
        vos_printf("AppVcom[%d] Mem Full Num:                     %d\r\n", i, g_stAppVcomDebugInfo.ulMemFullErr[i]);
        vos_printf("AppVcom[%d] Read Data Length = 0 Num:         %d\r\n", i, g_stAppVcomDebugInfo.ulReadLenErr[i]);
        vos_printf("AppVcom[%d] Send Data Length = 0 Num:         %d\r\n", i, g_stAppVcomDebugInfo.ulSendLenErr[i]);
        vos_printf("AppVcom[%d] Get App Vcom Dev Entity Err Num:  %d\r\n", i, g_stAppVcomDebugInfo.ulVcomDevErr[i]);
    }
}
/* Added by j00174725 for Appvcom Debug Project, 2013-10-25, end */

#if (VOS_WIN32 == VOS_OS_VER)
/*****************************************************************************
 函 数 名  : APP_VCOM_FreeMem
 功能描述  : APPVCOM 分配内存释放函数
 输入参数  : 无
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2013年12月24日
    作    者   : j00174725
    修改内容  : 新增函数
*****************************************************************************/
VOS_VOID APP_VCOM_FreeMem(VOS_VOID)
{
    APP_VCOM_DEV_CTX_STRU              *pstVcomCtx;
    VOS_UINT8                           ucIndex;
    APP_VCOM_DEV_ENTITY_STRU           *pstVcomDevp;

    pstVcomCtx = VOS_NULL_PTR;
    pstVcomDevp  = VOS_NULL_PTR;

   for (ucIndex = 0; ucIndex < APP_VCOM_MAX_NUM; ucIndex++)
    {
        pstVcomCtx = APP_VCOM_GetVcomCtxAddr(ucIndex);

        pstVcomDevp = pstVcomCtx->pstAppVcomDevEntity;

        if (VOS_NULL_PTR != pstVcomDevp->pucAppVcomMem)
        {
            free(pstVcomDevp->pucAppVcomMem);
            pstVcomDevp->pucAppVcomMem = VOS_NULL_PTR;

        }

        if(VOS_NULL_PTR != pstVcomCtx->pstAppVcomDevEntity)
        {
            free(pstVcomCtx->pstAppVcomDevEntity);
            pstVcomCtx->pstAppVcomDevEntity = VOS_NULL_PTR;
        }
    }

   return;
}
#endif

/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
/*****************************************************************************
 函 数 名  : APP_VCOM_SendDebugNvCfg
 功能描述  : 接收关于VCOM Debug 配置相关的NV项
 输入参数  : VOS_UINT32 ulAppVcomDebugNvCfg
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月03日
    作    者   : n00269697
    修改内容   : 新生成函数
*****************************************************************************/
VOS_VOID APP_VCOM_SendDebugNvCfg(
    VOS_UINT32                          ulPortIdMask,
    VOS_UINT32                          ulDebugLevel
)
{
    g_stAppVcomDebugCfg.ulPortIdMask = ulPortIdMask;
    g_stAppVcomDebugCfg.ulDebugLevel = ulDebugLevel;
}

/*****************************************************************************
 函 数 名  : APP_VCOM_MNTN_LogPrintf
 功能描述  : APP VCOM可维可测LOG输出
 输入参数  : VOS_CHAR *pcFmt
             ...
 输出参数  : 无
 返 回 值  : VOS_VOID
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月03日
    作    者   : N00269697
    修改内容   : 新生成函数
*****************************************************************************/
/*lint -esym(960,69)*/
VOS_VOID APP_VCOM_MNTN_LogPrintf(VOS_CHAR *pcFmt, ...)
{
    VOS_CHAR                            acBuf[APP_VCOM_TRACE_BUF_LEN] = {0};
    VOS_UINT32                          ulPrintLength = 0;

    /* 格式化输出BUFFER */
    APP_VCOM_LOG_FORMAT(ulPrintLength, acBuf, APP_VCOM_TRACE_BUF_LEN, pcFmt);

#if (VOS_OS_VER == VOS_LINUX)
    printk(KERN_ERR "%s", acBuf);
#endif
    return;
}
/*lint +esym(960,69)*/
/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End */

#if (VOS_LINUX == VOS_OS_VER)
#if (FEATURE_ON == FEATURE_DELAY_MODEM_INIT)
module_init(APP_VCOM_Init);
#endif
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif


