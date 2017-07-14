/******************************************************************************

                  版权所有 (C), 2001-2012, 华为技术有限公司

 ******************************************************************************
  文 件 名   : AtMtaInterface.h
  版 本 号   : 初稿
  作    者   : 闫志吉
  生成日期   : 2012年6月27日
  最近修改   :
  功能描述   : MTA模块与AT模块跨核通信消息ID、消息结构声明
  函数列表   :
  修改历史   :
  1.日    期   : 2012年6月27日
    作    者   : Y00213812
    修改内容   : A-GPS项目新增

******************************************************************************/

#ifndef __ATMTAINTERFACE_H__
#define __ATMTAINTERFACE_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

#pragma pack(4)

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "PsTypeDef.h"
#include "AtMnInterface.h"
#include "MtaPhyInterface.h"
/* Modified by s00217060 for VoLTE_PhaseI  项目, 2013-07-27, begin */
#include "NasNvInterface.h"
/* Modified by s00217060 for VoLTE_PhaseI  项目, 2013-07-27, end */

/*****************************************************************************
  2 宏定义
*****************************************************************************/
#define MTA_CPOS_XML_MAX_LEN            (1024)              /* MTA接收AT下发的XML码流最大长度 */
#define MTA_CPOSR_XML_MAX_LEN           (1024)              /* MTA向AT上报的XML码流最大长度为1024 */
/* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, begin */
#define MTA_SEC_PACKET_MAX_LEN          (272)               /* AP安全封包的最大长度 */
/* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, end */
/* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
#define MTA_SIMLOCK_PASSWORD_LEN        (16)                /* 锁网锁卡解锁密码的长度 */
/* Added by l00198894 for STK&DCM Project, 2012/09/18, end */

#define MTA_CLIENTID_BROADCAST          (0xFFFF)
#define MTA_INVALID_TAB_INDEX           (0x00)


/* Added by m00217266 for DSDA GUNAS C CORE, 2013-01-06, begin */
#define AT_MTA_WRR_AUTOTEST_MAX_PARA_NUM          (10) /* autotest命令下发参数最大个数 */
#define MTA_AT_WRR_AUTOTEST_MAX_RSULT_NUM         (20) /* autotest命令上报结果最大个数 */
#define MTA_AT_WRR_ONE_MEANRPT_MAX_CELL_NUM       (8)  /* 一次测量报告中小区最大个数 */
#define MTA_AT_WRR_MAX_MEANRPT_NUM                (10) /* 上报最近测量报告的最大个数 */

#define MTA_AT_WRR_MAX_NCELL_NUM                  (8)
/* Added by m00217266 for DSDA GUNAS C CORE, 2013-01-06, end */

/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, begin */
#define AT_MTA_RPT_CFG_MAX_SIZE                   (8)
/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, end */

/* Added by m00217266 for AP Sensor, 2013-08-07, begin */
#define AT_MTA_HANDLEDECT_MIN_TYPE                (0)
#define AT_MTA_HANDLEDECT_MAX_TYPE                (4)
/* Added by m00217266 for AP Sensor, 2013-08-07, End */

/* Added by l00198894 for NVWR Security Control, 2015-04-04, begin */
#define AT_RSA_CIPHERTEXT_LEN           (128)
/* Added by l00198894 for NVWR Security Control, 2015-04-04, end */

/*****************************************************************************
  3 枚举定义
*****************************************************************************/
/*****************************************************************************
 枚举名    : AT_MTA_MSG_TYPE_ENUM
 结构说明  : AT与MTA消息接口枚举
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
2.日    期   : 2012年11月21日
  作    者   : z00161729
  修改内容  : 支持cerssi和nmr
3.日    期   : 2012年12月26日
  作    者   : m00217266
  修改内容   :  添加WAS接口的消息ID
4.日    期  : 2013年03月13日
  作    者  : z00214637
  修改内容  : BodySAR项目
5.日    期   : 2013年3月25日
  作    者   : s00217060
  修改内容   : 添加主动上报下移至C核的消息ID
*****************************************************************************/
enum AT_MTA_MSG_TYPE_ENUM
{
    /* 消息名称 */                      /* 消息ID */        /* 备注, 生成ASN */
    /* AT发给MTA的消息 */
    ID_AT_MTA_CPOS_SET_REQ              = 0x0000,           /* _H2ASN_MsgChoice AT_MTA_CPOS_REQ_STRU        */
    ID_AT_MTA_CGPSCLOCK_SET_REQ         = 0x0001,           /* _H2ASN_MsgChoice AT_MTA_CGPSCLOCK_REQ_STRU   */
    /* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, begin */
    ID_AT_MTA_APSEC_SET_REQ             = 0x0002,           /* _H2ASN_MsgChoice AT_MTA_APSEC_REQ_STRU       */
    /* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, end */
    /* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
    ID_AT_MTA_SIMLOCKUNLOCK_SET_REQ     = 0x0003,           /* _H2ASN_MsgChoice AT_MTA_SIMLOCKUNLOCK_REQ_STRU */
    /* Added by l00198894 for STK&DCM Project, 2012/09/18, end */

    /* Modified by z00161729 for cerssi, 2012-11-21, begin */
    ID_AT_MTA_QRY_NMR_REQ               = 0x0004,           /* _H2ASN_MsgChoice AT_MTA_QRY_NMR_REQ_STRU */
    /* Modified by z00161729 for cerssi, 2012-11-21, end */

    /* Added by t00212959 for WLTHRESHOLDCFG, 2012-12-10, begin */
    ID_AT_MTA_RESEL_OFFSET_CFG_SET_NTF  = 0x0005,           /* _H2ASN_MsgChoice AT_MTA_RESEL_OFFSET_CFG_SET_NTF_STRU */
    /* Added by t00212959 for WLTHRESHOLDCFG, 2012-12-10, end */
    /* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, begin */
    ID_AT_MTA_WRR_AUTOTEST_QRY_REQ      = 0x0006,           /* _H2ASN_MsgChoice AT_MTA_WRR_AUTOTEST_QRY_PARA_STRU */
    ID_AT_MTA_WRR_CELLINFO_QRY_REQ      = 0x0007,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_WRR_MEANRPT_QRY_REQ       = 0x0008,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_WRR_FREQLOCK_SET_REQ      = 0x0009,           /* _H2ASN_MsgChoice MTA_AT_WRR_FREQLOCK_CTRL_STRU     */
    ID_AT_MTA_WRR_RRC_VERSION_SET_REQ   = 0x000A,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU*/
    ID_AT_MTA_WRR_CELLSRH_SET_REQ       = 0x000B,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU*/
    ID_AT_MTA_WRR_FREQLOCK_QRY_REQ      = 0x000C,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_WRR_RRC_VERSION_QRY_REQ   = 0x000D,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_WRR_CELLSRH_QRY_REQ       = 0x000E,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, end */

    /* Added by z00214637 for Body Sar Project, 2013-03-11, begin */
    ID_AT_MTA_BODY_SAR_SET_REQ          = 0x000F,           /* _H2ASN_MsgChoice AT_MTA_BODY_SAR_SET_REQ_STRU */
    /* Added by z00214637 for Body Sar Project, 2013-03-11, end */
    /* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, begin */
    ID_AT_MTA_CURC_SET_NOTIFY           = 0x0010,           /* _H2ASN_MsgChoice AT_MTA_CURC_SET_NOTIFY_STRU */
    ID_AT_MTA_CURC_QRY_REQ              = 0x0011,           /* _H2ASN_MsgChoice AT_MTA_CURC_QRY_REQ_STRU */
    ID_AT_MTA_UNSOLICITED_RPT_SET_REQ   = 0x0012,           /* _H2ASN_MsgChoice AT_MTA_UNSOLICITED_RPT_SET_REQ_STRU */
    ID_AT_MTA_UNSOLICITED_RPT_QRY_REQ   = 0x0013,           /* _H2ASN_MsgChoice AT_MTA_UNSOLICITED_RPT_QRY_REQ_STRU */
    /* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, end */

    /* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, begin */
    ID_AT_MTA_IMEI_VERIFY_QRY_REQ       = 0x0014,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_CGSN_QRY_REQ              = 0x0015,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, end */
    /* Added by s00217060 for V9R1_SVLTE, 2013-6-4, begin */
    ID_AT_MTA_NCELL_MONITOR_SET_REQ     = 0x0016,           /* _H2ASN_MsgChoice AT_MTA_NCELL_MONITOR_SET_REQ_STRU */
    ID_AT_MTA_NCELL_MONITOR_QRY_REQ     = 0x0017,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Added by s00217060 for V9R1_SVLTE, 2013-6-4, end */

    /* Added by l00198894 for V9R1 AGPS, 2013/07/22, begin */
    ID_AT_MTA_REFCLKFREQ_SET_REQ        = 0x0018,           /* _H2ASN_MsgChoice AT_MTA_REFCLKFREQ_SET_REQ_STRU */
    ID_AT_MTA_REFCLKFREQ_QRY_REQ        = 0x0019,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Added by l00198894 for V9R1 AGPS, 2013/07/22, end */

