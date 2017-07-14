/******************************************************************************

  Copyright(C)2008,Hisilicon Co. LTD.

 ******************************************************************************
  File Name       : NasNvInterface.h
  Description     : NasNvInterface.h header file
  History         :

******************************************************************************/

#ifndef __NASNVINTERFACE_H__
#define __NASNVINTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 Include Headfile
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif

#include "PsTypeDef.h"

/*****************************************************************************
  2 Macro
*****************************************************************************/
#define NAS_MMC_NV_ITEM_ACTIVE          (1)                                     /* NV项激活 */
#define NAS_MMC_NV_ITEM_DEACTIVE        (0)                                     /* NV项未激活 */

/* GPRS GEA 算法支持宏定义 */
#define NAS_MMC_GPRS_GEA1_SUPPORT       (0x01)                                  /* 支持GPRS GEA1算法 */
#define NAS_MMC_GPRS_GEA1_VALUE         (0x80)                                  /* 支持GEA1时的网络能力值 */
#define NAS_MMC_GPRS_GEA2_VALUE         (0x40)                                  /* 支持GEA2时的网络能力值 */
#define NAS_MMC_GPRS_GEA3_VALUE         (0x20)                                  /* 支持GEA3时的网络能力值 */
#define NAS_MMC_GPRS_GEA4_VALUE         (0x10)                                  /* 支持GEA4时的网络能力值 */
#define NAS_MMC_GPRS_GEA5_VALUE         (0x08)                                  /* 支持GEA5时的网络能力值 */
#define NAS_MMC_GPRS_GEA6_VALUE         (0x04)                                  /* 支持GEA6时的网络能力值 */
#define NAS_MMC_GPRS_GEA7_VALUE         (0x02)                                  /* 支持GEA7时的网络能力值 */

#define NAS_MMC_GPRS_GEA2_SUPPORT       (0x02)                                  /* 支持GPRS GEA2算法 */
#define NAS_MMC_GPRS_GEA3_SUPPORT       (0x04)                                  /* 支持GPRS GEA3算法 */
#define NAS_MMC_GPRS_GEA4_SUPPORT       (0x08)                                  /* 支持GPRS GEA4算法 */
#define NAS_MMC_GPRS_GEA5_SUPPORT       (0x10)                                  /* 支持GPRS GEA5算法 */
#define NAS_MMC_GPRS_GEA6_SUPPORT       (0x20)                                  /* 支持GPRS GEA6算法 */
#define NAS_MMC_GPRS_GEA7_SUPPORT       (0x40)                                  /* 支持GPRS GEA7算法 */
#define NAS_MMC_NVIM_MAX_EPLMN_NUM      (16)                                    /* en_NV_Item_EquivalentPlmn NV中等效plmn个数 */
#define NAS_MMC_NVIM_MAX_MCC_SIZE       (3)                                     /* plmn中Mcc最大长度 */
#define NAS_MMC_NVIM_MAX_MNC_SIZE       (3)                                     /* plmn中Mnc最大长度 */
#define NAS_MMC_LOW_BYTE_MASK           (0x0f)

/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-4, begin */
#define NAS_MMC_NVIM_MAX_USER_CFG_IMSI_PLMN_NUM                  (6)                 /* 用户配置的最多可支持的USIM/SIM卡的个数 */
#define NAS_MMC_NVIM_MAX_USER_CFG_EHPLMN_NUM                     (6)                 /* 用户配置的EHplmn的个数 */
#define NAS_MMC_MAX_BLACK_LOCK_PLMN_WITH_RAT_NUM            (8)                 /* 禁止接入技术的PLMN ID的最大个数 */
/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-4, end */
/*Add by wx270776 for DTS2014121701015, 2014-12-19, begin */
#define NAS_MMC_NVIM_MAX_USER_CFG_EXT_EHPLMN_NUM              (8)                /* 扩展的NV项的EHplmn组的最大个数*/
/*Add by wx270776 for DTS2014121701015, 2014-12-19, end */
/* Modified by s00190137 for 256 EOPLMN, 2013-11-26, begin */
/* Added by s00190137 for ACC&SPLMN, 2013-10-15 Begin */
#define NAS_MMC_NVIM_MAX_USER_OPLMN_VERSION_LEN               (8)               /* 用户配置的OPLMN版本号最大长度 */
#define NAS_MMC_NVIM_MAX_USER_OPLMN_IMSI_NUM                  (6)               /* 用户配置的OPLMN最多可支持的USIM/SIM卡的个数 */
#define NAS_MMC_NVIM_MAX_USER_CFG_OPLMN_NUM                   (256)             /* 用户配置的OPLMN的最大个数 */
#define NAS_MMC_NVIM_OPLMN_WITH_RAT_UNIT_LEN                  (5)               /* 用户配置的带接入技术OPLMN基本单元长度，如6F61文件的基本长度单元为5 */
#define NAS_MMC_NVIM_MAX_USER_CFG_OPLMN_DATA_LEN              (500)             /* 用户配置OPLMN的最大字节数,扩容前只支持500*/
#define NAS_MMC_NVIM_MAX_USER_CFG_OPLMN_DATA_EXTEND_LEN       (1280)            /* 扩展后的用户配置OPLMN的最大字节数*/
/* Added by s00190137 for ACC&SPLMN, 2013-10-15 End */
/* Modified by s00190137 for 256 EOPLMN, 2013-11-26, end */

/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, begin */
#define NAS_MMC_NVIM_MAX_CFG_DPLMN_DATA_EXTEND_LEN       (6*128)            /* 扩展后的用户配置DPLMN的最大字节数*/
#define NAS_MMC_NVIM_MAX_CFG_NPLMN_DATA_EXTEND_LEN       (6*128)            /* 扩展后的用户配置NPLMN的最大字节数*/
#define NAS_MMC_NVIM_MAX_CFG_HPLMN_NUM                   (3*8)
/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, end */


#define NAS_NVIM_MAX_OPER_SHORT_NAME_LEN                36
#define NAS_NVIM_MAX_OPER_LONG_NAME_LEN                 40

/* Modified by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-4-5, begin */
#define NAS_NVIM_ITEM_MAX_IMSI_LEN          (9)                     /* 最大的IMSI的长度 */
/* Modified by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-4-5, end */
#define NAS_MML_NVIM_PS_LOCI_SIM_FILE_LEN                    (14)                    /* USIM中PSLOCI文件的长度 */
#define NAS_NVIM_PS_LOCI_SIM_FILE_LEN                    (14)                    /* USIM中PSLOCI文件的长度 */

#define NAS_UTRANCTRL_MAX_NVIM_CFG_TD_MCC_LIST_NUM          (6)                 /* 模式自动切换中最大的可配置国家码个数 */
#define NAS_UTRANCTRL_MAX_NVIM_CFG_IMSI_PLMN_LIST_NUM       (6)                 /* 模式自动切换中最大的可配置USIM/IMSI的网络号个数 */

/* Modified by w00167002 for DTS2015032709270, 2015-4-18, begin */
#define NAS_MML_NVIM_MAX_DISABLED_RAT_PLMN_NUM              (8)                 /* 禁止接入技术的PLMN ID的最大个数 */
/* Modified by w00167002 for DTS2015032709270, 2015-4-18, end */

#define NAS_SIM_FORMAT_PLMN_LEN                     (3)                     /* Sim卡格式的Plmn长度 */

#define NAS_MML_NVIM_MAX_BLACK_LOCK_PLMN_NUM                 (16)                    /* 黑名单锁网支持的PLMN ID的最大个数 */

#define NAS_MML_NVIM_MAX_WHITE_LOCK_PLMN_NUM                 (16)                    /* 白名单锁网支持的PLMN ID的最大个数 */

/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, begin */
#define NAS_MML_BG_SEARCH_REGARDLESS_MCC_NUMBER         (10)                     /* BG搜不考虑国家码的国家码最大个数 */
#define NAS_MML_SINGLE_DOMAIN_FAIL_ACTION_MAX_LIST      (5)                     /* 定制原因值最大列表 */
/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, end */

#define NV_ITEM_NET_CAPABILITY_MAX_SIZE                     (10)

#define NAS_MMC_NVIM_SUPPORTED_3GPP_RELEASE_SIZE            (2)                 /* 当前支持的协议版本 */

#define NAS_MMC_NVIM_MAX_IMSI_LEN                           (9)                     /* 最大的IMSI的长度 */

#define NVIM_MAX_EPLMN_NUM                                  (16)
#define NVIM_MAX_MCC_SIZE                                   (3)
#define NVIM_MAX_MNC_SIZE                                   (3)

#define NVIM_MAX_FDD_FREQ_BANDS_NUM                         (12)

/* Add by z60575 for multi_ssid, 2012-9-5 end */
/*+CGMI - 获取制造商名称*/

/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, begin */
#define NAS_NVIM_MAX_IMSI_FORBIDDEN_LIST_NUM         (16)
#define NAS_NVIM_MAX_RAT_FORBIDDEN_LIST_NUM          (8)    /* 预留拓展 */
#define NAS_NVIM_MAX_SUPPORTED_FORBIDDEN_RAT_NUM     (2)

#define NAS_NVIM_FORBIDDEN_RAT_NUM_0                 (0)
#define NAS_NVIM_FORBIDDEN_RAT_NUM_1                 (1)
#define NAS_NVIM_FORBIDDEN_RAT_NUM_2                 (2)
/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, end */


/* Added by l00208543 for V9R1 reject 17, 2014-4-29, begin */
#define NAS_NVIM_MAX_ROAMING_REJECT_NO_RETRY_CAUSE_NUM               (8)
/* Added by l00208543 for V9R1 reject 17, 2014-4-29, end */

/* 对NVID枚举的转定义(PS_NV_ID_ENUM, SYS_NV_ID_ENUM, RF_NV_ID_ENUM) */
typedef VOS_UINT16  NV_ID_ENUM_U16;
#define NV_ITEM_IMEI_SIZE                      16
#define NV_ITEM_SELPLMN_MODE_SIZE              2
#define NV_ITEM_MMA_OPERATORNAME_SIZE          84
#define NV_ITEM_AT_PARA_SIZE                   100
#define NV_ITEM_HPLMN_FIRST_SEARCH_SIZE        1  /* 第一次HPLMN搜索的时间间隔 */
/* Modified by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-4-5, begin */
#define NVIM_ITEM_MAX_IMSI_LEN          (9)                     /* 最大的IMSI的长度 */
/* Modified by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-4-5, end */

/* Added by w00176964 for CDMA 1X Iteration 1, 2014-8-18, begin */
#define CNAS_NVIM_MAX_1X_MRU_SYS_NUM                            (12)
/* Added by w00176964 for CDMA 1X Iteration 1, 2014-8-18, end */

/* Added by h00285180 for DTS2014110307415, 2014-10-20, begin */
#define NAS_MMC_NVIM_MAX_CAUSE_NUM      (10)     /* NV配置原因值最大个数 */
/* Added by h00285180 for DTS2014110307415, 2014-10-20, end   */

/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, begin */
/* 高优先级PLMN refresh 触发背景搜默认延迟时长: 单位 秒 */
#define NV_ITEM_HIGH_PRIO_PLMN_REFRESH_TRIGGER_BG_SEARCH_DEFAULT_DELAY_LEN    (5)
/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, end */
/* Added by j00174725 for DTS2016040901340, 2016-04-10, begin */
#define NAS_MAX_TMSI_LEN                                (4)                     /* 最大的TMSI的长度 */
#define NAS_SIM_MAX_LAI_LEN                             (6)                     /* SIM卡中保存的LAI最大长度 */
/* Added by j00174725 for DTS2016040901340, 2016-04-10, end */


/*****************************************************************************
  3 Massage Declare
*****************************************************************************/


/*****************************************************************************
  4 Enum
*****************************************************************************/
/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, begin */
/*****************************************************************************
枚举名    : NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_ENUM
结构说明  : 单域注册被拒，MMC的动作

1.日    期   : 2012年6月11日
  作    者   : w00166186
  修改内容   : AT&T&DCM项目新增类型

2.日    期   : 2014年8月19日
  作    者   : w00167002
  修改内容   : DTS2014081905808:在配置PS注册拒绝14时候，若当前在HOME PLMN上，则可能
               触发循环乒乓，修改为增加ACTION动作:在漫游网络上触发选网，在HOME网络上
               不生效，按现有流程进行处理。

*****************************************************************************/
enum NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_ENUM
{
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_PLMN_SELECTION                    = 0,            /* 触发搜网 */
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_NORMAL_CAMP_ON                    = 1,            /* 正常驻留 */
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_OPTIONAL_PLMN_SELECTION           = 2,            /* 触发可选搜网 */
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_LIMITED_CAMP_ON                   = 3,            /* 限制驻留 */
    
    /* Added by w00167002 for DTS2014081905808, 2014-8-19, begin */
    NAS_MMC_NVIM_SINGLE_DOMAIN_ROAMING_REG_FAIL_ACTION_PLMN_SELECTION            = 4,            /* 在漫游网络上注册发起搜网，在HOME网络上不生效 */
    /* Modified by w00167002 for DTS2014081905808, 2014-8-19, end */
    
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_BUTT
};
typedef VOS_UINT8 NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_ENUM_UINT8;

/*****************************************************************************
枚举名    : NAS_MMC_NVIM_REG_FAIL_CAUSE_ENUM
结构说明  : 注册失败自定义原因值

1.日    期   : 2012年6月11日
  作    者   : w00166186
  修改内容   : AT&T&DCM项目新增类型

*****************************************************************************/
enum NAS_MMC_NVIM_REG_FAIL_CAUSE_ENUM
{
    NAS_MMC_NVIM_REG_FAIL_CAUSE_GPRS_SERV_NOT_ALLOW_IN_PLMN = 14,
    NAS_MMC_NVIM_REG_FAIL_CAUSE_TIMER_TIMEOUT               = 301,                                 /* 等待网侧结果定时器超时 */
    NAS_MMC_NVIM_REG_FAIL_CAUSE_BUTT
};
typedef VOS_UINT16 NAS_MMC_NVIM_REG_FAIL_CAUSE_ENUM_UINT16;

/*****************************************************************************
枚举名    : NAS_MMC_NVIM_REG_DOMAIN_ENUM_UINT8
结构说明  : 注册域

1.日    期   : 2012年6月11日
  作    者   : w00166186
  修改内容   : AT&T&DCM项目新增类型

*****************************************************************************/
enum NAS_MMC_NVIM_REG_DOMAIN_ENUM
{
    NAS_MMC_NVIM_REG_DOMAIN_CS = 1,
    NAS_MMC_NVIM_REG_DOMAIN_PS = 2,                                 /* 等待网侧结果定时器超时 */
    NAS_MMC_NVIM_REG_DOMAIN_BUTT
};
typedef VOS_UINT8 NAS_MMC_NVIM_REG_DOMAIN_ENUM_UINT8;
/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, end */

