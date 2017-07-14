#ifndef __RFINTERFACE_H_
#define __RFINTERFACE_H_ 

#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif




#include "soc_interface.h"







#define HAL_RF_TDD_CONFIG1_ADDR ( 0x00 )
#define HAL_RF_TDD_CONFIG2_ADDR ( 0x01 )
#define HAL_RF_FDD_TX_CONFIG_ADDR ( 0x02 )
#define HAL_RF_TX_AGC_ADDR ( 0x03 )
#define HAL_RF_FDD_RX_CONFIG_ADDR ( 0x04 )
#define HAL_RF_RX_MAIN_AGC_ADDR ( 0x05 )
#define HAL_RF_RX_DVTY_AGC_ADDR ( 0x06 )
#define HAL_RF_RX_MAIN_DCOC_VALUE_ADDR ( 0x07 )
#define HAL_RF_RX_DVTY_DCOC_VALUE_ADDR ( 0x08 )
#define HAL_RF_RX_MAIN_IIP2_CAL_ADDR ( 0x09 )
#define HAL_RF_RX_DVTY_IIP2_CAL_ADDR ( 0x0A )
#define HAL_RF_CFIX_ADDR ( 0x0B )
#define HAL_RF_REG10H_ADDR ( 0x10 )
#define HAL_RF_REG11H_ADDR ( 0x11 )
#define HAL_RF_TX_FEEDBACK_CONTROL_ADDR ( 0x12 )
#define HAL_RF_TX_FEEDBACK_DATA_1_ADDR ( 0x13 )
#define HAL_RF_OPERATING_BANDGROUP_ADDR ( 0x14 )
#define HAL_RF_RX_TX_TUNING_ADDR ( 0x15 )
#define HAL_RF_XO_AFC_CTL_ADDR ( 0x16 )
#define HAL_RF_RXRF_LNA_CTUNE_LUT_LB_ADDR ( 0x17 )
#define HAL_RF_RXRF_LNA_CTUNE_LUT_HB_ADDR ( 0x18 )
#define HAL_RF_RXRF_LNA_CTUNE_LUT_UHB_ADDR ( 0x19 )
#define HAL_RF_RXRF_TANKTUNE_LUT_ADDR ( 0x1A )
#define HAL_RF_TXRF_LOADTUNE_LUT_1_ADDR ( 0x1B )
#define HAL_RF_TXRF_LOADTUNE_LUT_2_ADDR ( 0x1C )
#define HAL_RF_TXRF_LOADTUNE_LUT_3_ADDR ( 0x1D )
#define HAL_RF_TXRF_LOADTUNE_LUT_4_ADDR ( 0x1E )
#define HAL_RF_TXRF_LOADTUNE_LUT_5_ADDR ( 0x1F )
#define HAL_RF_RFIC_IO_CTRL_ADDR ( 0x20 )


#define HAL_RF_RFIC_CLK_CTRL_ADDR ( 0x21 )
#define HAL_RF_GPIO_CTRL_ADDR ( 0x22 )
#define HAL_RF_GPIO_STATUS_ADDR ( 0x23 )
#define HAL_RF_RFIC_DEBUG_CFG_ADDR ( 0x24 )
#define HAL_RF_RFIC_CHIP_ID_ADDR ( 0x25 )
#define HAL_RF_RFIC_PULSEGEN_ADDR ( 0x26 )
#define HAL_RF_RFIC_TESTSEL1_ADDR ( 0x27 )
#define HAL_RF_RFIC_TESTSEL2_ADDR ( 0x28 )
#define HAL_RF_RFIC_TESTMUX_ADDR ( 0x29 )
#define HAL_RF_RFIC_ANALOG_TESTMUX_ADDR ( 0x2A )


#define HAL_RF_REXTCAL_CTRL_ADDR ( 0x2B )
#define HAL_RF_REXTCAL_DATA_ADDR ( 0x2C )
#define HAL_RF_RCCAL_CTRL_ADDR ( 0x2D )
#define HAL_RF_RCCAL_DATA_ADDR ( 0x2E )


#define HAL_RF_TDD_2G_FSM_TIME_ADDR ( 0x30 )
#define HAL_RF_TDD_3G4G_FSM_TIME_ADDR ( 0x31 )