    /* Added by m00217266 for AP Sensor, 2013-08-07, begin */
    ID_AT_MTA_HANDLEDECT_SET_REQ        = 0x001A,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_AT_MTA_HANDLEDECT_QRY_REQ        = 0x001B,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Added by m00217266 for AP Sensor, 2013-08-07, End */

    /* Added by l00198894 for 新增+ECID命令, 2013-12-09, begin */
    ID_AT_MTA_ECID_SET_REQ              = 0x001C,           /* _H2ASN_MsgChoice AT_MTA_ECID_SET_REQ_STRU */
    /* Added by l00198894 for 新增+ECID命令, 2013-12-09, end */

    /* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, Begin */
    ID_AT_MTA_MIPICLK_QRY_REQ           = 0x001D,           /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    /* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, End */

    /* Added by g00261581 for Jazz DPDT, 2014-04-04, begin */
    ID_AT_MTA_SET_DPDTTEST_FLAG_REQ     = 0x001E,           /* _H2ASN_MsgChoice AT_MTA_SET_DPDTTEST_FLAG_REQ_STRU */
    ID_AT_MTA_SET_DPDT_VALUE_REQ        = 0x001F,           /* _H2ASN_MsgChoice AT_MTA_SET_DPDT_VALUE_REQ_STRU */
    ID_AT_MTA_QRY_DPDT_VALUE_REQ        = 0x0020,           /* _H2ASN_MsgChoice AT_MTA_QRY_DPDT_VALUE_REQ_STRU */
    /* Added by g00261581 for Jazz DPDT, 2014-04-04, End */

    /*added by y00176023 for DSDS II,2014-03-24,begin*/
    ID_AT_MTA_RRC_PROTECT_PS_REQ        = 0x0021,
    ID_AT_MTA_PHY_INIT_REQ              = 0x0022,
    /*added by y00176023 for DSDS II,2014-03-24,end*/

    /* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, begin */
    ID_AT_MTA_SET_JAM_DETECT_REQ        = 0x0023,           /* _H2ASN_MsgChoice AT_MTA_SET_JAM_DETECT_REQ_STRU */
    /* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, end */

    /* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, begin */
    ID_AT_MTA_SET_FREQ_LOCK_REQ         = 0x0024,           /* _H2ASN_MsgChoice AT_MTA_SET_FREQ_LOCK_REQ_STRU */
    /* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, end */

    /* Added by j00174725 for GU ROAD TEST, 2014-08-05, Begin */
    ID_AT_MTA_SET_GSM_FREQLOCK_REQ      = 0x0025,          /* _H2ASN_MsgChoice AT_MTA_SET_GSM_FREQLOCK_REQ_STRU */
    /* Added by j00174725 for GU ROAD TEST, 2014-08-05, End */

    /* Added by l00198894 for NVWR Security Control, 2015-04-04, begin */
    ID_AT_MTA_NVWRSECCTRL_SET_REQ       = 0x0027,
    /* Added by l00198894 for NVWR Security Control, 2015-04-04, end */


    /* MTA发给AT的消息 */
    ID_MTA_AT_CPOS_SET_CNF              = 0x1000,           /* _H2ASN_MsgChoice MTA_AT_CPOS_CNF_STRU        */
    ID_MTA_AT_CGPSCLOCK_SET_CNF         = 0x1001,           /* _H2ASN_MsgChoice MTA_AT_CGPSCLOCK_CNF_STRU   */
    ID_MTA_AT_CPOSR_IND                 = 0x1002,           /* _H2ASN_MsgChoice MTA_AT_CPOSR_IND_STRU       */
    ID_MTA_AT_XCPOSRRPT_IND             = 0x1003,           /* _H2ASN_MsgChoice MTA_AT_XCPOSRRPT_IND_STRU   */
    /* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, begin */
    ID_MTA_AT_APSEC_SET_CNF             = 0x1004,           /* _H2ASN_MsgChoice MTA_AT_APSEC_CNF_STRU       */
    /* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, end */
    /* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
    ID_MTA_AT_SIMLOCKUNLOCK_SET_CNF     = 0x1005,           /* _H2ASN_MsgChoice MTA_AT_SIMLOCKUNLOCK_CNF_STRU */
    /* Added by l00198894 for STK&DCM Project, 2012/09/18, end */

    /* Modified by z00161729 for cerssi, 2012-11-21, begin */
    ID_MTA_AT_QRY_NMR_CNF               = 0x1006,           /* _H2ASN_MsgChoice MTA_AT_QRY_NMR_CNF_STRU */
    /* Modified by z00161729 for cerssi, 2012-11-21, end */

    /* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, begin */
    ID_MTA_AT_WRR_AUTOTEST_QRY_CNF      = 0x1007,           /* _H2ASN_MsgChoice MTA_AT_WRR_AUTOTEST_QRY_CNF_STRU       */
    ID_MTA_AT_WRR_CELLINFO_QRY_CNF      = 0x1008,           /* _H2ASN_MsgChoice MTA_AT_WRR_CELLINFO_QRY_CNF_STRU       */
    ID_MTA_AT_WRR_MEANRPT_QRY_CNF       = 0x1009,           /* _H2ASN_MsgChoice MTA_AT_WRR_MEANRPT_QRY_CNF_STRU        */
    ID_MTA_AT_WRR_FREQLOCK_SET_CNF      = 0x100A,           /* _H2ASN_MsgChoice MTA_AT_WRR_FREQLOCK_SET_CNF_STRU       */
    ID_MTA_AT_WRR_RRC_VERSION_SET_CNF   = 0x100B,           /* _H2ASN_MsgChoice MTA_AT_WRR_RRC_VERSION_SET_CNF_STRU    */
    ID_MTA_AT_WRR_CELLSRH_SET_CNF       = 0x100C,           /* _H2ASN_MsgChoice MTA_AT_WRR_CELLSRH_SET_CNF_STRU        */
    ID_MTA_AT_WRR_FREQLOCK_QRY_CNF      = 0x100D,           /* _H2ASN_MsgChoice MTA_AT_WRR_FREQLOCK_QRY_CNF_STRU       */
    ID_MTA_AT_WRR_RRC_VERSION_QRY_CNF   = 0x100E,           /* _H2ASN_MsgChoice MTA_AT_WRR_RRC_VERSION_QRY_CNF_STRU    */
    ID_MTA_AT_WRR_CELLSRH_QRY_CNF       = 0x100F,           /* _H2ASN_MsgChoice MTA_AT_WRR_CELLSRH_QRY_CNF_STRU        */
    /* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, end */

    /* Added by z00214637 for Body Sar Project, 2013-03-11, begin */
    ID_MTA_AT_BODY_SAR_SET_CNF          = 0x1010,           /* _H2ASN_MsgChoice MTA_AT_RESULT_CNF_STRU */
    /* Added by z00214637 for Body Sar Project, 2013-03-11, end */

    /* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, begin */
    ID_MTA_AT_CURC_QRY_CNF              = 0x1011,           /* _H2ASN_MsgChoice MTA_AT_CURC_QRY_CNF_STRU */
    ID_MTA_AT_UNSOLICITED_RPT_SET_CNF   = 0x1012,           /* _H2ASN_MsgChoice MTA_AT_UNSOLICITED_RPT_SET_CNF_STRU */
    ID_MTA_AT_UNSOLICITED_RPT_QRY_CNF   = 0x1013,           /* _H2ASN_MsgChoice MTA_AT_UNSOLICITED_RPT_QRY_CNF_STRU */
    /* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, end */

    /* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, begin */
    ID_MTA_AT_IMEI_VERIFY_QRY_CNF       = 0x1014,            /* _H2ASN_MsgChoice AT_MTA_RESERVE_STRU */
    ID_MTA_AT_CGSN_QRY_CNF              = 0x1015,            /* _H2ASN_MsgChoice MTA_AT_CGSN_QRY_CNF_STRU */
    /* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, end */
    /* Added by s00217060 for V9R1_SVLTE, 2013-6-3, begin */
    ID_MTA_AT_NCELL_MONITOR_SET_CNF     = 0x1016,           /* _H2ASN_MsgChoice MTA_AT_RESULT_CNF_STRU        */
    ID_MTA_AT_NCELL_MONITOR_QRY_CNF     = 0x1017,           /* _H2ASN_MsgChoice MTA_AT_NCELL_MONITOR_QRY_CNF_STRU        */
    ID_MTA_AT_NCELL_MONITOR_IND         = 0x1018,           /* _H2ASN_MsgChoice MTA_AT_NCELL_MONITOR_IND_STRU        */
    /* Added by s00217060 for V9R1_SVLTE, 2013-6-3, end */

