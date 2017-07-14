#ifndef __PHY_RF_INTERFACE_H__
#define __PHY_RF_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define RF_BASE_ADDR ( 0x0000 )
#define RF_TDD_CONFIG1_ADDR (RF_BASE_ADDR + 0x0)
#define RF_TDD_CONFIG2_ADDR (RF_BASE_ADDR + 0x1)
#define RF_FDD_TX_CONFIG_ADDR (RF_BASE_ADDR + 0x2)
#define RF_TX_AGC_ADDR (RF_BASE_ADDR + 0x3)
#define RF_FDD_RX_CONFIG_ADDR (RF_BASE_ADDR + 0x4)
#define RF_RX_A_AGC_ADDR (RF_BASE_ADDR + 0x5)
#define RF_RX_B_AGC_ADDR (RF_BASE_ADDR + 0x6)
#define RF_RX_A_DCOC_VALUE_ADDR (RF_BASE_ADDR + 0x7)
#define RF_RX_B_DCOC_VALUE_ADDR (RF_BASE_ADDR + 0x8)
#define RF_RX_IIP2_CAL_CTRL_ADDR (RF_BASE_ADDR + 0x9)
#define RF_RX_AGC_DCOC_SYNC_ADDR (RF_BASE_ADDR + 0xA)
#define RF_DCXO_ADJ_ADDR (RF_BASE_ADDR + 0xB)
#define RF_RX_A_IIP2_CAL_ADDR (RF_BASE_ADDR + 0x10)
#define RF_RX_B_IIP2_CAL_ADDR (RF_BASE_ADDR + 0x11)
#define RF_TX_FEEDBACK_CONTROL_ADDR (RF_BASE_ADDR + 0x12)
#define RF_OPERATING_BANDGROUP_ADDR (RF_BASE_ADDR + 0x14)
#define RF_XO_AFC_CTL_ADDR (RF_BASE_ADDR + 0x15)
#define RF_TX_LUT_CTRL1_ADDR (RF_BASE_ADDR + 0x17)
#define RF_TX_LUT_CTRL2_ADDR (RF_BASE_ADDR + 0x18)
#define RF_TX_LUT_CTRL3_ADDR (RF_BASE_ADDR + 0x19)
#define RF_RX_LUT_CTRL1_ADDR (RF_BASE_ADDR + 0x1A)
#define RF_RX_LUT_CTRL2_ADDR (RF_BASE_ADDR + 0x1B)
#define RF_RX_LUT_CTRL3_ADDR (RF_BASE_ADDR + 0x1C)
#define RF_TXRF_LOADTUNE_LUT_1_ADDR (RF_BASE_ADDR + 0x22)
#define RF_TXRF_LOADTUNE_LUT_2_ADDR (RF_BASE_ADDR + 0x23)
#define RF_TXRF_LOADTUNE_LUT_3_ADDR (RF_BASE_ADDR + 0x24)
#define RF_TXRF_LOADTUNE_LUT_4_ADDR (RF_BASE_ADDR + 0x25)
#define RF_TXRF_LOADTUNE_LUT_5_ADDR (RF_BASE_ADDR + 0x26)
#define RF_TXRF_LOADTUNE_LUT_6_ADDR (RF_BASE_ADDR + 0x27)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_ADDR (RF_BASE_ADDR + 0x28)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_ADDR (RF_BASE_ADDR + 0x29)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_ADDR (RF_BASE_ADDR + 0x2A)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_ADDR (RF_BASE_ADDR + 0x2B)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_ADDR (RF_BASE_ADDR + 0x2C)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_ADDR (RF_BASE_ADDR + 0x2D)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_ADDR (RF_BASE_ADDR + 0x2E)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_ADDR (RF_BASE_ADDR + 0x2F)
#define RF_RXRF_LNA_CTUNE_BBM1_ADDR (RF_BASE_ADDR + 0x30)
#define RF_RXRF_LNA_CTUNE_BBM2_ADDR (RF_BASE_ADDR + 0x31)
#define RF_RXRF_A_LNA_GAIN_1_ADDR (RF_BASE_ADDR + 0x32)
#define RF_RXRF_A_LNA_GAIN_2_ADDR (RF_BASE_ADDR + 0x33)
#define RF_RXRF_A_LNA_GAIN_3_ADDR (RF_BASE_ADDR + 0x34)
#define RF_RXRF_A_LNA_GAIN_4_ADDR (RF_BASE_ADDR + 0x35)
#define RF_RXRF_B_LNA_GAIN_1_ADDR (RF_BASE_ADDR + 0x36)
#define RF_RXRF_B_LNA_GAIN_2_ADDR (RF_BASE_ADDR + 0x37)
#define RF_RXRF_B_LNA_GAIN_3_ADDR (RF_BASE_ADDR + 0x38)
#define RF_RXRF_B_LNA_GAIN_4_ADDR (RF_BASE_ADDR + 0x39)
#define RF_TXIF_LUT_1_ADDR (RF_BASE_ADDR + 0x3A)
#define RF_TXIF_LUT_2_ADDR (RF_BASE_ADDR + 0x3B)
#define RF_TXIF_LUT_3_ADDR (RF_BASE_ADDR + 0x3C)
#define RF_TXIF_LUT_4_ADDR (RF_BASE_ADDR + 0x3D)
#define RF_TXIF_LUT_5_ADDR (RF_BASE_ADDR + 0x3E)
#define RF_TXIF_LUT_6_ADDR (RF_BASE_ADDR + 0x3F)
#define RF_TXIF_LUT_7_ADDR (RF_BASE_ADDR + 0x40)
#define RF_TXIF_LUT_8_ADDR (RF_BASE_ADDR + 0x41)
#define RF_RXRP_RCCAL_LUT1_ADDR (RF_BASE_ADDR + 0x42)
#define RF_RXRP_RCCAL_LUT2_ADDR (RF_BASE_ADDR + 0x43)
#define RF_RFIC_CRITICAL_CTRL_ADDR (RF_BASE_ADDR + 0x47)
#define RF_RFIC_IO_CTRL_ADDR (RF_BASE_ADDR + 0x48)
#define RF_RFIC_XO_CTRL1_ADDR (RF_BASE_ADDR + 0x49)
#define RF_RFIC_XO_CTRL2_ADDR (RF_BASE_ADDR + 0x4A)
#define RF_GPIO_CTRL_ADDR (RF_BASE_ADDR + 0x4B)
#define RF_GPIO_STATUS_ADDR (RF_BASE_ADDR + 0x4C)
#define RF_RFIC_CHIP_ID_ADDR (RF_BASE_ADDR + 0x50)
#define RF_RFIC_TESTSEL1_ADDR (RF_BASE_ADDR + 0x51)
#define RF_RFIC_TESTSEL2_ADDR (RF_BASE_ADDR + 0x52)
#define RF_RFIC_TESTMUX_ADDR (RF_BASE_ADDR + 0x53)
#define RF_RFIC_ANALOG_TESTMUX_ADDR (RF_BASE_ADDR + 0x54)
#define RF_RFIC_SPARE0_REG_ADDR (RF_BASE_ADDR + 0x55)
#define RF_CAL_TOP_CTRL_ADDR (RF_BASE_ADDR + 0x56)
#define RF_REXTCAL_OVERRIDE_1_ADDR (RF_BASE_ADDR + 0x57)
#define RF_REXTCAL_OVERRIDE_2_ADDR (RF_BASE_ADDR + 0x58)
#define RF_RCCAL_OVERRIDE_ADDR (RF_BASE_ADDR + 0x59)
#define RF_REXTCAL_DATA_ADDR (RF_BASE_ADDR + 0x5A)
#define RF_RCCAL_DATA_ADDR (RF_BASE_ADDR + 0x5B)
#define RF_RCCAL_CTRL_ADDR (RF_BASE_ADDR + 0x5C)
#define RF_REXTCAL_OVERRIDE_3_ADDR (RF_BASE_ADDR + 0x5D)
#define RF_TDD_SAM_CTRL1_ADDR (RF_BASE_ADDR + 0x60)
#define RF_TDD_SAM_CTRL2_ADDR (RF_BASE_ADDR + 0x61)
#define RF_TDD_3G4G_FSM_TIME_ADDR (RF_BASE_ADDR + 0x62)
#define RF_FDDTX_SAM_CTRL1_ADDR (RF_BASE_ADDR + 0x63)
#define RF_TX_EN_FSM_TIME_ADDR (RF_BASE_ADDR + 0x64)
#define RF_TX_2G_FSM_TIME_ADDR (RF_BASE_ADDR + 0x65)
#define RF_TX_3G4G_FSM_TIME_ADDR (RF_BASE_ADDR + 0x66)
#define RF_TX_PATH_CTRL1_ADDR (RF_BASE_ADDR + 0x67)
#define RF_TX_PATH_CTRL2_ADDR (RF_BASE_ADDR + 0x68)
#define RF_RX_SAM_CTRL1_ADDR (RF_BASE_ADDR + 0x69)
#define RF_RXIF_SAM_CTRL1_ADDR (RF_BASE_ADDR + 0x6A)
#define RF_RX_2G_FSM_TIME_ADDR (RF_BASE_ADDR + 0x6B)
#define RF_RX_3G4G_FSM_TIME_ADDR (RF_BASE_ADDR + 0x6C)
#define RF_RX_EN_FSM_TIME_ADDR (RF_BASE_ADDR + 0x6D)
#define RF_RX_BIAS_CTRL1_ADDR (RF_BASE_ADDR + 0x6E)
#define RF_RX_BIAS_CTRL2_ADDR (RF_BASE_ADDR + 0x6F)
#define RF_RX_DEBUG_TEST_ADDR (RF_BASE_ADDR + 0x70)
#define RF_LO_SAM_CTRL1_ADDR (RF_BASE_ADDR + 0x71)
#define RF_LOS_CTRL1_ADDR (RF_BASE_ADDR + 0x72)
#define RF_LOS_CTRL2_ADDR (RF_BASE_ADDR + 0x73)
#define RF_PLL_TX_MODE_ADDR (RF_BASE_ADDR + 0x80)
#define RF_PLL_TX_FREQ1_ADDR (RF_BASE_ADDR + 0x81)
#define RF_PLL_TX_FREQ2_ADDR (RF_BASE_ADDR + 0x82)
#define RF_PLL_TX_FSM_CTRL1_ADDR (RF_BASE_ADDR + 0x83)
#define RF_PLL_TX_FSM_CTRL2_ADDR (RF_BASE_ADDR + 0x84)
#define RF_PLL_TX_FSM_CTRL3_ADDR (RF_BASE_ADDR + 0x85)
#define RF_PLL_TX_VREG_CONFIG1_ADDR (RF_BASE_ADDR + 0x86)
#define RF_PLL_TX_VREG_CONFIG2_ADDR (RF_BASE_ADDR + 0x87)
#define RF_PLL_TX_LPF_CONFIG1_ADDR (RF_BASE_ADDR + 0x88)
#define RF_PLL_TX_LPF_CONFIG2_ADDR (RF_BASE_ADDR + 0x89)
#define RF_PLL_TX_VTDAC_CTRL_ADDR (RF_BASE_ADDR + 0x8A)
#define RF_PLL_TX_VTDAC_2G_ADDR (RF_BASE_ADDR + 0x8B)
#define RF_PLL_TX_VTDAC_3G4G_ADDR (RF_BASE_ADDR + 0x8C)
#define RF_PLL_TX_WAIT_TIME1_ADDR (RF_BASE_ADDR + 0x8D)
#define RF_PLL_TX_WAIT_TIME2_ADDR (RF_BASE_ADDR + 0x8E)
#define RF_PLL_TX_DFTUNE_CTRL1_ADDR (RF_BASE_ADDR + 0x8F)
#define RF_PLL_TX_DFTUNE_CTRL2_ADDR (RF_BASE_ADDR + 0x90)
#define RF_PLL_TX_DFTUNE_CTRL3_ADDR (RF_BASE_ADDR + 0x91)
#define RF_PLL_TX_KVCAL_CTRL1_ADDR (RF_BASE_ADDR + 0x92)
#define RF_PLL_TX_KVCAL_CTRL2_ADDR (RF_BASE_ADDR + 0x93)
#define RF_PLL_TX_KVCAL_CTRL3_ADDR (RF_BASE_ADDR + 0x94)
#define RF_PLL_TX_CAL_OVERRIDE_ADDR (RF_BASE_ADDR + 0x95)
#define RF_PLL_TX_ALIGN_CTRL_ADDR (RF_BASE_ADDR + 0x96)
#define RF_PLL_TX_FDET_CTRL_ADDR (RF_BASE_ADDR + 0x97)
#define RF_PLL_TX_VREG_CONFIG3_ADDR (RF_BASE_ADDR + 0x98)
#define RF_PLL_TX_KVCAL_CTRL4_ADDR (RF_BASE_ADDR + 0x99)
#define RF_PLL_TX_SPARE0_REG_ADDR (RF_BASE_ADDR + 0x9F)
#define RF_PLL_TX_BIST_ADDR (RF_BASE_ADDR + 0xA0)
#define RF_PLL_TX_TEST_1_ADDR (RF_BASE_ADDR + 0xA1)
#define RF_PLL_TX_TEST_2_ADDR (RF_BASE_ADDR + 0xA2)
#define RF_PLL_TX_FDET_COUNT_LSB_RD_ADDR (RF_BASE_ADDR + 0xA8)
#define RF_PLL_TX_FDET_COUNT_MSB_RD_ADDR (RF_BASE_ADDR + 0xA9)
#define RF_PLL_TX_CAPDAC_VAL_RD_ADDR (RF_BASE_ADDR + 0xAA)
#define RF_PLL_TX_KVCAL_STATUS_RD_ADDR (RF_BASE_ADDR + 0xAB)
#define RF_PLL_TX_KVCAL_NL1_RD_ADDR (RF_BASE_ADDR + 0xAC)
#define RF_PLL_TX_KVCAL_NH1_RD_ADDR (RF_BASE_ADDR + 0xAD)
#define RF_PLL_TX_KVCAL_NL2_RD_ADDR (RF_BASE_ADDR + 0xAE)
#define RF_PLL_TX_KVCAL_NH2_RD_ADDR (RF_BASE_ADDR + 0xAF)
#define RF_PLL_TX_RSM_STATE_RD_ADDR (RF_BASE_ADDR + 0xB0)
#define RF_PLL_RX_MODE_ADDR (RF_BASE_ADDR + 0xC0)
#define RF_PLL_RX_FREQ1_ADDR (RF_BASE_ADDR + 0xC1)
#define RF_PLL_RX_FREQ2_ADDR (RF_BASE_ADDR + 0xC2)
#define RF_PLL_RX_FSM_CTRL1_ADDR (RF_BASE_ADDR + 0xC3)
#define RF_PLL_RX_FSM_CTRL2_ADDR (RF_BASE_ADDR + 0xC4)
#define RF_PLL_RX_FSM_CTRL3_ADDR (RF_BASE_ADDR + 0xC5)
#define RF_PLL_RX_VREG_CONFIG1_ADDR (RF_BASE_ADDR + 0xC6)
#define RF_PLL_RX_VREG_CONFIG2_ADDR (RF_BASE_ADDR + 0xC7)
#define RF_PLL_RX_LPF_CONFIG1_ADDR (RF_BASE_ADDR + 0xC8)
#define RF_PLL_RX_LPF_CONFIG2_ADDR (RF_BASE_ADDR + 0xC9)
#define RF_PLL_RX_VTDAC_CTRL_ADDR (RF_BASE_ADDR + 0xCA)
#define RF_PLL_RX_VTDAC_2G_ADDR (RF_BASE_ADDR + 0xCB)
#define RF_PLL_RX_VTDAC_3G4G_ADDR (RF_BASE_ADDR + 0xCC)
#define RF_PLL_RX_WAIT_TIME1_ADDR (RF_BASE_ADDR + 0xCD)
#define RF_PLL_RX_WAIT_TIME2_ADDR (RF_BASE_ADDR + 0xCE)
#define RF_PLL_RX_DFTUNE_CTRL1_ADDR (RF_BASE_ADDR + 0xCF)
#define RF_PLL_RX_DFTUNE_CTRL2_ADDR (RF_BASE_ADDR + 0xD0)
#define RF_PLL_RX_DFTUNE_CTRL3_ADDR (RF_BASE_ADDR + 0xD1)
#define RF_PLL_RX_KVCAL_CTRL1_ADDR (RF_BASE_ADDR + 0xD2)
#define RF_PLL_RX_KVCAL_CTRL2_ADDR (RF_BASE_ADDR + 0xD3)
#define RF_PLL_RX_KVCAL_CTRL3_ADDR (RF_BASE_ADDR + 0xD4)
#define RF_PLL_RX_CAL_OVERRIDE_ADDR (RF_BASE_ADDR + 0xD5)
#define RF_PLL_RX_ALIGN_CTRL_ADDR (RF_BASE_ADDR + 0xD6)
#define RF_PLL_RX_FDET_CTRL_ADDR (RF_BASE_ADDR + 0xD7)
#define RF_PLL_RX_VREG_CONFIG3_ADDR (RF_BASE_ADDR + 0xD8)
#define RF_PLL_RX_KVCAL_CTRL4_ADDR (RF_BASE_ADDR + 0xD9)
#define RF_PLL_RX_SPARE0_REG_ADDR (RF_BASE_ADDR + 0xDF)
#define RF_PLL_RX_BIST_ADDR (RF_BASE_ADDR + 0xE0)
#define RF_PLL_RX_TEST_1_ADDR (RF_BASE_ADDR + 0xE1)
#define RF_PLL_RX_TEST_2_ADDR (RF_BASE_ADDR + 0xE2)
#define RF_PLL_RX_FDET_COUNT_LSB_RD_ADDR (RF_BASE_ADDR + 0xE8)
#define RF_PLL_RX_FDET_COUNT_MSB_RD_ADDR (RF_BASE_ADDR + 0xE9)
#define RF_PLL_RX_CAPDAC_VAL_RD_ADDR (RF_BASE_ADDR + 0xEA)
#define RF_PLL_RX_KVCAL_STATUS_RD_ADDR (RF_BASE_ADDR + 0xEB)
#define RF_PLL_RX_KVCAL_NL1_RD_ADDR (RF_BASE_ADDR + 0xEC)
#define RF_PLL_RX_KVCAL_NH1_RD_ADDR (RF_BASE_ADDR + 0xED)
#define RF_PLL_RX_KVCAL_NL2_RD_ADDR (RF_BASE_ADDR + 0xEE)
#define RF_PLL_RX_KVCAL_NH2_RD_ADDR (RF_BASE_ADDR + 0xEF)
#define RF_PLL_RX_RSM_STATE_RD_ADDR (RF_BASE_ADDR + 0xF0)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tdd_op_mode : 3;
        unsigned short tdd_rx_path_select : 2;
        unsigned short tdd_rx_agc_sync_bypass : 1;
        unsigned short tdd_if_config : 4;
        unsigned short tdd_rxrf_lna_b_sel : 3;
        unsigned short tdd_rxrf_lna_a_sel : 3;
    } reg;
} RF_TDD_CONFIG1_UNION;
#define RF_TDD_CONFIG1_tdd_op_mode_START (0)
#define RF_TDD_CONFIG1_tdd_op_mode_END (2)
#define RF_TDD_CONFIG1_tdd_rx_path_select_START (3)
#define RF_TDD_CONFIG1_tdd_rx_path_select_END (4)
#define RF_TDD_CONFIG1_tdd_rx_agc_sync_bypass_START (5)
#define RF_TDD_CONFIG1_tdd_rx_agc_sync_bypass_END (5)
#define RF_TDD_CONFIG1_tdd_if_config_START (6)
#define RF_TDD_CONFIG1_tdd_if_config_END (9)
#define RF_TDD_CONFIG1_tdd_rxrf_lna_b_sel_START (10)
#define RF_TDD_CONFIG1_tdd_rxrf_lna_b_sel_END (12)
#define RF_TDD_CONFIG1_tdd_rxrf_lna_a_sel_START (13)
#define RF_TDD_CONFIG1_tdd_rxrf_lna_a_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 13;
        unsigned short tdd_txrf_output_sel : 3;
    } reg;
} RF_TDD_CONFIG2_UNION;
#define RF_TDD_CONFIG2_tdd_txrf_output_sel_START (13)
#define RF_TDD_CONFIG2_tdd_txrf_output_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_tx_op_mode : 2;
        unsigned short reserved_0 : 4;
        unsigned short fdd_txif_config : 4;
        unsigned short reserved_1 : 3;
        unsigned short fdd_txrf_output_sel : 3;
    } reg;
} RF_FDD_TX_CONFIG_UNION;
#define RF_FDD_TX_CONFIG_fdd_tx_op_mode_START (0)
#define RF_FDD_TX_CONFIG_fdd_tx_op_mode_END (1)
#define RF_FDD_TX_CONFIG_fdd_txif_config_START (6)
#define RF_FDD_TX_CONFIG_fdd_txif_config_END (9)
#define RF_FDD_TX_CONFIG_fdd_txrf_output_sel_START (13)
#define RF_FDD_TX_CONFIG_fdd_txrf_output_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_ibias2_adj : 4;
        unsigned short txrf_gain : 4;
        unsigned short txif_gain : 5;
        unsigned short reserved : 3;
    } reg;
} RF_TX_AGC_UNION;
#define RF_TX_AGC_txrf_ibias2_adj_START (0)
#define RF_TX_AGC_txrf_ibias2_adj_END (3)
#define RF_TX_AGC_txrf_gain_START (4)
#define RF_TX_AGC_txrf_gain_END (7)
#define RF_TX_AGC_txif_gain_START (8)
#define RF_TX_AGC_txif_gain_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_rx_op_mode : 2;
        unsigned short reserved : 1;
        unsigned short fdd_rx_path_select : 2;
        unsigned short fdd_rx_agc_sync_bypass : 1;
        unsigned short fdd_rxif_config : 4;
        unsigned short fdd_rxrf_lna_b_sel : 3;
        unsigned short fdd_rxrf_lna_a_sel : 3;
    } reg;
} RF_FDD_RX_CONFIG_UNION;
#define RF_FDD_RX_CONFIG_fdd_rx_op_mode_START (0)
#define RF_FDD_RX_CONFIG_fdd_rx_op_mode_END (1)
#define RF_FDD_RX_CONFIG_fdd_rx_path_select_START (3)
#define RF_FDD_RX_CONFIG_fdd_rx_path_select_END (4)
#define RF_FDD_RX_CONFIG_fdd_rx_agc_sync_bypass_START (5)
#define RF_FDD_RX_CONFIG_fdd_rx_agc_sync_bypass_END (5)
#define RF_FDD_RX_CONFIG_fdd_rxif_config_START (6)
#define RF_FDD_RX_CONFIG_fdd_rxif_config_END (9)
#define RF_FDD_RX_CONFIG_fdd_rxrf_lna_b_sel_START (10)
#define RF_FDD_RX_CONFIG_fdd_rxrf_lna_b_sel_END (12)
#define RF_FDD_RX_CONFIG_fdd_rxrf_lna_a_sel_START (13)
#define RF_FDD_RX_CONFIG_fdd_rxrf_lna_a_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_vga_a_gain : 4;
        unsigned short rxrf_a_gain : 3;
        unsigned short reserved : 9;
    } reg;
} RF_RX_A_AGC_UNION;
#define RF_RX_A_AGC_rxif_vga_a_gain_START (0)
#define RF_RX_A_AGC_rxif_vga_a_gain_END (3)
#define RF_RX_A_AGC_rxrf_a_gain_START (4)
#define RF_RX_A_AGC_rxrf_a_gain_END (6)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_vga_b_gain : 4;
        unsigned short rxrf_b_gain : 3;
        unsigned short reserved : 9;
    } reg;
} RF_RX_B_AGC_UNION;
#define RF_RX_B_AGC_rxif_vga_b_gain_START (0)
#define RF_RX_B_AGC_rxif_vga_b_gain_END (3)
#define RF_RX_B_AGC_rxrf_b_gain_START (4)
#define RF_RX_B_AGC_rxrf_b_gain_END (6)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_dcoc_ai_adj : 8;
        unsigned short rxif_dcoc_aq_adj : 8;
    } reg;
} RF_RX_A_DCOC_VALUE_UNION;
#define RF_RX_A_DCOC_VALUE_rxif_dcoc_ai_adj_START (0)
#define RF_RX_A_DCOC_VALUE_rxif_dcoc_ai_adj_END (7)
#define RF_RX_A_DCOC_VALUE_rxif_dcoc_aq_adj_START (8)
#define RF_RX_A_DCOC_VALUE_rxif_dcoc_aq_adj_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_dcoc_bi_adj : 8;
        unsigned short rxif_dcoc_bq_adj : 8;
    } reg;
} RF_RX_B_DCOC_VALUE_UNION;
#define RF_RX_B_DCOC_VALUE_rxif_dcoc_bi_adj_START (0)
#define RF_RX_B_DCOC_VALUE_rxif_dcoc_bi_adj_END (7)
#define RF_RX_B_DCOC_VALUE_rxif_dcoc_bq_adj_START (8)
#define RF_RX_B_DCOC_VALUE_rxif_dcoc_bq_adj_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved_0 : 13;
        unsigned short rxrf_iip2cal_b_en : 1;
        unsigned short reserved_1 : 1;
        unsigned short rxrf_iip2cal_a_en : 1;
    } reg;
} RF_RX_IIP2_CAL_CTRL_UNION;
#define RF_RX_IIP2_CAL_CTRL_rxrf_iip2cal_b_en_START (13)
#define RF_RX_IIP2_CAL_CTRL_rxrf_iip2cal_b_en_END (13)
#define RF_RX_IIP2_CAL_CTRL_rxrf_iip2cal_a_en_START (15)
#define RF_RX_IIP2_CAL_CTRL_rxrf_iip2cal_a_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 15;
        unsigned short rx_agc_sync_trig : 1;
    } reg;
} RF_RX_AGC_DCOC_SYNC_UNION;
#define RF_RX_AGC_DCOC_SYNC_rx_agc_sync_trig_START (15)
#define RF_RX_AGC_DCOC_SYNC_rx_agc_sync_trig_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_cvar_adj : 4;
        unsigned short xo_cfix_adj : 6;
        unsigned short xo_i_adj : 3;
        unsigned short reserved : 3;
    } reg;
} RF_DCXO_ADJ_UNION;
#define RF_DCXO_ADJ_xo_cvar_adj_START (0)
#define RF_DCXO_ADJ_xo_cvar_adj_END (3)
#define RF_DCXO_ADJ_xo_cfix_adj_START (4)
#define RF_DCXO_ADJ_xo_cfix_adj_END (9)
#define RF_DCXO_ADJ_xo_i_adj_START (10)
#define RF_DCXO_ADJ_xo_i_adj_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_iip2cal_aq_adj : 6;
        unsigned short rxrf_iip2cal_aq_sign : 1;
        unsigned short reserved_0 : 1;
        unsigned short rxrf_iip2cal_ai_adj : 6;
        unsigned short rxrf_iip2cal_ai_sign : 1;
        unsigned short reserved_1 : 1;
    } reg;
} RF_RX_A_IIP2_CAL_UNION;
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_aq_adj_START (0)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_aq_adj_END (5)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_aq_sign_START (6)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_aq_sign_END (6)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_ai_adj_START (8)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_ai_adj_END (13)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_ai_sign_START (14)
#define RF_RX_A_IIP2_CAL_rxrf_iip2cal_ai_sign_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_iip2cal_bq_adj : 6;
        unsigned short rxrf_iip2cal_bq_sign : 1;
        unsigned short reserved_0 : 1;
        unsigned short rxrf_iip2cal_bi_adj : 6;
        unsigned short rxrf_iip2cal_bi_sign : 1;
        unsigned short reserved_1 : 1;
    } reg;
} RF_RX_B_IIP2_CAL_UNION;
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bq_adj_START (0)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bq_adj_END (5)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bq_sign_START (6)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bq_sign_END (6)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bi_adj_START (8)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bi_adj_END (13)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bi_sign_START (14)
#define RF_RX_B_IIP2_CAL_rxrf_iip2cal_bi_sign_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txfb_rms_vdcout_adj : 5;
        unsigned short txfb_rms_tcomp_adj : 4;
        unsigned short txfb_rms_rfatten_sel : 1;
        unsigned short txfb_rms_rf_en : 1;
        unsigned short txfb_rms_en : 1;
        unsigned short txfb_rms_gain_adj : 3;
        unsigned short reserved : 1;
    } reg;
} RF_TX_FEEDBACK_CONTROL_UNION;
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_vdcout_adj_START (0)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_vdcout_adj_END (4)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_tcomp_adj_START (5)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_tcomp_adj_END (8)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_rfatten_sel_START (9)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_rfatten_sel_END (9)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_rf_en_START (10)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_rf_en_END (10)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_en_START (11)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_en_END (11)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_gain_adj_START (12)
#define RF_TX_FEEDBACK_CONTROL_txfb_rms_gain_adj_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tcvr_operating_band : 6;
        unsigned short reserved : 10;
    } reg;
} RF_OPERATING_BANDGROUP_UNION;
#define RF_OPERATING_BANDGROUP_tcvr_operating_band_START (0)
#define RF_OPERATING_BANDGROUP_tcvr_operating_band_END (5)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_afc : 14;
        unsigned short reserved : 2;
    } reg;
} RF_XO_AFC_CTL_UNION;
#define RF_XO_AFC_CTL_xo_afc_START (0)
#define RF_XO_AFC_CTL_xo_afc_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_ctune_sec_adj : 3;
        unsigned short txrf_ctune_sec_adj_lut_bypass : 1;
        unsigned short txrf_ctune_prim_adj : 3;
        unsigned short txrf_ctune_prim_adj_lut_bypass : 1;
        unsigned short fdd_txif_bw : 3;
        unsigned short fdd_txif_bw_lut_bypass : 1;
        unsigned short tdd_txif_bw : 3;
        unsigned short tdd_txif_bw_lut_bypass : 1;
    } reg;
} RF_TX_LUT_CTRL1_UNION;
#define RF_TX_LUT_CTRL1_txrf_ctune_sec_adj_START (0)
#define RF_TX_LUT_CTRL1_txrf_ctune_sec_adj_END (2)
#define RF_TX_LUT_CTRL1_txrf_ctune_sec_adj_lut_bypass_START (3)
#define RF_TX_LUT_CTRL1_txrf_ctune_sec_adj_lut_bypass_END (3)
#define RF_TX_LUT_CTRL1_txrf_ctune_prim_adj_START (4)
#define RF_TX_LUT_CTRL1_txrf_ctune_prim_adj_END (6)
#define RF_TX_LUT_CTRL1_txrf_ctune_prim_adj_lut_bypass_START (7)
#define RF_TX_LUT_CTRL1_txrf_ctune_prim_adj_lut_bypass_END (7)
#define RF_TX_LUT_CTRL1_fdd_txif_bw_START (8)
#define RF_TX_LUT_CTRL1_fdd_txif_bw_END (10)
#define RF_TX_LUT_CTRL1_fdd_txif_bw_lut_bypass_START (11)
#define RF_TX_LUT_CTRL1_fdd_txif_bw_lut_bypass_END (11)
#define RF_TX_LUT_CTRL1_tdd_txif_bw_START (12)
#define RF_TX_LUT_CTRL1_tdd_txif_bw_END (14)
#define RF_TX_LUT_CTRL1_tdd_txif_bw_lut_bypass_START (15)
#define RF_TX_LUT_CTRL1_tdd_txif_bw_lut_bypass_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txif_out_stage_adj : 5;
        unsigned short txif_out_stage_adj_lut_bypass : 1;
        unsigned short txif_cpp_adj : 5;
        unsigned short txif_cpp_adj_lut_bypass : 1;
        unsigned short txif_rpp_adj : 3;
        unsigned short txif_rpp_adj_lut_bypass : 1;
    } reg;
} RF_TX_LUT_CTRL2_UNION;
#define RF_TX_LUT_CTRL2_txif_out_stage_adj_START (0)
#define RF_TX_LUT_CTRL2_txif_out_stage_adj_END (4)
#define RF_TX_LUT_CTRL2_txif_out_stage_adj_lut_bypass_START (5)
#define RF_TX_LUT_CTRL2_txif_out_stage_adj_lut_bypass_END (5)
#define RF_TX_LUT_CTRL2_txif_cpp_adj_START (6)
#define RF_TX_LUT_CTRL2_txif_cpp_adj_END (10)
#define RF_TX_LUT_CTRL2_txif_cpp_adj_lut_bypass_START (11)
#define RF_TX_LUT_CTRL2_txif_cpp_adj_lut_bypass_END (11)
#define RF_TX_LUT_CTRL2_txif_rpp_adj_START (12)
#define RF_TX_LUT_CTRL2_txif_rpp_adj_END (14)
#define RF_TX_LUT_CTRL2_txif_rpp_adj_lut_bypass_START (15)
#define RF_TX_LUT_CTRL2_txif_rpp_adj_lut_bypass_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txif_diff_pair_adj : 3;
        unsigned short txif_diff_pair_adj_lut_bypass : 1;
        unsigned short reserved : 12;
    } reg;
} RF_TX_LUT_CTRL3_UNION;
#define RF_TX_LUT_CTRL3_txif_diff_pair_adj_START (0)
#define RF_TX_LUT_CTRL3_txif_diff_pair_adj_END (2)
#define RF_TX_LUT_CTRL3_txif_diff_pair_adj_lut_bypass_START (3)
#define RF_TX_LUT_CTRL3_txif_diff_pair_adj_lut_bypass_END (3)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_lna_b_tune : 3;
        unsigned short rxrf_lna_b_tune_lut_bypass : 1;
        unsigned short rxrf_lna_a_tune : 3;
        unsigned short rxrf_lna_a_tune_lut_bypass : 1;
        unsigned short fdd_rxif_tlf_bw : 2;
        unsigned short fdd_rxif_tlf_bw_lut_bypass : 1;
        unsigned short reserved_0 : 1;
        unsigned short tdd_rxif_tlf_bw : 2;
        unsigned short tdd_rxif_tlf_bw_lut_bypass : 1;
        unsigned short reserved_1 : 1;
    } reg;
} RF_RX_LUT_CTRL1_UNION;
#define RF_RX_LUT_CTRL1_rxrf_lna_b_tune_START (0)
#define RF_RX_LUT_CTRL1_rxrf_lna_b_tune_END (2)
#define RF_RX_LUT_CTRL1_rxrf_lna_b_tune_lut_bypass_START (3)
#define RF_RX_LUT_CTRL1_rxrf_lna_b_tune_lut_bypass_END (3)
#define RF_RX_LUT_CTRL1_rxrf_lna_a_tune_START (4)
#define RF_RX_LUT_CTRL1_rxrf_lna_a_tune_END (6)
#define RF_RX_LUT_CTRL1_rxrf_lna_a_tune_lut_bypass_START (7)
#define RF_RX_LUT_CTRL1_rxrf_lna_a_tune_lut_bypass_END (7)
#define RF_RX_LUT_CTRL1_fdd_rxif_tlf_bw_START (8)
#define RF_RX_LUT_CTRL1_fdd_rxif_tlf_bw_END (9)
#define RF_RX_LUT_CTRL1_fdd_rxif_tlf_bw_lut_bypass_START (10)
#define RF_RX_LUT_CTRL1_fdd_rxif_tlf_bw_lut_bypass_END (10)
#define RF_RX_LUT_CTRL1_tdd_rxif_tlf_bw_START (12)
#define RF_RX_LUT_CTRL1_tdd_rxif_tlf_bw_END (13)
#define RF_RX_LUT_CTRL1_tdd_rxif_tlf_bw_lut_bypass_START (14)
#define RF_RX_LUT_CTRL1_tdd_rxif_tlf_bw_lut_bypass_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_rxif_filter_bw : 4;
        unsigned short fdd_rxif_filter_bw_lut_bypass : 1;
        unsigned short rx_2g_monitor : 1;
        unsigned short rx_2g_monitor_lut_bypass : 1;
        unsigned short reserved_0 : 1;
        unsigned short tdd_rxif_filter_bw : 4;
        unsigned short tdd_rxif_filter_bw_lut_bypass : 1;
        unsigned short rx_3g4g_sel : 1;
        unsigned short rx_3g4g_sel_lut_bypass : 1;
        unsigned short reserved_1 : 1;
    } reg;
} RF_RX_LUT_CTRL2_UNION;
#define RF_RX_LUT_CTRL2_fdd_rxif_filter_bw_START (0)
#define RF_RX_LUT_CTRL2_fdd_rxif_filter_bw_END (3)
#define RF_RX_LUT_CTRL2_fdd_rxif_filter_bw_lut_bypass_START (4)
#define RF_RX_LUT_CTRL2_fdd_rxif_filter_bw_lut_bypass_END (4)
#define RF_RX_LUT_CTRL2_rx_2g_monitor_START (5)
#define RF_RX_LUT_CTRL2_rx_2g_monitor_END (5)
#define RF_RX_LUT_CTRL2_rx_2g_monitor_lut_bypass_START (6)
#define RF_RX_LUT_CTRL2_rx_2g_monitor_lut_bypass_END (6)
#define RF_RX_LUT_CTRL2_tdd_rxif_filter_bw_START (8)
#define RF_RX_LUT_CTRL2_tdd_rxif_filter_bw_END (11)
#define RF_RX_LUT_CTRL2_tdd_rxif_filter_bw_lut_bypass_START (12)
#define RF_RX_LUT_CTRL2_tdd_rxif_filter_bw_lut_bypass_END (12)
#define RF_RX_LUT_CTRL2_rx_3g4g_sel_START (13)
#define RF_RX_LUT_CTRL2_rx_3g4g_sel_END (13)
#define RF_RX_LUT_CTRL2_rx_3g4g_sel_lut_bypass_START (14)
#define RF_RX_LUT_CTRL2_rx_3g4g_sel_lut_bypass_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_b_gain : 6;
        unsigned short lna_b_gain_lut_bypass : 1;
        unsigned short rxrf_lna_b_bbm_tune_sel : 1;
        unsigned short lna_a_gain : 6;
        unsigned short lna_a_gain_lut_bypass : 1;
        unsigned short rxrf_lna_a_bbm_tune_sel : 1;
    } reg;
} RF_RX_LUT_CTRL3_UNION;
#define RF_RX_LUT_CTRL3_lna_b_gain_START (0)
#define RF_RX_LUT_CTRL3_lna_b_gain_END (5)
#define RF_RX_LUT_CTRL3_lna_b_gain_lut_bypass_START (6)
#define RF_RX_LUT_CTRL3_lna_b_gain_lut_bypass_END (6)
#define RF_RX_LUT_CTRL3_rxrf_lna_b_bbm_tune_sel_START (7)
#define RF_RX_LUT_CTRL3_rxrf_lna_b_bbm_tune_sel_END (7)
#define RF_RX_LUT_CTRL3_lna_a_gain_START (8)
#define RF_RX_LUT_CTRL3_lna_a_gain_END (13)
#define RF_RX_LUT_CTRL3_lna_a_gain_lut_bypass_START (14)
#define RF_RX_LUT_CTRL3_lna_a_gain_lut_bypass_END (14)
#define RF_RX_LUT_CTRL3_rxrf_lna_a_bbm_tune_sel_START (15)
#define RF_RX_LUT_CTRL3_rxrf_lna_a_bbm_tune_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row1 : 6;
        unsigned short txrf_loadtune_lut_row2 : 6;
        unsigned short reserved : 4;
    } reg;
} RF_TXRF_LOADTUNE_LUT_1_UNION;
#define RF_TXRF_LOADTUNE_LUT_1_txrf_loadtune_lut_row1_START (0)
#define RF_TXRF_LOADTUNE_LUT_1_txrf_loadtune_lut_row1_END (5)
#define RF_TXRF_LOADTUNE_LUT_1_txrf_loadtune_lut_row2_START (6)
#define RF_TXRF_LOADTUNE_LUT_1_txrf_loadtune_lut_row2_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row3 : 6;
        unsigned short txrf_loadtune_lut_row4 : 6;
        unsigned short reserved : 4;
    } reg;
} RF_TXRF_LOADTUNE_LUT_2_UNION;
#define RF_TXRF_LOADTUNE_LUT_2_txrf_loadtune_lut_row3_START (0)
#define RF_TXRF_LOADTUNE_LUT_2_txrf_loadtune_lut_row3_END (5)
#define RF_TXRF_LOADTUNE_LUT_2_txrf_loadtune_lut_row4_START (6)
#define RF_TXRF_LOADTUNE_LUT_2_txrf_loadtune_lut_row4_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row5 : 6;
        unsigned short txrf_loadtune_lut_row6 : 6;
        unsigned short reserved : 4;
    } reg;
} RF_TXRF_LOADTUNE_LUT_3_UNION;
#define RF_TXRF_LOADTUNE_LUT_3_txrf_loadtune_lut_row5_START (0)
#define RF_TXRF_LOADTUNE_LUT_3_txrf_loadtune_lut_row5_END (5)
#define RF_TXRF_LOADTUNE_LUT_3_txrf_loadtune_lut_row6_START (6)
#define RF_TXRF_LOADTUNE_LUT_3_txrf_loadtune_lut_row6_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row7 : 6;
        unsigned short txrf_loadtune_lut_row8 : 6;
        unsigned short reserved : 4;
    } reg;
} RF_TXRF_LOADTUNE_LUT_4_UNION;
#define RF_TXRF_LOADTUNE_LUT_4_txrf_loadtune_lut_row7_START (0)
#define RF_TXRF_LOADTUNE_LUT_4_txrf_loadtune_lut_row7_END (5)
#define RF_TXRF_LOADTUNE_LUT_4_txrf_loadtune_lut_row8_START (6)
#define RF_TXRF_LOADTUNE_LUT_4_txrf_loadtune_lut_row8_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row9 : 6;
        unsigned short txrf_loadtune_lut_row10 : 6;
        unsigned short reserved : 4;
    } reg;
} RF_TXRF_LOADTUNE_LUT_5_UNION;
#define RF_TXRF_LOADTUNE_LUT_5_txrf_loadtune_lut_row9_START (0)
#define RF_TXRF_LOADTUNE_LUT_5_txrf_loadtune_lut_row9_END (5)
#define RF_TXRF_LOADTUNE_LUT_5_txrf_loadtune_lut_row10_START (6)
#define RF_TXRF_LOADTUNE_LUT_5_txrf_loadtune_lut_row10_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_loadtune_lut_row11 : 6;
        unsigned short reserved : 10;
    } reg;
} RF_TXRF_LOADTUNE_LUT_6_UNION;
#define RF_TXRF_LOADTUNE_LUT_6_txrf_loadtune_lut_row11_START (0)
#define RF_TXRF_LOADTUNE_LUT_6_txrf_loadtune_lut_row11_END (5)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_a_cap_lb_3 : 3;
        unsigned short lna_a_cap_lb_2 : 3;
        unsigned short lna_a_cap_lb_1 : 3;
        unsigned short lna_a_cap_lb_0 : 3;
    } reg;
} RF_RXRF_A_LNA_CTUNE_LUT_LB_UNION;
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_3_START (4)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_3_END (6)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_2_START (7)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_2_END (9)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_1_START (10)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_1_END (12)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_0_START (13)
#define RF_RXRF_A_LNA_CTUNE_LUT_LB_lna_a_cap_lb_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_a_cap_hb1_3 : 3;
        unsigned short lna_a_cap_hb1_2 : 3;
        unsigned short lna_a_cap_hb1_1 : 3;
        unsigned short lna_a_cap_hb1_0 : 3;
    } reg;
} RF_RXRF_A_LNA_CTUNE_LUT_HB1_UNION;
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_3_START (4)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_3_END (6)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_2_START (7)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_2_END (9)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_1_START (10)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_1_END (12)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_0_START (13)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB1_lna_a_cap_hb1_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_a_cap_hb2_3 : 3;
        unsigned short lna_a_cap_hb2_2 : 3;
        unsigned short lna_a_cap_hb2_1 : 3;
        unsigned short lna_a_cap_hb2_0 : 3;
    } reg;
} RF_RXRF_A_LNA_CTUNE_LUT_HB2_UNION;
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_3_START (4)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_3_END (6)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_2_START (7)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_2_END (9)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_1_START (10)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_1_END (12)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_0_START (13)
#define RF_RXRF_A_LNA_CTUNE_LUT_HB2_lna_a_cap_hb2_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_a_cap_uhb_3 : 3;
        unsigned short lna_a_cap_uhb_2 : 3;
        unsigned short lna_a_cap_uhb_1 : 3;
        unsigned short lna_a_cap_uhb_0 : 3;
    } reg;
} RF_RXRF_A_LNA_CTUNE_LUT_UHB_UNION;
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_3_START (4)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_3_END (6)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_2_START (7)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_2_END (9)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_1_START (10)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_1_END (12)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_0_START (13)
#define RF_RXRF_A_LNA_CTUNE_LUT_UHB_lna_a_cap_uhb_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_b_cap_lb_3 : 3;
        unsigned short lna_b_cap_lb_2 : 3;
        unsigned short lna_b_cap_lb_1 : 3;
        unsigned short lna_b_cap_lb_0 : 3;
    } reg;
} RF_RXRF_B_LNA_CTUNE_LUT_LB_UNION;
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_3_START (4)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_3_END (6)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_2_START (7)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_2_END (9)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_1_START (10)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_1_END (12)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_0_START (13)
#define RF_RXRF_B_LNA_CTUNE_LUT_LB_lna_b_cap_lb_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_b_cap_hb1_3 : 3;
        unsigned short lna_b_cap_hb1_2 : 3;
        unsigned short lna_b_cap_hb1_1 : 3;
        unsigned short lna_b_cap_hb1_0 : 3;
    } reg;
} RF_RXRF_B_LNA_CTUNE_LUT_HB1_UNION;
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_3_START (4)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_3_END (6)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_2_START (7)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_2_END (9)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_1_START (10)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_1_END (12)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_0_START (13)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB1_lna_b_cap_hb1_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_b_cap_hb2_3 : 3;
        unsigned short lna_b_cap_hb2_2 : 3;
        unsigned short lna_b_cap_hb2_1 : 3;
        unsigned short lna_b_cap_hb2_0 : 3;
    } reg;
} RF_RXRF_B_LNA_CTUNE_LUT_HB2_UNION;
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_3_START (4)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_3_END (6)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_2_START (7)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_2_END (9)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_1_START (10)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_1_END (12)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_0_START (13)
#define RF_RXRF_B_LNA_CTUNE_LUT_HB2_lna_b_cap_hb2_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_b_cap_uhb_3 : 3;
        unsigned short lna_b_cap_uhb_2 : 3;
        unsigned short lna_b_cap_uhb_1 : 3;
        unsigned short lna_b_cap_uhb_0 : 3;
    } reg;
} RF_RXRF_B_LNA_CTUNE_LUT_UHB_UNION;
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_3_START (4)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_3_END (6)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_2_START (7)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_2_END (9)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_1_START (10)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_1_END (12)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_0_START (13)
#define RF_RXRF_B_LNA_CTUNE_LUT_UHB_lna_b_cap_uhb_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short lna_cap_bbm_hb1_1 : 3;
        unsigned short lna_cap_bbm_hb1_0 : 3;
        unsigned short lna_cap_bbm_lb_1 : 3;
        unsigned short lna_cap_bbm_lb_0 : 3;
    } reg;
} RF_RXRF_LNA_CTUNE_BBM1_UNION;
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_hb1_1_START (4)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_hb1_1_END (6)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_hb1_0_START (7)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_hb1_0_END (9)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_lb_1_START (10)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_lb_1_END (12)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_lb_0_START (13)
#define RF_RXRF_LNA_CTUNE_BBM1_lna_cap_bbm_lb_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 1;
        unsigned short lna_cap_bbm_uhb_2 : 3;
        unsigned short lna_cap_bbm_uhb_1 : 3;
        unsigned short lna_cap_bbm_uhb_0 : 3;
        unsigned short lna_cap_bbm_hb2_1 : 3;
        unsigned short lna_cap_bbm_hb2_0 : 3;
    } reg;
} RF_RXRF_LNA_CTUNE_BBM2_UNION;
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_2_START (1)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_2_END (3)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_1_START (4)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_1_END (6)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_0_START (7)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_uhb_0_END (9)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_hb2_1_START (10)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_hb2_1_END (12)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_hb2_0_START (13)
#define RF_RXRF_LNA_CTUNE_BBM2_lna_cap_bbm_hb2_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_a_gain_row1 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_a_gain_row0 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_A_LNA_GAIN_1_UNION;
#define RF_RXRF_A_LNA_GAIN_1_lna_a_gain_row1_START (0)
#define RF_RXRF_A_LNA_GAIN_1_lna_a_gain_row1_END (5)
#define RF_RXRF_A_LNA_GAIN_1_lna_a_gain_row0_START (8)
#define RF_RXRF_A_LNA_GAIN_1_lna_a_gain_row0_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_a_gain_row3 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_a_gain_row2 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_A_LNA_GAIN_2_UNION;
#define RF_RXRF_A_LNA_GAIN_2_lna_a_gain_row3_START (0)
#define RF_RXRF_A_LNA_GAIN_2_lna_a_gain_row3_END (5)
#define RF_RXRF_A_LNA_GAIN_2_lna_a_gain_row2_START (8)
#define RF_RXRF_A_LNA_GAIN_2_lna_a_gain_row2_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_a_gain_row5 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_a_gain_row4 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_A_LNA_GAIN_3_UNION;
#define RF_RXRF_A_LNA_GAIN_3_lna_a_gain_row5_START (0)
#define RF_RXRF_A_LNA_GAIN_3_lna_a_gain_row5_END (5)
#define RF_RXRF_A_LNA_GAIN_3_lna_a_gain_row4_START (8)
#define RF_RXRF_A_LNA_GAIN_3_lna_a_gain_row4_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_a_gain_row7 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_a_gain_row6 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_A_LNA_GAIN_4_UNION;
#define RF_RXRF_A_LNA_GAIN_4_lna_a_gain_row7_START (0)
#define RF_RXRF_A_LNA_GAIN_4_lna_a_gain_row7_END (5)
#define RF_RXRF_A_LNA_GAIN_4_lna_a_gain_row6_START (8)
#define RF_RXRF_A_LNA_GAIN_4_lna_a_gain_row6_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_b_gain_row1 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_b_gain_row0 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_B_LNA_GAIN_1_UNION;
#define RF_RXRF_B_LNA_GAIN_1_lna_b_gain_row1_START (0)
#define RF_RXRF_B_LNA_GAIN_1_lna_b_gain_row1_END (5)
#define RF_RXRF_B_LNA_GAIN_1_lna_b_gain_row0_START (8)
#define RF_RXRF_B_LNA_GAIN_1_lna_b_gain_row0_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_b_gain_row3 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_b_gain_row2 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_B_LNA_GAIN_2_UNION;
#define RF_RXRF_B_LNA_GAIN_2_lna_b_gain_row3_START (0)
#define RF_RXRF_B_LNA_GAIN_2_lna_b_gain_row3_END (5)
#define RF_RXRF_B_LNA_GAIN_2_lna_b_gain_row2_START (8)
#define RF_RXRF_B_LNA_GAIN_2_lna_b_gain_row2_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_b_gain_row5 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_b_gain_row4 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_B_LNA_GAIN_3_UNION;
#define RF_RXRF_B_LNA_GAIN_3_lna_b_gain_row5_START (0)
#define RF_RXRF_B_LNA_GAIN_3_lna_b_gain_row5_END (5)
#define RF_RXRF_B_LNA_GAIN_3_lna_b_gain_row4_START (8)
#define RF_RXRF_B_LNA_GAIN_3_lna_b_gain_row4_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short lna_b_gain_row7 : 6;
        unsigned short reserved_0 : 2;
        unsigned short lna_b_gain_row6 : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_RXRF_B_LNA_GAIN_4_UNION;
