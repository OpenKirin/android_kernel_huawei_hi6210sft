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
#define ABB_RX_CH1_4G_DIG_1_ADDR (ABB_BASE_ADDR + 0x1A)
#define ABB_RX_CH1_4G_DIG_2_ADDR (ABB_BASE_ADDR + 0x1B)
#define ABB_TX_CH1_4G_DIG_1_ADDR (ABB_BASE_ADDR + 0x1C)
#define ABB_TX_CH1_4G_DIG_2_ADDR (ABB_BASE_ADDR + 0x1D)
#define ABB_TX_CH1_4G_DIG_3_ADDR (ABB_BASE_ADDR + 0x1E)
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
#define ABB_RX_CH1_4G_ANA_1_ADDR (ABB_BASE_ADDR + 0x38)
#define ABB_RX_CH1_4G_ANA_2_ADDR (ABB_BASE_ADDR + 0x39)
#define ABB_TX_CH1_4G_ANA_1_ADDR (ABB_BASE_ADDR + 0x3A)
#define ABB_TX_CH1_4G_ANA_2_ADDR (ABB_BASE_ADDR + 0x3B)
#define ABB_RX_IDLE_ANA_1_ADDR (ABB_BASE_ADDR + 0x3C)
#define ABB_RX_IDLE_ANA_2_ADDR (ABB_BASE_ADDR + 0x3D)
#define ABB_TX_IDLE_ANA_1_ADDR (ABB_BASE_ADDR + 0x3E)
#define ABB_TX_IDLE_ANA_2_ADDR (ABB_BASE_ADDR + 0x3F)
#define ABB_CH1_VERSION_ADDR (ABB_BASE_ADDR + 0x40)
#define ABB_CH1_TESTMODE_ADDR (ABB_BASE_ADDR + 0x41)
#define ABB_CH1_CTRL_ADDR (ABB_BASE_ADDR + 0x42)
#define ABB_CH1_CFR_CTRL_ADDR (ABB_BASE_ADDR + 0x43)
#define ABB_CH1_TX_I_OFFSET_ADDR (ABB_BASE_ADDR + 0x48)
#define ABB_CH1_TX_Q_OFFSET_ADDR (ABB_BASE_ADDR + 0x49)
#define ABB_CH1_RXA_I_COEF0_ADDR (ABB_BASE_ADDR + 0x4A)
#define ABB_CH1_RXA_I_COEF1_ADDR (ABB_BASE_ADDR + 0x4B)
#define ABB_CH1_RXA_I_COEF2_ADDR (ABB_BASE_ADDR + 0x4C)
#define ABB_CH1_RXA_I_COEF3_ADDR (ABB_BASE_ADDR + 0x4D)
#define ABB_CH1_RXA_I_COEF4_ADDR (ABB_BASE_ADDR + 0x4E)
#define ABB_CH1_RXA_Q_COEF0_ADDR (ABB_BASE_ADDR + 0x4F)
#define ABB_CH1_RXA_Q_COEF1_ADDR (ABB_BASE_ADDR + 0x50)
#define ABB_CH1_RXA_Q_COEF2_ADDR (ABB_BASE_ADDR + 0x51)
#define ABB_CH1_RXA_Q_COEF3_ADDR (ABB_BASE_ADDR + 0x52)
#define ABB_CH1_RXA_Q_COEF4_ADDR (ABB_BASE_ADDR + 0x53)
#define ABB_CH1_RXB_I_COEF0_ADDR (ABB_BASE_ADDR + 0x54)
#define ABB_CH1_RXB_I_COEF1_ADDR (ABB_BASE_ADDR + 0x55)
#define ABB_CH1_RXB_I_COEF2_ADDR (ABB_BASE_ADDR + 0x56)
#define ABB_CH1_RXB_I_COEF3_ADDR (ABB_BASE_ADDR + 0x57)
#define ABB_CH1_RXB_I_COEF4_ADDR (ABB_BASE_ADDR + 0x58)
#define ABB_CH1_RXB_Q_COEF0_ADDR (ABB_BASE_ADDR + 0x59)
#define ABB_CH1_RXB_Q_COEF1_ADDR (ABB_BASE_ADDR + 0x5A)
#define ABB_CH1_RXB_Q_COEF2_ADDR (ABB_BASE_ADDR + 0x5B)
#define ABB_CH1_RXB_Q_COEF3_ADDR (ABB_BASE_ADDR + 0x5C)
#define ABB_CH1_RXB_Q_COEF4_ADDR (ABB_BASE_ADDR + 0x5D)
#define ABB_CH1_REG_RXA_DCR_CFG_ADDR (ABB_BASE_ADDR + 0x5E)
#define ABB_CH1_REG_RXB_DCR_CFG_ADDR (ABB_BASE_ADDR + 0x5F)
#define ABB_CH1_REG_RX_DCR_CTRL_ADDR (ABB_BASE_ADDR + 0x60)
#define ABB_CH1_RXA_BLOCKING_ADDR (ABB_BASE_ADDR + 0x61)
#define ABB_CH1_RXB_BLOCKING_ADDR (ABB_BASE_ADDR + 0x62)
#define ABB_CH1_REG_RXA_DC_I_1_ADDR (ABB_BASE_ADDR + 0x63)
#define ABB_CH1_REG_RXA_DC_I_2_ADDR (ABB_BASE_ADDR + 0x64)
#define ABB_CH1_REG_RXA_DC_Q_1_ADDR (ABB_BASE_ADDR + 0x65)
#define ABB_CH1_REG_RXA_DC_Q_2_ADDR (ABB_BASE_ADDR + 0x66)
#define ABB_CH1_REG_RXB_DC_I_1_ADDR (ABB_BASE_ADDR + 0x67)
#define ABB_CH1_REG_RXB_DC_I_2_ADDR (ABB_BASE_ADDR + 0x68)
#define ABB_CH1_REG_RXB_DC_Q_1_ADDR (ABB_BASE_ADDR + 0x69)
#define ABB_CH1_REG_RXB_DC_Q_2_ADDR (ABB_BASE_ADDR + 0x6A)
#define ABB_CH1_REG_DEBUG_DIG0_ADDR (ABB_BASE_ADDR + 0x6B)
#define ABB_CH1_REG_DEBUG_DIG1_ADDR (ABB_BASE_ADDR + 0x6C)
#define ABB_CH1_REG_DEBUG_DIG2_ADDR (ABB_BASE_ADDR + 0x6D)
#define ABB_CH1_REG_DEBUG_DIG3_ADDR (ABB_BASE_ADDR + 0x6E)
#define ABB_CH1_REG_DEBUG_DIG4_ADDR (ABB_BASE_ADDR + 0x6F)
#define ABB_CH1_REG_ANALOG_WR02_ADDR (ABB_BASE_ADDR + 0x70)
#define ABB_CH1_REG_ANALOG_WR03_ADDR (ABB_BASE_ADDR + 0x71)
#define ABB_CH1_REG_ANALOG_WR04_ADDR (ABB_BASE_ADDR + 0x72)
#define ABB_CH1_REG_ANALOG_WR05_ADDR (ABB_BASE_ADDR + 0x73)
#define ABB_CH1_REG_ANALOG_WR06_ADDR (ABB_BASE_ADDR + 0x74)
#define ABB_CH1_REG_ANALOG_WR07_ADDR (ABB_BASE_ADDR + 0x75)
#define ABB_CH1_REG_ANALOG_WR08_ADDR (ABB_BASE_ADDR + 0x76)
#define ABB_CH1_REG_ANALOG_WR09_ADDR (ABB_BASE_ADDR + 0x77)
#define ABB_CH1_REG_ANALOG_WR10_ADDR (ABB_BASE_ADDR + 0x78)
#define ABB_CH1_REG_ANALOG_WR38_ADDR (ABB_BASE_ADDR + 0x79)
#define ABB_CH1_REG_ANALOG_WR39_ADDR (ABB_BASE_ADDR + 0x7A)
#define ABB_CH1_REG_ANALOG_RO0_ADDR (ABB_BASE_ADDR + 0x7B)
#define ABB_CH1_REG_ANALOG_RO1_ADDR (ABB_BASE_ADDR + 0x7C)
#define ABB_CH1_REG_ANALOG_RO2_ADDR (ABB_BASE_ADDR + 0x7D)
#define ABB_CH1_REG_ANALOG_RO3_ADDR (ABB_BASE_ADDR + 0x7E)
#define ABB_CH1_REG_ANALOG_RO4_ADDR (ABB_BASE_ADDR + 0x7F)
#define ABB_CH1_REG_DEBUG_ANA0_ADDR (ABB_BASE_ADDR + 0x80)
#define ABB_CH1_REG_DEBUG_ANA1_ADDR (ABB_BASE_ADDR + 0x81)
#define ABB_CH1_REG_DEBUG_ANA2_ADDR (ABB_BASE_ADDR + 0x82)
#define ABB_CH1_REG_DEBUG_ANA3_ADDR (ABB_BASE_ADDR + 0x83)
#define ABB_CH1_REG_DEBUG_ANA4_ADDR (ABB_BASE_ADDR + 0x84)
#define ABB_CH1_REG_DEBUG_ANA5_ADDR (ABB_BASE_ADDR + 0x85)
#define ABB_CH1_REG_DEBUG_ANA6_ADDR (ABB_BASE_ADDR + 0x86)
#define ABB_CH1_REG_DEBUG_ANA7_ADDR (ABB_BASE_ADDR + 0x87)
#define ABB_CH1_REG_DEBUG_ANA8_ADDR (ABB_BASE_ADDR + 0x88)
#define ABB_CH1_REG_DEBUG_ANA9_ADDR (ABB_BASE_ADDR + 0x89)
#define ABB_CH1_REG_DEBUG_ANA10_ADDR (ABB_BASE_ADDR + 0x8A)
#define ABB_CH1_REG_DEBUG_ANA11_ADDR (ABB_BASE_ADDR + 0x8B)
#define ABB_CH1_REG_DEBUG_ANA12_ADDR (ABB_BASE_ADDR + 0x8C)
#define ABB_CH1_REG_DEBUG_ANA13_ADDR (ABB_BASE_ADDR + 0x8D)
#define ABB_CH1_REG_DEBUG_ANA14_ADDR (ABB_BASE_ADDR + 0x8E)
#define ABB_CH1_REG_DEBUG_ANA15_ADDR (ABB_BASE_ADDR + 0x8F)
#define ABB_CH1_REG_DEBUG_ANA16_ADDR (ABB_BASE_ADDR + 0x90)
#define ABB_CH1_REG_DEBUG_ANA17_ADDR (ABB_BASE_ADDR + 0x91)
#define ABB_CH1_REG_DEBUG_ANA18_ADDR (ABB_BASE_ADDR + 0x92)
#define ABB_CH1_REG_DEBUG_ANA19_ADDR (ABB_BASE_ADDR + 0x93)
#define ABB_CH1_REG_DEBUG_ANA20_ADDR (ABB_BASE_ADDR + 0x94)
#define ABB_CH1_REG_DEBUG_ANA21_ADDR (ABB_BASE_ADDR + 0x95)
#define ABB_CH1_REG_DEBUG_ANA22_ADDR (ABB_BASE_ADDR + 0x96)
#define ABB_CH1_REG_DEBUG_ANA23_ADDR (ABB_BASE_ADDR + 0x97)
#define ABB_CH1_REG_DEBUG_ANA24_ADDR (ABB_BASE_ADDR + 0x98)
#define ABB_CH1_REG_DEBUG_ANA25_ADDR (ABB_BASE_ADDR + 0x99)
#define ABB_CH1_REG_DEBUG_ANA26_ADDR (ABB_BASE_ADDR + 0x9A)
#define ABB_CH1_REG_DEBUG_ARO0_ADDR (ABB_BASE_ADDR + 0x9B)
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
#define ABB_TX_CH1_4G_ANA_3_ADDR (ABB_BASE_ADDR + 0x118)
#define ABB_TX_CH1_4G_ANA_4_ADDR (ABB_BASE_ADDR + 0x119)
#define ABB_TX_CH1_4G_ANA_5_ADDR (ABB_BASE_ADDR + 0x11A)
#define ABB_RX_CH1_4G_ANA_3_ADDR (ABB_BASE_ADDR + 0x11B)
#define ABB_RX_CH1_4G_ANA_4_ADDR (ABB_BASE_ADDR + 0x11C)
#define ABB_RX_CH1_4G_ANA_5_ADDR (ABB_BASE_ADDR + 0x11D)
#define ABB_TX_IDLE_ANA_3_ADDR (ABB_BASE_ADDR + 0x12A)
#define ABB_TX_IDLE_ANA_4_ADDR (ABB_BASE_ADDR + 0x12B)
#define ABB_TX_IDLE_ANA_5_ADDR (ABB_BASE_ADDR + 0x12C)
#define ABB_RX_IDLE_ANA_3_ADDR (ABB_BASE_ADDR + 0x12D)
#define ABB_RX_IDLE_ANA_4_ADDR (ABB_BASE_ADDR + 0x12E)
#define ABB_RX_IDLE_ANA_5_ADDR (ABB_BASE_ADDR + 0x12F)
#define ABB_CH1_REG_DEBUG_ANA27_ADDR (ABB_BASE_ADDR + 0x130)
#define ABB_CH1_REG_DEBUG_ANA28_ADDR (ABB_BASE_ADDR + 0x131)
#define ABB_CH1_REG_DEBUG_ANA29_ADDR (ABB_BASE_ADDR + 0x132)
#define ABB_CH1_REG_DEBUG_ANA30_ADDR (ABB_BASE_ADDR + 0x133)
#define ABB_CH1_REG_DEBUG_ANA31_ADDR (ABB_BASE_ADDR + 0x134)
#define ABB_CH1_REG_DEBUG_ANA32_ADDR (ABB_BASE_ADDR + 0x135)
#define ABB_CH1_REG_DEBUG_ANA33_ADDR (ABB_BASE_ADDR + 0x136)
#define ABB_CH1_REG_DEBUG_ANA34_ADDR (ABB_BASE_ADDR + 0x137)
#define ABB_CH1_REG_DEBUG_ANA35_ADDR (ABB_BASE_ADDR + 0x138)
#define ABB_CH1_REG_DEBUG_ANA36_ADDR (ABB_BASE_ADDR + 0x139)
#define ABB_CH1_REG_DEBUG_ANA37_ADDR (ABB_BASE_ADDR + 0x13A)
#define ABB_CH1_REG_DEBUG_ANA38_ADDR (ABB_BASE_ADDR + 0x13B)
#define ABB_CH1_REG_DEBUG_ANA39_ADDR (ABB_BASE_ADDR + 0x13C)
#define ABB_CH1_REG_DEBUG_ANA40_ADDR (ABB_BASE_ADDR + 0x13D)
#define ABB_CH1_REG_DEBUG_ANA41_ADDR (ABB_BASE_ADDR + 0x13E)
#define ABB_CH1_REG_DEBUG_ANA42_ADDR (ABB_BASE_ADDR + 0x13F)
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
#define ABB_RX_CH1_3G_DIG_1_ADDR (ABB_BASE_ADDR + 0x180)
#define ABB_RX_CH1_3G_DIG_2_ADDR (ABB_BASE_ADDR + 0x181)
#define ABB_TX_CH1_3G_DIG_1_ADDR (ABB_BASE_ADDR + 0x182)
#define ABB_TX_CH1_3G_DIG_2_ADDR (ABB_BASE_ADDR + 0x183)
#define ABB_TX_CH1_3G_DIG_3_ADDR (ABB_BASE_ADDR + 0x184)
#define ABB_RX_CH1_3G_ANA_1_ADDR (ABB_BASE_ADDR + 0x185)
#define ABB_RX_CH1_3G_ANA_2_ADDR (ABB_BASE_ADDR + 0x186)
#define ABB_RX_CH1_3G_ANA_3_ADDR (ABB_BASE_ADDR + 0x187)
#define ABB_RX_CH1_3G_ANA_4_ADDR (ABB_BASE_ADDR + 0x188)
#define ABB_RX_CH1_3G_ANA_5_ADDR (ABB_BASE_ADDR + 0x189)
#define ABB_TX_CH1_3G_ANA_1_ADDR (ABB_BASE_ADDR + 0x18A)
#define ABB_TX_CH1_3G_ANA_2_ADDR (ABB_BASE_ADDR + 0x18B)
#define ABB_TX_CH1_3G_ANA_3_ADDR (ABB_BASE_ADDR + 0x18C)
#define ABB_TX_CH1_3G_ANA_4_ADDR (ABB_BASE_ADDR + 0x18D)
#define ABB_TX_CH1_3G_ANA_5_ADDR (ABB_BASE_ADDR + 0x18E)
#define ABB_RX_2G_ANA_6_ADDR (ABB_BASE_ADDR + 0x18F)
#define ABB_RX_2G_ANA_7_ADDR (ABB_BASE_ADDR + 0x190)
#define ABB_RX_2G_ANA_8_ADDR (ABB_BASE_ADDR + 0x191)
#define ABB_RX_2G_ANA_9_ADDR (ABB_BASE_ADDR + 0x192)
#define ABB_RX_2G_ANA_10_ADDR (ABB_BASE_ADDR + 0x193)
#define ABB_RX_2G_ANA_11_ADDR (ABB_BASE_ADDR + 0x194)
#define ABB_RX_CH0_3G_ANA_6_ADDR (ABB_BASE_ADDR + 0x195)
#define ABB_RX_CH0_3G_ANA_7_ADDR (ABB_BASE_ADDR + 0x196)
#define ABB_RX_CH0_3G_ANA_8_ADDR (ABB_BASE_ADDR + 0x197)
#define ABB_RX_CH0_3G_ANA_9_ADDR (ABB_BASE_ADDR + 0x198)
#define ABB_RX_CH0_3G_ANA_10_ADDR (ABB_BASE_ADDR + 0x199)
#define ABB_RX_CH0_3G_ANA_11_ADDR (ABB_BASE_ADDR + 0x19A)
#define ABB_RX_CH0_4G_ANA_6_ADDR (ABB_BASE_ADDR + 0x19B)
#define ABB_RX_CH0_4G_ANA_7_ADDR (ABB_BASE_ADDR + 0x19C)
#define ABB_RX_CH0_4G_ANA_8_ADDR (ABB_BASE_ADDR + 0x19D)
#define ABB_RX_CH0_4G_ANA_9_ADDR (ABB_BASE_ADDR + 0x19E)
#define ABB_RX_CH0_4G_ANA_10_ADDR (ABB_BASE_ADDR + 0x19F)
#define ABB_RX_CH0_4G_ANA_11_ADDR (ABB_BASE_ADDR + 0x1A0)
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
#define ABB_RX_CH1_3G_ANA_6_ADDR (ABB_BASE_ADDR + 0x1AD)
#define ABB_RX_CH1_3G_ANA_7_ADDR (ABB_BASE_ADDR + 0x1AE)
#define ABB_RX_CH1_3G_ANA_8_ADDR (ABB_BASE_ADDR + 0x1AF)
#define ABB_RX_CH1_3G_ANA_9_ADDR (ABB_BASE_ADDR + 0x1B1)
#define ABB_RX_CH1_3G_ANA_10_ADDR (ABB_BASE_ADDR + 0x1B2)
#define ABB_RX_CH1_3G_ANA_11_ADDR (ABB_BASE_ADDR + 0x1B3)
#define ABB_RX_CH1_4G_ANA_6_ADDR (ABB_BASE_ADDR + 0x1B4)
#define ABB_RX_CH1_4G_ANA_7_ADDR (ABB_BASE_ADDR + 0x1B5)
#define ABB_RX_CH1_4G_ANA_8_ADDR (ABB_BASE_ADDR + 0x1B6)
#define ABB_RX_CH1_4G_ANA_9_ADDR (ABB_BASE_ADDR + 0x1B7)
#define ABB_RX_CH1_4G_ANA_10_ADDR (ABB_BASE_ADDR + 0x1B8)
#define ABB_RX_CH1_4G_ANA_11_ADDR (ABB_BASE_ADDR + 0x1B9)
#define ABB_CH1_LINE_SEL_ADDR (ABB_BASE_ADDR + 0x1C0)
#define ABB_CH1_LINE_CFG_ADDR (ABB_BASE_ADDR + 0x1C1)
#define ABB_CH1_CLK_SEL_ADDR (ABB_BASE_ADDR + 0x1C2)
#define ABB_CH0_LINE_SEL_ADDR (ABB_BASE_ADDR + 0x1D0)
#define ABB_CH0_LINE_CFG_ADDR (ABB_BASE_ADDR + 0x1D1)
#define ABB_CH0_CLK_SEL_ADDR (ABB_BASE_ADDR + 0x1D2)
#define ABB_CH1_LINE_RPT0_ADDR (ABB_BASE_ADDR + 0x1E0)
#define ABB_CH1_LINE_RPT1_ADDR (ABB_BASE_ADDR + 0x1E1)
#define ABB_CH1_RX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1E2)
#define ABB_CH1_TX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1E3)
#define ABB_CH1_RX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1E4)
#define ABB_CH1_TX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1E5)
#define ABB_CH0_LINE_RPT0_ADDR (ABB_BASE_ADDR + 0x1F0)
#define ABB_CH0_LINE_RPT1_ADDR (ABB_BASE_ADDR + 0x1F1)
#define ABB_CH0_RX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1F2)
#define ABB_CH0_TX_MODE_RPT_ADDR (ABB_BASE_ADDR + 0x1F3)
#define ABB_CH0_RX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1F4)
#define ABB_CH0_TX_STATE_RPT_ADDR (ABB_BASE_ADDR + 0x1F5)
#define ABB_RXB_CH_SEL_ADDR (ABB_BASE_ADDR + 0x1F6)
#define ABB_CH0_TDS_RX_DLY_ADDR (ABB_BASE_ADDR + 0x200)
#define ABB_CH0_FLUSH_CFG0_ADDR (ABB_BASE_ADDR + 0x232)
#define ABB_CH0_FLUSH_CFG1_ADDR (ABB_BASE_ADDR + 0x233)
#define ABB_CH1_TDS_RX_DLY_ADDR (ABB_BASE_ADDR + 0x262)
#define ABB_CH1_FLUSH_CFG0_ADDR (ABB_BASE_ADDR + 0x294)
#define ABB_CH1_FLUSH_CFG1_ADDR (ABB_BASE_ADDR + 0x295)
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
#define ABB_TX_COEF1_ADDR (ABB_BASE_ADDR + 0x415)
#define ABB_TX_COEF2_ADDR (ABB_BASE_ADDR + 0x416)
#define ABB_TX_COEF3_ADDR (ABB_BASE_ADDR + 0x417)
#define ABB_TX_COEF4_ADDR (ABB_BASE_ADDR + 0x418)
#define ABB_TX_COEF5_ADDR (ABB_BASE_ADDR + 0x419)
#define ABB_TX_COEF6_ADDR (ABB_BASE_ADDR + 0x41A)
#define ABB_BIST_DELAY_SEL_ADDR (ABB_BASE_ADDR + 0x500)
#define ABB_BIST_MODE_BYPASS_ADDR (ABB_BASE_ADDR + 0x501)
#define ABB_BIST_RX_BYPASS_ADDR (ABB_BASE_ADDR + 0x502)
#define ABB_ABB_BIST_EN_ADDR (ABB_BASE_ADDR + 0x503)
#define ABB_BIST_SNDR_CAL_DONE_ADDR (ABB_BASE_ADDR + 0x504)
#define ABB_BIST_PARA_PASS_FLAG_ADDR (ABB_BASE_ADDR + 0x505)
#define ABB_ABB_BIST_PASS_FLAG_1_ADDR (ABB_BASE_ADDR + 0x506)
#define ABB_ABB_BIST_PASS_FLAG_2_ADDR (ABB_BASE_ADDR + 0x507)
#define ABB_ABB_BIST_PASS_FLAG_3_ADDR (ABB_BASE_ADDR + 0x508)
#define ABB_ABB_BIST_PASS_FLAG_4_ADDR (ABB_BASE_ADDR + 0x509)
#define ABB_BIST_DC_I_1_ADDR (ABB_BASE_ADDR + 0x50A)
#define ABB_BIST_DC_I_2_ADDR (ABB_BASE_ADDR + 0x50B)
#define ABB_BIST_DC_Q_1_ADDR (ABB_BASE_ADDR + 0x50C)
#define ABB_BIST_DC_Q_2_ADDR (ABB_BASE_ADDR + 0x50D)
#define ABB_BIST_SNDR_I_ADDR (ABB_BASE_ADDR + 0x50E)
#define ABB_BIST_SNDR_Q_ADDR (ABB_BASE_ADDR + 0x50F)
#define ABB_BIST_GAIN_MISMATCH_ADDR (ABB_BASE_ADDR + 0x510)
#define ABB_BIST_GAIN_ERROR_ADDR (ABB_BASE_ADDR + 0x511)
#define ABB_RXB_SEP_EN_ADDR (ABB_BASE_ADDR + 0x600)
#define ABB_RXB_SEP_CNT_NUM_ADDR (ABB_BASE_ADDR + 0x601)
#define ABB_GPLL_GATE_EN_ADDR (ABB_BASE_ADDR + 0x602)
#define ABB_GPLL_GATE_TIME_ADDR (ABB_BASE_ADDR + 0x603)
#define ABB_SCPLL_LOCK_CTRL_ADDR (ABB_BASE_ADDR + 0x604)
#define ABB_SCPLL_POSTDIV_ADDR (ABB_BASE_ADDR + 0x605)
#define ABB_SCPLL_FBDIV_L_ADDR (ABB_BASE_ADDR + 0x606)
#define ABB_SCPLL_FBDIV_H_ADDR (ABB_BASE_ADDR + 0x607)
#define ABB_SCPLL_REFDIV_ADDR (ABB_BASE_ADDR + 0x608)
#define ABB_SCPLL_FREQ_CTRL_ADDR (ABB_BASE_ADDR + 0x609)
#define ABB_SCPLL_FRAC1_ADDR (ABB_BASE_ADDR + 0x60A)
#define ABB_SCPLL_FRAC2_ADDR (ABB_BASE_ADDR + 0x60B)
#define ABB_SCPLL_FRAC3_ADDR (ABB_BASE_ADDR + 0x60C)
#define ABB_SCPLL_CFG_UPDATE_ADDR (ABB_BASE_ADDR + 0x60D)
#define ABB_BBP_SLEEP_EN_ADDR (ABB_BASE_ADDR + 0x60E)
#define ABB_WPLL_GATE_EN_ADDR (ABB_BASE_ADDR + 0x60F)
#define ABB_WPLL_GATE_TIME_ADDR (ABB_BASE_ADDR + 0x610)
#define ABB_PLL_FREF_SEL_ADDR (ABB_BASE_ADDR + 0x611)
#define ABB_SOC_PLL_SEL_ADDR (ABB_BASE_ADDR + 0x612)
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
        unsigned long tx_comp_sel_2g : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_DIG_3_UNION;
