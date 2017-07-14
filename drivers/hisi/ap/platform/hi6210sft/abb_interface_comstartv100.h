#ifndef __PHY_ABB_INTERFACE_H__
#define __PHY_ABB_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define ABB_BASE_ADDR ( 0x0000 )
#define ABB_RX_2G_DIG_1_ADDR (ABB_BASE_ADDR + 0x0)
#define ABB_RX_2G_DIG_2_ADDR (ABB_BASE_ADDR + 0x1)
#define ABB_TX_2G_DIG_1_ADDR (ABB_BASE_ADDR + 0x2)
#define ABB_TX_2G_DIG_2_ADDR (ABB_BASE_ADDR + 0x3)
#define ABB_TX_2G_DIG_3_ADDR (ABB_BASE_ADDR + 0x4)
#define ABB_RX_CH0_3G_DIG_1_ADDR (ABB_BASE_ADDR + 0x5)
#define ABB_RX_CH0_3G_DIG_2_ADDR (ABB_BASE_ADDR + 0x6)
#define ABB_TX_CH0_3G_DIG_1_ADDR (ABB_BASE_ADDR + 0x7)
#define ABB_TX_CH0_3G_DIG_2_ADDR (ABB_BASE_ADDR + 0x8)
#define ABB_TX_CH0_3G_DIG_3_ADDR (ABB_BASE_ADDR + 0x9)
#define ABB_RX_CH0_4G_DIG_1_ADDR (ABB_BASE_ADDR + 0xA)
#define ABB_RX_CH0_4G_DIG_2_ADDR (ABB_BASE_ADDR + 0xB)
#define ABB_TX_CH0_4G_DIG_1_ADDR (ABB_BASE_ADDR + 0xC)
#define ABB_TX_CH0_4G_DIG_2_ADDR (ABB_BASE_ADDR + 0xD)
#define ABB_TX_CH0_4G_DIG_3_ADDR (ABB_BASE_ADDR + 0xE)
#define ABB_RX_TDS_DIG_1_ADDR (ABB_BASE_ADDR + 0xF)
#define ABB_RX_TDS_DIG_2_ADDR (ABB_BASE_ADDR + 0x10)
#define ABB_TX_TDS_DIG_1_ADDR (ABB_BASE_ADDR + 0x11)
#define ABB_TX_TDS_DIG_2_ADDR (ABB_BASE_ADDR + 0x12)
#define ABB_TX_TDS_DIG_3_ADDR (ABB_BASE_ADDR + 0x13)
#define ABB_RX_IDLE_DIG_1_ADDR (ABB_BASE_ADDR + 0x1F)
#define ABB_RX_IDLE_DIG_2_ADDR (ABB_BASE_ADDR + 0x20)
#define ABB_TX_IDLE_DIG_1_ADDR (ABB_BASE_ADDR + 0x21)
#define ABB_TX_IDLE_DIG_2_ADDR (ABB_BASE_ADDR + 0x22)
#define ABB_TX_IDLE_DIG_3_ADDR (ABB_BASE_ADDR + 0x23)
#define ABB_RX_2G_ANA_1_ADDR (ABB_BASE_ADDR + 0x24)
#define ABB_RX_2G_ANA_2_ADDR (ABB_BASE_ADDR + 0x25)
#define ABB_TX_2G_ANA_1_ADDR (ABB_BASE_ADDR + 0x26)
#define ABB_TX_2G_ANA_2_ADDR (ABB_BASE_ADDR + 0x27)
#define ABB_RX_CH0_3G_ANA_1_ADDR (ABB_BASE_ADDR + 0x28)
#define ABB_RX_CH0_3G_ANA_2_ADDR (ABB_BASE_ADDR + 0x29)
#define ABB_TX_CH0_3G_ANA_1_ADDR (ABB_BASE_ADDR + 0x2A)
#define ABB_TX_CH0_3G_ANA_2_ADDR (ABB_BASE_ADDR + 0x2B)
#define ABB_RX_CH0_4G_ANA_1_ADDR (ABB_BASE_ADDR + 0x2C)
#define ABB_RX_CH0_4G_ANA_2_ADDR (ABB_BASE_ADDR + 0x2D)
#define ABB_TX_CH0_4G_ANA_1_ADDR (ABB_BASE_ADDR + 0x2E)
#define ABB_TX_CH0_4G_ANA_2_ADDR (ABB_BASE_ADDR + 0x2F)
#define ABB_RX_TDS_ANA_1_ADDR (ABB_BASE_ADDR + 0x30)
#define ABB_RX_TDS_ANA_2_ADDR (ABB_BASE_ADDR + 0x31)
#define ABB_TX_TDS_ANA_1_ADDR (ABB_BASE_ADDR + 0x32)
#define ABB_TX_TDS_ANA_2_ADDR (ABB_BASE_ADDR + 0x33)
#define ABB_RX_IDLE_ANA_1_ADDR (ABB_BASE_ADDR + 0x3C)
#define ABB_RX_IDLE_ANA_2_ADDR (ABB_BASE_ADDR + 0x3D)
#define ABB_TX_IDLE_ANA_1_ADDR (ABB_BASE_ADDR + 0x3E)
#define ABB_TX_IDLE_ANA_2_ADDR (ABB_BASE_ADDR + 0x3F)
#define ABB_CH1_TESTMODE_ADDR (ABB_BASE_ADDR + 0x41)
#define ABB_CH0_VERSION_ADDR (ABB_BASE_ADDR + 0xA0)
#define ABB_CH0_TESTMODE_ADDR (ABB_BASE_ADDR + 0xA1)
#define ABB_CH0_CTRL_ADDR (ABB_BASE_ADDR + 0xA2)
#define ABB_CH0_CFR_CTRL_ADDR (ABB_BASE_ADDR + 0xA3)
#define ABB_CH0_TX_I_OFFSET_ADDR (ABB_BASE_ADDR + 0xA8)
#define ABB_CH0_TX_Q_OFFSET_ADDR (ABB_BASE_ADDR + 0xA9)
#define ABB_CH0_RXA_I_COEF0_ADDR (ABB_BASE_ADDR + 0xAA)
#define ABB_CH0_RXA_I_COEF1_ADDR (ABB_BASE_ADDR + 0xAB)
#define ABB_CH0_RXA_I_COEF2_ADDR (ABB_BASE_ADDR + 0xAC)
#define ABB_CH0_RXA_I_COEF3_ADDR (ABB_BASE_ADDR + 0xAD)
#define ABB_CH0_RXA_I_COEF4_ADDR (ABB_BASE_ADDR + 0xAE)
#define ABB_CH0_RXA_Q_COEF0_ADDR (ABB_BASE_ADDR + 0xAF)
#define ABB_CH0_RXA_Q_COEF1_ADDR (ABB_BASE_ADDR + 0xB0)
#define ABB_CH0_RXA_Q_COEF2_ADDR (ABB_BASE_ADDR + 0xB1)
#define ABB_CH0_RXA_Q_COEF3_ADDR (ABB_BASE_ADDR + 0xB2)
#define ABB_CH0_RXA_Q_COEF4_ADDR (ABB_BASE_ADDR + 0xB3)
#define ABB_CH0_RXB_I_COEF0_ADDR (ABB_BASE_ADDR + 0xB4)
#define ABB_CH0_RXB_I_COEF1_ADDR (ABB_BASE_ADDR + 0xB5)
#define ABB_CH0_RXB_I_COEF2_ADDR (ABB_BASE_ADDR + 0xB6)
#define ABB_CH0_RXB_I_COEF3_ADDR (ABB_BASE_ADDR + 0xB7)
#define ABB_CH0_RXB_I_COEF4_ADDR (ABB_BASE_ADDR + 0xB8)
#define ABB_CH0_RXB_Q_COEF0_ADDR (ABB_BASE_ADDR + 0xB9)
#define ABB_CH0_RXB_Q_COEF1_ADDR (ABB_BASE_ADDR + 0xBA)
#define ABB_CH0_RXB_Q_COEF2_ADDR (ABB_BASE_ADDR + 0xBB)
#define ABB_CH0_RXB_Q_COEF3_ADDR (ABB_BASE_ADDR + 0xBC)
#define ABB_CH0_RXB_Q_COEF4_ADDR (ABB_BASE_ADDR + 0xBD)
#define ABB_CH0_REG_RXA_DCR_CFG_ADDR (ABB_BASE_ADDR + 0xBE)
#define ABB_CH0_REG_RXB_DCR_CFG_ADDR (ABB_BASE_ADDR + 0xBF)
#define ABB_CH0_REG_RX_DCR_CTRL_ADDR (ABB_BASE_ADDR + 0xC0)
#define ABB_CH0_RXA_BLOCKING_ADDR (ABB_BASE_ADDR + 0xC1)
#define ABB_CH0_RXB_BLOCKING_ADDR (ABB_BASE_ADDR + 0xC2)
#define ABB_CH0_REG_RXA_DC_I_1_ADDR (ABB_BASE_ADDR + 0xC3)
#define ABB_CH0_REG_RXA_DC_I_2_ADDR (ABB_BASE_ADDR + 0xC4)
#define ABB_CH0_REG_RXA_DC_Q_1_ADDR (ABB_BASE_ADDR + 0xC5)
#define ABB_CH0_REG_RXA_DC_Q_2_ADDR (ABB_BASE_ADDR + 0xC6)
#define ABB_CH0_REG_RXB_DC_I_1_ADDR (ABB_BASE_ADDR + 0xC7)
#define ABB_CH0_REG_RXB_DC_I_2_ADDR (ABB_BASE_ADDR + 0xC8)
#define ABB_CH0_REG_RXB_DC_Q_1_ADDR (ABB_BASE_ADDR + 0xC9)
#define ABB_CH0_REG_RXB_DC_Q_2_ADDR (ABB_BASE_ADDR + 0xCA)
#define ABB_CH0_REG_DEBUG_DIG0_ADDR (ABB_BASE_ADDR + 0xCB)
#define ABB_CH0_REG_DEBUG_DIG1_ADDR (ABB_BASE_ADDR + 0xCC)
#define ABB_CH0_REG_DEBUG_DIG2_ADDR (ABB_BASE_ADDR + 0xCD)
#define ABB_CH0_REG_DEBUG_DIG3_ADDR (ABB_BASE_ADDR + 0xCE)
#define ABB_CH0_REG_DEBUG_DIG4_ADDR (ABB_BASE_ADDR + 0xCF)
#define ABB_CH0_REG_ANALOG_WR02_ADDR (ABB_BASE_ADDR + 0xD0)
#define ABB_CH0_REG_ANALOG_WR03_ADDR (ABB_BASE_ADDR + 0xD1)
#define ABB_CH0_REG_ANALOG_WR04_ADDR (ABB_BASE_ADDR + 0xD2)
#define ABB_CH0_REG_ANALOG_WR05_ADDR (ABB_BASE_ADDR + 0xD3)
#define ABB_CH0_REG_ANALOG_WR06_ADDR (ABB_BASE_ADDR + 0xD4)
#define ABB_CH0_REG_ANALOG_WR07_ADDR (ABB_BASE_ADDR + 0xD5)
#define ABB_CH0_REG_ANALOG_WR08_ADDR (ABB_BASE_ADDR + 0xD6)
#define ABB_CH0_REG_ANALOG_WR09_ADDR (ABB_BASE_ADDR + 0xD7)
#define ABB_CH0_REG_ANALOG_WR10_ADDR (ABB_BASE_ADDR + 0xD8)
#define ABB_CH0_REG_ANALOG_WR38_ADDR (ABB_BASE_ADDR + 0xD9)
#define ABB_CH0_REG_ANALOG_WR39_ADDR (ABB_BASE_ADDR + 0xDA)
#define ABB_CH0_REG_ANALOG_RO0_ADDR (ABB_BASE_ADDR + 0xDB)
#define ABB_CH0_REG_ANALOG_RO1_ADDR (ABB_BASE_ADDR + 0xDC)
#define ABB_CH0_REG_ANALOG_RO2_ADDR (ABB_BASE_ADDR + 0xDD)
#define ABB_CH0_REG_ANALOG_RO3_ADDR (ABB_BASE_ADDR + 0xDE)
#define ABB_CH0_REG_ANALOG_RO4_ADDR (ABB_BASE_ADDR + 0xDF)
#define ABB_CH0_REG_DEBUG_ANA0_ADDR (ABB_BASE_ADDR + 0xE0)
#define ABB_CH0_REG_DEBUG_ANA1_ADDR (ABB_BASE_ADDR + 0xE1)
#define ABB_CH0_REG_DEBUG_ANA2_ADDR (ABB_BASE_ADDR + 0xE2)
#define ABB_CH0_REG_DEBUG_ANA3_ADDR (ABB_BASE_ADDR + 0xE3)
#define ABB_CH0_REG_DEBUG_ANA4_ADDR (ABB_BASE_ADDR + 0xE4)
#define ABB_CH0_REG_DEBUG_ANA5_ADDR (ABB_BASE_ADDR + 0xE5)
#define ABB_CH0_REG_DEBUG_ANA6_ADDR (ABB_BASE_ADDR + 0xE6)
#define ABB_CH0_REG_DEBUG_ANA7_ADDR (ABB_BASE_ADDR + 0xE7)
#define ABB_CH0_REG_DEBUG_ANA8_ADDR (ABB_BASE_ADDR + 0xE8)
#define ABB_CH0_REG_DEBUG_ANA9_ADDR (ABB_BASE_ADDR + 0xE9)
#define ABB_CH0_REG_DEBUG_ANA10_ADDR (ABB_BASE_ADDR + 0xEA)
#define ABB_CH0_REG_DEBUG_ANA11_ADDR (ABB_BASE_ADDR + 0xEB)
#define ABB_CH0_REG_DEBUG_ANA12_ADDR (ABB_BASE_ADDR + 0xEC)
#define ABB_CH0_REG_DEBUG_ANA13_ADDR (ABB_BASE_ADDR + 0xED)
#define ABB_CH0_REG_DEBUG_ANA14_ADDR (ABB_BASE_ADDR + 0xEE)
#define ABB_CH0_REG_DEBUG_ANA15_ADDR (ABB_BASE_ADDR + 0xEF)
#define ABB_CH0_REG_DEBUG_ANA16_ADDR (ABB_BASE_ADDR + 0xF0)
#define ABB_CH0_REG_DEBUG_ANA17_ADDR (ABB_BASE_ADDR + 0xF1)
#define ABB_CH0_REG_DEBUG_ANA18_ADDR (ABB_BASE_ADDR + 0xF2)
#define ABB_CH0_REG_DEBUG_ANA19_ADDR (ABB_BASE_ADDR + 0xF3)
#define ABB_CH0_REG_DEBUG_ANA20_ADDR (ABB_BASE_ADDR + 0xF4)
#define ABB_CH0_REG_DEBUG_ANA21_ADDR (ABB_BASE_ADDR + 0xF5)
#define ABB_CH0_REG_DEBUG_ANA22_ADDR (ABB_BASE_ADDR + 0xF6)
#define ABB_CH0_REG_DEBUG_ANA23_ADDR (ABB_BASE_ADDR + 0xF7)
#define ABB_CH0_REG_DEBUG_ANA24_ADDR (ABB_BASE_ADDR + 0xF8)
#define ABB_CH0_REG_DEBUG_ANA25_ADDR (ABB_BASE_ADDR + 0xF9)
#define ABB_CH0_REG_DEBUG_ANA26_ADDR (ABB_BASE_ADDR + 0xFA)
#define ABB_CH0_REG_DEBUG_ARO0_ADDR (ABB_BASE_ADDR + 0xFB)
#define ABB_SINE_GENERATE_ADDR (ABB_BASE_ADDR + 0xFF)
#define ABB_TX_2G_ANA_3_ADDR (ABB_BASE_ADDR + 0x100)
#define ABB_TX_2G_ANA_4_ADDR (ABB_BASE_ADDR + 0x101)
#define ABB_TX_2G_ANA_5_ADDR (ABB_BASE_ADDR + 0x102)
#define ABB_RX_2G_ANA_3_ADDR (ABB_BASE_ADDR + 0x103)
#define ABB_RX_2G_ANA_4_ADDR (ABB_BASE_ADDR + 0x104)
#define ABB_RX_2G_ANA_5_ADDR (ABB_BASE_ADDR + 0x105)
#define ABB_TX_CH0_3G_ANA_3_ADDR (ABB_BASE_ADDR + 0x106)
#define ABB_TX_CH0_3G_ANA_4_ADDR (ABB_BASE_ADDR + 0x107)
#define ABB_TX_CH0_3G_ANA_5_ADDR (ABB_BASE_ADDR + 0x108)
#define ABB_RX_CH0_3G_ANA_3_ADDR (ABB_BASE_ADDR + 0x109)
#define ABB_RX_CH0_3G_ANA_4_ADDR (ABB_BASE_ADDR + 0x10A)
#define ABB_RX_CH0_3G_ANA_5_ADDR (ABB_BASE_ADDR + 0x10B)
#define ABB_TX_CH0_4G_ANA_3_ADDR (ABB_BASE_ADDR + 0x10C)
#define ABB_TX_CH0_4G_ANA_4_ADDR (ABB_BASE_ADDR + 0x10D)
#define ABB_TX_CH0_4G_ANA_5_ADDR (ABB_BASE_ADDR + 0x10E)
#define ABB_RX_CH0_4G_ANA_3_ADDR (ABB_BASE_ADDR + 0x10F)
#define ABB_RX_CH0_4G_ANA_4_ADDR (ABB_BASE_ADDR + 0x110)
#define ABB_RX_CH0_4G_ANA_5_ADDR (ABB_BASE_ADDR + 0x111)
#define ABB_TX_TDS_ANA_3_ADDR (ABB_BASE_ADDR + 0x112)
#define ABB_TX_TDS_ANA_4_ADDR (ABB_BASE_ADDR + 0x113)
#define ABB_TX_TDS_ANA_5_ADDR (ABB_BASE_ADDR + 0x114)
#define ABB_RX_TDS_ANA_3_ADDR (ABB_BASE_ADDR + 0x115)
#define ABB_RX_TDS_ANA_4_ADDR (ABB_BASE_ADDR + 0x116)
#define ABB_RX_TDS_ANA_5_ADDR (ABB_BASE_ADDR + 0x117)
#define ABB_TX_IDLE_ANA_3_ADDR (ABB_BASE_ADDR + 0x12A)
#define ABB_TX_IDLE_ANA_4_ADDR (ABB_BASE_ADDR + 0x12B)
#define ABB_TX_IDLE_ANA_5_ADDR (ABB_BASE_ADDR + 0x12C)
#define ABB_RX_IDLE_ANA_3_ADDR (ABB_BASE_ADDR + 0x12D)
#define ABB_RX_IDLE_ANA_4_ADDR (ABB_BASE_ADDR + 0x12E)
#define ABB_RX_IDLE_ANA_5_ADDR (ABB_BASE_ADDR + 0x12F)
#define ABB_CH0_REG_DEBUG_ANA27_ADDR (ABB_BASE_ADDR + 0x140)
#define ABB_CH0_REG_DEBUG_ANA28_ADDR (ABB_BASE_ADDR + 0x141)
#define ABB_CH0_REG_DEBUG_ANA29_ADDR (ABB_BASE_ADDR + 0x142)
#define ABB_CH0_REG_DEBUG_ANA30_ADDR (ABB_BASE_ADDR + 0x143)
#define ABB_CH0_REG_DEBUG_ANA31_ADDR (ABB_BASE_ADDR + 0x144)
#define ABB_CH0_REG_DEBUG_ANA32_ADDR (ABB_BASE_ADDR + 0x145)
#define ABB_CH0_REG_DEBUG_ANA33_ADDR (ABB_BASE_ADDR + 0x146)
#define ABB_CH0_REG_DEBUG_ANA34_ADDR (ABB_BASE_ADDR + 0x147)
#define ABB_CH0_REG_DEBUG_ANA35_ADDR (ABB_BASE_ADDR + 0x148)
#define ABB_CH0_REG_DEBUG_ANA36_ADDR (ABB_BASE_ADDR + 0x149)
#define ABB_CH0_REG_DEBUG_ANA37_ADDR (ABB_BASE_ADDR + 0x14A)
#define ABB_CH0_REG_DEBUG_ANA38_ADDR (ABB_BASE_ADDR + 0x14B)
#define ABB_CH0_REG_DEBUG_ANA39_ADDR (ABB_BASE_ADDR + 0x14C)
#define ABB_CH0_REG_DEBUG_ANA40_ADDR (ABB_BASE_ADDR + 0x14D)
#define ABB_CH0_REG_DEBUG_ANA41_ADDR (ABB_BASE_ADDR + 0x14E)
#define ABB_CH0_REG_DEBUG_ANA42_ADDR (ABB_BASE_ADDR + 0x14F)
#define ABB_RX_2G_ANA_6_ADDR (ABB_BASE_ADDR + 0x18F)
#define ABB_RX_2G_ANA_7_ADDR (ABB_BASE_ADDR + 0x190)
#define ABB_RX_2G_ANA_8_ADDR (ABB_BASE_ADDR + 0x191)
#define ABB_RX_2G_ANA_9_ADDR (ABB_BASE_ADDR + 0x192)
#define ABB_RX_2G_ANA_10_ADDR (ABB_BASE_ADDR + 0x193)
#define ABB_RX_2G_ANA_11_ADDR (ABB_BASE_ADDR + 0x194)
#define ABB_RX_3G_ANA_6_ADDR (ABB_BASE_ADDR + 0x195)
#define ABB_RX_3G_ANA_7_ADDR (ABB_BASE_ADDR + 0x196)
#define ABB_RX_3G_ANA_8_ADDR (ABB_BASE_ADDR + 0x197)
#define ABB_RX_3G_ANA_9_ADDR (ABB_BASE_ADDR + 0x198)
#define ABB_RX_3G_ANA_10_ADDR (ABB_BASE_ADDR + 0x199)
#define ABB_RX_3G_ANA_11_ADDR (ABB_BASE_ADDR + 0x19A)
#define ABB_RX_4G_ANA_6_ADDR (ABB_BASE_ADDR + 0x19B)
#define ABB_RX_4G_ANA_7_ADDR (ABB_BASE_ADDR + 0x19C)
#define ABB_RX_4G_ANA_8_ADDR (ABB_BASE_ADDR + 0x19D)
#define ABB_RX_4G_ANA_9_ADDR (ABB_BASE_ADDR + 0x19E)
#define ABB_RX_4G_ANA_10_ADDR (ABB_BASE_ADDR + 0x19F)
#define ABB_RX_4G_ANA_11_ADDR (ABB_BASE_ADDR + 0x1A0)
#define ABB_RX_TDS_ANA_6_ADDR (ABB_BASE_ADDR + 0x1A1)
#define ABB_RX_TDS_ANA_7_ADDR (ABB_BASE_ADDR + 0x1A2)
#define ABB_RX_TDS_ANA_8_ADDR (ABB_BASE_ADDR + 0x1A3)
#define ABB_RX_TDS_ANA_9_ADDR (ABB_BASE_ADDR + 0x1A4)
#define ABB_RX_TDS_ANA_10_ADDR (ABB_BASE_ADDR + 0x1A5)
#define ABB_RX_TDS_ANA_11_ADDR (ABB_BASE_ADDR + 0x1A6)
#define ABB_RX_IDLE_ANA_6_ADDR (ABB_BASE_ADDR + 0x1A7)
#define ABB_RX_IDLE_ANA_7_ADDR (ABB_BASE_ADDR + 0x1A8)
#define ABB_RX_IDLE_ANA_8_ADDR (ABB_BASE_ADDR + 0x1A9)
#define ABB_RX_IDLE_ANA_9_ADDR (ABB_BASE_ADDR + 0x1AA)
#define ABB_RX_IDLE_ANA_10_ADDR (ABB_BASE_ADDR + 0x1AB)
#define ABB_RX_IDLE_ANA_11_ADDR (ABB_BASE_ADDR + 0x1AC)
#define ABB_CH0_LINE_SEL_ADDR (ABB_BASE_ADDR + 0x1D0)
#define ABB_CH0_LINE_CFG_ADDR (ABB_BASE_ADDR + 0x1D1)
#define ABB_CH0_CLK_SEL_ADDR (ABB_BASE_ADDR + 0x1D2)
#define ABB_CH0_LINE_RPT0_ADDR (ABB_BASE_ADDR + 0x1F0)
#define ABB_CH0_LINE_RPT1_ADDR (ABB_BASE_ADDR + 0x1F1)
#define ABB_CH0_RX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1F2)
#define ABB_CH0_TX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1F3)
#define ABB_CH0_RX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1F4)
#define ABB_CH0_TX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1F5)
#define ABB_RXB_CH_SEL_ADDR (ABB_BASE_ADDR + 0x1F6)
#define ABB_CH0_TDS_RX_DLY_ADDR (ABB_BASE_ADDR + 0x200)
#define ABB_CH0_CFR_PDET_THR0_ADDR (ABB_BASE_ADDR + 0x201)
#define ABB_CH0_CFR_PDET_THR1_ADDR (ABB_BASE_ADDR + 0x202)
#define ABB_CH0_CFR_PDET_THR2_ADDR (ABB_BASE_ADDR + 0x203)
#define ABB_CH0_RXA_I_EA0_ADDR (ABB_BASE_ADDR + 0x204)
#define ABB_CH0_RXA_I_EA1_ADDR (ABB_BASE_ADDR + 0x205)
#define ABB_CH0_RXA_I_EA2_ADDR (ABB_BASE_ADDR + 0x206)
#define ABB_CH0_RXA_I_EA3_ADDR (ABB_BASE_ADDR + 0x207)
#define ABB_CH0_RXA_I_EB0_ADDR (ABB_BASE_ADDR + 0x208)
#define ABB_CH0_RXA_I_EB1_ADDR (ABB_BASE_ADDR + 0x209)
#define ABB_CH0_RXA_I_EB2_ADDR (ABB_BASE_ADDR + 0x20A)
#define ABB_CH0_RXA_I_EB3_ADDR (ABB_BASE_ADDR + 0x20B)
#define ABB_CH0_RXA_I_EB4_ADDR (ABB_BASE_ADDR + 0x20C)
#define ABB_CH0_RXA_I_EC0_ADDR (ABB_BASE_ADDR + 0x20D)
#define ABB_CH0_RXA_I_EC1_ADDR (ABB_BASE_ADDR + 0x20E)
#define ABB_CH0_RXA_I_EC2_ADDR (ABB_BASE_ADDR + 0x20F)
#define ABB_CH0_RXA_I_EC3_ADDR (ABB_BASE_ADDR + 0x210)
#define ABB_CH0_RXA_I_EC4_ADDR (ABB_BASE_ADDR + 0x211)
#define ABB_CH0_RXA_I_EC5_ADDR (ABB_BASE_ADDR + 0x212)
#define ABB_CH0_RXA_I_EC6_ADDR (ABB_BASE_ADDR + 0x213)
#define ABB_CH0_RXA_I_ED0_ADDR (ABB_BASE_ADDR + 0x214)
#define ABB_CH0_RXA_I_ED1_ADDR (ABB_BASE_ADDR + 0x215)
#define ABB_CH0_RXA_I_ED2_ADDR (ABB_BASE_ADDR + 0x216)
#define ABB_CH0_RXA_I_ED3_ADDR (ABB_BASE_ADDR + 0x217)
#define ABB_CH0_RXA_I_ED4_ADDR (ABB_BASE_ADDR + 0x218)
#define ABB_CH0_RXA_I_ED5_ADDR (ABB_BASE_ADDR + 0x219)
#define ABB_CH0_RXA_I_ED6_ADDR (ABB_BASE_ADDR + 0x21A)
#define ABB_CH0_RXA_Q_EA0_ADDR (ABB_BASE_ADDR + 0x21B)
#define ABB_CH0_RXA_Q_EA1_ADDR (ABB_BASE_ADDR + 0x21C)
#define ABB_CH0_RXA_Q_EA2_ADDR (ABB_BASE_ADDR + 0x21D)
#define ABB_CH0_RXA_Q_EA3_ADDR (ABB_BASE_ADDR + 0x21E)
#define ABB_CH0_RXA_Q_EB0_ADDR (ABB_BASE_ADDR + 0x21F)
#define ABB_CH0_RXA_Q_EB1_ADDR (ABB_BASE_ADDR + 0x220)
#define ABB_CH0_RXA_Q_EB2_ADDR (ABB_BASE_ADDR + 0x221)
#define ABB_CH0_RXA_Q_EB3_ADDR (ABB_BASE_ADDR + 0x222)
#define ABB_CH0_RXA_Q_EB4_ADDR (ABB_BASE_ADDR + 0x223)
#define ABB_CH0_RXA_Q_EC0_ADDR (ABB_BASE_ADDR + 0x224)
#define ABB_CH0_RXA_Q_EC1_ADDR (ABB_BASE_ADDR + 0x225)
#define ABB_CH0_RXA_Q_EC2_ADDR (ABB_BASE_ADDR + 0x226)
#define ABB_CH0_RXA_Q_EC3_ADDR (ABB_BASE_ADDR + 0x227)
#define ABB_CH0_RXA_Q_EC4_ADDR (ABB_BASE_ADDR + 0x228)
#define ABB_CH0_RXA_Q_EC5_ADDR (ABB_BASE_ADDR + 0x229)
#define ABB_CH0_RXA_Q_EC6_ADDR (ABB_BASE_ADDR + 0x22A)
#define ABB_CH0_RXA_Q_ED0_ADDR (ABB_BASE_ADDR + 0x22B)
#define ABB_CH0_RXA_Q_ED1_ADDR (ABB_BASE_ADDR + 0x22C)
#define ABB_CH0_RXA_Q_ED2_ADDR (ABB_BASE_ADDR + 0x22D)
#define ABB_CH0_RXA_Q_ED3_ADDR (ABB_BASE_ADDR + 0x22E)
#define ABB_CH0_RXA_Q_ED4_ADDR (ABB_BASE_ADDR + 0x22F)
#define ABB_CH0_RXA_Q_ED5_ADDR (ABB_BASE_ADDR + 0x230)
#define ABB_CH0_RXA_Q_ED6_ADDR (ABB_BASE_ADDR + 0x231)
#define ABB_CH0_FLUSH_CFG0_ADDR (ABB_BASE_ADDR + 0x232)
#define ABB_CH0_FLUSH_CFG1_ADDR (ABB_BASE_ADDR + 0x233)
#define ABB_CH0_RXB_I_EA0_ADDR (ABB_BASE_ADDR + 0x234)
#define ABB_CH0_RXB_I_EA1_ADDR (ABB_BASE_ADDR + 0x235)
#define ABB_CH0_RXB_I_EA2_ADDR (ABB_BASE_ADDR + 0x236)
#define ABB_CH0_RXB_I_EA3_ADDR (ABB_BASE_ADDR + 0x237)
#define ABB_CH0_RXB_I_EB0_ADDR (ABB_BASE_ADDR + 0x238)
#define ABB_CH0_RXB_I_EB1_ADDR (ABB_BASE_ADDR + 0x239)
#define ABB_CH0_RXB_I_EB2_ADDR (ABB_BASE_ADDR + 0x23A)
#define ABB_CH0_RXB_I_EB3_ADDR (ABB_BASE_ADDR + 0x23B)
#define ABB_CH0_RXB_I_EB4_ADDR (ABB_BASE_ADDR + 0x23C)
#define ABB_CH0_RXB_I_EC0_ADDR (ABB_BASE_ADDR + 0x23D)
#define ABB_CH0_RXB_I_EC1_ADDR (ABB_BASE_ADDR + 0x23E)
#define ABB_CH0_RXB_I_EC2_ADDR (ABB_BASE_ADDR + 0x23F)
#define ABB_CH0_RXB_I_EC3_ADDR (ABB_BASE_ADDR + 0x240)
#define ABB_CH0_RXB_I_EC4_ADDR (ABB_BASE_ADDR + 0x241)
#define ABB_CH0_RXB_I_EC5_ADDR (ABB_BASE_ADDR + 0x242)
#define ABB_CH0_RXB_I_EC6_ADDR (ABB_BASE_ADDR + 0x243)
#define ABB_CH0_RXB_I_ED0_ADDR (ABB_BASE_ADDR + 0x244)
#define ABB_CH0_RXB_I_ED1_ADDR (ABB_BASE_ADDR + 0x245)
#define ABB_CH0_RXB_I_ED2_ADDR (ABB_BASE_ADDR + 0x246)
#define ABB_CH0_RXB_I_ED3_ADDR (ABB_BASE_ADDR + 0x247)
#define ABB_CH0_RXB_I_ED4_ADDR (ABB_BASE_ADDR + 0x248)
#define ABB_CH0_RXB_I_ED5_ADDR (ABB_BASE_ADDR + 0x249)
#define ABB_CH0_RXB_I_ED6_ADDR (ABB_BASE_ADDR + 0x24A)
#define ABB_CH0_RXB_Q_EA0_ADDR (ABB_BASE_ADDR + 0x24B)
#define ABB_CH0_RXB_Q_EA1_ADDR (ABB_BASE_ADDR + 0x24C)
#define ABB_CH0_RXB_Q_EA2_ADDR (ABB_BASE_ADDR + 0x24D)
#define ABB_CH0_RXB_Q_EA3_ADDR (ABB_BASE_ADDR + 0x24E)
#define ABB_CH0_RXB_Q_EB0_ADDR (ABB_BASE_ADDR + 0x24F)
#define ABB_CH0_RXB_Q_EB1_ADDR (ABB_BASE_ADDR + 0x250)
#define ABB_CH0_RXB_Q_EB2_ADDR (ABB_BASE_ADDR + 0x251)
#define ABB_CH0_RXB_Q_EB3_ADDR (ABB_BASE_ADDR + 0x252)
#define ABB_CH0_RXB_Q_EB4_ADDR (ABB_BASE_ADDR + 0x253)
#define ABB_CH0_RXB_Q_EC0_ADDR (ABB_BASE_ADDR + 0x254)
#define ABB_CH0_RXB_Q_EC1_ADDR (ABB_BASE_ADDR + 0x255)
#define ABB_CH0_RXB_Q_EC2_ADDR (ABB_BASE_ADDR + 0x256)
#define ABB_CH0_RXB_Q_EC3_ADDR (ABB_BASE_ADDR + 0x257)
#define ABB_CH0_RXB_Q_EC4_ADDR (ABB_BASE_ADDR + 0x258)
#define ABB_CH0_RXB_Q_EC5_ADDR (ABB_BASE_ADDR + 0x259)
#define ABB_CH0_RXB_Q_EC6_ADDR (ABB_BASE_ADDR + 0x25A)
#define ABB_CH0_RXB_Q_ED0_ADDR (ABB_BASE_ADDR + 0x25B)
#define ABB_CH0_RXB_Q_ED1_ADDR (ABB_BASE_ADDR + 0x25C)
#define ABB_CH0_RXB_Q_ED2_ADDR (ABB_BASE_ADDR + 0x25D)
#define ABB_CH0_RXB_Q_ED3_ADDR (ABB_BASE_ADDR + 0x25E)
#define ABB_CH0_RXB_Q_ED4_ADDR (ABB_BASE_ADDR + 0x25F)
#define ABB_CH0_RXB_Q_ED5_ADDR (ABB_BASE_ADDR + 0x260)
#define ABB_CH0_RXB_Q_ED6_ADDR (ABB_BASE_ADDR + 0x261)
#define ABB_RX_C_DIG_1_ADDR (ABB_BASE_ADDR + 0x400)
#define ABB_RX_C_DIG_2_ADDR (ABB_BASE_ADDR + 0x401)
#define ABB_TX_C_DIG_1_ADDR (ABB_BASE_ADDR + 0x402)
#define ABB_TX_C_DIG_2_ADDR (ABB_BASE_ADDR + 0x403)
#define ABB_TX_C_DIG_3_ADDR (ABB_BASE_ADDR + 0x404)
#define ABB_RX_C_ANA_1_ADDR (ABB_BASE_ADDR + 0x405)
#define ABB_RX_C_ANA_2_ADDR (ABB_BASE_ADDR + 0x406)
#define ABB_RX_C_ANA_3_ADDR (ABB_BASE_ADDR + 0x407)
#define ABB_RX_C_ANA_4_ADDR (ABB_BASE_ADDR + 0x408)
#define ABB_RX_C_ANA_5_ADDR (ABB_BASE_ADDR + 0x409)
#define ABB_RX_C_ANA_6_ADDR (ABB_BASE_ADDR + 0x40A)
#define ABB_RX_C_ANA_7_ADDR (ABB_BASE_ADDR + 0x40B)
#define ABB_RX_C_ANA_8_ADDR (ABB_BASE_ADDR + 0x40C)
#define ABB_RX_C_ANA_9_ADDR (ABB_BASE_ADDR + 0x40D)
#define ABB_RX_C_ANA_10_ADDR (ABB_BASE_ADDR + 0x40E)
#define ABB_RX_C_ANA_11_ADDR (ABB_BASE_ADDR + 0x40F)
#define ABB_TX_C_ANA_1_ADDR (ABB_BASE_ADDR + 0x410)
#define ABB_TX_C_ANA_2_ADDR (ABB_BASE_ADDR + 0x411)
#define ABB_TX_C_ANA_3_ADDR (ABB_BASE_ADDR + 0x412)
#define ABB_TX_C_ANA_4_ADDR (ABB_BASE_ADDR + 0x413)
#define ABB_TX_C_ANA_5_ADDR (ABB_BASE_ADDR + 0x414)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_2g : 1;
        unsigned long rx_comp_fix_2g : 1;
        unsigned long rx_hb_bp_2g : 1;
        unsigned long rx_rate_2g : 2;
        unsigned long rx_mode_dig_2g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_DIG_1_UNION;