#define RF_RXRF_B_LNA_GAIN_4_lna_b_gain_row7_START (0)
#define RF_RXRF_B_LNA_GAIN_4_lna_b_gain_row7_END (5)
#define RF_RXRF_B_LNA_GAIN_4_lna_b_gain_row6_START (8)
#define RF_RXRF_B_LNA_GAIN_4_lna_b_gain_row6_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 1;
        unsigned short rp_rccal_offset_4 : 3;
        unsigned short rp_rccal_offset_3 : 3;
        unsigned short rp_rccal_offset_2 : 3;
        unsigned short rp_rccal_offset_1 : 3;
        unsigned short rp_rccal_offset_0 : 3;
    } reg;
} RF_RXRP_RCCAL_LUT1_UNION;
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_4_START (1)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_4_END (3)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_3_START (4)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_3_END (6)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_2_START (7)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_2_END (9)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_1_START (10)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_1_END (12)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_0_START (13)
#define RF_RXRP_RCCAL_LUT1_rp_rccal_offset_0_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 1;
        unsigned short rp_rccal_offset_9 : 3;
        unsigned short rp_rccal_offset_8 : 3;
        unsigned short rp_rccal_offset_7 : 3;
        unsigned short rp_rccal_offset_6 : 3;
        unsigned short rp_rccal_offset_5 : 3;
    } reg;
} RF_RXRP_RCCAL_LUT2_UNION;
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_9_START (1)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_9_END (3)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_8_START (4)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_8_END (6)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_7_START (7)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_7_END (9)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_6_START (10)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_6_END (12)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_5_START (13)
#define RF_RXRP_RCCAL_LUT2_rp_rccal_offset_5_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_fref_out_en_n_tmp : 1;
        unsigned short xo_pll_rx_ref_en_tmp : 1;
        unsigned short xo_pll_tx_ref_en_tmp : 1;
        unsigned short pll_rx_reset_n_tmp : 1;
        unsigned short pll_tx_reset_n_tmp : 1;
        unsigned short pll_rx_digclk_en_n_tmp : 1;
        unsigned short pll_tx_digclk_en_n_tmp : 1;
        unsigned short tcvr_fsm_en_tmp : 1;
        unsigned short reserved : 2;
        unsigned short rfic_access_code : 6;
    } reg;
} RF_RFIC_CRITICAL_CTRL_UNION;
#define RF_RFIC_CRITICAL_CTRL_xo_fref_out_en_n_tmp_START (0)
#define RF_RFIC_CRITICAL_CTRL_xo_fref_out_en_n_tmp_END (0)
#define RF_RFIC_CRITICAL_CTRL_xo_pll_rx_ref_en_tmp_START (1)
#define RF_RFIC_CRITICAL_CTRL_xo_pll_rx_ref_en_tmp_END (1)
#define RF_RFIC_CRITICAL_CTRL_xo_pll_tx_ref_en_tmp_START (2)
#define RF_RFIC_CRITICAL_CTRL_xo_pll_tx_ref_en_tmp_END (2)
#define RF_RFIC_CRITICAL_CTRL_pll_rx_reset_n_tmp_START (3)
#define RF_RFIC_CRITICAL_CTRL_pll_rx_reset_n_tmp_END (3)
#define RF_RFIC_CRITICAL_CTRL_pll_tx_reset_n_tmp_START (4)
#define RF_RFIC_CRITICAL_CTRL_pll_tx_reset_n_tmp_END (4)
#define RF_RFIC_CRITICAL_CTRL_pll_rx_digclk_en_n_tmp_START (5)
#define RF_RFIC_CRITICAL_CTRL_pll_rx_digclk_en_n_tmp_END (5)
#define RF_RFIC_CRITICAL_CTRL_pll_tx_digclk_en_n_tmp_START (6)
#define RF_RFIC_CRITICAL_CTRL_pll_tx_digclk_en_n_tmp_END (6)
#define RF_RFIC_CRITICAL_CTRL_tcvr_fsm_en_tmp_START (7)
#define RF_RFIC_CRITICAL_CTRL_tcvr_fsm_en_tmp_END (7)
#define RF_RFIC_CRITICAL_CTRL_rfic_access_code_START (10)
#define RF_RFIC_CRITICAL_CTRL_rfic_access_code_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short iodig_sr_int : 2;
        unsigned short iodig_mode : 2;
        unsigned short xo_fref_out_sr : 2;
        unsigned short reserved_0 : 2;
        unsigned short iodig_sleep_trim : 2;
        unsigned short reserved_1 : 2;
        unsigned short xo_rst_n : 1;
        unsigned short reserved_2 : 3;
    } reg;
} RF_RFIC_IO_CTRL_UNION;
#define RF_RFIC_IO_CTRL_iodig_sr_int_START (0)
#define RF_RFIC_IO_CTRL_iodig_sr_int_END (1)
#define RF_RFIC_IO_CTRL_iodig_mode_START (2)
#define RF_RFIC_IO_CTRL_iodig_mode_END (3)
#define RF_RFIC_IO_CTRL_xo_fref_out_sr_START (4)
#define RF_RFIC_IO_CTRL_xo_fref_out_sr_END (5)
#define RF_RFIC_IO_CTRL_iodig_sleep_trim_START (8)
#define RF_RFIC_IO_CTRL_iodig_sleep_trim_END (9)
#define RF_RFIC_IO_CTRL_xo_rst_n_START (12)
#define RF_RFIC_IO_CTRL_xo_rst_n_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_od_sel : 1;
        unsigned short reserved : 2;
        unsigned short xo_aac_counter_setting_init : 2;
        unsigned short xo_aac_counter_setting : 2;
        unsigned short xo_aac_r_bottom_adj : 2;
        unsigned short xo_aac_r_top_adj : 2;
        unsigned short xo_aac_mode_ctrl : 2;
        unsigned short xo_aac_en_n : 1;
        unsigned short xo_dith_en_n : 1;
        unsigned short xo_sdm_en_n : 1;
    } reg;
} RF_RFIC_XO_CTRL1_UNION;
#define RF_RFIC_XO_CTRL1_xo_od_sel_START (0)
#define RF_RFIC_XO_CTRL1_xo_od_sel_END (0)
#define RF_RFIC_XO_CTRL1_xo_aac_counter_setting_init_START (3)
#define RF_RFIC_XO_CTRL1_xo_aac_counter_setting_init_END (4)
#define RF_RFIC_XO_CTRL1_xo_aac_counter_setting_START (5)
#define RF_RFIC_XO_CTRL1_xo_aac_counter_setting_END (6)
#define RF_RFIC_XO_CTRL1_xo_aac_r_bottom_adj_START (7)
#define RF_RFIC_XO_CTRL1_xo_aac_r_bottom_adj_END (8)
#define RF_RFIC_XO_CTRL1_xo_aac_r_top_adj_START (9)
#define RF_RFIC_XO_CTRL1_xo_aac_r_top_adj_END (10)
#define RF_RFIC_XO_CTRL1_xo_aac_mode_ctrl_START (11)
#define RF_RFIC_XO_CTRL1_xo_aac_mode_ctrl_END (12)
#define RF_RFIC_XO_CTRL1_xo_aac_en_n_START (13)
#define RF_RFIC_XO_CTRL1_xo_aac_en_n_END (13)
#define RF_RFIC_XO_CTRL1_xo_dith_en_n_START (14)
#define RF_RFIC_XO_CTRL1_xo_dith_en_n_END (14)
#define RF_RFIC_XO_CTRL1_xo_sdm_en_n_START (15)
#define RF_RFIC_XO_CTRL1_xo_sdm_en_n_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short xo_spare1 : 8;
        unsigned short xo_aac_band_sel : 6;
        unsigned short xo_ldo_curr_adj : 2;
    } reg;
} RF_RFIC_XO_CTRL2_UNION;
#define RF_RFIC_XO_CTRL2_xo_spare1_START (0)
#define RF_RFIC_XO_CTRL2_xo_spare1_END (7)
#define RF_RFIC_XO_CTRL2_xo_aac_band_sel_START (8)
#define RF_RFIC_XO_CTRL2_xo_aac_band_sel_END (13)
#define RF_RFIC_XO_CTRL2_xo_ldo_curr_adj_START (14)
#define RF_RFIC_XO_CTRL2_xo_ldo_curr_adj_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short gpio_write : 4;
        unsigned short reserved_0 : 4;
        unsigned short gpio_dir : 4;
        unsigned short reserved_1 : 3;
        unsigned short gpio_pullstate : 1;
    } reg;
} RF_GPIO_CTRL_UNION;
#define RF_GPIO_CTRL_gpio_write_START (0)
#define RF_GPIO_CTRL_gpio_write_END (3)
#define RF_GPIO_CTRL_gpio_dir_START (8)
#define RF_GPIO_CTRL_gpio_dir_END (11)
#define RF_GPIO_CTRL_gpio_pullstate_START (15)
#define RF_GPIO_CTRL_gpio_pullstate_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short gpio_read : 4;
        unsigned short reserved : 12;
    } reg;
} RF_GPIO_STATUS_UNION;
#define RF_GPIO_STATUS_gpio_read_START (0)
#define RF_GPIO_STATUS_gpio_read_END (3)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short dig_testbus_sel : 8;
        unsigned short gpio_testbus_sel : 8;
    } reg;
} RF_RFIC_TESTSEL1_UNION;
#define RF_RFIC_TESTSEL1_dig_testbus_sel_START (0)
#define RF_RFIC_TESTSEL1_dig_testbus_sel_END (7)
#define RF_RFIC_TESTSEL1_gpio_testbus_sel_START (8)
#define RF_RFIC_TESTSEL1_gpio_testbus_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short dig_top_test_sel_test1 : 4;
        unsigned short dig_top_test_sel_test2 : 4;
        unsigned short reserved : 8;
    } reg;
} RF_RFIC_TESTSEL2_UNION;
#define RF_RFIC_TESTSEL2_dig_top_test_sel_test1_START (0)
#define RF_RFIC_TESTSEL2_dig_top_test_sel_test1_END (3)
#define RF_RFIC_TESTSEL2_dig_top_test_sel_test2_START (4)
#define RF_RFIC_TESTSEL2_dig_top_test_sel_test2_END (7)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short top_testmux1_sel : 3;
        unsigned short reserved_0 : 1;
        unsigned short top_testmux1_en : 1;
        unsigned short reserved_1 : 2;
        unsigned short vreg_dig_test_en : 1;
        unsigned short top_testmux2_sel : 3;
        unsigned short reserved_2 : 1;
        unsigned short top_testmux2_en : 1;
        unsigned short bias_test_sel : 2;
        unsigned short bias_test_en : 1;
    } reg;
} RF_RFIC_ANALOG_TESTMUX_UNION;
#define RF_RFIC_ANALOG_TESTMUX_top_testmux1_sel_START (0)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux1_sel_END (2)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux1_en_START (4)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux1_en_END (4)
#define RF_RFIC_ANALOG_TESTMUX_vreg_dig_test_en_START (7)
#define RF_RFIC_ANALOG_TESTMUX_vreg_dig_test_en_END (7)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux2_sel_START (8)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux2_sel_END (10)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux2_en_START (12)
#define RF_RFIC_ANALOG_TESTMUX_top_testmux2_en_END (12)
#define RF_RFIC_ANALOG_TESTMUX_bias_test_sel_START (13)
#define RF_RFIC_ANALOG_TESTMUX_bias_test_sel_END (14)
#define RF_RFIC_ANALOG_TESTMUX_bias_test_en_START (15)
#define RF_RFIC_ANALOG_TESTMUX_bias_test_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 1;
        unsigned short cal_rc_en : 2;
        unsigned short cal_rext_en : 2;
        unsigned short cal_bias_speedup : 2;
        unsigned short rextcal_start : 1;
        unsigned short cal_testmux2 : 3;
        unsigned short cal_testmux2_en : 1;
        unsigned short cal_testmux1 : 3;
        unsigned short cal_testmux1_en : 1;
    } reg;
} RF_CAL_TOP_CTRL_UNION;
#define RF_CAL_TOP_CTRL_cal_rc_en_START (1)
#define RF_CAL_TOP_CTRL_cal_rc_en_END (2)
#define RF_CAL_TOP_CTRL_cal_rext_en_START (3)
#define RF_CAL_TOP_CTRL_cal_rext_en_END (4)
#define RF_CAL_TOP_CTRL_cal_bias_speedup_START (5)
#define RF_CAL_TOP_CTRL_cal_bias_speedup_END (6)
#define RF_CAL_TOP_CTRL_rextcal_start_START (7)
#define RF_CAL_TOP_CTRL_rextcal_start_END (7)
#define RF_CAL_TOP_CTRL_cal_testmux2_START (8)
#define RF_CAL_TOP_CTRL_cal_testmux2_END (10)
#define RF_CAL_TOP_CTRL_cal_testmux2_en_START (11)
#define RF_CAL_TOP_CTRL_cal_testmux2_en_END (11)
#define RF_CAL_TOP_CTRL_cal_testmux1_START (12)
#define RF_CAL_TOP_CTRL_cal_testmux1_END (14)
#define RF_CAL_TOP_CTRL_cal_testmux1_en_START (15)
#define RF_CAL_TOP_CTRL_cal_testmux1_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_lna_b_bias_rext_adj_override_value : 5;
        unsigned short reserved_0 : 3;
        unsigned short rxrf_lna_a_bias_rext_adj_override_value : 5;
        unsigned short reserved_1 : 1;
        unsigned short rxrf_lna_b_bias_rext_adj_override : 1;
        unsigned short rxrf_lna_a_bias_rext_adj_override : 1;
    } reg;
} RF_REXTCAL_OVERRIDE_1_UNION;
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_b_bias_rext_adj_override_value_START (0)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_b_bias_rext_adj_override_value_END (4)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_a_bias_rext_adj_override_value_START (8)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_a_bias_rext_adj_override_value_END (12)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_b_bias_rext_adj_override_START (14)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_b_bias_rext_adj_override_END (14)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_a_bias_rext_adj_override_START (15)
#define RF_REXTCAL_OVERRIDE_1_rxrf_lna_a_bias_rext_adj_override_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_rext_adj_override_value : 5;
        unsigned short reserved_0 : 3;
        unsigned short aux_rext_adj_override_value : 5;
        unsigned short reserved_1 : 1;
        unsigned short rx_rext_adj_override : 1;
        unsigned short aux_rext_adj_override : 1;
    } reg;
} RF_REXTCAL_OVERRIDE_2_UNION;
#define RF_REXTCAL_OVERRIDE_2_rx_rext_adj_override_value_START (0)
#define RF_REXTCAL_OVERRIDE_2_rx_rext_adj_override_value_END (4)
#define RF_REXTCAL_OVERRIDE_2_aux_rext_adj_override_value_START (8)
#define RF_REXTCAL_OVERRIDE_2_aux_rext_adj_override_value_END (12)
#define RF_REXTCAL_OVERRIDE_2_rx_rext_adj_override_START (14)
#define RF_REXTCAL_OVERRIDE_2_rx_rext_adj_override_END (14)
#define RF_REXTCAL_OVERRIDE_2_aux_rext_adj_override_START (15)
#define RF_REXTCAL_OVERRIDE_2_aux_rext_adj_override_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_rccal_adj_override_value : 4;
        unsigned short reserved_0 : 4;
        unsigned short tx_rccal_adj_override_value : 4;
        unsigned short reserved_1 : 2;
        unsigned short rx_rccal_adj_override : 1;
        unsigned short tx_rccal_adj_override : 1;
    } reg;
} RF_RCCAL_OVERRIDE_UNION;
#define RF_RCCAL_OVERRIDE_rx_rccal_adj_override_value_START (0)
#define RF_RCCAL_OVERRIDE_rx_rccal_adj_override_value_END (3)
#define RF_RCCAL_OVERRIDE_tx_rccal_adj_override_value_START (8)
#define RF_RCCAL_OVERRIDE_tx_rccal_adj_override_value_END (11)
#define RF_RCCAL_OVERRIDE_rx_rccal_adj_override_START (14)
#define RF_RCCAL_OVERRIDE_rx_rccal_adj_override_END (14)
#define RF_RCCAL_OVERRIDE_tx_rccal_adj_override_START (15)
#define RF_RCCAL_OVERRIDE_tx_rccal_adj_override_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short cal_rext_word : 5;
        unsigned short cal_rext_wordready : 1;
        unsigned short rextcal_done : 1;
        unsigned short reserved : 9;
    } reg;
} RF_REXTCAL_DATA_UNION;
#define RF_REXTCAL_DATA_cal_rext_word_START (0)
#define RF_REXTCAL_DATA_cal_rext_word_END (4)
#define RF_REXTCAL_DATA_cal_rext_wordready_START (5)
#define RF_REXTCAL_DATA_cal_rext_wordready_END (5)
#define RF_REXTCAL_DATA_rextcal_done_START (6)
#define RF_REXTCAL_DATA_rextcal_done_END (6)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reg_rc_analog_word : 4;
        unsigned short rx_rccal_adj : 4;
        unsigned short tx_rccal_adj : 4;
        unsigned short reg_rc_measure_finish : 1;
        unsigned short reserved : 3;
    } reg;
} RF_RCCAL_DATA_UNION;
#define RF_RCCAL_DATA_reg_rc_analog_word_START (0)
#define RF_RCCAL_DATA_reg_rc_analog_word_END (3)
#define RF_RCCAL_DATA_rx_rccal_adj_START (4)
#define RF_RCCAL_DATA_rx_rccal_adj_END (7)
#define RF_RCCAL_DATA_tx_rccal_adj_START (8)
#define RF_RCCAL_DATA_tx_rccal_adj_END (11)
#define RF_RCCAL_DATA_reg_rc_measure_finish_START (12)
#define RF_RCCAL_DATA_reg_rc_measure_finish_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short cal_rc_start : 1;
        unsigned short reserved_0 : 3;
        unsigned short cal_rc_done : 2;
        unsigned short reserved_1 : 10;
    } reg;
} RF_RCCAL_CTRL_UNION;
#define RF_RCCAL_CTRL_cal_rc_start_START (0)
#define RF_RCCAL_CTRL_cal_rc_start_END (0)
#define RF_RCCAL_CTRL_cal_rc_done_START (4)
#define RF_RCCAL_CTRL_cal_rc_done_END (5)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_filter_b_bias_rext_adj : 5;
        unsigned short reserved_0 : 2;
        unsigned short rxif_filter_b_bias_override : 1;
        unsigned short rxif_filter_a_bias_rext_adj : 5;
        unsigned short reserved_1 : 2;
        unsigned short rxif_filter_a_bias_override : 1;
    } reg;
} RF_REXTCAL_OVERRIDE_3_UNION;
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_b_bias_rext_adj_START (0)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_b_bias_rext_adj_END (4)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_b_bias_override_START (7)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_b_bias_override_END (7)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_a_bias_rext_adj_START (8)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_a_bias_rext_adj_END (12)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_a_bias_override_START (15)
#define RF_REXTCAL_OVERRIDE_3_rxif_filter_a_bias_override_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tdd_rx_lo_en : 2;
        unsigned short tdd_lo_frontend_en : 1;
        unsigned short reserved : 13;
    } reg;
} RF_TDD_SAM_CTRL1_UNION;
#define RF_TDD_SAM_CTRL1_tdd_rx_lo_en_START (0)
#define RF_TDD_SAM_CTRL1_tdd_rx_lo_en_END (1)
#define RF_TDD_SAM_CTRL1_tdd_lo_frontend_en_START (2)
#define RF_TDD_SAM_CTRL1_tdd_lo_frontend_en_END (2)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved_0 : 2;
        unsigned short tdd_txcal_en : 2;
        unsigned short tdd_tx_speedup : 2;
        unsigned short reserved_1 : 2;
        unsigned short tdd_tx_ldo_speedup : 2;
        unsigned short tdd_tx_ldo_en : 2;
        unsigned short tdd_tx_en : 2;
        unsigned short tdd_tx_lo_en : 2;
    } reg;
} RF_TDD_SAM_CTRL2_UNION;
#define RF_TDD_SAM_CTRL2_tdd_txcal_en_START (2)
#define RF_TDD_SAM_CTRL2_tdd_txcal_en_END (3)
#define RF_TDD_SAM_CTRL2_tdd_tx_speedup_START (4)
#define RF_TDD_SAM_CTRL2_tdd_tx_speedup_END (5)
#define RF_TDD_SAM_CTRL2_tdd_tx_ldo_speedup_START (8)
#define RF_TDD_SAM_CTRL2_tdd_tx_ldo_speedup_END (9)
#define RF_TDD_SAM_CTRL2_tdd_tx_ldo_en_START (10)
#define RF_TDD_SAM_CTRL2_tdd_tx_ldo_en_END (11)
#define RF_TDD_SAM_CTRL2_tdd_tx_en_START (12)
#define RF_TDD_SAM_CTRL2_tdd_tx_en_END (13)
#define RF_TDD_SAM_CTRL2_tdd_tx_lo_en_START (14)
#define RF_TDD_SAM_CTRL2_tdd_tx_lo_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tdd_idle_cal_wait_time : 4;
        unsigned short tdd_idle_stdby_wait_time : 4;
        unsigned short tdd_idle_rxon_wait_time : 4;
        unsigned short tdd_idle_txon_wait_time : 4;
    } reg;
} RF_TDD_3G4G_FSM_TIME_UNION;
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_cal_wait_time_START (0)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_cal_wait_time_END (3)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_stdby_wait_time_START (4)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_stdby_wait_time_END (7)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_rxon_wait_time_START (8)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_rxon_wait_time_END (11)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_txon_wait_time_START (12)
#define RF_TDD_3G4G_FSM_TIME_tdd_idle_txon_wait_time_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_txcal_en : 2;
        unsigned short fdd_tx_speedup : 2;
        unsigned short fdd_tx_ldo_speedup : 2;
        unsigned short fdd_tx_ldo_en : 2;
        unsigned short fdd_tx_en : 2;
        unsigned short fdd_plltx_en : 2;
        unsigned short fdd_tx_lo_en : 2;
        unsigned short fdd_txlo_ldo_en : 2;
    } reg;
} RF_FDDTX_SAM_CTRL1_UNION;
#define RF_FDDTX_SAM_CTRL1_fdd_txcal_en_START (0)
#define RF_FDDTX_SAM_CTRL1_fdd_txcal_en_END (1)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_speedup_START (2)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_speedup_END (3)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_ldo_speedup_START (4)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_ldo_speedup_END (5)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_ldo_en_START (6)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_ldo_en_END (7)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_en_START (8)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_en_END (9)
#define RF_FDDTX_SAM_CTRL1_fdd_plltx_en_START (10)
#define RF_FDDTX_SAM_CTRL1_fdd_plltx_en_END (11)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_lo_en_START (12)
#define RF_FDDTX_SAM_CTRL1_fdd_tx_lo_en_END (13)
#define RF_FDDTX_SAM_CTRL1_fdd_txlo_ldo_en_START (14)
#define RF_FDDTX_SAM_CTRL1_fdd_txlo_ldo_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_speedup_dt : 4;
        unsigned short tx_ldo_speedup_dt : 4;
        unsigned short tx_speedup_dly : 4;
        unsigned short reserved : 4;
    } reg;
} RF_TX_EN_FSM_TIME_UNION;
#define RF_TX_EN_FSM_TIME_tx_speedup_dt_START (0)
#define RF_TX_EN_FSM_TIME_tx_speedup_dt_END (3)
#define RF_TX_EN_FSM_TIME_tx_ldo_speedup_dt_START (4)
#define RF_TX_EN_FSM_TIME_tx_ldo_speedup_dt_END (7)
#define RF_TX_EN_FSM_TIME_tx_speedup_dly_START (8)
#define RF_TX_EN_FSM_TIME_tx_speedup_dly_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_2g_idle_cal_wait_time : 4;
        unsigned short tx_2g_idle_stdby_wait_time : 4;
        unsigned short tx_2g_idle_txon_wait_time : 4;
        unsigned short reserved : 4;
    } reg;
} RF_TX_2G_FSM_TIME_UNION;
#define RF_TX_2G_FSM_TIME_tx_2g_idle_cal_wait_time_START (0)
#define RF_TX_2G_FSM_TIME_tx_2g_idle_cal_wait_time_END (3)
#define RF_TX_2G_FSM_TIME_tx_2g_idle_stdby_wait_time_START (4)
#define RF_TX_2G_FSM_TIME_tx_2g_idle_stdby_wait_time_END (7)
#define RF_TX_2G_FSM_TIME_tx_2g_idle_txon_wait_time_START (8)
#define RF_TX_2G_FSM_TIME_tx_2g_idle_txon_wait_time_END (11)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_3g4g_idle_cal_wait_time : 4;
        unsigned short tx_3g4g_idle_stdby_wait_time : 4;
        unsigned short tx_3g4g_idle_txon_wait_time : 4;
        unsigned short reserved : 3;
        unsigned short tx_wait_time_double_mode : 1;
    } reg;
} RF_TX_3G4G_FSM_TIME_UNION;
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_cal_wait_time_START (0)
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_cal_wait_time_END (3)
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_stdby_wait_time_START (4)
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_stdby_wait_time_END (7)
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_txon_wait_time_START (8)
#define RF_TX_3G4G_FSM_TIME_tx_3g4g_idle_txon_wait_time_END (11)
#define RF_TX_3G4G_FSM_TIME_tx_wait_time_double_mode_START (15)
#define RF_TX_3G4G_FSM_TIME_tx_wait_time_double_mode_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short txrf_vg2cm_adj : 3;
        unsigned short txrf_vlocm_adj : 3;
        unsigned short txrf_ibias1_adj : 4;
        unsigned short reserved : 6;
    } reg;
} RF_TX_PATH_CTRL1_UNION;
#define RF_TX_PATH_CTRL1_txrf_vg2cm_adj_START (0)
#define RF_TX_PATH_CTRL1_txrf_vg2cm_adj_END (2)
#define RF_TX_PATH_CTRL1_txrf_vlocm_adj_START (3)
#define RF_TX_PATH_CTRL1_txrf_vlocm_adj_END (5)
#define RF_TX_PATH_CTRL1_txrf_ibias1_adj_START (6)
#define RF_TX_PATH_CTRL1_txrf_ibias1_adj_END (9)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short tx_testmux_sel : 3;
        unsigned short tx_testmux_en : 1;
        unsigned short txlo_vreg_adj : 3;
        unsigned short txrf_tcomp_adj : 3;
        unsigned short reserved : 6;
    } reg;
} RF_TX_PATH_CTRL2_UNION;
#define RF_TX_PATH_CTRL2_tx_testmux_sel_START (0)
#define RF_TX_PATH_CTRL2_tx_testmux_sel_END (2)
#define RF_TX_PATH_CTRL2_tx_testmux_en_START (3)
#define RF_TX_PATH_CTRL2_tx_testmux_en_END (3)
#define RF_TX_PATH_CTRL2_txlo_vreg_adj_START (4)
#define RF_TX_PATH_CTRL2_txlo_vreg_adj_END (6)
#define RF_TX_PATH_CTRL2_txrf_tcomp_adj_START (7)
#define RF_TX_PATH_CTRL2_txrf_tcomp_adj_END (9)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short fdd_tdd_dcoc_en : 2;
        unsigned short fdd_tdd_lna_speedup : 2;
        unsigned short fdd_tdd_lna_en : 2;
        unsigned short fdd_tdd_rx_speedup : 2;
        unsigned short reserved : 2;
        unsigned short fdd_tdd_rx_en : 2;
        unsigned short fdd_tdd_pllrx_en : 2;
        unsigned short fdd_rx_lo_en : 2;
    } reg;
} RF_RX_SAM_CTRL1_UNION;
#define RF_RX_SAM_CTRL1_fdd_tdd_dcoc_en_START (0)
#define RF_RX_SAM_CTRL1_fdd_tdd_dcoc_en_END (1)
#define RF_RX_SAM_CTRL1_fdd_tdd_lna_speedup_START (2)
#define RF_RX_SAM_CTRL1_fdd_tdd_lna_speedup_END (3)
#define RF_RX_SAM_CTRL1_fdd_tdd_lna_en_START (4)
#define RF_RX_SAM_CTRL1_fdd_tdd_lna_en_END (5)
#define RF_RX_SAM_CTRL1_fdd_tdd_rx_speedup_START (6)
#define RF_RX_SAM_CTRL1_fdd_tdd_rx_speedup_END (7)
#define RF_RX_SAM_CTRL1_fdd_tdd_rx_en_START (10)
#define RF_RX_SAM_CTRL1_fdd_tdd_rx_en_END (11)
#define RF_RX_SAM_CTRL1_fdd_tdd_pllrx_en_START (12)
#define RF_RX_SAM_CTRL1_fdd_tdd_pllrx_en_END (13)
#define RF_RX_SAM_CTRL1_fdd_rx_lo_en_START (14)
#define RF_RX_SAM_CTRL1_fdd_rx_lo_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_filter_en : 2;
        unsigned short rxif_tia_en : 2;
        unsigned short rxif_vga_en : 2;
        unsigned short rxif_txcal_en : 2;
        unsigned short rxif_filt_sw_en : 2;
        unsigned short reserved : 6;
    } reg;
} RF_RXIF_SAM_CTRL1_UNION;
#define RF_RXIF_SAM_CTRL1_rxif_filter_en_START (0)
#define RF_RXIF_SAM_CTRL1_rxif_filter_en_END (1)
#define RF_RXIF_SAM_CTRL1_rxif_tia_en_START (2)
#define RF_RXIF_SAM_CTRL1_rxif_tia_en_END (3)
#define RF_RXIF_SAM_CTRL1_rxif_vga_en_START (4)
#define RF_RXIF_SAM_CTRL1_rxif_vga_en_END (5)
#define RF_RXIF_SAM_CTRL1_rxif_txcal_en_START (6)
#define RF_RXIF_SAM_CTRL1_rxif_txcal_en_END (7)
#define RF_RXIF_SAM_CTRL1_rxif_filt_sw_en_START (8)
#define RF_RXIF_SAM_CTRL1_rxif_filt_sw_en_END (9)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_2g_idle_cal_wait_time : 4;
        unsigned short rx_2g_idle_stdby_wait_time : 4;
        unsigned short rx_2g_idle_rxon_wait_time : 4;
        unsigned short rx_2g_idle_rxmon_wait_time : 4;
    } reg;
} RF_RX_2G_FSM_TIME_UNION;
#define RF_RX_2G_FSM_TIME_rx_2g_idle_cal_wait_time_START (0)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_cal_wait_time_END (3)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_stdby_wait_time_START (4)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_stdby_wait_time_END (7)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_rxon_wait_time_START (8)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_rxon_wait_time_END (11)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_rxmon_wait_time_START (12)
#define RF_RX_2G_FSM_TIME_rx_2g_idle_rxmon_wait_time_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_3g4g_idle_cal_wait_time : 4;
        unsigned short rx_3g4g_idle_stdby_wait_time : 4;
        unsigned short rx_3g4g_idle_rxon_wait_time : 4;
        unsigned short reserved : 3;
        unsigned short rx_wait_time_double_mode : 1;
    } reg;
} RF_RX_3G4G_FSM_TIME_UNION;
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_cal_wait_time_START (0)
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_cal_wait_time_END (3)
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_stdby_wait_time_START (4)
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_stdby_wait_time_END (7)
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_rxon_wait_time_START (8)
#define RF_RX_3G4G_FSM_TIME_rx_3g4g_idle_rxon_wait_time_END (11)
#define RF_RX_3G4G_FSM_TIME_rx_wait_time_double_mode_START (15)
#define RF_RX_3G4G_FSM_TIME_rx_wait_time_double_mode_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxrf_lna_en_dly : 4;
        unsigned short rxrf_lna_speedup_pwt : 4;
        unsigned short rx_speedup_dt : 5;
        unsigned short rxif_filt_sw_en_dly : 3;
    } reg;
} RF_RX_EN_FSM_TIME_UNION;
#define RF_RX_EN_FSM_TIME_rxrf_lna_en_dly_START (0)
#define RF_RX_EN_FSM_TIME_rxrf_lna_en_dly_END (3)
#define RF_RX_EN_FSM_TIME_rxrf_lna_speedup_pwt_START (4)
#define RF_RX_EN_FSM_TIME_rxrf_lna_speedup_pwt_END (7)
#define RF_RX_EN_FSM_TIME_rx_speedup_dt_START (8)
#define RF_RX_EN_FSM_TIME_rx_speedup_dt_END (12)
#define RF_RX_EN_FSM_TIME_rxif_filt_sw_en_dly_START (13)
#define RF_RX_EN_FSM_TIME_rxif_filt_sw_en_dly_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved : 4;
        unsigned short rxlo_vreg_lodiv_adj : 4;
        unsigned short rxrf_vreg_rf_adj : 2;
        unsigned short rxrf_mixer_vgbias_adj : 2;
        unsigned short rxrf_lna_vgcasc_adj : 2;
        unsigned short rxif_vreg_if_adj : 2;
    } reg;
} RF_RX_BIAS_CTRL1_UNION;
#define RF_RX_BIAS_CTRL1_rxlo_vreg_lodiv_adj_START (4)
#define RF_RX_BIAS_CTRL1_rxlo_vreg_lodiv_adj_END (7)
#define RF_RX_BIAS_CTRL1_rxrf_vreg_rf_adj_START (8)
#define RF_RX_BIAS_CTRL1_rxrf_vreg_rf_adj_END (9)
#define RF_RX_BIAS_CTRL1_rxrf_mixer_vgbias_adj_START (10)
#define RF_RX_BIAS_CTRL1_rxrf_mixer_vgbias_adj_END (11)
#define RF_RX_BIAS_CTRL1_rxrf_lna_vgcasc_adj_START (12)
#define RF_RX_BIAS_CTRL1_rxrf_lna_vgcasc_adj_END (13)
#define RF_RX_BIAS_CTRL1_rxif_vreg_if_adj_START (14)
#define RF_RX_BIAS_CTRL1_rxif_vreg_if_adj_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxif_tia_bias_ctl : 2;
        unsigned short rxif_vga_vcm_adj : 1;
        unsigned short fddrx_bias_ctrl2_spare : 5;
        unsigned short rxrf_lna_ibias_3g4g_adj : 4;
        unsigned short rxrf_lna_ibias_2g_adj : 4;
    } reg;
} RF_RX_BIAS_CTRL2_UNION;
#define RF_RX_BIAS_CTRL2_rxif_tia_bias_ctl_START (0)
#define RF_RX_BIAS_CTRL2_rxif_tia_bias_ctl_END (1)
#define RF_RX_BIAS_CTRL2_rxif_vga_vcm_adj_START (2)
#define RF_RX_BIAS_CTRL2_rxif_vga_vcm_adj_END (2)
#define RF_RX_BIAS_CTRL2_fddrx_bias_ctrl2_spare_START (3)
#define RF_RX_BIAS_CTRL2_fddrx_bias_ctrl2_spare_END (7)
#define RF_RX_BIAS_CTRL2_rxrf_lna_ibias_3g4g_adj_START (8)
#define RF_RX_BIAS_CTRL2_rxrf_lna_ibias_3g4g_adj_END (11)
#define RF_RX_BIAS_CTRL2_rxrf_lna_ibias_2g_adj_START (12)
#define RF_RX_BIAS_CTRL2_rxrf_lna_ibias_2g_adj_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rx_testmux_sel : 3;
        unsigned short rx_testmux_en : 1;
        unsigned short reserved : 12;
    } reg;
} RF_RX_DEBUG_TEST_UNION;
#define RF_RX_DEBUG_TEST_rx_testmux_sel_START (0)
#define RF_RX_DEBUG_TEST_rx_testmux_sel_END (2)
#define RF_RX_DEBUG_TEST_rx_testmux_en_START (3)
#define RF_RX_DEBUG_TEST_rx_testmux_en_END (3)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short rxlo_quadgen_switch_en : 2;
        unsigned short rxlo_div_mux_en : 2;
        unsigned short txlo_tdd_mux_en : 2;
        unsigned short txlo_tdd_en : 2;
        unsigned short txlo_fdd_mux_en : 2;
        unsigned short txlo_fdd_en : 2;
        unsigned short fdd_tdd_rxldo_en : 2;
        unsigned short tdd_txlo_ldo_en : 2;
    } reg;
} RF_LO_SAM_CTRL1_UNION;
#define RF_LO_SAM_CTRL1_rxlo_quadgen_switch_en_START (0)
#define RF_LO_SAM_CTRL1_rxlo_quadgen_switch_en_END (1)
#define RF_LO_SAM_CTRL1_rxlo_div_mux_en_START (2)
#define RF_LO_SAM_CTRL1_rxlo_div_mux_en_END (3)
#define RF_LO_SAM_CTRL1_txlo_tdd_mux_en_START (4)
#define RF_LO_SAM_CTRL1_txlo_tdd_mux_en_END (5)
#define RF_LO_SAM_CTRL1_txlo_tdd_en_START (6)
#define RF_LO_SAM_CTRL1_txlo_tdd_en_END (7)
#define RF_LO_SAM_CTRL1_txlo_fdd_mux_en_START (8)
#define RF_LO_SAM_CTRL1_txlo_fdd_mux_en_END (9)
#define RF_LO_SAM_CTRL1_txlo_fdd_en_START (10)
#define RF_LO_SAM_CTRL1_txlo_fdd_en_END (11)
#define RF_LO_SAM_CTRL1_fdd_tdd_rxldo_en_START (12)
#define RF_LO_SAM_CTRL1_fdd_tdd_rxldo_en_END (13)
#define RF_LO_SAM_CTRL1_tdd_txlo_ldo_en_START (14)
#define RF_LO_SAM_CTRL1_tdd_txlo_ldo_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved_0 : 6;
        unsigned short pllrxref_on_during_fddtx : 1;
        unsigned short plltxref_on_during_fddrx : 1;
        unsigned short los_txlo_ldo_en_dly : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_LOS_CTRL1_UNION;