/* Added by w00176964 for 短信支持能力和UC2能力NV优化, 2013-3-11, begin */
/*****************************************************************************
 枚举名    : NAS_MMC_UCS2_ENUM
 枚举说明  : UCS2 能力
 修改历史  :
 1.日    期    : 2013年03月11日
   作    者    : w00176964
   修改内容    : 新建
*****************************************************************************/

enum NAS_MMC_UCS2_ENUM
{
    NAS_MMC_UCS2_HAS_PREFER                                = 0,
    NAS_MMC_UCS2_NO_PREFER                                 = 1,

    NAS_MMC_UCS2_BUTT
};

typedef VOS_UINT16 NAS_MMC_UCS2_ENUM_UINT16;
/* Added by w00176964 for 短信支持能力和UC2能力NV优化, 2013-3-11, end */

/*****************************************************************************
 枚举名    : NV_MS_MODE_ENUM_UINT8
 结构说明  :  NV中记录的手机模式
  1.日    期   : 2011年8月18日
    作    者   : z00161729
    修改内容   : 新增
  2.日    期   : 2012年4月23日
    作    者   : w00166186
    修改内容   : DTS2012033104746,关机状态设置服务域为ANY不生效
*****************************************************************************/
enum NV_MS_MODE_ENUM
{
    NV_MS_MODE_CS_ONLY,                                                 /* 仅支持CS域 */
    NV_MS_MODE_PS_ONLY,                                                 /* 仅支持PS域 */
    NV_MS_MODE_CS_PS,                                                   /* CS和PS都支持 */

    /* Aded by w00166186 for DTS2012033106746, 2012-04-23, begin */
    NV_MS_MODE_ANY,                                                     /* ANY,相当于仅支持CS域 */
    /* Aded by w00166186 for DTS2012033106746, 2012-04-23, end */

    NV_MS_MODE_BUTT
};
typedef VOS_UINT8 NV_MS_MODE_ENUM_UINT8;

/* Added by l00208543 for DTS2013111904411, 2013-11-19, begin */
/*****************************************************************************
 枚举名    : NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_ENUM
 结构说明  : 修改拒绝原因值，按照服务域进行区分
  1.日    期   : 2013年11月19日
    作    者   : l00208543
    修改内容   : 新增
*****************************************************************************/
enum NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_ENUM
{
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_INACTIVE     = 0,        /* 功能不生效 */
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_CS_PS,                   /* 修改CS+PS的拒绝原因值 */                                         
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_CS_ONLY,                 /* 仅修改CS域的拒绝原因值 */                                     
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_PS_ONLY,                 /* 仅修改PS域的拒绝原因值 */
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_BUTT
};
typedef VOS_UINT8 NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_ENUM_UINT8;
/* Added by l00208543 for DTS2013111904411, 2013-11-19, end */

/*****************************************************************************
  5 STRUCT
*****************************************************************************/
/*****************************************************************************
*                                                                            *
*                           参数设置消息结构                                 *
*                                                                            *
******************************************************************************/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_MANUAL_SEARCH_HPLMN_FLG_STRU
 结构说明  : NV SrchHplmnFlg_ManualMode的结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usManualSearchHplmnFlg; /*Range:[0,1]*/
}NAS_MMC_NVIM_MANUAL_SEARCH_HPLMN_FLG_STRU;
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_AUTO_SEARCH_HPLMN_FLG_STRU
 结构说明  : NV SrchHplmnFlg_ManualMode的结构结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/

typedef struct
{
    /* <BEGIN DTS2014042105131 t00173447 2014/2/24 modified */
    VOS_UINT16 usAutoSearchHplmnFlg; /*Range:[0,3]*/
    /* <END DTS2014042105131 t00173447 2014/2/24 modified */
}NAS_MMC_NVIM_AUTO_SEARCH_HPLMN_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_AUTO_SEARCH_HPLMN_FLG_STRU
 结构说明  : NV SrchHplmnFlg_AutoMode的结构结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usEHPlmnSupportFlg; /*Range:[0,1]*/
}NAS_MMC_NVIM_EHPLMN_SUPPORT_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_STK_STEERING_OF_ROAMING_SUPPORT_FLG_STRU
 结构说明  : en_NV_Item_Standard_STK_SteeringOfRoaming_Support_Flg的结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usStkSteeringOfRoamingSupportFlg; /*Range:[0,1]*/
}NAS_MMC_NVIM_STK_STEERING_OF_ROAMING_SUPPORT_FLG_STRU;

/*****************************************************************************
 结构名    : NVIM_SCAN_CTRL_STRU
 结构说明  : 记录en_NV_Item_Scan_Ctrl_Para (9080)NV项内容，标识搜索控制功能是否使能
  1.日    期   : 2012年06月11日
    作    者   : l60609
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;                        /* en_NV_Item_Scan_Ctrl_Para NV项是否激活，VOS_TRUE:激活；VOS_FALSE:未激活 */
    VOS_UINT8                           ucReserved;                             /* 保留 */
}NVIM_SCAN_CTRL_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_PLMN_ID_STRU
 结构说明  : PLMN的结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulMcc;                                  /* MCC,3 bytes */
    VOS_UINT32                          ulMnc;                                  /* MNC,2 or 3 bytes */
}NAS_NVIM_PLMN_ID_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_PLMN_ID_STRU
 结构说明  : en_NV_Item_Network_Name_From_MM_Info的结构

 1.日    期   : 2013年5月17日
   作    者   : l00167671
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    NAS_NVIM_PLMN_ID_STRU               stOperatorPlmnId;
    VOS_UINT8                           aucOperatorNameShort[NAS_NVIM_MAX_OPER_SHORT_NAME_LEN];/* 当前驻留网络运营商的短名称 */
    VOS_UINT8                           aucOperatorNameLong[NAS_NVIM_MAX_OPER_LONG_NAME_LEN];  /* 当前驻留网络运营商的长名称 */
}NAS_MMC_NVIM_OPERATOR_NAME_INFO_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_OPER_LOCK_BLACKPLMN_STRU
 结构说明  : en_NV_Item_OPERLOCK_PLMN_INFO NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulBlackPlmnLockNum;                     /* 支持黑名单的个数,个数为0时表示不支持黑名单 */
    NAS_NVIM_PLMN_ID_STRU               astBlackPlmnId[NAS_MML_NVIM_MAX_BLACK_LOCK_PLMN_NUM];
}NAS_MMC_NVIM_OPER_LOCK_BLACKPLMN_STRU;
/*****************************************************************************
 结构名    : NAS_MMC_AIS_ROAMING_CFG_STRU
 结构说明  : 记录en_NV_Item_AIS_ROAMING_Config NV项内容
 1.日    期   : 2012年5月17日
   作    者   : z40661
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucEnableFlg;                            /* 该特性是否打开 */
    VOS_UINT8                           ucHighPrioRatType;                              /* 漫游支持的接入技术 */
    VOS_UINT8                           aucReserve[2];
    NAS_NVIM_PLMN_ID_STRU               stHighPrioPlmnId;                       /* 漫游支持的高优先级的PLMN ID ,即使驻留在HPLMN上,此PLMNID的优先级也较高*/
    NAS_NVIM_PLMN_ID_STRU               stSimHPlmnId;                           /* SIM卡的HPLMN ID */
}NAS_MMC_NVIM_AIS_ROAMING_CFG_STRU;
 /* Added by l00130025 for DTS2012012903053, 2012-05-15 begin */

/*****************************************************************************
 结构名    : NAS_MML_USER_AUTO_RESEL_CFG_STRU
 结构说明  : 记录en_NV_Item_User_Auto_Resel_Switch NV项内容,UserResecl功能是否使能
 1.日    期   : 2012年5月15日
   作    者   : l00130025
   修改内容   : DTS2012012903053:Ts23.122 ch4.4.3.2.1 Auto user reselecton功能支持
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucAutoReselActiveFlg;                   /* 是否允许LTE国际漫游标记:VOS_TRUE 表示允许LTE国际漫游 VOS_FALSE 表示禁止LTE国际漫游 */
    VOS_UINT8                           ucReserve;
}NAS_MMC_NVIM_USER_AUTO_RESEL_CFG_STRU;
/* Added by l00130025 for DTS2012012903053, 2012-05-15 end */
/* Added by l00130025 for DTS2012060400029, 2012-06-09 begin */

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_PRIO_HPLMNACT_CFG_STRU
 结构说明  :  en_NV_Item_PRIO_HPLMNACT_CFG NV项结构
 1.日    期   : 2012年6月9日
   作    者   : l00130025
   修改内容   : DTS2012060400029:添加对HPLMNAct优先接入技术的定制；目前USim卡中HPLMNACT很多不支持L
*****************************************************************************/
typedef struct
{
    VOS_UINT8                            ucStatus;        /* NV有效标志, 1: 有效，0：无效 */
	VOS_UINT8                            ucReserved;      /* 四字节对齐 */
    VOS_UINT16                           usPrioHplmnAct;      /*定制的优先接入技术*/
}NAS_MMC_NVIM_PRIO_HPLMNACT_CFG_STRU;

/*****************************************************************************
 结构名    : NAS_MML_NVIM_AVAIL_TIMER_CFG_STRU
 结构说明  : en_NV_Item_SEARCH_TIMER_INFO NV项结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulFirstSearchTimeLen;                   /* available timer定时器第一次的时长 */
    VOS_UINT32                          ulFirstSearchTimeCount;                 /* available timer定时器第一次的次数 */
    VOS_UINT32                          ulDeepSearchTimeLen;                    /* available timer定时器深睡的时长 */
    VOS_UINT32                          ulDeepSearchTimeCount;
}NAS_MMC_NVIM_AVAIL_TIMER_CFG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_OPER_LOCK_WHITEPLMN_STRU
 结构说明  : en_NV_Item_OPERLOCK_PLMN_INFO_WHITE NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulWhitePlmnLockNum;                     /* 支持白名单的个数,个数为0时表示不支持白名单 */
    NAS_NVIM_PLMN_ID_STRU               astWhitePlmnId[NAS_MML_NVIM_MAX_WHITE_LOCK_PLMN_NUM];
}NAS_MMC_NVIM_OPER_LOCK_WHITEPLMN_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CPHS_SUPPORT_FLG_STRU
 结构说明  : en_NV_Item_SUPPORT_CPHS_FLAG NV项结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usSupportFlg; /*Range:[0,1]*/
}NAS_MMC_NVIM_CPHS_SUPPORT_FLG_STRU;

/* Added by l60609 for B060 Project, 2012-2-20, Begin   */
/*****************************************************************************
 结构名    : NAS_PREVENT_TEST_IMSI_REG_STRU
 结构说明  : en_NV_Item_PREVENT_TEST_IMSI_REG结构
  1.日    期   : 2012年2月22日
    作    者   : w00199382
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               ucStatus;                               /*是否激活，0不激活，1激活 */
    VOS_UINT8                               ucActFlg;
}NAS_PREVENT_TEST_IMSI_REG_STRU;
/* Added by l60609 for B060 Project, 2012-2-20, End   */
/*****************************************************************************
*                                                                            *
*                           参数设置消息结构                                 *
*                                                                            *
******************************************************************************/

/*****************************************************************************
 结构名    : NAS_PREVENT_TEST_IMSI_REG_STRU
 结构说明  : en_NV_Item_PREVENT_TEST_IMSI_REG结构
  1.日    期   : 2012年2月22日
    作    者   : w00199382
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucHplmnSearchPowerOn;
    VOS_UINT8   ucReserve;
}NAS_MMC_NVIM_HPLMN_SEARCH_POWERON_STRU;

/* Modified by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-4-5, begin */

/*****************************************************************************
 结构名    : NAS_PREVENT_TEST_IMSI_REG_STRU
 结构说明  : NAS_PREVENT_TEST_IMSI_REG_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucTinType;                              /* TIN类型 */
    VOS_UINT8                           aucReserve[2];
    VOS_UINT8                           aucImsi[NAS_NVIM_ITEM_MAX_IMSI_LEN];        /* 上次保存的IMSI的内容 */
}NAS_NVIM_TIN_INFO_STRU;

/*****************************************************************************
 结构名    : NAS_PREVENT_TEST_IMSI_REG_STRU
 结构说明  : NAS_PREVENT_TEST_IMSI_REG_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT32 ulAutoStart;
}NAS_MMA_NVIM_AUTO_START_STRU;


/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SINGLE_DOMAIN_FAIL_CNT_STRU
 结构说明  : en_NV_Item_SINGLE_DOMAIN_FAIL_SRCH_PLMN_CNT NV项结构
  1.日    期   : 2011年8月5日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSingleDomainFailPlmnSrchFlag;         /* DT定制需求，单域注册被拒后，需要出发搜网 */
    VOS_UINT8                           ucReserved;                             /* 保留*/
}NAS_MMC_NVIM_SINGLE_DOMAIN_FAIL_CNT_STRU;

/*****************************************************************************
 结构名    : NAS_PREVENT_TEST_IMSI_REG_STRU
 结构说明  : NAS_PREVENT_TEST_IMSI_REG_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT8  aucPsLocInfo[NAS_NVIM_PS_LOCI_SIM_FILE_LEN];
}NAS_NVIM_PS_LOCI_SIM_FILES_STRU;

/* Added by j00174725 for DTS2016040901340, 2016-04-10, begin */
/*****************************************************************************
 结构名    : NAS_NVIM_CS_LOCI_SIM_FILES_STRU
 结构说明  : en_NV_Item_Cs_Loci  NV结构
  1.日    期   : 2016年4月10日
    作    者   : j00174725
    修改内容   : DTS2016040901340
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucTmsi[NAS_MAX_TMSI_LEN];
    VOS_UINT8                           aucLastLai[NAS_SIM_MAX_LAI_LEN];
    VOS_UINT8                           ucLauStaus;
    VOS_UINT8                           ucReserved;
}NAS_NVIM_CS_LOCI_SIM_FILES_STRU;
/* Added by j00174725 for DTS2016040901340, 2016-04-10, end */

