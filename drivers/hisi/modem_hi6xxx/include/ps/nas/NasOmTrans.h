/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : NasOmTrans.h
  版 本 号   : 初稿
  作    者   : l00171473
  生成日期   : 2012年04月27日
  最近修改   :
  功能描述   : 
  函数列表   :
  修改历史   :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 创建文件, DTS2011102200898, 由于TRANS消息和EVENT消息的顶级结构不同, 
                 为了ASN解析TRANS消息, 将该头文件中的TRANS消息相关部分提取到新增的
                 NasOmTrans.h 中

******************************************************************************/

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, begin */
#include  "MmcLmmInterface.h"
/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, end */
#ifndef __NASOMTRANS_H__
#define __NASOMTRANS_H__


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/

#define LEN_PTMSI                       4
#define LEN_TMSI                        4


#define LEN_MOBILE                      16

#define MAX_AVAILABEL_PLMN_NUM          16

#define NAS_OM_PDP_CONTEXT_MAX          11                                      /* 最大的PDP上下文的个数 */

#define SM_MAX_LENGTH_OF_APN            101
#define SM_IP_ADDR_LEN                  4
#define SM_IPV6_ADDR_LEN                16

/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, begin */
#define NAS_MS_ID_GUTI_VALID            (1)
#define NAS_MS_ID_PTMSI_IMSI_VALID      (2)
#define NAS_MAX_TIMER_EVENT             (100)
#define NAS_MAX_IMSI_LEN                (9)
/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, end */
/*增加NAS和OM之间的TRANS_PRIMID*/
#define NAS_OM_TRANS_PRIMID             0x5001


/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
 枚举名    : NAS_OM_TRANS_MSG_TYPE_ENUM
 结构说明  : NAS透传消息类型枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 调整TRANS消息相关结构到新增头文件, 以支持ANS解析

 2.日    期   : 2012年11月06日
   作    者   : l00198894
   修改内容   : Probe路测工具对接项目新增数据业务相关消息
*****************************************************************************/
enum NAS_OM_TRANS_MSG_TYPE_ENUM
{
    ID_NAS_OM_MM_INQUIRE                                    = 0xC001,
    ID_NAS_OM_MM_CONFIRM                                    = 0xC002,   /*_H2ASN_MsgChoice NAS_OM_MM_CONFIRM_STRU*/
    
    ID_NAS_OM_QOS_INQUIRE                                   = 0xC003,
    ID_NAS_OM_QOS_CONFIRM                                   = 0xC004,   /*_H2ASN_MsgChoice NAS_QOS_STRUCT*/
    
    ID_NAS_OM_PDP_CONTEXT_INQUIRE                           = 0xC005,
    ID_NAS_OM_PDP_CONTEXT_CONFIRM                           = 0xC006,   /*_H2ASN_MsgChoice NAS_OM_PDP_CONTEXT_STRU*/

    /*增加GSM CODEC类型的设置*/
    ID_NAS_OM_SET_CODEC_TYPE_REQUIRE                        = 0xC007,   /*_H2ASN_MsgChoice NAS_OM_SET_GSM_CODEC_CONFIG_REQ_STRU*/ 
    ID_NAS_OM_SET_CODEC_TYPE_CONFIRM                        = 0xC008,   /*_H2ASN_MsgChoice NAS_OM_SET_GSM_CODEC_CONFIG_CNF_STRU*/

    /*增加当前使用CODEC类型和GSM CODEC集合的查询*/
    ID_NAS_OM_CODEC_TYPE_INQUIRE                            = 0xC009,
    ID_NAS_OM_CODEC_TYPE_CONFIRM                            = 0xC00a,   /*_H2ASN_MsgChoice NAS_OM_CURR_CODEC_TYPE_ENUM_U8*/

    /* Added by l00198894 for PROBE Project, 2012/11/06, begin */
    /* 查询数据业务流量、速率等 */
    ID_NAS_OM_SET_DSFLOW_RPT_REQ                            = 0xC00B,   /*_H2ASN_MsgChoice NAS_OM_SET_DSFLOW_RPT_REQ_STRU*/
    ID_NAS_OM_SET_DSFLOW_RPT_CNF                            = 0xC00C,   /*_H2ASN_MsgChoice NAS_OM_SET_DSFLOW_RPT_CNF_STRU*/
    ID_NAS_OM_DSFLOW_RPT_IND                                = 0xC00D,   /*_H2ASN_MsgChoice NAS_OM_DSFLOW_RPT_IND_STRU*/
    /* Added by l00198894 for PROBE Project, 2012/11/06, end */