#define RF_LOS_CTRL1_pllrxref_on_during_fddtx_START (6)
#define RF_LOS_CTRL1_pllrxref_on_during_fddtx_END (6)
#define RF_LOS_CTRL1_plltxref_on_during_fddrx_START (7)
#define RF_LOS_CTRL1_plltxref_on_during_fddrx_END (7)
#define RF_LOS_CTRL1_los_txlo_ldo_en_dly_START (8)
#define RF_LOS_CTRL1_los_txlo_ldo_en_dly_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short los_rxlo_quadgen_en_dly : 6;
        unsigned short reserved_0 : 2;
        unsigned short los_rxlo_ldo_en_dly : 6;
        unsigned short reserved_1 : 2;
    } reg;
} RF_LOS_CTRL2_UNION;
#define RF_LOS_CTRL2_los_rxlo_quadgen_en_dly_START (0)
#define RF_LOS_CTRL2_los_rxlo_quadgen_en_dly_END (5)
#define RF_LOS_CTRL2_los_rxlo_ldo_en_dly_START (8)
#define RF_LOS_CTRL2_los_rxlo_ldo_en_dly_END (13)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_lock_flag : 1;
        unsigned short reserved : 10;
        unsigned short pll_ctl_div2_bypass : 1;
        unsigned short pll_vco_sel : 1;
        unsigned short pll_lpf_mode : 2;
        unsigned short pll_intmode : 1;
    } reg;
} RF_PLL_TX_MODE_UNION;
#define RF_PLL_TX_MODE_pll_lock_flag_START (0)
#define RF_PLL_TX_MODE_pll_lock_flag_END (0)
#define RF_PLL_TX_MODE_pll_ctl_div2_bypass_START (11)
#define RF_PLL_TX_MODE_pll_ctl_div2_bypass_END (11)
#define RF_PLL_TX_MODE_pll_vco_sel_START (12)
#define RF_PLL_TX_MODE_pll_vco_sel_END (12)
#define RF_PLL_TX_MODE_pll_lpf_mode_START (13)
#define RF_PLL_TX_MODE_pll_lpf_mode_END (14)
#define RF_PLL_TX_MODE_pll_intmode_START (15)
#define RF_PLL_TX_MODE_pll_intmode_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_num : 8;
        unsigned short pll_tx_n : 8;
    } reg;
} RF_PLL_TX_FREQ1_UNION;
#define RF_PLL_TX_FREQ1_pll_tx_num_START (0)
#define RF_PLL_TX_FREQ1_pll_tx_num_END (7)
#define RF_PLL_TX_FREQ1_pll_tx_n_START (8)
#define RF_PLL_TX_FREQ1_pll_tx_n_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_en : 2;
        unsigned short pll_tx_kvcal_mode : 2;
        unsigned short pll_tx_kvcal_trigger : 1;
        unsigned short reserved_0 : 3;
        unsigned short pll_tx_lock_flag_en : 1;
        unsigned short reserved_1 : 1;
        unsigned short pll_tx_warmup_long_len : 2;
        unsigned short pll_tx_vco_replica_en : 2;
        unsigned short pll_tx_bias_en : 2;
    } reg;
} RF_PLL_TX_FSM_CTRL1_UNION;
#define RF_PLL_TX_FSM_CTRL1_pll_tx_en_START (0)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_en_END (1)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_kvcal_mode_START (2)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_kvcal_mode_END (3)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_kvcal_trigger_START (4)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_kvcal_trigger_END (4)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_lock_flag_en_START (8)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_lock_flag_en_END (8)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_warmup_long_len_START (10)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_warmup_long_len_END (11)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_vco_replica_en_START (12)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_vco_replica_en_END (13)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_bias_en_START (14)
#define RF_PLL_TX_FSM_CTRL1_pll_tx_bias_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_vco_buf_en : 2;
        unsigned short pll_tx_vco_en : 2;
        unsigned short pll_tx_vco_fb_en : 2;
        unsigned short pll_tx_fref_buf_auto_mode : 1;
        unsigned short pll_tx_dsm_update_mode : 1;
        unsigned short pll_tx_dsm_fv_en : 2;
        unsigned short pll_tx_pfd_div2_en : 2;
        unsigned short pll_tx_ndiv_en : 2;
        unsigned short pll_tx_fref_buf_en : 2;
    } reg;
} RF_PLL_TX_FSM_CTRL2_UNION;
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_buf_en_START (0)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_buf_en_END (1)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_en_START (2)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_en_END (3)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_fb_en_START (4)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_vco_fb_en_END (5)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_fref_buf_auto_mode_START (6)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_fref_buf_auto_mode_END (6)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_dsm_update_mode_START (7)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_dsm_update_mode_END (7)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_dsm_fv_en_START (8)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_dsm_fv_en_END (9)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_pfd_div2_en_START (10)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_pfd_div2_en_END (11)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_ndiv_en_START (12)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_ndiv_en_END (13)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_fref_buf_en_START (14)
#define RF_PLL_TX_FSM_CTRL2_pll_tx_fref_buf_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_vco_vreg_faston : 2;
        unsigned short pll_tx_vco_vreg_en : 2;
        unsigned short pll_tx_vco_buf_vreg_faston : 2;
        unsigned short pll_tx_vco_buf_vreg_en : 2;
        unsigned short pll_tx_vreg_pfd_faston : 2;
        unsigned short pll_tx_vreg_pfd_en : 2;
        unsigned short pll_tx_vreg_ctl_faston : 2;
        unsigned short pll_tx_vreg_ctl_en : 2;
    } reg;
} RF_PLL_TX_FSM_CTRL3_UNION;
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_vreg_faston_START (0)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_vreg_faston_END (1)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_vreg_en_START (2)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_vreg_en_END (3)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_buf_vreg_faston_START (4)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_buf_vreg_faston_END (5)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_buf_vreg_en_START (6)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vco_buf_vreg_en_END (7)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_pfd_faston_START (8)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_pfd_faston_END (9)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_pfd_en_START (10)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_pfd_en_END (11)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_ctl_faston_START (12)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_ctl_faston_END (13)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_ctl_en_START (14)
#define RF_PLL_TX_FSM_CTRL3_pll_tx_vreg_ctl_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved_0 : 8;
        unsigned short pll_tx_vreg_pfd_sel : 3;
        unsigned short reserved_1 : 1;
        unsigned short pll_tx_vreg_ctl_sel : 3;
        unsigned short reserved_2 : 1;
    } reg;
} RF_PLL_TX_VREG_CONFIG1_UNION;
#define RF_PLL_TX_VREG_CONFIG1_pll_tx_vreg_pfd_sel_START (8)
#define RF_PLL_TX_VREG_CONFIG1_pll_tx_vreg_pfd_sel_END (10)
#define RF_PLL_TX_VREG_CONFIG1_pll_tx_vreg_ctl_sel_START (12)
#define RF_PLL_TX_VREG_CONFIG1_pll_tx_vreg_ctl_sel_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_vco_current_sel2 : 3;
        unsigned short pll_tx_vco_current2_lut_bypass : 1;
        unsigned short pll_tx_vco_current_sel1 : 3;
        unsigned short pll_tx_vco_current1_lut_bypass : 1;
        unsigned short pll_tx_vco_buf_vreg_sel2 : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_vco_buf_vreg_sel1 : 3;
        unsigned short reserved_1 : 1;
    } reg;
} RF_PLL_TX_VREG_CONFIG2_UNION;
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current_sel2_START (0)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current_sel2_END (2)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current2_lut_bypass_START (3)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current2_lut_bypass_END (3)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current_sel1_START (4)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current_sel1_END (6)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current1_lut_bypass_START (7)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_current1_lut_bypass_END (7)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_buf_vreg_sel2_START (8)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_buf_vreg_sel2_END (10)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_buf_vreg_sel1_START (12)
#define RF_PLL_TX_VREG_CONFIG2_pll_tx_vco_buf_vreg_sel1_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_lpf_c2c3_sel_fastacq : 2;
        unsigned short pll_tx_lpf_res3_sel_fastacq : 1;
        unsigned short pll_tx_lpf_res2_sel_fastacq : 1;
        unsigned short pll_tx_lpf_c1_sel_fastacq : 2;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_lpf_res1_sel_fastacq : 1;
        unsigned short reserved_1 : 4;
        unsigned short pll_tx_pfd_xor_en : 2;
        unsigned short reserved_2 : 1;
        unsigned short pll_tx_lpf_en : 1;
    } reg;
} RF_PLL_TX_LPF_CONFIG1_UNION;
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_c2c3_sel_fastacq_START (0)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_c2c3_sel_fastacq_END (1)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res3_sel_fastacq_START (2)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res3_sel_fastacq_END (2)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res2_sel_fastacq_START (3)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res2_sel_fastacq_END (3)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_c1_sel_fastacq_START (4)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_c1_sel_fastacq_END (5)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res1_sel_fastacq_START (7)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_res1_sel_fastacq_END (7)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_pfd_xor_en_START (12)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_pfd_xor_en_END (13)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_en_START (15)
#define RF_PLL_TX_LPF_CONFIG1_pll_tx_lpf_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_lpf_c2c3_sel_3g4g : 2;
        unsigned short pll_tx_lpf_res3_sel_3g4g : 1;
        unsigned short pll_tx_lpf_res2_sel_3g4g : 1;
        unsigned short pll_tx_lpf_c1_sel_3g4g : 2;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_lpf_res1_sel_3g4g : 1;
        unsigned short pll_tx_lpf_c2c3_sel_2g : 2;
        unsigned short pll_tx_lpf_res3_sel_2g : 1;
        unsigned short pll_tx_lpf_res2_sel_2g : 1;
        unsigned short pll_tx_lpf_c1_sel_2g : 2;
        unsigned short reserved_1 : 1;
        unsigned short pll_tx_lpf_res1_sel_2g : 1;
    } reg;
} RF_PLL_TX_LPF_CONFIG2_UNION;
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c2c3_sel_3g4g_START (0)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c2c3_sel_3g4g_END (1)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res3_sel_3g4g_START (2)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res3_sel_3g4g_END (2)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res2_sel_3g4g_START (3)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res2_sel_3g4g_END (3)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c1_sel_3g4g_START (4)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c1_sel_3g4g_END (5)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res1_sel_3g4g_START (7)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res1_sel_3g4g_END (7)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c2c3_sel_2g_START (8)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c2c3_sel_2g_END (9)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res3_sel_2g_START (10)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res3_sel_2g_END (10)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res2_sel_2g_START (11)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res2_sel_2g_END (11)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c1_sel_2g_START (12)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_c1_sel_2g_END (13)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res1_sel_2g_START (15)
#define RF_PLL_TX_LPF_CONFIG2_pll_tx_lpf_res1_sel_2g_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_vtdac_val_def : 5;
        unsigned short reserved : 1;
        unsigned short pll_tx_vtdac_override : 1;
        unsigned short pll_tx_vtdac_offset_en : 1;
        unsigned short pll_tx_vtdac_offset_en_dftune : 1;
        unsigned short pll_tx_vtdac_offset_en_kvcal : 1;
        unsigned short pll_tx_vtdac_ptat_en : 2;
        unsigned short pll_tx_vtdac_dftune_en : 2;
        unsigned short pll_tx_vtdac_en : 2;
    } reg;
} RF_PLL_TX_VTDAC_CTRL_UNION;
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_val_def_START (0)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_val_def_END (4)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_override_START (6)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_override_END (6)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_START (7)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_END (7)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_dftune_START (8)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_dftune_END (8)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_kvcal_START (9)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_offset_en_kvcal_END (9)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_ptat_en_START (10)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_ptat_en_END (11)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_dftune_en_START (12)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_dftune_en_END (13)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_en_START (14)
#define RF_PLL_TX_VTDAC_CTRL_pll_tx_vtdac_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_dftune_vtune2_2g : 5;
        unsigned short reserved_0 : 3;
        unsigned short pll_tx_dftune_vtune1_2g : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_TX_VTDAC_2G_UNION;