/*****************************************************************************
 结构名    : NAS_MML_NVIM_GPRS_GEA_ALG_CTRL_STRU
 结构说明  : en_NV_Item_GEA_SUPPORT_CTRL NV项结构
 1.日    期   : 2011年7月14日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                          ucStatus;                                /* NV是否激活标志, 0: 不激活，1: 激活 */
    VOS_UINT8                          ucGeaSupportCtrl;                        /* 终端配置:GPRS GEA算法支持控制 */
}NAS_MMC_NVIM_GPRS_GEA_ALG_CTRL_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_LTE_CS_SERVICE_CFG_STRU
 结构说明  : 记录en_NV_Item_Lte_Cs_Service_Config NV项内容，LTE支持的cs业务能力
  1.日    期   : 2011年10月28日
    作    者   : z00161729
    修改内容   : 新建
  2.日    期   : 2013年09月24日
    作    者   : s00217060
    修改内容   : VoLTE_PhaseII项目，修改结构体名称
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;    /* en_NV_Item_Lte_Cs_Service_Config NV项是否激活，VOS_TRUE:激活；VOS_FALSE:未激活 */
    VOS_UINT8                           ucLteCsServiceCfg;  /* LTE支持的 cs域业务能力*/
}NAS_NVIM_LTE_CS_SERVICE_CFG_STRU;
/* Added by z00161729 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-14, begin */

/* Added by w00167002 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_HO_WAIT_SYSINFO_TIMER_CFG_STRU
 结构说明  : NVIM项中的配置CSFB HO流程等系统消息时长，NV项未激活则不等系统消息直接注册
 1.日    期   : 2012年2月14日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;
    VOS_UINT8                           ucWaitSysinfoTimeLen;
}NAS_MMC_NVIM_HO_WAIT_SYSINFO_TIMER_CFG_STRU;
/* Added by w00167002 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, end */



/* delete by z00234330 for DTS201300600336, 2013-10-09, begin */
/* delete by z00234330 for DTS201300600336, 2013-10-09, end */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_LTE_INTERNATIONAL_ROAM_CFG_STRU
 结构说明  : en_NV_Item_Lte_Internation_Roam_Config NV项结构
 1.日    期   : 2012年3月14日
   作    者   : w00176964
   修改内容   : 新建
 2.日    期   : 2012年4月25日
   作    者   : w00176964
   修改内容   : DTS2012042403564:修改NV读取的结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLteRoamAllowedFlg;
    VOS_UINT8                           aucReserve[1];
    VOS_UINT8                           aucRoamEnabledMccList[20];/* 允许漫游的国家码列表 */
}NAS_MMC_NVIM_LTE_INTERNATIONAL_ROAM_CFG_STRU;

/* <BEGIN DTS2014042105131 t00173447 2014/2/24 modified */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ROAM_RPLMN_SEARCH_CFG_STRU
 结构说明  : en_NV_Item_Roam_Search_Rplmn_Config NV项结构
 1.日    期   : 2014年2月24日
   作    者   : t00173447
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucRoamRplmnflg;
    VOS_UINT8                           aucReserve[3];
    VOS_UINT32                         aucRoamEnabledMccList[5];/* 允许漫游的国家码列表 */
}NAS_MMC_NVIM_ROAM_SEARCH_RPLMN_CFG_STRU;
/* END DTS2014042105131 t00173447 2014/2/24 modified> */

/* Modified by w00176964 for 短信支持能力和UC2能力NV优化, 2013-3-11, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CLOSE_SMS_CAPABILITY_CFG_STRU
 结构说明  : en_NV_Item_Close_SMS_Capability_Config NV项结构
 1.日    期   : 2013年3月11日
   作    者   : w00176964
   修改内容   : close sms capability NV结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActFlg;
    VOS_UINT8                           aucReserved[3];
}NAS_NVIM_CLOSE_SMS_CAPABILITY_CFG_STRU;
/* Modified by w00176964 for 短信支持能力和UC2能力NV优化, 2013-3-11, end */

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_WCDMA_PRIORITY_GSM_STRU
 结构说明  : en_NV_Item_NVIM_WCDMA_PRIORITY_GSM_SUPPORT_FLG NV项结构
  1.日    期   : 2012年03月03日
    作    者   : S62952
    修改内容   : 新建
  2.日    期   : 2013年12月13日
    作    者   : z00161729
    修改内容   : DTS2013121206933:非高优先级可用高低质量的网络按syscfg设置接入技术优先级排序，9055 nv项控制
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucWcdmaPriorityGsmFlg;                  /* H3G定制需求，W网络优先于G*/

    /* Modified by z00161729 for DTS2013121206933, 2013-12-13, begin */
    VOS_UINT8                           ucSortAvailalePlmnListRatPrioFlg;    /* 是否按syscfg设置接入技术优先级排序高低质量搜网列表标识，1:是; 0:不是高质量网络按随机排序低质量网络不排序*/
    /* Modified by z00161729 for DTS2013121206933, 2013-12-13, end */
}NAS_MMC_NVIM_WCDMA_PRIORITY_GSM_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_PS_ONLY_CS_SERVICE_SUPPORT_FLG_STRU
 结构说明  : en_NV_Item_NVIM_PS_ONLY_CS_SERVICE_SUPPORT_FLG NV项结构
  1.日    期   : 2012年03月03日
    作    者   : S62952
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucPsOnlyCsServiceSupportFlg;            /* 服务域设置为PS ONLY时，是否支持CS域短信和呼叫业务(紧急呼叫除外)*/
    VOS_UINT8                           ucReserved;                             /* 保留*/
}NAS_NVIM_PS_ONLY_CS_SERVICE_SUPPORT_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_CC_NVIM_CCBS_SUPPORT_FLG_STRU
 结构说明  : en_NV_Item_NVIM_CCBS_SUPPORT_FLG NV项结构
  1.日    期   : 2012年03月03日
    作    者   : S62952
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCcbsSupportFlg;                       /* CCBS(遇忙呼叫完成)业务*/
    VOS_UINT8                           ucReserved;                             /* 保留*/
}NAS_NVIM_CCBS_SUPPORT_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_HPLMN_SEARCH_REGARDLESS_MCC_SUPPORT_STRU
 结构说明  : en_NV_Item_HPLMN_SEARCH_REGARDLESS_MCC_SUPPORT NV项结构
 1.日    期   : 2012年6月11日
   作    者   : W00166186
   修改内容   : AT&T&t&DCM新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;
    VOS_UINT8                           ucCustomMccNum;
    VOS_UINT8                           aucReserve[2];
    VOS_UINT32                          aulCustommMccList[10];                   /* 允许漫游的国家码列表 */
}NAS_MMC_NVIM_HPLMN_SEARCH_REGARDLESS_MCC_SUPPORT_STRU;

/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, begin */

/*****************************************************************************
 结构名    : NVIM_ACTING_HPLMN_SUPPORT_FLAG_STRU
 结构说明  : en_NV_Item_ACTING_PLMN_SUPPORT_FLAG NV项结构
  1.日    期   : 2011年06月11日
    作    者   : W00166186
    修改内容   : AT&T&DCM新建结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;
    VOS_UINT8                           ucReserved;
}NVIM_ACTING_HPLMN_SUPPORT_FLAG_STRU;

/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, end */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_REG_FAIL_NETWORK_FAILURE_CUSTOM_FLG_STRU
 结构说明  : en_NV_Item_CS_FAIL_NETWORK_FAILURE_PLMN_SEARCH_FLAG NV项结构
  1.日    期   : 2011年06月11日
    作    者   : W00166186
    修改内容   : AT&T&DCM新建结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlg;
    VOS_UINT8                           ucReserved;                             /* 保留*/
}NAS_MMC_NVIM_REG_FAIL_NETWORK_FAILURE_CUSTOM_FLG_STRU;

/* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, begin */


/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SINGLE_DOMAIN_FAIL_ACTION_LIST_STRU
 结构说明  : 单域注册被拒定制动作结构
 1.日    期   : 2012年6月11日
   作    者   : W00166186
   修改内容   : AT&T&t&DCM新建
*****************************************************************************/
typedef struct
{
    NAS_MMC_NVIM_REG_FAIL_CAUSE_ENUM_UINT16                 enRegCause;
    NAS_MMC_NVIM_REG_DOMAIN_ENUM_UINT8                      enDomain;
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_ENUM_UINT8   enAction;
}NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_STRU;


/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SINGLE_DOMAIN_FAIL_ACTION_LIST_STRU
 结构说明  : 单域注册被拒定制en_NV_Item_SINGLE_DOMAIN_FAIL_ACTION_LIST结构
 1.日    期   : 2012年6月11日
   作    者   : W00166186
   修改内容   : AT&T&t&DCM新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                                               ucActiveFlag;
    VOS_UINT8                                               ucCount;
    VOS_UINT8                                               auReserv[2];
    NAS_MMC_NVIM_SINGLE_DOMAIN_REG_FAIL_ACTION_STRU         astSingleDomainFailActionList[NAS_MML_SINGLE_DOMAIN_FAIL_ACTION_MAX_LIST];
}NAS_MMC_NVIM_SINGLE_DOMAIN_FAIL_ACTION_LIST_STRU;

/*****************************************************************************
 结构名    : NAS_SIM_FORMAT_PLMN_ID
 结构说明  : Sim PLMN ID的存储结构
 1.日    期   : 2011年5月28日
   作    者   : zhoujun 40661
   修改内容   : 新建
*****************************************************************************/
typedef struct {
    VOS_UINT8                           aucSimPlmn[NAS_SIM_FORMAT_PLMN_LEN];
    VOS_UINT8                           aucReserve[1];
}NAS_SIM_FORMAT_PLMN_ID;

/*****************************************************************************
 结构名    : NAS_UTRANCTRL_NVIM_CURRENT_UTRAN_MODE_STRU
 结构说明  : 记录en_NV_Item_Utran_Mode NV项内容
 1.日    期   : 2012年7月13日
   作    者   : w00167002
   修改内容   : V7R1C50_GUTL_PhaseI:新加
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucUtranMode;                            /* 当前支持的UTRAN模式 */
    VOS_UINT8                           ucReserve;
}NAS_UTRANCTRL_NVIM_UTRAN_MODE_STRU;

/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-8, begin */
/*****************************************************************************
 结构名    : NAS_UTRANCTRL_NVIM_UTRAN_MODE_AUTO_SWITCH_STRU
 结构说明  : 记录en_NV_Item_Utran_Mode_Auto_Switch NV项内容
 1.日    期   : 2012年8月7日
   作    者   : w00167002
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucUtranSwitchMode;                      /* 0：UTRAN模式为FDD 1：UTRAN模式为TDD 2:AUTO SWITCH */
    VOS_UINT8                           ucTdMccListNum;                         /* 支持TD网络的国家号个数 */
    VOS_UINT8                           ucImsiPlmnListNum;                      /* 根据IMS PLMN决定UTRAN模式是否AUTO SWITCH时，当前IMSI的PLMN在此列表中的都支持自动切换，否则固定为W模 */
    VOS_UINT8                           aucReserve[1];

    VOS_UINT32                          aulTdMccList[NAS_UTRANCTRL_MAX_NVIM_CFG_TD_MCC_LIST_NUM];
    NAS_SIM_FORMAT_PLMN_ID              astImsiPlmnList[NAS_UTRANCTRL_MAX_NVIM_CFG_IMSI_PLMN_LIST_NUM];
}NAS_UTRANCTRL_NVIM_UTRAN_MODE_AUTO_SWITCH_STRU;

/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-8, end */

/* Added by w00167002 for DTS2013112006986, 2013-11-18, begin */


/*****************************************************************************
 结构名    : NAS_UTRANCTRL_NVIM_SMC_CTRL_FLAG_STRU
 结构说明  : en_NV_Item_UTRAN_TDD_SMC_FLAG NV项结构
 1.日    期   : 2013年7月25日
   作    者   : w00167002
   修改内容   : 控制在3G TDD模式下是否需要开启SMC验证标记:中国移动拉萨网络设备在
                TD下不发起SMC流程。
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucIsUtranTddCsSmcNeeded;                /* 控制在3G TDD模式下是否需要开启CS SMC验证标记:0-不需要；1-需要 */
    VOS_UINT8                           ucIsUtranTddPsSmcNeeded;                /* 控制在3G TDD模式下是否需要开启PS SMC验证标记:0-不需要；1-需要 */
    VOS_UINT8                           aucReserved[2];                         /* 保留 */
}NAS_UTRANCTRL_NVIM_SMC_CTRL_FLAG_STRU;

/* Added by w00167002 for DTS2013112006986, 2013-11-18, end */

/* Added by s00190137 for ACC&SPLMN, 2013-10-15 Begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ACC_BAR_PLMN_SEARCH_FLG_STRU
 结构说明  : NAS_MMC_NVIM_ACC_BAR_PLMN_SEARCH_FLG_STRU结构，控制非HPLMN/RPLMN
             网络接入禁止后是否发起PLMN搜网 en_NV_Item_ACC_BAR_PLMN_SEARCH_FLG
 1.日    期   : 2013年10月15日
   作    者   : s00190137
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucAccBarPlmnSearchFlg;
    VOS_UINT8   aucReserve[3];
}NAS_MMC_NVIM_ACC_BAR_PLMN_SEARCH_FLG_STRU;


/* Modified by s00190137 for 256 EOPLMN, 2013-11-26, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_USER_CFG_OPLMN_INFO_STRU
 结构说明  : NAS_MMC_NVIM_USER_CFG_OPLMN_INFO_STRU NVIM项中的用户设置的OPLMN
 1.日    期   : 2013年10月15日
   作    者   : s00190137
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActiveFlg;                                          /* 定制项使能标志 */
    VOS_UINT8                           ucImsiCheckFlg;                                       /* 是否有IMSI列表的白名单，0:不需要 1:需要 */
    VOS_UINT8                           aucVersion[NAS_MMC_NVIM_MAX_USER_OPLMN_VERSION_LEN];  /* 本地配置的版本号 */
    VOS_UINT8                           ucImsiPlmnListNum;                                    /* 定制的IMSI列表个数 */
    VOS_UINT8                           ucOplmnListNum;                                       /* 本地配置的Oplmn的个数 */
    NAS_SIM_FORMAT_PLMN_ID              astImsiPlmnList[NAS_MMC_NVIM_MAX_USER_OPLMN_IMSI_NUM];
    VOS_UINT8                           aucOPlmnList[NAS_MMC_NVIM_MAX_USER_CFG_OPLMN_DATA_LEN];/* OPLMN的PDU数据，和EFOplmn文件一致 */
}NAS_MMC_NVIM_USER_CFG_OPLMN_INFO_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_USER_CFG_OPLMN_EXTEND_STRU
 结构说明  : NAS_MMC_NVIM_USER_CFG_OPLMN_EXTEND_STRU NVIM项中的用户设置的OPLMN
 1.日    期   : 2013年11月26日
   修改内容   : 将NV支持的最大OPLMN个数扩展到256个
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActiveFlg;                                          /* 定制项使能标志 */
    VOS_UINT8                           ucImsiCheckFlg;                                       /* 是否有IMSI列表的白名单，0:不需要 1:需要 */
    VOS_UINT8                           aucVersion[NAS_MMC_NVIM_MAX_USER_OPLMN_VERSION_LEN];  /* 本地配置的版本号 */
    VOS_UINT16                          usOplmnListNum;                                       /* 本地配置的Oplmn的个数 */
    VOS_UINT8                           ucImsiPlmnListNum;                                    /* 定制的IMSI列表个数 */
    VOS_UINT8                           aucReserve[3];
    NAS_SIM_FORMAT_PLMN_ID              astImsiPlmnList[NAS_MMC_NVIM_MAX_USER_OPLMN_IMSI_NUM];
    VOS_UINT8                           aucOPlmnList[NAS_MMC_NVIM_MAX_USER_CFG_OPLMN_DATA_EXTEND_LEN];/* OPLMN的PDU数据，和EFOplmn文件一致 */
}NAS_MMC_NVIM_USER_CFG_OPLMN_EXTEND_STRU;
/* Added by s00190137 for ACC&SPLMN, 2013-10-15 End */
/* Modified by s00190137 for 256 EOPLMN, 2013-11-26, end */

