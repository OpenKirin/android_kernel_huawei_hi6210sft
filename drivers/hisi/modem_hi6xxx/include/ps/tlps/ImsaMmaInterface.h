/******************************************************************************


        @(#)Copyright(C)2013,Hisilicon Co. LTD.

 ******************************************************************************
    File name   : ImsaMmaInterface.h
    Description : 内部模块间接口头文件
    History     :
      1.sunbing 00049683    2013-06-21  Draft Enact


******************************************************************************/

#ifndef __IMSAMMAINTERFACE_H__
#define __IMSAMMAINTERFACE_H__

/*****************************************************************************
  1 Include Headfile
*****************************************************************************/

#include    "vos.h"
#include "TafClientApi.h"

/*****************************************************************************
  1.1 Cplusplus Announce
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/*****************************************************************************
#pragma pack(*)    设置字节对齐方式
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif

/*****************************************************************************
  2 macro
*****************************************************************************/


#define MMA_IMSA_MSG_ID_HEADER        TAF_MMA_IMSA_MSG_BASE


/*****************************************************************************
  3 Massage Declare
*****************************************************************************/

/*****************************************************************************
 枚举名    : IMSA_CONTROL_CONN_MSG_ID_ENUM
 协议表格  :
 ASN.1描述 :
 枚举说明  : 内部消息ID定义
*****************************************************************************/
enum    MMA_IMSA_MSG_ID_ENUM
{
    /* MMA发给IMSA的消息原语 */
    ID_MMA_IMSA_START_REQ               = 0x00 + MMA_IMSA_MSG_ID_HEADER,        /* _H2ASN_MsgChoice MMA_IMSA_START_REQ_STRU */
    ID_MMA_IMSA_STOP_REQ                ,                                       /* _H2ASN_MsgChoice MMA_IMSA_STOP_REQ_STRU */
    ID_MMA_IMSA_DEREG_REQ               ,                                       /* _H2ASN_MsgChoice MMA_IMSA_DEREGISTER_REQ_STRU */
    ID_MMA_IMSA_SERVICE_CHANGE_IND      ,                                       /* _H2ASN_MsgChoice MMA_IMSA_SERVICE_CHANGE_IND_STRU */
    ID_MMA_IMSA_CAMP_INFO_CHANGE_IND,                                           /* _H2ASN_MsgChoice MMA_IMSA_CAMP_INFO_CHANGE_IND_STRU */
    /* Added by s00217060 for VOLTE SWITCH, 2015-2-16, begin */
    ID_MMA_IMSA_VOICE_DOMAIN_CHANGE_IND ,                                        /* _H2ASN_MsgChoice MMA_IMSA_VOICE_DOMAIN_CHANGE_IND_STRU */
    /* Added by s00217060 for VOLTE SWITCH, 2015-2-16, end */


    /* IMSA发给MMA的消息原语 */
    ID_IMSA_MMA_START_CNF               = 0x40 + MMA_IMSA_MSG_ID_HEADER,        /* _H2ASN_MsgChoice IMSA_MMA_START_CNF_STRU */
    ID_IMSA_MMA_STOP_CNF                ,                                       /* _H2ASN_MsgChoice IMSA_MMA_STOP_CNF_STRU */
    ID_IMSA_MMA_DEREG_CNF               ,                                       /* _H2ASN_MsgChoice IMSA_MMA_DEREGISTER_CNF_STRU */
    ID_IMSA_MMA_IMS_VOICE_CAP_NOTIFY    ,                                       /* _H2ASN_MsgChoice IMSA_MMA_IMS_VOICE_CAP_NOTIFY_STRU */
    ID_IMSA_MMA_MSG_ID_ENUM_BUTT
};
typedef VOS_UINT32 MMA_IMSA_MSG_ID_ENUM_UINT32;


/*****************************************************************************
  4 Enum
*****************************************************************************/


enum MMA_IMSA_IMS_VOPS_INDICATOR_ENUM
{
    MMA_IMSA_IMS_VOPS_NOT_SUPPORT =0,
    MMA_IMSA_IMS_VOPS_SUPPORT,
    MMA_IMSA_IMS_VOPS_BUTT
};
typedef VOS_UINT8 MMA_IMSA_IMS_VOPS_INDICATOR_ENUM_UINT8;

enum MMA_IMSA_EMS_INDICATOR_ENUM
{
    MMA_IMSA_EMS_NOT_SUPPORT =0,
    MMA_IMSA_EMS_SUPPORT,
    MMA_IMSA_EMS_BUTT
};
typedef VOS_UINT8 MMA_IMSA_EMS_INDICATOR_ENUM_UINT8;