    /* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, begin */
    ID_NAS_OM_SMS_INQUIRE                                   = 0xC00E,
    ID_NAS_OM_SMS_CONFIRM                                   = 0xC00F,   

    ID_NAS_OM_CONFIG_TIMER_REPORT_REQ                       = 0xC010,
    ID_NAS_OM_CONFIG_TIMER_REPORT_CNF                       = 0xC011,  
    /* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, begin */

    ID_NAS_OM_TRANS_BUTT
};

typedef VOS_UINT16 NAS_OM_TRANS_MSG_TYPE_ENUM_UINT16;


/*****************************************************************************
 枚举名    : NAS_OM_MM_STATE_ENUM
 结构说明  : MM 状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 调整TRANS消息相关结构到新增头文件, 以支持ANS解析
*****************************************************************************/
enum NAS_OM_MM_STATE_ENUM
{
    STATE_MM_NULL                                           = 0,
    STATE_MM_IDLE                                           = 1,
    WAIT_FOR_OUTGOING_MM_CONNECT                            = 9,
    MM_CONNECT_ACT                                          = 10,
    WAIT_FOR_NET_COMMAND                                    = 11,
    WAIT_FOR_RR_CONNECT_MM_CONNECT                          = 12,
    WAIT_FOR_REEST_WAIT_FOR_REEST_REQ                       = 13,
    WAIT_FOR_REEST_WAIT_FOR_EST_CNF                         = 14,
    WAIT_FOR_RR_ACT                                         = 15,
    WAIT_FOR_ADDITIONAL_OUTGOING_MM_CONNECT                 = 16,
    LOCATION_UPDATING_PEND                                  = 17,
    IMSI_DETACH_PEND                                        = 18,
    MM_WAIT_FOR_ATTCH                                       = 19,
    WAIT_FOR_RR_CONNECT_LOCATION_UPDATING                   = 22,
    LU_INITIATED                                            = 23,
    LU_REJECTED                                             = 24,
    WAIT_FOR_RR_CONNECT_IMSI_DETACH                         = 25,
    IMSI_DETACH_INITIATE                                    = 26,
    PROCESS_CM_SERV_PROMPT                                  = 27,
    TEST_CONTROL_ACT                                        = 31,
    MM_INTER_RAT_CHG                                        = 32,
    MM_STATE_BUTT
};
typedef VOS_UINT8 NAS_OM_MM_STATE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : MM_UPDATE_STATUS_ENUM
 结构说明  : MM UPDATE 状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 调整TRANS消息相关结构到新增头文件, 以支持ANS解析
 2.日    期   : 2014年6月16日
   作    者   : w00176964
   修改内容   : DTS2014061006131:MM增加新的U值
*****************************************************************************/
enum MM_UPDATE_STATUS_ENUM
{
    UPDATE_STATUS_U1                    = 0,                                    /* U1 */
    UPDATE_STATUS_U2                    = 1,                                    /* U2 */
    UPDATE_STATUS_U3                    = 2,                                    /* U3 */
    /* Added by w00176964 for DTS2014061006131, 2014-6-16, begin */    
    UPDATE_STATUS_U4                    = 3,                                    /* U4 */
    /* Added by w00176964 for DTS2014061006131, 2014-6-16, end */
    MM_UPDATE_STATUS_BUTT
};
typedef VOS_UINT8 MM_UPDATE_STATUS_ENUM_UINT8;

/* 以下二个枚举宏与MS VisualStudio 中定义冲突，注意值不同带来影响 */
#ifdef __NAS_OM_UT__
#ifdef DEREGISTERED
#undef DEREGISTERED
#endif
#ifdef REGISTERED
#undef REGISTERED
#endif
#endif