    /* Added by l00198894 for V9R1 AGPS, 2013/07/22, begin */
    ID_MTA_AT_REFCLKFREQ_SET_CNF        = 0x1019,           /* _H2ASN_MsgChoice MTA_AT_RESULT_CNF_STRU */
    ID_MTA_AT_REFCLKFREQ_QRY_CNF        = 0x101A,           /* _H2ASN_MsgChoice MTA_AT_REFCLKFREQ_QRY_CNF_STRU */
    ID_MTA_AT_REFCLKFREQ_IND            = 0x101B,           /* _H2ASN_MsgChoice MTA_AT_REFCLKFREQ_IND_STRU */
    /* Added by l00198894 for V9R1 AGPS, 2013/07/22, end */

    /* Added by m00217266 for AP Sensor, 2013-08-07, begin */
    ID_MTA_AT_HANDLEDECT_SET_CNF        = 0x101C,           /* _H2ASN_MsgChoice MTA_AT_HANDLEDECT_SET_CNF_STRU */
    ID_MTA_AT_HANDLEDECT_QRY_CNF        = 0x101D,           /* _H2ASN_MsgChoice MTA_AT_HANDLEDECT_QRY_CNF_STRU */
    /* Added by m00217266 for AP Sensor, 2013-08-07, End */

    /* Added by l00198894 for SVLTE Offline Reselect Project, 2013/10/21, begin */
    ID_MTA_AT_PS_TRANSFER_IND           = 0x101E,           /* _H2ASN_MsgChoice MTA_AT_PS_TRANSFER_IND_STRU */
    /* Added by l00198894 for SVLTE Offline Reselect Project, 2013/10/21, end */

    /* Added by l00198894 for 新增+ECID命令, 2013-12-09, begin */
    ID_MTA_AT_ECID_SET_CNF              = 0x101F,           /* _H2ASN_MsgChoice MTA_AT_ECID_SET_CNF_STRU */
    /* Added by l00198894 for 新增+ECID命令, 2013-12-09, end */

    /* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, Begin */
    ID_MTA_AT_MIPICLK_QRY_CNF           = 0x1020,           /* _H2ASN_MsgChoice MTA_AT_RF_LCD_MIPICLK_CNF_STRU */
    ID_MTA_AT_MIPICLK_INFO_IND          = 0x1021,           /* _H2ASN_MsgChoice MTA_AT_RF_LCD_MIPICLK_IND_STRU */
    /* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, End */

    /* Added by g00261581 for Jazz DPDT, 2014-04-04, begin */
    ID_MTA_AT_SET_DPDTTEST_FLAG_CNF     = 0x1022,           /* _H2ASN_MsgChoice MTA_AT_SET_DPDTTEST_FLAG_CNF_STRU */
    ID_MTA_AT_SET_DPDT_VALUE_CNF        = 0x1023,           /* _H2ASN_MsgChoice MTA_AT_SET_DPDT_VALUE_CNF_STRU */
    ID_MTA_AT_QRY_DPDT_VALUE_CNF        = 0x1024,           /* _H2ASN_MsgChoice MTA_AT_QRY_DPDT_VALUE_CNF_STRU */
    /* Added by g00261581 for Jazz DPDT, 2014-04-04, End */

    /*added by y00176023 for DSDS II,2014-03-19,begin*/
    ID_MTA_AT_RRC_PROTECT_PS_CNF        = 0x1025,
    ID_MTA_AT_PHY_INIT_CNF              = 0x1026,
    /*added by y00176023 for DSDS II,2014-03-19,end*/

    /* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, begin */
    ID_MTA_AT_SET_JAM_DETECT_CNF        = 0x1027,           /* _H2ASN_MsgChoice MTA_AT_SET_JAM_DETECT_CNF_STRU */
    ID_MTA_AT_JAM_DETECT_IND            = 0x1028,           /* _H2ASN_MsgChoice MTA_AT_JAM_DETECT_IND_STRU */
    /* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, end */

    /* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, begin */
    ID_MTA_AT_SET_FREQ_LOCK_CNF         = 0x1029,           /* _H2ASN_MsgChoice MTA_AT_SET_FREQ_LOCK_CNF_STRU */
    /* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, end */

    /* Added by j00174725 for GU ROAD TEST, 2014-08-05, Begin */
    ID_MTA_AT_SET_GSM_FREQLOCK_CNF      = 0x102A,           /* _H2ASN_MsgChoice MTA_AT_SET_GSM_FREQLOCK_CNF_STRU */
    /* Added by j00174725 for GU ROAD TEST, 2014-08-05, End */
    /* Added by m00217266 for Xpass reselect, 2014-12-25, begin */
    ID_MTA_AT_XPASS_INFO_IND            = 0x102C,
    /* Added by m00217266 for Xpass reselect, 2014-12-25, end */

    /* Added by l00198894 for NVWR Security Control, 2015-04-04, begin */
    ID_MTA_AT_NVWRSECCTRL_SET_CNF       = 0x102D,
    /* Added by l00198894 for NVWR Security Control, 2015-04-04, end */

    /* 最后一条消息 */
    ID_AT_MTA_MSG_TYPE_BUTT

};
typedef VOS_UINT32 AT_MTA_MSG_TYPE_ENUM_UINT32;

/*****************************************************************************
 枚举名    : MTA_AT_RESULT_ENUM
 结构说明  : MTA向AT回复的结果码枚举
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
enum MTA_AT_RESULT_ENUM
{
    /* 与AT模块对应的标准错误码 */
    MTA_AT_RESULT_NO_ERROR                      = 0x000000,                     /* 消息处理正常 */
    MTA_AT_RESULT_ERROR,                                                        /* 消息处理出错 */
    MTA_AT_RESULT_INCORRECT_PARAMETERS,
    MTA_AT_RESULT_OPTION_TIMEOUT,

    /* 预留对应AT标准命令错误码 */

    /* 装备命令特有错误码 */
    MTA_AT_RESULT_DEVICE_ERROR_BASE             = 0x100000,
    MTA_AT_RESULT_DEVICE_SEC_IDENTIFY_FAIL,                                     /* 产线鉴权失败 */
    MTA_AT_RESULT_DEVICE_SEC_SIGNATURE_FAIL,                                    /* 签名校验失败 */
    MTA_AT_RESULT_DEVICE_SEC_DK_INCORRECT,                                      /* 端口密码错误 */
    MTA_AT_RESULT_DEVICE_SEC_UNLOCK_KEY_INCORRECT,                              /* 解锁密码错误 */
    MTA_AT_RESULT_DEVICE_SEC_PH_PHYNUM_LEN_ERROR,                               /* 物理号长度错误 */
    MTA_AT_RESULT_DEVICE_SEC_PH_PHYNUM_VALUE_ERROR,                             /* 物理号码错误 */
    MTA_AT_RESULT_DEVICE_SEC_PH_PHYNUM_TYPE_ERROR,                              /* 物理号类型错误 */
    MTA_AT_RESULT_DEVICE_SEC_RSA_ENCRYPT_FAIL,                                  /* RSA加密失败 */
    MTA_AT_RESULT_DEVICE_SEC_RSA_DECRYPT_FAIL,                                  /* RSA解密失败 */
    MTA_AT_RESULT_DEVICE_SEC_GET_RAND_NUMBER_FAIL,                              /* 获取随机数失败(crypto_rand) */
    MTA_AT_RESULT_DEVICE_SEC_WRITE_HUK_FAIL,                                    /* HUK写入错误 */
    MTA_AT_RESULT_DEVICE_SEC_FLASH_ERROR,                                       /* Flash错误 */
    MTA_AT_RESULT_DEVICE_SEC_NV_ERROR,                                          /* NV读写错误 */
    MTA_AT_RESULT_DEVICE_SEC_OTHER_ERROR,                                       /* 其它错误 */


    /* 私有命令特有错误码 */
    MTA_AT_RESULT_PRICMD_ERROR_BASE             = 0x200000,

    MTA_AT_RESULT_BUTT
};
typedef VOS_UINT32 MTA_AT_RESULT_ENUM_UINT32;

/*****************************************************************************
 枚举名    : MTA_AT_CGPSCLOCK_ENUM
 结构说明  : RF芯片GPS时钟状态枚举
 1.日    期   : 2012年06月25日
   作    者   : h44270
   修改内容   : Added for AGPS
*****************************************************************************/
enum MTA_AT_CGPSCLOCK_ENUM
{
    MTA_AT_CGPSCLOCK_STOP           = 0,
    MTA_AT_CGPSCLOCK_START,
    MTA_AT_CGPSCLOCK_BUTT
};
typedef VOS_UINT32 MTA_AT_CGPSCLOCK_ENUM_UINT32;


/*****************************************************************************
 枚举名    : MTA_AT_CPOS_OPERATE_TYPE_ENUM
 结构说明  : +CPOS XML码流输入操作类型枚举
 1.日    期   : 2012年06月25日
   作    者   : h44270
   修改内容   : Added for AGPS
*****************************************************************************/
enum MTA_AT_CPOS_OPERATE_TYPE_ENUM
{
    MTA_AT_CPOS_SEND                = 0,
    MTA_AT_CPOS_CANCEL,
    MTA_AT_CPOS_BUTT
};
typedef VOS_UINT32 MTA_AT_CPOS_OPERATE_TYPE_ENUM_UINT32;

/* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
/*****************************************************************************
枚举名    : AT_MTA_PERS_CATEGORY_ENUM
枚举说明  : 锁网锁卡的Category类型

  1.日    期   : 2012年9月18日
    作    者   : l00198894
    修改内容   : STK补充特性及DCM需求开发项目新增枚举
*****************************************************************************/
enum AT_MTA_PERS_CATEGORY_ENUM
{
    AT_MTA_PERS_CATEGORY_NETWORK                    = 0x00,                     /* Category: 锁网 */
    AT_MTA_PERS_CATEGORY_NETWORK_SUBSET             = 0x01,                     /* Category: 锁子网 */
    AT_MTA_PERS_CATEGORY_SERVICE_PROVIDER           = 0x02,                     /* Category: 锁SP */
    AT_MTA_PERS_CATEGORY_CORPORATE                  = 0x03,                     /* Category: 锁团体 */
    AT_MTA_PERS_CATEGORY_SIM_USIM                   = 0x04,                     /* Category: 锁(U)SIM卡 */

    AT_MTA_PERS_CATEGORY_BUTT
};
typedef VOS_UINT8 AT_MTA_PERS_CATEGORY_ENUM_UINT8;
/* Added by l00198894 for STK&DCM Project, 2012/09/18, end */

/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, begin */
/*****************************************************************************
枚举名    : AT_MTA_RPT_GENERAL_CTRL_TYPE_ENUM
枚举说明  : 主动上报请求类型

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 新增枚举
*****************************************************************************/
enum AT_MTA_RPT_GENERAL_CTRL_TYPE_ENUM
{
    AT_MTA_RPT_GENERAL_CONTROL_NO_REPORT      = 0x00,                           /* 禁止所有的主动上报 */
    AT_MTA_RPT_GENERAL_CONTROL_REPORT         = 0x01,                           /* 打开所有的主动上报 */
    AT_MTA_RPT_GENERAL_CONTROL_CUSTOM         = 0x02,                           /* 按BIT位控制对应命令的主动上报 */

    AT_MTA_RPT_GENERAL_CONTROL_BUTT
};
typedef VOS_UINT8 AT_MTA_RPT_GENERAL_CTRL_TYPE_ENUM_UINT8;

/*****************************************************************************
枚举名    : AT_MTA_RPT_SET_TYPE_ENUM
枚举说明  : 主动上报请求类型

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 新增枚举
*****************************************************************************/
enum AT_MTA_RPT_SET_TYPE_ENUM
{
    AT_MTA_SET_MODE_RPT_TYPE            = 0,                                 /* Category: 设置模式变化是否主动上报 */
    AT_MTA_SET_SRVST_RPT_TYPE,
    AT_MTA_SET_RSSI_RPT_TYPE,
    AT_MTA_SET_TIME_RPT_TYPE,
    AT_MTA_SET_CTZR_RPT_TYPE,
    AT_MTA_SET_DSFLOWRPT_RPT_TYPE,
    AT_MTA_SET_SIMST_RPT_TYPE,
    AT_MTA_SET_CREG_RPT_TYPE,
    AT_MTA_SET_CGREG_RPT_TYPE,
    AT_MTA_SET_CEREG_RPT_TYPE,
    AT_MTA_SET_RPT_TYPE_BUTT
};
typedef VOS_UINT32 AT_MTA_RPT_SET_TYPE_ENUM_UINT32;

/*****************************************************************************
枚举名    : AT_MTA_RPT_QRY_TYPE_ENUM
枚举说明  : 主动上报请求类型

  1.日    期   : 2013年4月10日
    作    者   : l00167671
    修改内容   : 新增枚举
*****************************************************************************/
enum AT_MTA_RPT_QRY_TYPE_ENUM
{
    AT_MTA_QRY_TIME_RPT_TYPE = 0,
    AT_MTA_QRY_CTZR_RPT_TYPE,
    AT_MTA_QRY_CSSN_RPT_TYPE,
    AT_MTA_QRY_CUSD_RPT_TYPE,
    AT_MTA_QRY_RPT_TYPE_BUTT
};
typedef VOS_UINT32 AT_MTA_RPT_QRY_TYPE_ENUM_UINT32;

/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, end */

/* Added by l00198894 for V9R1 AGPS, 2013/07/22, begin */
/*****************************************************************************
 枚举名    : AT_MTA_CMD_RPT_FLG_ENUM
 结构说明  : AT命令上报开关标志枚举

  1.日    期   : 2013年07月22日
    作    者   : l00198894
    修改内容   : V9R1 AGPS
*****************************************************************************/
enum AT_MTA_CMD_RPT_FLG_ENUM
{
    AT_MTA_CMD_RPT_FLG_OFF              = 0,                        /* AT命令不主动上报 */
    AT_MTA_CMD_RPT_FLG_ON,                                          /* AT命令主动上报 */
    AT_MTA_CMD_RPT_FLG_BUTT
};
typedef VOS_UINT8 AT_MTA_CMD_RPT_FLG_ENUM_UINT8;
/* Added by l00198894 for V9R1 AGPS, 2013/07/22, end */

/*****************************************************************************
 枚举名    : AT_MTA_CMD_RATMODE_ENUM
 结构说明  : AT命令带接入模式RatMode枚举

  1.日    期   : 2014年04月8日
    作    者   : g00261581
    修改内容   : 新建
*****************************************************************************/
enum AT_MTA_CMD_RATMODE_ENUM
{
    AT_MTA_CMD_RATMODE_GSM              = 0,
    AT_MTA_CMD_RATMODE_WCDMA,
    AT_MTA_CMD_RATMODE_LTE,
    AT_MTA_CMD_RATMODE_TD,
    /* Add by j00174725 for TAS2.5, 2014-12-03, Begin */
    AT_MTA_CMD_RATMODE_CDMA,
    /* Add by j00174725 for TAS2.5, 2014-12-03, Begin */
    AT_MTA_CMD_RATMODE_BUTT
};
typedef VOS_UINT8 AT_MTA_CMD_RATMODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : MTA_AT_JAM_RESULT_ENUM
 结构说明  : JAM DETECT REPORT上报结果枚举

  1.日    期   : 2014年05月5日
    作    者   : g00261581
    修改内容   : 新建
*****************************************************************************/
enum MTA_AT_JAM_RESULT_ENUM
{
    MTA_AT_JAM_RESULT_JAM_DISAPPEARED        = 0x00,                            /* 状态正常无干扰 */
    MTA_AT_JAM_RESULT_JAM_DISCOVERED,                                           /* 干扰存在 */

    MTA_AT_JAM_RESULT_BUTT
};
typedef VOS_UINT32 MTA_AT_JAM_RESULT_ENUM_UINT32;

/* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, begin */
/*****************************************************************************
 枚举名    : AT_MTA_FREQLOCK_RATMODE_ENUM
 结构说明  : AT模块与MTA之间的接入模式枚举

  1.日    期   : 2014年06月11日
    作    者   : g00261581
    修改内容   : 新增
*****************************************************************************/
enum AT_MTA_FREQLOCK_RATMODE_ENUM
{
    AT_MTA_FREQLOCK_RATMODE_GSM         = 0x01,
    AT_MTA_FREQLOCK_RATMODE_WCDMA,
    AT_MTA_FREQLOCK_RATMODE_LTE,
    AT_MTA_FREQLOCK_RATMODE_CDMA1X,
    AT_MTA_FREQLOCK_RATMODE_TD,
    AT_MTA_FREQLOCK_RATMODE_WIMAX,
    AT_MTA_FREQLOCK_RATMODE_EVDO,

    AT_MTA_FREQLOCK_RATMODE_BUTT
};
typedef VOS_UINT8 AT_MTA_FREQLOCK_RATMODE_ENUM_UINT8;

/*****************************************************************************
 枚举名    : AT_MTA_GSM_BAND_ENUM
 结构说明  : AT模块与MTA之间的BAND值枚举

  1.日    期   : 2014年06月11日
    作    者   : g00261581
    修改内容   : 新增
*****************************************************************************/
enum AT_MTA_GSM_BAND_ENUM
{
    AT_MTA_GSM_BAND_850                 = 0x00,
    AT_MTA_GSM_BAND_900,
    AT_MTA_GSM_BAND_1800,
    AT_MTA_GSM_BAND_1900,

    AT_MTA_GSM_BAND_BUTT
};
typedef VOS_UINT16 AT_MTA_GSM_BAND_ENUM_UINT16;
/* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, end */


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

/*****************************************************************************
结构名    : AT_MTA_MSG_STRU
结构说明  : AT模块与MTA模块间的消息结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    VOS_MSG_HEADER
    VOS_UINT32                          ulMsgId;                                /* 消息名 */
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT8                           aucContent[4];                          /* 消息内容 */
} AT_MTA_MSG_STRU;

