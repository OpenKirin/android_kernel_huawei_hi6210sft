#include "soc_interface.h"
#ifndef __BBP_GSM_ON_INTERFACE_H__
#define __BBP_GSM_ON_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define GBBP_DRX_CPU_INT_STA_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x0)
#define GBBP_DRX_CPU_INT_MASK_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x4)
#define GBBP_DRX_CPU_INT_CLR_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x8)
#define GBBP_DRX_DSP_INT_STA_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x10)
#define GBBP_DRX_DSP_INT_MASK_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x14)
#define GBBP_DRX_DSP_INT_CLR_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x18)
#define GBBP_ARM_INT_DELAY_REG_PD_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x1C)
#define GBBP_DSP_INT_DELAY_REG_PD_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x28)
#define GBBP_SLEEP_EN_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x30)
#define GBBP_WAKE_CNF_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x34)
#define GBBP_WAKEUP_LEN_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x38)
#define GBBP_MSR_CNF_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x3C)
#define GBBP_CPU_DRX_DEPTH_CFG_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x40)
#define GBBP_WAKE_GTC_QB_FRAC_RPT_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x50)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x54)
#define GBBP_DRX_WAKE_GTC_FN_RPT_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x58)
#define GBBP_GDRX_INT_MASK_STATE_RPT_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x5C)
#define GBBP_DRX_TEST_PIN_SEL_ADDR (SOC_BBP_GSM_ON_BASE_ADDR + 0x60)
typedef union
{
    unsigned long drx_cpu_int_sta_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long drx_int_state_cpu24 : 1;
        unsigned long drx_int_state_cpu25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long drx_int_state_cpu27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_CPU_INT_STA_UNION;
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu24_START (24)
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu24_END (24)
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu25_START (25)
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu25_END (25)
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu27_START (27)
#define GBBP_DRX_CPU_INT_STA_drx_int_state_cpu27_END (27)
typedef union
{
    unsigned long drx_cpu_int_mask_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long cpu_drx_int_mask24 : 1;
        unsigned long cpu_drx_int_mask25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long cpu_drx_int_mask27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_CPU_INT_MASK_UNION;
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask24_START (24)
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask24_END (24)
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask25_START (25)
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask25_END (25)
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask27_START (27)
#define GBBP_DRX_CPU_INT_MASK_cpu_drx_int_mask27_END (27)
typedef union
{
    unsigned long drx_cpu_int_clr_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long cpu_drx_int_clr24 : 1;
        unsigned long cpu_drx_int_clr25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long cpu_drx_int_clr27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_CPU_INT_CLR_UNION;
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr24_START (24)
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr24_END (24)
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr25_START (25)
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr25_END (25)
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr27_START (27)
#define GBBP_DRX_CPU_INT_CLR_cpu_drx_int_clr27_END (27)
typedef union
{
    unsigned long drx_dsp_int_sta_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long drx_int_state_dsp24 : 1;
        unsigned long drx_int_state_dsp25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long drx_int_state_dsp27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_DSP_INT_STA_UNION;
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp24_START (24)
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp24_END (24)
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp25_START (25)
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp25_END (25)
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp27_START (27)
#define GBBP_DRX_DSP_INT_STA_drx_int_state_dsp27_END (27)
typedef union
{
    unsigned long drx_dsp_int_mask_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long dsp_drx_int_mask24 : 1;
        unsigned long dsp_drx_int_mask25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long dsp_drx_int_mask27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_DSP_INT_MASK_UNION;
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask24_START (24)
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask24_END (24)
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask25_START (25)
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask25_END (25)
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask27_START (27)
#define GBBP_DRX_DSP_INT_MASK_dsp_drx_int_mask27_END (27)
typedef union
{
    unsigned long drx_dsp_int_clr_reg;
    struct
    {
        unsigned long reserved_0 : 24;
        unsigned long dsp_drx_int_clr24 : 1;
        unsigned long dsp_drx_int_clr25 : 1;
        unsigned long reserved_1 : 1;
        unsigned long dsp_drx_int_clr27 : 1;
        unsigned long reserved_2 : 4;
    } reg;
} GBBP_DRX_DSP_INT_CLR_UNION;
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr24_START (24)
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr24_END (24)
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr25_START (25)
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr25_END (25)
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr27_START (27)
#define GBBP_DRX_DSP_INT_CLR_dsp_drx_int_clr27_END (27)
typedef union
{
    unsigned long arm_int_delay_reg_pd_reg;
    struct
    {
        unsigned long cpu_int_dly_clk : 16;
        unsigned long reserved : 16;
    } reg;
} GBBP_ARM_INT_DELAY_REG_PD_UNION;
#define GBBP_ARM_INT_DELAY_REG_PD_cpu_int_dly_clk_START (0)
#define GBBP_ARM_INT_DELAY_REG_PD_cpu_int_dly_clk_END (15)
typedef union
{
    unsigned long dsp_int_delay_reg_pd_reg;
    struct
    {
        unsigned long dsp_int_dly_clk : 16;
        unsigned long reserved : 16;
    } reg;
} GBBP_DSP_INT_DELAY_REG_PD_UNION;
#define GBBP_DSP_INT_DELAY_REG_PD_dsp_int_dly_clk_START (0)
#define GBBP_DSP_INT_DELAY_REG_PD_dsp_int_dly_clk_END (15)
typedef union
{
    unsigned long sleep_en_reg;
    struct
    {
        unsigned long gdrx_sleep_en : 1;
        unsigned long gdrx_sleep_mode : 1;
        unsigned long gdrx_wake_up_imi : 1;
        unsigned long reserved : 29;
    } reg;
} GBBP_SLEEP_EN_UNION;
#define GBBP_SLEEP_EN_gdrx_sleep_en_START (0)
#define GBBP_SLEEP_EN_gdrx_sleep_en_END (0)
#define GBBP_SLEEP_EN_gdrx_sleep_mode_START (1)
#define GBBP_SLEEP_EN_gdrx_sleep_mode_END (1)
#define GBBP_SLEEP_EN_gdrx_wake_up_imi_START (2)
#define GBBP_SLEEP_EN_gdrx_wake_up_imi_END (2)
typedef union
{
    unsigned long wake_cnf_reg;
    struct
    {
        unsigned long gdrx_switch_len : 11;
        unsigned long reserved : 21;
    } reg;
} GBBP_WAKE_CNF_UNION;
#define GBBP_WAKE_CNF_gdrx_switch_len_START (0)
#define GBBP_WAKE_CNF_gdrx_switch_len_END (10)
typedef union
{
    unsigned long wakeup_len_reg;
    struct
    {
        unsigned long gdrx_wakeup_len : 26;
        unsigned long reserved : 6;
    } reg;
} GBBP_WAKEUP_LEN_UNION;
#define GBBP_WAKEUP_LEN_gdrx_wakeup_len_START (0)
#define GBBP_WAKEUP_LEN_gdrx_wakeup_len_END (25)
typedef union
{
    unsigned long msr_cnf_reg;
    struct
    {
        unsigned long gdrx_msr_frac : 11;
        unsigned long reserved_0 : 5;
        unsigned long gdrx_msr_integer : 7;
        unsigned long reserved_1 : 1;
        unsigned long gdrx_msr_timebase : 6;
        unsigned long reserved_2 : 2;
    } reg;
} GBBP_MSR_CNF_UNION;
#define GBBP_MSR_CNF_gdrx_msr_frac_START (0)
#define GBBP_MSR_CNF_gdrx_msr_frac_END (10)
#define GBBP_MSR_CNF_gdrx_msr_integer_START (16)
#define GBBP_MSR_CNF_gdrx_msr_integer_END (22)
#define GBBP_MSR_CNF_gdrx_msr_timebase_START (24)
#define GBBP_MSR_CNF_gdrx_msr_timebase_END (29)
typedef union
{
    unsigned long cpu_drx_depth_cfg_reg;
    struct
    {
        unsigned long cpu_drx_depth : 27;
        unsigned long reserved : 5;
    } reg;
} GBBP_CPU_DRX_DEPTH_CFG_UNION;
#define GBBP_CPU_DRX_DEPTH_CFG_cpu_drx_depth_START (0)
#define GBBP_CPU_DRX_DEPTH_CFG_cpu_drx_depth_END (26)
typedef union
{
    unsigned long wake_gtc_qb_frac_rpt_reg;
    struct
    {
        unsigned long gdrx_gtc_wake_frac : 7;
        unsigned long reserved_0 : 9;
        unsigned long gdrx_gtc_wake_chip : 13;
        unsigned long reserved_1 : 3;
    } reg;
} GBBP_WAKE_GTC_QB_FRAC_RPT_UNION;
#define GBBP_WAKE_GTC_QB_FRAC_RPT_gdrx_gtc_wake_frac_START (0)
#define GBBP_WAKE_GTC_QB_FRAC_RPT_gdrx_gtc_wake_frac_END (6)
#define GBBP_WAKE_GTC_QB_FRAC_RPT_gdrx_gtc_wake_chip_START (16)
#define GBBP_WAKE_GTC_QB_FRAC_RPT_gdrx_gtc_wake_chip_END (28)
typedef union
{
    unsigned long wake_gtc_t1_t2_t3_rpt_reg;
    struct
    {
        unsigned long gdrx_gtc_t1_cnt : 11;
        unsigned long reserved_0 : 5;
        unsigned long gdrx_gtc_t2_cnt : 5;
        unsigned long reserved_1 : 3;
        unsigned long gdrx_gtc_t3_cnt : 6;
        unsigned long reserved_2 : 2;
    } reg;
} GBBP_WAKE_GTC_T1_T2_T3_RPT_UNION;
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t1_cnt_START (0)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t1_cnt_END (10)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t2_cnt_START (16)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t2_cnt_END (20)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t3_cnt_START (24)
#define GBBP_WAKE_GTC_T1_T2_T3_RPT_gdrx_gtc_t3_cnt_END (29)
typedef union
{
    unsigned long drx_wake_gtc_fn_rpt_reg;
    struct
    {
        unsigned long gdrx_gtc_fn_low : 11;
        unsigned long reserved_0 : 5;
        unsigned long gdrx_gtc_fn_high : 11;
        unsigned long reserved_1 : 5;
    } reg;
} GBBP_DRX_WAKE_GTC_FN_RPT_UNION;
#define GBBP_DRX_WAKE_GTC_FN_RPT_gdrx_gtc_fn_low_START (0)
#define GBBP_DRX_WAKE_GTC_FN_RPT_gdrx_gtc_fn_low_END (10)
#define GBBP_DRX_WAKE_GTC_FN_RPT_gdrx_gtc_fn_high_START (16)
#define GBBP_DRX_WAKE_GTC_FN_RPT_gdrx_gtc_fn_high_END (26)
typedef union
{
    unsigned long gdrx_int_mask_state_rpt_reg;
    struct
    {
        unsigned long drx_int_state_cpu : 1;
        unsigned long reserved_0 : 3;
        unsigned long drx_int_state_dsp : 1;
        unsigned long reserved_1 : 11;
        unsigned long cpu_drx_int_mask_32k : 1;
        unsigned long reserved_2 : 3;
        unsigned long dsp_drx_int_mask_32k : 1;
        unsigned long reserved_3 : 11;
    } reg;
} GBBP_GDRX_INT_MASK_STATE_RPT_UNION;
#define GBBP_GDRX_INT_MASK_STATE_RPT_drx_int_state_cpu_START (0)
#define GBBP_GDRX_INT_MASK_STATE_RPT_drx_int_state_cpu_END (0)
#define GBBP_GDRX_INT_MASK_STATE_RPT_drx_int_state_dsp_START (4)
#define GBBP_GDRX_INT_MASK_STATE_RPT_drx_int_state_dsp_END (4)
#define GBBP_GDRX_INT_MASK_STATE_RPT_cpu_drx_int_mask_32k_START (16)
#define GBBP_GDRX_INT_MASK_STATE_RPT_cpu_drx_int_mask_32k_END (16)
#define GBBP_GDRX_INT_MASK_STATE_RPT_dsp_drx_int_mask_32k_START (20)
#define GBBP_GDRX_INT_MASK_STATE_RPT_dsp_drx_int_mask_32k_END (20)
typedef union
{
    unsigned long drx_test_pin_sel_reg;
    struct
    {
        unsigned long gdrx_test_pin_sel : 4;
        unsigned long reserved : 27;
        unsigned long gdrx_test_pin_sel_flag : 1;
    } reg;
} GBBP_DRX_TEST_PIN_SEL_UNION;
#define GBBP_DRX_TEST_PIN_SEL_gdrx_test_pin_sel_START (0)
#define GBBP_DRX_TEST_PIN_SEL_gdrx_test_pin_sel_END (3)
#define GBBP_DRX_TEST_PIN_SEL_gdrx_test_pin_sel_flag_START (31)
#define GBBP_DRX_TEST_PIN_SEL_gdrx_test_pin_sel_flag_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