enum MMA_IMSA_RAT_TYPE_ENUM
{
    MMA_IMSA_RAT_TYPE_GSM =0,
    MMA_IMSA_RAT_TYPE_UTRAN,
    MMA_IMSA_RAT_TYPE_LTE,
    MMA_IMSA_RAT_TYPE_BUTT
};
typedef VOS_UINT8 MMA_IMSA_RAT_TYPE_ENUM_UINT8;

enum MMA_IMSA_SERVICE_STATUS_ENUM
{
    MMA_IMSA_NORMAL_SERVICE =0,
    MMA_IMSA_LIMITED_SERVICE,
    MMA_IMSA_NO_SERVICE,
    MMA_IMSA_SERVICE_STATUS_BUTT
};
typedef VOS_UINT8 MMA_IMSA_SERVICE_STATUS_ENUM_UINT8;

enum MMA_IMSA_ACCESS_TYPE_ENUM
{
    MMA_IMSA_ACCESS_TYPE_UTRAN_TDD,
    MMA_IMSA_ACCESS_TYPE_UTRAN_FDD,
    MMA_IMSA_ACCESS_TYPE_EUTRAN_TDD,
    MMA_IMSA_ACCESS_TYPE_EUTRAN_FDD,
    MMA_IMSA_ACCESS_TYPE_GERAN,

    MMA_IMSA_ACCESS_TYPE_BUTT
};
typedef VOS_UINT8 MMA_IMSA_ACCESS_TYPE_ENUM_UINT8;

enum MMA_IMSA_IMS_VOICE_CAP_ENUM
{
    MMA_IMSA_IMS_VOICE_CAP_UNAVAILABLE = 0,
    MMA_IMSA_IMS_VOICE_CAP_AVAILABLE,

    MMA_IMSA_IMS_VOICE_CAP_BUTT
};
typedef VOS_UINT8 MMA_IMSA_IMS_VOICE_CAP_ENUM_UINT8;

/* Added by s00217060 for VOLTE SWITCH, 2015-2-16, begin */
/*****************************************************************************
 结构名    : MMA_IMSA_VOICE_DOMAIN_ENUM_UINT32
 结构说明  : VOIDE DOMAIN类型
  1.日    期   : 2015年2月16日
    作    者   : s00217060
    修改内容   : 新建
 *****************************************************************************/
enum MMA_IMSA_VOICE_DOMAIN_ENUM
{
    MMA_IMSA_VOICE_DOMAIN_CS_ONLY            = 0,    /* CS voice only */
    MMA_IMSA_VOICE_DOMAIN_IMS_PS_ONLY        = 1,    /* IMS PS voice only */
    MMA_IMSA_VOICE_DOMAIN_CS_PREFERRED       = 2,    /* CS vocie preferred, IMS PS voice as secondary */
    MMA_IMSA_VOICE_DOMAIN_IMS_PS_PREFERRED   = 3,    /* IMS PS voice preferred, CS vocie as secondary */

    MMA_IMSA_VOICE_DOMAIN_BUTT
};
typedef VOS_UINT32  MMA_IMSA_VOICE_DOMAIN_ENUM_UINT32;
/* Added by s00217060 for VOLTE SWITCH, 2015-2-16, end */

/* Added by f00179208 for DTS2015052504823, 2015-7-3, begin */
/*****************************************************************************
 结构名    : MMA_IMSA_START_TYPE_ENUM_UINT32
 结构说明  : 开启IMS协议栈的操作类型
  1.日    期   : 2015年07月03日
    作    者   : f00179208
    修改内容   : 新建
 *****************************************************************************/
enum MMA_IMSA_START_TYPE_ENUM
{
    MMA_IMSA_START_TYPE_POWER_ON            = 0,
    MMA_IMSA_START_TYPE_IMS_SWITCH_ON       = 1,
    MMA_IMSA_START_TYPE_BUTT
};
typedef VOS_UINT32  MMA_IMSA_START_TYPE_ENUM_UINT32;

/*****************************************************************************
 结构名    : MMA_IMSA_STOP_TYPE_ENUM_UINT32
 结构说明  : 关闭IMS协议栈的操作类型
  1.日    期   : 2015年07月03日
    作    者   : f00179208
    修改内容   : 新建
 *****************************************************************************/
enum MMA_IMSA_STOP_TYPE_ENUM
{
    MMA_IMSA_STOP_TYPE_POWER_OFF            = 0,
    MMA_IMSA_STOP_TYPE_IMS_SWITCH_OFF       = 1,
    MMA_IMSA_STOP_TYPE_BUTT
};
typedef VOS_UINT32  MMA_IMSA_STOP_TYPE_ENUM_UINT32;

/* Added by f00179208 for DTS2015052504823, 2015-7-3, end */