/*****************************************************************************
结构名    : MTA_AT_CPOS_REQ_MSG_STRU
结构说明  : 来自AT的+CPOS请求消息子结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_CPOS_OPERATE_TYPE_ENUM_UINT32    enCposOpType;
    VOS_UINT32                              ulXmlLength;
    VOS_CHAR                                acXmlText[MTA_CPOS_XML_MAX_LEN];
} AT_MTA_CPOS_REQ_STRU;

/*****************************************************************************
结构名    : MTA_AT_CPOS_CNF_STRU
结构说明  : 发往AT的+CPOS回复消息子结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 命令执行结果 */
} MTA_AT_CPOS_CNF_STRU;

/*****************************************************************************
结构名    : MTA_AT_CPOSR_IND_STRU
结构说明  : +CPOSR主动上报的消息结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    /* AT向MTA上报的XML码流最大长度为1024，同时还需预留一个字节存放字符串结尾的空字符 */
    VOS_CHAR                            acXmlText[MTA_CPOSR_XML_MAX_LEN + 1];
    VOS_UINT8                           aucRsv[3];
} MTA_AT_CPOSR_IND_STRU;

/*****************************************************************************
结构名    : MTA_AT_XCPOSRRPT_IND_STRU
结构说明  : ^XCPOSRRPT主动上报的消息结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulClearFlg;
} MTA_AT_XCPOSRRPT_IND_STRU;

/*****************************************************************************
结构名    : AT_MTA_CGPSCLOCK_REQ_STRU
结构说明  : AT^CGPSCLOCK的回复消息结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_CGPSCLOCK_ENUM_UINT32        enGpsClockState;                        /* RF芯片GPS时钟状态 */
} AT_MTA_CGPSCLOCK_REQ_STRU;

/*****************************************************************************
结构名    : MTA_AT_CGPSCLOCK_CNF_STRU
结构说明  : AT^CGPSCLOCK的回复消息结构
1.日    期  : 2012年06月28日
  作    者  : y00213812
  修改内容  : V7R1C50 A_GPS项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 命令执行结果 */
} MTA_AT_CGPSCLOCK_CNF_STRU;

/* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, begin */
/*****************************************************************************
结构名    : AT_MTA_APSEC_REQ_STRU
结构说明  : AT^APSEC的请求消息结构
1.日    期  : 2012年08月28日
  作    者  : l00198894
  修改内容  : ISDB 安全存储项目新增结构
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulSPLen;
    VOS_UINT8                           aucSecPacket[MTA_SEC_PACKET_MAX_LEN];
} AT_MTA_APSEC_REQ_STRU;

/*****************************************************************************
结构名    : MTA_AT_APSEC_CNF_STRU
结构说明  : AT^APSEC的回复消息结构
1.日    期  : 2012年08月28日
  作    者  : l00198894
  修改内容  : ISDB 安全存储项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 命令执行结果 */
    VOS_UINT32                          ulSPLen;
    VOS_UINT8                           aucSecPacket[MTA_SEC_PACKET_MAX_LEN];
} MTA_AT_APSEC_CNF_STRU;
/* Added by l00198894 for V7R1C50 ISDB Project, 2012/08/28, end */

/* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
/*****************************************************************************
结构名    : AT_MTA_SIMLOCKUNLOCK_REQ_STRU
结构说明  : AT^SIMLOCKUNLOCK的请求消息结构
1.日    期  : 2012年09月18日
  作    者  : l00198894
  修改内容  : STK补充特性及DCM需求开发项目新增结构
*****************************************************************************/
typedef struct
{
    AT_MTA_PERS_CATEGORY_ENUM_UINT8     enCategory;
    VOS_UINT8                           aucReserved[3];
    VOS_UINT8                           aucPassword[MTA_SIMLOCK_PASSWORD_LEN];
} AT_MTA_SIMLOCKUNLOCK_REQ_STRU;

/*****************************************************************************
结构名    : MTA_AT_SIMLOCKUNLOCK_CNF_STRU
结构说明  : AT^SIMLOCKUNLOCK的回复消息结构
1.日    期  : 2012年09月18日
  作    者  : l00198894
  修改内容  : STK补充特性及DCM需求开发项目新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 命令执行结果 */
} MTA_AT_SIMLOCKUNLOCK_CNF_STRU;
/* Added by l00198894 for STK&DCM Project, 2012/09/18, end */


/* Modified by z00161729 for cerssi, 2012-11-21, begin */
/*****************************************************************************
 结构名    : AT_MTA_QRY_NMR_REQ_STRU
 结构说明  : AT获取NMR的消息请求结构

  1.日    期   : 2012年11月23日
    作    者   : z00161729
    修改内容   : NMR新增结构

*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucRatType;
    VOS_UINT8                           aucReserve[3];                          /* 预留后续使用 */
}AT_MTA_QRY_NMR_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_QRY_NMR_CNF_STRU
 结构说明  : mta回复at模块nmr查询结果接口结构

  1.日    期   : 2012年11月23日
    作    者   : z00161729
    修改内容   : NMR新增结构

*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32         enResult;
    VOS_UINT8                         ucTotalIndex;
    VOS_UINT8                         ucCurrIndex;
    VOS_UINT16                        usNMRLen;                                 /* NMR数据长度 */
    VOS_UINT8                         aucNMRData[4];                            /* NMR数据首地址 */
}MTA_AT_QRY_NMR_CNF_STRU;


/* Modified by z00161729 for cerssi, 2012-11-21, end */

/* Added by t00212959 for WLTHRESHOLDCFG, 2012-12-10, begin */
/*****************************************************************************
 结构名    : AT_MTA_RESEL_OFFSET_CFG_SET_REQ_STRU
 结构说明  : AT向MTA发送WLTHRESHOLDCFG的重选参数
  1.日    期   : 2012年12月10日
    作    者   : t00212959
    修改内容   : WLTHRESHOLDCFG新增结构

*****************************************************************************/
typedef struct
{
    VOS_UINT8                                   ucOffsetFlg;                    /* 0:灭屏；1:亮屏*/
    VOS_UINT8                                   aucReserve[3];                  /* 预留后续使用 */
}AT_MTA_RESEL_OFFSET_CFG_SET_NTF_STRU;
/* Added by t00212959 for WLTHRESHOLDCFG, 2012-12-10, end */

/* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, begin */
/*****************************************************************************
 结构名    : AT_MTA_WRR_AUTOTEST_QRY_PARA_STRU
 结构说明  : AS测试命令参数

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCmd;
    VOS_UINT8                           ucParaNum;
    VOS_UINT16                          usReserve;
    VOS_UINT32                          aulPara[AT_MTA_WRR_AUTOTEST_MAX_PARA_NUM];
}AT_MTA_WRR_AUTOTEST_QRY_PARA_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_AUTOTEST_QRY_RSLT_STRU
 结构说明  : WAS测试命令返回结果

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulRsltNum;
    VOS_UINT32                          aulRslt[MTA_AT_WRR_AUTOTEST_MAX_RSULT_NUM];
}MTA_AT_WRR_AUTOTEST_QRY_RSLT_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_AUTOTEST_QRY_CNF_STRU
 结构说明  : WAS测试命令返回结果消息结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    MTA_AT_WRR_AUTOTEST_QRY_RSLT_STRU   stWrrAutoTestRslt;
} MTA_AT_WRR_AUTOTEST_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_CELLINFO_STRU
 结构说明  : 小区信息结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      usCellFreq;
    VOS_UINT16                      usPrimaryScramCode;
    VOS_INT16                       sCpichRscp;
    VOS_INT16                       sCpichEcN0;

}MTA_AT_WRR_CELLINFO_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_CELLINFO_RSLT_STRU
 结构说明  : WRR回复MTA小区信息查询结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
     VOS_UINT32                     ulCellNum;
     MTA_AT_WRR_CELLINFO_STRU       astWCellInfo[MTA_AT_WRR_MAX_NCELL_NUM];         /*最多支持W 8个邻区的查询*/

} MTA_AT_WRR_CELLINFO_RSLT_STRU;
/*****************************************************************************
 结构名    : MTA_AT_WRR_CELLINFO_QRY_CNF_STRU
 结构说明  : WRR回复MTA小区信息查询结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    MTA_AT_WRR_CELLINFO_RSLT_STRU       stWrrCellInfo;
} MTA_AT_WRR_CELLINFO_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_MEANRPT_STRU
 结构说明  : 测量报告中的事件+小区

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT16                      usEventId;                                  /*对应的事件类型*/
    VOS_UINT16                      usCellNum;
    VOS_UINT16                      ausPrimaryScramCode[MTA_AT_WRR_ONE_MEANRPT_MAX_CELL_NUM];
}MTA_AT_WRR_MEANRPT_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_MEANRPT_RSLT_STRU
 结构说明  : 自动化测试AT^MEANRPT,
             查询最近最多10次测量报告中的事件+小区

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                      ulRptNum;
    MTA_AT_WRR_MEANRPT_STRU         astMeanRptInfo[MTA_AT_WRR_MAX_MEANRPT_NUM];
}MTA_AT_WRR_MEANRPT_RSLT_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_MEANRPT_QRY_CNF_STRU
 结构说明  : WRR给MTA回复^MEANRPT请求的消息结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    MTA_AT_WRR_MEANRPT_RSLT_STRU        stMeanRptRslt;
} MTA_AT_WRR_MEANRPT_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_FREQLOCK_CTRL_STRU
 结构说明  : WAS锁频控制结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucFreqLockEnable;
    VOS_UINT8                           aucReserved[1];
    VOS_UINT16                          usLockedFreq;
} MTA_AT_WRR_FREQLOCK_CTRL_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_FREQLOCK_SET_CNF_STRU
 结构说明  : MTA给AT回的锁频控制结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
} MTA_AT_WRR_FREQLOCK_SET_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_FREQLOCK_QRY_CNF_STRU
 结构说明  : MTA给AT回的锁频控制结构

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    MTA_AT_WRR_FREQLOCK_CTRL_STRU       stFreqLockInfo;
} MTA_AT_WRR_FREQLOCK_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_RRC_VERSION_SET_CNF_STRU
 结构说明  : WRR给MTA上报version设置结果

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
} MTA_AT_WRR_RRC_VERSION_SET_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_RRC_VERSION_QRY_CNF_STRU
 结构说明  : WRR给MTA上报version查询结果

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    VOS_UINT8                           ucRrcVersion;
    VOS_UINT8                           aucReserved[3];
} MTA_AT_WRR_RRC_VERSION_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_CELLSRH_SET_CNF_STRU
 结构说明  : WRR给MTA上报cellsrh设置结果

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
} MTA_AT_WRR_CELLSRH_SET_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_WRR_CELLSRH_QRY_CNF_STRU
 结构说明  : WRR给MTA上报cellsrh查询结果

  1.日    期   : 2012年12月29日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulResult;
    VOS_UINT8                           ucCellSearchType;
    VOS_UINT8                           aucReserve[3];
} MTA_AT_WRR_CELLSRH_QRY_CNF_STRU;
/* Added by m00217266 for DSDA GUNAS C CORE, 2012-12-26, end */