#define ABB_TX_2G_DIG_3_tx_cfr_bp_2g_START (0)
#define ABB_TX_2G_DIG_3_tx_cfr_bp_2g_END (0)
#define ABB_TX_2G_DIG_3_tx_flush_en_2g_START (1)
#define ABB_TX_2G_DIG_3_tx_flush_en_2g_END (1)
#define ABB_TX_2G_DIG_3_tx_comp_sel_2g_START (2)
#define ABB_TX_2G_DIG_3_tx_comp_sel_2g_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rx_comp_sel_b0_3g : 1;
        unsigned long ch0_rx_comp_fix_3g : 1;
        unsigned long ch0_rx_hb_bp_3g : 1;
        unsigned long ch0_rx_rate_3g : 2;
        unsigned long ch0_rx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_DIG_1_UNION;
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_comp_sel_b0_3g_START (0)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_comp_sel_b0_3g_END (0)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_comp_fix_3g_START (1)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_comp_fix_3g_END (1)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_hb_bp_3g_START (2)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_hb_bp_3g_END (2)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_rate_3g_START (3)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_rate_3g_END (4)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_mode_dig_3g_START (5)
#define ABB_RX_CH0_3G_DIG_1_ch0_rx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_pd_3g : 1;
        unsigned long ch0_rxb_pd_3g : 1;
        unsigned long ch0_gain_sel_3g : 2;
        unsigned long ch0_rx_comp_bp_3g : 1;
        unsigned long ch0_rx_clk_inv_3g : 1;
        unsigned long ch0_rx_flush_en_3g : 1;
        unsigned long ch0_rx_comp_sel_b1_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_DIG_2_UNION;
#define ABB_RX_CH0_3G_DIG_2_ch0_rxa_pd_3g_START (0)
#define ABB_RX_CH0_3G_DIG_2_ch0_rxa_pd_3g_END (0)
#define ABB_RX_CH0_3G_DIG_2_ch0_rxb_pd_3g_START (1)
#define ABB_RX_CH0_3G_DIG_2_ch0_rxb_pd_3g_END (1)
#define ABB_RX_CH0_3G_DIG_2_ch0_gain_sel_3g_START (2)
#define ABB_RX_CH0_3G_DIG_2_ch0_gain_sel_3g_END (3)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_comp_bp_3g_START (4)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_comp_bp_3g_END (4)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_clk_inv_3g_START (5)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_clk_inv_3g_END (5)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_flush_en_3g_START (6)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_flush_en_3g_END (6)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_comp_sel_b1_3g_START (7)
#define ABB_RX_CH0_3G_DIG_2_ch0_rx_comp_sel_b1_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_comp_bp_3g : 1;
        unsigned long ch0_tx_hb_bp_3g : 1;
        unsigned long ch0_tx_rate_3g : 3;
        unsigned long ch0_tx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_1_UNION;
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_comp_bp_3g_START (0)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_comp_bp_3g_END (0)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_hb_bp_3g_START (1)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_hb_bp_3g_END (1)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_rate_3g_START (2)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_rate_3g_END (4)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_mode_dig_3g_START (5)
#define ABB_TX_CH0_3G_DIG_1_ch0_tx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_q_pd_3g : 1;
        unsigned long ch0_tx_i_pd_3g : 1;
        unsigned long ch0_dem_const_3g : 2;
        unsigned long ch0_uddwa_dith_en_3g : 1;
        unsigned long ch0_dem_dwa_en_3g : 1;
        unsigned long ch0_dem_lsb_bp_3g : 1;
        unsigned long ch0_dem_msb_bp_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_2_UNION;
#define ABB_TX_CH0_3G_DIG_2_ch0_tx_q_pd_3g_START (0)
#define ABB_TX_CH0_3G_DIG_2_ch0_tx_q_pd_3g_END (0)
#define ABB_TX_CH0_3G_DIG_2_ch0_tx_i_pd_3g_START (1)
#define ABB_TX_CH0_3G_DIG_2_ch0_tx_i_pd_3g_END (1)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_const_3g_START (2)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_const_3g_END (3)
#define ABB_TX_CH0_3G_DIG_2_ch0_uddwa_dith_en_3g_START (4)
#define ABB_TX_CH0_3G_DIG_2_ch0_uddwa_dith_en_3g_END (4)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_dwa_en_3g_START (5)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_dwa_en_3g_END (5)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_lsb_bp_3g_START (6)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_lsb_bp_3g_END (6)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_msb_bp_3g_START (7)
#define ABB_TX_CH0_3G_DIG_2_ch0_dem_msb_bp_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_cfr_bp_3g : 1;
        unsigned long ch0_tx_flush_en_3g : 1;
        unsigned long ch0_tx_comp_sel_3g : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_DIG_3_UNION;
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_cfr_bp_3g_START (0)
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_cfr_bp_3g_END (0)
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_flush_en_3g_START (1)
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_flush_en_3g_END (1)
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_comp_sel_3g_START (2)
#define ABB_TX_CH0_3G_DIG_3_ch0_tx_comp_sel_3g_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rx_comp_sel_b0_4g : 1;
        unsigned long ch0_rx_comp_fix_4g : 1;
        unsigned long ch0_rx_hb_bp_4g : 1;
        unsigned long ch0_rx_rate_4g : 2;
        unsigned long ch0_rx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_DIG_1_UNION;
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_comp_sel_b0_4g_START (0)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_comp_sel_b0_4g_END (0)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_comp_fix_4g_START (1)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_comp_fix_4g_END (1)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_hb_bp_4g_START (2)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_hb_bp_4g_END (2)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_rate_4g_START (3)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_rate_4g_END (4)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_mode_dig_4g_START (5)
#define ABB_RX_CH0_4G_DIG_1_ch0_rx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_rxa_pd_4g : 1;
        unsigned long ch0_rxb_pd_4g : 1;
        unsigned long ch0_gain_sel_4g : 2;
        unsigned long ch0_rx_comp_bp_4g : 1;
        unsigned long ch0_rx_clk_inv_4g : 1;
        unsigned long ch0_rx_flush_en_4g : 1;
        unsigned long ch0_rx_comp_sel_b1_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_DIG_2_UNION;