/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CFG_DPLMN_NPLMN_INFO_STRU
 结构说明  : en_NV_Item_CMCC_Cfg_Dplmn_Nplmn NVIM
            en_NV_Item_UNICOM_Cfg_Dplmn_Nplmn
            en_NV_Item_CT_Cfg_Dplmn_Nplmn
            中的DPLMN NPLMN功能信息
 1.日    期   : 2014年7月14日
   作    者   : c00188733
   修改内容   : 漫游优化搜网方案新增DPLMN NPLMN
 2.日    期   : 2014年11月3日
   作    者   : z00161729
   修改内容   : 开机漫游搜网项目修改
*****************************************************************************/
typedef struct
{
    VOS_UINT16                         usDplmnListNum;                                       /* 本地配置的Dplmn的个数 */
    VOS_UINT16                         usNplmnListNum;                                       /* 本地配置的Nplmn的个数 */

    /* DPLMN数据,每6个字节代表一个dplmn信息，第1-3个字节为sim卡格式plmn id，
       第4-5字节为支持的接入技术(0x8000为支持w，0x4000为支持lte，0x0080为支持gsm)，第6字节为域信息:1(cs域注册成功)；2(ps域注册成功)；3(cs ps均注册成功)*/
    VOS_UINT8                          aucDPlmnList[NAS_MMC_NVIM_MAX_CFG_DPLMN_DATA_EXTEND_LEN];

    /* NPLMN数据,每6个字节代表一个nplmn信息，第1-3个字节为sim卡格式plmn id，
       第4-5字节为支持的接入技术(0x8000为支持w，0x4000为支持lte，0x0080为支持gsm)，第6字节为域信息:1(cs域注册成功)；2(ps域注册成功)；3(cs ps均注册成功)*/
    VOS_UINT8                          aucNPlmnList[NAS_MMC_NVIM_MAX_CFG_NPLMN_DATA_EXTEND_LEN];/* NPLMN数据*/
}NAS_MMC_NVIM_CFG_DPLMN_NPLMN_INFO_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CFG_DPLMN_NPLMN_FLAG_STRU
 结构说明  : en_NV_Item_CT_Cfg_Dplmn_Nplmn_Flag NVIM
 1.日    期   : 2014年7月14日
   作    者   : c00188733
   修改内容   : 漫游优化搜网方案新增DPLMN NPLMN使能标志
*****************************************************************************/
typedef struct
{
    VOS_UINT16                         usCfgDplmnNplmnFlag;
    VOS_UINT8                          ucCMCCHplmnNum;
    VOS_UINT8                          aucCMCCHplmnList[NAS_MMC_NVIM_MAX_CFG_HPLMN_NUM];
    VOS_UINT8                          ucUNICOMHplmnNum;
    VOS_UINT8                          aucUNICOMHplmnList[NAS_MMC_NVIM_MAX_CFG_HPLMN_NUM];
    VOS_UINT8                          ucCTHplmnNum;
    VOS_UINT8                          aucCTHplmnList[NAS_MMC_NVIM_MAX_CFG_HPLMN_NUM];
    VOS_UINT8                          aucReserve[3];
}NAS_MMC_NVIM_CFG_DPLMN_NPLMN_FLAG_STRU;


/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, end */
/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-10, begin */

/*****************************************************************************
 结构名    : NAS_MML_USER_CFG_EHPLMN_INFO_STRU
 结构说明  : en_NV_Item_User_Cfg_Ehplmn NVIM项中的用户配置的Ehplmn List
 1.日    期   : 2012年8月9日
   作    者   : w00167002
   修改内容   : V7R1C50_GUTL_PhaseII:CMCC内置EHPLMN功能
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucImsiPlmnListNum;                      /* 定制的IMSI列表个数 */
    VOS_UINT8                           ucEhplmnListNum;                        /* 用户配置的EHplmn的个数 */
    VOS_UINT8                           aucReserve[2];
    NAS_SIM_FORMAT_PLMN_ID              astImsiPlmnList[NAS_MMC_NVIM_MAX_USER_CFG_IMSI_PLMN_NUM];
    NAS_SIM_FORMAT_PLMN_ID              astEhPlmnList[NAS_MMC_NVIM_MAX_USER_CFG_EHPLMN_NUM];
}NAS_MMC_NVIM_USER_CFG_EHPLMN_INFO_STRU;
/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-10, end */

/* Added by wx270776 for DTS2014121701015, 2014-12-19, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_USER_CFG_EXT_EHPLMN_INFO_STRU
 结构说明  : en_NV_Item_User_Cfg_Ehplmn NVIM项中的用户配置的扩充的Ehplmn List组
 1.日    期   : 2014年12月19日
   作    者   : wx270776
   修改内容   : 新增结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT32                                ulNvimEhplmnNum;
    NAS_MMC_NVIM_USER_CFG_EHPLMN_INFO_STRU    astNvimEhplmnInfo[NAS_MMC_NVIM_MAX_USER_CFG_EXT_EHPLMN_NUM];     
}NAS_MMC_NVIM_USER_CFG_EXT_EHPLMN_INFO_STRU;
/* Added by wx270776 for DTS2014121701015, 2014-12-19, end */

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_PLMN_WITH_RAT_STRU
 结构说明  : NAS MML PLMN和接入技术结构
 1.日    期   : 2012年8月9日
   作    者   : w00176964
   修改内容   : 新增
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulMcc;                                  /* MCC,3 bytes */
    VOS_UINT32                          ulMnc;                                  /* MNC,2 or 3 bytes */
    VOS_UINT8                           enRat;
    VOS_UINT8                           aucReserve[3];
}NAS_MMC_NVIM_PLMN_WITH_RAT_STRU;


/*****************************************************************************
 结构名    : NAS_MMC_NVIM_DISABLED_RAT_PLMN_INFO_STRU
 结构说明  : en_NV_Item_DISABLED_RAT_PLMN_INFO NV项结构
  1.日    期   : 2012年8月15日
    作    者   : w00176964
    修改内容   : 新建
  2.日    期   : 2015年4月18日
    作    者   : w00167002
    修改内容   : DTS2015032709270:NV中最大禁止网络的个数为8个。  
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulDisabledRatPlmnNum;                   /* 支持禁止接入技术的PLMN个数,个数为0表示不支持该特性 */

    /* Modified by w00167002 for DTS2015032709270, 2015-4-18, begin */
    NAS_MMC_NVIM_PLMN_WITH_RAT_STRU     astDisabledRatPlmnId[NAS_MML_NVIM_MAX_DISABLED_RAT_PLMN_NUM];/* 禁止接入技术的PLMN和RAT信息 */
    /* Modified by w00167002 for DTS2015032709270, 2015-4-18, end */
    
}NAS_MMC_NVIM_DISABLED_RAT_PLMN_INFO_STRU;
/* Added by w00176964 for  V7R1C50_GUTL_PhaseII, 2012-8-15, end */

/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, begin */
/*****************************************************************************
 枚举名    : NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_FLAG_ENUM
 结构说明  :
 1.日    期: 2013年11月01日
   作    者: l00208543
   修改内容: 新增
*****************************************************************************/
enum NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_FLAG_ENUM
{
    NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_INACTIVE                   = 0,           /* 功能未激活 */
    NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_BLACK                      = 1,           /* 开启黑名单功能 */
    NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_WHITE                      = 2,           /* 开启白名单功能 */
    NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_BUTT
};
typedef VOS_UINT8 NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_FLAG_ENUM_UINT8;

/*****************************************************************************
 枚举名    : NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_ENUM
 结构说明  :
 1.日    期: 2013年11月01日
   作    者: l00208543
   修改内容: 新增
*****************************************************************************/
enum NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_ENUM
{
    NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_GERAN                   = 0,           /* GERAN */
    NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_UTRAN                   = 1,           /* UTRAN包括WCDMA/TDS-CDMA */
    NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_EUTRAN                  = 2,           /* E-UTRAN */
    NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_BUTT
};
typedef VOS_UINT8 NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_ENUM_UINT8;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_STRU
 结构说明  : en_NV_Item_Rat_Forbidden_List_Accord_Imsi_Config NV项结构
  1.日    期   : 2013年11月01日
    作    者   : l00208543
    修改内容   : 新建

    ucSwitchFlag        功能类型：0不激活；
                                  1: astImsiPlmnList 名单内的卡启用禁止RAT功能；
                                  2：对不在astImsiPlmnList 名单中的卡启用禁止RAT功能
    ucImsiPlmnListNum   SIM卡数目；最大支持16；
    ucForbidRatListNum  禁止RAT的数目，最大值支持 8；（目前仅支持NV中配置禁止LTE或者禁止LTE+UTRAN，
                                                       NV中配置其他禁止网络制式的组合认为是非法参数）
    astImsiPlmnList     SIM卡列表，最大支持16组
    aucForbidRatList    禁止的RAT，最大值支持 2；（目前仅支持NV中配置禁止LTE或者禁止LTE+UTRAN，
                                                   NV中配置其他禁止网络制式的组合认为是非法参数）
                        0: GSM
                        1: UTRAN
                        2: E-UTRAN
                        其他值为无效值
*****************************************************************************/
typedef struct
{
    NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_SWITCH_FLAG_ENUM_UINT8  enSwitchFlag;                                         /*功能是否有效及功能的类型  */
    VOS_UINT8                                               ucImsiListNum;                                        /*功能起效的SIM卡数目(黑名单/白名单)  */
    VOS_UINT8                                               ucForbidRatNum;                                       /*禁止RAT的数目  */
    VOS_UINT8                                               aucReserve[1];
    NAS_SIM_FORMAT_PLMN_ID                                  astImsiList[NAS_NVIM_MAX_IMSI_FORBIDDEN_LIST_NUM];        /* SIM卡列表 (黑名单/白名单) */
    NAS_MMC_NVIM_PLATFORM_SUPPORT_RAT_ENUM_UINT8            aenForbidRatList[NAS_NVIM_MAX_RAT_FORBIDDEN_LIST_NUM];    /*禁止的接入技术  */
}NAS_MMC_NVIM_RAT_FORBIDDEN_LIST_STRU;
/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, end */

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CSFB_EMG_CALL_LAI_CHG_LAU_FIRST_CFG_STRU
 结构说明  : NVIM项中的配置csfb 紧急呼到gu后lai改变，mm先进行lau还是先进行呼叫
 1.日    期   : 2012年8月14日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCsfbEmgCallLaiChgLauFirstFlg;
    VOS_UINT8                           aucRserved[1];
}NAS_MMC_NVIM_CSFB_EMG_CALL_LAI_CHG_LAU_FIRST_CFG_STRU;
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_PLMN_EXACTLY_COMPARE_FLAG_STRU
 结构说明  : en_NV_Item_PLMN_EXACTLY_COMPARE_FLG NV项结构
  1.日    期   : 2012年08月16日
    作    者   : t00212959
    修改内容   : DCM定制需求和遗留问题,新建结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucPlmnExactlyCompareFlag;
    VOS_UINT8                           aucRsv[3];                         /* 保留*/
}NAS_MMC_NVIM_PLMN_EXACTLY_COMPARE_FLAG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_HPLMN_REGISTER_CTRL_FLAG_STRU
 结构说明  : en_NV_Item_Hplmn_Register_Ctrl_Flg NV项结构
 1.日    期   : 2012年11月29日
   作    者   : w00176964
   修改内容   : HPLMN注册被拒后是否允许注册标记
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucHplmnRegisterCtrlFlg;                 /* HPLMN注册控制标记 */
    VOS_UINT8                           aucRsv[3];                              /* 保留 */
}NAS_MMC_NVIM_HPLMN_REGISTER_CTRL_FLAG_STRU;
/* Added by w00176964 for DTS2012112902395, 2012-11-29, end */
/*****************************************************************************
结构名    : NAS_NVIM_CELL_SIGN_REPORT_CFG_STRU
结构说明  : 信号质量主动上报相关配置信息
1.日    期  : 2012年11月21日
  作    者  : z00161729
  修改内容  : 支持^cerssi新增结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                                               ucSignThreshold;    /* 信号变化门限,当RSSI变化超过该值，
                                                                                  接入层需要主动上报信号质量，取值0表示接入层按默认值处理 */
    /* Modified by t00212959 for DTS2013010809978, 2013-1-9, begin */
    VOS_UINT8                                               ucMinRptTimerInterval;     /* 间隔上报的时间   */
    /* Modified by t00212959 for DTS2013010809978, 2013-1-9, end */
} NAS_NVIM_CELL_SIGN_REPORT_CFG_STRU;
/* Modified by z00161729 for cerssi and cnmr, 2012-11-21, end */

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_H3G_CTRL_FLAG_STRU
 结构说明  : en_NV_Item_H3g_Ctrl_Flg NV项结构
 1.日    期   : 2013年4月10日
   作    者   : w00176964
   修改内容   : H3G定制场景控制标记
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucH3gCtrlFlg;                           /* H3G定制标记 */
    VOS_UINT8                           aucRsv[3];                              /* 保留 */
}NAS_MMC_NVIM_H3G_CTRL_FLAG_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_UCS2_CUSTOMIZATION_STRU
 结构说明  : NAS_MMC_NVIM_UCS2_CUSTOMIZATION_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 移植
*****************************************************************************/
typedef struct
{
    VOS_UINT16  usUcs2Customization;
}NAS_MMC_NVIM_UCS2_CUSTOMIZATION_STRU;

