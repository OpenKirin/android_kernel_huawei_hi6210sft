/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : MtcMmaInterface.h
  版 本 号   : 初稿
  作    者   : j00174725
  生成日期   : 2013年08月13日
  最近修改   :
  功能描述   : MTC 与 MMA模块共用头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2013年08月13日
    作    者   : j00174725
    修改内容   : 创建文件

******************************************************************************/

#ifndef _MTCMMAINTERFACE_H_
#define _MTCMMAINTERFACE_H_

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "PsTypeDef.h"

/* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, begin */
#include "NasNvInterface.h"
/* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, end */

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
/* Modified by z00161729 for svlte support ncell search, 2013-12-24, begin */
#define MTC_MMA_MAX_EQUPLMN_NUM         (18)                                    /* 等效的PLMN的最大个数 */
#define MTC_MMA_TDS_ARFCN_MAX_NUM       (9)                                     /* TDD频点列表最大个数 */
#define MTC_MMA_LTE_ARFCN_MAX_NUM       (8)                                     /* LTE频点列表最大个数 */
/* Modified by z00161729 for svlte support ncell search, 2013-12-24, end */

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/*****************************************************************************
枚举名    : MTC_MMA_MSG_ID_ENUM
结构说明  : MTC模块和MMA模块之间的消息

  1.日    期   : 2013年08月13日
    作    者   : 蒋德彬/j00174725
    修改内容   : V9R1 干扰控制项目
  2.日    期   : 2013年11月22日
    作    者   : z00161729
    修改内容   : SVLTE优化G-TL ps切换性能修改
  3.日    期   : 2013年12月23日
    作    者   : z00161729
    修改内容   : SVLTE支持NCELL搜网
*****************************************************************************/
enum MTC_MMA_MSG_ID_ENUM
{
    /* 消息名称 */                         /* 消息ID */                         /* 备注 */
    /* MTC --> MMA */
    /* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-23, begin */
    ID_MTC_MMA_OTHER_MODEM_INFO_NOTIFY  = 0x0001,                               /* _H2ASN_MsgChoice MTC_MMA_OTHER_MODEM_INFO_NOTIFY_STRU */
    /* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-23, end */

    /* Modified by z00161729 for svlte support ncell search, 2013-12-23, begin */
    ID_MTC_MMA_NCELL_INFO_IND           = 0x0003,                               /* _H2ASN_MsgChoice MTC_MMA_NCELL_INFO_IND_STRU */
    /* Modified by z00161729 for svlte support ncell search, 2013-12-23, end */

    /* Modified by z00161729 for DTS2014010202583, 2014-1-7, begin */
    ID_MTC_MMA_PS_TRANSFER_IND          = 0x0005,                               /* _H2ASN_MsgChoice MTC_MMA_PS_TRANSFER_IND_STRU */
    /* Modified by z00161729 for DTS2014010202583, 2014-1-7, end */

    /* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, begin */
    ID_MTC_MMA_OTHER_MODEM_DPLMN_NPLMN_INFO_NOTIFY = 0x000b,                     /* _H2ASN_MsgChoice MTC_MMA_OTHER_MODEM_DPLMN_NPLMN_INFO_NOTIFY_STRU */
    /* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, end */


    /* MMA --> MTC */
    ID_MMA_MTC_POWER_STATE_IND          = 0x0002,                               /* _H2ASN_MsgChoice MMA_MTC_POWER_STATE_IND_STRU */
    ID_MMA_MTC_RAT_MODE_IND             = 0x0004,                               /* _H2ASN_MsgChoice MMA_MTC_RAT_MODE_IND_STRU */

    /* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-22, begin */
    ID_MMA_MTC_CURR_CAMP_PLMN_INFO_IND  = 0x0006,                               /* _H2ASN_MsgChoice MMA_MTC_CURR_CAMP_PLMN_INFO_IND_STRU */
    /* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-22, end */

    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, begin */
    ID_MMA_MTC_EPLMN_INFO_IND           = 0x0008,                               /* _H2ASN_MsgChoice MMA_MTC_EPLMN_INFO_IND_STRU*/
    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, end */

    /* Modified by z00161729 for DTS2014012305088, 2014-1-23, begin */
    ID_MMA_MTC_REG_STATUS_IND           = 0x000a,                               /* _H2ASN_MsgChoice MMA_MTC_REG_STATUS_IND_STRU */
    /* Modified by z00161729 for DTS2014012305088, 2014-1-23, end */