#define ABB_RX_CH0_4G_DIG_2_ch0_rxa_pd_4g_START (0)
#define ABB_RX_CH0_4G_DIG_2_ch0_rxa_pd_4g_END (0)
#define ABB_RX_CH0_4G_DIG_2_ch0_rxb_pd_4g_START (1)
#define ABB_RX_CH0_4G_DIG_2_ch0_rxb_pd_4g_END (1)
#define ABB_RX_CH0_4G_DIG_2_ch0_gain_sel_4g_START (2)
#define ABB_RX_CH0_4G_DIG_2_ch0_gain_sel_4g_END (3)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_comp_bp_4g_START (4)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_comp_bp_4g_END (4)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_clk_inv_4g_START (5)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_clk_inv_4g_END (5)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_flush_en_4g_START (6)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_flush_en_4g_END (6)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_comp_sel_b1_4g_START (7)
#define ABB_RX_CH0_4G_DIG_2_ch0_rx_comp_sel_b1_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_comp_bp_4g : 1;
        unsigned long ch0_tx_hb_bp_4g : 1;
        unsigned long ch0_tx_rate_4g : 3;
        unsigned long ch0_tx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_1_UNION;
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_comp_bp_4g_START (0)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_comp_bp_4g_END (0)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_hb_bp_4g_START (1)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_hb_bp_4g_END (1)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_rate_4g_START (2)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_rate_4g_END (4)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_mode_dig_4g_START (5)
#define ABB_TX_CH0_4G_DIG_1_ch0_tx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_q_pd_4g : 1;
        unsigned long ch0_tx_i_pd_4g : 1;
        unsigned long ch0_dem_const_4g : 2;
        unsigned long ch0_uddwa_dith_en_4g : 1;
        unsigned long ch0_dem_dwa_en_4g : 1;
        unsigned long ch0_dem_lsb_bp_4g : 1;
        unsigned long ch0_dem_msb_bp_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_2_UNION;
#define ABB_TX_CH0_4G_DIG_2_ch0_tx_q_pd_4g_START (0)
#define ABB_TX_CH0_4G_DIG_2_ch0_tx_q_pd_4g_END (0)
#define ABB_TX_CH0_4G_DIG_2_ch0_tx_i_pd_4g_START (1)
#define ABB_TX_CH0_4G_DIG_2_ch0_tx_i_pd_4g_END (1)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_const_4g_START (2)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_const_4g_END (3)
#define ABB_TX_CH0_4G_DIG_2_ch0_uddwa_dith_en_4g_START (4)
#define ABB_TX_CH0_4G_DIG_2_ch0_uddwa_dith_en_4g_END (4)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_dwa_en_4g_START (5)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_dwa_en_4g_END (5)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_lsb_bp_4g_START (6)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_lsb_bp_4g_END (6)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_msb_bp_4g_START (7)
#define ABB_TX_CH0_4G_DIG_2_ch0_dem_msb_bp_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_tx_cfr_bp_4g : 1;
        unsigned long ch0_tx_flush_en_4g : 1;
        unsigned long ch0_tx_comp_sel_4g : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_DIG_3_UNION;
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_cfr_bp_4g_START (0)
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_cfr_bp_4g_END (0)
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_flush_en_4g_START (1)
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_flush_en_4g_END (1)
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_comp_sel_4g_START (2)
#define ABB_TX_CH0_4G_DIG_3_ch0_tx_comp_sel_4g_END (3)
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
        unsigned long tx_comp_sel_tds : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_DIG_3_UNION;
#define ABB_TX_TDS_DIG_3_tx_cfr_bp_tds_START (0)
#define ABB_TX_TDS_DIG_3_tx_cfr_bp_tds_END (0)
#define ABB_TX_TDS_DIG_3_tx_flush_en_tds_START (1)
#define ABB_TX_TDS_DIG_3_tx_flush_en_tds_END (1)
#define ABB_TX_TDS_DIG_3_tx_comp_sel_tds_START (2)
#define ABB_TX_TDS_DIG_3_tx_comp_sel_tds_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rx_comp_sel_b0_4g : 1;
        unsigned long ch1_rx_comp_fix_4g : 1;
        unsigned long ch1_rx_hb_bp_4g : 1;
        unsigned long ch1_rx_rate_4g : 2;
        unsigned long ch1_rx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_4G_DIG_1_UNION;
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_comp_sel_b0_4g_START (0)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_comp_sel_b0_4g_END (0)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_comp_fix_4g_START (1)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_comp_fix_4g_END (1)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_hb_bp_4g_START (2)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_hb_bp_4g_END (2)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_rate_4g_START (3)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_rate_4g_END (4)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_mode_dig_4g_START (5)
#define ABB_RX_CH1_4G_DIG_1_ch1_rx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_pd_4g : 1;
        unsigned long ch1_rxb_pd_4g : 1;
        unsigned long ch1_gain_sel_4g : 2;
        unsigned long ch1_rx_comp_bp_4g : 1;
        unsigned long ch1_rx_clk_inv_4g : 1;
        unsigned long ch1_rx_flush_en_4g : 1;
        unsigned long ch1_rx_comp_sel_b1_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_4G_DIG_2_UNION;
#define ABB_RX_CH1_4G_DIG_2_ch1_rxa_pd_4g_START (0)
#define ABB_RX_CH1_4G_DIG_2_ch1_rxa_pd_4g_END (0)
#define ABB_RX_CH1_4G_DIG_2_ch1_rxb_pd_4g_START (1)
#define ABB_RX_CH1_4G_DIG_2_ch1_rxb_pd_4g_END (1)
#define ABB_RX_CH1_4G_DIG_2_ch1_gain_sel_4g_START (2)
#define ABB_RX_CH1_4G_DIG_2_ch1_gain_sel_4g_END (3)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_comp_bp_4g_START (4)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_comp_bp_4g_END (4)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_clk_inv_4g_START (5)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_clk_inv_4g_END (5)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_flush_en_4g_START (6)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_flush_en_4g_END (6)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_comp_sel_b1_4g_START (7)
#define ABB_RX_CH1_4G_DIG_2_ch1_rx_comp_sel_b1_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_comp_bp_4g : 1;
        unsigned long ch1_tx_hb_bp_4g : 1;
        unsigned long ch1_tx_rate_4g : 3;
        unsigned long ch1_tx_mode_dig_4g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_DIG_1_UNION;
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_comp_bp_4g_START (0)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_comp_bp_4g_END (0)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_hb_bp_4g_START (1)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_hb_bp_4g_END (1)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_rate_4g_START (2)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_rate_4g_END (4)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_mode_dig_4g_START (5)
#define ABB_TX_CH1_4G_DIG_1_ch1_tx_mode_dig_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_q_pd_4g : 1;
        unsigned long ch1_tx_i_pd_4g : 1;
        unsigned long ch1_dem_const_4g : 2;
        unsigned long ch1_uddwa_dith_en_4g : 1;
        unsigned long ch1_dem_dwa_en_4g : 1;
        unsigned long ch1_dem_lsb_bp_4g : 1;
        unsigned long ch1_dem_msb_bp_4g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_DIG_2_UNION;
#define ABB_TX_CH1_4G_DIG_2_ch1_tx_q_pd_4g_START (0)
#define ABB_TX_CH1_4G_DIG_2_ch1_tx_q_pd_4g_END (0)
#define ABB_TX_CH1_4G_DIG_2_ch1_tx_i_pd_4g_START (1)
#define ABB_TX_CH1_4G_DIG_2_ch1_tx_i_pd_4g_END (1)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_const_4g_START (2)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_const_4g_END (3)
#define ABB_TX_CH1_4G_DIG_2_ch1_uddwa_dith_en_4g_START (4)
#define ABB_TX_CH1_4G_DIG_2_ch1_uddwa_dith_en_4g_END (4)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_dwa_en_4g_START (5)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_dwa_en_4g_END (5)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_lsb_bp_4g_START (6)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_lsb_bp_4g_END (6)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_msb_bp_4g_START (7)
#define ABB_TX_CH1_4G_DIG_2_ch1_dem_msb_bp_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_cfr_bp_4g : 1;
        unsigned long ch1_tx_flush_en_4g : 1;
        unsigned long ch1_tx_comp_sel_4g : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_DIG_3_UNION;
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_cfr_bp_4g_START (0)
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_cfr_bp_4g_END (0)
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_flush_en_4g_START (1)
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_flush_en_4g_END (1)
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_comp_sel_4g_START (2)
#define ABB_TX_CH1_4G_DIG_3_ch1_tx_comp_sel_4g_END (3)
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
        unsigned long tx_comp_sel_idle : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_DIG_3_UNION;
#define ABB_TX_IDLE_DIG_3_tx_cfr_bp_idle_START (0)
#define ABB_TX_IDLE_DIG_3_tx_cfr_bp_idle_END (0)
#define ABB_TX_IDLE_DIG_3_tx_flush_en_idle_START (1)
#define ABB_TX_IDLE_DIG_3_tx_flush_en_idle_END (1)
#define ABB_TX_IDLE_DIG_3_tx_comp_sel_idle_START (2)
#define ABB_TX_IDLE_DIG_3_tx_comp_sel_idle_END (3)
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
        unsigned long FC_B1_B0_2G : 2;
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
#define ABB_TX_2G_ANA_1_FC_B1_B0_2G_START (6)
#define ABB_TX_2G_ANA_1_FC_B1_B0_2G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_2G : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_2G : 2;
        unsigned long FC_B2_2G : 1;
        unsigned long TX_MODE_CLK_B3_2G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_2G_ANA_2_UNION;
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP_2G_START (0)
#define ABB_TX_2G_ANA_2_CURRENT_MODE_OP_2G_END (1)
#define ABB_TX_2G_ANA_2_LPF_MODE_CURRENT_2G_START (4)
#define ABB_TX_2G_ANA_2_LPF_MODE_CURRENT_2G_END (5)
#define ABB_TX_2G_ANA_2_FC_B2_2G_START (6)
#define ABB_TX_2G_ANA_2_FC_B2_2G_END (6)
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
        unsigned long FC_B1_B0_3G : 2;
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
#define ABB_TX_CH0_3G_ANA_1_FC_B1_B0_3G_START (6)
#define ABB_TX_CH0_3G_ANA_1_FC_B1_B0_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_3G : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_3G : 2;
        unsigned long FC_B2_3G : 1;
        unsigned long TX_MODE_CLK_B3_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_3G_ANA_2_UNION;
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP_3G_START (0)
#define ABB_TX_CH0_3G_ANA_2_CURRENT_MODE_OP_3G_END (1)
#define ABB_TX_CH0_3G_ANA_2_LPF_MODE_CURRENT_3G_START (4)
#define ABB_TX_CH0_3G_ANA_2_LPF_MODE_CURRENT_3G_END (5)
#define ABB_TX_CH0_3G_ANA_2_FC_B2_3G_START (6)
#define ABB_TX_CH0_3G_ANA_2_FC_B2_3G_END (6)
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
        unsigned long FC_B1_B0_4G : 2;
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
#define ABB_TX_CH0_4G_ANA_1_FC_B1_B0_4G_START (6)
#define ABB_TX_CH0_4G_ANA_1_FC_B1_B0_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_4G : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_4G : 2;
        unsigned long FC_B2_4G : 1;
        unsigned long TX_MODE_CLK_B3_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH0_4G_ANA_2_UNION;
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP_4G_START (0)
#define ABB_TX_CH0_4G_ANA_2_CURRENT_MODE_OP_4G_END (1)
#define ABB_TX_CH0_4G_ANA_2_LPF_MODE_CURRENT_4G_START (4)
#define ABB_TX_CH0_4G_ANA_2_LPF_MODE_CURRENT_4G_END (5)
#define ABB_TX_CH0_4G_ANA_2_FC_B2_4G_START (6)
#define ABB_TX_CH0_4G_ANA_2_FC_B2_4G_END (6)
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
        unsigned long FC_B1_B0_TDS : 2;
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
#define ABB_TX_TDS_ANA_1_FC_B1_B0_TDS_START (6)
#define ABB_TX_TDS_ANA_1_FC_B1_B0_TDS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_TDS : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_TDS : 2;
        unsigned long FC_B2_TDS : 1;
        unsigned long TX_MODE_CLK_B3_TDS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_TDS_ANA_2_UNION;
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP_TDS_START (0)
#define ABB_TX_TDS_ANA_2_CURRENT_MODE_OP_TDS_END (1)
#define ABB_TX_TDS_ANA_2_LPF_MODE_TDS_START (4)
#define ABB_TX_TDS_ANA_2_LPF_MODE_TDS_END (5)
#define ABB_TX_TDS_ANA_2_FC_B2_TDS_START (6)
#define ABB_TX_TDS_ANA_2_FC_B2_TDS_END (6)
#define ABB_TX_TDS_ANA_2_TX_MODE_CLK_B3_TDS_START (7)
#define ABB_TX_TDS_ANA_2_TX_MODE_CLK_B3_TDS_END (7)
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
} ABB_RX_CH1_4G_ANA_1_UNION;
#define ABB_RX_CH1_4G_ANA_1_DEM_MOD_B0_4G_START (0)
#define ABB_RX_CH1_4G_ANA_1_DEM_MOD_B0_4G_END (0)
#define ABB_RX_CH1_4G_ANA_1_RX_MODE_CLK_4G_START (1)
#define ABB_RX_CH1_4G_ANA_1_RX_MODE_CLK_4G_END (2)
#define ABB_RX_CH1_4G_ANA_1_DEM_MOD_B1_4G_START (3)
#define ABB_RX_CH1_4G_ANA_1_DEM_MOD_B1_4G_END (3)
#define ABB_RX_CH1_4G_ANA_1_RXB_Q_PD_4G_START (4)
#define ABB_RX_CH1_4G_ANA_1_RXB_Q_PD_4G_END (4)
#define ABB_RX_CH1_4G_ANA_1_RXB_I_PD_4G_START (5)
#define ABB_RX_CH1_4G_ANA_1_RXB_I_PD_4G_END (5)
#define ABB_RX_CH1_4G_ANA_1_RXA_Q_PD_4G_START (6)
#define ABB_RX_CH1_4G_ANA_1_RXA_Q_PD_4G_END (6)
#define ABB_RX_CH1_4G_ANA_1_RXA_I_PD_4G_START (7)
#define ABB_RX_CH1_4G_ANA_1_RXA_I_PD_4G_END (7)
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
} ABB_RX_CH1_4G_ANA_2_UNION;
#define ABB_RX_CH1_4G_ANA_2_RX_MODE_C_4G_START (0)
#define ABB_RX_CH1_4G_ANA_2_RX_MODE_C_4G_END (0)
#define ABB_RX_CH1_4G_ANA_2_IBCT_QT_4G_START (2)
#define ABB_RX_CH1_4G_ANA_2_IBCT_QT_4G_END (3)
#define ABB_RX_CH1_4G_ANA_2_IBCT_OP3_4G_START (4)
#define ABB_RX_CH1_4G_ANA_2_IBCT_OP3_4G_END (5)
#define ABB_RX_CH1_4G_ANA_2_IBCT_OP1_4G_START (6)
#define ABB_RX_CH1_4G_ANA_2_IBCT_OP1_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_4G : 2;
        unsigned long TX_Q_PD_A_4G : 1;
        unsigned long TX_I_PD_A_4G : 1;
        unsigned long TX_DIV_MODE_4G : 2;
        unsigned long FC_B1_B0_4G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_ANA_1_UNION;
#define ABB_TX_CH1_4G_ANA_1_TX_MODE_CLK_4G_START (0)
#define ABB_TX_CH1_4G_ANA_1_TX_MODE_CLK_4G_END (1)
#define ABB_TX_CH1_4G_ANA_1_TX_Q_PD_A_4G_START (2)
#define ABB_TX_CH1_4G_ANA_1_TX_Q_PD_A_4G_END (2)
#define ABB_TX_CH1_4G_ANA_1_TX_I_PD_A_4G_START (3)
#define ABB_TX_CH1_4G_ANA_1_TX_I_PD_A_4G_END (3)
#define ABB_TX_CH1_4G_ANA_1_TX_DIV_MODE_4G_START (4)
#define ABB_TX_CH1_4G_ANA_1_TX_DIV_MODE_4G_END (5)
#define ABB_TX_CH1_4G_ANA_1_FC_B1_B0_4G_START (6)
#define ABB_TX_CH1_4G_ANA_1_FC_B1_B0_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_4G : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_4G : 2;
        unsigned long FC_B2_4G : 1;
        unsigned long TX_MODE_CLK_B3_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_ANA_2_UNION;