/* Added by z00214637 for Body Sar Project, 2013-03-11, begin */
/*****************************************************************************
 结构名    : AT_MTA_BODY_SAR_SET_REQ_STRU
 结构说明  : AT向MTA发送BODYSAR门限设置参数
  1.日    期   : 2013年03月11日
    作    者   : z00214637
    修改内容   : ^BODYSARON新增结构
*****************************************************************************/
typedef struct
{
    MTA_BODY_SAR_STATE_ENUM_UINT16      enState;       /* Body SAR状态 */
    VOS_UINT16                          usRsv;         /* 保留位 */
    MTA_BODY_SAR_PARA_STRU              stBodySARPara; /* Body SAR功率门限参数 */
}AT_MTA_BODY_SAR_SET_REQ_STRU;

/*******************************************************************************
 结构名    : MTA_AT_RESULT_CNF_STRU
 结构说明  : AT设置消息操作结果的回复消息结构体
 1.日    期   : 2013年03月11日
   作    者   : z00214637
   修改内容   : 新增结构体
*******************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;      /* 操作结果 */
}MTA_AT_RESULT_CNF_STRU;
/* Added by z00214637 for Body Sar Project, 2013-03-11, end */

/*******************************************************************************
 结构名    : AT_MTA_RESERVE_STRU
 结构说明  : AT与MTA消息保留结构体
 1.日    期   : 2013年03月11日
   作    者   : z00214637
   修改内容   : 新增结构体
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           aucReserved[4]; /* 保留位 */
}AT_MTA_RESERVE_STRU;

/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, begin */
/*****************************************************************************
 结构名    : AT_MTA_CSSN_RPT_FLG_STRU
 结构说明  : CSSN是否主动上报标识结构体，包括CSSI是否主动上报和CSSU是否主动上报

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCssiRptFlg;                           /* 禁止或使能+CSSI的补充业务通知 0:不上报;1:上报 */
    VOS_UINT8                           ucCssuRptFlg;                           /* 禁止或使能+CSSU的补充业务通知 0:不上报;1:上报 */
} AT_MTA_CSSN_RPT_FLG_STRU;

/*****************************************************************************
 结构名    : AT_MTA_CURC_SET_NOTIFY_STRU
 结构说明  : AT给MTA发送设置CURC请求

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_RPT_GENERAL_CTRL_TYPE_ENUM_UINT8     enCurcRptType;                  /* 主动上报模式，0:关闭所有的主动上报；1:打开所有的主动上报；2:根据RptCfg参数决定对应的bit位是否主动上报 */
    VOS_UINT8                                   aucReserve[3];                  /* 保留字段 */
    VOS_UINT8                                   aucRptCfg[AT_MTA_RPT_CFG_MAX_SIZE];                   /* 64bit主动上报标识 */
} AT_MTA_CURC_SET_NOTIFY_STRU;

/*****************************************************************************
 结构名    : AT_MTA_CURC_QRY_REQ_STRU
 结构说明  : AT给MTA发送查询CURC请求

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucReserve[4];
} AT_MTA_CURC_QRY_REQ_STRU;

/*****************************************************************************
 结构名    : AT_MTA_UNSOLICITED_RPT_SET_REQ_STRU
 结构说明  : AT给MTA发送单个命令设置主动上报请求

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_RPT_SET_TYPE_ENUM_UINT32     enReqType;                              /* 请求类型 */

    union
    {
        VOS_UINT8                       ucModeRptFlg;                           /* mode是否主动上报标识 0:不上报，1:上报 */
        VOS_UINT8                       ucSrvstRptFlg;                          /* service status是否主动上报标识 */
        VOS_UINT8                       ucRssiRptFlg;                           /* rssi是否主动上报标识 */
        VOS_UINT8                       ucTimeRptFlg;                           /* time是否主动上报标识 */
        VOS_UINT8                       ucCtzrRptFlg;                           /* ctzr是否主动上报标识 */
        VOS_UINT8                       ucDsFlowRptFlg;                         /* 流量是否主动上报标识 */
        VOS_UINT8                       ucSimstRptFlg;                          /* sim卡状态是否主动上报标识 */
        VOS_UINT8                       ucCregRptFlg;                           /* cs域注册状态是否主动上报标识 */
        VOS_UINT8                       ucCgregRptFlg;                          /* ps域注册状态是否主动上报标识 */
        VOS_UINT8                       ucCeregRptFlg;                          /* L注册状态是否主动上报标识 */
    }u;

    VOS_UINT8                           aucReserve[3];

 } AT_MTA_UNSOLICITED_RPT_SET_REQ_STRU;

/*****************************************************************************
 结构名    : AT_MTA_UNSOLICITED_RPT_QRY_REQ_STRU
 结构说明  : AT给MTA发送查询单个命令主动上报请求

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_RPT_QRY_TYPE_ENUM_UINT32     enReqType;
} AT_MTA_UNSOLICITED_RPT_QRY_REQ_STRU;

/* Added by s00217060 for V9R1_SVLTE, 2013-6-5, begin */
/*****************************************************************************
 结构名    : AT_MTA_NCELL_MONITOR_SET_REQ_STRU
 结构说明  : AT给MTA发送NCELLMONITOR设置请求

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSwitch;
    VOS_UINT8                           aucReserve[3];
} AT_MTA_NCELL_MONITOR_SET_REQ_STRU;

/* Added by s00217060 for V9R1_SVLTE, 2013-6-5, end */

/*****************************************************************************
 结构名    : MTA_AT_CURC_QRY_CNF_STRU
 结构说明  : MTA给AT发送查询CURC回复

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32                   enResult;
    AT_MTA_RPT_GENERAL_CTRL_TYPE_ENUM_UINT8     enCurcRptType;                          /* 主动上报模式，0:关闭所有的主动上报；1:打开所有的主动上报；2:根据ReportCfg参数决定对应的bit位是否主动上报 */
    VOS_UINT8                                   aucReserve[3];
    VOS_UINT8                                   aucRptCfg[AT_MTA_RPT_CFG_MAX_SIZE];  /* 主动上报标识 */
} MTA_AT_CURC_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_UNSOLICITED_RPT_SET_CNF_STRU
 结构说明  : MTA给AT发送单个命令设置主动上报回复

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_UNSOLICITED_RPT_SET_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_UNSOLICITED_RPT_QRY_CNF_STRU
 结构说明  : MTA给AT发送查询单个命令主动上报回复

  1.日    期   : 2013年3月25日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
    AT_MTA_RPT_QRY_TYPE_ENUM_UINT32     enReqType;

    union
    {
        VOS_UINT8                       ucTimeRptFlg;                           /* time是否主动上报标识 */
        VOS_UINT8                       ucCtzvRptFlg;                           /* ctzr是否主动上报标识 */
        AT_MTA_CSSN_RPT_FLG_STRU        stCssnRptFlg;                           /* cssn是否主动上报标识结构体 */
        VOS_UINT8                       ucCusdRptFlg;                           /* cusd是否主动上报标识结构体 */
    }u;

    VOS_UINT8                           aucReserve[2];
} MTA_AT_UNSOLICITED_RPT_QRY_CNF_STRU;