#define ABB_RX_2G_DIG_1_rx_comp_sel_b0_2g_START (0)
#define ABB_RX_2G_DIG_1_rx_comp_sel_b0_2g_END (0)
#define ABB_RX_2G_DIG_1_rx_comp_fix_2g_START (1)
#define ABB_RX_2G_DIG_1_rx_comp_fix_2g_END (1)
#define ABB_RX_2G_DIG_1_rx_hb_bp_2g_START (2)
#define ABB_RX_2G_DIG_1_rx_hb_bp_2g_END (2)
#define ABB_RX_2G_DIG_1_rx_rate_2g_START (3)
#define ABB_RX_2G_DIG_1_rx_rate_2g_END (4)
#define ABB_RX_2G_DIG_1_rx_mode_dig_2g_START (5)
#define ABB_RX_2G_DIG_1_rx_mode_dig_2g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_2g : 1;
        unsigned long rxb_pd_2g : 1;
        unsigned long gain_sel_2g : 2;
        unsigned long rx_comp_bp_2g : 1;
        unsigned long rx_clk_inv_2g : 1;
        unsigned long rx_flush_en_2g : 1;
        unsigned long rx_comp_sel_b1_2g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_DIG_2_UNION;
#define ABB_RX_2G_DIG_2_rxa_pd_2g_START (0)
#define ABB_RX_2G_DIG_2_rxa_pd_2g_END (0)
#define ABB_RX_2G_DIG_2_rxb_pd_2g_START (1)
#define ABB_RX_2G_DIG_2_rxb_pd_2g_END (1)
#define ABB_RX_2G_DIG_2_gain_sel_2g_START (2)
#define ABB_RX_2G_DIG_2_gain_sel_2g_END (3)
#define ABB_RX_2G_DIG_2_rx_comp_bp_2g_START (4)
#define ABB_RX_2G_DIG_2_rx_comp_bp_2g_END (4)
#define ABB_RX_2G_DIG_2_rx_clk_inv_2g_START (5)
#define ABB_RX_2G_DIG_2_rx_clk_inv_2g_END (5)
#define ABB_RX_2G_DIG_2_rx_flush_en_2g_START (6)
#define ABB_RX_2G_DIG_2_rx_flush_en_2g_END (6)
#define ABB_RX_2G_DIG_2_rx_comp_sel_b1_2g_START (7)
#define ABB_RX_2G_DIG_2_rx_comp_sel_b1_2g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_2g : 1;
        unsigned long tx_hb_bp_2g : 1;
        unsigned long tx_rate_2g : 3;
        unsigned long tx_mode_dig_2g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_DIG_1_UNION;