#define ABB_TX_CH1_4G_ANA_2_CURRENT_MODE_OP_4G_START (0)
#define ABB_TX_CH1_4G_ANA_2_CURRENT_MODE_OP_4G_END (1)
#define ABB_TX_CH1_4G_ANA_2_LPF_MODE_CURRENT_4G_START (4)
#define ABB_TX_CH1_4G_ANA_2_LPF_MODE_CURRENT_4G_END (5)
#define ABB_TX_CH1_4G_ANA_2_FC_B2_4G_START (6)
#define ABB_TX_CH1_4G_ANA_2_FC_B2_4G_END (6)
#define ABB_TX_CH1_4G_ANA_2_TX_MODE_CLK_B3_4G_START (7)
#define ABB_TX_CH1_4G_ANA_2_TX_MODE_CLK_B3_4G_END (7)
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
        unsigned long FC_B1_B0_IDLE : 2;
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
#define ABB_TX_IDLE_ANA_1_FC_B1_B0_IDLE_START (6)
#define ABB_TX_IDLE_ANA_1_FC_B1_B0_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_IDLE : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_IDLE : 2;
        unsigned long FC_B2_IDLE : 1;
        unsigned long TX_MODE_CLK_B3_IDLE : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_IDLE_ANA_2_UNION;
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP_IDLE_START (0)
#define ABB_TX_IDLE_ANA_2_CURRENT_MODE_OP_IDLE_END (1)
#define ABB_TX_IDLE_ANA_2_LPF_MODE_CURRENT_IDLE_START (4)
#define ABB_TX_IDLE_ANA_2_LPF_MODE_CURRENT_IDLE_END (5)
#define ABB_TX_IDLE_ANA_2_FC_B2_IDLE_START (6)
#define ABB_TX_IDLE_ANA_2_FC_B2_IDLE_END (6)
#define ABB_TX_IDLE_ANA_2_TX_MODE_CLK_B3_IDLE_START (7)
#define ABB_TX_IDLE_ANA_2_TX_MODE_CLK_B3_IDLE_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_pwr_on_rst : 1;
        unsigned long ch1_rx_chnl_sel : 2;
        unsigned long ch1_test_mode : 3;
        unsigned long ch1_rx_sw_rst : 1;
        unsigned long ch1_tx_sw_rst : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_TESTMODE_UNION;
#define ABB_CH1_TESTMODE_ch1_pwr_on_rst_START (0)
#define ABB_CH1_TESTMODE_ch1_pwr_on_rst_END (0)
#define ABB_CH1_TESTMODE_ch1_rx_chnl_sel_START (1)
#define ABB_CH1_TESTMODE_ch1_rx_chnl_sel_END (2)
#define ABB_CH1_TESTMODE_ch1_test_mode_START (3)
#define ABB_CH1_TESTMODE_ch1_test_mode_END (5)
#define ABB_CH1_TESTMODE_ch1_rx_sw_rst_START (6)
#define ABB_CH1_TESTMODE_ch1_rx_sw_rst_END (6)
#define ABB_CH1_TESTMODE_ch1_tx_sw_rst_START (7)
#define ABB_CH1_TESTMODE_ch1_tx_sw_rst_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_loop_out : 1;
        unsigned long ch1_rxb_loop_out : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_CTRL_UNION;
#define ABB_CH1_CTRL_ch1_rxa_loop_out_START (0)
#define ABB_CH1_CTRL_ch1_rxa_loop_out_END (0)
#define ABB_CH1_CTRL_ch1_rxb_loop_out_START (1)
#define ABB_CH1_CTRL_ch1_rxb_loop_out_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_cfr_pdet_sel : 2;
        unsigned long ch1_cfr_fir_sel : 1;
        unsigned long reserved : 1;
        unsigned long ch1_cfr_fir_fac : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_CFR_CTRL_UNION;
#define ABB_CH1_CFR_CTRL_ch1_cfr_pdet_sel_START (0)
#define ABB_CH1_CFR_CTRL_ch1_cfr_pdet_sel_END (1)
#define ABB_CH1_CFR_CTRL_ch1_cfr_fir_sel_START (2)
#define ABB_CH1_CFR_CTRL_ch1_cfr_fir_sel_END (2)
#define ABB_CH1_CFR_CTRL_ch1_cfr_fir_fac_START (4)
#define ABB_CH1_CFR_CTRL_ch1_cfr_fir_fac_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_i_c1 : 7;
        unsigned long ch1_rxa_i_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXA_I_COEF1_UNION;
#define ABB_CH1_RXA_I_COEF1_ch1_rxa_i_c1_START (0)
#define ABB_CH1_RXA_I_COEF1_ch1_rxa_i_c1_END (6)
#define ABB_CH1_RXA_I_COEF1_ch1_rxa_i_c3_msb_START (7)
#define ABB_CH1_RXA_I_COEF1_ch1_rxa_i_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_i_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_RXA_I_COEF3_UNION;
#define ABB_CH1_RXA_I_COEF3_ch1_rxa_i_c5_START (0)
#define ABB_CH1_RXA_I_COEF3_ch1_rxa_i_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_q_c1 : 7;
        unsigned long ch1_rxa_q_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXA_Q_COEF1_UNION;
#define ABB_CH1_RXA_Q_COEF1_ch1_rxa_q_c1_START (0)
#define ABB_CH1_RXA_Q_COEF1_ch1_rxa_q_c1_END (6)
#define ABB_CH1_RXA_Q_COEF1_ch1_rxa_q_c3_msb_START (7)
#define ABB_CH1_RXA_Q_COEF1_ch1_rxa_q_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_q_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_RXA_Q_COEF3_UNION;
#define ABB_CH1_RXA_Q_COEF3_ch1_rxa_q_c5_START (0)
#define ABB_CH1_RXA_Q_COEF3_ch1_rxa_q_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxb_i_c1 : 7;
        unsigned long ch1_rxb_i_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXB_I_COEF1_UNION;
#define ABB_CH1_RXB_I_COEF1_ch1_rxb_i_c1_START (0)
#define ABB_CH1_RXB_I_COEF1_ch1_rxb_i_c1_END (6)
#define ABB_CH1_RXB_I_COEF1_ch1_rxb_i_c3_msb_START (7)
#define ABB_CH1_RXB_I_COEF1_ch1_rxb_i_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxb_i_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_RXB_I_COEF3_UNION;
#define ABB_CH1_RXB_I_COEF3_ch1_rxb_i_c5_START (0)
#define ABB_CH1_RXB_I_COEF3_ch1_rxb_i_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxb_q_c1 : 7;
        unsigned long ch1_rxb_q_c3_msb : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXB_Q_COEF1_UNION;
#define ABB_CH1_RXB_Q_COEF1_ch1_rxb_q_c1_START (0)
#define ABB_CH1_RXB_Q_COEF1_ch1_rxb_q_c1_END (6)
#define ABB_CH1_RXB_Q_COEF1_ch1_rxb_q_c3_msb_START (7)
#define ABB_CH1_RXB_Q_COEF1_ch1_rxb_q_c3_msb_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxb_q_c5 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_RXB_Q_COEF3_UNION;
#define ABB_CH1_RXB_Q_COEF3_ch1_rxb_q_c5_START (0)
#define ABB_CH1_RXB_Q_COEF3_ch1_rxb_q_c5_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_cfg_rxa_dcr_dly : 5;
        unsigned long ch1_cfg_rxa_dcr_l_para : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXA_DCR_CFG_UNION;
#define ABB_CH1_REG_RXA_DCR_CFG_ch1_cfg_rxa_dcr_dly_START (0)
#define ABB_CH1_REG_RXA_DCR_CFG_ch1_cfg_rxa_dcr_dly_END (4)
#define ABB_CH1_REG_RXA_DCR_CFG_ch1_cfg_rxa_dcr_l_para_START (5)
#define ABB_CH1_REG_RXA_DCR_CFG_ch1_cfg_rxa_dcr_l_para_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_cfg_rxb_dcr_dly : 5;
        unsigned long ch1_cfg_rxb_dcr_l_para : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXB_DCR_CFG_UNION;
#define ABB_CH1_REG_RXB_DCR_CFG_ch1_cfg_rxb_dcr_dly_START (0)
#define ABB_CH1_REG_RXB_DCR_CFG_ch1_cfg_rxb_dcr_dly_END (4)
#define ABB_CH1_REG_RXB_DCR_CFG_ch1_cfg_rxb_dcr_l_para_START (5)
#define ABB_CH1_REG_RXB_DCR_CFG_ch1_cfg_rxb_dcr_l_para_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_cfg_rxa_dcr_bypass : 1;
        unsigned long ch1_cfg_rxb_dcr_bypass : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RX_DCR_CTRL_UNION;
#define ABB_CH1_REG_RX_DCR_CTRL_ch1_cfg_rxa_dcr_bypass_START (0)
#define ABB_CH1_REG_RX_DCR_CTRL_ch1_cfg_rxa_dcr_bypass_END (0)
#define ABB_CH1_REG_RX_DCR_CTRL_ch1_cfg_rxb_dcr_bypass_START (1)
#define ABB_CH1_REG_RX_DCR_CTRL_ch1_cfg_rxb_dcr_bypass_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_blk_coeff : 5;
        unsigned long ch1_rxa_blk_power : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXA_BLOCKING_UNION;
#define ABB_CH1_RXA_BLOCKING_ch1_rxa_blk_coeff_START (0)
#define ABB_CH1_RXA_BLOCKING_ch1_rxa_blk_coeff_END (4)
#define ABB_CH1_RXA_BLOCKING_ch1_rxa_blk_power_START (5)
#define ABB_CH1_RXA_BLOCKING_ch1_rxa_blk_power_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxb_blk_coeff : 5;
        unsigned long ch1_rxb_blk_power : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RXB_BLOCKING_UNION;
#define ABB_CH1_RXB_BLOCKING_ch1_rxb_blk_coeff_START (0)
#define ABB_CH1_RXB_BLOCKING_ch1_rxb_blk_coeff_END (4)
#define ABB_CH1_RXB_BLOCKING_ch1_rxb_blk_power_START (5)
#define ABB_CH1_RXB_BLOCKING_ch1_rxb_blk_power_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch1_rxa_dc_i_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXA_DC_I_2_UNION;
#define ABB_CH1_REG_RXA_DC_I_2_ch1_rxa_dc_i_2_START (4)
#define ABB_CH1_REG_RXA_DC_I_2_ch1_rxa_dc_i_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch1_rxa_dc_q_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXA_DC_Q_2_UNION;
#define ABB_CH1_REG_RXA_DC_Q_2_ch1_rxa_dc_q_2_START (4)
#define ABB_CH1_REG_RXA_DC_Q_2_ch1_rxa_dc_q_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch1_rxb_dc_i_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXB_DC_I_2_UNION;
#define ABB_CH1_REG_RXB_DC_I_2_ch1_rxb_dc_i_2_START (4)
#define ABB_CH1_REG_RXB_DC_I_2_ch1_rxb_dc_i_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long ch1_rxb_dc_q_2 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_RXB_DC_Q_2_UNION;
#define ABB_CH1_REG_RXB_DC_Q_2_ch1_rxb_dc_q_2_START (4)
#define ABB_CH1_REG_RXB_DC_Q_2_ch1_rxb_dc_q_2_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_sdm_rst_ctrl : 1;
        unsigned long ch1_dem_mode : 1;
        unsigned long ch1_tx_dem_sat : 2;
        unsigned long ch1_dither_en : 1;
        unsigned long ch1_tuning_val_en : 1;
        unsigned long reserved : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_DIG0_UNION;
#define ABB_CH1_REG_DEBUG_DIG0_ch1_sdm_rst_ctrl_START (0)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_sdm_rst_ctrl_END (0)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_dem_mode_START (1)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_dem_mode_END (1)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_tx_dem_sat_START (2)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_tx_dem_sat_END (3)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_dither_en_START (4)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_dither_en_END (4)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_tuning_val_en_START (5)
#define ABB_CH1_REG_DEBUG_DIG0_ch1_tuning_val_en_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_START_RC_TUNE : 1;
        unsigned long reserved_0 : 1;
        unsigned long CH1_TX_AUTO_TUNE : 1;
        unsigned long CH1_RX_AUTO_TUNE : 1;
        unsigned long reserved_1 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR04_UNION;
#define ABB_CH1_REG_ANALOG_WR04_CH1_START_RC_TUNE_START (0)
#define ABB_CH1_REG_ANALOG_WR04_CH1_START_RC_TUNE_END (0)
#define ABB_CH1_REG_ANALOG_WR04_CH1_TX_AUTO_TUNE_START (2)
#define ABB_CH1_REG_ANALOG_WR04_CH1_TX_AUTO_TUNE_END (2)
#define ABB_CH1_REG_ANALOG_WR04_CH1_RX_AUTO_TUNE_START (3)
#define ABB_CH1_REG_ANALOG_WR04_CH1_RX_AUTO_TUNE_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_REG_CAP1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR05_UNION;
#define ABB_CH1_REG_ANALOG_WR05_CH1_REG_CAP1_START (0)
#define ABB_CH1_REG_ANALOG_WR05_CH1_REG_CAP1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_TX_TUNE_D1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR08_UNION;
#define ABB_CH1_REG_ANALOG_WR08_CH1_TX_TUNE_D1_START (0)
#define ABB_CH1_REG_ANALOG_WR08_CH1_TX_TUNE_D1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_TX_TUNE_D2 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR09_UNION;
#define ABB_CH1_REG_ANALOG_WR09_CH1_TX_TUNE_D2_START (0)
#define ABB_CH1_REG_ANALOG_WR09_CH1_TX_TUNE_D2_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 7;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR10_UNION;
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_CAL_QT_EN : 1;
        unsigned long reserved_0 : 4;
        unsigned long CH1_DCLK_INV_RX : 1;
        unsigned long CH1_RX_SYN2D_CTRL : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR38_UNION;
#define ABB_CH1_REG_ANALOG_WR38_CH1_CAL_QT_EN_START (0)
#define ABB_CH1_REG_ANALOG_WR38_CH1_CAL_QT_EN_END (0)
#define ABB_CH1_REG_ANALOG_WR38_CH1_DCLK_INV_RX_START (5)
#define ABB_CH1_REG_ANALOG_WR38_CH1_DCLK_INV_RX_END (5)
#define ABB_CH1_REG_ANALOG_WR38_CH1_RX_SYN2D_CTRL_START (6)
#define ABB_CH1_REG_ANALOG_WR38_CH1_RX_SYN2D_CTRL_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 5;
        unsigned long CH1_DEM_MOD : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_ANALOG_WR39_UNION;
#define ABB_CH1_REG_ANALOG_WR39_CH1_DEM_MOD_START (7)
#define ABB_CH1_REG_ANALOG_WR39_CH1_DEM_MOD_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 5;
        unsigned long CH1_CAL_DONE : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_ANALOG_RO0_UNION;
#define ABB_CH1_REG_ANALOG_RO0_CH1_CAL_DONE_START (5)
#define ABB_CH1_REG_ANALOG_RO0_CH1_CAL_DONE_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_RC_TUNE_DOUT : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_ANALOG_RO1_UNION;
#define ABB_CH1_REG_ANALOG_RO1_CH1_RC_TUNE_DOUT_START (0)
#define ABB_CH1_REG_ANALOG_RO1_CH1_RC_TUNE_DOUT_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long CH1_OCLK_SEL : 3;
        unsigned long reserved_1 : 4;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA0_UNION;
#define ABB_CH1_REG_DEBUG_ANA0_CH1_OCLK_SEL_START (1)
#define ABB_CH1_REG_DEBUG_ANA0_CH1_OCLK_SEL_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 5;
        unsigned long CH1_CLKN_EN : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA2_UNION;
#define ABB_CH1_REG_DEBUG_ANA2_CH1_CLKN_EN_START (7)
#define ABB_CH1_REG_DEBUG_ANA2_CH1_CLKN_EN_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 7;
        unsigned long CH1_ABB_REF_FS : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA5_UNION;
#define ABB_CH1_REG_DEBUG_ANA5_CH1_ABB_REF_FS_START (7)
#define ABB_CH1_REG_DEBUG_ANA5_CH1_ABB_REF_FS_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long CH1_PUP_MODE : 1;
        unsigned long reserved_1 : 1;
        unsigned long CH1_DEM_ENB : 1;
        unsigned long CH1_CT_TUNE_SEL : 1;
        unsigned long reserved_2 : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA9_UNION;