/*****************************************************************************
 结构名    : SMS_TIMER_LENGTH_STRU
 结构说明  : 短信协议定时器时长结构

1. 日    期   : 2012年12月28日
   作    者   : l00167671
   修改内容   : 新增结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usTc1mLength;
    VOS_UINT16                          usTr1mLength;
    VOS_UINT16                          usTr2mLength;
    VOS_UINT16                          usTramLength;
}SMS_NVIM_TIMER_LENGTH_STRU;

/* Add by z40661 for DTS2012101809567 , 2012-09-25, end */

/*****************************************************************************
 结构名    : NVIM_PRIVATE_CMD_STATUS_RPT_STRU
 结构说明  : 是否主动上报信息
 1.日    期   : 2013年5月10日
   作    者   : s00217060
   修改内容   : 主动上报AT命令控制下移至C核项目主动上报NV结构体定义
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV是否激活标志, 0: 不激活，1: 激活 */
    VOS_UINT8                           ucStatusRptGeneralControl;        /* 私有命令是否允许状态上报 0:不上报，1:上报 */
}NVIM_PRIVATE_CMD_STATUS_RPT_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SPECIAL_ROAM_STRU
 结构说明  : en_NV_Item_Special_Roam_Flag NV项结构
  1.日    期   : 2011年7月20日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV是否激活标志, 0: 不激活，1: 激活  */
    VOS_UINT8                           ucSpecialRoamFlg;                         /* Vplmn与Hplmn不同国家码时,是否允许回到Hplmn,1:允许，0:不允许 */
}NAS_MMC_NVIM_SPECIAL_ROAM_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ENHANCED_HPLMN_SRCH_FLG_STRU
 结构说明  : NAS_MMC_NVIM_ENHANCED_HPLMN_SRCH_FLG_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usEnhancedHplmnSrchFlg;
}NAS_MMC_NVIM_ENHANCED_HPLMN_SRCH_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_CC_NVIM_CCBS_SUPPORT_FLG_STRU
 结构说明  : NAS_CC_NVIM_CCBS_SUPPORT_FLG_STRU结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucCcbsSupportFlg;
    VOS_UINT8   ucReserve;
}NAS_CC_NVIM_CCBS_SUPPORT_FLG_STRU;

/* Added by l00208543 for DTS2013082902121, 2013-8-30, begin */
/*****************************************************************************
 结构名    : NAS_CC_NVIM_TIMER_LEN_STRU
 结构说明  : NAS_CC_NVIM_TIMER_LEN_STRU结构en_NV_Item_CC_TimerLen
  1.日    期   : 2013年8月30日
    作    者   : l00208543
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucT305Len;
    VOS_UINT8   ucT308Len;
    VOS_UINT8   aucReserve[2];
}NAS_CC_NVIM_TIMER_LEN_STRU;
/* Added by l00208543 for DTS2013082902121, 2013-8-30, end */

/* Added by l00208543 for DTS2013100904573, 2013-10-09, begin */
/*****************************************************************************
 结构名    : NAS_NVIM_CHANGE_REG_REJECT_CAUSE_FLG_STRU
 结构说明  : NAS_NVIM_CHANGE_REG_REJECT_CAUSE_FLG_STRU结构en_NV_Item_ChangeRejectCause_Flg
  1.日    期   : 2013年10月09日
    作    者   : l00208543
    修改内容   : 新建
  2.日    期   : 2013年11月19日
    作    者   : l00208543
    修改内容   : 修改，将控制位改为枚举，增加单域控制
*****************************************************************************/
typedef struct
{
    /* Added by l00208543 for DTS2013111904411, 2013-11-19, begin */
    NAS_NVIM_CHANGE_REG_REJ_CAUSE_TYPE_ENUM_UINT8           enChangeRegRejCauCfg;
    /* Added by l00208543 for DTS2013111904411, 2013-11-19, end */
    VOS_UINT8   ucPreferredRegRejCau_HPLMN_EHPLMN;             /* HPLMN/EHPLMN时使用的拒绝原因值 */
    VOS_UINT8   ucPreferredRegRejCau_NOT_HPLMN_EHPLMN;         /* 非HPLMN/EHPLMN时使用的拒绝原因值 */
    VOS_UINT8   aucReserve[1];
}NAS_NVIM_CHANGE_REG_REJECT_CAUSE_FLG_STRU;
/* Added by l00208543 for DTS2013100904573, 2013-10-09, end */

/* Added by l00208543 for V9R1 reject 17, 2014-4-29, begin */
/*****************************************************************************
 结构名    : NAS_NVIM_ROAMINGREJECT_NORETYR_CFG_STRU
 结构说明  : NAS_NVIM_ROAMINGREJECT_NORETYR_CFG_STRU结构en_NV_Item_ROAMING_REJECT_NORETRY_CFG
  1.日    期   : 2014年4月29日
    作    者   : l00208543
    修改内容   : 新建

*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucNoRetryRejectCauseNum;
    VOS_UINT8   aucNoRetryRejectCause[NAS_NVIM_MAX_ROAMING_REJECT_NO_RETRY_CAUSE_NUM];
    VOS_UINT8   aucReserve[3];
}NAS_NVIM_ROAMINGREJECT_NORETYR_CFG_STRU;
/* Added by l00208543 for V9R1 reject 17, 2014-4-29, end */

/* Added byl00215384 for DTS2014021006453, 2014-02-18, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_IGNORE_AUTH_REJ_CFG_STRU
 结构说明  : en_NV_Item_Remove_Auth_Rej_CFG NV项结构


 1.日    期   : 2014年2月18日
   作    者   : l00215384
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
   VOS_UINT8                           ucIgnoreAuthRejFlg;
   VOS_UINT8                           ucMaxAuthRejNo;
   VOS_UINT8                           aucReserved[2];
}NAS_MMC_NVIM_IGNORE_AUTH_REJ_CFG_STRU;
/* Added byl00215384 for DTS2014021006453, 2014-02-18, end */

/*****************************************************************************
 结构名    : NAS_NV_GWMAC_ADDR_STRU
 结构说明  : NV_GWMAC_ADDR(39026)结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8 ucStatus;
    VOS_UINT8 ucReserved1;
    VOS_UINT8 aucE5GwMacAddr[18];
}NAS_NV_GWMAC_ADDR_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_E5_ROAMING_WHITE_LIST_SUPPORT_FLG_STRU
 结构说明  : E5_RoamingWhiteList_Support_Flg(39330)结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8 aucE5_RoamingWhiteList_Support_Flg[2];
}NAS_NVIM_E5_ROAMING_WHITE_LIST_SUPPORT_FLG_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_NDIS_DIALUP_ADDRESS_STRU
 结构说明  : NDIS_DIALUP_ADDRESS(39330)结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32 ulNDIS_DIALUP_ADDRESS;
}NAS_NVIM_NDIS_DIALUP_ADDRESS_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_NV_BREATH_LED_STR_STRU
 结构说明  : NV_BREATH_LED_STR(9051)结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8 ucBreOnTime; /*Range:[0,7]*/
    VOS_UINT8 ucBreOffTime; /*Range:[0,7]*/
    VOS_UINT8 ucBreRiseTime; /*Range:[0,5]*/
    VOS_UINT8 ucBreFallTime; /*Range:[0,5]*/
}NAS_NVIM_NV_BREATH_LED_STR_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_NV_WIFI_Key_STRU
 结构说明  : NV_WIFI_Key(50012)结构(废弃)
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
VOS_UINT8  aucwlAuthMode[16];
VOS_UINT8  aucBasicEncryptionModes[5];
VOS_UINT8  aucWPAEncryptionModes[5];
VOS_UINT8  aucwlKeys1[27];
VOS_UINT8  aucwlKeys2[27];
VOS_UINT8  aucwlKeys3[27];
VOS_UINT8  aucwlKeys4[27];
VOS_UINT32 ulwlKeyIndex;
VOS_UINT8  aucwlWpaPsk[65];
VOS_UINT8  ucwlWpsEnbl;
VOS_UINT8  ucwlWpsCfg;
VOS_UINT8  ucReserved;
}NAS_NVIM_NV_WIFI_KEY_STRU;

/*****************************************************************************
 结构名    : NAS_NVIM_NV_PRI_VERSION_STRU
 结构说明  : NV_PRI_VERSION(50023)结构
  1.日    期   : 2013年5月22日
    作    者   : l00167671
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
VOS_UINT8 aucPRIVersion[32];
VOS_UINT8 aucReserve[32];
}NAS_NVIM_NV_PRI_VERSION_STRU;

/*****************************************************************************
结构名    : NAS_NVIM_SYSTEM_APP_CONFIG_STRU
结构说明  : en_NV_Item_System_APP_Config(121)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16     usSysAppConfigType;
}NAS_NVIM_SYSTEM_APP_CONFIG_STRU;

/*****************************************************************************
结构名    : NAS_MMC_NVIM_NETWORK_CAPABILITY_STRU
结构说明  : en_NV_Item_NetworkCapability(8197)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8 aucNetworkCapability[NV_ITEM_NET_CAPABILITY_MAX_SIZE];
}NAS_MMC_NVIM_NETWORK_CAPABILITY_STRU;

/*****************************************************************************
结构名    : NAS_NVIM_AUTOATTACH_STRU
结构说明  : en_NV_Item_Autoattach(8202)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usAutoattachFlag;
}NAS_NVIM_AUTOATTACH_STRU;

/*****************************************************************************
结构名    : NAS_NVIM_SELPLMN_MODE_STRU
结构说明  : en_NV_Item_SelPlmn_Mode(8214)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16 usSelPlmnMode;
}NAS_NVIM_SELPLMN_MODE_STRU;

/*****************************************************************************
结构名    : NAS_MMA_NVIM_ACCESS_MODE_STRU
结构说明  : en_NV_Item_MMA_AccessMode(8232)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   aucAccessMode[2];
}NAS_MMA_NVIM_ACCESS_MODE_STRU;

/*****************************************************************************
结构名    : NAS_NVIM_MS_CLASS_STRU
结构说明  : en_NV_Item_MMA_MsClass(8233)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucMsClass;
    VOS_UINT8   ucReserved;
}NAS_NVIM_MS_CLASS_STRU;

/*****************************************************************************
结构名    : NAS_MMA_NVIM_RF_Auto_Test_Flag_STRU
结构说明  : en_NV_Item_RF_Auto_Test_Flag(8262)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16  usRfAutoTestFlg;
}NAS_MMA_NVIM_RF_AUTO_TEST_FLAG_STRU;

/*****************************************************************************
结构名    : NAS_NVIM_HPLMN_FIRST_TIMER_STRU
结构说明  : en_NV_Item_HPlmnFirstTimer(8276)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucHplmnTimerLen;
    VOS_UINT8   ucReserved;
}NAS_NVIM_HPLMN_FIRST_TIMER_STRU;

/*****************************************************************************
结构名    : NAS_MMC_NVIM_SUPPORT_3GPP_RELEASE_STRU
结构说明  : en_NV_Item_NAS_Supported_3GPP_Release(8288)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   aucSupported3GppRelease[NAS_MMC_NVIM_SUPPORTED_3GPP_RELEASE_SIZE];
}NAS_MMC_NVIM_SUPPORT_3GPP_RELEASE_STRU;

/*****************************************************************************
结构名    : NAS_MMC_NVIM_LAST_IMSI_STRU
结构说明  : en_NV_Item_Last_Imsi(8325)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucValid;
    VOS_UINT8   aucImsi[NAS_MMC_NVIM_MAX_IMSI_LEN];
}NAS_MMC_NVIM_LAST_IMSI_STRU;

/*****************************************************************************
结构名    : NAS_MMA_NVIM_ROAMING_BROKER_STRU
结构说明  : en_NV_Item_Roaming_Broker(8328)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   aucRoamingBroker[2];
}NAS_MMA_NVIM_ROAMING_BROKER_STRU;

/*****************************************************************************
结构名    : NAS_MMC_NVIM_USE_SINGLE_RPLMN_STRU
结构说明  : en_NV_Item_Use_Single_Rplmn_When_Area_Lost(8343)结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16  usUseSingleRplmnFlag;
}NAS_MMC_NVIM_USE_SINGLE_RPLMN_STRU;

/* en_NV_Item_EquivalentPlmn 8215 */
/*****************************************************************************
结构名    : NVIM_PLMN_VALUE_STRU
结构说明  : en_NV_Item_EquivalentPlmn(8215)结构引用#
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8    ucMcc[NVIM_MAX_MCC_SIZE];
    VOS_UINT8    ucMnc[NVIM_MAX_MNC_SIZE];
}NVIM_PLMN_VALUE_STRU;

/*****************************************************************************
结构名    : NVIM_EQUIVALENT_PLMN_LIST_STRU
结构说明  : en_NV_Item_EquivalentPlmn(8215)结构#
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8             ucCount;
    NVIM_PLMN_VALUE_STRU  struPlmnList[NVIM_MAX_EPLMN_NUM];
    VOS_UINT8             aucReserve[3];   /*NV项相关的结构体，在4字节方式下，需手动补齐空洞*/
}NVIM_EQUIVALENT_PLMN_LIST_STRU;

/*en_NV_Item_Support_Freqbands 8229*/
/*
NVIM_UE_SUPPORT_FREQ_BAND_STRU结构说明:
usWcdmaBand和usGsmBand用Bit位表示用户设置的频段，bit1代表频段I,bit2代表频段II,
依次类推,比特位为1,表示支持该频段.下表是比特位和频段对应关系:
-------------------------------------------------------------------------------
        bit8       bit7      bit6     bit5    bit4     bit3      bit2     bit1
-------------------------------------------------------------------------------
WCDMA   900(VIII)  2600(VII) 800(VI)  850(V)  1700(IV) 1800(III) 1900(II) 2100(I) oct1
        spare      spare     spare    spare   spare    spare     spare   J1700(IX)oct2
-------------------------------------------------------------------------------
GSM频段 1900(VIII) 1800(VII) E900(VI) R900(V) P900(IV) 850(III)  480(II)  450(I)  oct3
        spare      spare     spare    spare   spare    spare     spare    700(IX) oct4
-------------------------------------------------------------------------------
aucUeSupportWcdmaBand和aucUeSupportGsmBand用数组表示UE支持的频段,并以存储顺序的
先后表示频段优先顺序,用0xff表示无效.

例如:
oct1-oct4分别是：0x03,0x00,0x7B,0x00
   则代表用户设置频段为：W：WCDMA-I-2100, WCDMA-II-1900
                         G：850(III),P900(IV),R900(V),E900(VI),1800(VII)
oct5-oct16分别是:2,5,1,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff
   则代表UE支持W频段I,II,V,优先顺序是:II,V,I.
oct17-oct28分别是:4,5,8,7,6,3,0xff,0xff,0xff,0xff,0xff,0xff
   则代表UE支持G频段III,IV,V,VI,VII,VIII,优先顺序是:IV,V,VIII,VII,VI,III.
*/
/*****************************************************************************
结构名    : NAS_NVIM_UE_SUPPORT_FREQ_BAND_STRU
结构说明  : en_NV_Item_Support_Freqbands(8229)结构#
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
2.日    期   : 2014年8月1日
  作    者   : b00269685
  修改内容   : NV拆分
*****************************************************************************/
typedef struct
{
    /* Modified by w00176964 for DTS201212345678, 2012-3-5, begin */
    VOS_UINT32                  ulWcdmaBand;
    VOS_UINT32                  ulGsmBand;
    /* Modified by w00176964 for DTS201212345678, 2012-3-5, end */
    /* Modified by b00269685 for DTS2014071803206, 2014-8-1, begin */
    VOS_UINT8                   aucReserved1[12];
    VOS_UINT8                   aucReserved2[12];
    VOS_UINT8                   aucReserved[24];        /* 为保证nv长度一致保留 */
    /* Modified by b00269685 for DTS2014071803206, 2014-8-1, end */
}NVIM_UE_SUPPORT_FREQ_BAND_STRU;