#define ABB_TX_2G_DIG_1_tx_comp_bp_2g_START (0)
#define ABB_TX_2G_DIG_1_tx_comp_bp_2g_END (0)
#define ABB_TX_2G_DIG_1_tx_hb_bp_2g_START (1)
#define ABB_TX_2G_DIG_1_tx_hb_bp_2g_END (1)
#define ABB_TX_2G_DIG_1_tx_rate_2g_START (2)
#define ABB_TX_2G_DIG_1_tx_rate_2g_END (4)
#define ABB_TX_2G_DIG_1_tx_mode_dig_2g_START (5)
#define ABB_TX_2G_DIG_1_tx_mode_dig_2g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_2g : 1;
        unsigned long tx_i_pd_2g : 1;
        unsigned long dem_const_2g : 2;
        unsigned long uddwa_dith_en_2g : 1;
        unsigned long dem_dwa_en_2g : 1;
        unsigned long dem_lsb_bp_2g : 1;
        unsigned long dem_msb_bp_2g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_DIG_2_UNION;
#define ABB_TX_2G_DIG_2_tx_q_pd_2g_START (0)
#define ABB_TX_2G_DIG_2_tx_q_pd_2g_END (0)
#define ABB_TX_2G_DIG_2_tx_i_pd_2g_START (1)
#define ABB_TX_2G_DIG_2_tx_i_pd_2g_END (1)
#define ABB_TX_2G_DIG_2_dem_const_2g_START (2)
#define ABB_TX_2G_DIG_2_dem_const_2g_END (3)
#define ABB_TX_2G_DIG_2_uddwa_dith_en_2g_START (4)
#define ABB_TX_2G_DIG_2_uddwa_dith_en_2g_END (4)
#define ABB_TX_2G_DIG_2_dem_dwa_en_2g_START (5)
#define ABB_TX_2G_DIG_2_dem_dwa_en_2g_END (5)
#define ABB_TX_2G_DIG_2_dem_lsb_bp_2g_START (6)
#define ABB_TX_2G_DIG_2_dem_lsb_bp_2g_END (6)
#define ABB_TX_2G_DIG_2_dem_msb_bp_2g_START (7)
#define ABB_TX_2G_DIG_2_dem_msb_bp_2g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_2g : 1;
        unsigned long tx_flush_en_2g : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_DIG_3_UNION;
#define ABB_TX_2G_DIG_3_tx_cfr_bp_2g_START (0)
#define ABB_TX_2G_DIG_3_tx_cfr_bp_2g_END (0)
#define ABB_TX_2G_DIG_3_tx_flush_en_2g_START (1)
#define ABB_TX_2G_DIG_3_tx_flush_en_2g_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_3g : 1;
        unsigned long rx_comp_fix_3g : 1;
        unsigned long rx_hb_bp_3g : 1;
        unsigned long rx_rate_3g : 2;
        unsigned long rx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_DIG_1_UNION;
#define ABB_RX_CH0_3G_DIG_1_rx_comp_sel_b0_3g_START (0)
#define ABB_RX_CH0_3G_DIG_1_rx_comp_sel_b0_3g_END (0)
#define ABB_RX_CH0_3G_DIG_1_rx_comp_fix_3g_START (1)
#define ABB_RX_CH0_3G_DIG_1_rx_comp_fix_3g_END (1)
#define ABB_RX_CH0_3G_DIG_1_rx_hb_bp_3g_START (2)
#define ABB_RX_CH0_3G_DIG_1_rx_hb_bp_3g_END (2)
#define ABB_RX_CH0_3G_DIG_1_rx_rate_3g_START (3)
#define ABB_RX_CH0_3G_DIG_1_rx_rate_3g_END (4)
#define ABB_RX_CH0_3G_DIG_1_rx_mode_dig_3g_START (5)
#define ABB_RX_CH0_3G_DIG_1_rx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_3g : 1;
        unsigned long rxb_pd_3g : 1;
        unsigned long gain_sel_3g : 2;
        unsigned long rx_comp_bp_3g : 1;
        unsigned long rx_clk_inv_3g : 1;
        unsigned long rx_flush_en_3g : 1;
        unsigned long rx_comp_sel_b1_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_DIG_2_UNION;
#define ABB_RX_CH0_3G_DIG_2_rxa_pd_3g_START (0)
#define ABB_RX_CH0_3G_DIG_2_rxa_pd_3g_END (0)
#define ABB_RX_CH0_3G_DIG_2_rxb_pd_3g_START (1)
#define ABB_RX_CH0_3G_DIG_2_rxb_pd_3g_END (1)
#define ABB_RX_CH0_3G_DIG_2_gain_sel_3g_START (2)
#define ABB_RX_CH0_3G_DIG_2_gain_sel_3g_END (3)
#define ABB_RX_CH0_3G_DIG_2_rx_comp_bp_3g_START (4)
#define ABB_RX_CH0_3G_DIG_2_rx_comp_bp_3g_END (4)
#define ABB_RX_CH0_3G_DIG_2_rx_clk_inv_3g_START (5)
#define ABB_RX_CH0_3G_DIG_2_rx_clk_inv_3g_END (5)
#define ABB_RX_CH0_3G_DIG_2_rx_flush_en_3g_START (6)
#define ABB_RX_CH0_3G_DIG_2_rx_flush_en_3g_END (6)
#define ABB_RX_CH0_3G_DIG_2_rx_comp_sel_b1_3g_START (7)
#define ABB_RX_CH0_3G_DIG_2_rx_comp_sel_b1_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_3g : 1;
        unsigned long tx_hb_bp_3g : 1;
        unsigned long tx_rate_3g : 3;
        unsigned long tx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_1_UNION;
#define ABB_TX_CH0_3G_DIG_1_tx_comp_bp_3g_START (0)
#define ABB_TX_CH0_3G_DIG_1_tx_comp_bp_3g_END (0)
#define ABB_TX_CH0_3G_DIG_1_tx_hb_bp_3g_START (1)
#define ABB_TX_CH0_3G_DIG_1_tx_hb_bp_3g_END (1)
#define ABB_TX_CH0_3G_DIG_1_tx_rate_3g_START (2)
#define ABB_TX_CH0_3G_DIG_1_tx_rate_3g_END (4)
#define ABB_TX_CH0_3G_DIG_1_tx_mode_dig_3g_START (5)
#define ABB_TX_CH0_3G_DIG_1_tx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_3g : 1;
        unsigned long tx_i_pd_3g : 1;
        unsigned long dem_const_3g : 2;
        unsigned long uddwa_dith_en_3g : 1;
        unsigned long dem_dwa_en_3g : 1;
        unsigned long dem_lsb_bp_3g : 1;
        unsigned long dem_msb_bp_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_2_UNION;
#define ABB_TX_CH0_3G_DIG_2_tx_q_pd_3g_START (0)
#define ABB_TX_CH0_3G_DIG_2_tx_q_pd_3g_END (0)
#define ABB_TX_CH0_3G_DIG_2_tx_i_pd_3g_START (1)
#define ABB_TX_CH0_3G_DIG_2_tx_i_pd_3g_END (1)
#define ABB_TX_CH0_3G_DIG_2_dem_const_3g_START (2)
#define ABB_TX_CH0_3G_DIG_2_dem_const_3g_END (3)
#define ABB_TX_CH0_3G_DIG_2_uddwa_dith_en_3g_START (4)
#define ABB_TX_CH0_3G_DIG_2_uddwa_dith_en_3g_END (4)
#define ABB_TX_CH0_3G_DIG_2_dem_dwa_en_3g_START (5)
#define ABB_TX_CH0_3G_DIG_2_dem_dwa_en_3g_END (5)
#define ABB_TX_CH0_3G_DIG_2_dem_lsb_bp_3g_START (6)
#define ABB_TX_CH0_3G_DIG_2_dem_lsb_bp_3g_END (6)
#define ABB_TX_CH0_3G_DIG_2_dem_msb_bp_3g_START (7)
#define ABB_TX_CH0_3G_DIG_2_dem_msb_bp_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_3g : 1;
        unsigned long tx_flush_en_3g : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_3_UNION;
#define ABB_TX_CH0_3G_DIG_3_tx_cfr_bp_3g_START (0)
#define ABB_TX_CH0_3G_DIG_3_tx_cfr_bp_3g_END (0)
#define ABB_TX_CH0_3G_DIG_3_tx_flush_en_3g_START (1)
#define ABB_TX_CH0_3G_DIG_3_tx_flush_en_3g_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_4g : 1;
        unsigned long rx_comp_fix_4g : 1;
        unsigned long rx_hb_bp_4g : 1;
        unsigned long rx_rate_4g : 2;
        unsigned long rx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_DIG_1_UNION;
#define ABB_RX_CH0_4G_DIG_1_rx_comp_sel_b0_4g_START (0)
#define ABB_RX_CH0_4G_DIG_1_rx_comp_sel_b0_4g_END (0)
#define ABB_RX_CH0_4G_DIG_1_rx_comp_fix_4g_START (1)
#define ABB_RX_CH0_4G_DIG_1_rx_comp_fix_4g_END (1)
#define ABB_RX_CH0_4G_DIG_1_rx_hb_bp_4g_START (2)
#define ABB_RX_CH0_4G_DIG_1_rx_hb_bp_4g_END (2)
#define ABB_RX_CH0_4G_DIG_1_rx_rate_4g_START (3)
#define ABB_RX_CH0_4G_DIG_1_rx_rate_4g_END (4)
#define ABB_RX_CH0_4G_DIG_1_rx_mode_dig_4g_START (5)
#define ABB_RX_CH0_4G_DIG_1_rx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_4g : 1;
        unsigned long rxb_pd_4g : 1;
        unsigned long gain_sel_4g : 2;
        unsigned long rx_comp_bp_4g : 1;
        unsigned long rx_clk_inv_4g : 1;
        unsigned long rx_flush_en_4g : 1;
        unsigned long rx_comp_sel_b1_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_DIG_2_UNION;
#define ABB_RX_CH0_4G_DIG_2_rxa_pd_4g_START (0)
#define ABB_RX_CH0_4G_DIG_2_rxa_pd_4g_END (0)
#define ABB_RX_CH0_4G_DIG_2_rxb_pd_4g_START (1)
#define ABB_RX_CH0_4G_DIG_2_rxb_pd_4g_END (1)
#define ABB_RX_CH0_4G_DIG_2_gain_sel_4g_START (2)
#define ABB_RX_CH0_4G_DIG_2_gain_sel_4g_END (3)
#define ABB_RX_CH0_4G_DIG_2_rx_comp_bp_4g_START (4)
#define ABB_RX_CH0_4G_DIG_2_rx_comp_bp_4g_END (4)
#define ABB_RX_CH0_4G_DIG_2_rx_clk_inv_4g_START (5)
#define ABB_RX_CH0_4G_DIG_2_rx_clk_inv_4g_END (5)
#define ABB_RX_CH0_4G_DIG_2_rx_flush_en_4g_START (6)
#define ABB_RX_CH0_4G_DIG_2_rx_flush_en_4g_END (6)
#define ABB_RX_CH0_4G_DIG_2_rx_comp_sel_b1_4g_START (7)
#define ABB_RX_CH0_4G_DIG_2_rx_comp_sel_b1_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_4g : 1;
        unsigned long tx_hb_bp_4g : 1;
        unsigned long tx_rate_4g : 3;
        unsigned long tx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_1_UNION;
#define ABB_TX_CH0_4G_DIG_1_tx_comp_bp_4g_START (0)
#define ABB_TX_CH0_4G_DIG_1_tx_comp_bp_4g_END (0)
#define ABB_TX_CH0_4G_DIG_1_tx_hb_bp_4g_START (1)
#define ABB_TX_CH0_4G_DIG_1_tx_hb_bp_4g_END (1)
#define ABB_TX_CH0_4G_DIG_1_tx_rate_4g_START (2)
#define ABB_TX_CH0_4G_DIG_1_tx_rate_4g_END (4)
#define ABB_TX_CH0_4G_DIG_1_tx_mode_dig_4g_START (5)
#define ABB_TX_CH0_4G_DIG_1_tx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_4g : 1;
        unsigned long tx_i_pd_4g : 1;
        unsigned long dem_const_4g : 2;
        unsigned long uddwa_dith_en_4g : 1;
        unsigned long dem_dwa_en_4g : 1;
        unsigned long dem_lsb_bp_4g : 1;
        unsigned long dem_msb_bp_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_2_UNION;
#define ABB_TX_CH0_4G_DIG_2_tx_q_pd_4g_START (0)
#define ABB_TX_CH0_4G_DIG_2_tx_q_pd_4g_END (0)
#define ABB_TX_CH0_4G_DIG_2_tx_i_pd_4g_START (1)
#define ABB_TX_CH0_4G_DIG_2_tx_i_pd_4g_END (1)
#define ABB_TX_CH0_4G_DIG_2_dem_const_4g_START (2)
#define ABB_TX_CH0_4G_DIG_2_dem_const_4g_END (3)
#define ABB_TX_CH0_4G_DIG_2_uddwa_dith_en_4g_START (4)
#define ABB_TX_CH0_4G_DIG_2_uddwa_dith_en_4g_END (4)
#define ABB_TX_CH0_4G_DIG_2_dem_dwa_en_4g_START (5)
#define ABB_TX_CH0_4G_DIG_2_dem_dwa_en_4g_END (5)
#define ABB_TX_CH0_4G_DIG_2_dem_lsb_bp_4g_START (6)
#define ABB_TX_CH0_4G_DIG_2_dem_lsb_bp_4g_END (6)
#define ABB_TX_CH0_4G_DIG_2_dem_msb_bp_4g_START (7)
#define ABB_TX_CH0_4G_DIG_2_dem_msb_bp_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_4g : 1;
        unsigned long tx_flush_en_4g : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_3_UNION;
#define ABB_TX_CH0_4G_DIG_3_tx_cfr_bp_4g_START (0)
#define ABB_TX_CH0_4G_DIG_3_tx_cfr_bp_4g_END (0)
#define ABB_TX_CH0_4G_DIG_3_tx_flush_en_4g_START (1)
#define ABB_TX_CH0_4G_DIG_3_tx_flush_en_4g_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_tds : 1;
        unsigned long rx_comp_fix_tds : 1;
        unsigned long rx_hb_bp_tds : 1;
        unsigned long rx_rate_tds : 2;
        unsigned long rx_mode_dig_tds : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_DIG_1_UNION;
#define ABB_RX_TDS_DIG_1_rx_comp_sel_b0_tds_START (0)
#define ABB_RX_TDS_DIG_1_rx_comp_sel_b0_tds_END (0)
#define ABB_RX_TDS_DIG_1_rx_comp_fix_tds_START (1)
#define ABB_RX_TDS_DIG_1_rx_comp_fix_tds_END (1)
#define ABB_RX_TDS_DIG_1_rx_hb_bp_tds_START (2)
#define ABB_RX_TDS_DIG_1_rx_hb_bp_tds_END (2)
#define ABB_RX_TDS_DIG_1_rx_rate_tds_START (3)
#define ABB_RX_TDS_DIG_1_rx_rate_tds_END (4)
#define ABB_RX_TDS_DIG_1_rx_mode_dig_tds_START (5)
#define ABB_RX_TDS_DIG_1_rx_mode_dig_tds_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_tds : 1;
        unsigned long rxb_pd_tds : 1;
        unsigned long gain_sel_tds : 2;
        unsigned long rx_comp_bp_tds : 1;
        unsigned long rx_clk_inv_tds : 1;
        unsigned long rx_flush_en_tds : 1;
        unsigned long rx_comp_sel_b1_tds : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_DIG_2_UNION;
#define ABB_RX_TDS_DIG_2_rxa_pd_tds_START (0)
#define ABB_RX_TDS_DIG_2_rxa_pd_tds_END (0)
#define ABB_RX_TDS_DIG_2_rxb_pd_tds_START (1)
#define ABB_RX_TDS_DIG_2_rxb_pd_tds_END (1)
#define ABB_RX_TDS_DIG_2_gain_sel_tds_START (2)
#define ABB_RX_TDS_DIG_2_gain_sel_tds_END (3)
#define ABB_RX_TDS_DIG_2_rx_comp_bp_tds_START (4)
#define ABB_RX_TDS_DIG_2_rx_comp_bp_tds_END (4)
#define ABB_RX_TDS_DIG_2_rx_clk_inv_tds_START (5)
#define ABB_RX_TDS_DIG_2_rx_clk_inv_tds_END (5)
#define ABB_RX_TDS_DIG_2_rx_flush_en_tds_START (6)
#define ABB_RX_TDS_DIG_2_rx_flush_en_tds_END (6)
#define ABB_RX_TDS_DIG_2_rx_comp_sel_b1_tds_START (7)
#define ABB_RX_TDS_DIG_2_rx_comp_sel_b1_tds_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_tds : 1;
        unsigned long tx_hb_bp_tds : 1;
        unsigned long tx_rate_tds : 3;
        unsigned long tx_mode_dig_tds : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_DIG_1_UNION;
#define ABB_TX_TDS_DIG_1_tx_comp_bp_tds_START (0)
#define ABB_TX_TDS_DIG_1_tx_comp_bp_tds_END (0)
#define ABB_TX_TDS_DIG_1_tx_hb_bp_tds_START (1)
#define ABB_TX_TDS_DIG_1_tx_hb_bp_tds_END (1)
#define ABB_TX_TDS_DIG_1_tx_rate_tds_START (2)
#define ABB_TX_TDS_DIG_1_tx_rate_tds_END (4)
#define ABB_TX_TDS_DIG_1_tx_mode_dig_tds_START (5)
#define ABB_TX_TDS_DIG_1_tx_mode_dig_tds_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_tds : 1;
        unsigned long tx_i_pd_tds : 1;
        unsigned long dem_const_tds : 2;
        unsigned long uddwa_dith_en_tds : 1;
        unsigned long dem_dwa_en_tds : 1;
        unsigned long dem_lsb_bp_tds : 1;
        unsigned long dem_msb_bp_tds : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_DIG_2_UNION;
#define ABB_TX_TDS_DIG_2_tx_q_pd_tds_START (0)
#define ABB_TX_TDS_DIG_2_tx_q_pd_tds_END (0)
#define ABB_TX_TDS_DIG_2_tx_i_pd_tds_START (1)
#define ABB_TX_TDS_DIG_2_tx_i_pd_tds_END (1)
#define ABB_TX_TDS_DIG_2_dem_const_tds_START (2)
#define ABB_TX_TDS_DIG_2_dem_const_tds_END (3)
#define ABB_TX_TDS_DIG_2_uddwa_dith_en_tds_START (4)
#define ABB_TX_TDS_DIG_2_uddwa_dith_en_tds_END (4)
#define ABB_TX_TDS_DIG_2_dem_dwa_en_tds_START (5)
#define ABB_TX_TDS_DIG_2_dem_dwa_en_tds_END (5)
#define ABB_TX_TDS_DIG_2_dem_lsb_bp_tds_START (6)
#define ABB_TX_TDS_DIG_2_dem_lsb_bp_tds_END (6)
#define ABB_TX_TDS_DIG_2_dem_msb_bp_tds_START (7)
#define ABB_TX_TDS_DIG_2_dem_msb_bp_tds_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_tds : 1;
        unsigned long tx_flush_en_tds : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_DIG_3_UNION;
#define ABB_TX_TDS_DIG_3_tx_cfr_bp_tds_START (0)
#define ABB_TX_TDS_DIG_3_tx_cfr_bp_tds_END (0)
#define ABB_TX_TDS_DIG_3_tx_flush_en_tds_START (1)
#define ABB_TX_TDS_DIG_3_tx_flush_en_tds_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_idle : 1;
        unsigned long rx_comp_fix_idle : 1;
        unsigned long rx_hb_bp_idle : 1;
        unsigned long rx_rate_idle : 2;
        unsigned long rx_mode_dig_idle : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_DIG_1_UNION;