#define ABB_CH1_REG_DEBUG_ANA9_CH1_PUP_MODE_START (1)
#define ABB_CH1_REG_DEBUG_ANA9_CH1_PUP_MODE_END (1)
#define ABB_CH1_REG_DEBUG_ANA9_CH1_DEM_ENB_START (3)
#define ABB_CH1_REG_DEBUG_ANA9_CH1_DEM_ENB_END (3)
#define ABB_CH1_REG_DEBUG_ANA9_CH1_CT_TUNE_SEL_START (4)
#define ABB_CH1_REG_DEBUG_ANA9_CH1_CT_TUNE_SEL_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_PUP_CTRL0 : 1;
        unsigned long CH1_PUP_CTRL1 : 1;
        unsigned long CH1_PUP_CTRL2 : 1;
        unsigned long CH1_PUP_CTRL3 : 1;
        unsigned long CH1_PUP_CTRL4 : 1;
        unsigned long CH1_PUP_CTRL5 : 1;
        unsigned long CH1_PUP_CTRL6 : 1;
        unsigned long CH1_PUP_CTRL7 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA10_UNION;
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL0_START (0)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL0_END (0)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL1_START (1)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL1_END (1)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL2_START (2)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL2_END (2)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL3_START (3)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL3_END (3)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL4_START (4)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL4_END (4)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL5_START (5)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL5_END (5)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL6_START (6)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL6_END (6)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL7_START (7)
#define ABB_CH1_REG_DEBUG_ANA10_CH1_PUP_CTRL7_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_OL_CT : 3;
        unsigned long reserved_0 : 3;
        unsigned long reserved_1 : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA14_UNION;
#define ABB_CH1_REG_DEBUG_ANA14_CH1_OL_CT_START (0)
#define ABB_CH1_REG_DEBUG_ANA14_CH1_OL_CT_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 6;
        unsigned long reserved_1 : 1;
        unsigned long CH1_PDM_CTRL : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA16_UNION;
#define ABB_CH1_REG_DEBUG_ANA16_CH1_PDM_CTRL_START (7)
#define ABB_CH1_REG_DEBUG_ANA16_CH1_PDM_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 4;
        unsigned long reserved_1 : 2;
        unsigned long reserved_2 : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA17_UNION;
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 4;
        unsigned long CH1_DAC_CLK_EN : 1;
        unsigned long CH1_ADC_CLK_EN : 1;
        unsigned long reserved_1 : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA19_UNION;
#define ABB_CH1_REG_DEBUG_ANA19_CH1_DAC_CLK_EN_START (4)
#define ABB_CH1_REG_DEBUG_ANA19_CH1_DAC_CLK_EN_END (4)
#define ABB_CH1_REG_DEBUG_ANA19_CH1_ADC_CLK_EN_START (5)
#define ABB_CH1_REG_DEBUG_ANA19_CH1_ADC_CLK_EN_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 1;
        unsigned long reserved_3 : 2;
        unsigned long CH1_CAP3_MULTI : 2;
        unsigned long reserved_4 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA20_UNION;
#define ABB_CH1_REG_DEBUG_ANA20_CH1_CAP3_MULTI_START (5)
#define ABB_CH1_REG_DEBUG_ANA20_CH1_CAP3_MULTI_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_RX_TUNE : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA22_UNION;
#define ABB_CH1_REG_DEBUG_ANA22_CH1_RX_TUNE_START (0)
#define ABB_CH1_REG_DEBUG_ANA22_CH1_RX_TUNE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH1_CALOP1_IB_CTRL : 1;
        unsigned long CH1_CAL_OP1_EN : 1;
        unsigned long CH1_CALOP1_TRIM_SW : 1;
        unsigned long CH1_OP1CAL_CKCTR : 2;
        unsigned long CH1_OP3_IB_SW : 1;
        unsigned long CH1_PUP_CK_CTRL : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA25_UNION;
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CALOP1_IB_CTRL_START (0)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CALOP1_IB_CTRL_END (0)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CAL_OP1_EN_START (1)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CAL_OP1_EN_END (1)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CALOP1_TRIM_SW_START (2)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_CALOP1_TRIM_SW_END (2)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_OP1CAL_CKCTR_START (3)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_OP1CAL_CKCTR_END (4)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_OP3_IB_SW_START (5)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_OP3_IB_SW_END (5)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_PUP_CK_CTRL_START (6)
#define ABB_CH1_REG_DEBUG_ANA25_CH1_PUP_CK_CTRL_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long CH1_REG_EXT2 : 3;
        unsigned long CH1_REG_EXT1 : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA26_UNION;
#define ABB_CH1_REG_DEBUG_ANA26_CH1_REG_EXT2_START (2)
#define ABB_CH1_REG_DEBUG_ANA26_CH1_REG_EXT2_END (4)
#define ABB_CH1_REG_DEBUG_ANA26_CH1_REG_EXT1_START (5)
#define ABB_CH1_REG_DEBUG_ANA26_CH1_REG_EXT1_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 6;
        unsigned long CH1_RXA_OP1_CALOK_Q : 1;
        unsigned long CH1_RXA_OP1_CALOK_I : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ARO0_UNION;
#define ABB_CH1_REG_DEBUG_ARO0_CH1_RXA_OP1_CALOK_Q_START (6)
#define ABB_CH1_REG_DEBUG_ARO0_CH1_RXA_OP1_CALOK_Q_END (6)
#define ABB_CH1_REG_DEBUG_ARO0_CH1_RXA_OP1_CALOK_I_START (7)
#define ABB_CH1_REG_DEBUG_ARO0_CH1_RXA_OP1_CALOK_I_END (7)
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
        unsigned long ch0_rxa_loop_out : 1;
        unsigned long ch0_rxb_loop_out : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_CTRL_UNION;
#define ABB_CH0_CTRL_ch0_rxa_loop_out_START (0)
#define ABB_CH0_CTRL_ch0_rxa_loop_out_END (0)
#define ABB_CH0_CTRL_ch0_rxb_loop_out_START (1)
#define ABB_CH0_CTRL_ch0_rxb_loop_out_END (1)
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
        unsigned long reserved_0 : 2;
        unsigned long CH0_PLL624_PD : 1;
        unsigned long CH0_PLL6144_PD : 1;
        unsigned long reserved_1 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR02_UNION;
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
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 1;
        unsigned long LDO_BP : 1;
        unsigned long CH0_CLK104M_PD : 1;
        unsigned long CH0_CLK122M_PD : 1;
        unsigned long reserved_3 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR03_UNION;
#define ABB_CH0_REG_ANALOG_WR03_LDO_BP_START (4)
#define ABB_CH0_REG_ANALOG_WR03_LDO_BP_END (4)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK104M_PD_START (5)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK104M_PD_END (5)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK122M_PD_START (6)
#define ABB_CH0_REG_ANALOG_WR03_CH0_CLK122M_PD_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long START_RC_TUNE : 1;
        unsigned long reserved_0 : 1;
        unsigned long CH0_TX_AUTO_TUNE : 1;
        unsigned long CH0_RX_AUTO_TUNE : 1;
        unsigned long reserved_1 : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR04_UNION;
#define ABB_CH0_REG_ANALOG_WR04_START_RC_TUNE_START (0)
#define ABB_CH0_REG_ANALOG_WR04_START_RC_TUNE_END (0)
#define ABB_CH0_REG_ANALOG_WR04_CH0_TX_AUTO_TUNE_START (2)
#define ABB_CH0_REG_ANALOG_WR04_CH0_TX_AUTO_TUNE_END (2)
#define ABB_CH0_REG_ANALOG_WR04_CH0_RX_AUTO_TUNE_START (3)
#define ABB_CH0_REG_ANALOG_WR04_CH0_RX_AUTO_TUNE_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_REG_CAP1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR05_UNION;
#define ABB_CH0_REG_ANALOG_WR05_CH0_REG_CAP1_START (0)
#define ABB_CH0_REG_ANALOG_WR05_CH0_REG_CAP1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TX_TUNE_D1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR08_UNION;
#define ABB_CH0_REG_ANALOG_WR08_CH0_TX_TUNE_D1_START (0)
#define ABB_CH0_REG_ANALOG_WR08_CH0_TX_TUNE_D1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_TX_TUNE_D2 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR09_UNION;
#define ABB_CH0_REG_ANALOG_WR09_CH0_TX_TUNE_D2_START (0)
#define ABB_CH0_REG_ANALOG_WR09_CH0_TX_TUNE_D2_END (6)
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
        unsigned long CAL_QT_EN : 1;
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 3;
        unsigned long DCLK_INV_RX : 1;
        unsigned long CH0_RX_SYN2D_CTRL : 1;
        unsigned long reserved_2 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR38_UNION;
#define ABB_CH0_REG_ANALOG_WR38_CAL_QT_EN_START (0)
#define ABB_CH0_REG_ANALOG_WR38_CAL_QT_EN_END (0)
#define ABB_CH0_REG_ANALOG_WR38_DCLK_INV_RX_START (5)
#define ABB_CH0_REG_ANALOG_WR38_DCLK_INV_RX_END (5)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_SYN2D_CTRL_START (6)
#define ABB_CH0_REG_ANALOG_WR38_CH0_RX_SYN2D_CTRL_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 5;
        unsigned long CH0_DEM_MOD : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_ANALOG_WR39_UNION;
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
        unsigned long CH0_FREF_SEL : 1;
        unsigned long CH0_OCLK_SEL : 3;
        unsigned long CP_ADN : 1;
        unsigned long CP_AUP : 1;
        unsigned long CH0_GVCO_CR : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA0_UNION;
#define ABB_CH0_REG_DEBUG_ANA0_CH0_FREF_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_FREF_SEL_END (0)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_OCLK_SEL_START (1)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_OCLK_SEL_END (3)
#define ABB_CH0_REG_DEBUG_ANA0_CP_ADN_START (4)
#define ABB_CH0_REG_DEBUG_ANA0_CP_ADN_END (4)
#define ABB_CH0_REG_DEBUG_ANA0_CP_AUP_START (5)
#define ABB_CH0_REG_DEBUG_ANA0_CP_AUP_END (5)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_GVCO_CR_START (6)
#define ABB_CH0_REG_DEBUG_ANA0_CH0_GVCO_CR_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_GLK_CTRL : 2;
        unsigned long CH0_WLK_CTRL : 2;
        unsigned long CH0_GLK_EN : 1;
        unsigned long CH0_WLK_EN : 1;
        unsigned long CH0_WVCO_CR : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA1_UNION;
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GLK_CTRL_START (0)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GLK_CTRL_END (1)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WLK_CTRL_START (2)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WLK_CTRL_END (3)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GLK_EN_START (4)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_GLK_EN_END (4)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WLK_EN_START (5)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WLK_EN_END (5)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WVCO_CR_START (6)
#define ABB_CH0_REG_DEBUG_ANA1_CH0_WVCO_CR_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_GCP_PD : 1;
        unsigned long CH1_WCP_PD : 1;
        unsigned long reserved : 5;
        unsigned long CH0_CLKN_EN : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA2_UNION;
#define ABB_CH0_REG_DEBUG_ANA2_CH0_GCP_PD_START (0)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_GCP_PD_END (0)
#define ABB_CH0_REG_DEBUG_ANA2_CH1_WCP_PD_START (1)
#define ABB_CH0_REG_DEBUG_ANA2_CH1_WCP_PD_END (1)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_CLKN_EN_START (7)
#define ABB_CH0_REG_DEBUG_ANA2_CH0_CLKN_EN_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_GIB_CTRL : 4;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA3_UNION;
#define ABB_CH0_REG_DEBUG_ANA3_CH0_GIB_CTRL_START (4)
#define ABB_CH0_REG_DEBUG_ANA3_CH0_GIB_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_WIB_CTRL : 4;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA4_UNION;
#define ABB_CH0_REG_DEBUG_ANA4_CH0_WIB_CTRL_START (4)
#define ABB_CH0_REG_DEBUG_ANA4_CH0_WIB_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 7;
        unsigned long CH0_BG_FS_EN : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA5_UNION;
#define ABB_CH0_REG_DEBUG_ANA5_CH0_BG_FS_EN_START (7)
#define ABB_CH0_REG_DEBUG_ANA5_CH0_BG_FS_EN_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_GFREF_SEL : 2;
        unsigned long CH0_WFREF_SEL : 2;
        unsigned long CH0_TCXO_DRV : 2;
        unsigned long CH0_EXCLK_PD : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA6_UNION;
#define ABB_CH0_REG_DEBUG_ANA6_CH0_GFREF_SEL_START (0)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_GFREF_SEL_END (1)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_WFREF_SEL_START (2)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_WFREF_SEL_END (3)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_TCXO_DRV_START (4)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_TCXO_DRV_END (5)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_EXCLK_PD_START (6)
#define ABB_CH0_REG_DEBUG_ANA6_CH0_EXCLK_PD_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_ITR_ADC_BUF : 3;
        unsigned long ITR_VCM_BIAS : 3;
        unsigned long reserved : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA7_UNION;
#define ABB_CH0_REG_DEBUG_ANA7_CH0_ITR_ADC_BUF_START (0)
#define ABB_CH0_REG_DEBUG_ANA7_CH0_ITR_ADC_BUF_END (2)
#define ABB_CH0_REG_DEBUG_ANA7_ITR_VCM_BIAS_START (3)
#define ABB_CH0_REG_DEBUG_ANA7_ITR_VCM_BIAS_END (5)
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
        unsigned long reserved_0 : 1;
        unsigned long CH0_PUP_MODE : 1;
        unsigned long reserved_1 : 1;
        unsigned long CH0_DEM_ENB : 1;
        unsigned long CH0_CT_TUNE_SEL : 1;
        unsigned long reserved_2 : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA9_UNION;
#define ABB_CH0_REG_DEBUG_ANA9_CH0_PUP_MODE_START (1)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_PUP_MODE_END (1)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_DEM_ENB_START (3)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_DEM_ENB_END (3)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_CT_TUNE_SEL_START (4)
#define ABB_CH0_REG_DEBUG_ANA9_CH0_CT_TUNE_SEL_END (4)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_PUP_CTRL0 : 1;
        unsigned long CH0_PUP_CTRL1 : 1;
        unsigned long CH0_PUP_CTRL2 : 1;
        unsigned long CH0_PUP_CTRL3 : 1;
        unsigned long CH0_PUP_CTRL4 : 1;
        unsigned long CH0_PUP_CTRL5 : 1;
        unsigned long CH0_PUP_CTRL6 : 1;
        unsigned long CH0_PUP_CTRL7 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA10_UNION;
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL0_START (0)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL0_END (0)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL1_START (1)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL1_END (1)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL2_START (2)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL2_END (2)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL3_START (3)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL3_END (3)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL4_START (4)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL4_END (4)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL5_START (5)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL5_END (5)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL6_START (6)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL6_END (6)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL7_START (7)
#define ABB_CH0_REG_DEBUG_ANA10_CH0_PUP_CTRL7_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 6;
        unsigned long CH0_BG_EN : 1;
        unsigned long CH0_BG_PD : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA11_UNION;
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_EN_START (6)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_EN_END (6)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_PD_START (7)
#define ABB_CH0_REG_DEBUG_ANA11_CH0_BG_PD_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_OL_CT : 3;
        unsigned long reserved_0 : 3;
        unsigned long reserved_1 : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA14_UNION;
#define ABB_CH0_REG_DEBUG_ANA14_CH0_OL_CT_START (0)
#define ABB_CH0_REG_DEBUG_ANA14_CH0_OL_CT_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 6;
        unsigned long reserved_1 : 1;
        unsigned long CH0_PDM_CTRL : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA16_UNION;
#define ABB_CH0_REG_DEBUG_ANA16_CH0_PDM_CTRL_START (7)
#define ABB_CH0_REG_DEBUG_ANA16_CH0_PDM_CTRL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_WG_CLK_SEL : 2;
        unsigned long CH0_WG_VCSEL : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA17_UNION;
#define ABB_CH0_REG_DEBUG_ANA17_CH0_WG_CLK_SEL_START (4)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_WG_CLK_SEL_END (5)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_WG_VCSEL_START (6)
#define ABB_CH0_REG_DEBUG_ANA17_CH0_WG_VCSEL_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long CH0_WPADF_SEL : 1;
        unsigned long reserved_1 : 2;
        unsigned long CH0_DAC_CLK_EN : 1;
        unsigned long CH0_ADC_CLK_EN : 1;
        unsigned long reserved_2 : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA19_UNION;
#define ABB_CH0_REG_DEBUG_ANA19_CH0_WPADF_SEL_START (1)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_WPADF_SEL_END (1)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_DAC_CLK_EN_START (4)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_DAC_CLK_EN_END (4)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_ADC_CLK_EN_START (5)
#define ABB_CH0_REG_DEBUG_ANA19_CH0_ADC_CLK_EN_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved_0 : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_2 : 1;
        unsigned long reserved_3 : 2;
        unsigned long CH0_CAP3_MULTI : 2;
        unsigned long reserved_4 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA20_UNION;
#define ABB_CH0_REG_DEBUG_ANA20_CH0_CAP3_MULTI_START (5)
#define ABB_CH0_REG_DEBUG_ANA20_CH0_CAP3_MULTI_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CH0_RX_TUNE : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA22_UNION;
#define ABB_CH0_REG_DEBUG_ANA22_CH0_RX_TUNE_START (0)
#define ABB_CH0_REG_DEBUG_ANA22_CH0_RX_TUNE_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CALOP1_IB_CTRL : 1;
        unsigned long CAL_OP1_EN : 1;
        unsigned long CALOP1_TRIM_SW : 1;
        unsigned long OP1CAL_CKCTR : 2;
        unsigned long OP3_IB_SW : 1;
        unsigned long PUP_CK_CTRL : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA25_UNION;
