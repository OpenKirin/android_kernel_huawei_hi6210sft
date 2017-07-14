/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : TafMtcApi.h
  版 本 号   : 初稿
  作    者   : j00174725
  生成日期   : 2014年06月16日
  最近修改   :
  功能描述   :
  函数列表   :
  修改历史   :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 创建文件

******************************************************************************/
#ifndef _TAF_MTC_API_H_
#define _TAF_MTC_API_H_


/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "vos.h"
#include "TafTypeDef.h"
#include "PsTypeDef.h"
#include "TafApi.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


#pragma pack(4)

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define TAF_MTC_MSG_ID_BASE             (0x1000)                               /* MTC 提供的消息ID基数, 从0x1001开始，主要为了避免与现有消息重合 */

/*****************************************************************************
  3 枚举定义
*****************************************************************************/

/*****************************************************************************
 枚举名称: TAF_MTC_MSG_ID_ENUM
 枚举说明: MTC内部消息ID

 修改历史      :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 新增枚举
*****************************************************************************/
enum TAF_MTC_MSG_ID_ENUM
{
    /* 外挂CDMA连接状态 */
    ID_MSG_MTC_CDMA_CONN_STATE_IND      = TAF_MTC_MSG_ID_BASE + 0x0001,        /* _H2ASN_MsgChoice  TAF_MTC_CDMA_STATE_IND_STRU */
    ID_MSG_MTC_MODEM_SERVICE_CONN_STATE_IND,                                    /* _H2ASN_MsgChoice  TAF_MTC_MODEM_CONN_STATUS_IND_STRU */
    ID_MSG_MTC_USIMM_STATE_IND,                                                 /* _H2ASN_MsgChoice  TAF_MTC_USIMM_STATUS_IND_STRU */

    ID_MSG_MTC_BUTT
};
typedef VOS_UINT32 TAF_MTC_MSG_ID_ENUM_UINT32;

/*****************************************************************************
枚举名    : TAF_MTC_SRV_CONN_STATE_ENUM
结构说明  : 业务连接状态枚举定义

  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 新增枚举
*****************************************************************************/
enum TAF_MTC_SRV_CONN_STATE_ENUM
{
    TAF_MTC_SRV_NO_EXIST                = 0,                                    /* 无连接 */
    TAF_MTC_SRV_EXIST,                                                          /* 有连接 */

    TAF_MTC_SRV_CONN_STATE_BUTT
};
typedef VOS_UINT8 TAF_MTC_SRV_CONN_STATE_ENUM_UINT8;

/*****************************************************************************
枚举名    : TAF_MTC_POWER_STATE_ENUM
结构说明  : 开机状态枚举定义

  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 新增枚举
*****************************************************************************/
enum TAF_MTC_POWER_STATE_ENUM
{
    TAF_MTC_POWER_OFF                  = 0,                                     /* 关机 */
    TAF_MTC_POWER_ON,                                                           /* 开机 */

    TAF_MTC_POWER_STATE_BUTT
};
typedef VOS_UINT8 TAF_MTC_POWER_STATE_ENUM_UINT8;

/*****************************************************************************
枚举名    : TAF_MTC_USIMM_CARD_SERVIC_ENUM
结构说明  : 卡状态

  1.日    期   : 2014年06月16日
    作    者   : 蒋德彬/j00174725
    修改内容   : 新增枚举
*****************************************************************************/

enum TAF_MTC_USIMM_CARD_SERVIC_ENUM
{
    TAF_MTC_USIMM_CARD_SERVIC_ABSENT        =0,                                 /* 无卡 */
    TAF_MTC_USIMM_CARD_SERVIC_UNAVAILABLE   =1,                                 /* 有卡,服务不可用 */
    TAF_MTC_USIMM_CARD_SERVIC_SIM_PIN       =2,                                 /* SIM卡服务由于PIN码原因不可用 */
    TAF_MTC_USIMM_CARD_SERVIC_SIM_PUK       =3,                                 /* SIM卡服务由于PUK码原因不可用 */
    TAF_MTC_USIMM_CARD_SERVIC_NET_LCOK      =4,                                 /* SIM卡服务由于网络锁定原因不可用 */
    TAF_MTC_USIMM_CARD_SERVIC_IMSI_LCOK     =5,                                 /* SIM卡服务由于IMSI锁定原因不可用 */
    TAF_MTC_USIMM_CARD_SERVIC_AVAILABLE     =6,                                 /* 服务可用 */

