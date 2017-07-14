/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : SysNvId.h
  版 本 号   :
  作    者   : 胡骏 59254
  生成日期   : 2009年5月14日
  最近修改   :
  功能描述   : 定义了系统NV项ID枚举定义
  函数列表   :
  修改历史   :
  1.日    期   : 2009年5月14日
    作    者   : 胡骏 59254
    修改内容   : 创建文件

******************************************************************************/

#ifndef __SYSNVID_H__
#define __SYSNVID_H__

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif

/****************************************************************************
  1 其他头文件包含
*****************************************************************************/
#include "NvIddef.h"


/*typedef VOS_UINT16  SYS_NV_ID_ENUM_U16;
 */

enum SYS_NV_ID_ENUM
{
/*    0  */      en_NV_Item_IMEI = GU_SYS_NV_ID_MIN,
/*    1  */      en_NV_Auth_Code_ID = GU_SYS_NV_ID_MIN + 1,
/*    2  */      en_NV_Auth_Num_ID,
/*    3  */      en_NV_Ttl_ID,
/*    4  */      en_NV_Resume_Flag,
/*    5  */      en_NV_Calibrated_Time,
/*    6  */      en_NV_Item_Serial_Num,
/*    7  */      en_NV_Item_LED_CONFIG_Data,
/*    8  */      en_NV_Item_Om_LogFile_Size,
/*    9  */      en_NV_Item_WatchDog_Flag,
/*   10  */      en_NV_Item_MonitorDSp_Flag,
/*   11  */      en_NV_Item_KickDog_Time = 11,
/*   12  */      en_NV_Item_ScheduleWatchDog_Time,
/*   13  */      en_NV_Item_USIM_TEMP_SENSOR_TABLE,
/*   14  */      en_NV_Item_USIM_TEMP_PROTECT,
/*   15  */      en_NV_Item_UE_Point_Ctrl,
/*   16  */      en_NV_Item_AGING_TEST_TABLE,
/*   17  */      en_NV_Item_Exception_Record,
/*   18  */      en_NV_Item_TA_Stub,
/*   19  */      en_NV_Item_TA_RF_DELAY_VAL,
/*   20  */      en_NV_Item_Sys_Prt_Task,
/*   21  */      en_NV_Item_USB_Enum_Status,
/*   22  */      en_NV_Item_LiveTimeControl,
/*   23  */      en_NV_Item_LiveTime,
/*   24  */      en_NV_Item_MONITORCPU_CFG,
/*   27  */      en_NV_Item_COMMDEGBUG_CFG = 27,
/*   28  */      en_NV_Item_Max_Gsm_Reg_Cnt,
/*   29  */      en_NV_Item_DFS_Config=29,
/*   30  */      en_NV_Item_HW_VER,
/*   31  */      en_NV_Item_PID_Enable_Type,
/*   32  */      en_NV_Item_AT_DISLOG_PWD,
/*   33  */      en_NV_Item_AT_SHELL_OPEN_FLAG,
/*   34  */      en_NV_Item_AT_E5_RIGHT_FLAG,
/*   35  */      en_NV_Item_BATTERY_TEMP_ADC,
/*   36  */      en_NV_Item_SW_VERSION_FLAG,
/*   37  */      en_NV_Item_ERRORLOG_ENABLEFLAG = 37,
/*   38  */      en_NV_Item_ERRORLOG_FLUSHBUFINTERVAL = 38,
/*   39  */      en_NV_Item_ERRORLOG_RECORDPERIOD = 39,
/*   40  */      en_NV_Item_USIM_TEMP_PROTECT_NEW,
/*   41  */      en_NV_Item_DRV_CUSTOMIZE_TYPE = 41,        /*这个NV项底软使用*/
/*   42  */      en_NV_Item_AT_DISSD_FLAG = 42,
/*   43  */      en_NV_Item_AT_DISSD_PWD = 43,
/*   44  */      en_NV_Item_WIFI_IP_ADDRESS,
/*   45  */      en_NV_Item_Om_Port_Type,
/*   46  */      en_NV_Item_Om_Printf_Port,
/*   47  */      en_NV_Item_Om_PsLog_Port,
/*   48  */      en_NV_Item_AT_DISLOG_PWD_NEW,
/*   49  */      en_NV_Item_OLED_TEMP_ADC,
/*   50  */      en_NV_Item_MODIFY_LINKINFO_FLAG,
/*   51  */      en_NV_Item_WEBNAS_SD_WORKMODE,
/*   52  */      en_NV_Item_HW_WDT_FLAG,
/*   53  */      en_NV_Item_DEFAULT_LINK_OF_UART = 53,
/*   54  */      en_NV_Item_POWER_LED_ENABLE = 54,
/*   55  */      en_NV_Item_HW_CONFIG = 55,
/*   59  */      en_NV_Item_M2_ENABLE_FLAG = 59,
/*   60  */      en_NV_Item_SVLTE_FLAG = 60,
/*   63  */      en_NV_Item_NPNP_CONFIG = 63,
/*   64  */      en_NV_Item_VSIM_SUPPORT_FLAG = 64,
/*   65  */      en_NV_Item_VSIM_HVSDH_INFO = 65,
/*   66  */      en_NV_Item_VSIM_Fplmn_Info = 66,
/*   67  */      en_NV_Item_VSIM_Loci_Info = 67,
/*   68  */      en_NV_Item_VSIM_PsLoci_Info = 68,
/*   69  */      en_NV_Item_Card_Status_Cb_Type = 69,
/*   70  */      en_NV_Item_LC_Ctrl_PARA = 70,
/*   71  */      en_NV_Item_Usimm_T1_Ctrl_PARA = 71,
/*   90  */      en_NV_Item_BATTERY_ADC = GU_SYS_NV_ID_MIN + 90,
/*   114 */      en_NV_Item_Factory_Info = GU_SYS_NV_ID_MIN + 114,
/*   115 */      en_NV_Item_AT_FACTORY_INFO = GU_SYS_NV_ID_MIN + 115,
/*   116 */      en_NV_Item_AT_MANUFACTURE_DATE = GU_SYS_NV_ID_MIN + 116,
/*   117 */      en_NV_Item_LOG_FILE_SAVE = GU_SYS_NV_ID_MIN + 117,
/*   118 */      en_NV_Item_USB_LOG_LEV = GU_SYS_NV_ID_MIN + 118,
/*   119 */      en_NV_Item_USB_MNTN_FLAG = GU_SYS_NV_ID_MIN + 119,
/*   120 */      en_NV_Item_OAM_Config = GU_SYS_NV_ID_MIN + 120,
/*   121 */      en_NV_Item_System_APP_Config = GU_SYS_NV_ID_MIN + 121,
/*   122 */      en_NV_Item_ZSP_LDF_CONFIG = GU_SYS_NV_ID_MIN + 122,
/*   123 */      en_NV_Item_HIFI_LDF_CONFIG = GU_SYS_NV_ID_MIN + 123,
/*   124 */      en_NV_Item_TTF_MEM_SOLUTION_ID = GU_SYS_NV_ID_MIN + 124,       /*未使用*/
/*   125 */      en_NV_Item_TTF_MEM_SOLUTION_CFG = GU_SYS_NV_ID_MIN + 125,
/*   126 */      en_NV_Item_PHY_SW_CFG = GU_SYS_NV_ID_MIN + 126,
/*   127 */      en_NV_Item_NV_PRIORITY_THRESHOLD = GU_SYS_NV_ID_MIN + 127,    /*FlashLess Phase II*/
/*   128 */      ev_NV_Item_SCI_DSDA_CFG = 128,
/*   129 */      en_NV_Item_Sim_ATR_Flag = GU_SYS_NV_ID_MIN + 129,
/*   130 */      en_NV_Item_TERMINAL_CAPABILITY = GU_SYS_NV_ID_MIN + 130,
/*   131 */      en_NV_Item_Write_Slice_Record_Flag = GU_SYS_NV_ID_MIN + 131,
                 en_NV_ID_SOCP_SDLOG_CFG = 132,
/* Added by l00208543 for DTS2013082902121, 2013-8-30, begin */
/*   133 */      en_NV_Item_CC_TimerLen  = 133,
/* Added by l00208543 for DTS2013082902121, 2013-8-30, end */
/*   134 */      en_NV_Item_ErrLogCtrlInfo = 134,
/*   135 */      en_NV_Item_AlarmidRelationship = 135,
/*   136 */      en_NV_Item_FTMDetail = 136,
/*   137 */      en_NV_Item_RF_INTRUSION_CFG = GU_SYS_NV_ID_MIN + 137,
/*   138 */      en_NV_Item_GUMODE_CHAN_PARA = 138,
/*   139 */      en_NV_Item_RECORD_BASE_BORARD_ID = GU_SYS_NV_ID_MIN + 139,
/*   140 */      en_NV_Item_RECORD_CURRENT_BORARD_ID = GU_SYS_NV_ID_MIN + 140,
/* Added by j00174725 for UART-MODEM Project, 2013-09-21, begin */
/*   141 */      en_NV_Item_UART_CFG = GU_SYS_NV_ID_MIN + 141,
/* Added by j00174725 for UART-MODEM Project, 2013-09-21, end */

/*   142 */      en_NV_Item_Usim_Support_Ims = GU_SYS_NV_ID_MIN + 142,
/*   143 */      en_NV_Item_FLASH_Log_Record_CFG = GU_SYS_NV_ID_MIN + 143,
/* Modify by j00174725 for V3R3 HSUART PHASEIII, 2013-12-28, Begin */
/*   144 */      en_NV_Item_PORT_BUFF_CFG           = GU_SYS_NV_ID_MIN + 144,
/* Modify by j00174725 for V3R3 HSUART PHASEIII, 2013-12-28, End */
/*   145 */      en_NV_Item_EVENT_RESEND_CFG = GU_SYS_NV_ID_MIN + 145,
/*   146 */      en_NV_Item_CBT_LOG_ENABLE = GU_SYS_NV_ID_MIN + 146,
/* Added by l00198894 for V9R1 C+L PsTransfer, 2014-01-17, begin */
/*   147 */      en_NV_Item_PS_TRANSFER_CFG = GU_SYS_NV_ID_MIN + 147,
/* Added by l00198894 for V9R1 C+L PsTransfer, 2014-01-17, end */
/* Added by z00178766 for modem log path , 2014-03-04, begin */
/*   148 */      en_NV_Item_ProductTypeForLogDirectory = GU_SYS_NV_ID_MIN + 148,
/* Added by z00178766 for modem log path , 2014-03-04, end */
/*   149 */      en_NV_Item_DRX_RESET_ENABLE_CFG = GU_SYS_NV_ID_MIN + 149,
/* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, Begin */
/*   150 */      en_NV_Item_MTC_RF_LCD_CFG = GU_SYS_NV_ID_MIN + 150,
/*   151 */      en_NV_Item_MTC_RF_LCD_TIMER_INTERVAL_CFG = GU_SYS_NV_ID_MIN + 151,
/* Add by j00174725 for RF&LCD INTRUSION, 2014-03-04, End */

/* Added by h00246512 for CDMA, 2014-08-04, begin */
/*   2000*/      en_NV_Item_1X_MRU_LIST = 2000,
/* Added by h00246512 for CDMA, 2014-08-04, end */

/*   2049*/      en_NV_Item_OM_Port_Num = GU_SYS_NV_ID_MIN + 2049,

/* Added by l00198894 for DSDS Active Modem Mode, 2014-09-25, begin */
/*   2300*/      en_NV_Item_DSDS_Active_Modem_Mode = 2300,
/* Added by l00198894 for DSDS Active Modem Mode, 2014-09-25, end */
/* Added by b00269685 for DTS2014101301568, 2014-10-29, begin */
/*   2302*/      en_NV_Item_HIGH_PRIO_RAT_HPLMN_TIMER_CFG = 2302,
/* Added by b00269685 for DTS2014101301568, 2014-10-29, end */
/* Added by h00285180 for DTS2014110307415, 2014-10-20, begin */
/* 2303 */       en_NV_Item_ChangeNWCause_CFG = 2303,
/* Added by h00285180 for DTS2014110307415, 2014-10-20, end   */
/* Added by l00198894 for ECID Custom Config, 2014-11-17, begin */
/*   2304*/      en_NV_Item_ECID_TL2GSM_CFG = 2304,
/* Added by l00198894 for ECID Custom Config, 2014-11-17, end */
/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, begin */
/* 2305  */      en_NV_Item_CMCC_Cfg_Dplmn_Nplmn = 2305,
/* 2306  */      en_NV_Item_UNICOM_Cfg_Dplmn_Nplmn = 2306,
/* 2307  */      en_NV_Item_CT_Cfg_Dplmn_Nplmn = 2307,
/* 2308  */      en_NV_Item_Cfg_Dplmn_Nplmn_Flag = 2308,
/* Added by c00188733 for DPLMN&NPLMN, 2014-7-14, end */
/* Added by h00285180 for DTS2014110307375 , 2014-11-04, begin */
/*   2309*/     en_NV_Item_REL_PS_SIGNAL_CON_CFG = 2309,
/* Added by h00285180 for DTS2014110307375 , 2014-11-04, end */
/* Added by A00165503 for DTS2014122908593, 2014-11-01, Begin */
/*  2311 */      en_NV_Item_PDN_TEARDOWN_POLICY = 2311,
/* Added by A00165503 for DTS2014122908593, 2014-11-01, End */
/* Added by wx270776 for DTS2014121701015 , 2014-12-19, begin */
/*   2312*/     en_NV_Item_User_Cfg_Ext_Ehplmn_Info = 2312,            /* 用户配置的EHplmn NVIM组 ID */
/* Added by wx270776 for DTS2014121701015 , 2014-12-19, end */
/* Added by h00285180 for DTS2015010401946, 2015-01-05, begin */
/*   2313*/     en_NV_Item_LTE_REJ_CAUSE_14_CFG = 2313,
/* Added by h00285180 for DTS2015010401946, 2014-01-05, end   */
/* Added by b00269685 for DTS2015031909305, 2015-3-20, begin */
/*  2319 */     en_NV_Item_Roam_Display_Cfg = 2319,                /* 漫游显示配置 */
/* Added by b00269685 for DTS2015031909305, 2015-3-20, end */

/* Added by l00198894 for NVWR Security Control, 2015-04-04, begin */
/*  2321 */     en_NV_Item_NVWR_SEC_CTRL            = 2321,                     /* NVWR命令安全控制 */
/* Added by l00198894 for NVWR Security Control, 2015-04-04, end */
/* Added by b00269685 for protect_csfb_mt, 2015-5-4, begin */
/* 2324 */      en_NV_Item_Protect_Mt_Csfb_Paging_Procedure_Len = 2324,         /* csmt 保护时长 */
/* Added by b00269685 for protect_csfb_mt, 2015-5-4, end */

/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, begin */
/* 2325 */      en_NV_Item_HIGH_PRIO_PLMN_REFRESH_TRIGGER_BG_SEARCH_CFG   = 2325,
/* Added by c00318887 for file refresh需要触发背景搜, 2015-4-28, end */

/* Added by j00174725 for DTS2015051106584, 2015-04-08, begin */
                en_NV_Item_SMS_PS_CTRL              = 2326,
/* Added by j00174725 for DTS2015051106584, 2015-04-08, End */

/* Added by c00318887 for 移植T3402 , 2015-6-17, begin */
/* 2334 */      en_NV_Item_DISABLE_LTE_START_T3402_ENABLE_LTE_CFG   = 2334,
/* Added by c00318887 for 移植T3402 , 2015-6-17, end */
/* Added by n00269697 for ims_call_wait, 2015-8-24, begin */
/*  2340 */     en_NV_Item_Ccwa_Ctrl_Mode                   = 2340,
/* Added by n00269697 for ims_call_wait, 2015-8-24, end */

/* added by y00176023 for DTS2015091602371 澳电低优先级ANYCELL搜LTE定制, 2015-9-17, begin */
/* 2353 */      en_NV_Item_Low_Prio_Anycell_Search_Lte_Cfg   = 2353,
/* added by y00176023 for DTS2015091602371 澳电低优先级ANYCELL搜LTE定制, 2015-9-17, end */

/* Added by c00318887 for DTS2015090705019, 2015-10-9, begin */
/*  2357 */     en_NV_Item_BUFFER_SERVICE_REQ_PROTECT_TIMER_CFG = 2357,         /* 缓存cc ss sms 服务请求时的保护定时器配置 */
/* Added by c00318887 for DTS2015090705019, 2015-10-9, end */

/* Added by j00174725 for DTS2016040901340, 2016-04-10, begin */
/* 2381 */      en_NV_Item_Cs_Loci                          = 2381,             /* 记录CS域相关信息，tmsi, LAI,RAU 状态等待 */
/* Added by j00174725 for DTS2016040901340, 2016-04-10, begin */
/* Added by j00174725 for ECC(DTS2017021705267), 2017-02-18, begin */
/* 2439 */      en_NV_Item_Emc_Cate_Support_ECALL_CFG             = 2439,       /* 紧急呼SETUP消息中，是否支持ECALL类型 */
/* Added by j00174725 for ECC(DTS2017021705267), 2017-02-18, end */

/* Added by w00134354 for DTS2014092208574, 2014-9-22, begin */
/*   3000*/      en_NV_Item_ErrLog_CsHo_Len = 3000,
/* Added by w00134354 for DTS2014092208574, 2014-9-22, end */
 /* Added by w00134354 for DTS2014112502336, 2014-11-25, begin */
 /* 3001 */      en_NV_Item_SBM_CUSTOM_DUAL_IMSI_NEW = 3001,
 /* Added by w00134354 for DTS2014112502336, 2014-11-25, end */

/* Added by p00166345 for DTS2014122400879, 2014-12-22, begin */
/* 3002 */      en_NV_Item_GAS_UTRAN_TDD_DEFAULT_Q_RXLMIN = 3002,
/* Added by p00166345 for DTS2014122400879, 2014-12-22, end */

/* Added by yangsicong for L2G REDIR C1 CUSTUME, 2015-1-26, begin */
/* 3003 */      en_NV_Item_GAS_C1_Calc_Opt_White_Plmn_List = 3003,
/* Added by yangsicong for L2G REDIR C1 CUSTUME, 2015-1-26, end */

/* Added by p00166345 for DTS2015040208433(RapidHoCustomize), 2015-03-13, begin */
/* 3005 */  en_NV_Item_GSM_RAPID_HO_CUSTOMIZE_CFG     = 3005,
/* Added by p00166345 for DTS2015040208433(RapidHoCustomize), 2015-03-13, end */