/*en_NV_Item_Roam_Capa 8266*/
/*****************************************************************************
 结构名    : NAS_NVIM_ROAM_CFG_INFO_STRU
 结构说明  : en_NV_Item_Roam_Capa(8266) NV项结构#
  1.日    期   : 2011年8月18日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                               ucRoamFeatureFlg;                   /*记录漫游特性是否激活,VOS_FALSE:不激活,VOS_TRUE:激活*/
    VOS_UINT8                               ucRoamCapability;                   /*记录用户设置的漫游属性*/
}NAS_NVIM_ROAM_CFG_INFO_STRU;

/*en_NV_Item_CustomizeService 8271*/
/*****************************************************************************
结构名    : NAS_NVIM_CUSTOMIZE_SERVICE_STRU
结构说明  : en_NV_Item_CustomizeService(8271)结构#
            用于保存运营商定制要求业务配置
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulStatus;           /*是否激活，0不激活，1激活 */
    VOS_UINT32                          ulCustomizeService; /*终端说明书是1个byte，为了没有空洞，扩充成4byte，高3byte保留*/
}NAS_NVIM_CUSTOMIZE_SERVICE_STRU;

/*en_NV_Item_RPlmnWithRat 8275*/
/*****************************************************************************
 结构名    : NAS_MM_NVIM_RPLMN_WITH_RAT_STRU
 结构说明  : en_NV_Item_RPlmnWithRat(8275) NV项结构
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    NAS_NVIM_PLMN_ID_STRU               stGRplmn;                               /* G RPLMN信息 */
    NAS_NVIM_PLMN_ID_STRU               stWRplmn;                               /* W RPLMN信息*/
    VOS_UINT8                           ucLastRplmnRat;                         /* 上次关机时驻留网络的接入技术0:GSM;1:WCDMA;0xFF:无效值 */
    VOS_UINT8                           ucLastRplmnRatEnableFlg;                /* 0:NV 未激活; 1:NV激活 */
    VOS_UINT8                           aucReserved[2];                          /* 保留 */
}NAS_NVIM_RPLMN_WITH_RAT_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SEARCH_HPLMN_TIMER_STRU
 结构说明  : en_NV_Item_SearchHplmnTtimerValue NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                            ucStatus;                              /* 0:NV 未激活; 1:NV 激活 */
    VOS_UINT8                            ucReserve;                             /* 保留未用 */
    VOS_UINT16                           usSrchHplmnTimerValue;                 /* VPLMN下非首次搜HPLMN时间,单位:分钟 */

}NAS_MMC_NVIM_SEARCH_HPLMN_TIMER_STRU;

/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, begin */
/*****************************************************************************
 结构名    : NAS_MML_HIGH_PRIO_PLMN_REFRESH_TRIGGER_BG_SEARCH_CFG_STRU
 结构说明  : en_NV_Item_HIGH_PRIO_PLMN_REFRESH_TRIGGER_BG_SEARCH_CFG NV项结构
 1.日    期   : 2015年4月28日
   作    者   : c00318887
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucTriggerBGSearchFlag;  /* 0: mmc收到高优先级PLMN更新时不启动BG SEARCH; 1:mmc收到高优先级PLMN更新时启动BG SEARCH */
    VOS_UINT8                           ucReserved;
    VOS_UINT16                          usSearchDelayLen;             /* BG SEARCH Delay 时长, 单位: 秒  */
}NAS_MMC_NVIM_HIGH_PRIO_PLMN_REFRESH_TRIGGER_BG_SEARCH_STRU;

/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, end */


/*en_NV_Item_EFust_Service_Cfg 8285*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_EFUST_SERVICE_CFG_STRU
 结构说明  : en_NV_Item_EFust_Service_Cfg(8285) NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV项是否激活0：未激活；1：激活 */
    VOS_UINT8                           ucForbidReg2GNetWork;                   /* 0：EFust GSM接入标志定制项去使能。定制项不激活，不检查EFust 27、38。允许GSM接入。
                                                                                   定制项激活，该定制项激活后，UE根据SIM卡中的EFust 27、38位，确定是否允许GSM接入，
                                                                                   如果EFUST文件禁止这两位（同时设置为0），则禁止GSM接入注册，否则GSM可以接入。
                                                                                   注意：SIM卡中不存在EFust 27、38位，因此该功能仅针对USIM卡有效。1：EFust GSM接入标志定制项使能 */
    VOS_UINT8                           ucForbidSndMsg;                         /* 0：EFust短信发送标志定制项去使能。定制项不激活，不检查EFust 10、12。允许SMS发送。
                                                                                   1：EFust短信发送标志定制项使能。NV项激活，该定制项激活后，UE根据SIM卡中EFUST的10、12位，
                                                                                   确定是否禁止短信发送,如果禁止这两位（同时设置为0），则禁止发送SMS；否则，短信可以发送。*/
    VOS_UINT8                           ucReserved[13];
}NAS_MMC_NVIM_EFUST_SERVICE_CFG_STRU;

/*en_NV_Item_UE_MSCR_VERSION 8289*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_MSCR_VERSION_STRU
 结构说明  : en_NV_Item_UE_MSCR_VERSION(8289) NV项结构
 1.日    期   : 2011年7月14日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV是否激活标志, 0: 不激活，1: 激活 */
    VOS_UINT8                           ucUeMscrVersion;                        /* 终端上报的SGSN版本 */
}NAS_MMC_NVIM_MSCR_VERSION_STRU;

/*en_NV_Item_UE_SGSNR_VERSION 8290*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SGSNR_VERSION_STRU
 结构说明  : en_NV_Item_UE_SGSNR_VERSION(8290) NV项结构
 1.日    期   : 2011年7月14日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV是否激活标志, 0: 不激活，1: 激活 */
    VOS_UINT8                           ucUeSgsnrVersion;                       /* 终端上报的SGSN版本 */
}NAS_MMC_NVIM_SGSNR_VERSION_STRU;

/*en_NV_Item_SteeringofRoaming_SUPPORT_CTRL 8292*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_CS_REJ_SEARCH_SUPPORT_STRU
 结构说明  : en_NV_Item_SteeringofRoaming_SUPPORT_CTRL(8292) NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;                               /* NV是否激活标志, 0: 不激活，1: 激活 */
    VOS_UINT8                           ucCsRejSearchSupportFlg;                /* vodafone的搜网定制需求,CS域失败四次后下发搜网请求,VOS_FALSE:不支持,VOS_TRUE:支持 */
}NAS_MMC_NVIM_CS_REJ_SEARCH_SUPPORT_STRU;

/*en_NV_Item_Max_Forb_Roam_La 8320*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_MAX_FORB_ROAM_LA_STRU
 结构说明  : en_NV_Item_Max_Forb_Roam_La(8320) NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucMaxForbRoamLaFlg;                     /* NV中设置的最大禁止LA个数是否有效: VOS_TRUE:valid;VOS_FALSE:INVALID */
    VOS_UINT8                           ucMaxForbRoamLaNum;                     /* NV中设置的最大禁止LA个数 */
}NAS_MMC_NVIM_MAX_FORB_ROAM_LA_STRU;

/*en_NV_Item_Default_Max_Hplmn_Srch_Peri 8321*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_DEFAULT_MAX_HPLMN_PERIOD_STRU
 结构说明  : en_NV_Item_Default_Hplmn_Srch_Peri(8321) NV项结构
  1.日    期   : 2011年7月20日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucDefaultMaxHplmnPeriFlg;               /* 默认最大的HPLMN搜索周期是否有效标志,VOS_TRUE:valid;VOS_FALSE:INVALID */
    VOS_UINT8                           ucDefaultMaxHplmnTim;                   /* 用户可以定义默认的最大的HPLMN搜索周期 */
}NAS_MMC_NVIM_DEFAULT_MAX_HPLMN_PERIOD_STRU;

/*en_NV_Item_USSD_Apha_To_Ascii 8327*/
/*控制USSD转换字符表*/
/*****************************************************************************
 结构名    : NAS_SSA_NVIM_ALPHA_to_ASCII_STRU
 结构说明  : en_NV_Item_USSD_Apha_To_Ascii(8327) NV项结构
  1.日    期   : 2011年7月20日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                       ucStatus;            /*是否激活，0不激活，1激活 */
    VOS_UINT8                       ucAlphaTransMode;    /* 字符表转换*/
}NAS_SSA_NVIM_ALPHA_to_ASCII_STRU;

/*en_NV_Item_Register_Fail_Cnt 8338*/
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_REG_FAIL_CNT_STRU
 结构说明  : en_NV_Item_Register_Fail_Cnt(8338) NV项结构
  1.日    期   : 2011年7月25日
    作    者   : z00161729
    修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvActiveFlag;                         /* 当前NV项是否激活 */
    VOS_UINT8                           ucRegFailCnt;                           /* NV中设置的注册失败的次数，默认值为2，即注册失败两次后发起搜网。 */
}NAS_MMC_NVIM_REG_FAIL_CNT_STRU;

/*en_NV_Item_CREG_CGREG_CI_Four_Byte_Rpt 8345*/
/* VDF需求: CREG/CGREG命令<CI>域是否以4字节上报的NV项控制结构体 */
/*****************************************************************************
结构名    : NAS_NV_CREG_CGREG_CI_FOUR_BYTE_RPT_STRU
结构说明  : en_NV_Item_CREG_CGREG_CI_Four_Byte_Rpt(8345)结构#
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucStatus;                        /* 1: NV有效标志位，0：无效 */
    VOS_UINT8   ucCiBytesRpt;                    /* <CI>域上报字节数标志，0：2字节上报, 1：4字节上报 */
}NAS_NV_CREG_CGREG_CI_FOUR_BYTE_RPT_STRU;

/*****************************************************************************
 结构名    : NAS_MMC_NVIM_DAIL_REJECT_CFG_STRU
 结构说明  : 记录en_NV_Item__Dell_Reject_Config NV项内容，拨号被拒11,12,13,15,other cause,建链失败,网络没响应等原因定制NV
 1.日    期   : 2012年3月6日
   作    者   : w00176964
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucEnableFlg;                            /* 拨号被拒是否使能 VOS-TRUE:拨号被拒支持 VOS_FALSE:拨号被拒不支持 */
    VOS_UINT8                           aucReserve[1];
}NAS_MMC_NVIM_DAIL_REJECT_CFG_STRU;

/*h00218138, NDIS NV Struct, start, 2013-5-25*/
/* en_NV_Item_NDIS_DHCP_DEF_LEASE_TIME 8344 */
typedef struct
{
    VOS_UINT32                          ulDhcpLeaseHour;    /*Range:[0x1,0x2250]*/
}NDIS_NV_DHCP_LEASE_HOUR_STRU;

typedef struct
{
    VOS_UINT32                          ulIpv6Mtu;          /*Range:[1280,65535]*/
}NDIS_NV_IPV6_MTU_STRU;
/*h00218138, NDIS NV Struct, end, 2013-5-25*/

/*****************************************************************************
结构名    : NAS_NVIM_CCALLSTATE_RPT_STATUS_STRU
结构说明  : en_NV_Item_CCallState_Rpt_Status nvid 9116(已废弃)
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucStatus;
    VOS_UINT8                           ucReserved;
}NAS_NVIM_CCALLSTATE_RPT_STATUS_STRU;

/*****************************************************************************
 结构名    : NVIM_PLMN_EXACTLY_COMPARE_FLAG_STRU
 结构说明  : PLMN比较是否进行精确比较的方式的标记
 修改历史  :
 1.日    期    : 2012年08月7日
   作    者    : l00128652
   修改内容    : 新建结构体
*****************************************************************************/
typedef struct
{
   VOS_UINT8                            ucPlmnExactlyCompareFlag;               /* PLMN比较是否进行精确比较的方式的标记 */
   VOS_UINT8                            aucRsv[3];                              /* 保留位 */
}NVIM_PLMN_EXACTLY_COMPARE_FLAG_STRU;

/* Added by z00220246 for DSDA Phase II, 2012-12-25, Begin */
/*****************************************************************************
结构名    : PLATFORM_RAT_TYPE_ENUM
结构说明  : 接入技术

  1.日    期   : 2012年12月25日
    作    者   : z00220246
    修改内容   : 创建
*******************************************************************************/
enum PLATFORM_RAT_TYPE_ENUM
{
    PLATFORM_RAT_GSM,                                                       /*GSM接入技术 */
    PLATFORM_RAT_WCDMA,                                                     /* WCDMA接入技术 */
    PLATFORM_RAT_LTE,                                                       /* LTE接入技术 */
    PLATFORM_RAT_TDS,                                                       /* TDS接入技术 */
    /* Added by Y00213812 for CDMA 1X Iteration 0, 2014-07-15, begin */
    PLATFORM_RAT_1X,                                                        /* CDMA-1X接入技术 */
    PLATFORM_RAT_EVDO,                                                      /* CDMA-EV_DO接入技术 */
    /* Added by Y00213812 for CDMA 1X Iteration 0, 2014-07-15, end*/

    PLATFORM_RAT_BUTT
};
typedef VOS_UINT16 PLATFORM_RAT_TYPE_ENUM_UINT16;

#define PLATFORM_MAX_RAT_NUM            (7)                                    /* 接入技术最大值 */

/*****************************************************************************
结构名    : PLATAFORM_RAT_CAPABILITY_STRU
结构说明  : 平台支持的接入技术

  1.日    期   : 2012年12月25日
    作    者   : z00220246
    修改内容   : 创建
*******************************************************************************/
typedef struct
{
    VOS_UINT16                           usRatNum;                              /* 接入技术的数目*/
    PLATFORM_RAT_TYPE_ENUM_UINT16        aenRatList[PLATFORM_MAX_RAT_NUM];  /* 接入技术 */
}PLATAFORM_RAT_CAPABILITY_STRU;
/* Added by z00220246 for DSDA Phase II, 2012-12-25, End */