    TAF_MTC_USIMM_CARD_SERVIC_BUTT
};
typedef VOS_UINT16      TAF_MTC_USIMM_CARD_SERVIC_ENUM_UINT16;

/* Add by j00174725 for TAS2.5, 2014-09-29, Begin */
/*****************************************************************************
枚举名    : TAF_MTC_CDMA_USIMM_CARD_ENUM
结构说明  : 卡状态

  1.日    期   : 2014年06月16日
    作    者   : 蒋德彬/j00174725
    修改内容   : 新增枚举
*****************************************************************************/

enum TAF_MTC_CDMA_USIMM_CARD_ENUM
{
    TAF_MTC_CDMA_USIMM_CARD_UNVALID        =0,                                  /* 无卡 */
    TAF_MTC_CDMA_USIMM_CARD_VALID,                                              /* 服务可用 */

    TAF_MTC_CDMA_USIMM_CARD_BUTT
};
typedef VOS_UINT8  TAF_MTC_CDMA_USIMM_CARD_ENUM_UINT8;
/* Add by j00174725 for TAS2.5, 2014-09-29, End */



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
 结构名    : TAF_MTC_CDMA_STATE_INFO_STRU
 结构说明  : CDMS状态结构体

 1.日    期   : 2014年06月16日
   作    者   : j00174725
   修改内容   : K3V3 多模多天线特性
*******************************************************************************/
typedef struct
{
    TAF_MTC_SRV_CONN_STATE_ENUM_UINT8       enCsConnSt;                         /* CS连接状态 */
    TAF_MTC_SRV_CONN_STATE_ENUM_UINT8       enPsConnSt;                         /* PS连接状态 */
    TAF_MTC_POWER_STATE_ENUM_UINT8          enPowerState;                       /* 开关机状态 */
    VOS_UINT8                               ucReserved1[1];
    TAF_MTC_USIMM_CARD_SERVIC_ENUM_UINT16   enUsimmState;                       /* 卡状态 */
    VOS_UINT8                               aucReserved2[2];
}TAF_MTC_CDMA_STATE_INFO_STRU;

/*******************************************************************************
 结构名    : TAF_MTC_CDMA_STATE_IND_STRU
 结构说明  : ID_MSG_MTC_CDMA_CONN_STATUS的消息结构

 1.日    期   : 2014年06月16日
   作    者   : j00174725
   修改内容   : K3V3 多模多天线特性
*******************************************************************************/
typedef struct
{
    TAF_CTRL_STRU                       stCtrl;
    TAF_MTC_CDMA_STATE_INFO_STRU        stCdmaState;
}TAF_MTC_CDMA_STATE_IND_STRU;

/*******************************************************************************
 结构名    : TAF_MTC_SRV_CONN_STATE_INFO_STRU
 结构说明  : ID_MMA_MTC_CONN_STATUS_INFO_IND的消息信息单元结构

 1.日    期   : 2014年06月16日
   作    者   : j00174725
   修改内容   : K3V3 多模多天线特性
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          bitOpPsSrv      : 1;
    VOS_UINT32                          bitOpCsSrv      : 1;
    VOS_UINT32                          bitOpEpsSrv     : 1;
    VOS_UINT32                          bitSpare        : 29;
    TAF_MTC_SRV_CONN_STATE_ENUM_UINT8   enPsSrvConnState;
    TAF_MTC_SRV_CONN_STATE_ENUM_UINT8   enCsSrvConnState;
    TAF_MTC_SRV_CONN_STATE_ENUM_UINT8   enEpsSrvConnState;
    VOS_UINT8                           aucReserved[1];
}TAF_MTC_SRV_CONN_STATE_INFO_STRU;

/*******************************************************************************
 结构名    : TAF_MTC_MODEM_CONN_STATUS_IND_STRU
 结构说明  : ID_MMA_MTC_CONN_STATUS_INFO_IND的消息结构

 1.日    期   : 2014年06月16日
   作    者   : j00174725
   修改内容   : K3V3 多模多天线特性
*******************************************************************************/
typedef struct
{
    TAF_CTRL_STRU                       stCtrl;
    TAF_MTC_SRV_CONN_STATE_INFO_STRU    stModemConnStateInfo;
}TAF_MTC_MODEM_CONN_STATUS_IND_STRU;