#define ABB_RX_IDLE_DIG_1_rx_comp_sel_b0_idle_START (0)
#define ABB_RX_IDLE_DIG_1_rx_comp_sel_b0_idle_END (0)
#define ABB_RX_IDLE_DIG_1_rx_comp_fix_idle_START (1)
#define ABB_RX_IDLE_DIG_1_rx_comp_fix_idle_END (1)
#define ABB_RX_IDLE_DIG_1_rx_hb_bp_idle_START (2)
#define ABB_RX_IDLE_DIG_1_rx_hb_bp_idle_END (2)
#define ABB_RX_IDLE_DIG_1_rx_rate_idle_START (3)
#define ABB_RX_IDLE_DIG_1_rx_rate_idle_END (4)
#define ABB_RX_IDLE_DIG_1_rx_mode_dig_idle_START (5)
#define ABB_RX_IDLE_DIG_1_rx_mode_dig_idle_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_idle : 1;
        unsigned long rxb_pd_idle : 1;
        unsigned long gain_sel_idle : 2;
        unsigned long rx_comp_bp_idle : 1;
        unsigned long rx_clk_inv_idle : 1;
        unsigned long rx_flush_en_idle : 1;
        unsigned long rx_comp_sel_b1_idle : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_DIG_2_UNION;
#define ABB_RX_IDLE_DIG_2_rxa_pd_idle_START (0)
#define ABB_RX_IDLE_DIG_2_rxa_pd_idle_END (0)
#define ABB_RX_IDLE_DIG_2_rxb_pd_idle_START (1)
#define ABB_RX_IDLE_DIG_2_rxb_pd_idle_END (1)
#define ABB_RX_IDLE_DIG_2_gain_sel_idle_START (2)
#define ABB_RX_IDLE_DIG_2_gain_sel_idle_END (3)
#define ABB_RX_IDLE_DIG_2_rx_comp_bp_idle_START (4)
#define ABB_RX_IDLE_DIG_2_rx_comp_bp_idle_END (4)
#define ABB_RX_IDLE_DIG_2_rx_clk_inv_idle_START (5)
#define ABB_RX_IDLE_DIG_2_rx_clk_inv_idle_END (5)
#define ABB_RX_IDLE_DIG_2_rx_flush_en_idle_START (6)
#define ABB_RX_IDLE_DIG_2_rx_flush_en_idle_END (6)
#define ABB_RX_IDLE_DIG_2_rx_comp_sel_b1_idle_START (7)
#define ABB_RX_IDLE_DIG_2_rx_comp_sel_b1_idle_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_idle : 1;
        unsigned long tx_hb_bp_idle : 1;
        unsigned long tx_rate_idle : 3;
        unsigned long tx_mode_dig_idle : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_DIG_1_UNION;
#define ABB_TX_IDLE_DIG_1_tx_comp_bp_idle_START (0)
#define ABB_TX_IDLE_DIG_1_tx_comp_bp_idle_END (0)
#define ABB_TX_IDLE_DIG_1_tx_hb_bp_idle_START (1)
#define ABB_TX_IDLE_DIG_1_tx_hb_bp_idle_END (1)
#define ABB_TX_IDLE_DIG_1_tx_rate_idle_START (2)
#define ABB_TX_IDLE_DIG_1_tx_rate_idle_END (4)
#define ABB_TX_IDLE_DIG_1_tx_mode_dig_idle_START (5)
#define ABB_TX_IDLE_DIG_1_tx_mode_dig_idle_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_idle : 1;
        unsigned long tx_i_pd_idle : 1;
        unsigned long dem_const_idle : 2;
        unsigned long uddwa_dith_en_idle : 1;
        unsigned long dem_dwa_en_idle : 1;
        unsigned long dem_lsb_bp_idle : 1;
        unsigned long dem_msb_bp_idle : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_DIG_2_UNION;
#define ABB_TX_IDLE_DIG_2_tx_q_pd_idle_START (0)
#define ABB_TX_IDLE_DIG_2_tx_q_pd_idle_END (0)
#define ABB_TX_IDLE_DIG_2_tx_i_pd_idle_START (1)
#define ABB_TX_IDLE_DIG_2_tx_i_pd_idle_END (1)
#define ABB_TX_IDLE_DIG_2_dem_const_idle_START (2)
#define ABB_TX_IDLE_DIG_2_dem_const_idle_END (3)
#define ABB_TX_IDLE_DIG_2_uddwa_dith_en_idle_START (4)
#define ABB_TX_IDLE_DIG_2_uddwa_dith_en_idle_END (4)
#define ABB_TX_IDLE_DIG_2_dem_dwa_en_idle_START (5)
#define ABB_TX_IDLE_DIG_2_dem_dwa_en_idle_END (5)
#define ABB_TX_IDLE_DIG_2_dem_lsb_bp_idle_START (6)
#define ABB_TX_IDLE_DIG_2_dem_lsb_bp_idle_END (6)
#define ABB_TX_IDLE_DIG_2_dem_msb_bp_idle_START (7)
#define ABB_TX_IDLE_DIG_2_dem_msb_bp_idle_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_idle : 1;
        unsigned long tx_flush_en_idle : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_DIG_3_UNION;
#define ABB_TX_IDLE_DIG_3_tx_cfr_bp_idle_START (0)
#define ABB_TX_IDLE_DIG_3_tx_cfr_bp_idle_END (0)
#define ABB_TX_IDLE_DIG_3_tx_flush_en_idle_START (1)
#define ABB_TX_IDLE_DIG_3_tx_flush_en_idle_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_2G : 1;
        unsigned long RX_MODE_CLK_2G : 2;
        unsigned long DEM_MOD_B1_2G : 1;
        unsigned long RXB_Q_PD_2G : 1;
        unsigned long RXB_I_PD_2G : 1;
        unsigned long RXA_Q_PD_2G : 1;
        unsigned long RXA_I_PD_2G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_ANA_1_UNION;
#define ABB_RX_2G_ANA_1_DEM_MOD_B0_2G_START (0)
#define ABB_RX_2G_ANA_1_DEM_MOD_B0_2G_END (0)
#define ABB_RX_2G_ANA_1_RX_MODE_CLK_2G_START (1)
#define ABB_RX_2G_ANA_1_RX_MODE_CLK_2G_END (2)
#define ABB_RX_2G_ANA_1_DEM_MOD_B1_2G_START (3)
#define ABB_RX_2G_ANA_1_DEM_MOD_B1_2G_END (3)
#define ABB_RX_2G_ANA_1_RXB_Q_PD_2G_START (4)
#define ABB_RX_2G_ANA_1_RXB_Q_PD_2G_END (4)
#define ABB_RX_2G_ANA_1_RXB_I_PD_2G_START (5)
#define ABB_RX_2G_ANA_1_RXB_I_PD_2G_END (5)
#define ABB_RX_2G_ANA_1_RXA_Q_PD_2G_START (6)
#define ABB_RX_2G_ANA_1_RXA_Q_PD_2G_END (6)
#define ABB_RX_2G_ANA_1_RXA_I_PD_2G_START (7)
#define ABB_RX_2G_ANA_1_RXA_I_PD_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C_2G : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT_2G : 2;
        unsigned long IBCT_OP3_2G : 2;
        unsigned long IBCT_OP1_2G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_2G_ANA_2_UNION;
#define ABB_RX_2G_ANA_2_RX_MODE_C_2G_START (0)
#define ABB_RX_2G_ANA_2_RX_MODE_C_2G_END (0)
#define ABB_RX_2G_ANA_2_IBCT_QT_2G_START (2)
#define ABB_RX_2G_ANA_2_IBCT_QT_2G_END (3)
#define ABB_RX_2G_ANA_2_IBCT_OP3_2G_START (4)
#define ABB_RX_2G_ANA_2_IBCT_OP3_2G_END (5)
#define ABB_RX_2G_ANA_2_IBCT_OP1_2G_START (6)
#define ABB_RX_2G_ANA_2_IBCT_OP1_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_2G : 2;
        unsigned long TX_Q_PD_A_2G : 1;
        unsigned long TX_I_PD_A_2G : 1;
        unsigned long TX_DIV_MODE_2G : 2;
        unsigned long FC : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_ANA_1_UNION;
#define ABB_TX_2G_ANA_1_TX_MODE_CLK_2G_START (0)
#define ABB_TX_2G_ANA_1_TX_MODE_CLK_2G_END (1)
#define ABB_TX_2G_ANA_1_TX_Q_PD_A_2G_START (2)
#define ABB_TX_2G_ANA_1_TX_Q_PD_A_2G_END (2)
#define ABB_TX_2G_ANA_1_TX_I_PD_A_2G_START (3)
#define ABB_TX_2G_ANA_1_TX_I_PD_A_2G_END (3)
#define ABB_TX_2G_ANA_1_TX_DIV_MODE_2G_START (4)
#define ABB_TX_2G_ANA_1_TX_DIV_MODE_2G_END (5)
#define ABB_TX_2G_ANA_1_FC_START (6)
#define ABB_TX_2G_ANA_1_FC_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1_2G : 2;
        unsigned long CURRENT_MODE_OP2_2G : 2;
        unsigned long LPF_MODE_CURRENT_2G : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3_2G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_ANA_2_UNION;
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP1_2G_START (0)
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP1_2G_END (1)
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP2_2G_START (2)
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP2_2G_END (3)
#define ABB_TX_2G_ANA_2_LPF_MODE_CURRENT_2G_START (4)
#define ABB_TX_2G_ANA_2_LPF_MODE_CURRENT_2G_END (5)
#define ABB_TX_2G_ANA_2_TX_MODE_CLK_B3_2G_START (7)
#define ABB_TX_2G_ANA_2_TX_MODE_CLK_B3_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_3G : 1;
        unsigned long RX_MODE_CLK_3G : 2;
        unsigned long DEM_MOD_B1_3G : 1;
        unsigned long RXB_Q_PD_3G : 1;
        unsigned long RXB_I_PD_3G : 1;
        unsigned long RXA_Q_PD_3G : 1;
        unsigned long RXA_I_PD_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_ANA_1_UNION;
#define ABB_RX_CH0_3G_ANA_1_DEM_MOD_B0_3G_START (0)
#define ABB_RX_CH0_3G_ANA_1_DEM_MOD_B0_3G_END (0)
#define ABB_RX_CH0_3G_ANA_1_RX_MODE_CLK_3G_START (1)
#define ABB_RX_CH0_3G_ANA_1_RX_MODE_CLK_3G_END (2)
#define ABB_RX_CH0_3G_ANA_1_DEM_MOD_B1_3G_START (3)
#define ABB_RX_CH0_3G_ANA_1_DEM_MOD_B1_3G_END (3)
#define ABB_RX_CH0_3G_ANA_1_RXB_Q_PD_3G_START (4)
#define ABB_RX_CH0_3G_ANA_1_RXB_Q_PD_3G_END (4)
#define ABB_RX_CH0_3G_ANA_1_RXB_I_PD_3G_START (5)
#define ABB_RX_CH0_3G_ANA_1_RXB_I_PD_3G_END (5)
#define ABB_RX_CH0_3G_ANA_1_RXA_Q_PD_3G_START (6)
#define ABB_RX_CH0_3G_ANA_1_RXA_Q_PD_3G_END (6)
#define ABB_RX_CH0_3G_ANA_1_RXA_I_PD_3G_START (7)
#define ABB_RX_CH0_3G_ANA_1_RXA_I_PD_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C_3G : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT_3G : 2;
        unsigned long IBCT_OP3_3G : 2;
        unsigned long IBCT_OP1_3G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_3G_ANA_2_UNION;
#define ABB_RX_CH0_3G_ANA_2_RX_MODE_C_3G_START (0)
#define ABB_RX_CH0_3G_ANA_2_RX_MODE_C_3G_END (0)
#define ABB_RX_CH0_3G_ANA_2_IBCT_QT_3G_START (2)
#define ABB_RX_CH0_3G_ANA_2_IBCT_QT_3G_END (3)
#define ABB_RX_CH0_3G_ANA_2_IBCT_OP3_3G_START (4)
#define ABB_RX_CH0_3G_ANA_2_IBCT_OP3_3G_END (5)
#define ABB_RX_CH0_3G_ANA_2_IBCT_OP1_3G_START (6)
#define ABB_RX_CH0_3G_ANA_2_IBCT_OP1_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_3G : 2;
        unsigned long TX_Q_PD_A_3G : 1;
        unsigned long TX_I_PD_A_3G : 1;
        unsigned long TX_DIV_MODE_3G : 2;
        unsigned long FC_3G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_ANA_1_UNION;
#define ABB_TX_CH0_3G_ANA_1_TX_MODE_CLK_3G_START (0)
#define ABB_TX_CH0_3G_ANA_1_TX_MODE_CLK_3G_END (1)
#define ABB_TX_CH0_3G_ANA_1_TX_Q_PD_A_3G_START (2)
#define ABB_TX_CH0_3G_ANA_1_TX_Q_PD_A_3G_END (2)
#define ABB_TX_CH0_3G_ANA_1_TX_I_PD_A_3G_START (3)
#define ABB_TX_CH0_3G_ANA_1_TX_I_PD_A_3G_END (3)
#define ABB_TX_CH0_3G_ANA_1_TX_DIV_MODE_3G_START (4)
#define ABB_TX_CH0_3G_ANA_1_TX_DIV_MODE_3G_END (5)
#define ABB_TX_CH0_3G_ANA_1_FC_3G_START (6)
#define ABB_TX_CH0_3G_ANA_1_FC_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1_3G : 2;
        unsigned long CURRENT_MODE_OP2_3G : 2;
        unsigned long LPF_MODE_CURRENT_3G : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_ANA_2_UNION;
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP1_3G_START (0)
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP1_3G_END (1)
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP2_3G_START (2)
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP2_3G_END (3)
#define ABB_TX_CH0_3G_ANA_2_LPF_MODE_CURRENT_3G_START (4)
#define ABB_TX_CH0_3G_ANA_2_LPF_MODE_CURRENT_3G_END (5)
#define ABB_TX_CH0_3G_ANA_2_TX_MODE_CLK_B3_3G_START (7)
#define ABB_TX_CH0_3G_ANA_2_TX_MODE_CLK_B3_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_4G : 1;
        unsigned long RX_MODE_CLK_4G : 2;
        unsigned long DEM_MOD_B1_4G : 1;
        unsigned long RXB_Q_PD_4G : 1;
        unsigned long RXB_I_PD_4G : 1;
        unsigned long RXA_Q_PD_4G : 1;
        unsigned long RXA_I_PD_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_ANA_1_UNION;
#define ABB_RX_CH0_4G_ANA_1_DEM_MOD_B0_4G_START (0)
#define ABB_RX_CH0_4G_ANA_1_DEM_MOD_B0_4G_END (0)
#define ABB_RX_CH0_4G_ANA_1_RX_MODE_CLK_4G_START (1)
#define ABB_RX_CH0_4G_ANA_1_RX_MODE_CLK_4G_END (2)
#define ABB_RX_CH0_4G_ANA_1_DEM_MOD_B1_4G_START (3)
#define ABB_RX_CH0_4G_ANA_1_DEM_MOD_B1_4G_END (3)
#define ABB_RX_CH0_4G_ANA_1_RXB_Q_PD_4G_START (4)
#define ABB_RX_CH0_4G_ANA_1_RXB_Q_PD_4G_END (4)
#define ABB_RX_CH0_4G_ANA_1_RXB_I_PD_4G_START (5)
#define ABB_RX_CH0_4G_ANA_1_RXB_I_PD_4G_END (5)
#define ABB_RX_CH0_4G_ANA_1_RXA_Q_PD_4G_START (6)
#define ABB_RX_CH0_4G_ANA_1_RXA_Q_PD_4G_END (6)
#define ABB_RX_CH0_4G_ANA_1_RXA_I_PD_4G_START (7)
#define ABB_RX_CH0_4G_ANA_1_RXA_I_PD_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C_4G : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT_4G : 2;
        unsigned long IBCT_OP3_4G : 2;
        unsigned long IBCT_OP1_4G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_4G_ANA_2_UNION;
#define ABB_RX_CH0_4G_ANA_2_RX_MODE_C_4G_START (0)
#define ABB_RX_CH0_4G_ANA_2_RX_MODE_C_4G_END (0)
#define ABB_RX_CH0_4G_ANA_2_IBCT_QT_4G_START (2)
#define ABB_RX_CH0_4G_ANA_2_IBCT_QT_4G_END (3)
#define ABB_RX_CH0_4G_ANA_2_IBCT_OP3_4G_START (4)
#define ABB_RX_CH0_4G_ANA_2_IBCT_OP3_4G_END (5)
#define ABB_RX_CH0_4G_ANA_2_IBCT_OP1_4G_START (6)
#define ABB_RX_CH0_4G_ANA_2_IBCT_OP1_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_4G : 2;
        unsigned long TX_Q_PD_A_4G : 1;
        unsigned long TX_I_PD_A_4G : 1;
        unsigned long TX_DIV_MODE_4G : 2;
        unsigned long FC_4G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_ANA_1_UNION;
#define ABB_TX_CH0_4G_ANA_1_TX_MODE_CLK_4G_START (0)
#define ABB_TX_CH0_4G_ANA_1_TX_MODE_CLK_4G_END (1)
#define ABB_TX_CH0_4G_ANA_1_TX_Q_PD_A_4G_START (2)
#define ABB_TX_CH0_4G_ANA_1_TX_Q_PD_A_4G_END (2)
#define ABB_TX_CH0_4G_ANA_1_TX_I_PD_A_4G_START (3)
#define ABB_TX_CH0_4G_ANA_1_TX_I_PD_A_4G_END (3)
#define ABB_TX_CH0_4G_ANA_1_TX_DIV_MODE_4G_START (4)
#define ABB_TX_CH0_4G_ANA_1_TX_DIV_MODE_4G_END (5)
#define ABB_TX_CH0_4G_ANA_1_FC_4G_START (6)
#define ABB_TX_CH0_4G_ANA_1_FC_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1_4G : 2;
        unsigned long CURRENT_MODE_OP2_4G : 2;
        unsigned long LPF_MODE_CURRENT_4G : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_ANA_2_UNION;
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP1_4G_START (0)
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP1_4G_END (1)
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP2_4G_START (2)
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP2_4G_END (3)
#define ABB_TX_CH0_4G_ANA_2_LPF_MODE_CURRENT_4G_START (4)
#define ABB_TX_CH0_4G_ANA_2_LPF_MODE_CURRENT_4G_END (5)
#define ABB_TX_CH0_4G_ANA_2_TX_MODE_CLK_B3_4G_START (7)
#define ABB_TX_CH0_4G_ANA_2_TX_MODE_CLK_B3_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_TDS : 1;
        unsigned long RX_MODE_CLK_TDS : 2;
        unsigned long DEM_MOD_B1_TDS : 1;
        unsigned long RXB_Q_PD_TDS : 1;
        unsigned long RXB_I_PD_TDS : 1;
        unsigned long RXA_Q_PD_TDS : 1;
        unsigned long RXA_I_PD_TDS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_ANA_1_UNION;
#define ABB_RX_TDS_ANA_1_DEM_MOD_B0_TDS_START (0)
#define ABB_RX_TDS_ANA_1_DEM_MOD_B0_TDS_END (0)
#define ABB_RX_TDS_ANA_1_RX_MODE_CLK_TDS_START (1)
#define ABB_RX_TDS_ANA_1_RX_MODE_CLK_TDS_END (2)
#define ABB_RX_TDS_ANA_1_DEM_MOD_B1_TDS_START (3)
#define ABB_RX_TDS_ANA_1_DEM_MOD_B1_TDS_END (3)
#define ABB_RX_TDS_ANA_1_RXB_Q_PD_TDS_START (4)
#define ABB_RX_TDS_ANA_1_RXB_Q_PD_TDS_END (4)
#define ABB_RX_TDS_ANA_1_RXB_I_PD_TDS_START (5)
#define ABB_RX_TDS_ANA_1_RXB_I_PD_TDS_END (5)
#define ABB_RX_TDS_ANA_1_RXA_Q_PD_TDS_START (6)
#define ABB_RX_TDS_ANA_1_RXA_Q_PD_TDS_END (6)
#define ABB_RX_TDS_ANA_1_RXA_I_PD_TDS_START (7)
#define ABB_RX_TDS_ANA_1_RXA_I_PD_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C_TDS : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT_TDS : 2;
        unsigned long IBCT_OP3_TDS : 2;
        unsigned long IBCT_OP1_TDS : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_ANA_2_UNION;