#define RF_PLL_TX_VTDAC_2G_pll_tx_dftune_vtune2_2g_START (0)
#define RF_PLL_TX_VTDAC_2G_pll_tx_dftune_vtune2_2g_END (4)
#define RF_PLL_TX_VTDAC_2G_pll_tx_dftune_vtune1_2g_START (8)
#define RF_PLL_TX_VTDAC_2G_pll_tx_dftune_vtune1_2g_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_dftune_vtune2_3g4g : 5;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_vtdac_ptat_slope_sel2 : 2;
        unsigned short pll_tx_dftune_vtune1_3g4g : 5;
        unsigned short reserved_1 : 1;
        unsigned short pll_tx_vtdac_ptat_slope_sel1 : 2;
    } reg;
} RF_PLL_TX_VTDAC_3G4G_UNION;
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_dftune_vtune2_3g4g_START (0)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_dftune_vtune2_3g4g_END (4)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_vtdac_ptat_slope_sel2_START (6)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_vtdac_ptat_slope_sel2_END (7)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_dftune_vtune1_3g4g_START (8)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_dftune_vtune1_3g4g_END (12)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_vtdac_ptat_slope_sel1_START (14)
#define RF_PLL_TX_VTDAC_3G4G_pll_tx_vtdac_ptat_slope_sel1_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_tvreg : 7;
        unsigned short reserved : 1;
        unsigned short pll_tx_tvtdac : 4;
        unsigned short pll_tx_dftune_tinit : 4;
    } reg;
} RF_PLL_TX_WAIT_TIME1_UNION;
#define RF_PLL_TX_WAIT_TIME1_pll_tx_tvreg_START (0)
#define RF_PLL_TX_WAIT_TIME1_pll_tx_tvreg_END (6)
#define RF_PLL_TX_WAIT_TIME1_pll_tx_tvtdac_START (8)
#define RF_PLL_TX_WAIT_TIME1_pll_tx_tvtdac_END (11)
#define RF_PLL_TX_WAIT_TIME1_pll_tx_dftune_tinit_START (12)
#define RF_PLL_TX_WAIT_TIME1_pll_tx_dftune_tinit_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_tsettle : 4;
        unsigned short pll_tx_tvco : 4;
        unsigned short pll_tx_tfastacq_3g4g : 4;
        unsigned short pll_tx_tfastacq_2g : 4;
    } reg;
} RF_PLL_TX_WAIT_TIME2_UNION;
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tsettle_START (0)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tsettle_END (3)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tvco_START (4)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tvco_END (7)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tfastacq_3g4g_START (8)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tfastacq_3g4g_END (11)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tfastacq_2g_START (12)
#define RF_PLL_TX_WAIT_TIME2_pll_tx_tfastacq_2g_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_dftune_m2 : 4;
        unsigned short pll_tx_dftune_m1last : 4;
        unsigned short pll_tx_dftune_m1 : 4;
        unsigned short pll_tx_dftune_ft_min_err_en : 1;
        unsigned short pll_tx_dftune_fine_adj_en : 1;
        unsigned short pll_tx_dftune_coarse_adj_en : 1;
        unsigned short pll_tx_dftune_en : 1;
    } reg;
} RF_PLL_TX_DFTUNE_CTRL1_UNION;
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m2_START (0)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m2_END (3)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m1last_START (4)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m1last_END (7)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m1_START (8)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_m1_END (11)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_ft_min_err_en_START (12)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_ft_min_err_en_END (12)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_fine_adj_en_START (13)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_fine_adj_en_END (13)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_coarse_adj_en_START (14)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_coarse_adj_en_END (14)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_en_START (15)
#define RF_PLL_TX_DFTUNE_CTRL1_pll_tx_dftune_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_dftune_ptat_mode : 2;
        unsigned short reserved_0 : 2;
        unsigned short pll_tx_dftune_ms : 2;
        unsigned short reserved_1 : 2;
        unsigned short pll_tx_dftune_ct_fine_setpoint : 5;
        unsigned short reserved_2 : 3;
    } reg;
} RF_PLL_TX_DFTUNE_CTRL2_UNION;
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ptat_mode_START (0)
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ptat_mode_END (1)
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ms_START (4)
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ms_END (5)
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ct_fine_setpoint_START (8)
#define RF_PLL_TX_DFTUNE_CTRL2_pll_tx_dftune_ct_fine_setpoint_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_dftune_val : 10;
        unsigned short reserved : 6;
    } reg;
} RF_PLL_TX_DFTUNE_CTRL3_UNION;
#define RF_PLL_TX_DFTUNE_CTRL3_pll_tx_dftune_val_START (0)
#define RF_PLL_TX_DFTUNE_CTRL3_pll_tx_dftune_val_END (9)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_kvcal_bw_2g : 9;
        unsigned short reserved : 3;
        unsigned short pll_tx_kvcal_accum_size : 2;
        unsigned short pll_tx_kvcal_offset : 2;
    } reg;
} RF_PLL_TX_KVCAL_CTRL1_UNION;
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_bw_2g_START (0)
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_bw_2g_END (8)
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_accum_size_START (12)
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_accum_size_END (13)
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_offset_START (14)
#define RF_PLL_TX_KVCAL_CTRL1_pll_tx_kvcal_offset_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_kvcal_bw_3g4g : 9;
        unsigned short reserved : 3;
        unsigned short pll_tx_kvcal_vtune_delV : 4;
    } reg;
} RF_PLL_TX_KVCAL_CTRL2_UNION;
#define RF_PLL_TX_KVCAL_CTRL2_pll_tx_kvcal_bw_3g4g_START (0)
#define RF_PLL_TX_KVCAL_CTRL2_pll_tx_kvcal_bw_3g4g_END (8)
#define RF_PLL_TX_KVCAL_CTRL2_pll_tx_kvcal_vtune_delV_START (12)
#define RF_PLL_TX_KVCAL_CTRL2_pll_tx_kvcal_vtune_delV_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_kvcal_vco2_def : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_kvcal_vco1_def : 4;
        unsigned short pll_tx_kvcal_ct : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_TX_KVCAL_CTRL3_UNION;
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_vco2_def_START (0)
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_vco2_def_END (2)
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_vco1_def_START (4)
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_vco1_def_END (7)
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_ct_START (8)
#define RF_PLL_TX_KVCAL_CTRL3_pll_tx_kvcal_ct_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_rccal_val : 4;
        unsigned short reserved_0 : 3;
        unsigned short pll_tx_rccal_bypass : 1;
        unsigned short pll_tx_rext_val : 5;
        unsigned short reserved_1 : 2;
        unsigned short pll_tx_rext_bypass : 1;
    } reg;
} RF_PLL_TX_CAL_OVERRIDE_UNION;
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rccal_val_START (0)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rccal_val_END (3)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rccal_bypass_START (7)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rccal_bypass_END (7)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rext_val_START (8)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rext_val_END (12)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rext_bypass_START (15)
#define RF_PLL_TX_CAL_OVERRIDE_pll_tx_rext_bypass_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_xordiv2_phase_state : 1;
        unsigned short pll_tx_xordiv2_phase_en : 1;
        unsigned short reserved_0 : 2;
        unsigned short reserved_1 : 12;
    } reg;
} RF_PLL_TX_ALIGN_CTRL_UNION;
#define RF_PLL_TX_ALIGN_CTRL_pll_tx_xordiv2_phase_state_START (0)
#define RF_PLL_TX_ALIGN_CTRL_pll_tx_xordiv2_phase_state_END (0)
#define RF_PLL_TX_ALIGN_CTRL_pll_tx_xordiv2_phase_en_START (1)
#define RF_PLL_TX_ALIGN_CTRL_pll_tx_xordiv2_phase_en_END (1)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_fdet_ofs : 5;
        unsigned short reserved : 7;
        unsigned short pll_tx_fdet_rst : 2;
        unsigned short pll_tx_fdet_en : 2;
    } reg;
} RF_PLL_TX_FDET_CTRL_UNION;
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_ofs_START (0)
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_ofs_END (4)
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_rst_START (12)
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_rst_END (13)
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_en_START (14)
#define RF_PLL_TX_FDET_CTRL_pll_tx_fdet_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_vco_current_sel2_alt : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_tx_vco_current_sel1_alt : 3;
        unsigned short reserved_1 : 1;
        unsigned short pll_tx_vco_buf_vreg_sel2_alt : 3;
        unsigned short reserved_2 : 1;
        unsigned short pll_tx_vco_buf_vreg_sel1_alt : 3;
        unsigned short reserved_3 : 1;
    } reg;
} RF_PLL_TX_VREG_CONFIG3_UNION;
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_current_sel2_alt_START (0)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_current_sel2_alt_END (2)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_current_sel1_alt_START (4)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_current_sel1_alt_END (6)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_buf_vreg_sel2_alt_START (8)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_buf_vreg_sel2_alt_END (10)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_buf_vreg_sel1_alt_START (12)
#define RF_PLL_TX_VREG_CONFIG3_pll_tx_vco_buf_vreg_sel1_alt_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_kvcal_bw_alt : 9;
        unsigned short reserved : 7;
    } reg;
} RF_PLL_TX_KVCAL_CTRL4_UNION;
#define RF_PLL_TX_KVCAL_CTRL4_pll_tx_kvcal_bw_alt_START (0)
#define RF_PLL_TX_KVCAL_CTRL4_pll_tx_kvcal_bw_alt_END (8)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_fdet_bist_count : 4;
        unsigned short pll_tx_fdet_bist_trigger : 1;
        unsigned short reserved_0 : 3;
        unsigned short pll_tx_vco_vref_sel : 2;
        unsigned short reserved_1 : 2;
        unsigned short pll_tx_vco_open_loop_test_en : 1;
        unsigned short reserved_2 : 3;
    } reg;
} RF_PLL_TX_BIST_UNION;
#define RF_PLL_TX_BIST_pll_tx_fdet_bist_count_START (0)
#define RF_PLL_TX_BIST_pll_tx_fdet_bist_count_END (3)
#define RF_PLL_TX_BIST_pll_tx_fdet_bist_trigger_START (4)
#define RF_PLL_TX_BIST_pll_tx_fdet_bist_trigger_END (4)
#define RF_PLL_TX_BIST_pll_tx_vco_vref_sel_START (8)
#define RF_PLL_TX_BIST_pll_tx_vco_vref_sel_END (9)
#define RF_PLL_TX_BIST_pll_tx_vco_open_loop_test_en_START (12)
#define RF_PLL_TX_BIST_pll_tx_vco_open_loop_test_en_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_tmux_sel : 4;
        unsigned short pll_tx_test_en : 1;
        unsigned short reserved : 3;
        unsigned short pll_tx_vco_tmux_sel : 3;
        unsigned short pll_tx_vco_test_en : 1;
        unsigned short pll_tx_dig_testmux_sel : 4;
    } reg;
} RF_PLL_TX_TEST_1_UNION;
#define RF_PLL_TX_TEST_1_pll_tx_tmux_sel_START (0)
#define RF_PLL_TX_TEST_1_pll_tx_tmux_sel_END (3)
#define RF_PLL_TX_TEST_1_pll_tx_test_en_START (4)
#define RF_PLL_TX_TEST_1_pll_tx_test_en_END (4)
#define RF_PLL_TX_TEST_1_pll_tx_vco_tmux_sel_START (8)
#define RF_PLL_TX_TEST_1_pll_tx_vco_tmux_sel_END (10)
#define RF_PLL_TX_TEST_1_pll_tx_vco_test_en_START (11)
#define RF_PLL_TX_TEST_1_pll_tx_vco_test_en_END (11)
#define RF_PLL_TX_TEST_1_pll_tx_dig_testmux_sel_START (12)
#define RF_PLL_TX_TEST_1_pll_tx_dig_testmux_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_rsm_stop_state : 5;
        unsigned short reserved_0 : 2;
        unsigned short pll_tx_rsm_stop_en : 1;
        unsigned short pll_tx_rsm_trig_state : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_TX_TEST_2_UNION;