/*******************************************************************************
 结构名    : TAF_MTC_USIMM_STATUS_IND_STRU
 结构说明  : ID_MMA_MTC_CONN_STATUS_INFO_IND的消息结构

 1.日    期   : 2014年06月16日
   作    者   : j00174725
   修改内容   : K3V3 多模多天线特性
*******************************************************************************/
typedef struct
{
    TAF_CTRL_STRU                           stCtrl;
    TAF_MTC_USIMM_CARD_SERVIC_ENUM_UINT16   enUsimmState;
    VOS_UINT8                               aucReserved[2];
}TAF_MTC_USIMM_STATUS_IND_STRU;

/*****************************************************************************
  H2ASN顶级消息结构定义
*****************************************************************************/
typedef struct
{
    TAF_MTC_MSG_ID_ENUM_UINT32          ulMsgId;                                /*_H2ASN_MsgChoice_Export TAF_MTC_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          TAF_MTC_MSG_ID_ENUM_UINT32
    ****************************************************************************/
}TAF_MTC_MSG_REQ;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    TAF_MTC_MSG_REQ                     stMsgReq;
}TafMtcApi_MSG;

/*****************************************************************************
  8 UNION定义
*****************************************************************************/


/*****************************************************************************
  9 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  10 函数声明
*****************************************************************************/
/*****************************************************************************
 函 数 名  : TAF_MTC_SndMsg
 功能描述  : 发送MTC消息
 输入参数  : VOS_UINT32                          ulTaskId
             VOS_UINT32                          ulMsgId
             VOS_VOID                           *pData
             VOS_UINT32                          ulLen
 输出参数  : 无
 返 回 值  : VOS_UINT32
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 TAF_MTC_SndMsg(
    VOS_UINT32                          ulTaskId,
    VOS_UINT32                          ulMsgId,
    VOS_VOID                           *pData,
    VOS_UINT32                          ulLength
);

/*****************************************************************************
 函 数 名  : TAF_MTC_SetCdmaServiceConnStateInfo
 功能描述  : 设置外部CDMA Modem的连接状态(PS&CS)
 输入参数  : pstCtrl                    - 控制头
             pstCdmsStatus              - 状态信息指针
 输出参数  : 无
 返 回 值  : VOS_OK                     - 发送消息成功
             VOS_ERR                    - 发送消息失败
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : 新生成函数
*****************************************************************************/
VOS_UINT32 TAF_MTC_SetCdmaServiceConnStateInfo(
    TAF_CTRL_STRU                      *pstCtrl,
    TAF_MTC_CDMA_STATE_INFO_STRU       *pstCdmsState
);

/*****************************************************************************
 函 数 名  : TAF_MTC_SetModemServiceConnState
 功能描述  : 设置modem状态信息
 输入参数  : ulModuleId      模块ID
             pstModemConnSt  状态消息指针
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : K3V3 多模多天线特性
*****************************************************************************/
VOS_UINT32 TAF_MTC_SetModemServiceConnState(
    TAF_CTRL_STRU                      *pstCtrl,
    TAF_MTC_SRV_CONN_STATE_INFO_STRU   *pstModemConnSt
);

/*****************************************************************************
 函 数 名  : TAF_MTC_SetModemUsimmState
 功能描述  : 设置卡状态信息
 输入参数  : pstCtrl         消息控制头
             pstModemConnSt  状态消息指针
 输出参数  : 无
 返 回 值  :
 调用函数  :
 被调函数  :

 修改历史      :
  1.日    期   : 2014年06月16日
    作    者   : j00174725
    修改内容   : K3V3 多模多天线特性
*****************************************************************************/
VOS_UINT32 TAF_MTC_SetModemUsimmState(
    TAF_CTRL_STRU                           *pstCtrl,
    TAF_MTC_USIMM_CARD_SERVIC_ENUM_UINT16    enUsimState
);



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

#endif