#define ABB_CH0_REG_DEBUG_ANA25_CALOP1_IB_CTRL_START (0)
#define ABB_CH0_REG_DEBUG_ANA25_CALOP1_IB_CTRL_END (0)
#define ABB_CH0_REG_DEBUG_ANA25_CAL_OP1_EN_START (1)
#define ABB_CH0_REG_DEBUG_ANA25_CAL_OP1_EN_END (1)
#define ABB_CH0_REG_DEBUG_ANA25_CALOP1_TRIM_SW_START (2)
#define ABB_CH0_REG_DEBUG_ANA25_CALOP1_TRIM_SW_END (2)
#define ABB_CH0_REG_DEBUG_ANA25_OP1CAL_CKCTR_START (3)
#define ABB_CH0_REG_DEBUG_ANA25_OP1CAL_CKCTR_END (4)
#define ABB_CH0_REG_DEBUG_ANA25_OP3_IB_SW_START (5)
#define ABB_CH0_REG_DEBUG_ANA25_OP3_IB_SW_END (5)
#define ABB_CH0_REG_DEBUG_ANA25_PUP_CK_CTRL_START (6)
#define ABB_CH0_REG_DEBUG_ANA25_PUP_CK_CTRL_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long CH0_REG_EXT2 : 3;
        unsigned long CH0_REG_EXT1 : 3;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_CH0_REG_DEBUG_ANA26_UNION;
#define ABB_CH0_REG_DEBUG_ANA26_CH0_REG_EXT2_START (2)
#define ABB_CH0_REG_DEBUG_ANA26_CH0_REG_EXT2_END (4)
#define ABB_CH0_REG_DEBUG_ANA26_CH0_REG_EXT1_START (5)
#define ABB_CH0_REG_DEBUG_ANA26_CH0_REG_EXT1_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long CH0_RXB_OP1_CALOK_Q : 1;
        unsigned long CH0_RXB_OP1_CALOK_I : 1;
        unsigned long CH0_RXA_OP1_CALOK_Q : 1;
        unsigned long CH0_RXA_OP1_CALOK_I : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH0_REG_DEBUG_ARO0_UNION;
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXB_OP1_CALOK_Q_START (4)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXB_OP1_CALOK_Q_END (4)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXB_OP1_CALOK_I_START (5)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXB_OP1_CALOK_I_END (5)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXA_OP1_CALOK_Q_START (6)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXA_OP1_CALOK_Q_END (6)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXA_OP1_CALOK_I_START (7)
#define ABB_CH0_REG_DEBUG_ARO0_CH0_RXA_OP1_CALOK_I_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch0_sine_enable : 1;
        unsigned long ch1_sine_enable : 1;
        unsigned long sine_amp : 2;
        unsigned long sine_freq : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_SINE_GENERATE_UNION;
#define ABB_SINE_GENERATE_ch0_sine_enable_START (0)
#define ABB_SINE_GENERATE_ch0_sine_enable_END (0)
#define ABB_SINE_GENERATE_ch1_sine_enable_START (1)
#define ABB_SINE_GENERATE_ch1_sine_enable_END (1)
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
        unsigned long TXLPF_CT_4G : 3;
        unsigned long DUM_EN_Q_4G : 1;
        unsigned long DUM_EN_I_4G : 1;
        unsigned long reserved : 2;
        unsigned long TX_CLKD_CTRL_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_4G_ANA_3_UNION;
#define ABB_TX_CH1_4G_ANA_3_TXLPF_CT_4G_START (0)
#define ABB_TX_CH1_4G_ANA_3_TXLPF_CT_4G_END (2)
#define ABB_TX_CH1_4G_ANA_3_DUM_EN_Q_4G_START (3)
#define ABB_TX_CH1_4G_ANA_3_DUM_EN_Q_4G_END (3)
#define ABB_TX_CH1_4G_ANA_3_DUM_EN_I_4G_START (4)
#define ABB_TX_CH1_4G_ANA_3_DUM_EN_I_4G_END (4)
#define ABB_TX_CH1_4G_ANA_3_TX_CLKD_CTRL_4G_START (7)
#define ABB_TX_CH1_4G_ANA_3_TX_CLKD_CTRL_4G_END (7)
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
} ABB_RX_CH1_4G_ANA_3_UNION;
#define ABB_RX_CH1_4G_ANA_3_ITR_OP1_4G_START (0)
#define ABB_RX_CH1_4G_ANA_3_ITR_OP1_4G_END (2)
#define ABB_RX_CH1_4G_ANA_3_ITR_OP3_4G_START (3)
#define ABB_RX_CH1_4G_ANA_3_ITR_OP3_4G_END (5)
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
} ABB_RX_CH1_4G_ANA_4_UNION;
#define ABB_RX_CH1_4G_ANA_4_ITR_QT_4G_START (0)
#define ABB_RX_CH1_4G_ANA_4_ITR_QT_4G_END (2)
#define ABB_RX_CH1_4G_ANA_4_ITR_DAC_4G_START (3)
#define ABB_RX_CH1_4G_ANA_4_ITR_DAC_4G_END (5)
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
        unsigned long CH1_RXC_IBCT2 : 2;
        unsigned long CH1_RXC_IBCT1 : 2;
        unsigned long CH1_RXC_MODE : 3;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_REG_DEBUG_ANA27_UNION;
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_IBCT2_START (0)
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_IBCT2_END (1)
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_IBCT1_START (2)
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_IBCT1_END (3)
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_MODE_START (4)
#define ABB_CH1_REG_DEBUG_ANA27_CH1_RXC_MODE_END (6)
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
        unsigned long ch1_rx_comp_sel_b0_3g : 1;
        unsigned long ch1_rx_comp_fix_3g : 1;
        unsigned long ch1_rx_hb_bp_3g : 1;
        unsigned long ch1_rx_rate_3g : 2;
        unsigned long ch1_rx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_3G_DIG_1_UNION;
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_comp_sel_b0_3g_START (0)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_comp_sel_b0_3g_END (0)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_comp_fix_3g_START (1)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_comp_fix_3g_END (1)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_hb_bp_3g_START (2)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_hb_bp_3g_END (2)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_rate_3g_START (3)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_rate_3g_END (4)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_mode_dig_3g_START (5)
#define ABB_RX_CH1_3G_DIG_1_ch1_rx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_pd_3g : 1;
        unsigned long ch1_rxb_pd_3g : 1;
        unsigned long ch1_gain_sel_3g : 2;
        unsigned long ch1_rx_comp_bp_3g : 1;
        unsigned long ch1_rx_clk_inv_3g : 1;
        unsigned long ch1_rx_flush_en_3g : 1;
        unsigned long ch1_rx_comp_sel_b1_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_3G_DIG_2_UNION;
#define ABB_RX_CH1_3G_DIG_2_ch1_rxa_pd_3g_START (0)
#define ABB_RX_CH1_3G_DIG_2_ch1_rxa_pd_3g_END (0)
#define ABB_RX_CH1_3G_DIG_2_ch1_rxb_pd_3g_START (1)
#define ABB_RX_CH1_3G_DIG_2_ch1_rxb_pd_3g_END (1)
#define ABB_RX_CH1_3G_DIG_2_ch1_gain_sel_3g_START (2)
#define ABB_RX_CH1_3G_DIG_2_ch1_gain_sel_3g_END (3)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_comp_bp_3g_START (4)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_comp_bp_3g_END (4)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_clk_inv_3g_START (5)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_clk_inv_3g_END (5)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_flush_en_3g_START (6)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_flush_en_3g_END (6)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_comp_sel_b1_3g_START (7)
#define ABB_RX_CH1_3G_DIG_2_ch1_rx_comp_sel_b1_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_comp_bp_3g : 1;
        unsigned long ch1_tx_hb_bp_3g : 1;
        unsigned long ch1_tx_rate_3g : 3;
        unsigned long ch1_tx_mode_dig_3g : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_3G_DIG_1_UNION;
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_comp_bp_3g_START (0)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_comp_bp_3g_END (0)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_hb_bp_3g_START (1)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_hb_bp_3g_END (1)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_rate_3g_START (2)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_rate_3g_END (4)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_mode_dig_3g_START (5)
#define ABB_TX_CH1_3G_DIG_1_ch1_tx_mode_dig_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_q_pd_3g : 1;
        unsigned long ch1_tx_i_pd_3g : 1;
        unsigned long ch1_dem_const_3g : 2;
        unsigned long ch1_uddwa_dith_en_3g : 1;
        unsigned long ch1_dem_dwa_en_3g : 1;
        unsigned long ch1_dem_lsb_bp_3g : 1;
        unsigned long ch1_dem_msb_bp_3g : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_3G_DIG_2_UNION;
#define ABB_TX_CH1_3G_DIG_2_ch1_tx_q_pd_3g_START (0)
#define ABB_TX_CH1_3G_DIG_2_ch1_tx_q_pd_3g_END (0)
#define ABB_TX_CH1_3G_DIG_2_ch1_tx_i_pd_3g_START (1)
#define ABB_TX_CH1_3G_DIG_2_ch1_tx_i_pd_3g_END (1)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_const_3g_START (2)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_const_3g_END (3)
#define ABB_TX_CH1_3G_DIG_2_ch1_uddwa_dith_en_3g_START (4)
#define ABB_TX_CH1_3G_DIG_2_ch1_uddwa_dith_en_3g_END (4)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_dwa_en_3g_START (5)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_dwa_en_3g_END (5)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_lsb_bp_3g_START (6)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_lsb_bp_3g_END (6)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_msb_bp_3g_START (7)
#define ABB_TX_CH1_3G_DIG_2_ch1_dem_msb_bp_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_cfr_bp_3g : 1;
        unsigned long ch1_tx_flush_en_3g : 1;
        unsigned long ch1_tx_comp_sel_3g : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_3G_DIG_3_UNION;
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_cfr_bp_3g_START (0)
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_cfr_bp_3g_END (0)
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_flush_en_3g_START (1)
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_flush_en_3g_END (1)
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_comp_sel_3g_START (2)
#define ABB_TX_CH1_3G_DIG_3_ch1_tx_comp_sel_3g_END (3)
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
} ABB_RX_CH1_3G_ANA_1_UNION;
#define ABB_RX_CH1_3G_ANA_1_DEM_MOD_B0_3G_START (0)
#define ABB_RX_CH1_3G_ANA_1_DEM_MOD_B0_3G_END (0)
#define ABB_RX_CH1_3G_ANA_1_RX_MODE_CLK_3G_START (1)
#define ABB_RX_CH1_3G_ANA_1_RX_MODE_CLK_3G_END (2)
#define ABB_RX_CH1_3G_ANA_1_DEM_MOD_B1_3G_START (3)
#define ABB_RX_CH1_3G_ANA_1_DEM_MOD_B1_3G_END (3)
#define ABB_RX_CH1_3G_ANA_1_RXB_Q_PD_3G_START (4)
#define ABB_RX_CH1_3G_ANA_1_RXB_Q_PD_3G_END (4)
#define ABB_RX_CH1_3G_ANA_1_RXB_I_PD_3G_START (5)
#define ABB_RX_CH1_3G_ANA_1_RXB_I_PD_3G_END (5)
#define ABB_RX_CH1_3G_ANA_1_RXA_Q_PD_3G_START (6)
#define ABB_RX_CH1_3G_ANA_1_RXA_Q_PD_3G_END (6)
#define ABB_RX_CH1_3G_ANA_1_RXA_I_PD_3G_START (7)
#define ABB_RX_CH1_3G_ANA_1_RXA_I_PD_3G_END (7)
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
} ABB_RX_CH1_3G_ANA_2_UNION;
#define ABB_RX_CH1_3G_ANA_2_RX_MODE_C_3G_START (0)
#define ABB_RX_CH1_3G_ANA_2_RX_MODE_C_3G_END (0)
#define ABB_RX_CH1_3G_ANA_2_IBCT_QT_3G_START (2)
#define ABB_RX_CH1_3G_ANA_2_IBCT_QT_3G_END (3)
#define ABB_RX_CH1_3G_ANA_2_IBCT_OP3_3G_START (4)
#define ABB_RX_CH1_3G_ANA_2_IBCT_OP3_3G_END (5)
#define ABB_RX_CH1_3G_ANA_2_IBCT_OP1_3G_START (6)
#define ABB_RX_CH1_3G_ANA_2_IBCT_OP1_3G_END (7)
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
} ABB_RX_CH1_3G_ANA_3_UNION;
#define ABB_RX_CH1_3G_ANA_3_ITR_OP1_3G_START (0)
#define ABB_RX_CH1_3G_ANA_3_ITR_OP1_3G_END (2)
#define ABB_RX_CH1_3G_ANA_3_ITR_OP3_3G_START (3)
#define ABB_RX_CH1_3G_ANA_3_ITR_OP3_3G_END (5)
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
} ABB_RX_CH1_3G_ANA_4_UNION;
#define ABB_RX_CH1_3G_ANA_4_ITR_QT_3G_START (0)
#define ABB_RX_CH1_3G_ANA_4_ITR_QT_3G_END (2)
#define ABB_RX_CH1_3G_ANA_4_ITR_DAC_3G_START (3)
#define ABB_RX_CH1_3G_ANA_4_ITR_DAC_3G_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK_3G : 2;
        unsigned long TX_Q_PD_A_3G : 1;
        unsigned long TX_I_PD_A_3G : 1;
        unsigned long TX_DIV_MODE_3G : 2;
        unsigned long FC_B1_B0_3G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_3G_ANA_1_UNION;
#define ABB_TX_CH1_3G_ANA_1_TX_MODE_CLK_3G_START (0)
#define ABB_TX_CH1_3G_ANA_1_TX_MODE_CLK_3G_END (1)
#define ABB_TX_CH1_3G_ANA_1_TX_Q_PD_A_3G_START (2)
#define ABB_TX_CH1_3G_ANA_1_TX_Q_PD_A_3G_END (2)
#define ABB_TX_CH1_3G_ANA_1_TX_I_PD_A_3G_START (3)
#define ABB_TX_CH1_3G_ANA_1_TX_I_PD_A_3G_END (3)
#define ABB_TX_CH1_3G_ANA_1_TX_DIV_MODE_3G_START (4)
#define ABB_TX_CH1_3G_ANA_1_TX_DIV_MODE_3G_END (5)
#define ABB_TX_CH1_3G_ANA_1_FC_B1_B0_3G_START (6)
#define ABB_TX_CH1_3G_ANA_1_FC_B1_B0_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_3G : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_3G : 2;
        unsigned long FC_B2_3G : 1;
        unsigned long TX_MODE_CLK_B3_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_CH1_3G_ANA_2_UNION;
#define ABB_TX_CH1_3G_ANA_2_CURRENT_MODE_OP_3G_START (0)
#define ABB_TX_CH1_3G_ANA_2_CURRENT_MODE_OP_3G_END (1)
#define ABB_TX_CH1_3G_ANA_2_LPF_MODE_CURRENT_3G_START (4)
#define ABB_TX_CH1_3G_ANA_2_LPF_MODE_CURRENT_3G_END (5)
#define ABB_TX_CH1_3G_ANA_2_FC_B2_3G_START (6)
#define ABB_TX_CH1_3G_ANA_2_FC_B2_3G_END (6)
#define ABB_TX_CH1_3G_ANA_2_TX_MODE_CLK_B3_3G_START (7)
#define ABB_TX_CH1_3G_ANA_2_TX_MODE_CLK_B3_3G_END (7)
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
} ABB_TX_CH1_3G_ANA_3_UNION;
#define ABB_TX_CH1_3G_ANA_3_TXLPF_CT_3G_START (0)
#define ABB_TX_CH1_3G_ANA_3_TXLPF_CT_3G_END (2)
#define ABB_TX_CH1_3G_ANA_3_DUM_EN_Q_3G_START (3)
#define ABB_TX_CH1_3G_ANA_3_DUM_EN_Q_3G_END (3)
#define ABB_TX_CH1_3G_ANA_3_DUM_EN_I_3G_START (4)
#define ABB_TX_CH1_3G_ANA_3_DUM_EN_I_3G_END (4)
#define ABB_TX_CH1_3G_ANA_3_TX_CLKD_CTRL_3G_START (7)
#define ABB_TX_CH1_3G_ANA_3_TX_CLKD_CTRL_3G_END (7)
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
        unsigned long wpll_sel_2g : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_2g : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_2G_ANA_9_UNION;