    /* Added by l00198894 for Volte Rank1, 2015-03-13, begin */
    ID_MMA_MTC_IMSA_STATE_IND           = 0x000c,                               /* _H2ASN_MsgChoice MMA_MTC_IMSA_STATE_IND_STRU */
    /* Added by l00198894 for Volte Rank1, 2015-03-13, end */


    ID_MMA_MTC_MSG_ID_BUTT
};
typedef VOS_UINT32  MTC_MMA_MSG_ID_ENUM_UINT32;

/*****************************************************************************
枚举名    : MTC_MODEM_POWER_STATE_ENUM
结构说明  : MTC模块开机状态枚举

  1.日    期   : 2013年08月13日
    作    者   : 蒋德彬/j00174725
    修改内容   : V9R1 干扰控制项目
*****************************************************************************/
enum MTC_MODEM_POWER_STATE_ENUM
{
    MTC_MODEM_POWER_OFF                 = 0x00,
    MTC_MODEM_POWER_ON                  = 0x01,

    MTC_MODEM_POWER_STATE_BUTT
};
typedef VOS_UINT8  MTC_MODEM_POWER_STATE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : MTC_RATMODE_ENUM
 枚举说明  : MMA通知MTC模块当前的接入模式

  1.日    期   : 2013年08月12日
    作    者   : l00198894
    修改内容   : V9R1 干扰控制项目
*****************************************************************************/
enum MTC_RATMODE_ENUM
{
    MTC_RATMODE_GSM                     = 0x00,
    MTC_RATMODE_WCDMA                   = 0x01,
    MTC_RATMODE_LTE                     = 0x02,
    MTC_RATMODE_TDS                     = 0x03,
    MTC_RATMODE_BUTT
};
typedef VOS_UINT8 MTC_RATMODE_ENUM_UINT8;

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
/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-23, begin */
/*****************************************************************************
 结构名    : MTC_MMA_PLMN_ID_STRU
 结构说明  : plmn信息
 1.日    期   : 2013年11月23日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulMcc;
    VOS_UINT32                          ulMnc;
} MTC_MMA_PLMN_ID_STRU;

/* Modified by z00161729 for svlte support ncell search, 2013-12-24, begin */
/*****************************************************************************
 结构名    : MTC_MMA_EPLMN_INFO_STRU
 结构说明  : 等效plmn信息
 1.日    期   : 2013年12月23日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucEquPlmnNum;                           /* 当前EquPLMN的个数 */
    VOS_UINT8                           aucReserved[3];
    MTC_MMA_PLMN_ID_STRU                astEquPlmnAddr[MTC_MMA_MAX_EQUPLMN_NUM];/* 当前EquPLMN列表 */
}MTC_MMA_EPLMN_INFO_STRU;

/* Modified by z00161729 for svlte support ncell search, 2013-12-24, end */

/*****************************************************************************
 结构名    : MTC_MMA_OTHER_MODEM_INFO_NOTIFY_STRU
 结构说明  : modem1的信息目前只有驻留信息
 1.日    期   : 2013年11月23日
   作    者   : z00161729
   修改内容   : 新建
 2.日    期   : 2013年12月24日
   作    者   : z00161729
   修改内容   : SVLTE支持NCELL搜网
*****************************************************************************/
typedef struct
{
    MSG_HEADER_STRU              stMsgHeader;                                   /*_H2ASN_Skip*/
    VOS_UINT32                   bitOpCurrCampPlmnId:1;

    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, begin */
    VOS_UINT32                   bitOpEplmnInfo:1;
    VOS_UINT32                   bitSpare:30;
    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, end */

    MTC_MMA_PLMN_ID_STRU         stCurrCampPlmnId;                              /* 用于填写当前驻留小区的PLMN，如果丢网或者关机等非驻留状态，统一填写全0xff */

    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, begin */
    MTC_MMA_EPLMN_INFO_STRU      stEplmnInfo;
    /* Modified by z00161729 for svlte support ncell search, 2013-12-24, end */

} MTC_MMA_OTHER_MODEM_INFO_NOTIFY_STRU;

/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-23, end */

/* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, begin */
/*****************************************************************************
 结构名    : MTC_MMA_OTHER_MODEM_DPLMN_NPLMN_INFO_NOTIFY_STRU
 结构说明  : modem1的dplmn和nplmn信息
 1.日    期   : 2014年11月3日
   作    者   : z00161729
   修改内容   : 开机漫游搜网项目修改
*****************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                                        stMsgHeader;                                   /*_H2ASN_Skip*/

    NAS_MMC_NVIM_CFG_DPLMN_NPLMN_INFO_STRU                 stCmccDplmnNplmnInfo;
    NAS_MMC_NVIM_CFG_DPLMN_NPLMN_INFO_STRU                 stUnicomDplmnNplmnInfo;
    NAS_MMC_NVIM_CFG_DPLMN_NPLMN_INFO_STRU                 stCtDplmnNplmnInfo;
}MTC_MMA_OTHER_MODEM_DPLMN_NPLMN_INFO_NOTIFY_STRU;

/* Modified by z00161729 for DPLMN&NPLMN, 2014-11-4, end */

/* Modified by z00161729 for DTS2014010202583, 2014-1-7, begin */
/*******************************************************************************
结构名    : MTC_MMA_PS_TRANSFER_IND_STRU
结构说明  : ID_MTC_MMA_PS_TRANSFER_IND_STRU的消息结构
1.日    期   : 2014年1月5日
  作    者   : z00161729
  修改内容   : 新建
*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    VOS_UINT8                           enSolutionCfg;                          /* PS域迁移方案 */
    VOS_UINT8                           ucCause;                                /* PS域切换原因值 */
    VOS_UINT8                           aucReserved[2];                         /*保留位*/
} MTC_MMA_PS_TRANSFER_IND_STRU;

/* Modified by z00161729 for DTS2014010202583, 2014-1-7, end */

/*******************************************************************************
 结构名    : MMA_MTC_POWER_STATE_IND_STRU
 结构说明  : ID_MMA_MTC_POWER_STATE_IND的消息结构

 1.日    期   : 2013年08月12日
   作    者   : 蒋德彬/j00174725
   修改内容   : 新生成
*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_MODEM_POWER_STATE_ENUM_UINT8    enPowerState;                           /* 当前开关机状态 */
    VOS_UINT8                           aucReserved[3];
} MMA_MTC_POWER_STATE_IND_STRU;

/*******************************************************************************
 结构名    : MMA_MTC_IMSA_STATE_IND_STRU
 结构说明  : ID_MMA_MTC_POWER_STATE_IND的消息结构

 1.日    期   : 2015年03月13日
   作    者   : l00198894
   修改内容   : VOLTE Randk1方案项目
*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_MODEM_POWER_STATE_ENUM_UINT8    enPowerState;                           /* IMSA开关机状态 */
    VOS_UINT8                           aucReserved[3];
} MMA_MTC_IMSA_STATE_IND_STRU;

/*******************************************************************************
 结构名    : MMA_MTC_RAT_MODE_IND_STRU
 结构说明  : ID_MMA_MTC_RAT_MODE_IND的消息结构

 1.日    期   : 2013年08月12日
   作    者   : l00198894
   修改内容   : 新生成
*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_RATMODE_ENUM_UINT8              enRatMode;                              /* 当前接入模式 */
    VOS_UINT8                           aucReserved[3];
} MMA_MTC_RAT_MODE_IND_STRU;


/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-22, begin */
/*******************************************************************************
 结构名    : MMA_MTC_CURR_CAMP_PLMN_INFO_IND_STRU
 结构说明  : MMA_MTC_CURR_CAMP_PLMN_INFO_IND的消息结构

 1.日    期   : 2013年11月22日
   作    者   : z00161729
   修改内容   : 新生成
 2.日    期   : 2014年01月17日
   作    者   : l00198894
   修改内容   : V9R1C53 C+L 离网重选项目
*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_MMA_PLMN_ID_STRU                stPlmnId;                               /* 当前驻留网络 */
    MTC_RATMODE_ENUM_UINT8              enRatMode;                              /* 当前接入模式 */
    VOS_UINT8                           ucIsForbiddenPlmnFlag;                  /* 当前驻留网络是否为禁止网络标识 */
    VOS_UINT8                           ucPsAttachAllowFlag;
    /* Modified by l00198894 for V9R1 C+L PsTransfer, 2014-01-17, begin */
    VOS_UINT8                           ucPsSupportFlg;                         /* 当前网络是否支持PS域 */
    /* Modified by l00198894 for V9R1 C+L PsTransfer, 2014-01-17, end */
} MMA_MTC_CURR_CAMP_PLMN_INFO_IND_STRU;
/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-22, end */

