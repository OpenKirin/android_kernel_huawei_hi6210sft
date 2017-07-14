#include "soc_baseaddr_interface.h"
#ifndef __BBP_CDMA_ON_INTERFACE_H__
#define __BBP_CDMA_ON_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define CBBP_CK_MSR_INTERGER_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E00)
#define CBBP_CK_MSR_FRAC_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E04)
#define CBBP_SLEEP_PERIOD_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E08)
#define CBBP_CK_SWITCH_CNT_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E0C)
#define CBBP_DEEP_SLEEP_CNT_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E10)
#define CBBP_SLEEP_MODE_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E14)
#define CBBP_SLEEP_TIME_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E18)
#define CBBP_SLEEP_START_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E1C)
#define CBBP_SWITCH_UP_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E20)
#define CBBP_DEEP_SLEEP_IND_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E24)
#define CBBP_SLEEP_CNT_32K_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E28)
#define CBBP_WAKEUP_TYPE_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E2C)
#define CBBP_SLEEP_STATUS_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E30)
#define CBBP_SYS_CNT_PERIOD_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E34)
#define CBBP_WAKEUP_INT_BBE16_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E50)
#define CBBP_WAKEUP_INT_STA_BBE16_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E54)
#define CBBP_WAKEUP_INT_ARM_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E58)
#define CBBP_WAKEUP_INT_STA_ARM_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E5C)
#define CBBP_DSP_READY_IND_CDRX_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E60)
#define CBBP_DSP_SWITCH_DELAY_MAX_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E64)
#define CBBP_SWITCH_DELAY_CNT_1X_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E68)
#define CBBP_CK_MSR_INTERGER_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E80)
#define CBBP_CK_MSR_FRAC_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E84)
#define CBBP_SLEEP_PERIOD_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E88)
#define CBBP_CK_SWITCH_CNT_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E8C)
#define CBBP_DEEP_SLEEP_CNT_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E90)
#define CBBP_SLEEP_MODE_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E94)
#define CBBP_SLEEP_TIME_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E98)
#define CBBP_SLEEP_START_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1E9C)
#define CBBP_SWITCH_UP_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EA0)
#define CBBP_DEEP_SLEEP_IND_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EA4)
#define CBBP_SLEEP_CNT_32K_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EA8)
#define CBBP_WAKEUP_TYPE_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EAC)
#define CBBP_SLEEP_STATUS_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EB0)
#define CBBP_SYS_CNT_PERIOD_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EB4)
#define CBBP_SWITCH_INT_BBE16_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1ED0)
#define CBBP_SWITCH_INT_STA_BBE16_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1ED4)
#define CBBP_SWITCH_INT_ARM_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1ED8)
#define CBBP_SWITCH_INT_STA_ARM_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EDC)
#define CBBP_DSP_READY_IND_CDRX_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EE0)
#define CBBP_DSP_SWITCH_DELAY_MAX_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EE4)
#define CBBP_SWITCH_DELAY_CNT_EVDO_ADDR (SOC_BBP_CDMA_ON_BASE_ADDR + 0x1EE8)
typedef union
{
    unsigned long ck_msr_interger_1x_reg;
    struct
    {
        unsigned long ck_msr_integer_26ms_1x : 11;
        unsigned long reserved_0 : 5;
        unsigned long ck_msr_integer_1_4chip_1x : 5;
        unsigned long reserved_1 : 11;
    } reg;
} CBBP_CK_MSR_INTERGER_1X_UNION;
#define CBBP_CK_MSR_INTERGER_1X_ck_msr_integer_26ms_1x_START (0)
#define CBBP_CK_MSR_INTERGER_1X_ck_msr_integer_26ms_1x_END (10)
#define CBBP_CK_MSR_INTERGER_1X_ck_msr_integer_1_4chip_1x_START (16)
#define CBBP_CK_MSR_INTERGER_1X_ck_msr_integer_1_4chip_1x_END (20)
typedef union
{
    unsigned long ck_msr_frac_1x_reg;
    struct
    {
        unsigned long ck_msr_frac_1x : 11;
        unsigned long reserved : 21;
    } reg;
} CBBP_CK_MSR_FRAC_1X_UNION;
#define CBBP_CK_MSR_FRAC_1X_ck_msr_frac_1x_START (0)
#define CBBP_CK_MSR_FRAC_1X_ck_msr_frac_1x_END (10)
typedef union
{
    unsigned long sleep_period_1x_reg;
    struct
    {
        unsigned long sleep_period_1x : 23;
        unsigned long reserved : 9;
    } reg;
} CBBP_SLEEP_PERIOD_1X_UNION;
#define CBBP_SLEEP_PERIOD_1X_sleep_period_1x_START (0)
#define CBBP_SLEEP_PERIOD_1X_sleep_period_1x_END (22)
typedef union
{
    unsigned long ck_switch_cnt_1x_reg;
    struct
    {
        unsigned long ck_switch_cnt_1x : 12;
        unsigned long reserved : 20;
    } reg;
} CBBP_CK_SWITCH_CNT_1X_UNION;
#define CBBP_CK_SWITCH_CNT_1X_ck_switch_cnt_1x_START (0)
#define CBBP_CK_SWITCH_CNT_1X_ck_switch_cnt_1x_END (11)
typedef union
{
    unsigned long deep_sleep_cnt_1x_reg;
    struct
    {
        unsigned long deep_sleep_cnt_1x : 12;
        unsigned long reserved : 20;
    } reg;
} CBBP_DEEP_SLEEP_CNT_1X_UNION;
#define CBBP_DEEP_SLEEP_CNT_1X_deep_sleep_cnt_1x_START (0)
#define CBBP_DEEP_SLEEP_CNT_1X_deep_sleep_cnt_1x_END (11)
typedef union
{
    unsigned long sleep_mode_reg;
    struct
    {
        unsigned long sleep_mode_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_MODE_UNION;
#define CBBP_SLEEP_MODE_sleep_mode_1x_START (0)
#define CBBP_SLEEP_MODE_sleep_mode_1x_END (0)
typedef union
{
    unsigned long sleep_time_1x_reg;
    struct
    {
        unsigned long sleep_time_1x_1p25ms : 11;
        unsigned long reserved_0 : 5;
        unsigned long sleep_time_1x_80ms : 6;
        unsigned long reserved_1 : 2;
        unsigned long sleep_time_1x_5p12s : 6;
        unsigned long reserved_2 : 2;
    } reg;
} CBBP_SLEEP_TIME_1X_UNION;
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_1p25ms_START (0)
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_1p25ms_END (10)
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_80ms_START (16)
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_80ms_END (21)
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_5p12s_START (24)
#define CBBP_SLEEP_TIME_1X_sleep_time_1x_5p12s_END (29)
typedef union
{
    unsigned long sleep_start_1x_reg;
    struct
    {
        unsigned long sleep_start_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_START_1X_UNION;
#define CBBP_SLEEP_START_1X_sleep_start_1x_START (0)
#define CBBP_SLEEP_START_1X_sleep_start_1x_END (0)
typedef union
{
    unsigned long switch_up_1x_reg;
    struct
    {
        unsigned long switch_up_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SWITCH_UP_1X_UNION;
#define CBBP_SWITCH_UP_1X_switch_up_1x_START (0)
#define CBBP_SWITCH_UP_1X_switch_up_1x_END (0)
typedef union
{
    unsigned long deep_sleep_ind_1x_reg;
    struct
    {
        unsigned long deep_sleep_ind_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_DEEP_SLEEP_IND_1X_UNION;
#define CBBP_DEEP_SLEEP_IND_1X_deep_sleep_ind_1x_START (0)
#define CBBP_DEEP_SLEEP_IND_1X_deep_sleep_ind_1x_END (0)
typedef union
{
    unsigned long sleep_cnt_32k_1x_reg;
    struct
    {
        unsigned long sleep_cnt_32k_1x : 23;
        unsigned long reserved : 9;
    } reg;
} CBBP_SLEEP_CNT_32K_1X_UNION;
#define CBBP_SLEEP_CNT_32K_1X_sleep_cnt_32k_1x_START (0)
#define CBBP_SLEEP_CNT_32K_1X_sleep_cnt_32k_1x_END (22)
typedef union
{
    unsigned long wakeup_type_1x_reg;
    struct
    {
        unsigned long wakeup_type_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_WAKEUP_TYPE_1X_UNION;
#define CBBP_WAKEUP_TYPE_1X_wakeup_type_1x_START (0)
#define CBBP_WAKEUP_TYPE_1X_wakeup_type_1x_END (0)
typedef union
{
    unsigned long sleep_status_1x_reg;
    struct
    {
        unsigned long sleep_status_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_STATUS_1X_UNION;
#define CBBP_SLEEP_STATUS_1X_sleep_status_1x_START (0)
#define CBBP_SLEEP_STATUS_1X_sleep_status_1x_END (0)
typedef union
{
    unsigned long sys_cnt_period_1x_reg;
    struct
    {
        unsigned long sys_cnt_period_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SYS_CNT_PERIOD_1X_UNION;
#define CBBP_SYS_CNT_PERIOD_1X_sys_cnt_period_1x_START (0)
#define CBBP_SYS_CNT_PERIOD_1X_sys_cnt_period_1x_END (0)
typedef union
{
    unsigned long wakeup_int_bbe16_reg;
    struct
    {
        unsigned long cbbp_int01_mask_bbe16 : 2;
        unsigned long reserved_0 : 6;
        unsigned long cbbp_int01_clr_bbe16 : 2;
        unsigned long reserved_1 : 21;
        unsigned long cbbp_int01_en_bbe16 : 1;
    } reg;
} CBBP_WAKEUP_INT_BBE16_UNION;
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_mask_bbe16_START (0)
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_mask_bbe16_END (1)
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_clr_bbe16_START (8)
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_clr_bbe16_END (9)
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_en_bbe16_START (31)
#define CBBP_WAKEUP_INT_BBE16_cbbp_int01_en_bbe16_END (31)
typedef union
{
    unsigned long wakeup_int_sta_bbe16_reg;
    struct
    {
        unsigned long cbbp_int01_sta_bbe16 : 2;
        unsigned long reserved : 30;
    } reg;
} CBBP_WAKEUP_INT_STA_BBE16_UNION;
#define CBBP_WAKEUP_INT_STA_BBE16_cbbp_int01_sta_bbe16_START (0)
#define CBBP_WAKEUP_INT_STA_BBE16_cbbp_int01_sta_bbe16_END (1)
typedef union
{
    unsigned long wakeup_int_arm_reg;
    struct
    {
        unsigned long cbbp_int01_mask_arm : 2;
        unsigned long reserved_0 : 6;
        unsigned long cbbp_int01_clr_arm : 2;
        unsigned long reserved_1 : 21;
        unsigned long cbbp_int01_en_arm : 1;
    } reg;
} CBBP_WAKEUP_INT_ARM_UNION;
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_mask_arm_START (0)
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_mask_arm_END (1)
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_clr_arm_START (8)
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_clr_arm_END (9)
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_en_arm_START (31)
#define CBBP_WAKEUP_INT_ARM_cbbp_int01_en_arm_END (31)
typedef union
{
    unsigned long wakeup_int_sta_arm_reg;
    struct
    {
        unsigned long cbbp_int01_sta_arm : 2;
        unsigned long reserved : 30;
    } reg;
} CBBP_WAKEUP_INT_STA_ARM_UNION;
#define CBBP_WAKEUP_INT_STA_ARM_cbbp_int01_sta_arm_START (0)
#define CBBP_WAKEUP_INT_STA_ARM_cbbp_int01_sta_arm_END (1)
typedef union
{
    unsigned long dsp_ready_ind_cdrx_1x_reg;
    struct
    {
        unsigned long dsp_ready_ind_cdrx_1x : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_DSP_READY_IND_CDRX_1X_UNION;
#define CBBP_DSP_READY_IND_CDRX_1X_dsp_ready_ind_cdrx_1x_START (0)
#define CBBP_DSP_READY_IND_CDRX_1X_dsp_ready_ind_cdrx_1x_END (0)
typedef union
{
    unsigned long ck_msr_interger_evdo_reg;
    struct
    {
        unsigned long ck_msr_integer_26ms_evdo : 11;
        unsigned long reserved_0 : 5;
        unsigned long ck_msr_integer_1_4chip_evdo : 5;
        unsigned long reserved_1 : 11;
    } reg;
} CBBP_CK_MSR_INTERGER_EVDO_UNION;
#define CBBP_CK_MSR_INTERGER_EVDO_ck_msr_integer_26ms_evdo_START (0)
#define CBBP_CK_MSR_INTERGER_EVDO_ck_msr_integer_26ms_evdo_END (10)
#define CBBP_CK_MSR_INTERGER_EVDO_ck_msr_integer_1_4chip_evdo_START (16)
#define CBBP_CK_MSR_INTERGER_EVDO_ck_msr_integer_1_4chip_evdo_END (20)
typedef union
{
    unsigned long ck_msr_frac_evdo_reg;
    struct
    {
        unsigned long ck_msr_frac_evdo : 11;
        unsigned long reserved : 21;
    } reg;
} CBBP_CK_MSR_FRAC_EVDO_UNION;
#define CBBP_CK_MSR_FRAC_EVDO_ck_msr_frac_evdo_START (0)
#define CBBP_CK_MSR_FRAC_EVDO_ck_msr_frac_evdo_END (10)
typedef union
{
    unsigned long sleep_period_evdo_reg;
    struct
    {
        unsigned long sleep_period_evdo : 23;
        unsigned long reserved : 9;
    } reg;
} CBBP_SLEEP_PERIOD_EVDO_UNION;
#define CBBP_SLEEP_PERIOD_EVDO_sleep_period_evdo_START (0)
#define CBBP_SLEEP_PERIOD_EVDO_sleep_period_evdo_END (22)
typedef union
{
    unsigned long ck_switch_cnt_evdo_reg;
    struct
    {
        unsigned long ck_switch_cnt_evdo : 12;
        unsigned long reserved : 20;
    } reg;
} CBBP_CK_SWITCH_CNT_EVDO_UNION;
#define CBBP_CK_SWITCH_CNT_EVDO_ck_switch_cnt_evdo_START (0)
#define CBBP_CK_SWITCH_CNT_EVDO_ck_switch_cnt_evdo_END (11)
typedef union
{
    unsigned long deep_sleep_cnt_evdo_reg;
    struct
    {
        unsigned long deep_sleep_cnt_evdo : 12;
        unsigned long reserved : 20;
    } reg;
} CBBP_DEEP_SLEEP_CNT_EVDO_UNION;
#define CBBP_DEEP_SLEEP_CNT_EVDO_deep_sleep_cnt_evdo_START (0)
#define CBBP_DEEP_SLEEP_CNT_EVDO_deep_sleep_cnt_evdo_END (11)
typedef union
{
    unsigned long sleep_mode_evdo_reg;
    struct
    {
        unsigned long sleep_mode_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_MODE_EVDO_UNION;
#define CBBP_SLEEP_MODE_EVDO_sleep_mode_evdo_START (0)
#define CBBP_SLEEP_MODE_EVDO_sleep_mode_evdo_END (0)
typedef union
{
    unsigned long sleep_time_evdo_reg;
    struct
    {
        unsigned long sleep_time_evdo_26ms : 15;
        unsigned long reserved_0 : 1;
        unsigned long sleep_time_evdo_80ms : 2;
        unsigned long reserved_1 : 6;
        unsigned long sleep_time_evdo_5p12s : 6;
        unsigned long reserved_2 : 2;
    } reg;
} CBBP_SLEEP_TIME_EVDO_UNION;
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_26ms_START (0)
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_26ms_END (14)
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_80ms_START (16)
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_80ms_END (17)
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_5p12s_START (24)
#define CBBP_SLEEP_TIME_EVDO_sleep_time_evdo_5p12s_END (29)
typedef union
{
    unsigned long sleep_start_evdo_reg;
    struct
    {
        unsigned long sleep_start_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_START_EVDO_UNION;
#define CBBP_SLEEP_START_EVDO_sleep_start_evdo_START (0)
#define CBBP_SLEEP_START_EVDO_sleep_start_evdo_END (0)
typedef union
{
    unsigned long switch_up_evdo_reg;
    struct
    {
        unsigned long switch_up_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SWITCH_UP_EVDO_UNION;
#define CBBP_SWITCH_UP_EVDO_switch_up_evdo_START (0)
#define CBBP_SWITCH_UP_EVDO_switch_up_evdo_END (0)
typedef union
{
    unsigned long deep_sleep_ind_evdo_reg;
    struct
    {
        unsigned long deep_sleep_ind_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_DEEP_SLEEP_IND_EVDO_UNION;
#define CBBP_DEEP_SLEEP_IND_EVDO_deep_sleep_ind_evdo_START (0)
#define CBBP_DEEP_SLEEP_IND_EVDO_deep_sleep_ind_evdo_END (0)
typedef union
{
    unsigned long sleep_cnt_32k_evdo_reg;
    struct
    {
        unsigned long sleep_cnt_32k_evdo : 23;
        unsigned long reserved : 9;
    } reg;
} CBBP_SLEEP_CNT_32K_EVDO_UNION;
#define CBBP_SLEEP_CNT_32K_EVDO_sleep_cnt_32k_evdo_START (0)
#define CBBP_SLEEP_CNT_32K_EVDO_sleep_cnt_32k_evdo_END (22)
typedef union
{
    unsigned long wakeup_type_evdo_reg;
    struct
    {
        unsigned long wakeup_type_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_WAKEUP_TYPE_EVDO_UNION;
#define CBBP_WAKEUP_TYPE_EVDO_wakeup_type_evdo_START (0)
#define CBBP_WAKEUP_TYPE_EVDO_wakeup_type_evdo_END (0)
typedef union
{
    unsigned long sleep_status_evdo_reg;
    struct
    {
        unsigned long sleep_status_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SLEEP_STATUS_EVDO_UNION;
#define CBBP_SLEEP_STATUS_EVDO_sleep_status_evdo_START (0)
#define CBBP_SLEEP_STATUS_EVDO_sleep_status_evdo_END (0)
typedef union
{
    unsigned long sys_cnt_period_evdo_reg;
    struct
    {
        unsigned long sys_cnt_period_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_SYS_CNT_PERIOD_EVDO_UNION;
#define CBBP_SYS_CNT_PERIOD_EVDO_sys_cnt_period_evdo_START (0)
#define CBBP_SYS_CNT_PERIOD_EVDO_sys_cnt_period_evdo_END (0)
typedef union
{
    unsigned long switch_int_bbe16_reg;
    struct
    {
        unsigned long cbbp_int02_mask_bbe16 : 4;
        unsigned long reserved_0 : 4;
        unsigned long cbbp_int02_clr_bbe16 : 4;
        unsigned long reserved_1 : 19;
        unsigned long cbbp_int02_en_bbe16 : 1;
    } reg;
} CBBP_SWITCH_INT_BBE16_UNION;
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_mask_bbe16_START (0)
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_mask_bbe16_END (3)
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_clr_bbe16_START (8)
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_clr_bbe16_END (11)
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_en_bbe16_START (31)
#define CBBP_SWITCH_INT_BBE16_cbbp_int02_en_bbe16_END (31)
typedef union
{
    unsigned long switch_int_sta_bbe16_reg;
    struct
    {
        unsigned long cbbp_int02_sta_bbe16 : 4;
        unsigned long reserved : 28;
    } reg;
} CBBP_SWITCH_INT_STA_BBE16_UNION;
#define CBBP_SWITCH_INT_STA_BBE16_cbbp_int02_sta_bbe16_START (0)
#define CBBP_SWITCH_INT_STA_BBE16_cbbp_int02_sta_bbe16_END (3)
typedef union
{
    unsigned long switch_int_arm_reg;
    struct
    {
        unsigned long cbbp_int02_mask_arm : 4;
        unsigned long reserved_0 : 4;
        unsigned long cbbp_int02_clr_arm : 4;
        unsigned long reserved_1 : 19;
        unsigned long cbbp_int02_en_arm : 1;
    } reg;
} CBBP_SWITCH_INT_ARM_UNION;
#define CBBP_SWITCH_INT_ARM_cbbp_int02_mask_arm_START (0)
#define CBBP_SWITCH_INT_ARM_cbbp_int02_mask_arm_END (3)
#define CBBP_SWITCH_INT_ARM_cbbp_int02_clr_arm_START (8)
#define CBBP_SWITCH_INT_ARM_cbbp_int02_clr_arm_END (11)
#define CBBP_SWITCH_INT_ARM_cbbp_int02_en_arm_START (31)
#define CBBP_SWITCH_INT_ARM_cbbp_int02_en_arm_END (31)
typedef union
{
    unsigned long switch_int_sta_arm_reg;
    struct
    {
        unsigned long cbbp_int02_sta_arm : 4;
        unsigned long reserved : 28;
    } reg;
} CBBP_SWITCH_INT_STA_ARM_UNION;
#define CBBP_SWITCH_INT_STA_ARM_cbbp_int02_sta_arm_START (0)
#define CBBP_SWITCH_INT_STA_ARM_cbbp_int02_sta_arm_END (3)
typedef union
{
    unsigned long dsp_ready_ind_cdrx_evdo_reg;
    struct
    {
        unsigned long dsp_ready_ind_cdrx_evdo : 1;
        unsigned long reserved : 31;
    } reg;
} CBBP_DSP_READY_IND_CDRX_EVDO_UNION;
#define CBBP_DSP_READY_IND_CDRX_EVDO_dsp_ready_ind_cdrx_evdo_START (0)
#define CBBP_DSP_READY_IND_CDRX_EVDO_dsp_ready_ind_cdrx_evdo_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