/*****************************************************************************
  5 STRUCT
*****************************************************************************/
typedef struct
{
    /* 逻辑从右往左，ulMcc第0字节表示MCC digit1， ulMcc第1字节表示MCC digit2，
       ulMcc第2字节表示MCC digit3，ulMcc第3字节无效；
       逻辑从右往左，ulMnc第0字节表示MNC digit1， ulMnc第1字节表示MNC digit2，
       ulMnc第2字节表示MNC digit3，ulMnc第3字节无效；
       例如MCC+MNC为46001，则ulMcc为0x00000604,ulMnc为0x000f0100*/
    VOS_UINT32                          ulMcc;
    VOS_UINT32                          ulMnc;
}MMA_IMSA_PLMN_ID_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    /* Modified by f00179208 for DTS2015052504823, 2015-7-3, begin */
    MMA_IMSA_START_TYPE_ENUM_UINT32     enStartType;
    /* Modified by f00179208 for DTS2015052504823, 2015-7-3, end */
}MMA_IMSA_START_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    VOS_UINT8                           aucReserve[4];
}IMSA_MMA_START_CNF_STRU;


/*****************************************************************************
 结构名    : IMSA_CALL_RESULT_ACTION_IND_STRU
 协议表格  :
 ASN.1描述 :
 结构说明  : IMSA_CALL_RESULT_ACTION_IND_STRU消息结构定义
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    /* Modified by f00179208 for DTS2015052504823, 2015-7-3, begin */
    MMA_IMSA_STOP_TYPE_ENUM_UINT32      enStopType;
    /* Modified by f00179208 for DTS2015052504823, 2015-7-3, end */
}MMA_IMSA_STOP_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    VOS_UINT8                           aucReserve[4];
}IMSA_MMA_STOP_CNF_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    VOS_UINT8                           aucReserve[4];
}MMA_IMSA_DEREGISTER_REQ_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    VOS_UINT8                           aucReserve[4];
}IMSA_MMA_DEREGISTER_CNF_STRU;


typedef struct
{
    VOS_MSG_HEADER                                                              /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32                             ulMsgId;            /*_H2ASN_Skip*/
    MMA_IMSA_IMS_VOPS_INDICATOR_ENUM_UINT8                  enImsVoPsInd;
    MMA_IMSA_EMS_INDICATOR_ENUM_UINT8                       enEmsInd;
    MMA_IMSA_SERVICE_STATUS_ENUM_UINT8                      enPsServiceStatus;
    VOS_UINT8                                               ucPsSimValid;       /* VOS_TRUE :有效，VOS_FALSE :无效*/
    MMA_IMSA_RAT_TYPE_ENUM_UINT8                            enRat;              /* 当前接入技术 */
    VOS_UINT8                                               aucReserve[3];
}MMA_IMSA_SERVICE_CHANGE_IND_STRU;


typedef struct
{
    VOS_MSG_HEADER                                                  /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;                    /*_H2ASN_Skip*/
    VOS_UINT8                           ucRoamingFlg;               /* VOS_TRUE :漫游，VOS_FALSE :非漫游 */

    MMA_IMSA_ACCESS_TYPE_ENUM_UINT8     enAccessType;
    VOS_UINT8                           aucReserved[2];
    VOS_UINT16                          usLac;
    VOS_UINT16                          usTac;
    MMA_IMSA_PLMN_ID_STRU               stPlmnId;
    VOS_UINT32                          ulCellId;
}MMA_IMSA_CAMP_INFO_CHANGE_IND_STRU;

typedef struct
{
    VOS_MSG_HEADER                                          /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_Skip*/
    MMA_IMSA_IMS_VOICE_CAP_ENUM_UINT8   enImsVoiceCap;
    VOS_UINT8                           aucRsv[3];
}IMSA_MMA_IMS_VOICE_CAP_NOTIFY_STRU;


/* Added by s00217060 for VOLTE SWITCH, 2015-2-16, begin */
typedef struct
{
    VOS_MSG_HEADER                                                  /*_H2ASN_Skip*/
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;                    /*_H2ASN_Skip*/
    MMA_IMSA_VOICE_DOMAIN_ENUM_UINT32   enVoiceDomain;              /* 0:cs only 1:ps only 2:cs prefer 3:ps prefer */
}MMA_IMSA_VOICE_DOMAIN_CHANGE_IND_STRU;

/* Added by s00217060 for VOLTE SWITCH, 2015-2-16, end */


typedef struct
{
    MMA_IMSA_MSG_ID_ENUM_UINT32         ulMsgId;            /*_H2ASN_MsgChoice_Export MMA_IMSA_MSG_ID_ENUM_UINT32*/
    VOS_UINT8                           aucMsg[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          MMA_IMSA_MSG_ID_ENUM_UINT32
    ****************************************************************************/
}MMA_IMSA_MSG_DATA;
/*_H2ASN_Length UINT32*/


typedef struct
{
    VOS_MSG_HEADER
    MMA_IMSA_MSG_DATA                    stMsgData;
} ImsaMmaInterface_MSG;


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

#endif /* end of ImsaMmaInterface.h */

