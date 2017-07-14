#ifndef __ABBINTERFACE_H__
#define __ABBINTERFACE_H__ 
#include "wg_type_define.h"
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
#define HAL_ABB_WG_VERSION_LTE_ADDR ( 0x80 )
#define HAL_ABB_WG_RX_2G_DIG_1_ADDR ( 0x81 )
#define HAL_ABB_WG_RX_2G_DIG_2_ADDR ( 0x82 )
#define HAL_ABB_WG_TX_2G_DIG_1_ADDR ( 0x83 )
#define HAL_ABB_WG_TX_2G_DIG_2_ADDR ( 0x84 )
#define HAL_ABB_WG_RX_3G_DIG_1_ADDR ( 0x85 )
#define HAL_ABB_WG_RX_3G_DIG_2_ADDR ( 0x86 )
#define HAL_ABB_WG_TX_3G_DIG_1_ADDR ( 0x87 )
#define HAL_ABB_WG_TX_3G_DIG_2_ADDR ( 0x88 )
#define HAL_ABB_WG_RX_4G_DIG_1_ADDR ( 0x89 )
#define HAL_ABB_WG_RX_4G_DIG_2_ADDR ( 0x8A )
#define HAL_ABB_WG_TX_4G_DIG_1_ADDR ( 0x8B )
#define HAL_ABB_WG_TX_4G_DIG_2_ADDR ( 0x8C )
#define HAL_ABB_WG_RX_IDLE_DIG_1_ADDR ( 0x8D )
#define HAL_ABB_WG_RX_IDLE_DIG_2_ADDR ( 0x8E )
#define HAL_ABB_WG_TX_IDLE_DIG_1_ADDR ( 0x8F )
#define HAL_ABB_WG_TX_IDLE_DIG_2_ADDR ( 0x90 )
#define HAL_ABB_WG_TESTMODE_ADDR ( 0x91 )
#define HAL_ABB_WG_AD_OUT_CFG_ADDR ( 0x92 )
#define HAL_ABB_WG_DA_IN_CFG_ADDR ( 0x93 )
#define HAL_ABB_WG_RX_DELAY_ADDR ( 0x94 )
#define HAL_ABB_WG_LINE_CTRL_SEL_ADDR ( 0x95 )
#define HAL_ABB_WG_TX_I_OFFSET_ADDR ( 0x96 )
#define HAL_ABB_WG_TX_Q_OFFSET_ADDR ( 0x97 )
#define HAL_ABB_WG_RXA_BLOCKING_ADDR ( 0x98 )
#define HAL_ABB_WG_RXB_BLOCKING_ADDR ( 0x99 )
#define HAL_ABB_WG_RX_2G_ANA_ADDR ( 0x9A )
#define HAL_ABB_WG_TX_2G_ANA_ADDR ( 0x9B )
#define HAL_ABB_WG_RX_3G_ANA_ADDR ( 0x9C )
#define HAL_ABB_WG_TX_3G_ANA_ADDR ( 0x9D )
#define HAL_ABB_WG_RX_4G_ANA_ADDR ( 0x9E )
#define HAL_ABB_WG_TX_4G_ANA_ADDR ( 0x9F )
#define HAL_ABB_WG_RX_IDLE_ANA_ADDR ( 0xA0 )
#define HAL_ABB_WG_TX_IDLE_ANA_ADDR ( 0xA1 )
#define HAL_ABB_WG_REG_ANALOG_WR02_ADDR ( 0xA2 )
#define HAL_ABB_WG_REG_ANALOG_WR03_ADDR ( 0xA3 )
#define HAL_ABB_WG_REG_ANALOG_WR04_ADDR ( 0xA4 )
#define HAL_ABB_WG_REG_ANALOG_WR05_ADDR ( 0xA5 )
#define HAL_ABB_WG_REG_ANALOG_WR06_ADDR ( 0xA6 )
#define HAL_ABB_WG_REG_ANALOG_WR07_ADDR ( 0xA7 )
#define HAL_ABB_WG_REG_ANALOG_WR08_ADDR ( 0xA8 )
#define HAL_ABB_WG_REG_ANALOG_WR09_ADDR ( 0xA9 )
#define HAL_ABB_WG_REG_ANALOG_WR10_ADDR ( 0xAA )
#define HAL_ABB_WG_REG_ANALOG_WR11_ADDR ( 0xAB )
#define HAL_ABB_WG_REG_ANALOG_WR12_ADDR ( 0xAC )
#define HAL_ABB_WG_REG_ANALOG_WR13_ADDR ( 0xAD )
#define HAL_ABB_WG_REG_ANALOG_WR14_ADDR ( 0xAE )
#define HAL_ABB_WG_REG_ANALOG_WR15_ADDR ( 0xAF )
#define HAL_ABB_WG_REG_ANALOG_WR16_ADDR ( 0xB0 )
#define HAL_ABB_WG_REG_ANALOG_WR17_ADDR ( 0xB1 )
#define HAL_ABB_WG_REG_ANALOG_WR18_ADDR ( 0xB2 )
#define HAL_ABB_WG_REG_ANALOG_WR19_ADDR ( 0xB3 )
#define HAL_ABB_WG_REG_ANALOG_WR20_ADDR ( 0xB4 )
#define HAL_ABB_WG_REG_ANALOG_WR21_ADDR ( 0xB5 )
#define HAL_ABB_WG_REG_ANALOG_WR22_ADDR ( 0xB6 )
#define HAL_ABB_WG_REG_ANALOG_WR23_ADDR ( 0xB7 )
#define HAL_ABB_WG_REG_ANALOG_WR24_ADDR ( 0xB8 )
#define HAL_ABB_WG_REG_ANALOG_WR25_ADDR ( 0xB9 )
#define HAL_ABB_WG_REG_ANALOG_WR26_ADDR ( 0xBA )
#define HAL_ABB_WG_REG_ANALOG_WR27_ADDR ( 0xBB )
#define HAL_ABB_WG_REG_ANALOG_WR28_ADDR ( 0xBC )
#define HAL_ABB_WG_REG_ANALOG_WR29_ADDR ( 0xBD )
#define HAL_ABB_WG_REG_ANALOG_WR30_ADDR ( 0xBE )
#define HAL_ABB_WG_REG_ANALOG_WR31_ADDR ( 0xBF )
#define HAL_ABB_WG_REG_ANALOG_WR32_ADDR ( 0xC0 )
#define HAL_ABB_WG_REG_ANALOG_WR33_ADDR ( 0xC1 )
#define HAL_ABB_WG_REG_ANALOG_WR34_ADDR ( 0xC2 )
#define HAL_ABB_WG_REG_ANALOG_WR35_ADDR ( 0xC3 )
#define HAL_ABB_WG_REG_ANALOG_WR36_ADDR ( 0xC4 )
#define HAL_ABB_WG_REG_ANALOG_WR37_ADDR ( 0xC5 )
#define HAL_ABB_WG_REG_ANALOG_WR38_ADDR ( 0xC6 )
#define HAL_ABB_WG_REG_ANALOG_RO0_ADDR ( 0xD0 )
#define HAL_ABB_WG_REG_ANALOG_RO1_ADDR ( 0xD1 )
#define HAL_ABB_WG_REG_ANALOG_RO2_ADDR ( 0xD2 )
#define HAL_ABB_WG_REG_ANALOG_RO3_ADDR ( 0xD3 )
#define HAL_ABB_WG_REG_ANALOG_RO4_ADDR ( 0xD4 )
#define HAL_ABB_WG_REG_DEBUG_DIG0_ADDR ( 0xD5 )
#define HAL_ABB_WG_REG_DEBUG_DIG1_ADDR ( 0xD6 )
#define HAL_ABB_WG_REG_DEBUG_DIG2_ADDR ( 0xD7 )
#define HAL_ABB_WG_REG_DEBUG_DIG3_ADDR ( 0xD8 )
#define HAL_ABB_WG_REG_DEBUG_ANA0_ADDR ( 0xD9 )
#define HAL_ABB_WG_REG_DEBUG_ANA1_ADDR ( 0xDA )
#define HAL_ABB_WG_REG_DEBUG_ANA2_ADDR ( 0xDB )
#define HAL_ABB_WG_REG_DEBUG_ANA3_ADDR ( 0xDC )
#define HAL_ABB_WG_REG_DEBUG_ANA4_ADDR ( 0xDD )
#define HAL_ABB_WG_REG_DEBUG_ANA5_ADDR ( 0xDE )
#define HAL_ABB_WG_REG_DEBUG_ANA6_ADDR ( 0xDF )
#define HAL_ABB_WG_REG_DEBUG_ANA7_ADDR ( 0xE0 )
#define HAL_ABB_WG_REG_DEBUG_ANA8_ADDR ( 0xE1 )
#define HAL_ABB_WG_REG_DEBUG_ANA9_ADDR ( 0xE2 )
#define HAL_ABB_WG_REG_DEBUG_ANA10_ADDR ( 0xE3 )
#define HAL_ABB_WG_REG_DEBUG_ANA11_ADDR ( 0xE4 )
#define HAL_ABB_WG_REG_DEBUG_ANA12_ADDR ( 0xE5 )
#define HAL_ABB_WG_REG_DEBUG_ANA13_ADDR ( 0xE6 )
#define HAL_ABB_WG_REG_DEBUG_ANA14_ADDR ( 0xE7 )
#define HAL_ABB_WG_REG_DEBUG_ANA15_ADDR ( 0xE8 )
#define HAL_ABB_WG_REG_DEBUG_ANA16_ADDR ( 0xE9 )
#define HAL_ABB_WG_REG_DEBUG_ANA17_ADDR ( 0xEA )
#define HAL_ABB_WG_REG_DEBUG_ANA18_ADDR ( 0xEB )
#define HAL_ABB_WG_REG_DEBUG_ANA19_ADDR ( 0xEC )
#define HAL_ABB_WG_REG_DEBUG_ANA20_ADDR ( 0xED )
#define HAL_ABB_WG_REG_DEBUG_ANA21_ADDR ( 0xEE )
#define HAL_ABB_WG_REG_DEBUG_ARO0_ADDR ( 0xEF )
#define HAL_ABB_REG_ABB_MODE_ADDR ( 0xf0 )
#define HAL_ABB_HKADC_REG_WR1_ADDR ( 0x0 )
#define HAL_ABB_HKADC_REG_WR2_ADDR ( 0x1 )
#define HAL_ABB_HKADC_REG_WR3_ADDR ( 0x2 )
#define HAL_ABB_HKADC_REG_RO2_ADDR ( 0x5 )
#define HAL_ABB_HKADC_REG_RO3_ADDR ( 0x6 )
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 coeff : 5;
        PHY_UINT16 power : 3;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_RXA_BLOCKING_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 coeff : 5;
        PHY_UINT16 power : 3;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_RXB_BLOCKING_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rx_sync_polarity : 1;
        PHY_UINT16 rx_i_first : 1;
        PHY_UINT16 rxbit_weight : 1;
        PHY_UINT16 reserved0 : 1;
        PHY_UINT16 rx_dout_limit : 1;
        PHY_UINT16 rx_clk_inv : 1;
        PHY_UINT16 rx_clk_delay_bp : 1;
        PHY_UINT16 reserved1 : 9;
    }stReg;
}HAL_ABB_WG_AD_OUT_CFG_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 tx_sync_polarity : 1;
        PHY_UINT16 tx_i_first : 1;
        PHY_UINT16 txbit_weight : 1;
        PHY_UINT16 Reserved1 : 1;
        PHY_UINT16 tx_din_limit : 1;
        PHY_UINT16 Reserved2 : 11;
    }stReg;
}HAL_ABB_WG_DA_IN_CFG_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 tx_i_offset : 8;
        PHY_UINT16 Reserved : 8;
    }stReg;
}HAL_ABB_WG_TX_I_OFFSET_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 tx_q_offset : 8;
        PHY_UINT16 Reserved : 8;
    }stReg;
}HAL_ABB_WG_TX_Q_OFFSET_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 AUXDAC2_PD : 1;
        PHY_UINT16 AUXDAC1_PD : 1;
        PHY_UINT16 PLL624_PD : 1;
        PHY_UINT16 PLL6144_PD : 1;
        PHY_UINT16 BIAS_PD : 1;
        PHY_UINT16 REF_PD : 1;
        PHY_UINT16 FS : 1;
        PHY_UINT16 reserved : 9;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR02_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 Reserved : 3;
        PHY_UINT16 TX_CLKD_CTRL : 1;
        PHY_UINT16 CLK_61D44M_PD : 1;
        PHY_UINT16 CLK_52M_PD : 1;
        PHY_UINT16 RX_CLK2D_CTRL : 1;
        PHY_UINT16 ORDER_CTRL : 1;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR03_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 Reserved : 3;
        PHY_UINT16 OFFSET_CAL_DAC_EN : 1;
        PHY_UINT16 SARADC_REF_RANGE : 1;
        PHY_UINT16 TX_CM_CON_MODE : 2;
        PHY_UINT16 RX_ADC_CM_CON_EN : 1;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR38_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 EN_CAL : 1;
        PHY_UINT16 CAL_PD : 1;
        PHY_UINT16 TX_AUTO_TUNE : 1;
        PHY_UINT16 RX_AUTO_TUNE : 1;
        PHY_UINT16 reserved : 12;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_WR04_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rx_comp_bp : 1;
        PHY_UINT16 rx_comp_sel : 1;
        PHY_UINT16 rx_hb_bp : 1;
        PHY_UINT16 rx_rate : 2;
        PHY_UINT16 rx_mode_dig : 2;
        PHY_UINT16 reserved : 9;
    }stReg;
}HAL_ABB_WG_RX_3G_DIG_1_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 tx_pd : 1;
        PHY_UINT16 tx_comp_bp : 1;
        PHY_UINT16 tx_hb_bp : 1;
        PHY_UINT16 tx_rate : 3;
        PHY_UINT16 tx_mode_dig : 2;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_TX_2G_DIG_1_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 DEM_EN : 1;
        PHY_UINT16 RX_MODE_CLK : 2;
        PHY_UINT16 RX_MODE_ANA : 1;
        PHY_UINT16 RXB_Q_PD : 1;
        PHY_UINT16 RXB_I_PD : 1;
        PHY_UINT16 RXA_Q_PD : 1;
        PHY_UINT16 RXA_I_PD : 1;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_RX_3G_ANA_UNION;