#define ABB_RX_2G_ANA_9_wpll_sel_2g_START (0)
#define ABB_RX_2G_ANA_9_wpll_sel_2g_END (0)
#define ABB_RX_2G_ANA_9_blk_len_sel_2g_START (6)
#define ABB_RX_2G_ANA_9_blk_len_sel_2g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_3G : 2;
        unsigned long BWCT_OP2_3G : 2;
        unsigned long BWCT_OP1_CH0_3G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_ANA_6_UNION;
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP3_3G_START (2)
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP3_3G_END (3)
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP2_3G_START (4)
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP2_3G_END (5)
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP1_CH0_3G_START (6)
#define ABB_RX_CH0_3G_ANA_6_BWCT_OP1_CH0_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_3G : 1;
        unsigned long GMBIAS_EN_3G : 1;
        unsigned long MODU_DEPTH_CTRL_3G : 1;
        unsigned long RX_DAC_LP_CTRL_CH0_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_ANA_7_UNION;
#define ABB_RX_CH0_3G_ANA_7_QT_REF_SEL_3G_START (4)
#define ABB_RX_CH0_3G_ANA_7_QT_REF_SEL_3G_END (4)
#define ABB_RX_CH0_3G_ANA_7_GMBIAS_EN_3G_START (5)
#define ABB_RX_CH0_3G_ANA_7_GMBIAS_EN_3G_END (5)
#define ABB_RX_CH0_3G_ANA_7_MODU_DEPTH_CTRL_3G_START (6)
#define ABB_RX_CH0_3G_ANA_7_MODU_DEPTH_CTRL_3G_END (6)
#define ABB_RX_CH0_3G_ANA_7_RX_DAC_LP_CTRL_CH0_3G_START (7)
#define ABB_RX_CH0_3G_ANA_7_RX_DAC_LP_CTRL_CH0_3G_END (7)
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
} ABB_RX_CH0_3G_ANA_8_UNION;
#define ABB_RX_CH0_3G_ANA_8_CK_CTRL_DATA_3G_START (0)
#define ABB_RX_CH0_3G_ANA_8_CK_CTRL_DATA_3G_END (4)
#define ABB_RX_CH0_3G_ANA_8_CK_CTRL_MODE_3G_START (5)
#define ABB_RX_CH0_3G_ANA_8_CK_CTRL_MODE_3G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_sel_ch0_3g : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_ch0_3g : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_3G_ANA_9_UNION;
#define ABB_RX_CH0_3G_ANA_9_wpll_sel_ch0_3g_START (0)
#define ABB_RX_CH0_3G_ANA_9_wpll_sel_ch0_3g_END (0)
#define ABB_RX_CH0_3G_ANA_9_blk_len_sel_ch0_3g_START (6)
#define ABB_RX_CH0_3G_ANA_9_blk_len_sel_ch0_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_4G : 2;
        unsigned long BWCT_OP2_4G : 2;
        unsigned long BWCT_OP1_CH0_4G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_ANA_6_UNION;
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP3_4G_START (2)
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP3_4G_END (3)
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP2_4G_START (4)
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP2_4G_END (5)
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP1_CH0_4G_START (6)
#define ABB_RX_CH0_4G_ANA_6_BWCT_OP1_CH0_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_4G : 1;
        unsigned long GMBIAS_EN_4G : 1;
        unsigned long MODU_DEPTH_CTRL_4G : 1;
        unsigned long RX_DAC_LP_CTRL_CH0_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_ANA_7_UNION;
#define ABB_RX_CH0_4G_ANA_7_QT_REF_SEL_4G_START (4)
#define ABB_RX_CH0_4G_ANA_7_QT_REF_SEL_4G_END (4)
#define ABB_RX_CH0_4G_ANA_7_GMBIAS_EN_4G_START (5)
#define ABB_RX_CH0_4G_ANA_7_GMBIAS_EN_4G_END (5)
#define ABB_RX_CH0_4G_ANA_7_MODU_DEPTH_CTRL_4G_START (6)
#define ABB_RX_CH0_4G_ANA_7_MODU_DEPTH_CTRL_4G_END (6)
#define ABB_RX_CH0_4G_ANA_7_RX_DAC_LP_CTRL_CH0_4G_START (7)
#define ABB_RX_CH0_4G_ANA_7_RX_DAC_LP_CTRL_CH0_4G_END (7)
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
} ABB_RX_CH0_4G_ANA_8_UNION;
#define ABB_RX_CH0_4G_ANA_8_CK_CTRL_DATA_4G_START (0)
#define ABB_RX_CH0_4G_ANA_8_CK_CTRL_DATA_4G_END (4)
#define ABB_RX_CH0_4G_ANA_8_CK_CTRL_MODE_4G_START (5)
#define ABB_RX_CH0_4G_ANA_8_CK_CTRL_MODE_4G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_sel_ch0_4g : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_ch0_4g : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH0_4G_ANA_9_UNION;
#define ABB_RX_CH0_4G_ANA_9_wpll_sel_ch0_4g_START (0)
#define ABB_RX_CH0_4G_ANA_9_wpll_sel_ch0_4g_END (0)
#define ABB_RX_CH0_4G_ANA_9_blk_len_sel_ch0_4g_START (6)
#define ABB_RX_CH0_4G_ANA_9_blk_len_sel_ch0_4g_END (7)
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
        unsigned long wpll_sel_tds : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_tds : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_TDS_ANA_9_UNION;
#define ABB_RX_TDS_ANA_9_wpll_sel_tds_START (0)
#define ABB_RX_TDS_ANA_9_wpll_sel_tds_END (0)
#define ABB_RX_TDS_ANA_9_blk_len_sel_tds_START (6)
#define ABB_RX_TDS_ANA_9_blk_len_sel_tds_END (7)
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
        unsigned long wpll_sel_idle : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_idle : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_IDLE_ANA_9_UNION;
#define ABB_RX_IDLE_ANA_9_wpll_sel_idle_START (0)
#define ABB_RX_IDLE_ANA_9_wpll_sel_idle_END (0)
#define ABB_RX_IDLE_ANA_9_blk_len_sel_idle_START (6)
#define ABB_RX_IDLE_ANA_9_blk_len_sel_idle_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_3G : 2;
        unsigned long BWCT_OP2_3G : 2;
        unsigned long BWCT_OP1_CH1_3G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_3G_ANA_6_UNION;
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP3_3G_START (2)
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP3_3G_END (3)
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP2_3G_START (4)
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP2_3G_END (5)
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP1_CH1_3G_START (6)
#define ABB_RX_CH1_3G_ANA_6_BWCT_OP1_CH1_3G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_3G : 1;
        unsigned long GMBIAS_EN_3G : 1;
        unsigned long MODU_DEPTH_CTRL_3G : 1;
        unsigned long RX_DAC_LP_CTRL_CH1_3G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_3G_ANA_7_UNION;
#define ABB_RX_CH1_3G_ANA_7_QT_REF_SEL_3G_START (4)
#define ABB_RX_CH1_3G_ANA_7_QT_REF_SEL_3G_END (4)
#define ABB_RX_CH1_3G_ANA_7_GMBIAS_EN_3G_START (5)
#define ABB_RX_CH1_3G_ANA_7_GMBIAS_EN_3G_END (5)
#define ABB_RX_CH1_3G_ANA_7_MODU_DEPTH_CTRL_3G_START (6)
#define ABB_RX_CH1_3G_ANA_7_MODU_DEPTH_CTRL_3G_END (6)
#define ABB_RX_CH1_3G_ANA_7_RX_DAC_LP_CTRL_CH1_3G_START (7)
#define ABB_RX_CH1_3G_ANA_7_RX_DAC_LP_CTRL_CH1_3G_END (7)
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
} ABB_RX_CH1_3G_ANA_8_UNION;
#define ABB_RX_CH1_3G_ANA_8_CK_CTRL_DATA_3G_START (0)
#define ABB_RX_CH1_3G_ANA_8_CK_CTRL_DATA_3G_END (4)
#define ABB_RX_CH1_3G_ANA_8_CK_CTRL_MODE_3G_START (5)
#define ABB_RX_CH1_3G_ANA_8_CK_CTRL_MODE_3G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_sel_ch1_3g : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_ch1_3g : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_3G_ANA_9_UNION;
#define ABB_RX_CH1_3G_ANA_9_wpll_sel_ch1_3g_START (0)
#define ABB_RX_CH1_3G_ANA_9_wpll_sel_ch1_3g_END (0)
#define ABB_RX_CH1_3G_ANA_9_blk_len_sel_ch1_3g_START (6)
#define ABB_RX_CH1_3G_ANA_9_blk_len_sel_ch1_3g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 2;
        unsigned long BWCT_OP3_4G : 2;
        unsigned long BWCT_OP2_4G : 2;
        unsigned long BWCT_OP1_CH1_4G : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_4G_ANA_6_UNION;
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP3_4G_START (2)
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP3_4G_END (3)
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP2_4G_START (4)
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP2_4G_END (5)
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP1_CH1_4G_START (6)
#define ABB_RX_CH1_4G_ANA_6_BWCT_OP1_CH1_4G_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 4;
        unsigned long QT_REF_SEL_4G : 1;
        unsigned long GMBIAS_EN_4G : 1;
        unsigned long MODU_DEPTH_CTRL_4G : 1;
        unsigned long RX_DAC_LP_CTRL_CH1_4G : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_4G_ANA_7_UNION;
#define ABB_RX_CH1_4G_ANA_7_QT_REF_SEL_4G_START (4)
#define ABB_RX_CH1_4G_ANA_7_QT_REF_SEL_4G_END (4)
#define ABB_RX_CH1_4G_ANA_7_GMBIAS_EN_4G_START (5)
#define ABB_RX_CH1_4G_ANA_7_GMBIAS_EN_4G_END (5)
#define ABB_RX_CH1_4G_ANA_7_MODU_DEPTH_CTRL_4G_START (6)
#define ABB_RX_CH1_4G_ANA_7_MODU_DEPTH_CTRL_4G_END (6)
#define ABB_RX_CH1_4G_ANA_7_RX_DAC_LP_CTRL_CH1_4G_START (7)
#define ABB_RX_CH1_4G_ANA_7_RX_DAC_LP_CTRL_CH1_4G_END (7)
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
} ABB_RX_CH1_4G_ANA_8_UNION;
#define ABB_RX_CH1_4G_ANA_8_CK_CTRL_DATA_4G_START (0)
#define ABB_RX_CH1_4G_ANA_8_CK_CTRL_DATA_4G_END (4)
#define ABB_RX_CH1_4G_ANA_8_CK_CTRL_MODE_4G_START (5)
#define ABB_RX_CH1_4G_ANA_8_CK_CTRL_MODE_4G_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_sel_ch1_4g : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_ch1_4g : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_CH1_4G_ANA_9_UNION;
#define ABB_RX_CH1_4G_ANA_9_wpll_sel_ch1_4g_START (0)
#define ABB_RX_CH1_4G_ANA_9_wpll_sel_ch1_4g_END (0)
#define ABB_RX_CH1_4G_ANA_9_blk_len_sel_ch1_4g_START (6)
#define ABB_RX_CH1_4G_ANA_9_blk_len_sel_ch1_4g_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rxa_en_sel : 1;
        unsigned long ch1_rxb_en_sel : 1;
        unsigned long ch1_tx_en_sel : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_LINE_SEL_UNION;
#define ABB_CH1_LINE_SEL_ch1_rxa_en_sel_START (0)
#define ABB_CH1_LINE_SEL_ch1_rxa_en_sel_END (0)
#define ABB_CH1_LINE_SEL_ch1_rxb_en_sel_START (1)
#define ABB_CH1_LINE_SEL_ch1_rxb_en_sel_END (1)
#define ABB_CH1_LINE_SEL_ch1_tx_en_sel_START (2)
#define ABB_CH1_LINE_SEL_ch1_tx_en_sel_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_line_ctrl_mode_cfg : 3;
        unsigned long ch1_line_ctrl_mode_sel : 1;
        unsigned long ch1_blk_en_cfg : 1;
        unsigned long ch1_blk_en_sel : 1;
        unsigned long ch1_cfr_en_cfg : 1;
        unsigned long ch1_cfr_en_sel : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_LINE_CFG_UNION;
#define ABB_CH1_LINE_CFG_ch1_line_ctrl_mode_cfg_START (0)
#define ABB_CH1_LINE_CFG_ch1_line_ctrl_mode_cfg_END (2)
#define ABB_CH1_LINE_CFG_ch1_line_ctrl_mode_sel_START (3)
#define ABB_CH1_LINE_CFG_ch1_line_ctrl_mode_sel_END (3)
#define ABB_CH1_LINE_CFG_ch1_blk_en_cfg_START (4)
#define ABB_CH1_LINE_CFG_ch1_blk_en_cfg_END (4)
#define ABB_CH1_LINE_CFG_ch1_blk_en_sel_START (5)
#define ABB_CH1_LINE_CFG_ch1_blk_en_sel_END (5)
#define ABB_CH1_LINE_CFG_ch1_cfr_en_cfg_START (6)
#define ABB_CH1_LINE_CFG_ch1_cfr_en_cfg_END (6)
#define ABB_CH1_LINE_CFG_ch1_cfr_en_sel_START (7)
#define ABB_CH1_LINE_CFG_ch1_cfr_en_sel_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_blk_clk_sel : 1;
        unsigned long ch1_ee_clk_sel : 1;
        unsigned long ch1_cfr_clk_sel : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_CLK_SEL_UNION;
#define ABB_CH1_CLK_SEL_ch1_blk_clk_sel_START (0)
#define ABB_CH1_CLK_SEL_ch1_blk_clk_sel_END (0)
#define ABB_CH1_CLK_SEL_ch1_ee_clk_sel_START (1)
#define ABB_CH1_CLK_SEL_ch1_ee_clk_sel_END (1)
#define ABB_CH1_CLK_SEL_ch1_cfr_clk_sel_START (2)
#define ABB_CH1_CLK_SEL_ch1_cfr_clk_sel_END (2)
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
        unsigned long ch1_rxa_en_rpt : 1;
        unsigned long ch1_rxb_en_rpt : 1;
        unsigned long ch1_tx_en_rpt : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_LINE_RPT0_UNION;
#define ABB_CH1_LINE_RPT0_ch1_rxa_en_rpt_START (0)
#define ABB_CH1_LINE_RPT0_ch1_rxa_en_rpt_END (0)
#define ABB_CH1_LINE_RPT0_ch1_rxb_en_rpt_START (1)
#define ABB_CH1_LINE_RPT0_ch1_rxb_en_rpt_END (1)
#define ABB_CH1_LINE_RPT0_ch1_tx_en_rpt_START (2)
#define ABB_CH1_LINE_RPT0_ch1_tx_en_rpt_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_line_ctrl_mode_rpt : 3;
        unsigned long reserved_0 : 1;
        unsigned long ch1_rxa_blk_en_rpt : 1;
        unsigned long ch1_rxb_blk_en_rpt : 1;
        unsigned long ch1_cfr_en_rpt : 1;
        unsigned long reserved_1 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_LINE_RPT1_UNION;
#define ABB_CH1_LINE_RPT1_ch1_line_ctrl_mode_rpt_START (0)
#define ABB_CH1_LINE_RPT1_ch1_line_ctrl_mode_rpt_END (2)
#define ABB_CH1_LINE_RPT1_ch1_rxa_blk_en_rpt_START (4)
#define ABB_CH1_LINE_RPT1_ch1_rxa_blk_en_rpt_END (4)
#define ABB_CH1_LINE_RPT1_ch1_rxb_blk_en_rpt_START (5)
#define ABB_CH1_LINE_RPT1_ch1_rxb_blk_en_rpt_END (5)
#define ABB_CH1_LINE_RPT1_ch1_cfr_en_rpt_START (6)
#define ABB_CH1_LINE_RPT1_ch1_cfr_en_rpt_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long reserved : 1;
        unsigned long ch1_rx_comp_fix_rpt : 1;
        unsigned long ch1_rx_hb_bp_rpt : 1;
        unsigned long ch1_rx_rate_rpt : 2;
        unsigned long ch1_rx_mode_dig_rpt : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RX_MODE_RPT_UNION;
#define ABB_CH1_RX_MODE_RPT_ch1_rx_comp_fix_rpt_START (1)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_comp_fix_rpt_END (1)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_hb_bp_rpt_START (2)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_hb_bp_rpt_END (2)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_rate_rpt_START (3)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_rate_rpt_END (4)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_mode_dig_rpt_START (5)
#define ABB_CH1_RX_MODE_RPT_ch1_rx_mode_dig_rpt_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_comp_bp_rpt : 1;
        unsigned long ch1_tx_hb_bp_rpt : 1;
        unsigned long ch1_tx_rate_rpt : 3;
        unsigned long ch1_tx_mode_dig_rpt : 3;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_TX_MODE_RPT_UNION;