/*****************************************************************************
 枚举名    : NAS_OM_GMM_STATE_ENUM
 结构说明  : GMM 状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 调整TRANS消息相关结构到新增头文件, 以支持ANS解析
*****************************************************************************/
enum NAS_OM_GMM_STATE_ENUM
{
    STATE_GMM_NULL                      = 0x00,
    REGISTERED_INITIATED                = 0x01,
    DEREGISTERED_INITIATED              = 0x02,
    ROUTING_AREA_UPDATING_INITIATED     = 0x03,
    SERVICE_REQUEST_INITIATED           = 0x04,
    TC_ACTIVE                           = 0x05,
    GPRS_SUSPENSION                     = 0x06,
    DEREGISTERED                        = 0x10,
    REGISTERED                          = 0X20,
    SUSPENDED_NORMAL_SERVICE            = 0x30,
    SUSPENDED_GPRS_SUSPENSION           = 0x31,
    SUSPENDED_WAIT_FOR_SYSINFO          = 0x32,
    GMM_STATE_BUTT
};
typedef VOS_UINT8 NAS_OM_GMM_STATE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : GMM_UPDATE_STATUS_ENUM
 结构说明  : GMM UPDATE 状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum GMM_UPDATE_STATUS_ENUM
{
    UPDATE_STATUS_GU1                   = 0,                                    /* GU1 */
    UPDATE_STATUS_GU2                   = 1,                                    /* GU2 */
    UPDATE_STATUS_GU3                   = 2,                                    /* GU3 */
    GMM_UPDATE_STATUS_BUTT
};
typedef VOS_UINT8 GMM_UPDATE_STATUS_ENUM_UINT8;

/*****************************************************************************
 枚举名    : PLMN_SEL_MODE_ENUM
 结构说明  : 选网模式枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum PLMN_SEL_MODE_ENUM
{
    PLMN_SEL_MODE_AUTO                  = 0,
    PLMN_SEL_MODE_MANUAL                = 1,
    PLMN_SEL_MODE_BUTT
};
typedef VOS_UINT8 PLMN_SEL_MODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : UE_OPERATE_MODE_ENUM
 结构说明  : 选网模式
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum UE_OPERATE_MODE_ENUM
{
    UE_OPERATE_MODE_NULL                = 0,
    UE_OPERATE_MODE_A                   = 1,
    UE_OPERATE_MODE_CG                  = 2,
    UE_OPERATE_MODE_CC                  = 3,
    UE_OPERATE_MODE_B                   = 4,
    UE_OPERATE_MODE_BUTT
};
typedef VOS_UINT8 UE_OPERATE_MODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NET_OPERATE_MODE_ENUM
 结构说明  : 网络模式枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum NET_OPERATE_MODE_ENUM
{
    NET_OPERATE_MODE_1                  = 0,
    NET_OPERATE_MODE_2                  = 1,
    NET_OPERATE_MODE_3                  = 2,
    NET_OPERATE_MODE_BUTT
};
typedef VOS_UINT8 NET_OPERATE_MODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NET_TYPE_ENUM
 结构说明  : 接入模式枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum NET_TYPE_ENUM
{
    NET_TYPE_GSM                        = 0,
    NET_TYPE_WCDMA                      = 1,
    NET_TYPE_LTE                        = 2,
    NET_TYPE_BUTT
};
typedef VOS_UINT8 NET_TYPE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NAS_OM_MM_SUB_STATE_ENUM
 结构说明  : MM 子状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
 2.日    期   : 2014年6月16日
   作    者   : w00176964
   修改内容   : DTS2014061006131:MM增加新的协议状态
*****************************************************************************/
enum NAS_OM_MM_SUB_STATE_ENUM
{
    NO_CELL_AVAILABLE                   = 1,
    PLMN_SEARCH                         = 2,
    NORMAL_SERVICE                      = 3,
    LIMITED_SERVICE                     = 4,
    ATTEMPTING_TO_UPDATE                = 5,
    LOCATION_UPDATE_NEEDED              = 6,
    PLMN_SEARCH_NORMAL_SERVICE          = 7,
    NO_IMSI                             = 8,
    /* Added by y00245242 for V3R3C60_eCall项目, 2014-6-11, begin */
    ECALL_INACTIVE                      = 9,
    /* Added by y00245242 for V3R3C60_eCall项目, 2014-6-11, end */
    MM_SUB_STATE_BUTT
};
typedef VOS_UINT8 NAS_OM_MM_SUB_STATE_ENUM_UINT8;