#define ABB_RX_TDS_ANA_2_RX_MODE_C_TDS_START (0)
#define ABB_RX_TDS_ANA_2_RX_MODE_C_TDS_END (0)
#define ABB_RX_TDS_ANA_2_IBCT_QT_TDS_START (2)
#define ABB_RX_TDS_ANA_2_IBCT_QT_TDS_END (3)
#define ABB_RX_TDS_ANA_2_IBCT_OP3_TDS_START (4)
#define ABB_RX_TDS_ANA_2_IBCT_OP3_TDS_END (5)
#define ABB_RX_TDS_ANA_2_IBCT_OP1_TDS_START (6)
#define ABB_RX_TDS_ANA_2_IBCT_OP1_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_TDS : 2;
        unsigned long TX_Q_PD_A_TDS : 1;
        unsigned long TX_I_PD_A_TDS : 1;
        unsigned long TX_DIV_MODE_TDS : 2;
        unsigned long FC_TDS : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_ANA_1_UNION;
#define ABB_TX_TDS_ANA_1_TX_MODE_CLK_TDS_START (0)
#define ABB_TX_TDS_ANA_1_TX_MODE_CLK_TDS_END (1)
#define ABB_TX_TDS_ANA_1_TX_Q_PD_A_TDS_START (2)
#define ABB_TX_TDS_ANA_1_TX_Q_PD_A_TDS_END (2)
#define ABB_TX_TDS_ANA_1_TX_I_PD_A_TDS_START (3)
#define ABB_TX_TDS_ANA_1_TX_I_PD_A_TDS_END (3)
#define ABB_TX_TDS_ANA_1_TX_DIV_MODE_TDS_START (4)
#define ABB_TX_TDS_ANA_1_TX_DIV_MODE_TDS_END (5)
#define ABB_TX_TDS_ANA_1_FC_TDS_START (6)
#define ABB_TX_TDS_ANA_1_FC_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1_TDS : 2;
        unsigned long CURRENT_MODE_OP2_TDS : 2;
        unsigned long LPF_MODE_TDS : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3_TDS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_ANA_2_UNION;
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP1_TDS_START (0)
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP1_TDS_END (1)
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP2_TDS_START (2)
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP2_TDS_END (3)
#define ABB_TX_TDS_ANA_2_LPF_MODE_TDS_START (4)
#define ABB_TX_TDS_ANA_2_LPF_MODE_TDS_END (5)
#define ABB_TX_TDS_ANA_2_TX_MODE_CLK_B3_TDS_START (7)
#define ABB_TX_TDS_ANA_2_TX_MODE_CLK_B3_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_IDLE : 1;
        unsigned long RX_MODE_CLK_IDLE : 2;
        unsigned long DEM_MOD_B1_IDLE : 1;
        unsigned long RXB_Q_PD_IDLE : 1;
        unsigned long RXB_I_PD_IDLE : 1;
        unsigned long RXA_Q_PD_IDLE : 1;
        unsigned long RXA_I_PD_IDLE : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_1_UNION;
#define ABB_RX_IDLE_ANA_1_DEM_MOD_B0_IDLE_START (0)
#define ABB_RX_IDLE_ANA_1_DEM_MOD_B0_IDLE_END (0)
#define ABB_RX_IDLE_ANA_1_RX_MODE_CLK_IDLE_START (1)
#define ABB_RX_IDLE_ANA_1_RX_MODE_CLK_IDLE_END (2)
#define ABB_RX_IDLE_ANA_1_DEM_MOD_B1_IDLE_START (3)
#define ABB_RX_IDLE_ANA_1_DEM_MOD_B1_IDLE_END (3)
#define ABB_RX_IDLE_ANA_1_RXB_Q_PD_IDLE_START (4)
#define ABB_RX_IDLE_ANA_1_RXB_Q_PD_IDLE_END (4)
#define ABB_RX_IDLE_ANA_1_RXB_I_PD_IDLE_START (5)
#define ABB_RX_IDLE_ANA_1_RXB_I_PD_IDLE_END (5)
#define ABB_RX_IDLE_ANA_1_RXA_Q_PD_IDLE_START (6)
#define ABB_RX_IDLE_ANA_1_RXA_Q_PD_IDLE_END (6)
#define ABB_RX_IDLE_ANA_1_RXA_I_PD_IDLE_START (7)
#define ABB_RX_IDLE_ANA_1_RXA_I_PD_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C_IDLE : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT_IDLE : 2;
        unsigned long IBCT_OP3_IDLE : 2;
        unsigned long IBCT_OP1_IDLE : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_2_UNION;
#define ABB_RX_IDLE_ANA_2_RX_MODE_C_IDLE_START (0)
#define ABB_RX_IDLE_ANA_2_RX_MODE_C_IDLE_END (0)
#define ABB_RX_IDLE_ANA_2_IBCT_QT_IDLE_START (2)
#define ABB_RX_IDLE_ANA_2_IBCT_QT_IDLE_END (3)
#define ABB_RX_IDLE_ANA_2_IBCT_OP3_IDLE_START (4)
#define ABB_RX_IDLE_ANA_2_IBCT_OP3_IDLE_END (5)
#define ABB_RX_IDLE_ANA_2_IBCT_OP1_IDLE_START (6)
#define ABB_RX_IDLE_ANA_2_IBCT_OP1_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_IDLE : 2;
        unsigned long TX_Q_PD_A_IDLE : 1;
        unsigned long TX_I_PD_A_IDLE : 1;
        unsigned long TX_DIV_MODE_IDLE : 2;
        unsigned long FC_IDLE : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_ANA_1_UNION;
#define ABB_TX_IDLE_ANA_1_TX_MODE_CLK_IDLE_START (0)
#define ABB_TX_IDLE_ANA_1_TX_MODE_CLK_IDLE_END (1)
#define ABB_TX_IDLE_ANA_1_TX_Q_PD_A_IDLE_START (2)
#define ABB_TX_IDLE_ANA_1_TX_Q_PD_A_IDLE_END (2)
#define ABB_TX_IDLE_ANA_1_TX_I_PD_A_IDLE_START (3)
#define ABB_TX_IDLE_ANA_1_TX_I_PD_A_IDLE_END (3)
#define ABB_TX_IDLE_ANA_1_TX_DIV_MODE_IDLE_START (4)
#define ABB_TX_IDLE_ANA_1_TX_DIV_MODE_IDLE_END (5)
#define ABB_TX_IDLE_ANA_1_FC_IDLE_START (6)
#define ABB_TX_IDLE_ANA_1_FC_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1_IDLE : 2;
        unsigned long CURRENT_MODE_OP2_IDLE : 2;
        unsigned long LPF_MODE_CURRENT_IDLE : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3_IDLE : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_ANA_2_UNION;
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP1_IDLE_START (0)
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP1_IDLE_END (1)
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP2_IDLE_START (2)
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP2_IDLE_END (3)
#define ABB_TX_IDLE_ANA_2_LPF_MODE_CURRENT_IDLE_START (4)
#define ABB_TX_IDLE_ANA_2_LPF_MODE_CURRENT_IDLE_END (5)
#define ABB_TX_IDLE_ANA_2_TX_MODE_CLK_B3_IDLE_START (7)
#define ABB_TX_IDLE_ANA_2_TX_MODE_CLK_B3_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_pwr_on_rst : 1;
        unsigned long ch0_rx_chnl_sel : 2;
        unsigned long ch0_test_mode : 3;
        unsigned long ch0_rx_sw_rst : 1;
        unsigned long ch0_tx_sw_rst : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_TESTMODE_UNION;
#define ABB_CH0_TESTMODE_ch0_pwr_on_rst_START (0)
#define ABB_CH0_TESTMODE_ch0_pwr_on_rst_END (0)
#define ABB_CH0_TESTMODE_ch0_rx_chnl_sel_START (1)
#define ABB_CH0_TESTMODE_ch0_rx_chnl_sel_END (2)
#define ABB_CH0_TESTMODE_ch0_test_mode_START (3)
#define ABB_CH0_TESTMODE_ch0_test_mode_END (5)
#define ABB_CH0_TESTMODE_ch0_rx_sw_rst_START (6)
#define ABB_CH0_TESTMODE_ch0_rx_sw_rst_END (6)
#define ABB_CH0_TESTMODE_ch0_tx_sw_rst_START (7)
#define ABB_CH0_TESTMODE_ch0_tx_sw_rst_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_cfr_pdet_sel : 2;
        unsigned long ch0_cfr_fir_sel : 1;
        unsigned long reserved : 1;
        unsigned long ch0_cfr_fir_fac : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_CFR_CTRL_UNION;
#define ABB_CH0_CFR_CTRL_ch0_cfr_pdet_sel_START (0)
#define ABB_CH0_CFR_CTRL_ch0_cfr_pdet_sel_END (1)
#define ABB_CH0_CFR_CTRL_ch0_cfr_fir_sel_START (2)
#define ABB_CH0_CFR_CTRL_ch0_cfr_fir_sel_END (2)
#define ABB_CH0_CFR_CTRL_ch0_cfr_fir_fac_START (4)
#define ABB_CH0_CFR_CTRL_ch0_cfr_fir_fac_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_i_c1 : 7;
        unsigned long ch0_rxa_i_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_I_COEF1_UNION;
#define ABB_CH0_RXA_I_COEF1_ch0_rxa_i_c1_START (0)
#define ABB_CH0_RXA_I_COEF1_ch0_rxa_i_c1_END (6)
#define ABB_CH0_RXA_I_COEF1_ch0_rxa_i_c3_msb_START (7)
#define ABB_CH0_RXA_I_COEF1_ch0_rxa_i_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_i_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_RXA_I_COEF3_UNION;
#define ABB_CH0_RXA_I_COEF3_ch0_rxa_i_c5_START (0)
#define ABB_CH0_RXA_I_COEF3_ch0_rxa_i_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_q_c1 : 7;
        unsigned long ch0_rxa_q_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_Q_COEF1_UNION;
#define ABB_CH0_RXA_Q_COEF1_ch0_rxa_q_c1_START (0)
#define ABB_CH0_RXA_Q_COEF1_ch0_rxa_q_c1_END (6)
#define ABB_CH0_RXA_Q_COEF1_ch0_rxa_q_c3_msb_START (7)
#define ABB_CH0_RXA_Q_COEF1_ch0_rxa_q_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_q_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_RXA_Q_COEF3_UNION;
#define ABB_CH0_RXA_Q_COEF3_ch0_rxa_q_c5_START (0)
#define ABB_CH0_RXA_Q_COEF3_ch0_rxa_q_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_i_c1 : 7;
        unsigned long ch0_rxb_i_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_I_COEF1_UNION;
#define ABB_CH0_RXB_I_COEF1_ch0_rxb_i_c1_START (0)
#define ABB_CH0_RXB_I_COEF1_ch0_rxb_i_c1_END (6)
#define ABB_CH0_RXB_I_COEF1_ch0_rxb_i_c3_msb_START (7)
#define ABB_CH0_RXB_I_COEF1_ch0_rxb_i_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_i_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_RXB_I_COEF3_UNION;
#define ABB_CH0_RXB_I_COEF3_ch0_rxb_i_c5_START (0)
#define ABB_CH0_RXB_I_COEF3_ch0_rxb_i_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_q_c1 : 7;
        unsigned long ch0_rxb_q_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_Q_COEF1_UNION;
#define ABB_CH0_RXB_Q_COEF1_ch0_rxb_q_c1_START (0)
#define ABB_CH0_RXB_Q_COEF1_ch0_rxb_q_c1_END (6)
#define ABB_CH0_RXB_Q_COEF1_ch0_rxb_q_c3_msb_START (7)
#define ABB_CH0_RXB_Q_COEF1_ch0_rxb_q_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_q_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_RXB_Q_COEF3_UNION;
#define ABB_CH0_RXB_Q_COEF3_ch0_rxb_q_c5_START (0)
#define ABB_CH0_RXB_Q_COEF3_ch0_rxb_q_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_cfg_rxa_dcr_dly : 5;
        unsigned long ch0_cfg_rxa_dcr_l_para : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXA_DCR_CFG_UNION;
#define ABB_CH0_REG_RXA_DCR_CFG_ch0_cfg_rxa_dcr_dly_START (0)
#define ABB_CH0_REG_RXA_DCR_CFG_ch0_cfg_rxa_dcr_dly_END (4)
#define ABB_CH0_REG_RXA_DCR_CFG_ch0_cfg_rxa_dcr_l_para_START (5)
#define ABB_CH0_REG_RXA_DCR_CFG_ch0_cfg_rxa_dcr_l_para_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_cfg_rxb_dcr_dly : 5;
        unsigned long ch0_cfg_rxb_dcr_l_para : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXB_DCR_CFG_UNION;
#define ABB_CH0_REG_RXB_DCR_CFG_ch0_cfg_rxb_dcr_dly_START (0)
#define ABB_CH0_REG_RXB_DCR_CFG_ch0_cfg_rxb_dcr_dly_END (4)
#define ABB_CH0_REG_RXB_DCR_CFG_ch0_cfg_rxb_dcr_l_para_START (5)
#define ABB_CH0_REG_RXB_DCR_CFG_ch0_cfg_rxb_dcr_l_para_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_cfg_rxa_dcr_bypass : 1;
        unsigned long ch0_cfg_rxb_dcr_bypass : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RX_DCR_CTRL_UNION;
#define ABB_CH0_REG_RX_DCR_CTRL_ch0_cfg_rxa_dcr_bypass_START (0)
#define ABB_CH0_REG_RX_DCR_CTRL_ch0_cfg_rxa_dcr_bypass_END (0)
#define ABB_CH0_REG_RX_DCR_CTRL_ch0_cfg_rxb_dcr_bypass_START (1)
#define ABB_CH0_REG_RX_DCR_CTRL_ch0_cfg_rxb_dcr_bypass_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_blk_coeff : 5;
        unsigned long ch0_rxa_blk_power : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_BLOCKING_UNION;
#define ABB_CH0_RXA_BLOCKING_ch0_rxa_blk_coeff_START (0)
#define ABB_CH0_RXA_BLOCKING_ch0_rxa_blk_coeff_END (4)
#define ABB_CH0_RXA_BLOCKING_ch0_rxa_blk_power_START (5)
#define ABB_CH0_RXA_BLOCKING_ch0_rxa_blk_power_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_blk_coeff : 5;
        unsigned long ch0_rxb_blk_power : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_BLOCKING_UNION;
#define ABB_CH0_RXB_BLOCKING_ch0_rxb_blk_coeff_START (0)
#define ABB_CH0_RXB_BLOCKING_ch0_rxb_blk_coeff_END (4)
#define ABB_CH0_RXB_BLOCKING_ch0_rxb_blk_power_START (5)
#define ABB_CH0_RXB_BLOCKING_ch0_rxb_blk_power_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch0_rxa_dc_i_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXA_DC_I_2_UNION;
#define ABB_CH0_REG_RXA_DC_I_2_ch0_rxa_dc_i_2_START (4)
#define ABB_CH0_REG_RXA_DC_I_2_ch0_rxa_dc_i_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch0_rxa_dc_q_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXA_DC_Q_2_UNION;
#define ABB_CH0_REG_RXA_DC_Q_2_ch0_rxa_dc_q_2_START (4)
#define ABB_CH0_REG_RXA_DC_Q_2_ch0_rxa_dc_q_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch0_rxb_dc_i_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXB_DC_I_2_UNION;
#define ABB_CH0_REG_RXB_DC_I_2_ch0_rxb_dc_i_2_START (4)
#define ABB_CH0_REG_RXB_DC_I_2_ch0_rxb_dc_i_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch0_rxb_dc_q_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_RXB_DC_Q_2_UNION;
#define ABB_CH0_REG_RXB_DC_Q_2_ch0_rxb_dc_q_2_START (4)
#define ABB_CH0_REG_RXB_DC_Q_2_ch0_rxb_dc_q_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_sdm_rst_ctrl : 1;
        unsigned long ch0_dem_mode : 1;
        unsigned long ch0_tx_dem_sat : 2;
        unsigned long ch0_dither_en : 1;
        unsigned long ch0_tuning_val_en : 1;
        unsigned long ch0_sdm_sel : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_DIG0_UNION;
#define ABB_CH0_REG_DEBUG_DIG0_ch0_sdm_rst_ctrl_START (0)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_sdm_rst_ctrl_END (0)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_dem_mode_START (1)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_dem_mode_END (1)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_tx_dem_sat_START (2)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_tx_dem_sat_END (3)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_dither_en_START (4)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_dither_en_END (4)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_tuning_val_en_START (5)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_tuning_val_en_END (5)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_sdm_sel_START (6)
#define ABB_CH0_REG_DEBUG_DIG0_ch0_sdm_sel_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RXC_Q_PD : 1;
        unsigned long CH0_RXC_I_PD : 1;
        unsigned long CH0_PLL624_PD : 1;
        unsigned long CH0_PLL6144_PD : 1;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR02_UNION;
#define ABB_CH0_REG_ANALOG_WR02_CH0_RXC_Q_PD_START (0)
#define ABB_CH0_REG_ANALOG_WR02_CH0_RXC_Q_PD_END (0)
#define ABB_CH0_REG_ANALOG_WR02_CH0_RXC_I_PD_START (1)
#define ABB_CH0_REG_ANALOG_WR02_CH0_RXC_I_PD_END (1)
#define ABB_CH0_REG_ANALOG_WR02_CH0_PLL624_PD_START (2)
#define ABB_CH0_REG_ANALOG_WR02_CH0_PLL624_PD_END (2)
#define ABB_CH0_REG_ANALOG_WR02_CH0_PLL6144_PD_START (3)
#define ABB_CH0_REG_ANALOG_WR02_CH0_PLL6144_PD_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 2;
        unsigned long CH0_104M_52M_SEL : 1;
        unsigned long CH0_TX_CLKD_CTRL : 1;
        unsigned long CH0_CLK_61D44M_PD : 1;
        unsigned long CH0_CLK_52M_PD : 1;
        unsigned long CH0_CLK_245M_PD : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR03_UNION;
#define ABB_CH0_REG_ANALOG_WR03_CH0_104M_52M_SEL_START (2)
#define ABB_CH0_REG_ANALOG_WR03_CH0_104M_52M_SEL_END (2)
#define ABB_CH0_REG_ANALOG_WR03_CH0_TX_CLKD_CTRL_START (3)
#define ABB_CH0_REG_ANALOG_WR03_CH0_TX_CLKD_CTRL_END (3)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_61D44M_PD_START (4)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_61D44M_PD_END (4)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_52M_PD_START (5)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_52M_PD_END (5)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_245M_PD_START (6)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK_245M_PD_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_EN_CAL : 1;
        unsigned long reserved_0 : 1;
        unsigned long CH0_TX_AUTO_TUNE : 1;
        unsigned long CH0_RX_AUTO_TUNE : 1;
        unsigned long reserved_1 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR04_UNION;