 /* Added by jiachangqing for DTS2015041501403, 2015-4-17, begin */
                en_NV_Item_Csfb_Mcc_Band_Info = 3008,
 /* Added by jiachangqing for DTS2015041501403, 2015-4-17, end */

/* Added by p00166345 for DTS2015040307280, 2015-04-23, begin */
/* 3009 */     en_NV_Item_GAS_GSM_BAND_CUSTOMIZE_CFG    = 3009,
/* Added by p00166345 for DTS2015040307280, 2015-04-23, end */
/* 3012 */      en_NV_Item_Was_Csfb_Search_Ctr_Info          = 3012,
/* Added by p00166345 for DTS2015052101020, 2015-05-15, begin */
/* 3015 */      en_NV_Item_GAS_FAST_AREA_LOST_CFG = 3015,
/* Added by p00166345 for DTS2015052101020, 2015-05-15, end */

/* Added by p00166345 for DTS2015053000044, 2015-06-09, begin */
/* 3018 */      en_NV_Item_GAS_AUTO_FR_CFG      = 3018,
/* Added by p00166345 for DTS2015053000044, 2015-06-09, end */

/* Added by p00166345 for DTS_No3GPrio_Customization, 2015-07-07, begin */
/* 3021 */      en_NV_Item_GAS_INTER_RAT_RESEL_CFG     = 3021,
/* Added by p00166345 for DTS_No3GPrio_Customization, 2015-07-07, end */
/* Added by w00146666 for DTS2016090604617, 2016-09-09, begin */ 
/* 3063 */     en_NV_Item_GAS_Revision_Level_Customization              = 3063,
/* Added by w00146666 for DTS2016090604617, 2016-09-09, end */ 
/*   4000 */     en_NV_Item_DDR_ADJUST_CFG  = 4000,
/*   4900  */    en_NV_Item_Bastet_CONFIG = 4900,
/*   8250*/      en_NV_Item_GCF_TYPE_CONTENT_ID = 8250,
/*   8517*/      en_NV_Item_ENHANCE_SIMCARD_LOCK_STATUS = 8517,
/*   8518*/      en_NV_Item_GENHANCE_SIMCARD_REMAIN_TIMES = 8518,
/*   8524*/      en_NV_Item_TOTOLPC_PARA_CTRL = 8524,
/*   8525*/      en_NV_Item_Wcdma_OLPC_MapWeight_Para = 8525,
/*   9037*/      en_NV_Item_Flow_Ctrl_Config         = 9037,
/*   9040*/      en_NV_Item_WIFI_INFO                = 9040,
/*   9043 */     en_NV_Item_MED_CODEC_TYPE           = 9043,

/* Added by w00167002 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, begin */
/*  9046 */      en_NV_Item_Ho_Wait_Sysinfo_Timer_Config    = 9046,
/* Added by w00167002 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, end */

/* Added by f62575 for C50_IPC Project, 2012/02/23, begin */
/*   9049 */     en_NV_Item_FDN_Info                 = 9049,
/* 9050  */      en_NV_Item_CSFB_PPAC_Para           = 9050,                  /* WAS新增PPAC NV项 */
/* Added by f62575 for C50_IPC Project, 2012/02/23, end   */
/*   9051*/      en_NV_BREATH_TIME = 9051,
/* Added by w00176964 for DTS2012031900095, 2012-3-17, begin */
/* 增加LTE国际漫游定制NV */
/* 9052 */       en_NV_Item_Lte_Internation_Roam_Config     = 9052,

/* 增加拨号被拒11,12,13,15定制NV */
/* 9053 */       en_NV_Item_Dail_Reject_Config              = 9053,

/* 增加关闭短信定制NV */
/* 9054 */       en_NV_Item_Close_SMS_Capability_Config     = 9054,

/*  9065 */      en_NV_Item_XO_DEFINE               = 9065,

/*  9041 */      en_NV_Item_SubPlatFormInfo      = 9041,
/*  9070 */      en_NV_Item_Eqver                        = 9070,
/*  9071 */      en_NV_Item_Csver                        = 9071,
/* Added by w00176964 for DTS2012031900095, 2012-3-17, end */

/* 9066 */       en_NV_Item_Fastdorm_Enable_Flag         = 9066,
/*   9067 */     en_NV_Item_Report_Cell_Sign              = 9067,/* WAS新增NV项，上报小区信号强度 */
/* Added by l00171473 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, begin */
                 en_NV_Item_ETWS_Service_Cfg_Para = 9068,                              /* ETWS 相关配置项 */
/* Added by l00171473 for V7R1C50 CSFB&PPAC&ETWS&ISR, 2012-2-25, end */
/*   9069*/      en_NV_Item_WAS_Customized_Para        = 9069,       /* WAS新增NV项，存储定制NV参数 */
/* 9072 */       en_NV_Item_FC_ACPU_DRV_ASSEMBLE_PARA  = 9072, /* 动态调整驱动组包方案档位信息 */

/* Added by L60609 for V7R1C50 AT&T&DCM, 2012-6-11, begin */
/* 9080 */       en_NV_Item_Scan_Ctrl_Para             = 9080,
/* 9081 */       en_NV_Item_Att_Ens_Ctrl_Para          = 9081,
/* 9082 */       en_NV_Item_Pdp_Act_Limit_Para         = 9082,
/* Added by L60609 for V7R1C50 AT&T&DCM, 2012-6-11, end */
                 /* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, begin */
/* 9083 */       en_NV_Item_REPORT_ECC_NUM_SUPPORT_FLAG = 9083,
/* 9084 */       en_NV_Item_CUSTOM_ECC_NUM_LIST         = 9084,
/* 9085 */       en_NV_Item_ACTING_PLMN_SUPPORT_FLAG    = 9085,
/* 9086 */       en_NV_Item_HPLMN_SEARCH_REGARDLESS_MCC_SUPPORT = 9086,
/* 9087 */       en_NV_Item_SINGLE_DOMAIN_FAIL_ACTION_LIST      = 9087,
/* 9088 */       en_NV_Item_CS_FAIL_NETWORK_FAILURE_PLMN_SEARCH_FLAG = 9088,
/* 9089 */       en_NV_Item_REPORT_PLMN_SUPPORT_FLAG                 = 9089,
                 /* Added by w00166186 for V7R1C50 AT&T&DCM, 2012-6-11, end */