/*****************************************************************************
 枚举名    : NAS_OM_GMM_SUB_STATE_ENUM
 结构说明  : GMM 子状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : DTS2011102200898, 为了TRANS消息的ANS解析, 新增头文件
*****************************************************************************/
enum NAS_OM_GMM_SUB_STATE_ENUM
{
    DEREGISTERED_NORMAL_SERVICE         = 0x10,
    DEREGISTERED_LIMITED_SERVICE        = 0x11,
    DEREGISTERED_ATTACH_NEEDED          = 0x12,
    DEREGISTERED_ATTEMPTING_TO_ATTACH   = 0x13,
    DEREGISTERED_NO_CELL_AVAILABLE      = 0x14,
    DEREGISTERED_PLMN_SEARCH            = 0x15,
    DEREGISTERED_NO_IMSI                = 0x16,
    REGISTERED_NORMAL_SERVICE           = 0x20,
    REGISTERED_LIMITED_SERVICE          = 0x21,
    REGISTERED_UPDATE_NEEDED            = 0x22,
    REGISTERED_ATTEMPTING_TO_UPDATE     = 0x23,
    REGISTERED_NO_CELL_AVAILABLE        = 0x24,
    REGISTERED_PLMN_SEARCH              = 0x25,
    REGISTERED_ATTEMPTING_TO_UPDATE_MM  = 0x26,
    REGISTERED_IMSI_DETACH_INITIATED    = 0x27,
    REGISTERED_WAIT_FOR_RAU             = 0x28,
    GMM_SUB_STATE_BUTT
};
typedef VOS_UINT8 NAS_OM_GMM_SUB_STATE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NAS_OM_SERVICE_STATE_ENUM
 结构说明  : 服务状态枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : 
*****************************************************************************/
enum NAS_OM_SERVICE_STATE_ENUM
{
    NAS_OM_SERVICE_STATE_NO_SERVICE                         = 0,                /* 无服务状态       */
    NAS_OM_SERVICE_STATE_LIMITED_SERVICE                    = 1,                /* 限制服务状态     */
    NAS_OM_SERVICE_STATE_NORMAL_SERVICE                     = 2,                /* 正常工作状态     */
    NAS_OM_SERVICE_STATE_REGIONAL_LIMITED_SERVICE           = 3,                /* 有限制的区域服务 */
    NAS_OM_SERVICE_STATE_DEEP_SLEEP                         = 4,                /* 省电和深睡眠状态 */
    NAS_OM_SERVICE_STATE_BUTT
};
typedef VOS_UINT8 NAS_OM_SERVICE_STATE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NAS_OM_PDP_ACT_TYPE_ENUM
 结构说明  : PDP激活类型枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : 
*****************************************************************************/
enum NAS_OM_PDP_ACT_TYPE_ENUM
{
    NAS_OM_PDP_ACT_PRI                  = 0,                                    /* 主激活PDP */
    NAS_OM_PDP_ACT_SEC,                                                         /* 二次激活PDP */
    NAS_OM_PDP_ACT_BUTT                 = 0xFF
};
typedef VOS_UINT8 NAS_OM_PDP_ACT_TYPE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NAS_OM_CURR_CODEC_TYPE_ENUM
 结构说明  : CODEC类型枚举
             当前使用的CODEC类型,不和CALL模块定义的一致目的是为了匹配上报可配置的当前GSM支持的CODEC类型
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : 
*****************************************************************************/
enum NAS_OM_CURR_CODEC_TYPE_ENUM
{
    NAS_OM_CODEC_TYPE_FR                = 0x01,                                 /* full rate */
    NAS_OM_CODEC_TYPE_HR                = 0x02,                                 /* half rate */
    NAS_OM_CODEC_TYPE_EFR               = 0x04,                                 /* enhanced full rate */
    NAS_OM_CODEC_TYPE_AMR               = 0x08,                                 /* amr */
    NAS_OM_CODEC_TYPE_AMR2              = 0x10,                                 /* amr2 */
    
    /* Modified by z40661 for AMR-WB , 2012-02-09, end */
    NAS_OM_CODEC_TYPE_AMRWB             = 0x20,                                 /* amr2 */
    /* Modified by z40661 for AMR-WB , 2012-02-09, end */

    NAS_OM_CODEC_TYPE_BUTT                                                      /* invalid value */
};
typedef VOS_UINT8 NAS_OM_CURR_CODEC_TYPE_ENUM_U8;

/*****************************************************************************
 枚举名    : NAS_OM_GSM_CODEC_CONFIG_ENUM
 结构说明  : GSM CODEC类型枚举
 修改历史      :
 1.日    期   : 2012年04月27日
   作    者   : L00171473
   修改内容   : 
*****************************************************************************/
enum NAS_OM_GSM_CODEC_CONFIG_ENUM
{
    NAS_OM_GSM_CODEC_FR                 = 0x01,                                 /* FR */
    NAS_OM_GSM_CODEC_FR_HR              = 0x03,                                 /* FR+HR */
    NAS_OM_GSM_CODEC_FR_EFR             = 0x05,                                 /* FR+EFR */
    NAS_OM_GSM_CODEC_FR_AMR             = 0x09,                                 /* FR+AMR */
    NAS_OM_GSM_CODEC_FR_EFR_HR_AMR      = 0x0F,                                 /* FR+EFR+HR+AMR */
    NAS_OM_GSM_CODEC_BUTT
};
typedef VOS_UINT8 NAS_OM_GSM_CODEC_CONFIG_ENUM_U8;