#define HAL_RF_TX_EN_ADDR ( 0x38 )
#define HAL_RF_TX_BIAS_CFG_ADDR ( 0x39 )
#define HAL_RF_TX_FSM_TIME_ADDR ( 0x3A )
#define HAL_RF_TX_DEBUG_CFG_ADDR ( 0x3B )
#define HAL_RF_TX_FEEDBACK_DEBUG_ADDR ( 0x3C )
#define HAL_RF_TX_SPARE_1_ADDR ( 0x3D )
#define HAL_RF_TX_FEEDBACK_DEBUG1_ADDR ( 0x3E )
#define HAL_RF_TX_FEEDBACK_DEBUG2_ADDR ( 0x3F )
#define HAL_RF_TXRF_IQMOD_IBIAS_LUT_1 ( 0x41 )
#define HAL_RF_TXRF_IQMOD_IBIAS_LUT_2 ( 0x42 )

#define HAL_RF_IRCAL_PHASE_CORRECTION_ADDR ( 0x50 )


#define HAL_RF_RX_DEBUG_ADDR ( 0x60 )
#define HAL_RF_RX_CTRL_ADDR ( 0x61 )
#define HAL_RF_RX_LNA_ADDR ( 0X62 )
#define HAL_RF_RX_FREQUENCY_CONTROL_ADDR ( 0x63 )
#define HAL_RF_RX_2G_FSM_TIME_ADDR ( 0x64 )
#define HAL_RF_RX_3G4G_FSM_TIME_ADDR ( 0x65 )
#define HAL_RF_RX_MAIN_LNA_ADDR ( 0x68 )
#define HAL_RF_RX_MAIN_DCOC_OUT_ADDR ( 0x69 )
#define HAL_RF_RX_DVTY_LNA_ADDR ( 0x70 )
#define HAL_RF_RX_DVTY_DCOC_OUT_ADDR ( 0x71 )
#define HAL_RF_RX_SPARE0_REG_ADDR ( 0x78 )
#define HAL_RF_RX_SPARE1_REG_ADDR ( 0x79 )


#define HAL_RF_PLLTX_MODE_ADDR ( 0x80 )
#define HAL_RF_PLLTX_FREQ1_ADDR ( 0x81 )
#define HAL_RF_PLLTX_FREQ2_ADDR ( 0x82 )
#define HAL_RF_PLLTX_PWR_LDO_ADDR ( 0x83 )
#define HAL_RF_PLLTX_PWR_VCO_ADDR ( 0x84 )
#define HAL_RF_PLLTX_CTRL_FSM_ADDR ( 0x85 )
#define HAL_RF_PLLTX_VCO_ATEMP_ADDR ( 0x86 )
#define HAL_RF_PLLTX_CP_ADDR ( 0x87 )
#define HAL_RF_PLLTX_LPF_ADDR ( 0x89 )
#define HAL_RF_PLLTX_CTL_ADDR ( 0x8A )
#define HAL_RF_PLLTX_RCCAL_ADDR ( 0x8B )
#define HAL_RF_PLLTX_CT_1_ADDR ( 0x8C )
#define HAL_RF_PLLTX_CT_2_ADDR ( 0x8D )
#define HAL_RF_PLLTX_CT_3_ADDR ( 0x8E )
#define HAL_RF_PLLTX_KVCAL_1_ADDR ( 0x8F )
#define HAL_RF_PLLTX_KVCAL_2_ADDR ( 0x90 )
#define HAL_RF_PLLTX_PHZ_SLIP_ADDR ( 0x91 )
#define HAL_RF_PLLTX_CTC_ADDR ( 0x92 )
#define HAL_RF_PLLTX_WAIT_TIME_ADDR ( 0x93 )
#define HAL_RF_PLLTX_TEST_1_ADDR ( 0x98 )
#define HAL_RF_PLLTX_TEST_2_ADDR ( 0x99 )
#define HAL_RF_PLLTX_VCO_COUNT_RD_ADDR ( 0xA0 )
#define HAL_RF_PLLTX_FREQERRFLAG_RD_ADDR ( 0xA1 )
#define HAL_RF_PLLTX_RC_VAL_RD_ADDR ( 0xA2 )
#define HAL_RF_PLLTX_KV_FREQ_RD_ADDR ( 0xA3 )
#define HAL_RF_PLLTX_KV_CP_VAL_RD_ADDR ( 0xA4 )
#define HAL_RF_PLLTX_CT_VAL_RD_ADDR ( 0xA5 )
#define HAL_RF_PLLTX_RSM_STATE_RD_ADDR ( 0xA6 )
#define HAL_RF_PLLTX_SPARE0_REG_ADDR ( 0xA7 )