/* Added by s00217060 for 主动上报AT命令控制下移至C核, 2013-3-25, end */


/* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, begin */
/*******************************************************************************
 结构名    : MTA_AT_CGSN_QRY_CNF_STRU
 结构说明  : ID_MTA_AT_CGSN_QRY_CNF消息
 1.日    期   : 2013年05月25日
   作    者   : Y00213812
   修改内容   : 新增结构体
*******************************************************************************/
typedef struct
{
    VOS_UINT8                           aucImei[NV_ITEM_IMEI_SIZE]; /* IMEI号码 */
}MTA_AT_CGSN_QRY_CNF_STRU;
/* Added by Y00213812 for IMEI_VERIFY Project, 2013-05-23, end */
/* Added by s00217060 for V9R1_SVLTE, 2013-6-4, begin */
/*****************************************************************************
 结构名    : MTA_AT_NCELL_MONITOR_QRY_CNF_STRU
 结构说明  : MTA发给AT的查询异系统小区变化信息控制请求消息的回复

  1.日    期   : 2013年5月31日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
    VOS_UINT8                           ucSwitch;
    VOS_UINT8                           ucNcellState;
    VOS_UINT8                           aucReserved[2];
} MTA_AT_NCELL_MONITOR_QRY_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_NCELL_MONITOR_IND_STRU
 结构说明  : MTA发给AT的异系统小区变化主动上报信息

  1.日    期   : 2013年5月31日
    作    者   : s00217060
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucNcellState;
    VOS_UINT8                           aucReserved[3];
} MTA_AT_NCELL_MONITOR_IND_STRU;

/* Added by s00217060 for V9R1_SVLTE, 2013-6-4, end */

/* Added by l00198894 for V9R1 AGPS, 2013/07/22, begin */
/*****************************************************************************
结构名    : AT_MTA_REFCLKFREQ_SET_REQ_STRU
结构说明  : AT^REFCLKFREQ设置命令的请求消息结构

1.日    期   : 2013年07月22日
  作    者   : l00198894
  修改内容   : V9R1 AGPS
*****************************************************************************/
typedef struct
{
    AT_MTA_CMD_RPT_FLG_ENUM_UINT8       enRptFlg;                               /* 命令上报开关标志 */
    VOS_UINT8                           aucReserved1[3];                        /* 保留位 */
} AT_MTA_REFCLKFREQ_SET_REQ_STRU;

/*****************************************************************************
结构名    : MTA_AT_REFCLKFREQ_QRY_CNF_STRU
结构说明  : AT^REFCLKFREQ查询命令的回复消息结构

1.日    期   : 2013年07月22日
  作    者   : l00198894
  修改内容   : V9R1 AGPS
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
    VOS_UINT32                          ulFreq;                                 /* GPS参考时钟的频率值，单位Hz */
    VOS_UINT32                          ulPrecision;                            /* 当前GPS参考时钟的精度，单位ppb */
    PHY_MTA_REFCLOCK_STATUS_ENUM_UINT16 enStatus;                               /* 时钟频率锁定状态 */
    VOS_UINT8                           aucReserved1[2];                        /* 保留位 */
} MTA_AT_REFCLKFREQ_QRY_CNF_STRU;

/*****************************************************************************
结构名    : MTA_AT_REFCLKFREQ_IND_STRU
结构说明  : GPS参考时钟状态信息主动上报消息结构

1.日    期   : 2013年07月22日
  作    者   : l00198894
  修改内容   : V9R1 AGPS
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulFreq;                                 /* GPS参考时钟的频率值，单位Hz */
    VOS_UINT32                          ulPrecision;                            /* 当前GPS参考时钟的精度，单位ppb */
    PHY_MTA_REFCLOCK_STATUS_ENUM_UINT16 enStatus;                               /* 时钟频率锁定状态 */
    VOS_UINT8                           aucReserved1[2];                        /* 保留位 */
} MTA_AT_REFCLKFREQ_IND_STRU;

/* Added by l00198894 for V9R1 AGPS, 2013/07/22, end */

/* Added by m00217266 for AP Sensor, 2013-08-07, begin */
/*****************************************************************************
结构名    : MTA_AT_HANDLEDECT_SET_CNF_STRU
结构说明  : 设置物理层左右手手持状态信息cnf消息

1.日    期   : 2013年08月08日
  作    者   : m00217266
  修改内容   : AP Sensor
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 操作结果 */
} MTA_AT_HANDLEDECT_SET_CNF_STRU;

/*****************************************************************************
结构名    : MTA_AT_HANDLEDECT_QRY_CNF_STRU
结构说明  : 查询物理层左右手手持状态信息cnf消息

1.日    期   : 2013年08月08日
  作    者   : m00217266
  修改内容   : AP Sensor
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usHandle;                               /* 左右手类型 */
    VOS_UINT16                          aucReserved1[1];
    MTA_AT_RESULT_ENUM_UINT32           enResult;                               /* 操作结果 */
} MTA_AT_HANDLEDECT_QRY_CNF_STRU;
/* Added by m00217266 for AP Sensor, 2013-08-07, End */

/* Added by l00198894 for SVLTE Offline Reselect Project, 2013/10/21, begin */
/*****************************************************************************
 结构名    : MTA_AT_PS_TRANSFER_IND_STRU
 结构说明  : 上报PS域迁移指示结构体

  1.日    期   : 2013年10月21日
    作    者   : l00198894
    修改内容   : V9R1C50 SVLTE离网重选项目新增
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucCause;                                /* PS域迁移原因值 */
    VOS_UINT8                           aucReserved1[3];                        /* 保留位 */
} MTA_AT_PS_TRANSFER_IND_STRU;
/* Added by l00198894 for SVLTE Offline Reselect Project, 2013/10/21, end */

/* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, Begin */
/*****************************************************************************
 结构名    : MTA_AT_RF_LCD_MIPICLK_IND_STRU
 结构说明  : 上报MIPICLK结构体

  1.日    期   : 2014年03月04日
    作    者   : j00174725
    修改内容   : RF&LCD INTRUSION项目新增
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usMipiClk;                              /* 主动上报MIPICLK值 */
    VOS_UINT8                           aucReserved1[2];                        /* 保留位 */
} MTA_AT_RF_LCD_MIPICLK_IND_STRU;

/*****************************************************************************
 结构名    : MTA_AT_RF_LCD_MIPICLK_CNF_STRU
 结构说明  : 上报MIPICLK结构体

  1.日    期   : 2014年03月04日
    作    者   : j00174725
    修改内容   : RF&LCD INTRUSION项目新增
*****************************************************************************/
typedef struct
{
    VOS_UINT16                          usMipiClk;                              /* 主动上报MIPICLK值 */
    VOS_UINT16                          usResult;
} MTA_AT_RF_LCD_MIPICLK_CNF_STRU;
/* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, End */

/* Added by l00198894 for 新增+ECID命令, 2013-12-09, begin */
/*******************************************************************************
 结构名    : AT_MTA_ECID_SET_REQ_STRU
 结构说明  : AT与MTA命令+ECID设置请求消息结构体

  1.日    期   : 2013年12月10日
    作    者   : l00198894
    修改内容   : 新增结构体
*******************************************************************************/
typedef struct
{
    VOS_UINT32                          ulVersion;                              /* 命令版本号 */
}AT_MTA_ECID_SET_REQ_STRU;

/*******************************************************************************
 结构名    : MTA_AT_ECID_SET_CNF_STRU
 结构说明  : AT与MTA命令+ECID设置回复消息结构体

  1.日    期   : 2013年12月10日
    作    者   : l00198894
    修改内容   : 新增结构体
*******************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
    VOS_UINT8                           aucCellInfoStr[4];                      /* 增强型小区信息字符串 */
}MTA_AT_ECID_SET_CNF_STRU;
/* Added by l00198894 for 新增+ECID命令, 2013-12-09, end */

/*added by y00176023 for DSDS II,2014-03-25,begin*/
/*****************************************************************************
 结构名    : AT_MTA_RRC_PROTECT_PS_REQ_STRU
 结构说明  : AT获取PSPROTECTMODE的消息请求结构

  1.日    期   : 2014年3月25日
    作    者   : y00176023
    修改内容   : PSPROTECTMODE新增结构

*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enPsProtectFlg;
    VOS_UINT8                           aucReserve[3];                          /* 预留后续使用 */
}AT_MTA_RRC_PROTECT_PS_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_RRC_PROTECT_PS_CNF_STRU
 结构说明  : AT获取PSPROTECTMODE的消息请求结构

  1.日    期   : 2014年3月25日
    作    者   : y00176023
    修改内容   : PSPROTECTMODE新增结构