/* Added by l00198894 for PROBE Project, 2012/11/06, begin */
/*******************************************************************************
 枚举名    : NAS_OM_GMM_GPRS_STATE_ENUM
 结构说明  : GMM GPRS 状态枚举
 修改历史      :
 1.日    期   : 2012年11月06日
   作    者   : l00198894
   修改内容   : Probe路测工具对接项目新增枚举
*******************************************************************************/
enum NAS_OM_GMM_GPRS_STATE_ENUM
{
    NAS_OM_GMM_GPRS_IDLE                                    = 0x00,             /* GPRS空闲态 */
    NAS_OM_GMM_GPRS_STANDBY                                 = 0x01,             /* GPRS等待态 */
    NAS_OM_GMM_GPRS_READY                                   = 0x02,             /* GPRS可用态 */
    NAS_OM_GMM_GPRS_STATE_BUTT                              = 0xFF              /* GPRS状态无效值 */
};
typedef VOS_UINT8 NAS_OM_GMM_GPRS_STATE_ENUM_UINT8;

/*******************************************************************************
 枚举名    : NAS_OM_REPORT_ACTION_ENUM
 结构说明  : NAS给OM主动上报状态枚举
 修改历史      :
 1.日    期   : 2012年11月06日
   作    者   : l00198894
   修改内容   : Probe路测工具对接项目新增枚举
*******************************************************************************/
enum NAS_OM_REPORT_ACTION_ENUM
{
    NAS_OM_REPORT_STOP                                      = 0x00,             /* 停止主动上报 */
    NAS_OM_REPORT_START                                     = 0x01,             /* 启动主动上报 */

    NAS_OM_REPORT_BUTT
};
typedef VOS_UINT8 NAS_OM_REPORT_ACTION_ENUM_UINT8;

/*******************************************************************************
 枚举名    : NAS_OM_RESULT_ENUM
 结构说明  : NAS与OM间结果错误码枚举
 修改历史      :
 1.日    期   : 2012年11月06日
   作    者   : l00198894
   修改内容   : Probe路测工具对接项目新增枚举
*******************************************************************************/
enum NAS_OM_RESULT_ENUM
{
    NAS_OM_RESULT_NO_ERROR                                  = 0,                /* 消息处理正常 */
    NAS_OM_RESULT_ERROR                                     = 1,                /* 消息处理出错 */
    NAS_OM_RESULT_INCORRECT_PARAMETERS,

    NAS_OM_RESULT_BUTT
};
typedef VOS_UINT32 NAS_OM_RESULT_ENUM_UINT32;
/* Added by l00198894 for PROBE Project, 2012/11/06, end */

/*****************************************************************************
  4 全局变量声明
*****************************************************************************/


/*****************************************************************************
  5 消息头定义
*****************************************************************************/


/*****************************************************************************
  6 消息定义
*****************************************************************************/


/*****************************************************************************
  7 STRUCT定义
*****************************************************************************/

