#ifndef __TAF_COMMON_H__
#define __TAF_COMMON_H__

/*============================================================================*/

/******************************************************************************/
/* Copyright (c) ,1988-2001,Huawei Tech. Co.,Ltd                              */
/* File name     :Taf_Common.h                                              */
/* Author        :zzy                                                         */
/* Description   :TAFM提供给TAF核心子模块的公共头文件                         */
/* Others        :                                                            */
/* Function List :                                                            */
/* History       :                                                            */
/*               :2005-04-13 初稿                                             */
/*
 1.日    期   : 2007年01月08日
    作    者   : h44270
    修改内容   : 问题单号:A32D07108，语音和媒体抢占音频设备导致声音异常,增加ADM模块
 2.日    期   : 2007年01月18日
    作    者   : h59254
    修改内容   : 问题单号:A32D6632
 3.日    期   : 2007年03月14日
   作    者   : d49431
   修改内容   : 问题单号:A32D06085
 4.日    期   : 2007年04月30日
   作    者   : l65478
   修改内容   : 问题单号:A32D09194
 5.日    期   : 2007年05月09日
   作    者   : 罗建 id:60022475
   修改内容   : 问题单号:A32D10838
 6.日    期   : 2007年05月11日
   作    者   : h44270
   修改内容   : 问题单号：A32D10878,合入LOG功能
 7.日    期   : 2007年08月28日
   作    者   : d49431
   修改内容   : 问题单A32D12736，去除代码中对语音相关接口的调用
 8.日    期   : 2008年8月25日
   作    者   : 傅映君 62575
   修改内容   : 问题单号 AT2D05096,AT查选命令，TAF下发到其它模块时，长度填写不正确
 9.日    期   : 2011年04月23日
   作    者   : L00171473
   修改内容   : for V7R1 porting, 清除宏重定义的WARNING
*/
/******************************************************************************/

/******************************************************************************/
#include "vos.h"
#include "PsTypeDef.h"
#include "PsCommonDef.h"
#include "v_id.h"
#include "product_config.h"
#include "TafClientApi.h"
#include "om.h"




/******************************************************************************/

/******************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
/*========================================================*/

/* 标志无语音业务的编译开关，问题单A32D12736 */
#define  TAF_FEATURE_NO_VOICE_SERVICE
/*TAFM上报结构中option位段字节总个数，
子模块可以从结构起始地址memset TAF_EVT_OP_LEN个字节达到赋初值目的*/
#define   TAF_EVT_OP_LEN   4

/*----------TAFM公共接口----------*/
/*TAF各模块ID*/
#ifndef SUBMOD_NULL
#define  SUBMOD_NULL 0
#endif
#define  TAF_CCA     1
#define  TAF_APS     2
#define  TAF_SMA     3
#define  TAF_SSA     4
#define  TAF_MMA     5
#define   TAF_ALL_SUBMODULE   0xFF    /*所有子模块*/

/*临时，V200要删除*/
#define   TAF_TAFM             0
#define   TAF_SPEECH           1
#define   TAF_STATUS           2
#define   TAF_MAX_SPEECH_TI    14


/*打印级别，重新映射到OM定义的宏*/
#define    INFO_PRINT      PS_PRINT_INFO
#define    NORMAL_PRINT    PS_PRINT_NORMAL
#define    WARNING_PRINT   PS_PRINT_WARNING
#define    ERROR_PRINT     PS_PRINT_ERROR



#define TAF_PRINT(  Module,  PrintLevel,  Str)     \
           PS_LOG(Module, 0, PrintLevel, Str)

#define TAFM_PRINT(Str)     \
           PS_LOG(TAF_TAFM, 0, ERROR_PRINT, Str)

#define TAFM_PRINT1(Str, Para1)     \
           PS_LOG1(TAF_TAFM, 0, ERROR_PRINT, Str, Para1)

#define TAFM_PRINT2(Str, Para1, Para2)    \
           PS_LOG2(TAF_TAFM, 0, ERROR_PRINT, Str, Para1, Para2)





/*其他接口*/
/*参数设置结果上报*/
VOS_VOID Taf_ParaSetResult( VOS_UINT16           ClientId,
                        VOS_UINT8                  OpId,
                        TAF_PARA_SET_RESULT     Result,
                            TAF_PARA_TYPE     QueryPara,
                        VOS_VOID                    *pPara );


/*******************************************************************************/

#define SMA_INFO_LOG(String)            PS_LOG(WUEPS_PID_TAF,  TAF_SMA, PS_PRINT_INFO,    String)
#define SMA_NORM_LOG(String)            PS_LOG(WUEPS_PID_TAF,  TAF_SMA, PS_PRINT_NORMAL,  String)
#define SMA_WARN_LOG(String)            PS_LOG(WUEPS_PID_TAF,  TAF_SMA, PS_PRINT_WARNING, String)
#define SMA_ERR_LOG(String)             PS_LOG(WUEPS_PID_TAF,  TAF_SMA, PS_PRINT_ERROR,   String)
#define SMA_LOG1(String, Para1)         PS_LOG1(WUEPS_PID_TAF, TAF_SMA, PS_PRINT_INFO,    String, Para1)
#define SMA_LOG2(String, Para1, Para2)  PS_LOG2(WUEPS_PID_TAF, TAF_SMA, PS_PRINT_NORMAL,  String, Para1, Para2)