#define HAL_RF_PLLRX_MODE_ADDR ( 0xC0 )
#define HAL_RF_PLLRX_FREQ1_ADDR ( 0xC1 )
#define HAL_RF_PLLRX_FREQ2_ADDR ( 0xC2 )
#define HAL_RF_PLLRX_PWR_LDO_ADDR ( 0xC3 )
#define HAL_RF_PLLRX_PWR_VCO_ADDR ( 0xC4 )
#define HAL_RF_PLLRX_CTRL_FSM_ADDR ( 0xC5 )
#define HAL_RF_PLLRX_VCO_ATEMP_ADDR ( 0xC6 )
#define HAL_RF_PLLRX_CP_ADDR ( 0xC7 )
#define HAL_RF_PLLRX_LPF_ADDR ( 0xC9 )
#define HAL_RF_PLLRX_CTL_ADDR ( 0xCA )
#define HAL_RF_PLLRX_RCCAL_ADDR ( 0xCB )
#define HAL_RF_PLLRX_CT_1_ADDR ( 0xCC )
#define HAL_RF_PLLRX_CT_2_ADDR ( 0xCD )
#define HAL_RF_PLLRX_CT_3_ADDR ( 0xCE )
#define HAL_RF_PLLRX_KVCAL_1_ADDR ( 0xCF )
#define HAL_RF_PLLRX_KVCAL_2_ADDR ( 0xD0 )
#define HAL_RF_PLLRX_PHZ_SLIP_ADDR ( 0xD1 )
#define HAL_RF_PLLRX_CTC_ADDR ( 0xD2 )
#define HAL_RF_PLLRX_WAIT_TIME_ADDR ( 0xD3 )
#define HAL_RF_PLLRX_TEST_1_ADDR ( 0xD8 )
#define HAL_RF_PLLRX_TEST_2_ADDR ( 0xD9 )
#define HAL_RF_PLLRX_VCO_COUNT_RD_ADDR ( 0xE0 )
#define HAL_RF_PLLRX_FREQERRFLAG_RD_ADDR ( 0xE1 )
#define HAL_RF_PLLRX_RC_VAL_RD_ADDR ( 0xE2 )
#define HAL_RF_PLLRX_KV_FREQ_RD_ADDR ( 0xE3 )
#define HAL_RF_PLLRX_KV_CP_VAL_RD_ADDR ( 0xE4 )
#define HAL_RF_PLLRX_CT_VAL_RD_ADDR ( 0xE5 )
#define HAL_RF_PLLRX_RSM_STATE_RD_ADDR ( 0xE6 )
#define HAL_RF_PLLRX_SPARE0_REG_ADDR ( 0xE7 )
enum RF_RX_MAIN_CHANNEL_ID_ENUM
{
    RX_LB2A = 0,
    RX_LB1A ,
    RX_HB2A ,
    RX_HB1A ,
    RX_UHB2A ,
    RX_UHB1A ,
    RX_OFF_A ,
    RX_MAIN_CHANNELID_BUTT
};
typedef unsigned short RF_RX_MAIN_CHANNEL_ID_ENUM_UINT16;
enum RF_RX_DVTY_CHANNEL_ID_ENUM
{
    RX_LB2B = 0,
    RX_LB1B ,
    RX_HB2B ,
    RX_HB1B ,
    RX_UHB2B ,
    RX_UHB1B ,
    RX_OFF_B ,
    RX_DVTY_CHANNELID_BUTT
};
typedef unsigned short RF_RX_DVTY_CHANNEL_ID_ENUM_UINT16;
enum RF_TX_CHANNEL_ID_ENUM
{
    TX_2G_LB = 0,
    TX_2G_HB ,
    TX_3G_LB1 ,
    TX_3G_LB2 ,
    TX_3G_HB1 ,
    TX_3G_HB2 ,
    TX_3G_HB3 ,
    TX_3G_MB ,
    TX_3G_UHB1 ,
    TX_3G_UHB2 ,
    TX_CHANNELID_BUTT
};
typedef unsigned short RF_TX_CHANNEL_ID_ENUM_UINT16;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tdd_op_mode : 3;
        unsigned short tdd_rx_path_select : 2;
        unsigned short unassigned : 1;
        unsigned short tdd_if_config : 4;
        unsigned short tdd_lna_sel_b : 3;
        unsigned short tdd_lna_sel_a : 3;
    }stReg;
}HAL_RF_TDD_CONFIG1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short unassigned : 12;
        unsigned short tdd_txrf_output_sel : 4;
    }stReg;
}HAL_RF_TDD_CONFIG2_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_tx_op_mode : 2;
        unsigned short unassigned : 4;
        unsigned short fdd_txif_config : 4;
        unsigned short unassigned1 : 2;
        unsigned short fdd_txrf_output_sel : 4;
    }stReg;
}HAL_RF_FDD_TX_CONFIG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txif_bb_atten : 4;
        unsigned short unassigned : 4;
        unsigned short txrf_mod_atten : 4;
        unsigned short txrf_r2r_atten : 4;
    }stReg;
}HAL_RF_TX_AGC_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_rx_op_mode : 2;
        unsigned short unassigned : 1;
        unsigned short fdd_rx_path_select : 2;
        unsigned short fdd_rx_2g_tmin_en : 1;
        unsigned short fdd_rxif_config : 4;
        unsigned short fdd_lna_sel_dvty : 3;
        unsigned short fdd_lna_sel_main : 3;
    }stReg;
}HAL_RF_FDD_RX_CONFIG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_vga_gain_main : 3;
        unsigned short rxif_postatt_gain_main : 3;
        unsigned short reserved : 1;
        unsigned short rxif_preatt_gain_main : 2;
        unsigned short rxif_pma_gain_main : 4;
        unsigned short rxrf_lna_gain_main : 3;
    }stReg;
}HAL_RF_RX_MAIN_AGC_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_vga_gain_main : 3;
        unsigned short rxif_postatt_gain_main : 3;
        unsigned short reserved : 1;
        unsigned short rxif_preatt_gain_main : 2;
        unsigned short rxif_pma_gain_main : 4;
        unsigned short rxrf_lna_gain_main : 3;
    }stReg;
}HAL_RF_RX_DVTY_AGC_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_coarse_dcoc_offset_i : 8;
        unsigned short rxif_coarse_dcoc_offset_q : 8;
    }stReg;
}HAL_RF_RX_MAIN_DCOC_VALUE_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_dvty_coarse_dcoc_offset_i : 8;
        unsigned short rxif_dvty_coarse_dcoc_offset_q : 8;
    }stReg;
}HAL_RF_RX_DVTY_DCOC_VALUE_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short q_iip2_main_cal : 8;
        unsigned short i_iip2_main_cal : 8;
    }stReg;
}HAL_RF_RX_MAIN_IIP2_CAL_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short q_iip2_dvty_cal : 8;
        unsigned short i_iip2_dvty_cal : 8;
    }stReg;
}HAL_RF_RX_DVTY_IIP2_CAL_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txfb_pd_en : 1;
        unsigned short txfb_adc_en : 1;
        unsigned short txfb_en : 1;
        unsigned short txfb_adc_pd_accum_req : 1;
        unsigned short txfb_adc_pd_accum_mode : 1;
        unsigned short txfb_adc_pd_accum_length : 2;
        unsigned short txfb_rms_gain_adj : 3;
        unsigned short unassigned : 6;
    }stReg;
}HAL_RF_TX_FEEDBACK_CONTROL_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txfb_adc_out : 15;
        unsigned short txfb_adc_out_toggle : 1;
    }stReg;
}HAL_RF_TX_FEEDBACK_DATA_1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tcvr_operating_band : 6;
        unsigned short unassigned : 10;
    }stReg;
}HAL_RF_OPERATING_BANDGROUP_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_iqmod_ctune_sec : 3;
        unsigned short txrf_iqmod_ctune_prim : 3;
        unsigned short rxrf_tank_tune : 2;
        unsigned short lna_cap_dvty : 2;
        unsigned short lna_cap_main : 2;
        unsigned short unassigned : 4;
    }stReg;
}HAL_RF_RX_TX_TUNING_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_afc : 14;
        unsigned short unassigned : 2;
    }stReg;
}HAL_RF_XO_AFC_CTL_ADDR_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short iodig_sr_int : 2;
        unsigned short iodig_mode : 2;
        unsigned short xo_fref_out_sr : 2;
        unsigned short xo_fref_out_en_n : 1;
        unsigned short unassigned0 : 1;
        unsigned short xo_c_trim : 2;
        unsigned short xo_i_trim : 2;
        unsigned short unassigned1 : 3;
        unsigned short tcvr_fsm_en : 1;
    }stReg;
}HAL_RF_RFIC_IO_CTRL_ADDR_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_pllen : 1;
        unsigned short unassigned0 : 2;
        unsigned short tx_vco_atemp_en : 1;
        unsigned short tx_vco_div_sel : 2;
        unsigned short unassigned1 : 1;
        unsigned short tx_core_sel_1_2b : 1;
        unsigned short tx_lpf_sel_2g : 1;
        unsigned short tx_lpf_gain : 1;
        unsigned short unassigned2 : 6;
    }stReg;
}HAL_RF_PLLTX_MODE_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_pllen : 1;
        unsigned short tx_vco_core1_ibit : 2;
        unsigned short tx_vco_atemp_en : 1;
        unsigned short tx_lo_div_sel : 2;
        unsigned short tx_ft_en : 1;
        unsigned short tx_core_sel_1_2b : 1;
        unsigned short tx_vco_atemp_gain_set :1;
        unsigned short tx_lpf_sel_2g : 1;
        unsigned short tx_lpf_sel_rcrc_2g : 1;
        unsigned short tx_cpo : 2;
        unsigned short tx_pd_en : 1;
        unsigned short tx_pu_en : 1;
        unsigned short tx_cp_offset_pol : 1;
    }stReg;
}HAL_RF_PLLTX_MODE_V210_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_pllen : 1;
        unsigned short rx_vco_mode_volt_curb : 1;
        unsigned short rx_vco_vreg_ctrl1_sel : 1;
        unsigned short rx_vco_atemp_en : 1;
        unsigned short rx_lo_div_sel : 2;
        unsigned short rx_ft_en : 1;
        unsigned short rx_core_sel_1_2b : 1;
        unsigned short rx_vco_atemp_gain_set : 1;
        unsigned short rx_lpf_sel_2g : 1;
        unsigned short rx_lpf_sel_rcrc_2g : 1;
        unsigned short rx_cpo : 2;
        unsigned short rx_pd_en : 1;
        unsigned short rx_pu_en : 1;
        unsigned short rx_cp_offset_pol : 1;
    }stReg;
}HAL_RF_PLLRX_MODE_V210_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_2g_idle_cal_wait_time : 4;
        unsigned short rx_2g_idle_stdby_wait_time : 4;
        unsigned short rx_2g_idle_rxon_wait_time : 4;
        unsigned short unassigned : 3;
        unsigned short rx_wait_time_double_time : 1;
    }stReg;
}HAL_RF_RX_2G_FSM_TIME_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_rx_op_mode : 2;
        unsigned short unassigned : 1;
        unsigned short fdd_rx_path_select : 2;
        unsigned short fdd_rx_agc_sync_bypass : 1;
        unsigned short fdd_rxif_config : 4;
        unsigned short fdd_lna_sel_dvty : 3;
        unsigned short fdd_lna_sel_main : 3;
    }stReg;
}HAL_RF_FDD_RX_CONFIG_V210_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rf_rf_iip2cal_lo_i_value : 8;
        unsigned short rf_rf_iip2cal_lo_q_value : 8;
    }stReg;
}HAL_RF_RX_IIP2_LO_CAL_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txfb_pd_en : 1;
        unsigned short txfb_adc_en : 1;
        unsigned short txfb_en : 1;
        unsigned short txfb_adc_pd_accum_req : 1;
        unsigned short txfb_adc_pd_accum_mode : 1;
        unsigned short txfb_adc_pd_accum_length: 2;
        unsigned short txfb_rms_gain_adj : 4;
        unsigned short txfb_rf_atten_sel : 1;
        unsigned short txfb_accum_leftshift2 : 1;
        unsigned short unassigned : 3;
    }stReg;
}HAL_RF_TX_FEEDBACK_CONTROL_V210_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txfb_rms_tcomp_adj : 3;
        unsigned short txfb_rms_voutdc_adj : 4;
        unsigned short txfb_rms_lpf_adj : 1;
        unsigned short unassigned : 8;
    }stReg;
}HAL_RF_TX_FEEDBACK_DEBUG2_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short meta_version : 5;
        unsigned short product_revise : 5;
        unsigned short product_id : 6;
    }stReg;
}HAL_RF_RFIC_CHIP_ID_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_num : 8;
        unsigned short tx_n : 8;
    }stReg;
}HAL_RF_PLLTX_FREQ1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_num : 16;
    }stReg;
}HAL_RF_PLLTX_FREQ2_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_pllen : 1;
        unsigned short unassigned0 : 2;
        unsigned short rx_vco_atemp_en : 1;
        unsigned short rx_vco_div_sel : 2;
        unsigned short unassigned1 : 1;
        unsigned short rx_core_sel_1_2b : 1;
        unsigned short rx_lpf_sel_2g : 1;
        unsigned short rx_lpf_gain : 1;
        unsigned short unassigned : 6;
    }stReg;
}HAL_RF_PLLRX_MODE_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_num : 8;
        unsigned short rx_n : 8;
    }stReg;
}HAL_RF_PLLRX_FREQ1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_num : 16;
    }stReg;
}HAL_RF_PLLRX_FREQ2_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tdd_idle_cal_wait_time : 4;
        unsigned short tdd_idle_stdby_wait_time : 4;
        unsigned short tdd_idle_rxon_wait_time : 4;
        unsigned short tdd_idle_txon_wait_time : 4;
    }stReg;
}HAL_RF_TDD_3G4G_FSM_TIME_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_idle_cal_wait_time : 4;
        unsigned short tx_idle_stdby_wait_time : 4;
        unsigned short unassigned : 4;
        unsigned short tx_idle_txon_wait_time : 4;
    }stReg;
}HAL_RF_TX_FSM_TIME_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_iqmod_ibias : 3;
        unsigned short txrf_iqmod_ctune_sec : 3;
        unsigned short txrf_iqmod_ctune_prim : 3;
        unsigned short txrf_iqmod_locm_vtune : 3;
        unsigned short txrf_bias_cfg_debug : 1;
        unsigned short txrf_rcfbuffer_bw_vctrl : 1;
        unsigned short unassigned : 2;
    }stReg;
}HAL_RF_TX_BIAS_CFG_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_idle_cal_wait_time : 4;
        unsigned short rx_idle_stdby_wait_time : 4;
        unsigned short rx_idle_rxon_wait_time : 4;
        unsigned short unassigned : 4;
    }stReg;
}HAL_RF_RX_FSM_TIME_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_bias_ptat_main : 4;
        unsigned short lna_bias_bg_main : 4;
        unsigned short unassigned0 : 5;
        unsigned short lna_en : 2;
        unsigned short unassigned1 : 1;
    }stReg;
}HAL_RF_RX_MAIN_LNA_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_bias_ptat_dvty : 4;
        unsigned short lna_bias_bg_dvty : 4;
        unsigned short unassigned : 8;
    }stReg;
}HAL_RF_RX_DVTY_LNA_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_ldo10_vset : 2;
        unsigned short tx_ldo7_vset : 2;
        unsigned short unassigned : 6;
        unsigned short tx_ldo_en_ctrl : 2;
        unsigned short tx_bg_fs_ctrl : 2;
        unsigned short tx_bg_en : 2;
    }stReg;
}HAL_RF_PLLTX_PWR_LDO_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_vco_div_vreg_outputi_en : 1;
        unsigned short tx_vco_div_vreg_lownoise_en : 1;
        unsigned short tx_vco_lo_buf_highp_en : 1;
        unsigned short unassigned0 : 1;
        unsigned short tx_vco_div_vreg_ctrl : 3;
        unsigned short unassigned1 : 1;
        unsigned short tx_vco_vreg_outputi_en : 1;
        unsigned short tx_vco_vreg_lownoise_en : 1;
        unsigned short unassigned : 2;
        unsigned short tx_vco_vreg_ctrl : 4;
    }stReg;
}HAL_RF_PLLTX_PWR_VCO_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_cprs_ctrl : 2;
        unsigned short tx_pll_cp_ctrl : 2;
        unsigned short tx_tstart : 4;
        unsigned short tx_n_pw : 1;
        unsigned short unassigned : 1;
        unsigned short tx_cpd : 1;
        unsigned short tx_cpu : 1;
        unsigned short tx_pd_en : 1;
        unsigned short tx_pu_en : 1;
        unsigned short tx_cp_offset_pol : 1;
        unsigned short tx_intnen : 1;
    }stReg;
}HAL_RF_PLLTX_CTL_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_tft : 4;
        unsigned short tx_nmbr_ft_avgs : 2;
        unsigned short tx_nmbr_fmeas_avgs : 2;
        unsigned short tx_ft_gain : 2;
        unsigned short tx_ft_en : 1;
        unsigned short tx_kv_rx1 : 1;
        unsigned short tx_kv_dac_step : 3;
        unsigned short tx_kv_en : 1;
    }stReg;
}HAL_RF_PLLTX_KVCAL_1_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_tvco : 7;
        unsigned short unassigned0 : 1;
        unsigned short tx_tlock : 7;
        unsigned short unassigned1 : 1;
    }stReg;
}HAL_RF_PLLTX_WAIT_TIME_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_ldo10_vset : 2;
        unsigned short rx_ldo7_vset : 2;
        unsigned short rx_vco_i : 3;
        unsigned short unassigned : 3;
        unsigned short rx_ldo_en_ctrl : 2;
        unsigned short rx_bg_fs_ctrl : 2;
        unsigned short rx_bg_en : 2;
    }stReg;
}HAL_RF_PLLRX_PWR_LDO_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_cprs_ctrl : 2;
        unsigned short rx_pll_cp_ctrl : 2;
        unsigned short rx_tstart : 4;
        unsigned short rx_n_pw : 1;
        unsigned short unassigned : 1;
        unsigned short rx_cpd : 1;
        unsigned short rx_cpu : 1;
        unsigned short rx_pd_en : 1;
        unsigned short rx_pu_en : 1;
        unsigned short rx_cp_offset_pol : 1;
        unsigned short rx_intnen : 1;
    }stReg;
}HAL_RF_PLLRX_CTL_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_tft : 4;
        unsigned short rx_nmbr_ft_avgs : 2;
        unsigned short rx_nmbr_fmeas_avgs : 2;
        unsigned short rx_ft_gain : 2;
        unsigned short rx_ft_en : 1;
        unsigned short rx_kv_rx1 : 1;
        unsigned short rx_kv_dac_step : 3;
        unsigned short rx_kv_en : 1;
    }stReg;
}HAL_RF_PLLRX_KVCAL_1_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_tvco : 7;
        unsigned short unassigned0 : 1;
        unsigned short rx_tlock : 7;
        unsigned short unassigned1 : 1;
    }stReg;
}HAL_RF_PLLRX_WAIT_TIME_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_vco_div_vreg_outputi_en : 1;
        unsigned short rx_vco_div_vreg_lownoise_en : 1;
        unsigned short rx_vco_lo_buf_highp_en : 1;
        unsigned short unassigned0 : 1;
        unsigned short rx_vco_div_vreg_ctrl : 3;
        unsigned short unassigned1 : 1;
        unsigned short rx_vco_vreg_outputi_en : 1;
        unsigned short rx_vco_vreg_lownoise_en : 1;
        unsigned short unassigned2 : 2;
        unsigned short rx_vco_vreg_ctrl : 4;
    }stReg;
}HAL_RF_PLLRX_PWR_VCO_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_vco_pll_en : 2;
        unsigned short rx_vco_lo_en : 2;
        unsigned short unassigned : 2;
        unsigned short rx_vco_div_vreg_faston_en : 2;
        unsigned short rx_vco_vreg_faston_en : 2;
        unsigned short rx_vco_rc_su_en : 2;
        unsigned short rx_vco_faston_en : 2;
        unsigned short rx_vco_en : 2;
    }stReg;
}HAL_RF_PLLRX_CTRL_FSM_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_vco_atemp_preloadswitch_en : 2;
        unsigned short rx_vco_atemp_faston_en : 2;
        unsigned short rx_vco_atemp_vtune_ref : 4;
        unsigned short rx_vco_atemp_vptat_vconst : 3;
        unsigned short rx_vco_atemp_bypass : 1;
        unsigned short rx_vco_atemp_vptat_pllfreq : 2;
        unsigned short rx_vco_atemp_vptat_test_en : 1;
        unsigned short rx_vco_atemp_vptatout_en : 1;
    }stReg;
}HAL_RF_PLLRX_VCO_ATEMP_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_tct : 5;
        unsigned short unassigned : 1;
        unsigned short rx_nmbr_ct_avgs : 2;
        unsigned short rx_ct_dac_def : 5;
        unsigned short rx_ct_gain : 3;
    }stReg;
}HAL_RF_PLLRX_CT_1_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_ldo1p2_cnt : 2;
        unsigned short rxrf_ldo1p9v_dvty_en : 1;
        unsigned short rxrf_ldo1p9v_main_en : 1;
        unsigned short rxrf_ldo1p2v_dvty_en : 1;
        unsigned short rxrf_ldo1p2v_main_en : 1;
        unsigned short rxif_dvty_ldo1p9_en : 1;
        unsigned short rxif_ldo1p9_en : 1;
        unsigned short rxrf_tia_dvty_en : 1;
        unsigned short rxrf_tia_main_en : 1;
        unsigned short rxrf_dvty_en : 1;
        unsigned short rxrf_main_en : 1;
        unsigned short unassigned : 2;
        unsigned short rx_speedup : 1;
        unsigned short rxbg_enable : 1;
    }stReg;
}HAL_RF_RX_EN_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_vga_low_vcm : 1;
        unsigned short unassigned0 : 1;
        unsigned short rxif_dcoc_range : 1;
        unsigned short unassigned1 : 1;
        unsigned short rxrf_noqc_dvty_en : 1;
        unsigned short rxrf_noqc_main_en : 1;
        unsigned short unassigned2 : 2;
        unsigned short rx_dcoc_dac_dvty_en : 1;
        unsigned short rx_dcoc_dac_main_en : 1;
        unsigned short unassigned3 : 2;
        unsigned short rxif_dvty_en : 1;
        unsigned short rxif_main_en : 1;
        unsigned short unassigned4 : 2;
    }stReg;
}HAL_RF_RX_CTRL_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_lfsr_div2_en : 1;
        unsigned short tx_lfsr_clk_pol : 1;
        unsigned short tx_lfsr_on : 1;
        unsigned short tx_lfsr_test_trig : 1;
        unsigned short unassigned : 12;
    }stReg;
}HAL_RF_PLLTX_LFSR_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_lfsr_div2_en : 1;
        unsigned short rx_lfsr_clk_pol : 1;
        unsigned short rx_lfsr_on : 1;
        unsigned short rx_lfsr_test_trig : 1;
        unsigned short unassigned : 12;
    }stReg;
}HAL_RF_PLLRX_LFSR_REG_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_lna_bias_ptat : 4;
        unsigned short rxrf_lna_bias_bg : 4;
        unsigned short rxrf_lnacas_ldo_vout : 2;
        unsigned short unassigned : 6;
    }stReg;
}HAL_RF_RX_LNA_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_tft : 4;
        unsigned short rx_nmbr_ft_avgs : 2;
        unsigned short rx_nmbr_fmeas_avgs : 2;
        unsigned short rx_ft_gain : 2;
        unsigned short rx_ft_en : 1;
        unsigned short rx_kv_rx1 : 1;
        unsigned short rx_kv_dac_step : 3;
        unsigned short rx_kv_en : 1;
    }stReg;
}HAL_RF_PLLRX_KVCAL_1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_lpf_rpl_cap_sel : 1;
        unsigned short tx_lpf_int_cap_sel : 1;
        unsigned short tx_lpf_debug_cap_sel : 1;
        unsigned short tx_lpf_int_cap_bypass : 1;
        unsigned short tx_lpf_unity_gain_sel : 2;
        unsigned short tx_lpf_fs : 2;
        unsigned short tx_lpf_testout_sel : 3;
        unsigned short unassigned : 5;
    }stReg;
}HAL_RF_PLLTX_LPF_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short unassigned0 : 1;
        unsigned short tx_lfsr_clk_pol : 1;
        unsigned short tx_lfsr_on : 1;
        unsigned short tx_lfsr_test_trig : 1;
        unsigned short unassigned1 : 3;
        unsigned short tx_ct_half_rate : 1;
        unsigned short tx_tct2 : 4;
        unsigned short tx_tct1 : 4;
    }stReg;
}HAL_RF_PLLTX_CT_1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_ct_dac_def2 : 5;
        unsigned short tx_ct_gain2 : 3;
        unsigned short tx_ct_dac_def1 : 5;
        unsigned short tx_ct_gain1 : 3;
    }stReg;
}HAL_RF_PLLTX_CT_2_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_tft : 4;
        unsigned short tx_nmbr_ft_avgs : 2;
        unsigned short tx_nmbr_fmeas_avgs : 2;
        unsigned short tx_ft_gain : 2;
        unsigned short tx_ft_en : 1;
        unsigned short tx_kv_rx1 : 1;
        unsigned short tx_kv_dac_step : 3;
        unsigned short tx_kv_en : 1;
    }stReg;
}HAL_RF_PLLTX_KVCAL_1_UNION;
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_kv_bw_2g : 8;
        unsigned short tx_kv_bw_3g4g : 8;
    }stReg;
}HAL_RF_PLLTX_KVCAL_2_UNION;
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