/*******************************************************************************
 结构名    : MS_ID_STRUCT
 结构说明  : MS ID 结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLength;
    VOS_UINT8                           ucMobileIDValue[LEN_MOBILE];
    VOS_UINT8                           ucReserved[3];
}MS_ID_STRUCT;

/*******************************************************************************
 结构名    : PLMN_ID_STRUCT
 结构说明  : PLMN ID 结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           aucMccDigit[3];
    VOS_UINT8                           ucMncCount;
    VOS_UINT8                           aucMncDigit[3];
    VOS_UINT8                           ucReserved[1];
}PLMN_ID_STRUCT;

/*******************************************************************************
 结构名    : AVAILABLE_PLMN_STRUCT
 结构说明  : AVAILABLE ID 结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    PLMN_ID_STRUCT                      Plmn;
    NET_TYPE_ENUM_UINT8                 ucRat;
    VOS_UINT8                           ucReserved[3];
}AVAILABLE_PLMN_STRUCT;

/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, begin */
/*****************************************************************************
 结构名称: NAS_GUMM_PTMSI_STRU
 协议表格:
 ASN.1 描述:
 结构说明: 见 24.008 10.5.1.4
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucPtmsi[NAS_MAX_SIZE_PTMSI];
} NAS_OM_PTMSI_STRU;
/*******************************************************************************
 结构名    : NAS_OM_MS_ID_STRU
 结构说明  : 上报TIN值的数据结构
 修改历史      :
  1.日    期   : 2013年06月26日
    作    者   : l00167671
    修改内容   : DCM LOGGER可谓可测SMC SMR状态上报
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          ulMsId;
    NAS_LMM_GUTI_STRU                   stGuti;
    NAS_OM_PTMSI_STRU                   stPtmsi;
    VOS_UINT8                           aucImsi[NAS_MAX_IMSI_LEN];
}NAS_OM_MS_ID_STRU;

/*******************************************************************************
 结构名    : NAS_OM_SMS_CONFIRM_STRU
 结构说明  : 发给OM的MM信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2013年06月26日
    作    者   : l00167671
    修改内容   : DCM LOGGER可谓可测SMC SMR状态上报
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSmcCsMoState;
    VOS_UINT8                           ucSmcCsMtState;
    VOS_UINT8                           ucSmcPsMoState;
    VOS_UINT8                           ucSmcPsMtState;
    VOS_UINT8                           ucSmrMoState;
    VOS_UINT8                           ucSmrMtState;
    VOS_UINT8                           aucReserved[2];
}NAS_OM_SMS_CONFIRM_STRU;
/*****************************************************************************
 枚举名    : NAS_OM_PLMN_HUO_TYPE_ENUM
 枚举说明  : DCM要求在工具中显示PLMN的类型
 1.日    期   : 2013年06月23日
   作    者   : l00167671
   修改内容   : 新建
 2.日    期   : 2013年09月3日
   作    者   : w00242748
   修改内容   : DTS2013082909799 查询NAS MM QUERY时，RPLMN显示成EHPLMN，关机时
                无效PLMN显示为OPLMN修正。
*****************************************************************************/
/* Modified by w00242748 for DTS2013082909799, 2013-9-3, begin */
enum NAS_OM_PLMN_HUO_TYPE_ENUM
{
   NAS_MMC_HUO_RPLMN        = 0x1,
   NAS_MMC_HUO_HPLMN        = 0x2,
   NAS_MMC_HUO_UPLMN        = 0x3,
   NAS_MMC_HUO_OPLMN        = 0x4,
   NAS_MMC_HUO_OTHER_PLMN   = 0x5,
   NAS_MMC_HUO_INVALID_PLMN = 0x6,
   NAS_MMC_HUO_BUTT
};
typedef VOS_UINT32 NAS_OM_PLMN_HUO_TYPE_ENUM_UINT32;
/* Modified by w00242748 for DTS2013082909799, 2013-9-3, begin */

/* added  by l00167671 for v9r1 dcm logger可维可测项目, 2013-06-27, end */

/*******************************************************************************
 结构名    : NAS_OM_MM_CONFIRM_STRU
 结构说明  : 发给OM的MM信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   :

  2.日    期   : 2012年11月06日
    作    者   : l00198894
    修改内容   : Probe路测工具对接项目增加GPRS状态
*******************************************************************************/
typedef struct
{
    NAS_OM_MM_STATE_ENUM_UINT8          ucMmState;
    MM_UPDATE_STATUS_ENUM_UINT8         ucMmUpdateStatus;
    VOS_UINT8                           aucTmsi[LEN_TMSI];
    NAS_OM_GMM_STATE_ENUM_UINT8         ucGmmState;
    GMM_UPDATE_STATUS_ENUM_UINT8        ucGmmUpdateStatus;

    VOS_UINT8                           ucPtmsi[LEN_PTMSI];
    VOS_UINT8                           ucMmcFsmId;
    PLMN_SEL_MODE_ENUM_UINT8            enPlmnSelMode;
    UE_OPERATE_MODE_ENUM_UINT8          enUeOperMode;
    NET_OPERATE_MODE_ENUM_UINT8         ucNetMode;

    MS_ID_STRUCT                        IMSI;
    MS_ID_STRUCT                        IMEI;
    MS_ID_STRUCT                        IMEISV;
    PLMN_ID_STRUCT                      SelectedPlmn;
   
    VOS_UINT16                          usLac;
    VOS_UINT8                           ucRac;
    VOS_UINT8                           ucAvailPlmnNum;

    AVAILABLE_PLMN_STRUCT               AvailablePlmn[MAX_AVAILABEL_PLMN_NUM];

    NAS_OM_MM_SUB_STATE_ENUM_UINT8      ucMmSubState;
    NAS_OM_GMM_SUB_STATE_ENUM_UINT8     ucGmmSubState;
    NAS_OM_SERVICE_STATE_ENUM_UINT8     ucServiceStatus;
    VOS_UINT8                           ucMmcState;

    /* Added by l00198894 for PROBE Project, 2012/11/06, begin */
    NAS_OM_GMM_GPRS_STATE_ENUM_UINT8    enGmmGprsState;
	
	/* Modified by l00167671 for DCM LOGGER Project, 2013/06/24, begin */
    VOS_UINT8                           aucReserved[2];
	/* Modified by l00167671 for DCM LOGGER Project, 2013/06/24, end */
		
    /* Added by l00198894 for PROBE Project, 2012/11/06, end */

    /* Added by l00167671 for DCM LOGGER Project, 2013/06/24, begin */
    VOS_UINT8                           enTinType;
    NAS_OM_PLMN_HUO_TYPE_ENUM_UINT32    enPlmnType;
    NAS_OM_MS_ID_STRU                   stMsId;
    /* Added by l00167671 for DCM LOGGER Project, 2013/06/24, end */    

}NAS_OM_MM_CONFIRM_STRU;