#define ABB_CH1_TX_MODE_RPT_ch1_tx_comp_bp_rpt_START (0)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_comp_bp_rpt_END (0)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_hb_bp_rpt_START (1)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_hb_bp_rpt_END (1)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_rate_rpt_START (2)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_rate_rpt_END (4)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_mode_dig_rpt_START (5)
#define ABB_CH1_TX_MODE_RPT_ch1_tx_mode_dig_rpt_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_rx_aclk_rpt : 1;
        unsigned long ch1_rx_clk_rpt : 1;
        unsigned long ch1_rx_vld_rpt : 1;
        unsigned long ch1_rxa_data_rpt : 1;
        unsigned long ch1_rxa_overflow_rpt : 1;
        unsigned long ch1_rxb_data_rpt : 1;
        unsigned long ch1_rxb_overflow_rpt : 1;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_RX_STATE_RPT_UNION;
#define ABB_CH1_RX_STATE_RPT_ch1_rx_aclk_rpt_START (0)
#define ABB_CH1_RX_STATE_RPT_ch1_rx_aclk_rpt_END (0)
#define ABB_CH1_RX_STATE_RPT_ch1_rx_clk_rpt_START (1)
#define ABB_CH1_RX_STATE_RPT_ch1_rx_clk_rpt_END (1)
#define ABB_CH1_RX_STATE_RPT_ch1_rx_vld_rpt_START (2)
#define ABB_CH1_RX_STATE_RPT_ch1_rx_vld_rpt_END (2)
#define ABB_CH1_RX_STATE_RPT_ch1_rxa_data_rpt_START (3)
#define ABB_CH1_RX_STATE_RPT_ch1_rxa_data_rpt_END (3)
#define ABB_CH1_RX_STATE_RPT_ch1_rxa_overflow_rpt_START (4)
#define ABB_CH1_RX_STATE_RPT_ch1_rxa_overflow_rpt_END (4)
#define ABB_CH1_RX_STATE_RPT_ch1_rxb_data_rpt_START (5)
#define ABB_CH1_RX_STATE_RPT_ch1_rxb_data_rpt_END (5)
#define ABB_CH1_RX_STATE_RPT_ch1_rxb_overflow_rpt_START (6)
#define ABB_CH1_RX_STATE_RPT_ch1_rxb_overflow_rpt_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_tx_aclk_rpt : 1;
        unsigned long ch1_tx_dclk_rpt : 1;
        unsigned long ch1_tx_vld_rpt : 1;
        unsigned long ch1_tx_clk_rpt : 1;
        unsigned long ch1_tx_data_rpt : 1;
        unsigned long ch1_tx_overflow_rpt : 1;
        unsigned long ch1_tx_fifo_wfull : 1;
        unsigned long ch1_tx_fifo_rempty : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_TX_STATE_RPT_UNION;
#define ABB_CH1_TX_STATE_RPT_ch1_tx_aclk_rpt_START (0)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_aclk_rpt_END (0)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_dclk_rpt_START (1)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_dclk_rpt_END (1)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_vld_rpt_START (2)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_vld_rpt_END (2)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_clk_rpt_START (3)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_clk_rpt_END (3)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_data_rpt_START (4)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_data_rpt_END (4)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_overflow_rpt_START (5)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_overflow_rpt_END (5)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_fifo_wfull_START (6)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_fifo_wfull_END (6)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_fifo_rempty_START (7)
#define ABB_CH1_TX_STATE_RPT_ch1_tx_fifo_rempty_END (7)
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
        unsigned long ch1_tds_rx_dly : 3;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_TDS_RX_DLY_UNION;
#define ABB_CH1_TDS_RX_DLY_ch1_tds_rx_dly_START (0)
#define ABB_CH1_TDS_RX_DLY_ch1_tds_rx_dly_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long ch1_flush_width_msb : 3;
        unsigned long ch1_flush_value : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_CH1_FLUSH_CFG1_UNION;
#define ABB_CH1_FLUSH_CFG1_ch1_flush_width_msb_START (0)
#define ABB_CH1_FLUSH_CFG1_ch1_flush_width_msb_END (2)
#define ABB_CH1_FLUSH_CFG1_ch1_flush_value_START (3)
#define ABB_CH1_FLUSH_CFG1_ch1_flush_value_END (7)
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
        unsigned long tx_comp_sel_c : 2;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_DIG_3_UNION;
#define ABB_TX_C_DIG_3_tx_cfr_bp_c_START (0)
#define ABB_TX_C_DIG_3_tx_cfr_bp_c_END (0)
#define ABB_TX_C_DIG_3_tx_flush_en_c_START (1)
#define ABB_TX_C_DIG_3_tx_flush_en_c_END (1)
#define ABB_TX_C_DIG_3_tx_comp_sel_c_START (2)
#define ABB_TX_C_DIG_3_tx_comp_sel_c_END (3)
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
        unsigned long wpll_sel_c : 1;
        unsigned long reserved : 5;
        unsigned long blk_len_sel_c : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_RX_C_ANA_9_UNION;
#define ABB_RX_C_ANA_9_wpll_sel_c_START (0)
#define ABB_RX_C_ANA_9_wpll_sel_c_END (0)
#define ABB_RX_C_ANA_9_blk_len_sel_c_START (6)
#define ABB_RX_C_ANA_9_blk_len_sel_c_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long TX_MODE_CLK : 2;
        unsigned long TX_Q_PD_A : 1;
        unsigned long TX_I_PD_A : 1;
        unsigned long TX_DIV_MODE : 2;
        unsigned long FC_B1_B0_C : 2;
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
#define ABB_TX_C_ANA_1_FC_B1_B0_C_START (6)
#define ABB_TX_C_ANA_1_FC_B1_B0_C_END (7)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long CURRENT_MODE_OP_C : 2;
        unsigned long reserved : 2;
        unsigned long LPF_MODE_CURRENT_C : 2;
        unsigned long FC_B2_C : 1;
        unsigned long TX_MODE_CLK_B3 : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_C_ANA_2_UNION;
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP_C_START (0)
#define ABB_TX_C_ANA_2_CURRENT_MODE_OP_C_END (1)
#define ABB_TX_C_ANA_2_LPF_MODE_CURRENT_C_START (4)
#define ABB_TX_C_ANA_2_LPF_MODE_CURRENT_C_END (5)
#define ABB_TX_C_ANA_2_FC_B2_C_START (6)
#define ABB_TX_C_ANA_2_FC_B2_C_END (6)
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
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_c0 : 6;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_TX_COEF1_UNION;
#define ABB_TX_COEF1_tx_comp_c0_START (0)
#define ABB_TX_COEF1_tx_comp_c0_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_c2_msb : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_COEF4_UNION;
#define ABB_TX_COEF4_tx_comp_c2_msb_START (0)
#define ABB_TX_COEF4_tx_comp_c2_msb_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long tx_comp_c3_msb : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_TX_COEF6_UNION;
#define ABB_TX_COEF6_tx_comp_c3_msb_START (0)
#define ABB_TX_COEF6_tx_comp_c3_msb_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_delay1_sel : 2;
        unsigned long reserved_0 : 2;
        unsigned long bist_delay2_sel : 2;
        unsigned long reserved_1 : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BIST_DELAY_SEL_UNION;
#define ABB_BIST_DELAY_SEL_bist_delay1_sel_START (0)
#define ABB_BIST_DELAY_SEL_bist_delay1_sel_END (1)
#define ABB_BIST_DELAY_SEL_bist_delay2_sel_START (4)
#define ABB_BIST_DELAY_SEL_bist_delay2_sel_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_mode_bypass : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BIST_MODE_BYPASS_UNION;
#define ABB_BIST_MODE_BYPASS_bist_mode_bypass_START (0)
#define ABB_BIST_MODE_BYPASS_bist_mode_bypass_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_rx_bypass : 4;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BIST_RX_BYPASS_UNION;
#define ABB_BIST_RX_BYPASS_bist_rx_bypass_START (0)
#define ABB_BIST_RX_BYPASS_bist_rx_bypass_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_en : 1;
        unsigned long bist_gate_bp : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_ABB_BIST_EN_UNION;
#define ABB_ABB_BIST_EN_bist_en_START (0)
#define ABB_ABB_BIST_EN_bist_en_END (0)
#define ABB_ABB_BIST_EN_bist_gate_bp_START (1)
#define ABB_ABB_BIST_EN_bist_gate_bp_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long sndr_cal_done : 1;
        unsigned long reserved : 7;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BIST_SNDR_CAL_DONE_UNION;
#define ABB_BIST_SNDR_CAL_DONE_sndr_cal_done_START (0)
#define ABB_BIST_SNDR_CAL_DONE_sndr_cal_done_END (0)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long para_pass_flag : 6;
        unsigned long reserved : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BIST_PARA_PASS_FLAG_UNION;
#define ABB_BIST_PARA_PASS_FLAG_para_pass_flag_START (0)
#define ABB_BIST_PARA_PASS_FLAG_para_pass_flag_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_pass_flag_1 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_ABB_BIST_PASS_FLAG_1_UNION;
#define ABB_ABB_BIST_PASS_FLAG_1_bist_pass_flag_1_START (0)
#define ABB_ABB_BIST_PASS_FLAG_1_bist_pass_flag_1_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_pass_flag_2 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_ABB_BIST_PASS_FLAG_2_UNION;
#define ABB_ABB_BIST_PASS_FLAG_2_bist_pass_flag_2_START (0)
#define ABB_ABB_BIST_PASS_FLAG_2_bist_pass_flag_2_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_pass_flag_3 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_ABB_BIST_PASS_FLAG_3_UNION;
#define ABB_ABB_BIST_PASS_FLAG_3_bist_pass_flag_3_START (0)
#define ABB_ABB_BIST_PASS_FLAG_3_bist_pass_flag_3_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long bist_pass_flag_4 : 7;
        unsigned long reserved : 1;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_ABB_BIST_PASS_FLAG_4_UNION;
#define ABB_ABB_BIST_PASS_FLAG_4_bist_pass_flag_4_START (0)
#define ABB_ABB_BIST_PASS_FLAG_4_bist_pass_flag_4_END (6)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long dc_i_high : 3;
        unsigned long reserved : 5;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_BIST_DC_I_2_UNION;
#define ABB_BIST_DC_I_2_dc_i_high_START (0)
#define ABB_BIST_DC_I_2_dc_i_high_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long dc_q_high : 3;
        unsigned long reserved : 5;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_BIST_DC_Q_2_UNION;
#define ABB_BIST_DC_Q_2_dc_q_high_START (0)
#define ABB_BIST_DC_Q_2_dc_q_high_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long rxb_sep_en : 1;
        unsigned long reserved : 7;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_RXB_SEP_EN_UNION;
#define ABB_RXB_SEP_EN_rxb_sep_en_START (0)
#define ABB_RXB_SEP_EN_rxb_sep_en_END (0)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long gpll_gate_en : 1;
        unsigned long gpll_timeout : 1;
        unsigned long ch1_gpll_sel : 1;
        unsigned long ch0_gpll_sel : 1;
        unsigned long reserved : 4;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_GPLL_GATE_EN_UNION;
#define ABB_GPLL_GATE_EN_gpll_gate_en_START (0)
#define ABB_GPLL_GATE_EN_gpll_gate_en_END (0)
#define ABB_GPLL_GATE_EN_gpll_timeout_START (1)
#define ABB_GPLL_GATE_EN_gpll_timeout_END (1)
#define ABB_GPLL_GATE_EN_ch1_gpll_sel_START (2)
#define ABB_GPLL_GATE_EN_ch1_gpll_sel_END (2)
#define ABB_GPLL_GATE_EN_ch0_gpll_sel_START (3)
#define ABB_GPLL_GATE_EN_ch0_gpll_sel_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long gpll_gate_time_sel : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_GPLL_GATE_TIME_UNION;
#define ABB_GPLL_GATE_TIME_gpll_gate_time_sel_START (0)
#define ABB_GPLL_GATE_TIME_gpll_gate_time_sel_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long scpll_en : 1;
        unsigned long scpll_time : 2;
        unsigned long scpll_gate_en : 1;
        unsigned long scpll_timeout : 1;
        unsigned long scpll_lock : 1;
        unsigned long reserved : 2;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_SCPLL_LOCK_CTRL_UNION;
#define ABB_SCPLL_LOCK_CTRL_scpll_en_START (0)
#define ABB_SCPLL_LOCK_CTRL_scpll_en_END (0)
#define ABB_SCPLL_LOCK_CTRL_scpll_time_START (1)
#define ABB_SCPLL_LOCK_CTRL_scpll_time_END (2)
#define ABB_SCPLL_LOCK_CTRL_scpll_gate_en_START (3)
#define ABB_SCPLL_LOCK_CTRL_scpll_gate_en_END (3)
#define ABB_SCPLL_LOCK_CTRL_scpll_timeout_START (4)
#define ABB_SCPLL_LOCK_CTRL_scpll_timeout_END (4)
#define ABB_SCPLL_LOCK_CTRL_scpll_lock_START (5)
#define ABB_SCPLL_LOCK_CTRL_scpll_lock_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long scpll_fbdiv_h : 4;
        unsigned long reserved : 4;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_SCPLL_FBDIV_H_UNION;
#define ABB_SCPLL_FBDIV_H_scpll_fbdiv_h_START (0)
#define ABB_SCPLL_FBDIV_H_scpll_fbdiv_h_END (3)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long scpll_refdiv : 6;
        unsigned long reserved : 2;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_SCPLL_REFDIV_UNION;
#define ABB_SCPLL_REFDIV_scpll_refdiv_START (0)
#define ABB_SCPLL_REFDIV_scpll_refdiv_END (5)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long scpll_cfg_update : 1;
        unsigned long reserved : 7;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_SCPLL_CFG_UPDATE_UNION;
#define ABB_SCPLL_CFG_UPDATE_scpll_cfg_update_START (0)
#define ABB_SCPLL_CFG_UPDATE_scpll_cfg_update_END (0)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wbbp_sleep_en : 1;
        unsigned long scbbp_245m_sleep_en : 1;
        unsigned long scbbp_104m_sleep_en : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_BBP_SLEEP_EN_UNION;
#define ABB_BBP_SLEEP_EN_wbbp_sleep_en_START (0)
#define ABB_BBP_SLEEP_EN_wbbp_sleep_en_END (0)
#define ABB_BBP_SLEEP_EN_scbbp_245m_sleep_en_START (1)
#define ABB_BBP_SLEEP_EN_scbbp_245m_sleep_en_END (1)
#define ABB_BBP_SLEEP_EN_scbbp_104m_sleep_en_START (2)
#define ABB_BBP_SLEEP_EN_scbbp_104m_sleep_en_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_gate_en : 1;
        unsigned long wpll_timeout : 1;
        unsigned long reserved : 6;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_WPLL_GATE_EN_UNION;
#define ABB_WPLL_GATE_EN_wpll_gate_en_START (0)
#define ABB_WPLL_GATE_EN_wpll_gate_en_END (0)
#define ABB_WPLL_GATE_EN_wpll_timeout_START (1)
#define ABB_WPLL_GATE_EN_wpll_timeout_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long wpll_gate_time_sel : 2;
        unsigned long reserved : 6;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_WPLL_GATE_TIME_UNION;
#define ABB_WPLL_GATE_TIME_wpll_gate_time_sel_START (0)
#define ABB_WPLL_GATE_TIME_wpll_gate_time_sel_END (1)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long scpll_fref_sel : 1;
        unsigned long wpll_fref_sel : 1;
        unsigned long gpll_fref_sel : 1;
        unsigned long reserved : 5;
        unsigned long reserved_butt : 24;
    } reg;
} ABB_PLL_FREF_SEL_UNION;
#define ABB_PLL_FREF_SEL_scpll_fref_sel_START (0)
#define ABB_PLL_FREF_SEL_scpll_fref_sel_END (0)
#define ABB_PLL_FREF_SEL_wpll_fref_sel_START (1)
#define ABB_PLL_FREF_SEL_wpll_fref_sel_END (1)
#define ABB_PLL_FREF_SEL_gpll_fref_sel_START (2)
#define ABB_PLL_FREF_SEL_gpll_fref_sel_END (2)
typedef union
{
    unsigned long uwValue;
    struct
    {
        unsigned long soc_pll_sel : 1;
        unsigned long reserved : 7;
        unsigned long reserved_butt: 24;
    } reg;
} ABB_SOC_PLL_SEL_UNION;
#define ABB_SOC_PLL_SEL_soc_pll_sel_START (0)
#define ABB_SOC_PLL_SEL_soc_pll_sel_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