typedef HAL_ABB_WG_RX_3G_ANA_UNION HAL_ABB_RX_IDLE_ANA_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 g_en_sel : 1;
        PHY_UINT16 w_en_sel : 1;
        PHY_UINT16 lte_en_sel : 1;
        PHY_UINT16 reserved : 15;
    }stReg;
}HAL_ABB_WG_LINE_CTRL_SEL_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 TX_MODE_CLK : 2;
        PHY_UINT16 TX_MODE_ANA : 1;
        PHY_UINT16 TX_Q_PD : 1;
        PHY_UINT16 TX_I_PD : 1;
        PHY_UINT16 TX_DIV_MODE : 2;
        PHY_UINT16 FC : 1;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_TX_2G_ANA_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 CAL_CNT : 5;
        PHY_UINT16 CAL_DONE : 1;
        PHY_UINT16 LOCK2 : 1;
        PHY_UINT16 LOCK1 : 1;
        PHY_UINT16 : 8;
    }stReg;
}HAL_ABB_WG_REG_ANALOG_RO0_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 tx_pd : 1;
        PHY_UINT16 tx_comp_bp : 1;
        PHY_UINT16 tx_hb_bp : 1;
        PHY_UINT16 tx_rate : 3;
        PHY_UINT16 tx_mode_dig : 2;
        PHY_UINT16 reserved : 8;
    }stReg;
}HAL_ABB_WG_TX_3G_DIG_1_UNION;
typedef HAL_ABB_WG_TX_3G_DIG_1_UNION HAL_ABB_WG_TX_4G_DIG_1_UNION;
typedef HAL_ABB_WG_TX_3G_DIG_1_UNION HAL_ABB_TX_IDLE_DIG_1_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 TX_MODE_CLK : 2;
        PHY_UINT16 TX_MODE_ANA : 1;
        PHY_UINT16 TX_Q_PD : 1;
        PHY_UINT16 TX_I_PD : 1;
        PHY_UINT16 TX_DIV_MODE : 2;
        PHY_UINT16 FC : 1;
        PHY_UINT16 : 8;
    }stReg;
}HAL_ABB_WG_TX_3G_ANA_UNION;
typedef HAL_ABB_WG_TX_3G_ANA_UNION HAL_ABB_WG_TX_4G_ANA_UNION;
typedef HAL_ABB_WG_TX_3G_ANA_UNION HAL_ABB_TX_IDLE_ANA_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 dem_const : 3;
        PHY_UINT16 tx_ddr_sdr : 1;
        PHY_UINT16 dem_prg_en : 1;
        PHY_UINT16 dem_dwa_en : 1;
        PHY_UINT16 lsb_dem_bp : 1;
        PHY_UINT16 msb_dem_bp : 1;
    }stReg;
}HAL_ABB_WG_TX_2G_DIG_2_UNION;
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION HAL_ABB_WG_TX_3G_DIG_2_UNION;
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION HAL_ABB_WG_TX_4G_DIG_2_UNION;
typedef HAL_ABB_WG_TX_2G_DIG_2_UNION HAL_ABB_TX_IDLE_DIG_2_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rx_comp_bp : 1;
        PHY_UINT16 rx_comp_sel : 1;
        PHY_UINT16 rx_hb_bp : 1;
        PHY_UINT16 rx_rate : 2;
        PHY_UINT16 rx_mode_dig : 2;
    }stReg;
}HAL_ABB_WG_RX_4G_DIG_1_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 : 2;
        PHY_UINT16 IB_AUXVCM : 2;
        PHY_UINT16 IB_AUXVBP : 2;
        PHY_UINT16 IB_AUXI2V : 2;
    }stReg;
}HAL_ABB_REG_ANALOG_WR18_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 ADJ26 : 3;
        PHY_UINT16 : 1;
        PHY_UINT16 ADJ25 : 3;
        PHY_UINT16 : 1;
    }stReg;
}HAL_ABB_REG_ANALOG_WR37_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 TCXO_RSVD : 7;
        PHY_UINT16 HLOD_BG : 1;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA6_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 CLKGEN_DELAY : 8;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA15_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 Reserved : 4;
        PHY_UINT16 EXT_BG_EN : 1;
        PHY_UINT16 CAP_MULT : 2;
        PHY_UINT16 CAP_SEL : 1;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA20_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rx_code_sel : 1;
        PHY_UINT16 rx_chnl_sel : 2;
        PHY_UINT16 test_mode : 3;
        PHY_UINT16 sw_rst : 1;
        PHY_UINT16 pad_ds : 1;
        PHY_UINT16 : 8;
    }stReg;
}HAL_ABB_TESTMODE_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rxa_pd : 1;
        PHY_UINT16 rxb_pd : 1;
        PHY_UINT16 gain_sel : 2;
        PHY_UINT16 rx_ddr_sdr : 1;
        PHY_UINT16 Reserved : 3;
        PHY_UINT16 : 8;
    }stReg;
}HAL_ABB_WG_RX_4G_DIG_2_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 rx_sel : 2;
        PHY_UINT16 tx_sel : 2;
        PHY_UINT16 reserved1 : 12;
    }stReg;
}HAL_ABB_REG_ABB_MODE_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 DEM_MOD_B0 : 1;
        PHY_UINT16 RX_MODE_CLK : 2;
        PHY_UINT16 DEM_MOD_B1 : 1;
        PHY_UINT16 RXB_Q_PD : 1;
        PHY_UINT16 RXB_I_PD : 1;
        PHY_UINT16 RXA_Q_PD : 1;
        PHY_UINT16 RXA_I_PD : 1;
        PHY_UINT16 reserved1 : 8;
    }stReg;
}HAL_ABB_WG_RX_2G_ANA_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 DAC_DUM_B1 : 1;
        PHY_UINT16 DAC_DUM_B2 : 1;
        PHY_UINT16 ADC_PUP_CTRL0 : 1;
        PHY_UINT16 ADC_PUP_CTRL1 : 1;
        PHY_UINT16 ADC_PUP_CTRL2 : 1;
        PHY_UINT16 ADC_PUP_CTRL3 : 1;
        PHY_UINT16 ADC_PUP_CTRL4 : 1;
        PHY_UINT16 ADC_PUP_CTRL5 : 1;
        PHY_UINT16 reserved1 : 8;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA10_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 Reserved : 2;
        PHY_UINT16 QT_DELAY : 2;
        PHY_UINT16 DAC3_DELAY : 2;
        PHY_UINT16 DAC12_DELAY : 2;
        PHY_UINT16 reserved1 : 8;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA15_V220_UNION;
typedef union
{
    PHY_UINT16 uhwValue;
    struct
    {
        PHY_UINT16 DRVBUF_CT : 3;
        PHY_UINT16 IREF_CTRL : 3;
        PHY_UINT16 reserved1 : 10;
    }stReg;
}HAL_ABB_WG_REG_DEBUG_ANA7_UNION;
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