                 /* Added by h59254 for V7R1C50 AT&T, 2012-6-29, begin */
/* 9090 */       en_NV_Item_Usim_Support_Feature_Config              = 9090,
                 /* Added by h59254 for V7R1C50 AT&T, 2012-6-29, begin */

/* Added by s00184266 for GT-Resel-BBIT, 2012-7-22, begin */
/* 9091 */       en_NV_Item_UTRAN_TDD_FREQ_BAND		   = 9091, /* 指示TDS Band信息 */
/* Added by s00184266 for GT-Resel-BBIT, 2012-7-22, end*/

/* Added by w00167002 for V7R1C50_GUTL_PhaseI, 2012-7-12, begin */
/* 9092 */       en_NV_Item_Utran_Mode                 = 9092,                  /* 指示当前UTRAN模式为WCDMA还是TD-SCDMA */
/* Added by w00167002 for V7R1C50_GUTL_PhaseI, 2012-7-12, end */
/* Added by f62575 for DTS2013120411878, 2013-12-09, begin */
/* 9094  */      en_NV_Item_CALL_CallNotSupportedCause = 9094,
/* Added by f62575 for DTS2013120411878, 2013-12-09, end */

/* Added by L60609 for MUX，2012-08-08,  Begin */
/* 9100 */       en_NV_Item_Mux_Support_Flg            = 9100,
/* Added by L60609 for MUX，2012-08-08,  End */

/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-8, begin */
/* 9102 */       en_NV_Item_User_Cfg_Ehplmn_Info       = 9102,                  /* 用户配置的EHplmn NVIM ID */
/* 9103 */       en_NV_Item_Utran_Mode_Auto_Switch     = 9103,                  /* 在当前的GUTL版本，支持配置出GUL版本,GTL版本，以及GUTL版本配置NVIM ID */
/* 9104 */       en_NV_Item_Disabled_Rat_Plmn_Info     = 9104,                  /* 禁止带接入技术的PLMN信息 */
/* Added by w00167002 for V7R1C50_GUTL_PhaseII, 2012-8-8, end */

/* Modify by z60575 for multi_ssid, 2012-9-25 begin */
/* 9110 */       en_NV_Item_MULTI_WIFI_KEY             = 9110,       /* 支持多组SSID扩展新增WIKEY NV项 */
/* 9111 */       en_NV_Item_MULTI_WIFI_STATUS_SSID     = 9111,       /* 支持多组SSID扩展新增SSID NV项 */
/* Modify by z60575 for multi_ssid, 2012-9-25 end */

/* Added by z40661 for DTS2012101809567, 2012/10/18, begin */
/* 9112 */      en_NV_Item_UMTS_CODEC_TYPE              = 9112,
/* Added by z40661 for DTS2012101809567, 2012/10/18, end */

/* Added by l00171473 for V7R1C50_At_Abort, 2012-9-22, begin */
/* 9113 */       en_NV_Item_AT_ABORT_CMD_PARA          = 9113,
/* Added by l00171473 for V7R1C50_At_Abort, 2012-9-22, end */
/* Added by l00198894 for STK&DCM Project, 2012/09/18, begin */
/* 9116 */       en_NV_Item_CCallState_Rpt_Status           = 9116,             /* ^CCALLSTATE命令主动上报状态 */
/* Added by l00198894 for STK&DCM Project, 2012/09/18, end */
/* Added by f62575 for DTS2012111201995, 2012-11-08, begin */
/* 9118 */       en_NV_Item_SMS_MT_CUSTOMIZE_INFO       = 9118,
/* Added by f62575 for DTS2012111201995, 2012-11-08, end   */

/* Modified by z00161729 for DTS2012083102536, 2012-10-29, begin */
 /* 9119  */     en_NV_Item_CS_Call_Redial_CFG = 9119,
/* Modified by z00161729 for DTS2012083102536, 2012-10-29, end */

/* Added by yangsicong for DTS2012112006063, 2012-11-22, begin */
 /* 9120  */     en_NV_Item_QSearch_Customization = 9120,
/* Added by yangsicong for DTS2012112006063, 2012-11-22, end */

/* Added by p00166345 for DTS2012110507166, 2012-11-16, begin */
/* 9121 */       en_NV_Item_Gsm_Poor_RxQual_ThresHold = 9121,
/* Added by p00166345 for DTS2012110507166, 2012-11-16, end */

/* Added by w00176964 for DTS2012112902395, 2012-11-29, begin */
/* 9122 */       en_NV_Item_Hplmn_Register_Ctrl_Flg = 9122,
/* Added by w00176964 for DTS2012112902395, 2012-11-29, end */
/* Modified by z00161729 for cerssi and cnmr, 2012-11-21, begin */
/*9123*/        en_NV_Item_CELL_SIGN_REPORT_CFG        = 9123,
/* Modified by z00161729 for cerssi and cnmr, 2012-11-21, end */
/* Added by j00169676 for dcm 2012-12-10, begin */
/* 9124 */       en_NV_Item_LOW_POWER_Cell_Resel_OffSet = 9124,
/* Added by j00169676 for dcm 2012-12-10, end */
/* Added by l00198894 for DTS2012121903123, 2012/12/18, begin */
/* 9125 */       en_NV_Item_MUX_REPORT_CFG = 9125,
/* Added by l00198894 for DTS2012121903123, 2012/12/18, end */
/* 9126 */       en_NV_Item_Usim_OpFile_Init_Cfg = 9126,
/* 9127 */       en_NV_Item_Sim_OpFile_Init_Cfg = 9127,
/* Added by l00198894 for DTS2012122505294, 2012/12/26, begin */
/* 9128 */       en_NV_Item_CIMI_PORT_CFG = 9128,
/* Added by l00198894 for DTS2012122505294, 2012/12/26, end */
/* Added by h59254 2013/01/04, begin */
/* 9129 */       en_NV_Item_Test_Card_Cfg = 9129,
/* Added by h59254 2013/01/04, end */

/* Added by l60609 for V9R1 IPv6&TAF/SM Project, 2013-4-24, begin */
/* 9130 */       en_NV_Item_IPV6_BACKPROC_EXT_CAUSE = 9130,
/* Added by l60609 for V9R1 IPv6&TAF/SM Project, 2013-4-24, end */

/* Added by f62575 for DTS2012122406218, 2012/12/28, begin */
                 en_NV_Item_SMS_TIMER_LENGTH = 9131,
/* Added by f62575 for DTS2012122406218, 2012/12/28, end   */
/* Added by f62575 for DTS2013012408620, 2013-01-24, begin */
                 en_NV_Item_SS_CUSTOMIZE_PARA = 9132,
/* Added by f62575 for DTS2013012408620, 2013-01-24, end */
/* Added by z00206003 for DTS2013030400506 , 2013-03-01, begin */
/* 9133 */       en_NV_Item_UCS2_Customization = 9133,
/* Added by z00206003 for DTS2013030400506 , 2013-03-01, end */

/* Added by p00166345 for DTS2013042403396, 2013-04-16, begin */
/* 9134 */       en_NV_Item_Csfb_Customization = 9134,
/* Added by p00166345 for DTS2013042403396, 2013-04-16, end */

/* 9200 */       en_NV_Item_WTTF_MACDL_WATERMARK_LEVEL_Config = 9200, /* BBP译码中断水线等级控制信息 */
/* 9201 */       en_NV_Item_WTTF_MACDL_BBPMST_TB_HEAD_Config  = 9201, /* BBPMST头部TB块信息 */

/* Added by l60609 for DSDA Phase II, 2012-12-13, Begin */
/* 9202 */       en_NV_Item_AT_CLIENT_CONFIG    = 9202,                           /* 双卡双通控制AT通道归属哪个Modem信息 */
/* Added by l60609 for DSDA Phase II, 2012-12-13, End */

/* Added by z00220246 for DSDA Phase II, 2012-12-25, Begin */
/* 9203 */       en_NV_Item_Platform_RAT_CAP        = 9203,
/* Added by z00220246 for DSDA Phase II, 2012-12-25, End */
/* 9205 */       en_NV_Item_BBP_DUMP_ENABLE             = 9205,  /* BBP 数采开关 */
/* 9206 */       en_NV_Item_SUPPORT_RATMODE_MASK    = 9206, /* 告知物理层每个MODEM支持的模式 */

/* Modified by l60609 for DTS2011102400120, 2012-05-10, Begin */
/* 9207 */       en_NV_Item_Clvl_Volume         = 9207,
/* Modified by l60609 for DTS2011102400120, 2012-05-10, End */

/* Added by z00214637 for Body Sar Project, 2013-03-11, begin */
/* 9206 */       en_NV_Item_BODY_SAR_PARA               = 9208,
/* Added by z00214637 for Body Sar Project, 2013-03-11, end */

/* 9209 */       en_NV_Item_Ext_Tebs_Flag              = 9209, /* TTF BO扩展功能 */
/* 9210 */       en_NV_Item_TCP_ACK_Delete_Flg         = 9210, /* TTF 旧的TCP ACK删除功能 */

/* Added by w00176964 for DTS2013032507710, 2013-4-10, begin */
/* 9211 */       en_NV_Item_H3g_Customization          = 9211,
/* Added by w00176964 for DTS2013032507710, 2013-4-10, end */

/* Added by z00214637 for TEMP PROTECT NAS project, 2013-04-17, begin */
/* 9212 */       en_NV_Item_TEMP_PROTECT_CONFIG = 9212,
/* Added by z00214637 for TEMP PROTECT NAS project, 2013-04-17, end */

/*9213*/         en_NV_Item_THERMAL_TSENSOR_CONFIG          = 9213, /* 温保tsensor控制NV */
/*9214*/         en_NV_Item_THERMAL_BAT_CONFIG              = 9214, /* 温保电池控制NV */
/*9215*/         en_NV_Item_THERMAL_HKADC_CONFIG            = 9215, /* 温保HKADC通道控制NV */
/*9216*/         en_NV_Item_HKADC_PHYTOLOGICAL_CONFIG       = 9216, /* 温保物理到逻辑转换控制NV */
/*9217*/         en_NV_Item_NV_TCXO_CFG                     = 9217, /* TCXO配置参数 */

/* Added by z00214637 for V3R3 Share-PDP Project, 2013-6-4, begin */
/*9218*/         en_NV_Item_SHARE_PDP_INFO                  = 9218, /* Share PDP特性控制NV */
/*9219*/         en_NV_Item_DEACT_USIM_WHEN_POWEROFF        = 9219, /* AT+CFUN=0命令软关机，去激活SIM卡功能控制NV */
/* Added by z00214637 for V3R3 Share-PDP Project, 2013-6-4, end */
/* Modified by z00161729 for V9R1_SVLTE, 2013-6-4, begin */
                en_NV_Item_Enable_Lte_Timer_Len = 9220,
/* Modified by z00161729 for V9R1_SVLTE, 2013-6-4, end */

/* Added by f62575 for VSIM FEATURE, 2013-8-29, begin */
                en_Item_NAS_VSIM_CTRL_FEATURE               = 9224,
/* Added by f62575 for VSIM FEATURE, 2013-8-29, end */

/* Modified by w00242748 for DTS2013072200933, 2013-7-25, begin */
/*   9225  */   en_NV_Item_CSFB_RAU_FOLLOW_ON_FLAG = 9225,
/* Modified by w00242748 for DTS2013072200933, 2013-7-25, end */

/* Added by l00208543 for DTS2013100904573, 2013-10-09, begin */
/* 9227 */      en_NV_Item_ChangeRegRejectCause_Flg           = 9227,
/* Added by l00208543 for DTS2013100904573, 2013-10-09, end */

/* Added by s00190137 for ACC&SPLMN, 2013-10-15 Begin */
/* 9228  */      en_NV_Item_ACC_BAR_PLMN_SEARCH_FLG = 9228,           /*定制非HPLMN和RPLMN接入禁止时是否需要搜网 */
/* 9229  */      en_NV_Item_USER_CFG_OPLMN_LIST = 9229,               /*定制用户预制OPLMN列表，与SIM卡互斥，优先级高于SIM卡 */
/* Added by s00190137 for ACC&SPLMN, 2013-10-15 End */

/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, begin */
/* 9230  */      en_NV_Item_Rat_Forbidden_List_Config = 9230,
/* Added by l00208543 for RatBlackListAccordSimType, 2013-11-01, end */

/* Added by w00167002 for DTS2013112006986, 2013-11-18, begin */
/* 9231 */       en_NV_Item_SMC_Ctrl_Flg                    = 9231,             /* UTRAN SMC控制NV */
/* Added by w00167002 for DTS2013112006986, 2013-11-18, end */

/* Added by f00204170 for DTS2013111909057, 2013-11-21, begin */
/* 9232  */      en_NV_Item_HKADC_CHANNEL_CONFIG = 9232, /* 温保通道配置 */
/* Added by f00204170 for DTS2013111909057, 2013-11-21, end */

/* Added by f00179208 for DTS2013111109085, 2013-12-05, Begin */
/* 9233 */      en_NV_Item_Dfs_Dsflow_Rate_Config     = 9233,
/* Added by f00179208 for DTS2013111109085, 2013-12-05, End */

/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-18, begin */
/* 9234 */       en_NV_Item_DSDA_PLMN_SEARCH_ENHANCED_CFG = 9234,
/* Modified by z00161729 for svlte g-tl ps transfer optimize, 2013-11-18, end */

/* Added by m00217266 for DTS2013122404244, 2013-12-24, begin */
/* 9235 */       en_NV_Item_VOICE_TEST_FLAG       = 9235,
/* Added by m00217266 for DTS2013122404244, 2013-12-24, end */


/* Add by s00190137 for 256 EOPLMN, 2013-12-27, begin */
/* 9236  */      en_NV_Item_USER_CFG_OPLMN_EXTEND_LIST = 9236,  /*定制用户预制OPLMN列表(支持256个OPLMN)，与SIM卡互斥，优先级高于SIM卡 */
/* Add by s00190137 for 256 EOPLMN, 2013-12-27, end */

/* Added by s00217060 for VoLTE_PhaseII  项目, 2013-11-04, begin */
/* 9237  */      en_NV_Item_SMS_DOMAIN                         = 9237,
/* Added by s00217060 for VoLTE_PhaseII  项目, 2013-11-04, end */

/* Added by j00169676 for 三步法搜索项目, 2014-1-23, begin */
               en_NV_Item_3G_TO_2G_Config      = 9238,
/* Added by j00169676 for 三步法搜索项目, 2014-1-23, begin */
/* Modified by f00204170 for uart drvier, 2014-01-26, begin */
/* 9239 */       en_NV_Item_UART_SWITCH_CFG = 9239,
/* Modified by f00204170 for uart drvier, 2014-01-26, end */
/* Added by w00176964 for VoLTE_PhaseIII 项目, 2013-12-30, begin */
                en_NV_Item_WAIT_IMS_VOICE_AVAIL_Timer_Len      = 9240,
/* Added by w00176964 for VoLTE_PhaseIII 项目, 2013-12-30, end */

/* Added by y00245242 for VoLTE_PhaseIII, 2013-12-24, begin */
                 en_NV_Item_REDIAL_IMS_TO_CS_DOMAIN          = 9241,
                 en_NV_Item_IMS_ROAMING_SUPPORT_FLG          = 9242,
/* Added by y00245242 for VoLTE_PhaseIII, 2013-12-24, end */

/* Added by f00261443 for VoLTE_PhaseIII  项目, 2013-12-25, begin */
                en_NV_Item_IMS_VOICE_MOBILE_MANAGEMENT       = 9243,
/* Added by f00261443 for VoLTE_PhaseIII  项目, 2013-12-25, end */
/* Added by h00163499 for SVLTE 共天线项目, 2014-1-21, begin */
/* 9244 */       en_NV_MODEM_RF_SHARE_CFG          = 9244,
/* Added by h00163499 for SVLTE 共天线项目, 2014-1-21, end */
/* Add by f62575 for DTS2014012902032, 2014-02-13, begin */
/* 9246  */      en_NV_Item_CS_ONLY_DATA_SERVICE_SUPPORT_FLG = 9246,            /* 用户定制NV: PS注册被禁止情况下，是否允许数据业务触发注册的标志 */
/* Add by f62575 for DTS2014012902032, 2014-02-13, end */
/* Added byl00215384 for DTS2014021006453, 2014-02-18, begin */
/* 9247  */      en_NV_Item_Ignore_Auth_Rej_CFG = 9247,
/* Added byl00215384 for DTS2014021006453, 2014-02-18, end */
/* Added by w00146666 for C1 Criterion Customize, 2014-01-17, begin */
/* 9248 */       en_NV_Item_GSM_C1_CUSTOMIZE = 9248,
/* Added by w00146666 for C1 Criterion Customize, 2014-01-17, end */
/* Added by w00176964 for High_Rat_Hplmn_Search, 2014-2-21, begin */
/* 9249 */       en_NV_Item_HIGH_PRIO_RAT_HPLMN_TIMER_INFO = 9249,
/* Added by w00176964 for High_Rat_Hplmn_Search, 2014-2-21, end */
/* Modified by z00161729 for DTS2014022206794, 2014-2-25, begin */
/*9250*/         en_NV_Item_LTE_DISABLED_USE_LTE_INFO_FLAG = 9250,            /* L能力不支持时gmm做rau时是否需要从l获取安全上下文或guti映射信息，VOS_TRUE:L disable后rau需要从l获取信息；VOS_FALSE:L disable后rau不需要从l获取信息 */
/* Modified by z00161729 for DTS2014022206794, 2014-2-25, end */
/* Added by p00179010 for DTS2014042105131, 2014-02-18, begin */
/* 9251 */      en_NV_Item_SBM_CUSTOM_DUAL_IMSI        = 9251,       /* WAS新增NV项，存储软银双imsi的开关是否打开 */
/* 9252 */      en_NV_Item_Roam_Search_Rplmn_Config    = 9252,
/* Added by p00179010 for DTS2014042105131, 2014-02-18, end */
/* Added by y00245242 for DTS2014040303776, 2014-4-1, begin */
/* 9254 */       en_NV_Item_IMS_USSD_SUPPORT_FLG            = 9254,
/* Added by y00245242 for DTS2014040303776, 2014-4-1, end */
/* 9256  */      en_Nv_Item_RCM_PARA_CONFIG                  = 9256,

/* Added by w00165751 for V8R1 DSDS, 2014-5-12 Begin */
/* 9257 */       en_NV_Item_GSM_DSDS_PS_CONFIG               = 9257,
/* Added by w00165751 for V8R1 DSDS, 2014-5-12 end */
/* 9258  */      en_NV_Item_PHY_MODE_DSDS_FLAG               = 9258,
/* Added by y00245242 for V3R3C60_eCall项目, 2014-4-4, begin */
/* 9259 */       en_NV_Item_ECALL_CFG_INFO                  = 9259,
/* Added by y00245242 for V3R3C60_eCall项目, 2014-4-4, end */
/* Added by l00220658, 2014-5-23, begin */
/* 9262 */       en_NV_Item_GSM_SSC_CONFIG_PARA              = 9262,      /* GSM SSC模块NV参数配置  */
/* Added by l00220658, 2014-5-23, end */

/* Added by m00217266 for adapt k3 aps profile, 2014-5-26, begin */
/* 9263 */       en_NV_Item_Multi_Dfs_Dsflow_Rate_CFG    = 9263,
/* Added by m00217266 for adapt k3 aps profile, 2014-5-26, end */
/* Added by s00217060 for ultra_flash_csfb, 2014-05-12, begin */
/* 9266 */       en_NV_Item_Ultra_Flash_Csfb_Support_Flg    = 9266,
/* Added by s00217060 for ultra_flash_csfb, 2014-05-12, end */
/* Added by f00179208 for ccpu_load, 2014-06-03, Begin */
/* 9268 */       en_NV_Item_ADS_DYNAMIC_THRESHOLD_CFG        = 9268,
/* Added by f00179208 for ccpu_load, 2014-06-03, End */

/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, Begin */
/* 9269 */       en_NV_Item_DMS_DEBUG_CFG = 9269,
/* Add by n00269697 for V9R1 VCOM DEBUG, 2014-06-03, End   */

/* Added by B00269685 for DTS2014061603311, 2014-6-13, begin */
/* 9270 */       en_NV_Item_3GPP2_Uplmn_Not_Pref_Flg    = 9270,
/* Added by B00269685 for DTS2014061603311, 2014-6-13, end */

/* Added by l00208543 for V9R1 reject 17, 2014-4-29, begin */
/* 9272 */       en_NV_Item_ROAMING_REJECT_NORETRY_CFG  = 9272,   /* 定制NV: Other Plmn上收到reject 17时不重试 */
/* Added by l00208543 for V9R1 reject 17, 2014-4-29, end */

/* Added by s00251052 for V8R1 DUMMY PCH DETECT, 2014-6-28 */
/* 9274  */      en_NV_Item_GSM_PCH_DUMMY_DETECT_FLAG        = 9274,

/* Modified by z00161729 for DSDS III, 2014-6-23, begin */
/* ATA是否异步方式上报OK NV控制，异步方式即发送了connect未收
   到网络connect ack就上报ok，非异步方式是等收到网络connect ack再上报ok*/
/* 9276 */     en_NV_Item_Ata_Report_Ok_Async_Cfg = 9276,
/* Modified by z00161729 for DSDS III, 2014-6-23, end */

/* Added by l00165286 for V8R1 HARQ OUT, 2014-7-14 */
/* 9278  */     en_NV_Item_W_HARQ_OUT_CONFIG = 9278,

/* 9279 */       en_NV_Item_W_Drx_Ctrl                  = 9279,         /* WCDMA是否支持DRX的参数设置 */
/* 9280 */       en_NV_Item_GSM_Drx_Ctrl                = 9280,         /* GSM是否支持DRX的参数设置 */

/* Added by b00269685 for DSDS IV, 2014-7-19, begin */
/* 9281 */       en_NV_Item_DSDS_END_SESSION_DELAY      = 9281,
/* Added by b00269685 for DSDS IV, 2014-7-19, end */

/* Modified by w00242748 for DTS2014063003419, 2014-7-14, begin */
/* 9282 */     en_NV_Item_Syscfg_Trigger_Plmn_Search_Cfg = 9282,
/* Modified by w00242748 for DTS2014063003419, 2014-7-14, end */

/* Added by g00256031 for CUIM Project, 2014-7-22, begin */
/* 9283 */       en_NV_Item_ESN_MEID = 9283,
/* Added by g00256031 for CUIM Project, 2014-7-22, begin */

/* Added by C00242732 for MR_TAS, 2014-7-9, begin */
/* 9284 */       en_Nv_Item_RCM_TAS_TABLE_CONFIG       = 9284,
/* Added by C00242732 for MR_TAS, 2014-7-9, end */

/* Added by C00242732 for MR_TAS, 2014-7-9, begin */
/* 9285 */       en_Nv_Item_TAS_FUNC_CONFIG         = 9285,
/* Added by C00242732 for MR_TAS, 2014-7-9, end */

/* Added by j00169676 for DTS2014072901835 start */
/* 9286  */     en_NV_Item_Was_Freqbands_Priority  = 9286,
/* Added by j00169676 for DTS2014072901835 end */

/* Added by x00217286 for one track GSM HARQ OUT, 2014-8-30 */
/* 9287  */     en_NV_Item_GSM_HARQ_OUT_CONFIG = 9287,

/* Added by d00251604 for XPASS, 2014-12-15, begin */
/* 16029 */       en_NV_Item_FEATURE_XPASS_EN                   = 16029,
/* Added by d00251604 for XPASS, 2014-12-15, end */

/* Added by l00216320 for T313 BACK, 2015-7-17, begin */
/* 16042  */     en_NV_Item_W_T313_BACK_CTRL  = 16042,
/* Added by l00216320 for T313 BACK, 2015-7-17, end */

/* 50009 */      en_NV_Item_TRAFFIC_CLASS_Type = GU_CUSTOM_EXTEND_NV_ID_MIN + 9,
/* 50012 */      en_NV_Item_WIFI_KEY = GU_CUSTOM_EXTEND_NV_ID_MIN + 12,
/* 50014 */      en_NV_Item_WIFI_MAC_ADDR = 50014,
/* 50016 */      en_NV_Item_BATTERY_TEMP_PROTECT = 50016,
/* 50018 */      en_NV_Item_SW_VER = 50018,
/* 50023 */      en_NV_Item_PRI_VERSION = 50023,
/* 50024  */     en_NV_Item_HUAWEI_NW_OPL_NAME_CUSTOMIZED = 50024,
/* 50025  */     en_NV_Item_PRIVATE_CMD_STATUS_RPT = 50025,
/* 50027  */     en_NV_Item_DEFAULT_RATE = 50027,
/* 50029  */     en_NV_Item_HUAWEI_IRAN_OPEN_PAGE_I = 50029,
/* 50031  */     en_NV_Item_MEAN_THROUGHPUT = 50031,
/* 50032  */     en_NV_Item_HUAWEI_PCCW_HS_HSPA_BLUE = 50032,
/* 50036  */     en_NV_Item_HUAWEI_CARDLOCK_PERM_EXT      = 50036,
/* 50037  */     en_NV_Item_HUAWEI_CARDLOCK_OPERATOR_EXT  = 50037,
/* 50041  */     en_NV_Item_NV_HUAWEI_DOUBLE_IMSI_CFG_I   = 50041,
/* 50048 */      en_NV_Item_PRODUCT_ID = 50048,
/* 50050  */     en_NV_Item_APN_Customize = 50050,
/* 50051  */     en_NV_Item_VIDEO_CALL = 50051,
/* 50052  */     en_NV_Item_CUST_USSD_MODE = 50052,
/* 50054  */     en_NV_Item_Forbidden_Band = 50054,
/* 50055  */     en_NV_Item_Enhanced_Hplmn_Srch_Flg = 50055,
/* 50056  */     en_NV_Item_SMS_CLASS0_TAILOR = 50056,
/* 50060  */     en_NV_Item_2G_DISABLE_SPARE_BIT3 = 50060,
/* 50061  */     en_NV_Item_PPP_DIAL_ERR_CODE = 50061,
/* 50063  */     en_NV_Item_Special_Roam_Flag = 50063,
/* 50064  */     en_NV_Item_MultiSimCallConf = 50064,
/* 50071  */     en_NV_Item_Cust_PID_Type = 50071,
/* 50091  */     en_NV_Item_Huawei_Dynamic_PID_Type = 50091,
/* 50110  */     en_NV_Item_Protocol_Base_Type = 50110,
/* 50201  */     en_NV_Item_SEC_BOOT_FLAG = 50201,
/* 52000 */      en_NV_Item_WIFI_STATUS_SSID = 52000,
/* 52001 */      en_NV_Item_WEB_ADMIN_PASSWORD = 52001,
/* 52002 */      en_NV_Item_AP_RPT_SRV_URL = 52002,
/* 52003 */      en_NV_Item_AP_XML_INFO_TYPE = 52003,
/* 52004 */      en_NV_Item_AP_XML_RPT_FLAG = 52004,
/* 52005 */      en_NV_Item_BATT_LOW_TEMP_PROTECT = 52005,
/* 52006 */      en_NV_Item_ISDB_DEFAULT_KEY = 52006,

/* 52008 */      en_NV_Item_REFRESH_TERMINAL_RESPONSE_CP_OR_AP = 52008,

                 en_NV_Item_SYS_Butt
};


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* __SYSNVID_H__ */