/* Modified by z00161729 for svlte support ncell search, 2013-12-23, begin */
/*******************************************************************************
 结构名    : MTC_MMA_TDS_NCELL_INFO_STRU
 结构说明  : GSM下的TDS频点列表

 1.日    期   : 2013年12月24日
   作    者   : z00161729
   修改内容   : SVLTE支持NCELL搜网

*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucTdsArfcnNum;                          /* 0表示TDD频点不存在 */
    VOS_UINT8                           ucReserved;
    VOS_UINT16                          ausTdsArfcnList[MTC_MMA_TDS_ARFCN_MAX_NUM];
}MTC_MMA_TDS_NCELL_INFO_STRU;

/*******************************************************************************
 结构名    : MTC_MMA_LTE_NCELL_INFO_STRU
 结构说明  : GSM下的LTE频点列表

 1.日    期   : 2013年12月24日
   作    者   : z00161729
   修改内容   : SVLTE支持NCELL搜网

*******************************************************************************/
typedef struct
{
    VOS_UINT8                           ucLteArfcnNum;                          /* 0表示LTE频点不存在 */
    VOS_UINT8                           aucReserved[3];
    VOS_UINT16                          ausLteArfcnList[MTC_MMA_LTE_ARFCN_MAX_NUM];
}MTC_MMA_LTE_NCELL_INFO_STRU;


/*******************************************************************************
 结构名    : MTC_MMA_TDS_LTE_NCELL_INFO_IND_STRU
 结构说明  : ID_MTC_MMA_TDD_LTE_NCELL_INFO_IND消息对应的结构，
             包括GSM下的TDS/LTE邻区结构中的TDS/LTE的频点列表

 1.日    期   : 2013年12月23日
   作    者   : z00161729
   修改内容   : 新生成结构

*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_MMA_TDS_NCELL_INFO_STRU         stTdsNcellInfo;
    MTC_MMA_LTE_NCELL_INFO_STRU         stLteNcellInfo;
}MTC_MMA_NCELL_INFO_IND_STRU;


/*****************************************************************************
 结构名    : MMA_MTC_EPLMN_INFO_IND_STRU
 结构说明  : 等效plmn信息
 1.日    期   : 2013年12月23日
   作    者   : z00161729
   修改内容   : 新建
*****************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    MTC_MMA_EPLMN_INFO_STRU             stEplmnInfo;
}MMA_MTC_EPLMN_INFO_IND_STRU;

/* Modified by z00161729 for svlte support ncell search, 2013-12-23, end */
/* Modified by z00161729 for DTS2014012305088, 2014-1-23, begin */
/*******************************************************************************
 结构名    : MMA_MTC_REG_STATUS_IND_STRU
 结构说明  : MMA_MTC_REG_STATUS_IND_STRU的消息结构

 1.日    期   : 2014年1月23日
   作    者   : z00161729
   修改内容   : DTS2014012305088:svlte特性开启卡无效场景mtc无需上报pstransfer:0

*******************************************************************************/
typedef struct
{
    MSG_HEADER_STRU                     stMsgHeader;                            /*_H2ASN_Skip*/
    VOS_UINT8                           ucIsUsimValidFlg;                       /* 标识卡是否有效，1:有效；0:无效*/
    VOS_UINT8                           aucReserved[3];
} MMA_MTC_REG_STATUS_IND_STRU;

/* Modified by z00161729 for DTS2014012305088, 2014-1-23, end */
/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/

/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    MTC_MMA_MSG_ID_ENUM_UINT32          enMsgID;                                /*_H2ASN_MsgChoice_Export MTC_MMA_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          MTC_MMA_MSG_ID_ENUM_UINT32
    ****************************************************************************/
} MTC_MMA_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    MTC_MMA_MSG_DATA                    stMsgData;
} MtcMmaInterface_MSG;

/*****************************************************************************
  10 函数声明
*****************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of MtcMmaInterface.h */