/*en_NV_Item_Rplmn 8216*/
/*****************************************************************************
 结构名    : NAS_NVIM_RPLMN_INFO_STRU
 结构说明  : en_NV_Item_Rplmn(8216) NV项结构(已废弃)
1.日    期   : 2013年5月22日
  作    者   : m00217266
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucRplmnInfo[56];
}NAS_NVIM_RPLMN_INFO_STRU;

/* Modified by z00161729 for V9R1_SVLTE, 2013-6-20, begin */
/*****************************************************************************
 结构名    : SVLTE_SUPPORT_FLAG_STRU
 结构说明  : en_NV_Item_SVLTE_FLAG NV项结构
 1.日    期   : 2013年6月20日
   作    者   : z00161729
   修改内容   : SVLTE功能是否支持:0-不支持；1-支持
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSvlteSupportFlag;                     /* SVLTE功能是否支持:0-不支持；1-支持 */
    VOS_UINT8                           aucReserved[3];                         /* 保留 */
}SVLTE_SUPPORT_FLAG_STRU;


/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ENABLE_LTE_TIMER_LEN_STRU
 结构说明  : en_NV_Item_Enable_Lte_Timer_Len NV项结构
 1.日    期   : 2013年6月3日
   作    者   : z00161729
   修改内容   : enable lte定时器时长
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNvimActiveFlag;                       /* 0: nv项未激活；1:nv项激活 */
    VOS_UINT8                           ucCsPsMode1EnableLteTimerLen;           /* 1)cs ps mode1 L联合注册eps only成功cs被拒#16/#17/#22达最大次数场景disable lte时启动enable lte定时器时长
                                                                                   2)cs ps mode1 L联合注册cs eps均失败原因值other cause 达最大次数场景disable lte启动enable lte定时器时长,单位:分钟， nv项激活时如果为0默认54分钟 */
    VOS_UINT8                           ucCsfbEmgCallEnableLteTimerLen;         /* L下紧急呼叫无法正常csfb到gu，通过搜网到gu场景disable lte启动enable lte定时器时长，单位:分钟， nv项激活时如果为0默认5分钟 */
    VOS_UINT8                           ucReserved;
}NAS_MMC_NVIM_ENABLE_LTE_TIMER_LEN_STRU;

/* Modified by z00161729 for V9R1_SVLTE, 2013-6-20, end */

/* Added by c00318887 for 移植T3402 , 2015-6-17, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_DISABLE_LTE_START_T3402_ENABLE_LTE_CFG_STRU
 结构说明  : en_NV_Item_DISABLE_LTE_START_T3402_ENABLE_LTE_CFG NV项结构
             ucT3402Flag 用来控制Disable LTE 后到再次把LTE 恢复所需的定时器时长:
             如果ucT3402Flag 是0，则Disable LTE 后到再次把LTE 恢复所需的定时器时长由NV_Item_Enable_Lte_Timer_Len  0x2404（9220）设置值决定
             如果 ucT3402Flag 配置为 1，在以下场景将使用LMM_MMC_T3402_LEN_NOTIFY消息中的长度
            1) EPS ONLY成功,CS被拒18,CS被拒16,17,22,other cause,EPS尝试次数达到5次
            2) 联合EPS注册被拒 #19, 次数达到最大值
            3) 联合EPS注册被拒 #301, 次数达到最大值 
            4) 联合EPS注册被拒 #other cause, 次数达到最大值
            5) 联合EPS注册被拒 #401, 次数达到最大值
 1.日    期   : 2015年4月28日
   作    者   : c00318887
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucT3402Flag;                           /* 0: 不使用LMM_MMC_T3402_LEN_NOTIFY消息中的长度; 1:使用LMM_MMC_T3402_LEN_NOTIFY消息中的长度 */
    VOS_UINT8                           ucHighPrioRatTimerNotEnableLteFlag;    /* 1:高优先级RAT HPLMN TIMER 超时不重新ENABLE lte；0: 高优先级RAT HPLMN TIMER 超时重新ENABLE lte */
    VOS_UINT8                           ucReserved1;
    VOS_UINT8                           ucReserved2;
}NAS_MMC_NVIM_DISABLE_LTE_START_T3402_ENABLE_LTE_CFG_STRU;

/* Added by c00318887 for 移植T3402 , 2015-6-17, end */


/* Added by z00234330 for DTS2013052301419, 2013-05-23, begin */
/*****************************************************************************
结构名    : NAS_MMC_NVIM_ISR_CFG_STRU
结构说明  : ISR相关配置信息
1.日    期  : 2013年05月23日
  作    者  : z00234330
  修改内容  : ISR通过NVIM判断是否支持
*****************************************************************************/
typedef struct
{
    VOS_UINT8                                               ucIsrSupport;       /* ISR ???? */
    VOS_UINT8                                               ucReserve1;
} NAS_NVIM_ISR_CFG_STRU;

/* Added by z00234330 for DTS2013052301419, 2013-05-23, end */

/* Added by w00242748 for DTS2013072200933, 2013-7-25, begin */
/*****************************************************************************
 结构名    : CSFB_MT_FOLLOW_ON_SUPPORT_FLAG_STRU
 结构说明  : en_NV_Item_CSFB_MT_RAU_FOLLOW_ON_FLAG NV项结构
 1.日    期   : 2013年7月25日
   作    者   : w00242748
   修改内容   : Csfb mt流程中，RAU是否需要带follow on标记:0-不需要；1-需要
 2.日    期   : 2014年6月10日
   作    者   : w00242748
   修改内容   : Csfb mo流程中，RAU是否需要带follow on标记:0-不需要；1-需要
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucIsRauNeedFollowOnCsfbMtFlg;           /* Csfb mt流程中，RAU是否需要带follow on标记:0-不需要；1-需要 */
    VOS_UINT8                           ucIsRauNeedFollowOnCsfbMoFlg;           /* Csfb mo流程中，RAU是否需要带follow on标记:0-不需要；1-需要 */
    VOS_UINT8                           aucReserved[2];                         /* 保留 */
}NAS_MMC_CSFB_RAU_FOLLOW_ON_FLAG_STRU;
/* Modified by w00242748 for DTS2014053105098, 2014-6-10, end */
/* Added by w00242748 for DTS2013072200933, 2013-7-25, end */

/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-18, begin */
/*****************************************************************************
 结构名    : NV_DSDA_PLMN_SEARCH_ENHANCED_CFG_STRU
 结构说明  : en_NV_Item_DSDA_PLMN_SEARCH_ENHANCED_CFG NV项结构
  功能说明: 控制通过两个Modem的信息交互的增强型的搜索策略；当前支持的策略为：
  1)  通过另一Modem的PLMN信息,控制FDD搜网是否跳过的策略。比如GUTL+G的版本，当副卡已经驻留在国内G网的时候，主卡搜网可以跳过FDD的搜索（中移动国内只需要支持TDD模式）。
  2)  通过Modem1的GSM上报的L、TDS邻区信息, Modem0不支持GSM的情况下，T/L丢网后，能够根据传递的邻区频点快速搜索到TDS/LTE。
 1.日    期   : 2013年11月18日
   作    者   : z00161729
   修改内容   : 新建
 2.日    期   : 2014年1月26日
   作    者   : z00161729
   修改内容   : DTS2014012305088：支持增强NCELL搜网，如果Modem1传递过来的邻区信息不存在的情况下，通过历史频点支持NCELL搜索
*****************************************************************************/
typedef struct
{
   VOS_UINT16                           usSolutionMask;/*控制通过两个Modem的信息交互的增强型的搜索策略；Bit位控制各个搜网策略；bitn=0：第n个策略关闭；bitn=1：第n个策略开启；
                                                         目前只有bit0、bit1 有效；
                                                         BIT0：控制双Modem下通过另一Modem的PLMN信息控制FDD搜网是否跳过的策略是否启动。
                                                         BIT1：通过Modem1的GSM上报的L、TDS邻区信息, Modem0不支持GSM的情况下，T/L丢网后，能够根据传递的邻区频点快速搜索到TDS/LTE；
                                                               如果Modem1传递过来的邻区信息不存在的情况下，也能通过历史频点支持NCELL搜索邻区快速搜索的频率由ucSolution2NcellSearchTimer决定。
                                                         BIT2~BIT15:预留*/
   VOS_UINT8                            ucSolution2NcellQuickSearchTimer;       /*邻区频点快速搜索策略的一阶段时间间隔（单位秒）。*/

   /* Modified by z00161729 for DTS2014012305088, 2014-1-26, begin */
   VOS_UINT8                            ucSolution2NcellQuickSearchTimer2;      /* 邻区频点快速搜索策略的二阶段时间间隔（单位秒）。*/
   VOS_UINT8                            aucAdditonCfg[4];
   /* Modified by z00161729 for DTS2014012305088, 2014-1-26, end */
}NV_DSDA_PLMN_SEARCH_ENHANCED_CFG_STRU;

/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-18, end */

/* added by l65478 for DTS2013102508485 2014-01-13 begin */
/*****************************************************************************
结构名    : NV_NAS_GMM_REL_CONN_AFTER_PDP_DEACT_STRU
结构说明  : en_NV_Item_NAS_GMM_REL_CONN_AFTER_PDP_DEACT(9140)结构
1.日    期   : 2014年01月13日
  作    者   : l65478
  修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8   ucRelFlg;
    VOS_UINT8   ucReserve;
}NV_NAS_GMM_REL_CONN_AFTER_PDP_DEACT_STRU;
/* added by l65478 for DTS2013102508485 2014-01-13 end */

/* Added by f62575 for DTS2014012600456, 2014-02-10,Begin */
/*****************************************************************************
结构名    : NAS_NVIM_WG_RF_MAIN_BAND_STRU
结构说明  : en_NV_Item_WG_RF_MAIN_BAND结构
  1.日    期   : 2014年02月10日
    作    者   : f62575
    修改内容   : DTS2014012600456: en_NV_Item_WG_RF_MAIN_BAND数据修改为从内存中获取
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulWband;                                /* 支持的WCDMA主集通路 */
    VOS_UINT32                          ulWbandExt;                             /* 支持的WCDMA主集通路扩展字段 */
    VOS_UINT32                          ulGband;                                /* 支持的GSM主集通路 */
}NAS_NVIM_WG_RF_MAIN_BAND_STRU;
/* Added by f62575 for DTS2014012600456, 2014-02-10,End   */


/* Added by f00261443 for VoltePhaseIII , 2013-12-16, begin */
/*****************************************************************************
 结构名    : NAS_MMC_IMS_VOICE_MOBILE_MANAGEMENT
 结构说明  : en_NV_Item_IMS_VOICE_MOBILE_MANAGEMENT NV项结构
 1.日    期   : 2013年12月16日
   作    者   : f00261443
   修改内容   : ISR激活状态下，从L异系统到GU，如果LAI或RAI未发生变化，是否需要
                进行LAU或是RAU
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucImsVoiceInterSysLauEnable;           /* ISR激活后，异系统从L变换到GU，LAI未改变，是否需要强制LAU */
    VOS_UINT8                           ucImsVoiceMMEnable;         /* IMS移动性管理 NV */
    VOS_UINT8                           aucReserved[2];             /* 保留 */
}NAS_MMC_IMS_VOICE_MOBILE_MANAGEMENT;
/* Added by f00261443 for VoltePhaseIII , 2013-12-16, end */

/* Modified by z00161729 for DTS2014022206794, 2014-2-25, begin */
/*****************************************************************************
结构名    : NAS_MMC_LTE_DISABLED_USE_LTE_INFO_FLAG_STRU
结构说明  : en_NV_Item_LTE_DISABLED_USE_LTE_INFO_FLAG结构
  1.日    期   : 2014年02月25日
    作    者   : z00161729
    修改内容   : DTS2014022206794:GCF 9.2.1.2.1b/9.2.3.2.3/9.2.1.2.1失败disable lte时rau需要从L获取安全上下文

*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLDisabledRauUseLInfoFlag;             /* l disabled后rau是否需要从l获取安全上下文或guti映射信息，vos_true:需要获取；vos_false:无需获取*/
    VOS_UINT8                           ucReserved[3];
}NAS_MMC_LTE_DISABLED_USE_LTE_INFO_FLAG_STRU;

/* Modified by z00161729 for DTS2014022206794, 2014-2-25, end */

/* Add by f62575 for DTS2014012902032, 2014-02-13, begin */
/*****************************************************************************
结构名    : NAS_MML_CS_ONLY_DATA_SERVICE_SUPPORT_FLG_STRU
结构说明  : en_NV_Item_CS_ONLY_DATA_SERVICE_SUPPORT_FLG结构
  1.日    期   : 2014年02月13日
    作    者   : f62575
    修改内容   : DTS2014012902032:
                 NV项en_NV_Item_CS_ONLY_DATA_SERVICE_SUPPORT_FLG的结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActiveFlg;                            /* 是否激活功能 */
    VOS_UINT8                           ucCsOnlyDataServiceSupportFlg;          /* PS注册被禁止情况下，是否允许数据业务触发注册的标志 */
}NAS_MML_CS_ONLY_DATA_SERVICE_SUPPORT_FLG_STRU;
/* Add by f62575 for DTS2014012902032, 2014-02-13, end */
/* Added by w00176964 for High_Rat_Hplmn_Search, 2014-2-19, begin */
/* Modified by b00269685 for DTS2014101301568, 2014-10-29, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_HIGH_PRIO_RAT_HPLMN_TIMER_INFO_STRU
 结构说明  : en_NV_Item_HIGH_PRIO_RAT_HPLMN_TIMER_INFO NV项结构
 1.日    期   : 2014年2月19日
   作    者   : w00176964
   修改内容   : 新建
 2.日    期   : 2014年10月25日
   作    者   : b00269685
   修改内容   : 此NV已废弃，放在这里只是为了编译通过
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActiveFLg;                             /* 该定时器是否使能 */                       /* TD开始背景搜的次数 */
    VOS_UINT8                           aucRsv[3];
    VOS_UINT32                          ulFirstSearchTimeLen;                   /* high prio rat timer定时器第一次的时长 单位:秒 */
    VOS_UINT32                          ulFirstSearchTimeCount;                 /* high prio rat timer定时器第一次时长的限制搜索次数 */
    VOS_UINT32                          ulNonFirstSearchTimeLen;                /* high prio rat timer定时器非首次的时长 单位:秒 */
    VOS_UINT32                          ulRetrySearchTimeLen;                   /* high prio rat 搜被中止或不能立即发起重试的时长 单位:秒*/
}NAS_MMC_NVIM_HIGH_PRIO_RAT_HPLMN_TIMER_INFO_STRU;
/* Modified by b00269685 for DTS2014101301568, 2014-10-29, end */
/* Added by w00176964 for High_Rat_Hplmn_Search, 2014-2-19, end */