#define RF_PLL_TX_TEST_2_pll_tx_rsm_stop_state_START (0)
#define RF_PLL_TX_TEST_2_pll_tx_rsm_stop_state_END (4)
#define RF_PLL_TX_TEST_2_pll_tx_rsm_stop_en_START (7)
#define RF_PLL_TX_TEST_2_pll_tx_rsm_stop_en_END (7)
#define RF_PLL_TX_TEST_2_pll_tx_rsm_trig_state_START (8)
#define RF_PLL_TX_TEST_2_pll_tx_rsm_trig_state_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_fdet_count : 2;
        unsigned short reserved : 14;
    } reg;
} RF_PLL_TX_FDET_COUNT_MSB_RD_UNION;
#define RF_PLL_TX_FDET_COUNT_MSB_RD_pll_tx_fdet_count_START (0)
#define RF_PLL_TX_FDET_COUNT_MSB_RD_pll_tx_fdet_count_END (1)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_kvcal_vco2_val : 4;
        unsigned short pll_tx_kvcal_vco1_val : 4;
        unsigned short pll_tx_kvcal_div_by_0_d : 1;
        unsigned short pll_tx_kvcal_div_by_0_b : 1;
        unsigned short pll_tx_kvcal_div_by_0_a : 1;
        unsigned short reserved : 5;
    } reg;
} RF_PLL_TX_KVCAL_STATUS_RD_UNION;
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_vco2_val_START (0)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_vco2_val_END (3)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_vco1_val_START (4)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_vco1_val_END (7)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_d_START (8)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_d_END (8)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_b_START (9)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_b_END (9)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_a_START (10)
#define RF_PLL_TX_KVCAL_STATUS_RD_pll_tx_kvcal_div_by_0_a_END (10)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_tx_rsm_state : 5;
        unsigned short reserved : 10;
        unsigned short pll_tx_unlock_event : 1;
    } reg;
} RF_PLL_TX_RSM_STATE_RD_UNION;
#define RF_PLL_TX_RSM_STATE_RD_pll_tx_rsm_state_START (0)
#define RF_PLL_TX_RSM_STATE_RD_pll_tx_rsm_state_END (4)
#define RF_PLL_TX_RSM_STATE_RD_pll_tx_unlock_event_START (15)
#define RF_PLL_TX_RSM_STATE_RD_pll_tx_unlock_event_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_lock_flag : 1;
        unsigned short reserved_0 : 3;
        unsigned short pll_rx_los_div2sync_en : 1;
        unsigned short pll_rx_los_div2sync_mode : 2;
        unsigned short reserved_1 : 3;
        unsigned short pll_rx_alt_sel : 1;
        unsigned short pll_rx_ctl_div2_bypass : 1;
        unsigned short pll_rx_vco_sel : 1;
        unsigned short pll_rx_lpf_mode : 2;
        unsigned short pll_rx_intmode : 1;
    } reg;
} RF_PLL_RX_MODE_UNION;
#define RF_PLL_RX_MODE_pll_rx_lock_flag_START (0)
#define RF_PLL_RX_MODE_pll_rx_lock_flag_END (0)
#define RF_PLL_RX_MODE_pll_rx_los_div2sync_en_START (4)
#define RF_PLL_RX_MODE_pll_rx_los_div2sync_en_END (4)
#define RF_PLL_RX_MODE_pll_rx_los_div2sync_mode_START (5)
#define RF_PLL_RX_MODE_pll_rx_los_div2sync_mode_END (6)
#define RF_PLL_RX_MODE_pll_rx_alt_sel_START (10)
#define RF_PLL_RX_MODE_pll_rx_alt_sel_END (10)
#define RF_PLL_RX_MODE_pll_rx_ctl_div2_bypass_START (11)
#define RF_PLL_RX_MODE_pll_rx_ctl_div2_bypass_END (11)
#define RF_PLL_RX_MODE_pll_rx_vco_sel_START (12)
#define RF_PLL_RX_MODE_pll_rx_vco_sel_END (12)
#define RF_PLL_RX_MODE_pll_rx_lpf_mode_START (13)
#define RF_PLL_RX_MODE_pll_rx_lpf_mode_END (14)
#define RF_PLL_RX_MODE_pll_rx_intmode_START (15)
#define RF_PLL_RX_MODE_pll_rx_intmode_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_num : 8;
        unsigned short pll_rx_n : 8;
    } reg;
} RF_PLL_RX_FREQ1_UNION;
#define RF_PLL_RX_FREQ1_pll_rx_num_START (0)
#define RF_PLL_RX_FREQ1_pll_rx_num_END (7)
#define RF_PLL_RX_FREQ1_pll_rx_n_START (8)
#define RF_PLL_RX_FREQ1_pll_rx_n_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_en : 2;
        unsigned short pll_rx_kvcal_mode : 2;
        unsigned short pll_rx_kvcal_trigger : 1;
        unsigned short reserved_0 : 3;
        unsigned short pll_rx_lock_flag_en : 1;
        unsigned short reserved_1 : 1;
        unsigned short pll_rx_warmup_long_len : 2;
        unsigned short pll_rx_vco_replica_en : 2;
        unsigned short pll_rx_bias_en : 2;
    } reg;
} RF_PLL_RX_FSM_CTRL1_UNION;
#define RF_PLL_RX_FSM_CTRL1_pll_rx_en_START (0)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_en_END (1)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_kvcal_mode_START (2)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_kvcal_mode_END (3)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_kvcal_trigger_START (4)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_kvcal_trigger_END (4)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_lock_flag_en_START (8)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_lock_flag_en_END (8)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_warmup_long_len_START (10)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_warmup_long_len_END (11)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_vco_replica_en_START (12)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_vco_replica_en_END (13)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_bias_en_START (14)
#define RF_PLL_RX_FSM_CTRL1_pll_rx_bias_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_vco_buf_en : 2;
        unsigned short pll_rx_vco_en : 2;
        unsigned short pll_rx_vco_fb_en : 2;
        unsigned short pll_rx_fref_buf_auto_mode : 1;
        unsigned short pll_rx_dsm_update_mode : 1;
        unsigned short pll_rx_dsm_fv_en : 2;
        unsigned short pll_rx_pfd_div2_en : 2;
        unsigned short pll_rx_ndiv_en : 2;
        unsigned short pll_rx_fref_buf_en : 2;
    } reg;
} RF_PLL_RX_FSM_CTRL2_UNION;
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_buf_en_START (0)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_buf_en_END (1)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_en_START (2)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_en_END (3)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_fb_en_START (4)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_vco_fb_en_END (5)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_fref_buf_auto_mode_START (6)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_fref_buf_auto_mode_END (6)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_dsm_update_mode_START (7)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_dsm_update_mode_END (7)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_dsm_fv_en_START (8)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_dsm_fv_en_END (9)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_pfd_div2_en_START (10)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_pfd_div2_en_END (11)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_ndiv_en_START (12)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_ndiv_en_END (13)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_fref_buf_en_START (14)
#define RF_PLL_RX_FSM_CTRL2_pll_rx_fref_buf_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_vco_vreg_faston : 2;
        unsigned short pll_rx_vco_vreg_en : 2;
        unsigned short pll_rx_vco_buf_vreg_faston : 2;
        unsigned short pll_rx_vco_buf_vreg_en : 2;
        unsigned short pll_rx_vreg_pfd_faston : 2;
        unsigned short pll_rx_vreg_pfd_en : 2;
        unsigned short pll_rx_vreg_ctl_faston : 2;
        unsigned short pll_rx_vreg_ctl_en : 2;
    } reg;
} RF_PLL_RX_FSM_CTRL3_UNION;
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_vreg_faston_START (0)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_vreg_faston_END (1)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_vreg_en_START (2)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_vreg_en_END (3)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_buf_vreg_faston_START (4)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_buf_vreg_faston_END (5)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_buf_vreg_en_START (6)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vco_buf_vreg_en_END (7)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_pfd_faston_START (8)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_pfd_faston_END (9)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_pfd_en_START (10)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_pfd_en_END (11)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_ctl_faston_START (12)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_ctl_faston_END (13)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_ctl_en_START (14)
#define RF_PLL_RX_FSM_CTRL3_pll_rx_vreg_ctl_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short reserved_0 : 8;
        unsigned short pll_rx_vreg_pfd_sel : 3;
        unsigned short reserved_1 : 1;
        unsigned short pll_rx_vreg_ctl_sel : 3;
        unsigned short reserved_2 : 1;
    } reg;
} RF_PLL_RX_VREG_CONFIG1_UNION;
#define RF_PLL_RX_VREG_CONFIG1_pll_rx_vreg_pfd_sel_START (8)
#define RF_PLL_RX_VREG_CONFIG1_pll_rx_vreg_pfd_sel_END (10)
#define RF_PLL_RX_VREG_CONFIG1_pll_rx_vreg_ctl_sel_START (12)
#define RF_PLL_RX_VREG_CONFIG1_pll_rx_vreg_ctl_sel_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_vco_current_sel2 : 3;
        unsigned short pll_rx_vco_current2_lut_bypass : 1;
        unsigned short pll_rx_vco_current_sel1 : 3;
        unsigned short pll_rx_vco_current1_lut_bypass : 1;
        unsigned short pll_rx_vco_buf_vreg_sel2 : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_vco_buf_vreg_sel1 : 3;
        unsigned short reserved_1 : 1;
    } reg;
} RF_PLL_RX_VREG_CONFIG2_UNION;
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current_sel2_START (0)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current_sel2_END (2)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current2_lut_bypass_START (3)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current2_lut_bypass_END (3)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current_sel1_START (4)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current_sel1_END (6)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current1_lut_bypass_START (7)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_current1_lut_bypass_END (7)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_buf_vreg_sel2_START (8)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_buf_vreg_sel2_END (10)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_buf_vreg_sel1_START (12)
#define RF_PLL_RX_VREG_CONFIG2_pll_rx_vco_buf_vreg_sel1_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_lpf_c2c3_sel_fastacq : 2;
        unsigned short pll_rx_lpf_res3_sel_fastacq : 1;
        unsigned short pll_rx_lpf_res2_sel_fastacq : 1;
        unsigned short pll_rx_lpf_c1_sel_fastacq : 2;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_lpf_res1_sel_fastacq : 1;
        unsigned short reserved_1 : 4;
        unsigned short pll_rx_pfd_xor_en : 2;
        unsigned short reserved_2 : 1;
        unsigned short pll_rx_lpf_en : 1;
    } reg;
} RF_PLL_RX_LPF_CONFIG1_UNION;
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_c2c3_sel_fastacq_START (0)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_c2c3_sel_fastacq_END (1)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res3_sel_fastacq_START (2)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res3_sel_fastacq_END (2)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res2_sel_fastacq_START (3)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res2_sel_fastacq_END (3)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_c1_sel_fastacq_START (4)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_c1_sel_fastacq_END (5)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res1_sel_fastacq_START (7)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_res1_sel_fastacq_END (7)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_pfd_xor_en_START (12)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_pfd_xor_en_END (13)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_en_START (15)
#define RF_PLL_RX_LPF_CONFIG1_pll_rx_lpf_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_lpf_c2c3_sel_3g4g : 2;
        unsigned short pll_rx_lpf_res3_sel_3g4g : 1;
        unsigned short pll_rx_lpf_res2_sel_3g4g : 1;
        unsigned short pll_rx_lpf_c1_sel_3g4g : 2;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_lpf_res1_sel_3g4g : 1;
        unsigned short pll_rx_lpf_c2c3_sel_2g : 2;
        unsigned short pll_rx_lpf_res3_sel_2g : 1;
        unsigned short pll_rx_lpf_res2_sel_2g : 1;
        unsigned short pll_rx_lpf_c1_sel_2g : 2;
        unsigned short reserved_1 : 1;
        unsigned short pll_rx_lpf_res1_sel_2g : 1;
    } reg;
} RF_PLL_RX_LPF_CONFIG2_UNION;
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c2c3_sel_3g4g_START (0)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c2c3_sel_3g4g_END (1)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res3_sel_3g4g_START (2)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res3_sel_3g4g_END (2)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res2_sel_3g4g_START (3)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res2_sel_3g4g_END (3)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c1_sel_3g4g_START (4)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c1_sel_3g4g_END (5)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res1_sel_3g4g_START (7)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res1_sel_3g4g_END (7)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c2c3_sel_2g_START (8)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c2c3_sel_2g_END (9)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res3_sel_2g_START (10)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res3_sel_2g_END (10)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res2_sel_2g_START (11)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res2_sel_2g_END (11)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c1_sel_2g_START (12)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_c1_sel_2g_END (13)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res1_sel_2g_START (15)
#define RF_PLL_RX_LPF_CONFIG2_pll_rx_lpf_res1_sel_2g_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_vtdac_val_def : 5;
        unsigned short reserved : 1;
        unsigned short pll_rx_vtdac_override : 1;
        unsigned short pll_rx_vtdac_offset_en : 1;
        unsigned short pll_rx_vtdac_offset_en_dftune : 1;
        unsigned short pll_rx_vtdac_offset_en_kvcal : 1;
        unsigned short pll_rx_vtdac_ptat_en : 2;
        unsigned short pll_rx_vtdac_dftune_en : 2;
        unsigned short pll_rx_vtdac_en : 2;
    } reg;
} RF_PLL_RX_VTDAC_CTRL_UNION;
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_val_def_START (0)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_val_def_END (4)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_override_START (6)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_override_END (6)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_START (7)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_END (7)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_dftune_START (8)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_dftune_END (8)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_kvcal_START (9)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_offset_en_kvcal_END (9)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_ptat_en_START (10)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_ptat_en_END (11)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_dftune_en_START (12)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_dftune_en_END (13)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_en_START (14)
#define RF_PLL_RX_VTDAC_CTRL_pll_rx_vtdac_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_dftune_vtune2_2g : 5;
        unsigned short reserved_0 : 3;
        unsigned short pll_rx_dftune_vtune1_2g : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_RX_VTDAC_2G_UNION;