#define ABB_CH0_REG_ANALOG_WR04_CH0_EN_CAL_START (0)
#define ABB_CH0_REG_ANALOG_WR04_CH0_EN_CAL_END (0)
#define ABB_CH0_REG_ANALOG_WR04_CH0_TX_AUTO_TUNE_START (2)
#define ABB_CH0_REG_ANALOG_WR04_CH0_TX_AUTO_TUNE_END (2)
#define ABB_CH0_REG_ANALOG_WR04_CH0_RX_AUTO_TUNE_START (3)
#define ABB_CH0_REG_ANALOG_WR04_CH0_RX_AUTO_TUNE_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_TUNE1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR05_UNION;
#define ABB_CH0_REG_ANALOG_WR05_CH0_RX_TUNE1_START (0)
#define ABB_CH0_REG_ANALOG_WR05_CH0_RX_TUNE1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_TUNE2 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR06_UNION;
#define ABB_CH0_REG_ANALOG_WR06_CH0_RX_TUNE2_START (0)
#define ABB_CH0_REG_ANALOG_WR06_CH0_RX_TUNE2_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_TUNE3 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR07_UNION;
#define ABB_CH0_REG_ANALOG_WR07_CH0_RX_TUNE3_START (0)
#define ABB_CH0_REG_ANALOG_WR07_CH0_RX_TUNE3_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TX_TUNE1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR08_UNION;
#define ABB_CH0_REG_ANALOG_WR08_CH0_TX_TUNE1_START (0)
#define ABB_CH0_REG_ANALOG_WR08_CH0_TX_TUNE1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TX_TUNE2 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR09_UNION;
#define ABB_CH0_REG_ANALOG_WR09_CH0_TX_TUNE2_START (0)
#define ABB_CH0_REG_ANALOG_WR09_CH0_TX_TUNE2_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TX_TUNE3 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR10_UNION;
#define ABB_CH0_REG_ANALOG_WR10_CH0_TX_TUNE3_START (0)
#define ABB_CH0_REG_ANALOG_WR10_CH0_TX_TUNE3_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_ADC_QUANTIZER_CAL_CTRL : 1;
        unsigned long CH0_RX_LDO_LOAD : 1;
        unsigned long CH0_RX_LDO_VDD : 3;
        unsigned long CH0_RX_CLK2D_CTRL : 1;
        unsigned long CH0_RX_SYN2D_CTRL : 1;
        unsigned long CH0_RX_ADC_LDO_CTRL : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR38_UNION;
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_ADC_QUANTIZER_CAL_CTRL_START (0)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_ADC_QUANTIZER_CAL_CTRL_END (0)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_LDO_LOAD_START (1)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_LDO_LOAD_END (1)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_LDO_VDD_START (2)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_LDO_VDD_END (4)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_CLK2D_CTRL_START (5)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_CLK2D_CTRL_END (5)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_SYN2D_CTRL_START (6)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_SYN2D_CTRL_END (6)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_ADC_LDO_CTRL_START (7)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_ADC_LDO_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_DUM_EN_Q : 1;
        unsigned long CH0_DUM_EN_I : 1;
        unsigned long reserved : 5;
        unsigned long CH0_DEM_MOD : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR39_UNION;
#define ABB_CH0_REG_ANALOG_WR39_CH0_DUM_EN_Q_START (0)
#define ABB_CH0_REG_ANALOG_WR39_CH0_DUM_EN_Q_END (0)
#define ABB_CH0_REG_ANALOG_WR39_CH0_DUM_EN_I_START (1)
#define ABB_CH0_REG_ANALOG_WR39_CH0_DUM_EN_I_END (1)
#define ABB_CH0_REG_ANALOG_WR39_CH0_DEM_MOD_START (7)
#define ABB_CH0_REG_ANALOG_WR39_CH0_DEM_MOD_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 5;
        unsigned long CH0_CAL_DONE : 1;
        unsigned long CH0_LOCK2 : 1;
        unsigned long CH0_LOCK1 : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_RO0_UNION;
#define ABB_CH0_REG_ANALOG_RO0_CH0_CAL_DONE_START (5)
#define ABB_CH0_REG_ANALOG_RO0_CH0_CAL_DONE_END (5)
#define ABB_CH0_REG_ANALOG_RO0_CH0_LOCK2_START (6)
#define ABB_CH0_REG_ANALOG_RO0_CH0_LOCK2_END (6)
#define ABB_CH0_REG_ANALOG_RO0_CH0_LOCK1_START (7)
#define ABB_CH0_REG_ANALOG_RO0_CH0_LOCK1_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_CAL_VALUE : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_RO1_UNION;
#define ABB_CH0_REG_ANALOG_RO1_CH0_RX_CAL_VALUE_START (0)
#define ABB_CH0_REG_ANALOG_RO1_CH0_RX_CAL_VALUE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_CLK_REF_SEL : 1;
        unsigned long CH0_PLL_OCLK_SEL : 3;
        unsigned long CH0_PLL_PFD_CTRL : 2;
        unsigned long CH0_GVCO_CR : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA0_UNION;
#define ABB_CH0_REG_DEBUG_ANA0_CH0_CLK_REF_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_CLK_REF_SEL_END (0)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_PLL_OCLK_SEL_START (1)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_PLL_OCLK_SEL_END (3)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_PLL_PFD_CTRL_START (4)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_PLL_PFD_CTRL_END (5)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_GVCO_CR_START (6)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_GVCO_CR_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_GPLL_LK_CTRL : 2;
        unsigned long CH0_WPLL_LK_CTRL : 2;
        unsigned long CH0_GPLL_LK_EN : 1;
        unsigned long CH0_WPLL_LK_EN : 1;
        unsigned long CH0_WVCO_CR : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA1_UNION;
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GPLL_LK_CTRL_START (0)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GPLL_LK_CTRL_END (1)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WPLL_LK_CTRL_START (2)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WPLL_LK_CTRL_END (3)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GPLL_LK_EN_START (4)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GPLL_LK_EN_END (4)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WPLL_LK_EN_START (5)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WPLL_LK_EN_END (5)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WVCO_CR_START (6)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WVCO_CR_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_PLL_CP_PD : 2;
        unsigned long reserved : 5;
        unsigned long CH0_CLKN_EN : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA2_UNION;
#define ABB_CH0_REG_DEBUG_ANA2_CH0_PLL_CP_PD_START (0)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_PLL_CP_PD_END (1)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_CLKN_EN_START (7)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_CLKN_EN_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_GPLL_CP_CTRL : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA3_UNION;
#define ABB_CH0_REG_DEBUG_ANA3_CH0_GPLL_CP_CTRL_START (4)
#define ABB_CH0_REG_DEBUG_ANA3_CH0_GPLL_CP_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_WPLL_CP_CTRL : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA4_UNION;
#define ABB_CH0_REG_DEBUG_ANA4_CH0_WPLL_CP_CTRL_START (4)
#define ABB_CH0_REG_DEBUG_ANA4_CH0_WPLL_CP_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 7;
        unsigned long CH0_ABB_REF_FS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA5_UNION;
#define ABB_CH0_REG_DEBUG_ANA5_CH0_ABB_REF_FS_START (7)
#define ABB_CH0_REG_DEBUG_ANA5_CH0_ABB_REF_FS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_GLLFREQ_SEL : 2;
        unsigned long CH0_WPLLFREQ_SEL : 2;
        unsigned long CH0_TCXO_DRV : 2;
        unsigned long CH0_CLKIN_PD : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA6_UNION;
#define ABB_CH0_REG_DEBUG_ANA6_CH0_GLLFREQ_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_GLLFREQ_SEL_END (1)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_WPLLFREQ_SEL_START (2)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_WPLLFREQ_SEL_END (3)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_TCXO_DRV_START (4)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_TCXO_DRV_END (5)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_CLKIN_PD_START (6)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_CLKIN_PD_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_DRVBUF_CT : 3;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA7_UNION;
#define ABB_CH0_REG_DEBUG_ANA7_CH0_DRVBUF_CT_START (0)
#define ABB_CH0_REG_DEBUG_ANA7_CH0_DRVBUF_CT_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 5;
        unsigned long reserved_1 : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA8_UNION;
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_DAC_DUM_B0 : 1;
        unsigned long CH0_L_PUP_MODE : 1;
        unsigned long reserved_0 : 1;
        unsigned long CH0_L_DEM_PD : 1;
        unsigned long CH0_L_TUNING_SEL : 1;
        unsigned long reserved_1 : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA9_UNION;
#define ABB_CH0_REG_DEBUG_ANA9_CH0_DAC_DUM_B0_START (0)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_DAC_DUM_B0_END (0)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_PUP_MODE_START (1)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_PUP_MODE_END (1)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_DEM_PD_START (3)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_DEM_PD_END (3)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_TUNING_SEL_START (4)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_L_TUNING_SEL_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_DAC_DUM_B2B1 : 2;
        unsigned long CH0_L_PUP_CTRL0 : 1;
        unsigned long CH0_L_PUP_CTRL1 : 1;
        unsigned long CH0_L_PUP_CTRL2 : 1;
        unsigned long CH0_L_PUP_CTRL3 : 1;
        unsigned long CH0_L_PUP_CTRL4 : 1;
        unsigned long CH0_L_PUP_CTRL5 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA10_UNION;
#define ABB_CH0_REG_DEBUG_ANA10_CH0_DAC_DUM_B2B1_START (0)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_DAC_DUM_B2B1_END (1)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL0_START (2)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL0_END (2)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL1_START (3)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL1_END (3)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL2_START (4)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL2_END (4)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL3_START (5)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL3_END (5)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL4_START (6)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL4_END (6)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL5_START (7)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_L_PUP_CTRL5_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 6;
        unsigned long CH0_BG_OPEN_EN : 1;
        unsigned long CH0_BG_DOWN_PD : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA11_UNION;
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_OPEN_EN_START (6)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_OPEN_EN_END (6)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_DOWN_PD_START (7)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_DOWN_PD_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_L_OL_CT : 3;
        unsigned long reserved : 3;
        unsigned long CH0_L_CK_CT : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA14_UNION;
#define ABB_CH0_REG_DEBUG_ANA14_CH0_L_OL_CT_START (0)
#define ABB_CH0_REG_DEBUG_ANA14_CH0_L_OL_CT_END (2)
#define ABB_CH0_REG_DEBUG_ANA14_CH0_L_CK_CT_START (6)
#define ABB_CH0_REG_DEBUG_ANA14_CH0_L_CK_CT_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 6;
        unsigned long CH0_PDM_CTRL : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA16_UNION;
#define ABB_CH0_REG_DEBUG_ANA16_CH0_PDM_CTRL_START (6)
#define ABB_CH0_REG_DEBUG_ANA16_CH0_PDM_CTRL_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_PLL1_CLK_TEST : 2;
        unsigned long CH0_PLL1_ANA_TEST : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA17_UNION;
#define ABB_CH0_REG_DEBUG_ANA17_CH0_PLL1_CLK_TEST_START (4)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_PLL1_CLK_TEST_END (5)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_PLL1_ANA_TEST_START (6)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_PLL1_ANA_TEST_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_CLK_PADF_SEL : 2;
        unsigned long reserved_0 : 2;
        unsigned long CH0_DAC_CLK_EN : 1;
        unsigned long CH0_ADC_CLK_EN : 1;
        unsigned long reserved_1 : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA19_UNION;
#define ABB_CH0_REG_DEBUG_ANA19_CH0_CLK_PADF_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_CLK_PADF_SEL_END (1)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_DAC_CLK_EN_START (4)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_DAC_CLK_EN_END (4)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_ADC_CLK_EN_START (5)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_ADC_CLK_EN_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TCXO_BUF_SEL : 1;
        unsigned long CH0_TCXO_OUT_CTRL : 1;
        unsigned long CH0_TCXO_SEL : 1;
        unsigned long reserved : 2;
        unsigned long CH0_ADC_ST3_CAP_MULTI : 2;
        unsigned long CH0_CAP_SEL : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA20_UNION;
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_BUF_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_BUF_SEL_END (0)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_OUT_CTRL_START (1)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_OUT_CTRL_END (1)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_SEL_START (2)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_TCXO_SEL_END (2)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_ADC_ST3_CAP_MULTI_START (5)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_ADC_ST3_CAP_MULTI_END (6)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_CAP_SEL_START (7)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_CAP_SEL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long sine_enable : 1;
        unsigned long sine_sw_req : 1;
        unsigned long sine_amp : 2;
        unsigned long sine_freq : 4;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_SINE_GENERATE_UNION;
#define ABB_SINE_GENERATE_sine_enable_START (0)
#define ABB_SINE_GENERATE_sine_enable_END (0)
#define ABB_SINE_GENERATE_sine_sw_req_START (1)
#define ABB_SINE_GENERATE_sine_sw_req_END (1)
#define ABB_SINE_GENERATE_sine_amp_START (2)
#define ABB_SINE_GENERATE_sine_amp_END (3)
#define ABB_SINE_GENERATE_sine_freq_START (4)
#define ABB_SINE_GENERATE_sine_freq_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT_2G : 3;
        unsigned long DUM_EN_Q_2G : 1;
        unsigned long DUM_EN_I_2G : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_2G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_ANA_3_UNION;
#define ABB_TX_2G_ANA_3_TXLPF_CT_2G_START (0)
#define ABB_TX_2G_ANA_3_TXLPF_CT_2G_END (2)
#define ABB_TX_2G_ANA_3_DUM_EN_Q_2G_START (3)
#define ABB_TX_2G_ANA_3_DUM_EN_Q_2G_END (3)
#define ABB_TX_2G_ANA_3_DUM_EN_I_2G_START (4)
#define ABB_TX_2G_ANA_3_DUM_EN_I_2G_END (4)
#define ABB_TX_2G_ANA_3_TX_CLKD_CTRL_2G_START (7)
#define ABB_TX_2G_ANA_3_TX_CLKD_CTRL_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1_2G : 3;
        unsigned long ITR_OP3_2G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_2G_ANA_3_UNION;
#define ABB_RX_2G_ANA_3_ITR_OP1_2G_START (0)
#define ABB_RX_2G_ANA_3_ITR_OP1_2G_END (2)
#define ABB_RX_2G_ANA_3_ITR_OP3_2G_START (3)
#define ABB_RX_2G_ANA_3_ITR_OP3_2G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT_2G : 3;
        unsigned long ITR_DAC_2G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_2G_ANA_4_UNION;
#define ABB_RX_2G_ANA_4_ITR_QT_2G_START (0)
#define ABB_RX_2G_ANA_4_ITR_QT_2G_END (2)
#define ABB_RX_2G_ANA_4_ITR_DAC_2G_START (3)
#define ABB_RX_2G_ANA_4_ITR_DAC_2G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2_2G : 3;
        unsigned long IBCT_OP2_2G : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_2G_ANA_5_UNION;
#define ABB_RX_2G_ANA_5_ITR_OP2_2G_START (0)
#define ABB_RX_2G_ANA_5_ITR_OP2_2G_END (2)
#define ABB_RX_2G_ANA_5_IBCT_OP2_2G_START (3)
#define ABB_RX_2G_ANA_5_IBCT_OP2_2G_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT_3G : 3;
        unsigned long DUM_EN_Q_3G : 1;
        unsigned long DUM_EN_I_3G : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_ANA_3_UNION;
#define ABB_TX_CH0_3G_ANA_3_TXLPF_CT_3G_START (0)
#define ABB_TX_CH0_3G_ANA_3_TXLPF_CT_3G_END (2)
#define ABB_TX_CH0_3G_ANA_3_DUM_EN_Q_3G_START (3)
#define ABB_TX_CH0_3G_ANA_3_DUM_EN_Q_3G_END (3)
#define ABB_TX_CH0_3G_ANA_3_DUM_EN_I_3G_START (4)
#define ABB_TX_CH0_3G_ANA_3_DUM_EN_I_3G_END (4)
#define ABB_TX_CH0_3G_ANA_3_TX_CLKD_CTRL_3G_START (7)
#define ABB_TX_CH0_3G_ANA_3_TX_CLKD_CTRL_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1_3G : 3;
        unsigned long ITR_OP3_3G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_3G_ANA_3_UNION;
#define ABB_RX_CH0_3G_ANA_3_ITR_OP1_3G_START (0)
#define ABB_RX_CH0_3G_ANA_3_ITR_OP1_3G_END (2)
#define ABB_RX_CH0_3G_ANA_3_ITR_OP3_3G_START (3)
#define ABB_RX_CH0_3G_ANA_3_ITR_OP3_3G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT_3G : 3;
        unsigned long ITR_DAC_3G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_3G_ANA_4_UNION;
#define ABB_RX_CH0_3G_ANA_4_ITR_QT_3G_START (0)
#define ABB_RX_CH0_3G_ANA_4_ITR_QT_3G_END (2)
#define ABB_RX_CH0_3G_ANA_4_ITR_DAC_3G_START (3)
#define ABB_RX_CH0_3G_ANA_4_ITR_DAC_3G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2_3G : 3;
        unsigned long IBCT_OP2_3G : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_3G_ANA_5_UNION;
#define ABB_RX_CH0_3G_ANA_5_ITR_OP2_3G_START (0)
#define ABB_RX_CH0_3G_ANA_5_ITR_OP2_3G_END (2)
#define ABB_RX_CH0_3G_ANA_5_IBCT_OP2_3G_START (3)
#define ABB_RX_CH0_3G_ANA_5_IBCT_OP2_3G_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT_4G : 3;
        unsigned long DUM_EN_Q_4G : 1;
        unsigned long DUM_EN_I_4G : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_ANA_3_UNION;
#define ABB_TX_CH0_4G_ANA_3_TXLPF_CT_4G_START (0)
#define ABB_TX_CH0_4G_ANA_3_TXLPF_CT_4G_END (2)
#define ABB_TX_CH0_4G_ANA_3_DUM_EN_Q_4G_START (3)
#define ABB_TX_CH0_4G_ANA_3_DUM_EN_Q_4G_END (3)
#define ABB_TX_CH0_4G_ANA_3_DUM_EN_I_4G_START (4)
#define ABB_TX_CH0_4G_ANA_3_DUM_EN_I_4G_END (4)
#define ABB_TX_CH0_4G_ANA_3_TX_CLKD_CTRL_4G_START (7)
#define ABB_TX_CH0_4G_ANA_3_TX_CLKD_CTRL_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1_4G : 3;
        unsigned long ITR_OP3_4G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_4G_ANA_3_UNION;
#define ABB_RX_CH0_4G_ANA_3_ITR_OP1_4G_START (0)
#define ABB_RX_CH0_4G_ANA_3_ITR_OP1_4G_END (2)
#define ABB_RX_CH0_4G_ANA_3_ITR_OP3_4G_START (3)
#define ABB_RX_CH0_4G_ANA_3_ITR_OP3_4G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT_4G : 3;
        unsigned long ITR_DAC_4G : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_4G_ANA_4_UNION;
#define ABB_RX_CH0_4G_ANA_4_ITR_QT_4G_START (0)
#define ABB_RX_CH0_4G_ANA_4_ITR_QT_4G_END (2)
#define ABB_RX_CH0_4G_ANA_4_ITR_DAC_4G_START (3)
#define ABB_RX_CH0_4G_ANA_4_ITR_DAC_4G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2_4G : 3;
        unsigned long IBCT_OP2_4G : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_CH0_4G_ANA_5_UNION;
#define ABB_RX_CH0_4G_ANA_5_ITR_OP2_4G_START (0)
#define ABB_RX_CH0_4G_ANA_5_ITR_OP2_4G_END (2)
#define ABB_RX_CH0_4G_ANA_5_IBCT_OP2_4G_START (3)
#define ABB_RX_CH0_4G_ANA_5_IBCT_OP2_4G_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT_TDS : 3;
        unsigned long DUM_EN_Q_TDS : 1;
        unsigned long DUM_EN_I_TDS : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_TDS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_ANA_3_UNION;
#define ABB_TX_TDS_ANA_3_TXLPF_CT_TDS_START (0)
#define ABB_TX_TDS_ANA_3_TXLPF_CT_TDS_END (2)
#define ABB_TX_TDS_ANA_3_DUM_EN_Q_TDS_START (3)
#define ABB_TX_TDS_ANA_3_DUM_EN_Q_TDS_END (3)
#define ABB_TX_TDS_ANA_3_DUM_EN_I_TDS_START (4)
#define ABB_TX_TDS_ANA_3_DUM_EN_I_TDS_END (4)
#define ABB_TX_TDS_ANA_3_TX_CLKD_CTRL_TDS_START (7)
#define ABB_TX_TDS_ANA_3_TX_CLKD_CTRL_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1_TDS : 3;
        unsigned long ITR_OP3_TDS : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_TDS_ANA_3_UNION;
#define ABB_RX_TDS_ANA_3_ITR_OP1_TDS_START (0)
#define ABB_RX_TDS_ANA_3_ITR_OP1_TDS_END (2)
#define ABB_RX_TDS_ANA_3_ITR_OP3_TDS_START (3)
#define ABB_RX_TDS_ANA_3_ITR_OP3_TDS_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT_TDS : 3;
        unsigned long ITR_DAC_TDS : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_TDS_ANA_4_UNION;
