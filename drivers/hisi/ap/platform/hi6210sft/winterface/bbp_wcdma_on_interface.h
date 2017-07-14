#include "soc_baseaddr_interface.h"
#ifndef __BBP_WCDMA_ON_INTERFACE_H__
#define __BBP_WCDMA_ON_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define WBBP_CK_MSR_FRAC_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C08)
#define WBBP_CK_MSR_INTEGER_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C0C)
#define WBBP_DEEP_SLEEP_THRESHOLD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C2C)
#define WBBP_DEEP_SLEEP_IND_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C30)
#define WBBP_BBP_WAKEUP_TYPE_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C48)
#define WBBP_BBP_SLEEP_STATUS_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C4C)
#define WBBP_DEEP_SLEEP_IND_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C50)
#define WBBP_SYS_CNT_SLEEP_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C54)
#define WBBP_SYS_CNT_SLEEP_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C64)
#define WBBP_BBP_WAKEUP_TYPE_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C70)
#define WBBP_BBP_SLEEP_STATUS_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C74)
#define WBBP_ARM_INT02_STA_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C80)
#define WBBP_ARM_INT02_EN_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C88)
#define WBBP_ARM_INT03_STA_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C90)
#define WBBP_ARM_INT03_EN_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C98)
#define WBBP_DRX_RST_CON_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CC0)
#define WBBP_DRX_AFC_VALUE_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CC4)
#define WBBP_SWITCH_DELAY_CNT_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CC8)
#define WBBP_SWITCH_DELAY_CNT_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CCC)
#define WBBP_SLEEP_EN_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C00)
#define WBBP_SWITCH_UP_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C04)
#define WBBP_DSP_READY_IND_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C10)
#define WBBP_CK_SWITCH_CNT_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C14)
#define WBBP_CK_WAKE_SFN_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C18)
#define WBBP_CK_WAKE_CNT_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C1C)
#define WBBP_SWITCH_DELAY_MAX_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C20)
#define WBBP_ARM_INT02_MASK_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C84)
#define WBBP_ARM_INT02_CLR_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C8C)
#define WBBP_ARM_INT03_MASK_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C94)
#define WBBP_ARM_INT03_CLR_1CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C9C)
#define WBBP_SWITCH_DELAY_MAX_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C24)
#define WBBP_SLEEP_EN_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C34)
#define WBBP_SWITCH_UP_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C38)
#define WBBP_CK_SWITCH_CNT_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C3C)
#define WBBP_CK_WAKE_SFN_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C40)
#define WBBP_CK_WAKE_CNT_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C44)
#define WBBP_DSP_READY_IND_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1C68)
#define WBBP_ARM_INT02_MASK_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CA0)
#define WBBP_ARM_INT02_CLR_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CA4)
#define WBBP_ARM_INT03_MASK_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CA8)
#define WBBP_ARM_INT03_CLR_2CARD_ADDR (SOC_BBP_WCDMA_ON_BASE_ADDR + 0x1CAC)
typedef union
{
    unsigned long ck_msr_frac_reg;
    struct
    {
        unsigned long ck_msr_frac : 11;
        unsigned long reserved : 21;
    } reg;
} WBBP_CK_MSR_FRAC_UNION;
#define WBBP_CK_MSR_FRAC_ck_msr_frac_START (0)
#define WBBP_CK_MSR_FRAC_ck_msr_frac_END (10)
typedef union
{
    unsigned long ck_msr_integer_reg;
    struct
    {
        unsigned long ck_msr_integer : 11;
        unsigned long reserved : 21;
    } reg;
} WBBP_CK_MSR_INTEGER_UNION;
#define WBBP_CK_MSR_INTEGER_ck_msr_integer_START (0)
#define WBBP_CK_MSR_INTEGER_ck_msr_integer_END (10)
typedef union
{
    unsigned long deep_sleep_threshold_reg;
    struct
    {
        unsigned long deep_sleep_threshold : 12;
        unsigned long reserved : 20;
    } reg;
} WBBP_DEEP_SLEEP_THRESHOLD_UNION;
#define WBBP_DEEP_SLEEP_THRESHOLD_deep_sleep_threshold_START (0)
#define WBBP_DEEP_SLEEP_THRESHOLD_deep_sleep_threshold_END (11)
typedef union
{
    unsigned long deep_sleep_ind_1card_reg;
    struct
    {
        unsigned long deep_sleep_ind_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_DEEP_SLEEP_IND_1CARD_UNION;
#define WBBP_DEEP_SLEEP_IND_1CARD_deep_sleep_ind_1card_START (0)
#define WBBP_DEEP_SLEEP_IND_1CARD_deep_sleep_ind_1card_END (0)
typedef union
{
    unsigned long bbp_wakeup_type_2card_reg;
    struct
    {
        unsigned long bbp_wakeup_type_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_BBP_WAKEUP_TYPE_2CARD_UNION;
#define WBBP_BBP_WAKEUP_TYPE_2CARD_bbp_wakeup_type_2card_START (0)
#define WBBP_BBP_WAKEUP_TYPE_2CARD_bbp_wakeup_type_2card_END (0)
typedef union
{
    unsigned long bbp_sleep_status_2card_reg;
    struct
    {
        unsigned long bbp_sleep_status_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_BBP_SLEEP_STATUS_2CARD_UNION;
#define WBBP_BBP_SLEEP_STATUS_2CARD_bbp_sleep_status_2card_START (0)
#define WBBP_BBP_SLEEP_STATUS_2CARD_bbp_sleep_status_2card_END (0)
typedef union
{
    unsigned long deep_sleep_ind_2card_reg;
    struct
    {
        unsigned long deep_sleep_ind_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_DEEP_SLEEP_IND_2CARD_UNION;
#define WBBP_DEEP_SLEEP_IND_2CARD_deep_sleep_ind_2card_START (0)
#define WBBP_DEEP_SLEEP_IND_2CARD_deep_sleep_ind_2card_END (0)
typedef union
{
    unsigned long sys_cnt_sleep_2card_reg;
    struct
    {
        unsigned long wake_sfn_2card : 12;
        unsigned long wake_cnt_2card_clk : 4;
        unsigned long wake_cnt_2card_chip : 12;
        unsigned long wake_cnt_2card_slot : 4;
    } reg;
} WBBP_SYS_CNT_SLEEP_2CARD_UNION;
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_sfn_2card_START (0)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_sfn_2card_END (11)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_clk_START (12)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_clk_END (15)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_chip_START (16)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_chip_END (27)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_slot_START (28)
#define WBBP_SYS_CNT_SLEEP_2CARD_wake_cnt_2card_slot_END (31)
typedef union
{
    unsigned long sys_cnt_sleep_1card_reg;
    struct
    {
        unsigned long wake_sfn_1card : 12;
        unsigned long wake_cnt_1card_clk : 4;
        unsigned long wake_cnt_1card_chip : 12;
        unsigned long wake_cnt_1card_slot : 4;
    } reg;
} WBBP_SYS_CNT_SLEEP_1CARD_UNION;
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_sfn_1card_START (0)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_sfn_1card_END (11)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_clk_START (12)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_clk_END (15)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_chip_START (16)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_chip_END (27)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_slot_START (28)
#define WBBP_SYS_CNT_SLEEP_1CARD_wake_cnt_1card_slot_END (31)
typedef union
{
    unsigned long bbp_wakeup_type_1card_reg;
    struct
    {
        unsigned long bbp_wakeup_type_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_BBP_WAKEUP_TYPE_1CARD_UNION;
#define WBBP_BBP_WAKEUP_TYPE_1CARD_bbp_wakeup_type_1card_START (0)
#define WBBP_BBP_WAKEUP_TYPE_1CARD_bbp_wakeup_type_1card_END (0)
typedef union
{
    unsigned long bbp_sleep_status_1card_reg;
    struct
    {
        unsigned long bbp_sleep_status_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_BBP_SLEEP_STATUS_1CARD_UNION;
#define WBBP_BBP_SLEEP_STATUS_1CARD_bbp_sleep_status_1card_START (0)
#define WBBP_BBP_SLEEP_STATUS_1CARD_bbp_sleep_status_1card_END (0)
typedef union
{
    unsigned long arm_int02_sta_reg;
    struct
    {
        unsigned long arm_int02_sta : 2;
        unsigned long reserved : 30;
    } reg;
} WBBP_ARM_INT02_STA_UNION;
#define WBBP_ARM_INT02_STA_arm_int02_sta_START (0)
#define WBBP_ARM_INT02_STA_arm_int02_sta_END (1)
typedef union
{
    unsigned long arm_int02_en_reg;
    struct
    {
        unsigned long arm_int02_en : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_ARM_INT02_EN_UNION;
#define WBBP_ARM_INT02_EN_arm_int02_en_START (0)
#define WBBP_ARM_INT02_EN_arm_int02_en_END (0)
typedef union
{
    unsigned long arm_int03_sta_reg;
    struct
    {
        unsigned long arm_int03_sta : 4;
        unsigned long reserved : 28;
    } reg;
} WBBP_ARM_INT03_STA_UNION;
#define WBBP_ARM_INT03_STA_arm_int03_sta_START (0)
#define WBBP_ARM_INT03_STA_arm_int03_sta_END (3)
typedef union
{
    unsigned long arm_int03_en_reg;
    struct
    {
        unsigned long arm_int03_en : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_ARM_INT03_EN_UNION;
#define WBBP_ARM_INT03_EN_arm_int03_en_START (0)
#define WBBP_ARM_INT03_EN_arm_int03_en_END (0)
typedef union
{
    unsigned long drx_rst_con_reg;
    struct
    {
        unsigned long drx_rst_control_1card_sys : 1;
        unsigned long drx_rst_control_1card_32k : 1;
        unsigned long drx_rst_control_1card_imi : 1;
        unsigned long reserved_0 : 1;
        unsigned long drx_rst_control_2card_sys : 1;
        unsigned long drx_rst_control_2card_32k : 1;
        unsigned long drx_rst_control_2card_imi : 1;
        unsigned long reserved_1 : 25;
    } reg;
} WBBP_DRX_RST_CON_UNION;
#define WBBP_DRX_RST_CON_drx_rst_control_1card_sys_START (0)
#define WBBP_DRX_RST_CON_drx_rst_control_1card_sys_END (0)
#define WBBP_DRX_RST_CON_drx_rst_control_1card_32k_START (1)
#define WBBP_DRX_RST_CON_drx_rst_control_1card_32k_END (1)
#define WBBP_DRX_RST_CON_drx_rst_control_1card_imi_START (2)
#define WBBP_DRX_RST_CON_drx_rst_control_1card_imi_END (2)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_sys_START (4)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_sys_END (4)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_32k_START (5)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_32k_END (5)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_imi_START (6)
#define WBBP_DRX_RST_CON_drx_rst_control_2card_imi_END (6)
typedef union
{
    unsigned long drx_afc_value_reg;
    struct
    {
        unsigned long cpu_wdrx_afc_value : 12;
        unsigned long reserved : 19;
        unsigned long cpu_wdrx_afc_ind : 1;
    } reg;
} WBBP_DRX_AFC_VALUE_UNION;
#define WBBP_DRX_AFC_VALUE_cpu_wdrx_afc_value_START (0)
#define WBBP_DRX_AFC_VALUE_cpu_wdrx_afc_value_END (11)
#define WBBP_DRX_AFC_VALUE_cpu_wdrx_afc_ind_START (31)
#define WBBP_DRX_AFC_VALUE_cpu_wdrx_afc_ind_END (31)
typedef union
{
    unsigned long sleep_en_1card_reg;
    struct
    {
        unsigned long sleep_en_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_SLEEP_EN_1CARD_UNION;
#define WBBP_SLEEP_EN_1CARD_sleep_en_1card_START (0)
#define WBBP_SLEEP_EN_1CARD_sleep_en_1card_END (0)
typedef union
{
    unsigned long switch_up_1card_reg;
    struct
    {
        unsigned long switch_up_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_SWITCH_UP_1CARD_UNION;
#define WBBP_SWITCH_UP_1CARD_switch_up_1card_START (0)
#define WBBP_SWITCH_UP_1CARD_switch_up_1card_END (0)
typedef union
{
    unsigned long dsp_ready_ind_1card_reg;
    struct
    {
        unsigned long dsp_ready_ind_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_DSP_READY_IND_1CARD_UNION;
#define WBBP_DSP_READY_IND_1CARD_dsp_ready_ind_1card_START (0)
#define WBBP_DSP_READY_IND_1CARD_dsp_ready_ind_1card_END (0)
typedef union
{
    unsigned long ck_switch_cnt_1card_reg;
    struct
    {
        unsigned long ck_switch_cnt_1card : 12;
        unsigned long reserved : 20;
    } reg;
} WBBP_CK_SWITCH_CNT_1CARD_UNION;
#define WBBP_CK_SWITCH_CNT_1CARD_ck_switch_cnt_1card_START (0)
#define WBBP_CK_SWITCH_CNT_1CARD_ck_switch_cnt_1card_END (11)
typedef union
{
    unsigned long ck_wake_sfn_1card_reg;
    struct
    {
        unsigned long ck_wake_sfn_1card : 12;
        unsigned long reserved : 20;
    } reg;
} WBBP_CK_WAKE_SFN_1CARD_UNION;
#define WBBP_CK_WAKE_SFN_1CARD_ck_wake_sfn_1card_START (0)
#define WBBP_CK_WAKE_SFN_1CARD_ck_wake_sfn_1card_END (11)
typedef union
{
    unsigned long ck_wake_cnt_1card_reg;
    struct
    {
        unsigned long ck_wake_cnt_1card_clk : 4;
        unsigned long ck_wake_cnt_1card_chip : 12;
        unsigned long ck_wake_cnt_1card_slot : 4;
        unsigned long reserved : 12;
    } reg;
} WBBP_CK_WAKE_CNT_1CARD_UNION;
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_clk_START (0)
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_clk_END (3)
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_chip_START (4)
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_chip_END (15)
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_slot_START (16)
#define WBBP_CK_WAKE_CNT_1CARD_ck_wake_cnt_1card_slot_END (19)
typedef union
{
    unsigned long arm_int02_mask_1card_reg;
    struct
    {
        unsigned long arm_int02_mask_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_ARM_INT02_MASK_1CARD_UNION;
#define WBBP_ARM_INT02_MASK_1CARD_arm_int02_mask_1card_START (0)
#define WBBP_ARM_INT02_MASK_1CARD_arm_int02_mask_1card_END (0)
typedef union
{
    unsigned long arm_int02_clr_1card_reg;
    struct
    {
        unsigned long arm_int02_clr_1card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_ARM_INT02_CLR_1CARD_UNION;
#define WBBP_ARM_INT02_CLR_1CARD_arm_int02_clr_1card_START (0)
#define WBBP_ARM_INT02_CLR_1CARD_arm_int02_clr_1card_END (0)
typedef union
{
    unsigned long arm_int03_mask_1card_reg;
    struct
    {
        unsigned long arm_int03_mask_1card : 2;
        unsigned long reserved : 30;
    } reg;
} WBBP_ARM_INT03_MASK_1CARD_UNION;
#define WBBP_ARM_INT03_MASK_1CARD_arm_int03_mask_1card_START (0)
#define WBBP_ARM_INT03_MASK_1CARD_arm_int03_mask_1card_END (1)
typedef union
{
    unsigned long arm_int03_clr_1card_reg;
    struct
    {
        unsigned long arm_int03_clr_1card : 2;
        unsigned long reserved : 30;
    } reg;
} WBBP_ARM_INT03_CLR_1CARD_UNION;
#define WBBP_ARM_INT03_CLR_1CARD_arm_int03_clr_1card_START (0)
#define WBBP_ARM_INT03_CLR_1CARD_arm_int03_clr_1card_END (1)
typedef union
{
    unsigned long sleep_en_2card_reg;
    struct
    {
        unsigned long sleep_en_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_SLEEP_EN_2CARD_UNION;
#define WBBP_SLEEP_EN_2CARD_sleep_en_2card_START (0)
#define WBBP_SLEEP_EN_2CARD_sleep_en_2card_END (0)
typedef union
{
    unsigned long switch_up_2card_reg;
    struct
    {
        unsigned long switch_up_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_SWITCH_UP_2CARD_UNION;
#define WBBP_SWITCH_UP_2CARD_switch_up_2card_START (0)
#define WBBP_SWITCH_UP_2CARD_switch_up_2card_END (0)
typedef union
{
    unsigned long ck_switch_cnt_2card_reg;
    struct
    {
        unsigned long ck_switch_cnt_2card : 12;
        unsigned long reserved : 20;
    } reg;
} WBBP_CK_SWITCH_CNT_2CARD_UNION;
#define WBBP_CK_SWITCH_CNT_2CARD_ck_switch_cnt_2card_START (0)
#define WBBP_CK_SWITCH_CNT_2CARD_ck_switch_cnt_2card_END (11)
typedef union
{
    unsigned long ck_wake_sfn_2card_reg;
    struct
    {
        unsigned long ck_wake_sfn_2card : 12;
        unsigned long reserved : 20;
    } reg;
} WBBP_CK_WAKE_SFN_2CARD_UNION;
#define WBBP_CK_WAKE_SFN_2CARD_ck_wake_sfn_2card_START (0)
#define WBBP_CK_WAKE_SFN_2CARD_ck_wake_sfn_2card_END (11)
typedef union
{
    unsigned long ck_wake_cnt_2card_reg;
    struct
    {
        unsigned long ck_wake_cnt_2card_clk : 4;
        unsigned long ck_wake_cnt_2card_chip : 12;
        unsigned long ck_wake_cnt_2card_slot : 4;
        unsigned long reserved : 12;
    } reg;
} WBBP_CK_WAKE_CNT_2CARD_UNION;
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_clk_START (0)
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_clk_END (3)
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_chip_START (4)
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_chip_END (15)
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_slot_START (16)
#define WBBP_CK_WAKE_CNT_2CARD_ck_wake_cnt_2card_slot_END (19)
typedef union
{
    unsigned long dsp_ready_ind_2card_reg;
    struct
    {
        unsigned long dsp_ready_ind_2card : 1;
        unsigned long reserved : 31;
    } reg;
} WBBP_DSP_READY_IND_2CARD_UNION;
#define WBBP_DSP_READY_IND_2CARD_dsp_ready_ind_2card_START (0)
#define WBBP_DSP_READY_IND_2CARD_dsp_ready_ind_2card_END (0)
typedef union
{
    unsigned long arm_int02_mask_2card_reg;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long arm_int02_mask_2card : 1;
        unsigned long reserved_1 : 30;
    } reg;
} WBBP_ARM_INT02_MASK_2CARD_UNION;
#define WBBP_ARM_INT02_MASK_2CARD_arm_int02_mask_2card_START (1)
#define WBBP_ARM_INT02_MASK_2CARD_arm_int02_mask_2card_END (1)
typedef union
{
    unsigned long arm_int02_clr_2card_reg;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long arm_int02_clr_2card : 1;
        unsigned long reserved_1 : 30;
    } reg;
} WBBP_ARM_INT02_CLR_2CARD_UNION;
#define WBBP_ARM_INT02_CLR_2CARD_arm_int02_clr_2card_START (1)
#define WBBP_ARM_INT02_CLR_2CARD_arm_int02_clr_2card_END (1)
typedef union
{
    unsigned long arm_int03_mask_2card_reg;
    struct
    {
        unsigned long reserved_0 : 2;
        unsigned long arm_int03_mask_2card : 2;
        unsigned long reserved_1 : 28;
    } reg;
} WBBP_ARM_INT03_MASK_2CARD_UNION;
#define WBBP_ARM_INT03_MASK_2CARD_arm_int03_mask_2card_START (2)
#define WBBP_ARM_INT03_MASK_2CARD_arm_int03_mask_2card_END (3)
typedef union
{
    unsigned long arm_int03_clr_2card_reg;
    struct
    {
        unsigned long reserved_0 : 2;
        unsigned long arm_int03_clr_2card : 2;
        unsigned long reserved_1 : 28;
    } reg;
} WBBP_ARM_INT03_CLR_2CARD_UNION;
#define WBBP_ARM_INT03_CLR_2CARD_arm_int03_clr_2card_START (2)
#define WBBP_ARM_INT03_CLR_2CARD_arm_int03_clr_2card_END (3)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