/*******************************************************************************
 结构名    : NAS_QOS_STRUCT
 结构说明  : 发给OM的QOS信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNSAPI;
    VOS_UINT8                           ucDelayClass;
    VOS_UINT8                           ucReliabilityClass;
    VOS_UINT8                           ucPeakThrough;
    VOS_UINT8                           ucPrecedenceClass;
    VOS_UINT8                           ucMeanThrough;
    VOS_UINT8                           ucTrafficClass;
    VOS_UINT8                           ucDeliverOrder;
    VOS_UINT8                           ucDeliverOfErrSdu;
    VOS_UINT8                           ucReserved1[1];
    VOS_UINT16                          usMaximSduSize;
    VOS_UINT32                          ulMaxBitRateUl;
    VOS_UINT32                          ulMaxBitRateDl;
    VOS_UINT8                           ucResidualBer;
    VOS_UINT8                           ucSduErrRatio;
    VOS_UINT16                          usTransDelay;
    VOS_UINT8                           ucTraffHandlPrior;
    VOS_UINT8                           ucReserved2[3];
    VOS_UINT32                          ulGuarantBitRateUl;
    VOS_UINT32                          ulGuarantBitRateDl;
}NAS_QOS_STRUCT;

/*******************************************************************************
 结构名    : NAS_PDP_CONTEXT_STRU
 结构说明  : PDP上下文信息的结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNsapi;
    VOS_UINT8                           ucPdpType;
    VOS_UINT8                           aucReserved1[2];
    VOS_UINT8                           ucActivePDPContexts;
    VOS_UINT8                           ucPdpLlcSapi;
    VOS_UINT8                           ucPdpRadioPriority;
    VOS_UINT8                           aucReserved2[1];
    VOS_UINT8                           ucApnLength;
    VOS_UINT8                           aucApn[SM_MAX_LENGTH_OF_APN];
    VOS_UINT8                           aucReserved3[2];
    VOS_UINT8                           aucIpAddr[SM_IP_ADDR_LEN];
    NAS_OM_PDP_ACT_TYPE_ENUM_UINT8      enActType;                              /*激活类型*/
    VOS_UINT8                           ucLinkedNsapi;                          /*主激活的NSAPI,若激活类型是二次激活,则此成员有效*/
    VOS_UINT8                           aucReserved4[2];
    VOS_UINT8                           aucIpv6Addr[SM_IPV6_ADDR_LEN];
}NAS_PDP_CONTEXT_STRU;

/*******************************************************************************
 结构名    : NAS_OM_PDP_CONTEXT_STRU
 结构说明  : 发给OM的激活的PDP上下文信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          ulPdpCnt;                               /* 实际激活的PDP上下文个数 */
    NAS_PDP_CONTEXT_STRU                astPdpContext[NAS_OM_PDP_CONTEXT_MAX];
}NAS_OM_PDP_CONTEXT_STRU;