#define RF_PLL_RX_VTDAC_2G_pll_rx_dftune_vtune2_2g_START (0)
#define RF_PLL_RX_VTDAC_2G_pll_rx_dftune_vtune2_2g_END (4)
#define RF_PLL_RX_VTDAC_2G_pll_rx_dftune_vtune1_2g_START (8)
#define RF_PLL_RX_VTDAC_2G_pll_rx_dftune_vtune1_2g_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_dftune_vtune2_3g4g : 5;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_vtdac_ptat_slope_sel2 : 2;
        unsigned short pll_rx_dftune_vtune1_3g4g : 5;
        unsigned short reserved_1 : 1;
        unsigned short pll_rx_vtdac_ptat_slope_sel1 : 2;
    } reg;
} RF_PLL_RX_VTDAC_3G4G_UNION;
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_dftune_vtune2_3g4g_START (0)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_dftune_vtune2_3g4g_END (4)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_vtdac_ptat_slope_sel2_START (6)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_vtdac_ptat_slope_sel2_END (7)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_dftune_vtune1_3g4g_START (8)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_dftune_vtune1_3g4g_END (12)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_vtdac_ptat_slope_sel1_START (14)
#define RF_PLL_RX_VTDAC_3G4G_pll_rx_vtdac_ptat_slope_sel1_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_tvreg : 7;
        unsigned short reserved : 1;
        unsigned short pll_rx_tvtdac : 4;
        unsigned short pll_rx_dftune_tinit : 4;
    } reg;
} RF_PLL_RX_WAIT_TIME1_UNION;
#define RF_PLL_RX_WAIT_TIME1_pll_rx_tvreg_START (0)
#define RF_PLL_RX_WAIT_TIME1_pll_rx_tvreg_END (6)
#define RF_PLL_RX_WAIT_TIME1_pll_rx_tvtdac_START (8)
#define RF_PLL_RX_WAIT_TIME1_pll_rx_tvtdac_END (11)
#define RF_PLL_RX_WAIT_TIME1_pll_rx_dftune_tinit_START (12)
#define RF_PLL_RX_WAIT_TIME1_pll_rx_dftune_tinit_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_tsettle : 4;
        unsigned short pll_rx_tvco : 4;
        unsigned short pll_rx_tfastacq_3g4g : 4;
        unsigned short pll_rx_tfastacq_2g : 4;
    } reg;
} RF_PLL_RX_WAIT_TIME2_UNION;
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tsettle_START (0)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tsettle_END (3)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tvco_START (4)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tvco_END (7)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tfastacq_3g4g_START (8)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tfastacq_3g4g_END (11)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tfastacq_2g_START (12)
#define RF_PLL_RX_WAIT_TIME2_pll_rx_tfastacq_2g_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_dftune_m2 : 4;
        unsigned short pll_rx_dftune_m1last : 4;
        unsigned short pll_rx_dftune_m1 : 4;
        unsigned short pll_rx_dftune_ft_min_err_en : 1;
        unsigned short pll_rx_dftune_fine_adj_en : 1;
        unsigned short pll_rx_dftune_coarse_adj_en : 1;
        unsigned short pll_rx_dftune_en : 1;
    } reg;
} RF_PLL_RX_DFTUNE_CTRL1_UNION;
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m2_START (0)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m2_END (3)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m1last_START (4)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m1last_END (7)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m1_START (8)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_m1_END (11)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_ft_min_err_en_START (12)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_ft_min_err_en_END (12)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_fine_adj_en_START (13)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_fine_adj_en_END (13)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_coarse_adj_en_START (14)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_coarse_adj_en_END (14)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_en_START (15)
#define RF_PLL_RX_DFTUNE_CTRL1_pll_rx_dftune_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_dftune_ptat_mode : 2;
        unsigned short reserved_0 : 2;
        unsigned short pll_rx_dftune_ms : 2;
        unsigned short reserved_1 : 2;
        unsigned short pll_rx_dftune_ct_fine_setpoint : 5;
        unsigned short reserved_2 : 3;
    } reg;
} RF_PLL_RX_DFTUNE_CTRL2_UNION;
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ptat_mode_START (0)
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ptat_mode_END (1)
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ms_START (4)
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ms_END (5)
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ct_fine_setpoint_START (8)
#define RF_PLL_RX_DFTUNE_CTRL2_pll_rx_dftune_ct_fine_setpoint_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_dftune_val : 10;
        unsigned short reserved : 6;
    } reg;
} RF_PLL_RX_DFTUNE_CTRL3_UNION;
#define RF_PLL_RX_DFTUNE_CTRL3_pll_rx_dftune_val_START (0)
#define RF_PLL_RX_DFTUNE_CTRL3_pll_rx_dftune_val_END (9)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_kvcal_bw_2g : 9;
        unsigned short reserved : 3;
        unsigned short pll_rx_kvcal_accum_size : 2;
        unsigned short pll_rx_kvcal_offset : 2;
    } reg;
} RF_PLL_RX_KVCAL_CTRL1_UNION;
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_bw_2g_START (0)
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_bw_2g_END (8)
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_accum_size_START (12)
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_accum_size_END (13)
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_offset_START (14)
#define RF_PLL_RX_KVCAL_CTRL1_pll_rx_kvcal_offset_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_kvcal_bw_3g4g : 9;
        unsigned short reserved : 3;
        unsigned short pll_rx_kvcal_vtune_delV : 4;
    } reg;
} RF_PLL_RX_KVCAL_CTRL2_UNION;
#define RF_PLL_RX_KVCAL_CTRL2_pll_rx_kvcal_bw_3g4g_START (0)
#define RF_PLL_RX_KVCAL_CTRL2_pll_rx_kvcal_bw_3g4g_END (8)
#define RF_PLL_RX_KVCAL_CTRL2_pll_rx_kvcal_vtune_delV_START (12)
#define RF_PLL_RX_KVCAL_CTRL2_pll_rx_kvcal_vtune_delV_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_kvcal_vco2_def : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_kvcal_vco1_def : 4;
        unsigned short pll_rx_kvcal_ct : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_RX_KVCAL_CTRL3_UNION;
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_vco2_def_START (0)
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_vco2_def_END (2)
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_vco1_def_START (4)
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_vco1_def_END (7)
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_ct_START (8)
#define RF_PLL_RX_KVCAL_CTRL3_pll_rx_kvcal_ct_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_rccal_val : 4;
        unsigned short reserved_0 : 3;
        unsigned short pll_rx_rccal_bypass : 1;
        unsigned short pll_rx_rext_val : 5;
        unsigned short reserved_1 : 2;
        unsigned short pll_rx_rext_bypass : 1;
    } reg;
} RF_PLL_RX_CAL_OVERRIDE_UNION;
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rccal_val_START (0)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rccal_val_END (3)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rccal_bypass_START (7)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rccal_bypass_END (7)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rext_val_START (8)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rext_val_END (12)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rext_bypass_START (15)
#define RF_PLL_RX_CAL_OVERRIDE_pll_rx_rext_bypass_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_xordiv2_phase_state : 1;
        unsigned short pll_rx_xordiv2_phase_en : 1;
        unsigned short reserved_0 : 2;
        unsigned short reserved_1 : 12;
    } reg;
} RF_PLL_RX_ALIGN_CTRL_UNION;
#define RF_PLL_RX_ALIGN_CTRL_pll_rx_xordiv2_phase_state_START (0)
#define RF_PLL_RX_ALIGN_CTRL_pll_rx_xordiv2_phase_state_END (0)
#define RF_PLL_RX_ALIGN_CTRL_pll_rx_xordiv2_phase_en_START (1)
#define RF_PLL_RX_ALIGN_CTRL_pll_rx_xordiv2_phase_en_END (1)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_fdet_ofs : 5;
        unsigned short reserved : 7;
        unsigned short pll_rx_fdet_rst : 2;
        unsigned short pll_rx_fdet_en : 2;
    } reg;
} RF_PLL_RX_FDET_CTRL_UNION;
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_ofs_START (0)
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_ofs_END (4)
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_rst_START (12)
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_rst_END (13)
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_en_START (14)
#define RF_PLL_RX_FDET_CTRL_pll_rx_fdet_en_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_vco_current_sel2_alt : 3;
        unsigned short reserved_0 : 1;
        unsigned short pll_rx_vco_current_sel1_alt : 3;
        unsigned short reserved_1 : 1;
        unsigned short pll_rx_vco_buf_vreg_sel2_alt : 3;
        unsigned short reserved_2 : 1;
        unsigned short pll_rx_vco_buf_vreg_sel1_alt : 3;
        unsigned short reserved_3 : 1;
    } reg;
} RF_PLL_RX_VREG_CONFIG3_UNION;
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_current_sel2_alt_START (0)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_current_sel2_alt_END (2)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_current_sel1_alt_START (4)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_current_sel1_alt_END (6)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_buf_vreg_sel2_alt_START (8)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_buf_vreg_sel2_alt_END (10)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_buf_vreg_sel1_alt_START (12)
#define RF_PLL_RX_VREG_CONFIG3_pll_rx_vco_buf_vreg_sel1_alt_END (14)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_kvcal_bw_alt : 9;
        unsigned short reserved : 7;
    } reg;
} RF_PLL_RX_KVCAL_CTRL4_UNION;
#define RF_PLL_RX_KVCAL_CTRL4_pll_rx_kvcal_bw_alt_START (0)
#define RF_PLL_RX_KVCAL_CTRL4_pll_rx_kvcal_bw_alt_END (8)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_fdet_bist_count : 4;
        unsigned short pll_rx_fdet_bist_trigger : 1;
        unsigned short reserved_0 : 3;
        unsigned short pll_rx_vco_vref_sel : 2;
        unsigned short reserved_1 : 2;
        unsigned short pll_rx_vco_open_loop_test_en : 1;
        unsigned short reserved_2 : 3;
    } reg;
} RF_PLL_RX_BIST_UNION;
#define RF_PLL_RX_BIST_pll_rx_fdet_bist_count_START (0)
#define RF_PLL_RX_BIST_pll_rx_fdet_bist_count_END (3)
#define RF_PLL_RX_BIST_pll_rx_fdet_bist_trigger_START (4)
#define RF_PLL_RX_BIST_pll_rx_fdet_bist_trigger_END (4)
#define RF_PLL_RX_BIST_pll_rx_vco_vref_sel_START (8)
#define RF_PLL_RX_BIST_pll_rx_vco_vref_sel_END (9)
#define RF_PLL_RX_BIST_pll_rx_vco_open_loop_test_en_START (12)
#define RF_PLL_RX_BIST_pll_rx_vco_open_loop_test_en_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_tmux_sel : 4;
        unsigned short pll_rx_test_en : 1;
        unsigned short reserved : 3;
        unsigned short pll_rx_vco_tmux_sel : 3;
        unsigned short pll_rx_vco_test_en : 1;
        unsigned short pll_rx_dig_testmux_sel : 4;
    } reg;
} RF_PLL_RX_TEST_1_UNION;
#define RF_PLL_RX_TEST_1_pll_rx_tmux_sel_START (0)
#define RF_PLL_RX_TEST_1_pll_rx_tmux_sel_END (3)
#define RF_PLL_RX_TEST_1_pll_rx_test_en_START (4)
#define RF_PLL_RX_TEST_1_pll_rx_test_en_END (4)
#define RF_PLL_RX_TEST_1_pll_rx_vco_tmux_sel_START (8)
#define RF_PLL_RX_TEST_1_pll_rx_vco_tmux_sel_END (10)
#define RF_PLL_RX_TEST_1_pll_rx_vco_test_en_START (11)
#define RF_PLL_RX_TEST_1_pll_rx_vco_test_en_END (11)
#define RF_PLL_RX_TEST_1_pll_rx_dig_testmux_sel_START (12)
#define RF_PLL_RX_TEST_1_pll_rx_dig_testmux_sel_END (15)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_rsm_stop_state : 5;
        unsigned short reserved_0 : 2;
        unsigned short pll_rx_rsm_stop_en : 1;
        unsigned short pll_rx_rsm_trig_state : 5;
        unsigned short reserved_1 : 3;
    } reg;
} RF_PLL_RX_TEST_2_UNION;
#define RF_PLL_RX_TEST_2_pll_rx_rsm_stop_state_START (0)
#define RF_PLL_RX_TEST_2_pll_rx_rsm_stop_state_END (4)
#define RF_PLL_RX_TEST_2_pll_rx_rsm_stop_en_START (7)
#define RF_PLL_RX_TEST_2_pll_rx_rsm_stop_en_END (7)
#define RF_PLL_RX_TEST_2_pll_rx_rsm_trig_state_START (8)
#define RF_PLL_RX_TEST_2_pll_rx_rsm_trig_state_END (12)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_fdet_count : 2;
        unsigned short reserved : 14;
    } reg;
} RF_PLL_RX_FDET_COUNT_MSB_RD_UNION;
#define RF_PLL_RX_FDET_COUNT_MSB_RD_pll_rx_fdet_count_START (0)
#define RF_PLL_RX_FDET_COUNT_MSB_RD_pll_rx_fdet_count_END (1)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_kvcal_vco2_val : 4;
        unsigned short pll_rx_kvcal_vco1_val : 4;
        unsigned short pll_rx_kvcal_div_by_0_d : 1;
        unsigned short pll_rx_kvcal_div_by_0_b : 1;
        unsigned short pll_rx_kvcal_div_by_0_a : 1;
        unsigned short reserved : 5;
    } reg;
} RF_PLL_RX_KVCAL_STATUS_RD_UNION;
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_vco2_val_START (0)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_vco2_val_END (3)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_vco1_val_START (4)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_vco1_val_END (7)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_d_START (8)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_d_END (8)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_b_START (9)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_b_END (9)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_a_START (10)
#define RF_PLL_RX_KVCAL_STATUS_RD_pll_rx_kvcal_div_by_0_a_END (10)
typedef union
{
    unsigned short uhwValue;
    struct
    {
        unsigned short pll_rx_rsm_state : 5;
        unsigned short reserved : 10;
        unsigned short pll_rx_unlock_event : 1;
    } reg;
} RF_PLL_RX_RSM_STATE_RD_UNION;
#define RF_PLL_RX_RSM_STATE_RD_pll_rx_rsm_state_START (0)
#define RF_PLL_RX_RSM_STATE_RD_pll_rx_rsm_state_END (4)
#define RF_PLL_RX_RSM_STATE_RD_pll_rx_unlock_event_START (15)
#define RF_PLL_RX_RSM_STATE_RD_pll_rx_unlock_event_END (15)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