#define ABB_RX_TDS_ANA_4_ITR_QT_TDS_START (0)
#define ABB_RX_TDS_ANA_4_ITR_QT_TDS_END (2)
#define ABB_RX_TDS_ANA_4_ITR_DAC_TDS_START (3)
#define ABB_RX_TDS_ANA_4_ITR_DAC_TDS_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2_TDS : 3;
        unsigned long IBCT_OP2_TDS : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_TDS_ANA_5_UNION;
#define ABB_RX_TDS_ANA_5_ITR_OP2_TDS_START (0)
#define ABB_RX_TDS_ANA_5_ITR_OP2_TDS_END (2)
#define ABB_RX_TDS_ANA_5_IBCT_OP2_TDS_START (3)
#define ABB_RX_TDS_ANA_5_IBCT_OP2_TDS_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT_IDLE : 3;
        unsigned long DUM_EN_Q_IDLE : 1;
        unsigned long DUM_EN_I_IDLE : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_IDLE : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_ANA_3_UNION;
#define ABB_TX_IDLE_ANA_3_TXLPF_CT_IDLE_START (0)
#define ABB_TX_IDLE_ANA_3_TXLPF_CT_IDLE_END (2)
#define ABB_TX_IDLE_ANA_3_DUM_EN_Q_IDLE_START (3)
#define ABB_TX_IDLE_ANA_3_DUM_EN_Q_IDLE_END (3)
#define ABB_TX_IDLE_ANA_3_DUM_EN_I_IDLE_START (4)
#define ABB_TX_IDLE_ANA_3_DUM_EN_I_IDLE_END (4)
#define ABB_TX_IDLE_ANA_3_TX_CLKD_CTRL_IDLE_START (7)
#define ABB_TX_IDLE_ANA_3_TX_CLKD_CTRL_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1_IDLE : 3;
        unsigned long ITR_OP3_IDLE : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_IDLE_ANA_3_UNION;
#define ABB_RX_IDLE_ANA_3_ITR_OP1_IDLE_START (0)
#define ABB_RX_IDLE_ANA_3_ITR_OP1_IDLE_END (2)
#define ABB_RX_IDLE_ANA_3_ITR_OP3_IDLE_START (3)
#define ABB_RX_IDLE_ANA_3_ITR_OP3_IDLE_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT_IDLE : 3;
        unsigned long ITR_DAC_IDLE : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_IDLE_ANA_4_UNION;
#define ABB_RX_IDLE_ANA_4_ITR_QT_IDLE_START (0)
#define ABB_RX_IDLE_ANA_4_ITR_QT_IDLE_END (2)
#define ABB_RX_IDLE_ANA_4_ITR_DAC_IDLE_START (3)
#define ABB_RX_IDLE_ANA_4_ITR_DAC_IDLE_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2_IDLE : 3;
        unsigned long IBCT_OP2_IDLE : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_5_UNION;
#define ABB_RX_IDLE_ANA_5_ITR_OP2_IDLE_START (0)
#define ABB_RX_IDLE_ANA_5_ITR_OP2_IDLE_END (2)
#define ABB_RX_IDLE_ANA_5_IBCT_OP2_IDLE_START (3)
#define ABB_RX_IDLE_ANA_5_IBCT_OP2_IDLE_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RXC_IBCT2 : 2;
        unsigned long CH0_RXC_IBCT1 : 2;
        unsigned long CH0_RXC_MODE : 3;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA27_UNION;
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_IBCT2_START (0)
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_IBCT2_END (1)
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_IBCT1_START (2)
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_IBCT1_END (3)
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_MODE_START (4)
#define ABB_CH0_REG_DEBUG_ANA27_CH0_RXC_MODE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_2G : 2;
        unsigned long BWCT_OP2_2G : 2;
        unsigned long BWCT_OP1_2G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_2G_ANA_6_UNION;
#define ABB_RX_2G_ANA_6_BWCT_OP3_2G_START (2)
#define ABB_RX_2G_ANA_6_BWCT_OP3_2G_END (3)
#define ABB_RX_2G_ANA_6_BWCT_OP2_2G_START (4)
#define ABB_RX_2G_ANA_6_BWCT_OP2_2G_END (5)
#define ABB_RX_2G_ANA_6_BWCT_OP1_2G_START (6)
#define ABB_RX_2G_ANA_6_BWCT_OP1_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_2G : 1;
        unsigned long GMBIAS_EN_2G : 1;
        unsigned long MODU_DEPTH_CTRL_2G : 1;
        unsigned long RX_DAC_LP_CTRL_2G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_ANA_7_UNION;
#define ABB_RX_2G_ANA_7_QT_REF_SEL_2G_START (4)
#define ABB_RX_2G_ANA_7_QT_REF_SEL_2G_END (4)
#define ABB_RX_2G_ANA_7_GMBIAS_EN_2G_START (5)
#define ABB_RX_2G_ANA_7_GMBIAS_EN_2G_END (5)
#define ABB_RX_2G_ANA_7_MODU_DEPTH_CTRL_2G_START (6)
#define ABB_RX_2G_ANA_7_MODU_DEPTH_CTRL_2G_END (6)
#define ABB_RX_2G_ANA_7_RX_DAC_LP_CTRL_2G_START (7)
#define ABB_RX_2G_ANA_7_RX_DAC_LP_CTRL_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA_2G : 5;
        unsigned long CK_CTRL_MODE_2G : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_ANA_8_UNION;
#define ABB_RX_2G_ANA_8_CK_CTRL_DATA_2G_START (0)
#define ABB_RX_2G_ANA_8_CK_CTRL_DATA_2G_END (4)
#define ABB_RX_2G_ANA_8_CK_CTRL_MODE_2G_START (5)
#define ABB_RX_2G_ANA_8_CK_CTRL_MODE_2G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_3G : 2;
        unsigned long BWCT_OP2_3G : 2;
        unsigned long BWCT_OP1_3G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_3G_ANA_6_UNION;
#define ABB_RX_3G_ANA_6_BWCT_OP3_3G_START (2)
#define ABB_RX_3G_ANA_6_BWCT_OP3_3G_END (3)
#define ABB_RX_3G_ANA_6_BWCT_OP2_3G_START (4)
#define ABB_RX_3G_ANA_6_BWCT_OP2_3G_END (5)
#define ABB_RX_3G_ANA_6_BWCT_OP1_3G_START (6)
#define ABB_RX_3G_ANA_6_BWCT_OP1_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_3G : 1;
        unsigned long GMBIAS_EN_3G : 1;
        unsigned long MODU_DEPTH_CTRL_3G : 1;
        unsigned long RX_DAC_LP_CTRL_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_3G_ANA_7_UNION;
#define ABB_RX_3G_ANA_7_QT_REF_SEL_3G_START (4)
#define ABB_RX_3G_ANA_7_QT_REF_SEL_3G_END (4)
#define ABB_RX_3G_ANA_7_GMBIAS_EN_3G_START (5)
#define ABB_RX_3G_ANA_7_GMBIAS_EN_3G_END (5)
#define ABB_RX_3G_ANA_7_MODU_DEPTH_CTRL_3G_START (6)
#define ABB_RX_3G_ANA_7_MODU_DEPTH_CTRL_3G_END (6)
#define ABB_RX_3G_ANA_7_RX_DAC_LP_CTRL_3G_START (7)
#define ABB_RX_3G_ANA_7_RX_DAC_LP_CTRL_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA_3G : 5;
        unsigned long CK_CTRL_MODE_3G : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_3G_ANA_8_UNION;
#define ABB_RX_3G_ANA_8_CK_CTRL_DATA_3G_START (0)
#define ABB_RX_3G_ANA_8_CK_CTRL_DATA_3G_END (4)
#define ABB_RX_3G_ANA_8_CK_CTRL_MODE_3G_START (5)
#define ABB_RX_3G_ANA_8_CK_CTRL_MODE_3G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_4G : 2;
        unsigned long BWCT_OP2_4G : 2;
        unsigned long BWCT_OP1_4G : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_4G_ANA_6_UNION;
#define ABB_RX_4G_ANA_6_BWCT_OP3_4G_START (2)
#define ABB_RX_4G_ANA_6_BWCT_OP3_4G_END (3)
#define ABB_RX_4G_ANA_6_BWCT_OP2_4G_START (4)
#define ABB_RX_4G_ANA_6_BWCT_OP2_4G_END (5)
#define ABB_RX_4G_ANA_6_BWCT_OP1_4G_START (6)
#define ABB_RX_4G_ANA_6_BWCT_OP1_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_4G : 1;
        unsigned long GMBIAS_EN_4G : 1;
        unsigned long MODU_DEPTH_CTRL_4G : 1;
        unsigned long RX_DAC_LP_CTRL_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_4G_ANA_7_UNION;
#define ABB_RX_4G_ANA_7_QT_REF_SEL_4G_START (4)
#define ABB_RX_4G_ANA_7_QT_REF_SEL_4G_END (4)
#define ABB_RX_4G_ANA_7_GMBIAS_EN_4G_START (5)
#define ABB_RX_4G_ANA_7_GMBIAS_EN_4G_END (5)
#define ABB_RX_4G_ANA_7_MODU_DEPTH_CTRL_4G_START (6)
#define ABB_RX_4G_ANA_7_MODU_DEPTH_CTRL_4G_END (6)
#define ABB_RX_4G_ANA_7_RX_DAC_LP_CTRL_4G_START (7)
#define ABB_RX_4G_ANA_7_RX_DAC_LP_CTRL_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA_4G : 5;
        unsigned long CK_CTRL_MODE_4G : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_4G_ANA_8_UNION;
#define ABB_RX_4G_ANA_8_CK_CTRL_DATA_4G_START (0)
#define ABB_RX_4G_ANA_8_CK_CTRL_DATA_4G_END (4)
#define ABB_RX_4G_ANA_8_CK_CTRL_MODE_4G_START (5)
#define ABB_RX_4G_ANA_8_CK_CTRL_MODE_4G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_TDS : 2;
        unsigned long BWCT_OP2_TDS : 2;
        unsigned long BWCT_OP1_TDS : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_TDS_ANA_6_UNION;
#define ABB_RX_TDS_ANA_6_BWCT_OP3_TDS_START (2)
#define ABB_RX_TDS_ANA_6_BWCT_OP3_TDS_END (3)
#define ABB_RX_TDS_ANA_6_BWCT_OP2_TDS_START (4)
#define ABB_RX_TDS_ANA_6_BWCT_OP2_TDS_END (5)
#define ABB_RX_TDS_ANA_6_BWCT_OP1_TDS_START (6)
#define ABB_RX_TDS_ANA_6_BWCT_OP1_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_TDS : 1;
        unsigned long GMBIAS_EN_TDS : 1;
        unsigned long MODU_DEPTH_CTRL_TDS : 1;
        unsigned long RX_DAC_LP_CTRL_TDS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_ANA_7_UNION;
#define ABB_RX_TDS_ANA_7_QT_REF_SEL_TDS_START (4)
#define ABB_RX_TDS_ANA_7_QT_REF_SEL_TDS_END (4)
#define ABB_RX_TDS_ANA_7_GMBIAS_EN_TDS_START (5)
#define ABB_RX_TDS_ANA_7_GMBIAS_EN_TDS_END (5)
#define ABB_RX_TDS_ANA_7_MODU_DEPTH_CTRL_TDS_START (6)
#define ABB_RX_TDS_ANA_7_MODU_DEPTH_CTRL_TDS_END (6)
#define ABB_RX_TDS_ANA_7_RX_DAC_LP_CTRL_TDS_START (7)
#define ABB_RX_TDS_ANA_7_RX_DAC_LP_CTRL_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA_TDS : 5;
        unsigned long CK_CTRL_MODE_TDS : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_ANA_8_UNION;
#define ABB_RX_TDS_ANA_8_CK_CTRL_DATA_TDS_START (0)
#define ABB_RX_TDS_ANA_8_CK_CTRL_DATA_TDS_END (4)
#define ABB_RX_TDS_ANA_8_CK_CTRL_MODE_TDS_START (5)
#define ABB_RX_TDS_ANA_8_CK_CTRL_MODE_TDS_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_IDLE : 2;
        unsigned long BWCT_OP2_IDLE : 2;
        unsigned long BWCT_OP1_IDLE : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_6_UNION;
#define ABB_RX_IDLE_ANA_6_BWCT_OP3_IDLE_START (2)
#define ABB_RX_IDLE_ANA_6_BWCT_OP3_IDLE_END (3)
#define ABB_RX_IDLE_ANA_6_BWCT_OP2_IDLE_START (4)
#define ABB_RX_IDLE_ANA_6_BWCT_OP2_IDLE_END (5)
#define ABB_RX_IDLE_ANA_6_BWCT_OP1_IDLE_START (6)
#define ABB_RX_IDLE_ANA_6_BWCT_OP1_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_IDLE : 1;
        unsigned long GMBIAS_EN_IDLE : 1;
        unsigned long MODU_DEPTH_CTRL_IDLE : 1;
        unsigned long RX_DAC_LP_CTRL_IDLE : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_7_UNION;
#define ABB_RX_IDLE_ANA_7_QT_REF_SEL_IDLE_START (4)
#define ABB_RX_IDLE_ANA_7_QT_REF_SEL_IDLE_END (4)
#define ABB_RX_IDLE_ANA_7_GMBIAS_EN_IDLE_START (5)
#define ABB_RX_IDLE_ANA_7_GMBIAS_EN_IDLE_END (5)
#define ABB_RX_IDLE_ANA_7_MODU_DEPTH_CTRL_IDLE_START (6)
#define ABB_RX_IDLE_ANA_7_MODU_DEPTH_CTRL_IDLE_END (6)
#define ABB_RX_IDLE_ANA_7_RX_DAC_LP_CTRL_IDLE_START (7)
#define ABB_RX_IDLE_ANA_7_RX_DAC_LP_CTRL_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA_IDLE : 5;
        unsigned long CK_CTRL_MODE_IDLE : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_8_UNION;
#define ABB_RX_IDLE_ANA_8_CK_CTRL_DATA_IDLE_START (0)
#define ABB_RX_IDLE_ANA_8_CK_CTRL_DATA_IDLE_END (4)
#define ABB_RX_IDLE_ANA_8_CK_CTRL_MODE_IDLE_START (5)
#define ABB_RX_IDLE_ANA_8_CK_CTRL_MODE_IDLE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_en_sel : 1;
        unsigned long ch0_rxb_en_sel : 1;
        unsigned long ch0_tx_en_sel : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_LINE_SEL_UNION;
#define ABB_CH0_LINE_SEL_ch0_rxa_en_sel_START (0)
#define ABB_CH0_LINE_SEL_ch0_rxa_en_sel_END (0)
#define ABB_CH0_LINE_SEL_ch0_rxb_en_sel_START (1)
#define ABB_CH0_LINE_SEL_ch0_rxb_en_sel_END (1)
#define ABB_CH0_LINE_SEL_ch0_tx_en_sel_START (2)
#define ABB_CH0_LINE_SEL_ch0_tx_en_sel_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_line_ctrl_mode_cfg : 3;
        unsigned long ch0_line_ctrl_mode_sel : 1;
        unsigned long ch0_blk_en_cfg : 1;
        unsigned long ch0_blk_en_sel : 1;
        unsigned long ch0_cfr_en_cfg : 1;
        unsigned long ch0_cfr_en_sel : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_LINE_CFG_UNION;
#define ABB_CH0_LINE_CFG_ch0_line_ctrl_mode_cfg_START (0)
#define ABB_CH0_LINE_CFG_ch0_line_ctrl_mode_cfg_END (2)
#define ABB_CH0_LINE_CFG_ch0_line_ctrl_mode_sel_START (3)
#define ABB_CH0_LINE_CFG_ch0_line_ctrl_mode_sel_END (3)
#define ABB_CH0_LINE_CFG_ch0_blk_en_cfg_START (4)
#define ABB_CH0_LINE_CFG_ch0_blk_en_cfg_END (4)
#define ABB_CH0_LINE_CFG_ch0_blk_en_sel_START (5)
#define ABB_CH0_LINE_CFG_ch0_blk_en_sel_END (5)
#define ABB_CH0_LINE_CFG_ch0_cfr_en_cfg_START (6)
#define ABB_CH0_LINE_CFG_ch0_cfr_en_cfg_END (6)
#define ABB_CH0_LINE_CFG_ch0_cfr_en_sel_START (7)
#define ABB_CH0_LINE_CFG_ch0_cfr_en_sel_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_blk_clk_sel : 1;
        unsigned long ch0_ee_clk_sel : 1;
        unsigned long ch0_cfr_clk_sel : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_CLK_SEL_UNION;
#define ABB_CH0_CLK_SEL_ch0_blk_clk_sel_START (0)
#define ABB_CH0_CLK_SEL_ch0_blk_clk_sel_END (0)
#define ABB_CH0_CLK_SEL_ch0_ee_clk_sel_START (1)
#define ABB_CH0_CLK_SEL_ch0_ee_clk_sel_END (1)
#define ABB_CH0_CLK_SEL_ch0_cfr_clk_sel_START (2)
#define ABB_CH0_CLK_SEL_ch0_cfr_clk_sel_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_en_rpt : 1;
        unsigned long ch0_rxb_en_rpt : 1;
        unsigned long ch0_tx_en_rpt : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_LINE_RPT0_UNION;
#define ABB_CH0_LINE_RPT0_ch0_rxa_en_rpt_START (0)
#define ABB_CH0_LINE_RPT0_ch0_rxa_en_rpt_END (0)
#define ABB_CH0_LINE_RPT0_ch0_rxb_en_rpt_START (1)
#define ABB_CH0_LINE_RPT0_ch0_rxb_en_rpt_END (1)
#define ABB_CH0_LINE_RPT0_ch0_tx_en_rpt_START (2)
#define ABB_CH0_LINE_RPT0_ch0_tx_en_rpt_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_line_ctrl_mode_rpt : 3;
        unsigned long reserved_0 : 1;
        unsigned long ch0_rxa_blk_en_rpt : 1;
        unsigned long ch0_rxb_blk_en_rpt : 1;
        unsigned long ch0_cfr_en_rpt : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_LINE_RPT1_UNION;
#define ABB_CH0_LINE_RPT1_ch0_line_ctrl_mode_rpt_START (0)
#define ABB_CH0_LINE_RPT1_ch0_line_ctrl_mode_rpt_END (2)
#define ABB_CH0_LINE_RPT1_ch0_rxa_blk_en_rpt_START (4)
#define ABB_CH0_LINE_RPT1_ch0_rxa_blk_en_rpt_END (4)
#define ABB_CH0_LINE_RPT1_ch0_rxb_blk_en_rpt_START (5)
#define ABB_CH0_LINE_RPT1_ch0_rxb_blk_en_rpt_END (5)
#define ABB_CH0_LINE_RPT1_ch0_cfr_en_rpt_START (6)
#define ABB_CH0_LINE_RPT1_ch0_cfr_en_rpt_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rx_comp_sel_rpt : 1;
        unsigned long ch0_rx_comp_fix_rpt : 1;
        unsigned long ch0_rx_hb_bp_rpt : 1;
        unsigned long ch0_rx_rate_rpt : 2;
        unsigned long ch0_rx_mode_dig_rpt : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RX_MODE_RPT_UNION;
#define ABB_CH0_RX_MODE_RPT_ch0_rx_comp_sel_rpt_START (0)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_comp_sel_rpt_END (0)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_comp_fix_rpt_START (1)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_comp_fix_rpt_END (1)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_hb_bp_rpt_START (2)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_hb_bp_rpt_END (2)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_rate_rpt_START (3)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_rate_rpt_END (4)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_mode_dig_rpt_START (5)
#define ABB_CH0_RX_MODE_RPT_ch0_rx_mode_dig_rpt_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_comp_bp_rpt : 1;
        unsigned long ch0_tx_hb_bp_rpt : 1;
        unsigned long ch0_tx_rate_rpt : 3;
        unsigned long ch0_tx_mode_dig_rpt : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_TX_MODE_RPT_UNION;