/*有返回值的消息创建宏定义*/
#define PS_ALLOC_MSG_RTN_FAIL(pMsg, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMsg = (VOS_VOID *)PS_ALLOC_MSG((ulPid),(ulLen) - VOS_MSG_HEAD_LENGTH))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_AllocMsg ERR! len:",(VOS_INT32)(ulLen));\
        return  VOS_ERR;\
    }

/*未定义消息结构,申请消息内存,申请的内存长度不带消息报头长度*/
#define PS_ALLOC_MSG_RTN_FAIL_WITHOUT_HEADER_LEN(pMsg, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMsg = (VOS_VOID *)PS_ALLOC_MSG((ulPid),(ulLen)))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_AllocMsg ERR! len:",(VOS_INT32)(ulLen));\
        return  VOS_ERR;\
    }

/*未定义消息结构,申请消息内存,申请的内存长度不带消息报头长度*/
#define PS_ALLOC_MSG_WITHOUT_HEADER_LEN(pMsg, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMsg = (VOS_VOID *)PS_ALLOC_MSG((ulPid),(ulLen)))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_AllocMsg ERR! len:",(VOS_INT32)(ulLen));\
        return;\
    }

/*不退出当前函数的消息创建宏定义*/
#define PS_ALLOC_MSG_UNRTN(pMsg, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMsg = (VOS_VOID *)PS_ALLOC_MSG((ulPid),(ulLen) - VOS_MSG_HEAD_LENGTH))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_AllocMsg ERR! len:",(VOS_INT32)(ulLen));\
    }

/*不退出当前函数，未定义消息结构,申请消息内存,申请的内存长度不带消息报头长度*/
#define PS_ALLOC_MSG_UNRTN_WITHOUT_HEADER_LEN(pMsg, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMsg = (VOS_VOID *)PS_ALLOC_MSG((ulPid),(ulLen)))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_AllocMsg ERR! len:",(VOS_INT32)(ulLen));\
    }

/*消息释放宏定义*/
#define PS_FREEMSG(ulPID,pMsg)\
        VOS_FreeMsg((ulPID), (pMsg));

/*有返回值内存申请宏定义*/
#define PS_MEM_ALLOC_RTN_FAIL(pMem, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMem = (VOS_VOID *)VOS_MemAlloc((ulPid), DYNAMIC_MEM_PT, (ulLen)))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_MemAlloc ERR! len:",(VOS_INT32)(ulLen));\
        return VOS_ERR;\
    }

/*不退出当前函数的内存申请宏定义*/
#define PS_MEM_ALLOC_UNRTN(pMem, ulPid , ulLen) \
    if(VOS_NULL_PTR == (pMem = (VOS_VOID *)VOS_MemAlloc((ulPid), DYNAMIC_MEM_PT, (ulLen)))) \
    {\
        PS_LOG1((ulPid), PS_SUBMOD_NULL, PS_PRINT_ERROR," VOS_MemAlloc ERR! len:",(VOS_INT32)(ulLen));\
    }

/* Added by z00214637 for DSDA GUNAS C CORE, 2012-12-29, begin */
#define TAF_COMM_BUILD_USIM_GET_FILE_INFO(pstGetfileInfo, enAppTypePara, usEfIdPara, ucRecordNumPara) \
{ \
    (pstGetfileInfo)->usEfId       = usEfIdPara; \
    (pstGetfileInfo)->ucRecordNum  = ucRecordNumPara; \
    (pstGetfileInfo)->enAppType    = enAppTypePara; \
    (pstGetfileInfo)->ucRsv        = 0; \
}

#define TAF_COMM_BUILD_USIM_SET_FILE_INFO(pstSetfileInfo, enAppTypePara, usEfIdPara, ucRecordNumPara, ulEfLenPara, pucEfPara) \
{ \
    (pstSetfileInfo)->usEfId       = usEfIdPara; \
    (pstSetfileInfo)->ucRecordNum  = ucRecordNumPara; \
    (pstSetfileInfo)->enAppType    = enAppTypePara; \
    (pstSetfileInfo)->ucRsv        = 0; \
    (pstSetfileInfo)->ulEfLen      = ulEfLenPara; \
    (pstSetfileInfo)->pucEfContent = pucEfPara; \
}
/* Added by z00214637 for DSDA GUNAS C CORE, 2012-12-29, end */

/*========================================================*/
#ifdef __cplusplus
}
#endif
/******************************************************************************/

/*============================================================================*/
#endif          /* __TAF_COMMON_H__ */