*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                          /* 返回给AT的结果 */
}MTA_AT_RRC_PROTECT_PS_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_PHY_INIT_CNF_STRU
 结构说明  : AT获取PHYINIT的消息请求结构

  1.日    期   : 2014年3月25日
    作    者   : y00176023
    修改内容   : PHYINIT新增结构

*****************************************************************************/
typedef struct
{
    VOS_UINT8                           aucReserve[4];                          /* 预留后续使用 */
}AT_MTA_PHY_INIT_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_PHY_INIT_CNF_STRU
 结构说明  : AT请求物理层初始化物理层回复的消息结构

  1.日    期   : 2014年3月26日
    作    者   : y00176023
    修改内容   : PHYINIT新增结构
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;                          /* 返回给AT的结果 */
}MTA_AT_PHY_INIT_CNF_STRU;
/*added by y00176023 for DSDS II,2014-03-25,end*/


/*****************************************************************************
 结构名    : AT_MTA_SET_DPDTTEST_FLAG_REQ_STRU
 结构说明  : AT发给MTA的设置DPDT TEST FLAG的消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_CMD_RATMODE_ENUM_UINT8       enRatMode;
    VOS_UINT8                           ucFlag;
    VOS_UINT8                           aucReserved[2];
} AT_MTA_SET_DPDTTEST_FLAG_REQ_STRU;

/*****************************************************************************
 结构名    : AT_MTA_SET_DPDT_VALUE_REQ_STRU
 结构说明  : AT发给MTA的设置DPDT当前天线使用状态的消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_CMD_RATMODE_ENUM_UINT8       enRatMode;
    VOS_UINT8                           aucReserved[3];
    VOS_UINT32                          ulDpdtValue;
} AT_MTA_SET_DPDT_VALUE_REQ_STRU;

/*****************************************************************************
 结构名    : AT_MTA_QRY_DPDT_VALUE_PARA_STRU
 结构说明  : AT发给MTA的查询DPDT VAlUE的消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    AT_MTA_CMD_RATMODE_ENUM_UINT8       enRatMode;
    VOS_UINT8                           aucReserved[3];
} AT_MTA_QRY_DPDT_VALUE_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_SET_DPDTTEST_FLAG_CNF_STRU
 结构说明  : MTA发往AT的设置DPDTTEST Flag开关回复消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_SET_DPDTTEST_FLAG_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_SET_DPDT_VALUE_CNF_STRU
 结构说明  : MTA发往AT的设置DPDT Value回复消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_SET_DPDT_VALUE_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_QRY_DPDT_VALUE_CNF_STRU
 结构说明  : MTA发往AT的回复查询DPDT VAlUE的消息结构

  1.日    期   : 2014年4月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT32                          ulDpdtValue;
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_QRY_DPDT_VALUE_CNF_STRU;

/* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, begin */
/*****************************************************************************
 结构名    : AT_MTA_SET_JAM_DETECT_REQ_STRU
 结构说明  : AT发给MTA的设置Jamming Dectection Report的消息结构

  1.日    期   : 2014年5月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucFlag;
    VOS_UINT8                           ucMethod;
    VOS_UINT8                           ucThreshold;
    VOS_UINT8                           ucFreqNum;
} AT_MTA_SET_JAM_DETECT_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_SET_JAM_DETECT_CNF_STRU
 结构说明  : MTA发给AT的设置Jamming Dectection Report的Cnf消息结构

  1.日    期   : 2014年5月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_SET_JAM_DETECT_CNF_STRU;

/*****************************************************************************
 结构名    : MTA_AT_JAM_DETECT_IND_STRU
 结构说明  : MTA发给AT的Jamming Dectection Report的Ind上报消息结构

  1.日    期   : 2014年5月04日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_JAM_RESULT_ENUM_UINT32       enJamResult;
} MTA_AT_JAM_DETECT_IND_STRU;
/* Added by g00261581 for V3R3 JAM DETECT Project, 2014-05-04, end */

/* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, begin */
/*****************************************************************************
 结构名    : AT_MTA_SET_FREQ_LOCK_REQ_STRU
 结构说明  : AT发给MTA的设置锁频请求的消息结构

  1.日    期   : 2014年6月11日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucEnableFlg;                            /* 1:锁频功能打开，0:功能关闭 */
    AT_MTA_FREQLOCK_RATMODE_ENUM_UINT8  enRatMode;
    VOS_UINT16                          usLockedFreq;
    AT_MTA_GSM_BAND_ENUM_UINT16         enBand;
    VOS_UINT8                           aucReserved[2];
} AT_MTA_SET_FREQ_LOCK_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_SET_FREQ_LOCK_CNF_STRU
 结构说明  : MTA回复给AT设置锁频回复结果的消息结构

  1.日    期   : 2014年6月11日
    作    者   : g00261581
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_SET_FREQ_LOCK_CNF_STRU;
/* Added by g00261581 for V7R11 FREQ LOCK Project, 2014-06-11, end */

/* Added by j00174725 for GU ROAD TEST, 2014-08-05, Begin */
/*****************************************************************************
 结构名    : AT_MTA_SET_GSM_FREQLOCK_REQ_STRU
 结构说明  : AT发给MTA的设置G模锁频请求的消息结构

  1.日    期   : 2014年08月05日
    作    者   : j00174725
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    PS_BOOL_ENUM_UINT8                  enableFlag;                             /* PS_TRUE:锁定，PS_FALSE:去锁定 */
    VOS_UINT8                           aucReserved[3];                         /* 保留位 */
    VOS_UINT16                          usFreq;                                 /* 频点值 */
    AT_MTA_GSM_BAND_ENUM_UINT16         enBand;                                 /* GSM频段 */
} AT_MTA_SET_GSM_FREQLOCK_REQ_STRU;

/*****************************************************************************
 结构名    : MTA_AT_SET_GSM_FREQLOCK_CNF_STRU
 结构说明  : MTA回复给AT设置G模锁频回复结果的消息结构

  1.日    期   : 2014年08月05日
    作    者   : j00174725
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    MTA_AT_RESULT_ENUM_UINT32           enResult;
} MTA_AT_SET_GSM_FREQLOCK_CNF_STRU;
/* Added by j00174725 for GU ROAD TEST, 2014-08-05, End */

/* Added by m00217266 for Xpass reselect, 2014-12-25, begin */
/*****************************************************************************
 结构名    : MTA_AT_XPASS_INFO_IND_STRU
 结构说明  : MTA主动上报的XPASS信息的消息结构

  1.日    期   : 2014年12月25日
    作    者   : m00217266
    修改内容   : 创建
*****************************************************************************/
typedef struct
{
    PHY_MTA_GPHY_XPASS_MODE_ENUM_UINT16           enGphyXpassMode;
    VOS_UINT16                                    usResev1;
    PHY_MTA_WPHY_HIGHWAY_MODE_ENUM_UINT16         enWphyXpassMode;
    VOS_UINT16                                    usResev2;
} MTA_AT_XPASS_INFO_IND_STRU;
/* Added by m00217266 for Xpass reselect, 2014-12-25, end */

/* Added by l00198894 for NVWR Security Control, 2015-04-04, begin */
/*****************************************************************************
 结构名    : AT_MTA_NVWRSECCTRL_SET_REQ_STRU
 结构说明  : AT发给MTA的设置NVWR命令安全控制的消息结构

  1.日    期   : 2015年04月04日
    作    者   : l00198894
    修改内容   : 新增结构体
*****************************************************************************/
typedef struct
{
    VOS_UINT8                           ucSecType;                              /* 安全控制类型 */
    VOS_UINT8                           ucSecStrFlg;                            /* 是否携带安全校验密文 */
    VOS_UINT8                           aucReserved[2];
    VOS_UINT8                           aucSecString[AT_RSA_CIPHERTEXT_LEN];    /* 安全校验密文 */
} AT_MTA_NVWRSECCTRL_SET_REQ_STRU;
/* Added by l00198894 for NVWR Security Control, 2015-04-04, end */



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
    AT_MTA_MSG_TYPE_ENUM_UINT32         ulMsgId;                                /*_H2ASN_MsgChoice_Export AT_MTA_MSG_TYPE_ENUM_UINT32*/
    AT_APPCTRL_STRU                     stAppCtrl;
    VOS_UINT8                           aucMsgBlock[4];
    /***************************************************************************
        _H2ASN_MsgChoice_When_Comment          AT_MTA_MSG_TYPE_ENUM_UINT32
    ****************************************************************************/
}AT_MTA_MSG_DATA;
/*_H2ASN_Length UINT32*/

typedef struct
{
    VOS_MSG_HEADER
    AT_MTA_MSG_DATA                     stMsgData;
}AtMtaInterface_MSG;

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

#endif