#define ABB_CH0_TX_MODE_RPT_ch0_tx_comp_bp_rpt_START (0)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_comp_bp_rpt_END (0)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_hb_bp_rpt_START (1)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_hb_bp_rpt_END (1)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_rate_rpt_START (2)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_rate_rpt_END (4)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_mode_dig_rpt_START (5)
#define ABB_CH0_TX_MODE_RPT_ch0_tx_mode_dig_rpt_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rx_aclk_rpt : 1;
        unsigned long ch0_rx_clk_rpt : 1;
        unsigned long ch0_rx_vld_rpt : 1;
        unsigned long ch0_rxa_data_rpt : 1;
        unsigned long ch0_rxa_overflow_rpt : 1;
        unsigned long ch0_rxb_data_rpt : 1;
        unsigned long ch0_rxb_overflow_rpt : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RX_STATE_RPT_UNION;
#define ABB_CH0_RX_STATE_RPT_ch0_rx_aclk_rpt_START (0)
#define ABB_CH0_RX_STATE_RPT_ch0_rx_aclk_rpt_END (0)
#define ABB_CH0_RX_STATE_RPT_ch0_rx_clk_rpt_START (1)
#define ABB_CH0_RX_STATE_RPT_ch0_rx_clk_rpt_END (1)
#define ABB_CH0_RX_STATE_RPT_ch0_rx_vld_rpt_START (2)
#define ABB_CH0_RX_STATE_RPT_ch0_rx_vld_rpt_END (2)
#define ABB_CH0_RX_STATE_RPT_ch0_rxa_data_rpt_START (3)
#define ABB_CH0_RX_STATE_RPT_ch0_rxa_data_rpt_END (3)
#define ABB_CH0_RX_STATE_RPT_ch0_rxa_overflow_rpt_START (4)
#define ABB_CH0_RX_STATE_RPT_ch0_rxa_overflow_rpt_END (4)
#define ABB_CH0_RX_STATE_RPT_ch0_rxb_data_rpt_START (5)
#define ABB_CH0_RX_STATE_RPT_ch0_rxb_data_rpt_END (5)
#define ABB_CH0_RX_STATE_RPT_ch0_rxb_overflow_rpt_START (6)
#define ABB_CH0_RX_STATE_RPT_ch0_rxb_overflow_rpt_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_aclk_rpt : 1;
        unsigned long ch0_tx_dclk_rpt : 1;
        unsigned long ch0_tx_vld_rpt : 1;
        unsigned long ch0_tx_clk_rpt : 1;
        unsigned long ch0_tx_data_rpt : 1;
        unsigned long ch0_tx_overflow_rpt : 1;
        unsigned long ch0_tx_fifo_wfull : 1;
        unsigned long ch0_tx_fifo_rempty : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_TX_STATE_RPT_UNION;
#define ABB_CH0_TX_STATE_RPT_ch0_tx_aclk_rpt_START (0)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_aclk_rpt_END (0)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_dclk_rpt_START (1)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_dclk_rpt_END (1)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_vld_rpt_START (2)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_vld_rpt_END (2)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_clk_rpt_START (3)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_clk_rpt_END (3)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_data_rpt_START (4)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_data_rpt_END (4)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_overflow_rpt_START (5)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_overflow_rpt_END (5)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_fifo_wfull_START (6)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_fifo_wfull_END (6)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_fifo_rempty_START (7)
#define ABB_CH0_TX_STATE_RPT_ch0_tx_fifo_rempty_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxb_ch_sel : 1;
        unsigned long reserved : 7;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RXB_CH_SEL_UNION;
#define ABB_RXB_CH_SEL_rxb_ch_sel_START (0)
#define ABB_RXB_CH_SEL_rxb_ch_sel_END (0)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tds_rx_dly : 3;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_TDS_RX_DLY_UNION;
#define ABB_CH0_TDS_RX_DLY_ch0_tds_rx_dly_START (0)
#define ABB_CH0_TDS_RX_DLY_ch0_tds_rx_dly_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_cfr_pdet_thr2 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_CFR_PDET_THR2_UNION;
#define ABB_CH0_CFR_PDET_THR2_ch0_cfr_pdet_thr2_START (0)
#define ABB_CH0_CFR_PDET_THR2_ch0_cfr_pdet_thr2_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_i_ea3 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_I_EA3_UNION;
#define ABB_CH0_RXA_I_EA3_ch0_rxa_i_ea3_START (0)
#define ABB_CH0_RXA_I_EA3_ch0_rxa_i_ea3_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_i_ec6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_I_EC6_UNION;
#define ABB_CH0_RXA_I_EC6_ch0_rxa_i_ec6_START (0)
#define ABB_CH0_RXA_I_EC6_ch0_rxa_i_ec6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_i_ed6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_I_ED6_UNION;
#define ABB_CH0_RXA_I_ED6_ch0_rxa_i_ed6_START (0)
#define ABB_CH0_RXA_I_ED6_ch0_rxa_i_ed6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_q_ea3 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_Q_EA3_UNION;
#define ABB_CH0_RXA_Q_EA3_ch0_rxa_q_ea3_START (0)
#define ABB_CH0_RXA_Q_EA3_ch0_rxa_q_ea3_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_q_ec6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_Q_EC6_UNION;
#define ABB_CH0_RXA_Q_EC6_ch0_rxa_q_ec6_START (0)
#define ABB_CH0_RXA_Q_EC6_ch0_rxa_q_ec6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_q_ed6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXA_Q_ED6_UNION;
#define ABB_CH0_RXA_Q_ED6_ch0_rxa_q_ed6_START (0)
#define ABB_CH0_RXA_Q_ED6_ch0_rxa_q_ed6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_flush_width_msb : 3;
        unsigned long ch0_flush_value : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_FLUSH_CFG1_UNION;
#define ABB_CH0_FLUSH_CFG1_ch0_flush_width_msb_START (0)
#define ABB_CH0_FLUSH_CFG1_ch0_flush_width_msb_END (2)
#define ABB_CH0_FLUSH_CFG1_ch0_flush_value_START (3)
#define ABB_CH0_FLUSH_CFG1_ch0_flush_value_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_i_ea3 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_I_EA3_UNION;
#define ABB_CH0_RXB_I_EA3_ch0_rxb_i_ea3_START (0)
#define ABB_CH0_RXB_I_EA3_ch0_rxb_i_ea3_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_i_ec6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_I_EC6_UNION;
#define ABB_CH0_RXB_I_EC6_ch0_rxb_i_ec6_START (0)
#define ABB_CH0_RXB_I_EC6_ch0_rxb_i_ec6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_i_ed6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_I_ED6_UNION;
#define ABB_CH0_RXB_I_ED6_ch0_rxb_i_ed6_START (0)
#define ABB_CH0_RXB_I_ED6_ch0_rxb_i_ed6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_q_ea3 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_Q_EA3_UNION;
#define ABB_CH0_RXB_Q_EA3_ch0_rxb_q_ea3_START (0)
#define ABB_CH0_RXB_Q_EA3_ch0_rxb_q_ea3_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_q_ec6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_Q_EC6_UNION;
#define ABB_CH0_RXB_Q_EC6_ch0_rxb_q_ec6_START (0)
#define ABB_CH0_RXB_Q_EC6_ch0_rxb_q_ec6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxb_q_ed6 : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_RXB_Q_ED6_UNION;
#define ABB_CH0_RXB_Q_ED6_ch0_rxb_q_ed6_START (0)
#define ABB_CH0_RXB_Q_ED6_ch0_rxb_q_ed6_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rx_comp_sel_b0_c : 1;
        unsigned long rx_comp_fix_c : 1;
        unsigned long rx_hb_bp_c : 1;
        unsigned long rx_rate_c : 2;
        unsigned long rx_mode_dig_c : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_C_DIG_1_UNION;
#define ABB_RX_C_DIG_1_rx_comp_sel_b0_c_START (0)
#define ABB_RX_C_DIG_1_rx_comp_sel_b0_c_END (0)
#define ABB_RX_C_DIG_1_rx_comp_fix_c_START (1)
#define ABB_RX_C_DIG_1_rx_comp_fix_c_END (1)
#define ABB_RX_C_DIG_1_rx_hb_bp_c_START (2)
#define ABB_RX_C_DIG_1_rx_hb_bp_c_END (2)
#define ABB_RX_C_DIG_1_rx_rate_c_START (3)
#define ABB_RX_C_DIG_1_rx_rate_c_END (4)
#define ABB_RX_C_DIG_1_rx_mode_dig_c_START (5)
#define ABB_RX_C_DIG_1_rx_mode_dig_c_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxa_pd_c : 1;
        unsigned long rxb_pd_c : 1;
        unsigned long gain_sel_c : 2;
        unsigned long rx_comp_bp_c : 1;
        unsigned long rx_clk_inv_c : 1;
        unsigned long rx_flush_en_c : 1;
        unsigned long rx_comp_sel_b1_c : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_C_DIG_2_UNION;
#define ABB_RX_C_DIG_2_rxa_pd_c_START (0)
#define ABB_RX_C_DIG_2_rxa_pd_c_END (0)
#define ABB_RX_C_DIG_2_rxb_pd_c_START (1)
#define ABB_RX_C_DIG_2_rxb_pd_c_END (1)
#define ABB_RX_C_DIG_2_gain_sel_c_START (2)
#define ABB_RX_C_DIG_2_gain_sel_c_END (3)
#define ABB_RX_C_DIG_2_rx_comp_bp_c_START (4)
#define ABB_RX_C_DIG_2_rx_comp_bp_c_END (4)
#define ABB_RX_C_DIG_2_rx_clk_inv_c_START (5)
#define ABB_RX_C_DIG_2_rx_clk_inv_c_END (5)
#define ABB_RX_C_DIG_2_rx_flush_en_c_START (6)
#define ABB_RX_C_DIG_2_rx_flush_en_c_END (6)
#define ABB_RX_C_DIG_2_rx_comp_sel_b1_c_START (7)
#define ABB_RX_C_DIG_2_rx_comp_sel_b1_c_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_bp_c : 1;
        unsigned long tx_hb_bp_c : 1;
        unsigned long tx_rate_c : 3;
        unsigned long tx_mode_dig_c : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_DIG_1_UNION;
#define ABB_TX_C_DIG_1_tx_comp_bp_c_START (0)
#define ABB_TX_C_DIG_1_tx_comp_bp_c_END (0)
#define ABB_TX_C_DIG_1_tx_hb_bp_c_START (1)
#define ABB_TX_C_DIG_1_tx_hb_bp_c_END (1)
#define ABB_TX_C_DIG_1_tx_rate_c_START (2)
#define ABB_TX_C_DIG_1_tx_rate_c_END (4)
#define ABB_TX_C_DIG_1_tx_mode_dig_c_START (5)
#define ABB_TX_C_DIG_1_tx_mode_dig_c_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_q_pd_c : 1;
        unsigned long tx_i_pd_c : 1;
        unsigned long dem_const_c : 2;
        unsigned long uddwa_dith_en_c : 1;
        unsigned long dem_dwa_en_c : 1;
        unsigned long dem_lsb_bp_c : 1;
        unsigned long dem_msb_bp_c : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_DIG_2_UNION;
#define ABB_TX_C_DIG_2_tx_q_pd_c_START (0)
#define ABB_TX_C_DIG_2_tx_q_pd_c_END (0)
#define ABB_TX_C_DIG_2_tx_i_pd_c_START (1)
#define ABB_TX_C_DIG_2_tx_i_pd_c_END (1)
#define ABB_TX_C_DIG_2_dem_const_c_START (2)
#define ABB_TX_C_DIG_2_dem_const_c_END (3)
#define ABB_TX_C_DIG_2_uddwa_dith_en_c_START (4)
#define ABB_TX_C_DIG_2_uddwa_dith_en_c_END (4)
#define ABB_TX_C_DIG_2_dem_dwa_en_c_START (5)
#define ABB_TX_C_DIG_2_dem_dwa_en_c_END (5)
#define ABB_TX_C_DIG_2_dem_lsb_bp_c_START (6)
#define ABB_TX_C_DIG_2_dem_lsb_bp_c_END (6)
#define ABB_TX_C_DIG_2_dem_msb_bp_c_START (7)
#define ABB_TX_C_DIG_2_dem_msb_bp_c_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_cfr_bp_c : 1;
        unsigned long tx_flush_en_c : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_DIG_3_UNION;
#define ABB_TX_C_DIG_3_tx_cfr_bp_c_START (0)
#define ABB_TX_C_DIG_3_tx_cfr_bp_c_END (0)
#define ABB_TX_C_DIG_3_tx_flush_en_c_START (1)
#define ABB_TX_C_DIG_3_tx_flush_en_c_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long DEM_MOD_B0_C : 1;
        unsigned long RX_MODE_CLK_C : 2;
        unsigned long DEM_MOD_B1_C : 1;
        unsigned long RXB_Q_PD_C : 1;
        unsigned long RXB_I_PD_C : 1;
        unsigned long RXA_Q_PD_C : 1;
        unsigned long RXA_I_PD_C : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_C_ANA_1_UNION;
#define ABB_RX_C_ANA_1_DEM_MOD_B0_C_START (0)
#define ABB_RX_C_ANA_1_DEM_MOD_B0_C_END (0)
#define ABB_RX_C_ANA_1_RX_MODE_CLK_C_START (1)
#define ABB_RX_C_ANA_1_RX_MODE_CLK_C_END (2)
#define ABB_RX_C_ANA_1_DEM_MOD_B1_C_START (3)
#define ABB_RX_C_ANA_1_DEM_MOD_B1_C_END (3)
#define ABB_RX_C_ANA_1_RXB_Q_PD_C_START (4)
#define ABB_RX_C_ANA_1_RXB_Q_PD_C_END (4)
#define ABB_RX_C_ANA_1_RXB_I_PD_C_START (5)
#define ABB_RX_C_ANA_1_RXB_I_PD_C_END (5)
#define ABB_RX_C_ANA_1_RXA_Q_PD_C_START (6)
#define ABB_RX_C_ANA_1_RXA_Q_PD_C_END (6)
#define ABB_RX_C_ANA_1_RXA_I_PD_C_START (7)
#define ABB_RX_C_ANA_1_RXA_I_PD_C_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long RX_MODE_C : 1;
        unsigned long reserved : 1;
        unsigned long IBCT_QT : 2;
        unsigned long IBCT_OP3 : 2;
        unsigned long IBCT_OP1 : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_2_UNION;
#define ABB_RX_C_ANA_2_RX_MODE_C_START (0)
#define ABB_RX_C_ANA_2_RX_MODE_C_END (0)
#define ABB_RX_C_ANA_2_IBCT_QT_START (2)
#define ABB_RX_C_ANA_2_IBCT_QT_END (3)
#define ABB_RX_C_ANA_2_IBCT_OP3_START (4)
#define ABB_RX_C_ANA_2_IBCT_OP3_END (5)
#define ABB_RX_C_ANA_2_IBCT_OP1_START (6)
#define ABB_RX_C_ANA_2_IBCT_OP1_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP1 : 3;
        unsigned long ITR_OP3 : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_3_UNION;
#define ABB_RX_C_ANA_3_ITR_OP1_START (0)
#define ABB_RX_C_ANA_3_ITR_OP1_END (2)
#define ABB_RX_C_ANA_3_ITR_OP3_START (3)
#define ABB_RX_C_ANA_3_ITR_OP3_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_QT : 3;
        unsigned long ITR_DAC : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_4_UNION;
#define ABB_RX_C_ANA_4_ITR_QT_START (0)
#define ABB_RX_C_ANA_4_ITR_QT_END (2)
#define ABB_RX_C_ANA_4_ITR_DAC_START (3)
#define ABB_RX_C_ANA_4_ITR_DAC_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ITR_OP2 : 3;
        unsigned long IBCT_OP2 : 2;
        unsigned long reserved : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_5_UNION;
#define ABB_RX_C_ANA_5_ITR_OP2_START (0)
#define ABB_RX_C_ANA_5_ITR_OP2_END (2)
#define ABB_RX_C_ANA_5_IBCT_OP2_START (3)
#define ABB_RX_C_ANA_5_IBCT_OP2_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3 : 2;
        unsigned long BWCT_OP2 : 2;
        unsigned long BWCT_OP1 : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_6_UNION;
#define ABB_RX_C_ANA_6_BWCT_OP3_START (2)
#define ABB_RX_C_ANA_6_BWCT_OP3_END (3)
#define ABB_RX_C_ANA_6_BWCT_OP2_START (4)
#define ABB_RX_C_ANA_6_BWCT_OP2_END (5)
#define ABB_RX_C_ANA_6_BWCT_OP1_START (6)
#define ABB_RX_C_ANA_6_BWCT_OP1_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL : 1;
        unsigned long GMBIAS_EN : 1;
        unsigned long MODU_DEPTH_CTRL : 1;
        unsigned long RX_DAC_LP_CTRL : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_C_ANA_7_UNION;
#define ABB_RX_C_ANA_7_QT_REF_SEL_START (4)
#define ABB_RX_C_ANA_7_QT_REF_SEL_END (4)
#define ABB_RX_C_ANA_7_GMBIAS_EN_START (5)
#define ABB_RX_C_ANA_7_GMBIAS_EN_END (5)
#define ABB_RX_C_ANA_7_MODU_DEPTH_CTRL_START (6)
#define ABB_RX_C_ANA_7_MODU_DEPTH_CTRL_END (6)
#define ABB_RX_C_ANA_7_RX_DAC_LP_CTRL_START (7)
#define ABB_RX_C_ANA_7_RX_DAC_LP_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CK_CTRL_DATA : 5;
        unsigned long CK_CTRL_MODE : 2;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RX_C_ANA_8_UNION;
#define ABB_RX_C_ANA_8_CK_CTRL_DATA_START (0)
#define ABB_RX_C_ANA_8_CK_CTRL_DATA_END (4)
#define ABB_RX_C_ANA_8_CK_CTRL_MODE_START (5)
#define ABB_RX_C_ANA_8_CK_CTRL_MODE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK : 2;
        unsigned long TX_Q_PD_A : 1;
        unsigned long TX_I_PD_A : 1;
        unsigned long TX_DIV_MODE : 2;
        unsigned long FC : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_TX_C_ANA_1_UNION;
#define ABB_TX_C_ANA_1_TX_MODE_CLK_START (0)
#define ABB_TX_C_ANA_1_TX_MODE_CLK_END (1)
#define ABB_TX_C_ANA_1_TX_Q_PD_A_START (2)
#define ABB_TX_C_ANA_1_TX_Q_PD_A_END (2)
#define ABB_TX_C_ANA_1_TX_I_PD_A_START (3)
#define ABB_TX_C_ANA_1_TX_I_PD_A_END (3)
#define ABB_TX_C_ANA_1_TX_DIV_MODE_START (4)
#define ABB_TX_C_ANA_1_TX_DIV_MODE_END (5)
#define ABB_TX_C_ANA_1_FC_START (6)
#define ABB_TX_C_ANA_1_FC_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP1 : 2;
        unsigned long CURRENT_MODE_OP2 : 2;
        unsigned long LPF_MODE_CURRENT : 2;
        unsigned long reserved : 1;
        unsigned long TX_MODE_CLK_B3 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_ANA_2_UNION;
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP1_START (0)
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP1_END (1)
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP2_START (2)
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP2_END (3)
#define ABB_TX_C_ANA_2_LPF_MODE_CURRENT_START (4)
#define ABB_TX_C_ANA_2_LPF_MODE_CURRENT_END (5)
#define ABB_TX_C_ANA_2_TX_MODE_CLK_B3_START (7)
#define ABB_TX_C_ANA_2_TX_MODE_CLK_B3_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TXLPF_CT : 3;
        unsigned long DUM_EN_Q : 1;
        unsigned long DUM_EN_I : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_TX_C_ANA_3_UNION;
#define ABB_TX_C_ANA_3_TXLPF_CT_START (0)
#define ABB_TX_C_ANA_3_TXLPF_CT_END (2)
#define ABB_TX_C_ANA_3_DUM_EN_Q_START (3)
#define ABB_TX_C_ANA_3_DUM_EN_Q_END (3)
#define ABB_TX_C_ANA_3_DUM_EN_I_START (4)
#define ABB_TX_C_ANA_3_DUM_EN_I_END (4)
#define ABB_TX_C_ANA_3_TX_CLKD_CTRL_START (7)
#define ABB_TX_C_ANA_3_TX_CLKD_CTRL_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