/* Added by b00269685 for DTS2014101301568, 2014-10-29, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_HIGH_PRIO_RAT_HPLMN_TIMER_CFG_STRU
 结构说明  : en_NV_Item_HIGH_PRIO_RAT_HPLMN_TIMER_CFG NV项结构
 1.日    期   : 2014年10月25日
   作    者   : b00269685
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucActiveFLg;                            /* 该定时器是否使能 */
    VOS_UINT8                           ucTdThreshold;                          /* TD开始背景搜的次数 */
    VOS_UINT8                           aucRsv[2];
    VOS_UINT32                          ulFirstSearchTimeLen;                   /* high prio rat timer定时器第一次的时长 单位:秒 */
    VOS_UINT32                          ulFirstSearchTimeCount;                 /* high prio rat timer定时器第一次时长的限制搜索次数 */
    VOS_UINT32                          ulNonFirstSearchTimeLen;                /* high prio rat timer定时器非首次的时长 单位:秒 */
    VOS_UINT32                          ulRetrySearchTimeLen;                   /* high prio rat 搜被中止或不能立即发起重试的时长 单位:秒*/
}NAS_MMC_NVIM_HIGH_PRIO_RAT_HPLMN_TIMER_CFG_STRU;
/* Added by b00269685 for DTS2014101301568, 2014-10-29, end */


/* Added by s00217060 for ultra_flash_csfb, 2014-05-30, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ULTRA_FLASH_CSFB_SUPPORT_FLG_STRU
 结构说明  : en_NV_Item_Ultra_Flash_Csfb_Support_Flg NV项结构
 1.日    期   : 2014年5月30日
   作    者   : s00217060
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucUltraFlashCsfbSupportFLg;                 /* 是否支持ultra flash csfb */
    VOS_UINT8                           aucRsv[3];
}NAS_MMC_NVIM_ULTRA_FLASH_CSFB_SUPPORT_FLG_STRU;
/* Added by s00217060 for ultra_flash_csfb, 2014-05-30, end */

/* Added by B00269685 for DTS2014061603311, 2014-6-13, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_3GPP2_Uplmn_Not_Pref_STRU
 结构说明  : en_NV_Item_3GPP2_Uplmn_Not_Pref_Flg NV项结构
 1.日    期   : 2014年6月13日
   作    者   : B00269685
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           uc3GPP2UplmnNotPrefFlg;                    /* 是否开启3GPP2 pref plmn */
    VOS_UINT8                           aucRsv[3];
}NAS_MMC_NVIM_3GPP2_UPLMN_NOT_PREF_STRU;
/* Added by B00269685 for DTS2014061603311, 2014-6-13, end */

/* Modified by w00242748 for DTS2014063003419, 2014-7-14, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_SYSCFG_TRIGGER_PLMN_SEARCH_CFG_STRU
 结构说明  : en_NV_Item_Syscfg_Trigger_Plmn_Search_Cfg NV项结构
 1.日    期   : 2014年7月14日
   作    者   : w00242748
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucHighPrioRatPlmnSrchFlg;                  /* 是否开启高优先级接入技术搜网 */
    VOS_UINT8                           aucReserved1[3];
}NAS_MMC_NVIM_SYSCFG_TRIGGER_PLMN_SEARCH_CFG_STRU;
/* Modified by w00242748 for DTS2014063003419, 2014-7-14, end */

/* Added by b00269685 for DSDS IV, 2014-7-17, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_DSDS_END_SESSION_DELAY_STRU
 结构说明  : en_NV_Item_DSDS_END_SESSION_DELAY NV项结构
 1.日    期   : 2014年7月17日
   作    者   : B00269685
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                           ulCsRegEndSessionDelayTime;              /* Lau延迟时长，单位:毫秒 */
    VOS_UINT32                           ulPsRegEndSessionDelayTime;              /* Rau延迟时长，单位:毫秒 */
    VOS_UINT32                           ulReserve1;
    VOS_UINT32                           ulReserve2;
} NAS_MMC_NVIM_DSDS_END_SESSION_DELAY_STRU;
/* Added by b00269685 for DSDS IV, 2014-7-17, end */

/* Added by w00176964 for CDMA 1X Iteration 1, 2014-8-18, begin */
/*****************************************************************************
 结构名    : CNAS_NVIM_1X_SYSTEM_STRU
 结构说明  : 1x system结构
 1.日    期   : 2014年8月18日
   作    者   : w00176964
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16                                              usSid;
    VOS_UINT16                                              usNid;
    VOS_UINT16                                              usBandClass;
    VOS_UINT16                                              usChannel;
}CNAS_NVIM_1X_SYSTEM_STRU;

/*****************************************************************************
 结构名    : CNAS_XSD_NVIM_1X_MRU_LIST_STRU
 结构说明  : en_NV_Item_1X_MRU_LIST NV项结构
 1.日    期   : 2014年8月18日
   作    者   : w00176964
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSysNum;
    VOS_UINT8                           aucReserve[3];
    CNAS_NVIM_1X_SYSTEM_STRU            astSystem[CNAS_NVIM_MAX_1X_MRU_SYS_NUM];
}CNAS_NVIM_1X_MRU_LIST_STRU;

/* Added by w00176964 for CDMA 1X Iteration 1, 2014-8-18, end */

/* Added by h00285180 for DTS2014110307415, 2014-10-20, begin */
/*****************************************************************************
结构名称    :NAS_MMC_NVIM_ADAPTION_CAUSE_STRU
使用说明    :用户配置网侧原因的数据结构
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCnCause;     /* 网侧原因值 */
    VOS_UINT8                           ucHplmnCause;  /* 用户配置匹配HPLMN的原因值 */
    VOS_UINT8                           ucVplmnCause;  /* 用户配置匹配VPLMN的原因值 */
    VOS_UINT8                           aucReserved[1];
}NAS_MMC_NVIM_ADAPTION_CAUSE_STRU;

/*****************************************************************************
结构名称    :NAS_MMC_NVIM_CHANGE_NW_CAUSE_CFG_STRU
使用说明    :en_NV_Item_ChangeNWCause_CFG NV项结构
*****************************************************************************/
typedef struct
{
    /* CS域注册流程(LU)拒绝原因值替换信息 */
    VOS_UINT8                           ucCsRegCauseNum; 
    VOS_UINT8                           aucReserved1[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astCsRegAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    /* PS域注册流程(ATTACH/RAU)拒绝原因值替换信息 */
    VOS_UINT8                           ucPsRegCauseNum;   
    VOS_UINT8                           aucReserved2[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astPsRegAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    /* 网络GPRS Detach 流程拒绝原因值替换信息 */
    VOS_UINT8                           ucDetachCauseNum;  
    VOS_UINT8                           aucReserved3[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astDetachAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    /* GMM service request流程拒绝原因值替换信息 */
    VOS_UINT8                           ucPsSerRejCauseNum;   
    VOS_UINT8                           aucReserved4[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astPsSerRejAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    /* MM ABORT流程拒绝原因值替换信息 */
    VOS_UINT8                           ucMmAbortCauseNum;    
    VOS_UINT8                           aucReserved5[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astMmAbortAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    /* CM Service流程拒绝原因值替换信息 */
    VOS_UINT8                           ucCmSerRejCauseNum;   
    VOS_UINT8                           aucReserved6[3];
    NAS_MMC_NVIM_ADAPTION_CAUSE_STRU    astCmSerRejAdaptCause[NAS_MMC_NVIM_MAX_CAUSE_NUM];

    VOS_UINT8                           ucHplmnPsRejCauseChangTo17MaxNum; /* HPLMN PS/EPS域拒绝原因值修改为#17的最大次数 */
    VOS_UINT8                           ucHplmnCsRejCauseChangTo17MaxNum; /* HPLMN CS域拒绝原因值修改为#17的最大次数 */
    VOS_UINT8                           ucVplmnPsRejCauseChangTo17MaxNum; /* VPLMN PS/EPS域拒绝原因值修改为#17的最大次数 */
    VOS_UINT8                           ucVplmnCsRejCauseChangTo17MaxNum; /* VPLMN CS域拒绝原因值修改为#17的最大次数 */    
}NAS_MMC_NVIM_CHANGE_NW_CAUSE_CFG_STRU;
/* Added by h00285180 for DTS2014110307415, 2014-10-20, end   */

/* Added by h00285180 for DTS2014110307375 , 2014-11-04, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_REL_PS_SIGNAL_CON_CFG_STRU
 结构说明  : en_NV_Item_REL_PS_SIGNAL_CON_CFG NV项结构
 1.日    期   : 2014年11月04日
 作    者   : h00285180
 修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucRelPsSignalConFlg;/* 是否开启数据域网络防呆功能 */
    VOS_UINT8                           aucReserved[3];
    VOS_UINT32                          ulT3340Len;         /* 配置的GMM T3340的时长,单位:秒 */
}NAS_MMC_NVIM_REL_PS_SIGNAL_CON_CFG_STRU;
/* Added by h00285180 for DTS2014110307375 , 2014-11-04, end */

/* Added by h00285180 for DTS2015010401946, 2015-01-05, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_LTE_REJ_CAUSE_14_CFG_STRU
 结构说明  : en_NV_Item_LTE_REJ_CAUSE_14_CFG NV项结构
 1.日    期   : 2015年1月5日
   作    者   : h00285180
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLteRejCause14Flg;               /* 是否开启LTE #14原因拒绝优化，0: 未开启；1:开启 */
    VOS_UINT8                           aucReserved[1];
    VOS_UINT16                          usLteRejCause14EnableLteTimerLen; /* LTE #14原因拒绝时，通过搜网到gu场景disable lte启动enable lte定时器时长，单位:分钟 */ 
}NAS_MMC_NVIM_LTE_REJ_CAUSE_14_CFG_STRU;
/* Added by h00285180 for DTS2015010401946, 2014-01-05, end   */

/* Added by b00269685 for DTS2015031909305, 2015-3-20, begin */
/*****************************************************************************
 结构名    : NAS_MMC_NVIM_ROAM_DISPLAY_CFG_STRU
 结构说明  : en_NV_Item_Roam_Display_Cfg NV项结构
 1.日    期   : 2015年3月20日
   作    者   : B00269685
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucHplmnInEplmnDisplayHomeFlg;
    VOS_UINT8                           ucReserved1;
    VOS_UINT8                           ucReserved2;
    VOS_UINT8                           ucReserved3;
}NAS_MMC_NVIM_ROAM_DISPLAY_CFG_STRU;
/* Added by b00269685 for DTS2015031909305, 2015-3-20, end */

/* Added by b00269685 for protect_csfb_mt, 2015-5-4, begin */
/*****************************************************************************
 结构名    : NAS_MMC_MT_CSFB_PAGING_PROCEDURE_LEN_STRU
 结构说明  : en_NV_Item_Mt_Csfb_Paging_Procedure_Len NV项结构
 1.日    期   : 2015年5月4日
   作    者   : B00269685
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usMtCsfbPagingProcedureLen;
    VOS_UINT8                           ucReserved1;
    VOS_UINT8                           ucReserved2;
}NAS_MMC_NVIM_PROTECT_MT_CSFB_PAGING_PROCEDURE_LEN_STRU;
/* Added by b00269685 for protect_csfb_mt, 2015-5-4, end */

/* added by y00176023 for DTS2015091602371 澳电低优先级ANYCELL搜LTE定制, 2015-9-17, begin */
typedef struct
{
    VOS_UINT8                           ucLowPrioAnycellSearchLteFlg;
    VOS_UINT8                           ucReserved1;
    VOS_UINT8                           ucReserved2;
    VOS_UINT8                           ucReserved3;
}NAS_NVIM_LOW_PRIO_ANYCELL_SEARCH_LTE_FLG_STRU;
/* added by y00176023 for DTS2015091602371 澳电低优先级ANYCELL搜LTE定制, 2015-9-17, end */


/* Added by j00174725 for DTS2015051106584, 2015-04-08, begin */
/*****************************************************************************
 枚举名    : NAS_SMS_PS_CONCATENATE_ENUM
 结构说明  : PS域短信连续发送枚举定义
  1.日    期   : 2015年05月18日
    作    者   : j00174725
    修改内容   : 新增
*****************************************************************************/
enum NAS_SMS_PS_CONCATENATE_ENUM
{
    NAS_SMS_PS_CONCATENATE_DISABLE      = 0,
    NAS_SMS_PS_CONCATENATE_ENABLE,

    NAS_SMS_PS_CONCATENATE_BUTT
};
typedef VOS_UINT8 NAS_SMS_PS_CONCATENATE_ENUM_UINT8;

/*****************************************************************************
 结构名称  : NAS_NV_SMS_PS_CTRL_STRU
 结构说明  : PS域短信控制

  1.日    期   : 2015年05月18日
    作    者   : j00174725
    修改内容   : 新增结构
*****************************************************************************/
typedef struct
{
    NAS_SMS_PS_CONCATENATE_ENUM_UINT8   enSmsConcatenateFlag;
    VOS_UINT8                           ucReserved1;
    VOS_UINT8                           ucReserved2;
    VOS_UINT8                           ucReserved3;
} NAS_NV_SMS_PS_CTRL_STRU;
/* Added by j00174725 for DTS2015051106584, 2015-04-08, End */



/* Added by j00174725 for ECC(DTS2017021705267), 2017-02-18, begin */
/*****************************************************************************
 结构名    : NAS_NVIM_EMC_CATE_SUPPORT_ECALL_CFG_STRU
 结构说明  : en_NV_Item_Emc_Cate_Support_ECALL_CFG NV项结构
 1. 日    期   : 2017年02月18日
    作    者   : j00174725
    修改内容   : 新建

*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucEmcCateSupportEcallFlag; 
    VOS_UINT8                           ucBit8Is1OtherBitOKFlag;
    VOS_UINT8                           ucReserved2;
    VOS_UINT8                           ucReserved3;
}NAS_NVIM_EMC_CATE_SUPPORT_ECALL_CFG_STRU;
/* Added by j00174725 for ECC(DTS2017021705267), 2017-02-18, end */


/*****************************************************************************
  6 UNION
*****************************************************************************/


/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/


/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/


/*****************************************************************************
  9 OTHERS
*****************************************************************************/










#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif





#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of NasNvInterface.h */