/*******************************************************************************
 结构名    : NAS_OM_SET_GSM_CODEC_CONFIG_REQ_STRU
 结构说明  : 从OM收到的CODEC设置请求
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    NAS_OM_GSM_CODEC_CONFIG_ENUM_U8     enGsmCodec;
    VOS_UINT8                           aucReserve[3];
}NAS_OM_SET_GSM_CODEC_CONFIG_REQ_STRU;

/*******************************************************************************
 结构名    : NAS_OM_SET_GSM_CODEC_CONFIG_CNF_STRU
 结构说明  : 发给OM的CODEC设置结果的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          ulRet;                                  /* 设置结果 */
}NAS_OM_SET_GSM_CODEC_CONFIG_CNF_STRU;

/*******************************************************************************
 结构名    : NAS_OM_CODEC_TYPE_STRU
 结构说明  : 发给OM的当前CODEC信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    NAS_OM_CURR_CODEC_TYPE_ENUM_U8      enCurrCodec;                            /* 当前使用的CODEC类型 */
    NAS_OM_GSM_CODEC_CONFIG_ENUM_U8     enGsmCodecConfig;                       /* 当前GSM支持的CODEC类型 */
    VOS_UINT8                           aucReserve[2];
}NAS_OM_CODEC_TYPE_STRU;

/* Added by l00198894 for PROBE Project, 2012/11/06, begin */
/*******************************************************************************
 结构名    : NAS_OM_SET_DSFLOW_RPT_REQ_STRU
 结构说明  : 从OM收到的数据业务流量、速率上报设置请求
 修改历史      :
  1.日    期   : 2012年11月06日
    作    者   : l00198894
    修改内容   : Probe路测工具对接项目新增结构体
*******************************************************************************/
typedef struct
{
    NAS_OM_REPORT_ACTION_ENUM_UINT8     enRptAction;
    VOS_UINT8                           ucReserved;
    VOS_UINT16                          usRptPeriod;
}NAS_OM_SET_DSFLOW_RPT_REQ_STRU;

/*******************************************************************************
 结构名    : NAS_OM_SET_DSFLOW_RPT_CNF_STRU
 结构说明  : 发给OM数据业务流量、速率上报设置结果的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年11月06日
    作    者   : l00198894
    修改内容   : Probe路测工具对接项目新增结构体
*******************************************************************************/
typedef struct
{
    NAS_OM_RESULT_ENUM_UINT32           enResult;                               /* 设置结果 */
}NAS_OM_SET_DSFLOW_RPT_CNF_STRU;

/*******************************************************************************
 结构名    : NAS_OM_DSFLOW_RPT_IND_STRU
 结构说明  : 发给OM的数据业务流量、速率等信息的透传消息结构定义
 修改历史      :
  1.日    期   : 2012年11月06日
    作    者   : l00198894
    修改内容   : Probe路测工具对接项目新增结构体
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          ulCurrentSendRate;                      /* 当前发送速率 */
    VOS_UINT32                          ulCurrentReceiveRate;                   /* 当前接收速率 */
    VOS_UINT32                          ulDSLinkTime;                           /* DS连接时间  */
    VOS_UINT32                          ulDSSendFluxLow;                        /* DS发送流量低四个字节 */
    VOS_UINT32                          ulDSSendFluxHigh;                       /* DS发送流量高四个字节 */
    VOS_UINT32                          ulDSReceiveFluxLow;                     /* DS接收流量低四个字节 */
    VOS_UINT32                          ulDSReceiveFluxHigh;                    /* DS接收流量高四个字节 */
}NAS_OM_DSFLOW_RPT_IND_STRU;
/* Added by l00198894 for PROBE Project, 2012/11/06, end */

/*******************************************************************************
 结构名    : NasOmTrans_MSG
 结构说明  : NAS和OM间TRANS顶级消息定义
 修改历史      :
  1.日    期   : 2012年04月27日
    作    者   : l00171473
    修改内容   : 
*******************************************************************************/
typedef struct
{
    VOS_UINT16                          usPrimId;                               /*_H2ASN_MsgChoice_Export NAS_OM_TRANS_MSG_TYPE_ENUM_UINT16 */
    VOS_UINT16                          usToolsId;                              /* 工具ID */
    VOS_UINT8                           aucData[4];                             /* 传输消息的内容 */

    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          NAS_OM_TRANS_MSG_TYPE_ENUM_UINT16
    ****************************************************************************/

}NasOmTrans_MSG;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/








#if (VOS_OS_VER == VOS_WIN32)
#pragma pack()
#else
#pragma pack(0)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of NasOmTrans.h */

