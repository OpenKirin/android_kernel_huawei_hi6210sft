#ifndef __SOC_SMART_INTERFACE_H__
#define __SOC_SMART_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SMART_VERSION_ADDR(base) ((base) + (0x000))
#define SOC_SMART_STATUS1_ADDR(base) ((base) + (0x001))
#define SOC_SMART_STATUS2_ADDR(base) ((base) + (0x002))
#define SOC_SMART_IRQ1_ADDR(base) ((base) + (0x003))
#define SOC_SMART_IRQ2_ADDR(base) ((base) + (0x004))
#define SOC_SMART_IRQ3_ADDR(base) ((base) + (0x005))
#define SOC_SMART_COUL_IRQ_ADDR(base) ((base) + (0x006))
#define SOC_SMART_IRQ1_MASK_ADDR(base) ((base) + (0x007))
#define SOC_SMART_IRQ2_MASK_ADDR(base) ((base) + (0x008))
#define SOC_SMART_IRQ3_MASK_ADDR(base) ((base) + (0x009))
#define SOC_SMART_COUL_IRQ_MASK_ADDR(base) ((base) + (0x00A))
#define SOC_SMART_SCP_BUCK_RECORD1_ADDR(base) ((base) + (0x00B))
#define SOC_SMART_OCP_BUCK_RECORD1_ADDR(base) ((base) + (0x00C))
#define SOC_SMART_OCP_LDO1_8_RECORD2_ADDR(base) ((base) + (0x00D))
#define SOC_SMART_OCP_LDO16_9_RECORD3_ADDR(base) ((base) + (0x00E))
#define SOC_SMART_OCP_LDO22_17_RECORD4_ADDR(base) ((base) + (0x00F))
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ADDR(base) ((base) + (0x010))
#define SOC_SMART_OCP_DEB0_ADDR(base) ((base) + (0x01A))
#define SOC_SMART_OCP_DEB1_ADDR(base) ((base) + (0x01B))
#define SOC_SMART_ONOFF8_ADDR(base) ((base) + (0x01C))
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ADDR(base) ((base) + (0x01D))
#define SOC_SMART_OCP_MOD_CTRL3_ADDR(base) ((base) + (0x01E))
#define SOC_SMART_OCP_MOD_CTRL4_ADDR(base) ((base) + (0x01F))
#define SOC_SMART_OCP_MOD_CTRL5_ADDR(base) ((base) + (0x020))
#define SOC_SMART_OCP_MOD_CTRL6_ADDR(base) ((base) + (0x021))
#define SOC_SMART_OCP_MOD_CTRL7_ADDR(base) ((base) + (0x022))
#define SOC_SMART_OCP_MOD_CTRL8_ADDR(base) ((base) + (0x023))
#define SOC_SMART_OCP_MOD_CTRL9_ADDR(base) ((base) + (0x024))
#define SOC_SMART_OCP_MOD_CTRL11_ADDR(base) ((base) + (0x025))
#define SOC_SMART_ENABLE1_BUCK_ADDR(base) ((base) + (0x026))
#define SOC_SMART_DISABLE1_BUCK_ADDR(base) ((base) + (0x027))
#define SOC_SMART_ONOFF_STATUS1_BUCK_ADDR(base) ((base) + (0x028))
#define SOC_SMART_ENABLE2_LDO1_8_ADDR(base) ((base) + (0x029))
#define SOC_SMART_DISABLE2_LDO1_8_ADDR(base) ((base) + (0x02A))
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_ADDR(base) ((base) + (0x02B))
#define SOC_SMART_ENABLE3_LDO9_16_ADDR(base) ((base) + (0x02C))
#define SOC_SMART_DISABLE3_LDO9_16_ADDR(base) ((base) + (0x02D))
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_ADDR(base) ((base) + (0x02E))
#define SOC_SMART_ENABLE4_LDO17_22_ADDR(base) ((base) + (0x02F))
#define SOC_SMART_DISABLE4_LDO17_22_ADDR(base) ((base) + (0x030))
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_ADDR(base) ((base) + (0x031))
#define SOC_SMART_ENABLE5_LVS2_ADDR(base) ((base) + (0x032))
#define SOC_SMART_DISABLE5_LVS2_ADDR(base) ((base) + (0x033))
#define SOC_SMART_ONOFF_STATUS5_LVS2_ADDR(base) ((base) + (0x034))
#define SOC_SMART_ENABLE6_XO_CLK_ADDR(base) ((base) + (0x035))
#define SOC_SMART_DISABLE6_XO_CLK_ADDR(base) ((base) + (0x036))
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_ADDR(base) ((base) + (0x037))
#define SOC_SMART_ECO_MOD_CFG1_ADDR(base) ((base) + (0x038))
#define SOC_SMART_ECO_MOD_CFG2_ADDR(base) ((base) + (0x039))
#define SOC_SMART_ECO_MOD_CFG3_ADDR(base) ((base) + (0x03A))
#define SOC_SMART_ECO_MOD_CFG4_ADDR(base) ((base) + (0x03B))
#define SOC_SMART_ECO_MOD_CFG5_ADDR(base) ((base) + (0x03C))
#define SOC_SMART_ECO_MOD_CFG6_ADDR(base) ((base) + (0x03D))
#define SOC_SMART_ECO_MOD_CFG7_ADDR(base) ((base) + (0x03E))
#define SOC_SMART_ECO_MOD_CFG8_ADDR(base) ((base) + (0x03F))
#define SOC_SMART_PERI_EN_MARK_ADDR(base) ((base) + (0x040))
#define SOC_SMART_BUCK2_REG0_ADDR(base) ((base) + (0x049))
#define SOC_SMART_BUCK2_REG1_ADDR(base) ((base) + (0x04A))
#define SOC_SMART_BUCK2_REG2_ADDR(base) ((base) + (0x04B))
#define SOC_SMART_BUCK2_REG3_ADDR(base) ((base) + (0x04C))
#define SOC_SMART_BUCK2_REG4_ADDR(base) ((base) + (0x04D))
#define SOC_SMART_BUCK2_REG5_ADDR(base) ((base) + (0x04E))
#define SOC_SMART_BUCK2_REG6_ADDR(base) ((base) + (0x04F))
#define SOC_SMART_BUCK2_REG7_ADDR(base) ((base) + (0x050))
#define SOC_SMART_BUCK3_REG0_ADDR(base) ((base) + (0x051))
#define SOC_SMART_BUCK3_REG1_ADDR(base) ((base) + (0x052))
#define SOC_SMART_BUCK3_REG2_ADDR(base) ((base) + (0x053))
#define SOC_SMART_BUCK3_REG3_ADDR(base) ((base) + (0x054))
#define SOC_SMART_BUCK3_REG4_ADDR(base) ((base) + (0x055))
#define SOC_SMART_BUCK3_REG5_ADDR(base) ((base) + (0x056))
#define SOC_SMART_BUCK3_REG6_ADDR(base) ((base) + (0x057))
#define SOC_SMART_BUCK3_REG7_ADDR(base) ((base) + (0x058))
#define SOC_SMART_BUCK4_REG0_ADDR(base) ((base) + (0x059))
#define SOC_SMART_BUCK4_REG1_ADDR(base) ((base) + (0x05A))
#define SOC_SMART_BUCK4_REG2_ADDR(base) ((base) + (0x05B))
#define SOC_SMART_BUCK4_REG3_ADDR(base) ((base) + (0x05C))
#define SOC_SMART_BUCK4_REG4_ADDR(base) ((base) + (0x05D))
#define SOC_SMART_BUCK4_REG5_ADDR(base) ((base) + (0x05E))
#define SOC_SMART_BUCK4_REG6_ADDR(base) ((base) + (0x05F))
#define SOC_SMART_BUCK4_REG7_ADDR(base) ((base) + (0x060))
#define SOC_SMART_BUCK_RESERVE0_ADDR(base) ((base) + (0x061))
#define SOC_SMART_BUCK_RESERVE1_ADDR(base) ((base) + (0x062))
#define SOC_SMART_CLK_TOP0_ADDR(base) ((base) + (0x063))
#define SOC_SMART_CLK_TOP1_ADDR(base) ((base) + (0x064))
#define SOC_SMART_CLK_TOP3_ADDR(base) ((base) + (0x066))
#define SOC_SMART_CLK_TOP4_ADDR(base) ((base) + (0x067))
#define SOC_SMART_CLK_TOP5_ADDR(base) ((base) + (0x068))
#define SOC_SMART_CLASSD_CTRL1_ADDR(base) ((base) + (0x069))
#define SOC_SMART_CLASSD_CTRL2_ADDR(base) ((base) + (0x06A))
#define SOC_SMART_CLASSD_CTRL3_ADDR(base) ((base) + (0x06B))
#define SOC_SMART_VSET_BUCK2_ADJ_ADDR(base) ((base) + (0x06D))
#define SOC_SMART_VSET_BUCK3_ADJ_ADDR(base) ((base) + (0x06E))
#define SOC_SMART_VSET_BUCK4_ADJ0_ADDR(base) ((base) + (0x06F))
#define SOC_SMART_VSET_BUCK4_ADJ1_ADDR(base) ((base) + (0x070))
#define SOC_SMART_LDO1_REG_ADJ_ADDR(base) ((base) + (0x071))
#define SOC_SMART_LDO2_REG_ADJ_ADDR(base) ((base) + (0x072))
#define SOC_SMART_LDO3_REG_ADJ0_ADDR(base) ((base) + (0x073))
#define SOC_SMART_LDO3_REG_ADJ1_ADDR(base) ((base) + (0x074))
#define SOC_SMART_LDO4_REG_ADJ_ADDR(base) ((base) + (0x075))
#define SOC_SMART_LDO5_REG_ADJ_ADDR(base) ((base) + (0x076))
#define SOC_SMART_LDO6_REG_ADJ_ADDR(base) ((base) + (0x077))
#define SOC_SMART_LDO7_REG_ADJ_ADDR(base) ((base) + (0x078))
#define SOC_SMART_LDO8_REG_ADJ_ADDR(base) ((base) + (0x079))
#define SOC_SMART_LDO9_REG_ADJ_ADDR(base) ((base) + (0x07A))
#define SOC_SMART_LDO10_REG_ADJ_ADDR(base) ((base) + (0x07B))
#define SOC_SMART_LDO11_REG_ADJ_ADDR(base) ((base) + (0x07C))
#define SOC_SMART_LDO12_REG_ADJ_ADDR(base) ((base) + (0x07D))
#define SOC_SMART_LDO13_REG_ADJ_ADDR(base) ((base) + (0x07E))
#define SOC_SMART_LDO14_REG_ADJ_ADDR(base) ((base) + (0x07F))
#define SOC_SMART_LDO15_REG_ADJ_ADDR(base) ((base) + (0x080))
#define SOC_SMART_LDO16_REG_ADJ_ADDR(base) ((base) + (0x081))
#define SOC_SMART_LDO17_REG_ADJ_ADDR(base) ((base) + (0x082))
#define SOC_SMART_LDO18_REG_ADJ_ADDR(base) ((base) + (0x083))
#define SOC_SMART_LDO19_REG_ADJ_ADDR(base) ((base) + (0x084))
#define SOC_SMART_LDO20_REG_ADJ_ADDR(base) ((base) + (0x085))
#define SOC_SMART_LDO21_REG_ADJ_ADDR(base) ((base) + (0x086))
#define SOC_SMART_LDO22_REG_ADJ_ADDR(base) ((base) + (0x087))
#define SOC_SMART_PMUA_REG_ADJ_ADDR(base) ((base) + (0x088))
#define SOC_SMART_LVS_ADJ1_ADDR(base) ((base) + (0x089))
#define SOC_SMART_BANDGAP_THSD_ADJ1_ADDR(base) ((base) + (0x08A))
#define SOC_SMART_BANDGAP_THSD_ADJ2_ADDR(base) ((base) + (0x08B))
#define SOC_SMART_DR_FLA_CTRL1_ADDR(base) ((base) + (0x08C))
#define SOC_SMART_DR_FLA_CTRL2_ADDR(base) ((base) + (0x08D))
#define SOC_SMART_FLASH_PERIOD_DR12_ADDR(base) ((base) + (0x08E))
#define SOC_SMART_FLASH_ON_DR12_ADDR(base) ((base) + (0x08F))
#define SOC_SMART_FLASH_PERIOD_DR345_ADDR(base) ((base) + (0x090))
#define SOC_SMART_FLASH_ON_DR345_ADDR(base) ((base) + (0x091))
#define SOC_SMART_DR_MODE_SEL_ADDR(base) ((base) + (0x092))
#define SOC_SMART_DR_BRE_CTRL_ADDR(base) ((base) + (0x093))
#define SOC_SMART_DR12_TIM_CONF0_ADDR(base) ((base) + (0x094))
#define SOC_SMART_DR12_TIM_CONF1_ADDR(base) ((base) + (0x095))
#define SOC_SMART_DR1_ISET_ADDR(base) ((base) + (0x096))
#define SOC_SMART_DR2_ISET_ADDR(base) ((base) + (0x097))
#define SOC_SMART_DR_LED_CTRL_ADDR(base) ((base) + (0x098))
#define SOC_SMART_DR_OUT_CTRL_ADDR(base) ((base) + (0x099))
#define SOC_SMART_DR3_ISET_ADDR(base) ((base) + (0x09A))
#define SOC_SMART_DR3_START_DEL_ADDR(base) ((base) + (0x09B))
#define SOC_SMART_DR4_ISET_ADDR(base) ((base) + (0x09C))
#define SOC_SMART_DR4_START_DEL_ADDR(base) ((base) + (0x09D))
#define SOC_SMART_DR5_ISET_ADDR(base) ((base) + (0x09E))
#define SOC_SMART_DR5_START_DEL_ADDR(base) ((base) + (0x09F))
#define SOC_SMART_DR3_TIM_CONF0_ADDR(base) ((base) + (0x0A0))
#define SOC_SMART_DR3_TIM_CONF1_ADDR(base) ((base) + (0x0A1))
#define SOC_SMART_OTP_CTRL1_ADDR(base) ((base) + (0x0A2))
#define SOC_SMART_OTP_CTRL2_ADDR(base) ((base) + (0x0A3))
#define SOC_SMART_OTP_PDIN_ADDR(base) ((base) + (0x0A4))
#define SOC_SMART_ANA_IN_ADDR(base) ((base) + (0x0B6))
#define SOC_SMART_RESERVED0_ADDR(base) ((base) + (0x0B7))
#define SOC_SMART_RESERVED1_ADDR(base) ((base) + (0x0B8))
#define SOC_SMART_RESERVED2_ADDR(base) ((base) + (0x0B9))
#define SOC_SMART_DAC_CTRL_ADDR(base) ((base) + (0x0BA))
#define SOC_SMART_BUCK01_CTRL0_ADDR(base) ((base) + (0x0D7))
#define SOC_SMART_BUCK01_CTRL1_ADDR(base) ((base) + (0x0D8))
#define SOC_SMART_BUCK01_CTRL2_ADDR(base) ((base) + (0xD9))
#define SOC_SMART_BUCK01_CTRL3_ADDR(base) ((base) + (0xDA))
#define SOC_SMART_BUCK01_CTRL4_ADDR(base) ((base) + (0x0DB))
#define SOC_SMART_BUCK0_CTRL0_ADDR(base) ((base) + (0x0DC))
#define SOC_SMART_BUCK0_CTRL1_ADDR(base) ((base) + (0x0DD))
#define SOC_SMART_BUCK0_CTRL2_ADDR(base) ((base) + (0x0DE))
#define SOC_SMART_BUCK0_CTRL3_ADDR(base) ((base) + (0x0DF))
#define SOC_SMART_BUCK0_CTRL4_ADDR(base) ((base) + (0x0E0))
#define SOC_SMART_BUCK0_CTRL5_ADDR(base) ((base) + (0x0E1))
#define SOC_SMART_BUCK0_CTRL6_ADDR(base) ((base) + (0x0E2))
#define SOC_SMART_BUCK0_CTRL7_ADDR(base) ((base) + (0x0E3))
#define SOC_SMART_BUCK0_CTRL8_ADDR(base) ((base) + (0x0E4))
#define SOC_SMART_BUCK0_CTRL9_ADDR(base) ((base) + (0x0E5))
#define SOC_SMART_BUCK0_CTRL10_ADDR(base) ((base) + (0x0E6))
#define SOC_SMART_BUCK1_CTRL0_ADDR(base) ((base) + (0x0E7))
#define SOC_SMART_BUCK1_CTRL1_ADDR(base) ((base) + (0x0E8))
#define SOC_SMART_BUCK1_CTRL2_ADDR(base) ((base) + (0x0E9))
#define SOC_SMART_BUCK1_CTRL3_ADDR(base) ((base) + (0x0EA))
#define SOC_SMART_BUCK1_CTRL4_ADDR(base) ((base) + (0x0EB))
#define SOC_SMART_BUCK1_CTRL5_ADDR(base) ((base) + (0x0EC))
#define SOC_SMART_BUCK1_CTRL6_ADDR(base) ((base) + (0x0ED))
#define SOC_SMART_BUCK1_CTRL7_ADDR(base) ((base) + (0x0EF))
#define SOC_SMART_BUCK1_CTRL8_ADDR(base) ((base) + (0x0F0))
#define SOC_SMART_BUCK1_CTRL9_ADDR(base) ((base) + (0x0F1))
#define SOC_SMART_BUCK1_CTRL10_ADDR(base) ((base) + (0x0F2))
#define SOC_SMART_LDO22_OCP_VOS_ADDR(base) ((base) + (0x0F3))
#define SOC_SMART_VSET_LDO_BUCK_ADDR(base) ((base) + (0x0F4))
#define SOC_SMART_XO_LDO_CTRL_ADDR(base) ((base) + (0x0F5))
#define SOC_SMART_BUCK01_MOD_CTRL_ADDR(base) ((base) + (0x0F7))
#define SOC_SMART_SENSOR_CLK_CTRL_ADDR(base) ((base) + (0x0F9))
#define SOC_SMART_CK_19M2_CTRL_ADDR(base) ((base) + (0x0FA))
#define SOC_SMART_EXTBUCK_MOD_SEL_ADDR(base) ((base) + (0x0FB))
#define SOC_SMART_XO_WAVE_CTRL_ADDR(base) ((base) + (0x0FD))
#define SOC_SMART_NP_IRQ1_RECORD_ADDR(base) ((base) + (0x011))
#define SOC_SMART_NP_IRQ2_RECORD_ADDR(base) ((base) + (0x012))
#define SOC_SMART_NP_IRQ3_RECORD_ADDR(base) ((base) + (0x013))
#define SOC_SMART_NP_SCP_RECORD1_ADDR(base) ((base) + (0x014))
#define SOC_SMART_NP_OCP_RECORD1_ADDR(base) ((base) + (0x015))
#define SOC_SMART_NP_OCP_RECORD2_ADDR(base) ((base) + (0x016))
#define SOC_SMART_NP_OCP_RECORD3_ADDR(base) ((base) + (0x017))
#define SOC_SMART_NP_OCP_RECORD4_ADDR(base) ((base) + (0x018))
#define SOC_SMART_NP_OCP_RECORD5_ADDR(base) ((base) + (0x019))
#define SOC_SMART_CLK_TOP2_ADDR(base) ((base) + (0x065))
#define SOC_SMART_RTCDR0_ADDR(base) ((base) + (0x0A9))
#define SOC_SMART_RTCDR1_ADDR(base) ((base) + (0x0AA))
#define SOC_SMART_RTCDR2_ADDR(base) ((base) + (0x0AB))
#define SOC_SMART_RTCDR3_ADDR(base) ((base) + (0x0AC))
#define SOC_SMART_RTCMR0_ADDR(base) ((base) + (0x0AD))
#define SOC_SMART_RTCMR1_ADDR(base) ((base) + (0x0AE))
#define SOC_SMART_RTCMR2_ADDR(base) ((base) + (0x0AF))
#define SOC_SMART_RTCMR3_ADDR(base) ((base) + (0x0B0))
#define SOC_SMART_RTCLR0_ADDR(base) ((base) + (0x0B1))
#define SOC_SMART_RTCLR1_ADDR(base) ((base) + (0x0B2))
#define SOC_SMART_RTCLR2_ADDR(base) ((base) + (0x0B3))
#define SOC_SMART_RTCLR3_ADDR(base) ((base) + (0x0B4))
#define SOC_SMART_RTCCTRL_ADDR(base) ((base) + (0x0B5))
#define SOC_SMART_OTP_PDOB0_ADDR(base) ((base) + (0x0A5))
#define SOC_SMART_OTP_PDOB1_ADDR(base) ((base) + (0x0A6))
#define SOC_SMART_OTP_PDOB2_ADDR(base) ((base) + (0x0A7))
#define SOC_SMART_OTP_PDOB3_ADDR(base) ((base) + (0x0A8))
#define SOC_SMART_CRC_VALUE0_ADDR(base) ((base) + (0x0BB))
#define SOC_SMART_CRC_VALUE1_ADDR(base) ((base) + (0x0BC))
#define SOC_SMART_CRC_VALUE2_ADDR(base) ((base) + (0x0BD))
#define SOC_SMART_NP_REG_ADJ1_ADDR(base) ((base) + (0x0BE))
#define SOC_SMART_NP_REG_ADJ2_ADDR(base) ((base) + (0x0BF))
#define SOC_SMART_NP_REG_CHG_ADDR(base) ((base) + (0x0C0))
#define SOC_SMART_RTC_ADJ1_ADDR(base) ((base) + (0x0C1))
#define SOC_SMART_RTC_ADJ2_ADDR(base) ((base) + (0x0C2))
#define SOC_SMART_XO_THRESOLD1_ADDR(base) ((base) + (0x0C3))
#define SOC_SMART_XO_THRESOLD2_ADDR(base) ((base) + (0x0C4))
#define SOC_SMART_NP_RSVED_ANA0_ADDR(base) ((base) + (0x0C5))
#define SOC_SMART_NP_RSVED_ANA1_ADDR(base) ((base) + (0x0C6))
#define SOC_SMART_NP_RSVED0_ADDR(base) ((base) + (0x0C7))
#define SOC_SMART_NP_RSVED1_ADDR(base) ((base) + (0x0C8))
#define SOC_SMART_NP_RSVED2_ADDR(base) ((base) + (0x0C9))
#define SOC_SMART_NP_RSVED3_ADDR(base) ((base) + (0x0CA))
#define SOC_SMART_NP_RSVED4_ADDR(base) ((base) + (0x0CB))
#define SOC_SMART_NP_RSVED5_ADDR(base) ((base) + (0x0CC))
#define SOC_SMART_NP_RSVED6_ADDR(base) ((base) + (0x0CD))
#define SOC_SMART_NP_RSVED7_ADDR(base) ((base) + (0x0CE))
#define SOC_SMART_RTC_PWRUP_TIMER0_ADDR(base) ((base) + (0x0CF))
#define SOC_SMART_RTC_PWRUP_TIMER1_ADDR(base) ((base) + (0x0D0))
#define SOC_SMART_RTC_PWRUP_TIMER2_ADDR(base) ((base) + (0x0D1))
#define SOC_SMART_RTC_PWRUP_TIMER3_ADDR(base) ((base) + (0x0D2))
#define SOC_SMART_RTC_PWRDOWN_TIMER0_ADDR(base) ((base) + (0x0D3))
#define SOC_SMART_RTC_PWRDOWN_TIMER1_ADDR(base) ((base) + (0x0D4))
#define SOC_SMART_RTC_PWRDOWN_TIMER2_ADDR(base) ((base) + (0x0D5))
#define SOC_SMART_RTC_PWRDOWN_TIMER3_ADDR(base) ((base) + (0x0D6))
#define SOC_SMART_NOPWR_RC_OFF_EN_ADDR(base) ((base) + (0x0EE))
#define SOC_SMART_XO_DIG_CLK_ADDR(base) ((base) + (0x0F6))
#define SOC_SMART_SMPL_OPEN_EN_ADDR(base) ((base) + (0x0F8))
#define SOC_SMART_PWR_HOLD_2D_DEB_ADDR(base) ((base) + (0x0FC))
#define SOC_SMART_CK19M2_600_586_EN_ADDR(base) ((base) + (0x0FE))
#define SOC_SMART_NP_SMPL_IRQ_ADDR(base) ((base) + (0x0FF))
#define SOC_SMART_CLK_TOP6_ADDR(base) ((base) + (0x100))
#define SOC_SMART_CURRENT_0_ADDR(base) ((base) + (0x14D))
#define SOC_SMART_CURRENT_1_ADDR(base) ((base) + (0x14E))
#define SOC_SMART_V_OUT_0_ADDR(base) ((base) + (0x14F))
#define SOC_SMART_V_OUT_1_ADDR(base) ((base) + (0x150))
#define SOC_SMART_CLJ_CTRL_REG_ADDR(base) ((base) + (0x151))
#define SOC_SMART_ECO_REFALSH_TIME_ADDR(base) ((base) + (0x152))
#define SOC_SMART_CL_OUT0_ADDR(base) ((base) + (0x153))
#define SOC_SMART_CL_OUT1_ADDR(base) ((base) + (0x154))
#define SOC_SMART_CL_OUT2_ADDR(base) ((base) + (0x155))
#define SOC_SMART_CL_OUT3_ADDR(base) ((base) + (0x156))
#define SOC_SMART_CL_IN0_ADDR(base) ((base) + (0x157))
#define SOC_SMART_CL_IN1_ADDR(base) ((base) + (0x158))
#define SOC_SMART_CL_IN2_ADDR(base) ((base) + (0x159))
#define SOC_SMART_CL_IN3_ADDR(base) ((base) + (0x15A))
#define SOC_SMART_CHG_TIMER0_ADDR(base) ((base) + (0x15B))
#define SOC_SMART_CHG_TIMER1_ADDR(base) ((base) + (0x15C))
#define SOC_SMART_CHG_TIMER2_ADDR(base) ((base) + (0x15D))
#define SOC_SMART_CHG_TIMER3_ADDR(base) ((base) + (0x15E))
#define SOC_SMART_LOAD_TIMER0_ADDR(base) ((base) + (0x15F))
#define SOC_SMART_LOAD_TIMER1_ADDR(base) ((base) + (0x160))
#define SOC_SMART_LOAD_TIMER2_ADDR(base) ((base) + (0x161))
#define SOC_SMART_LOAD_TIMER3_ADDR(base) ((base) + (0x162))
#define SOC_SMART_CL_INT0_ADDR(base) ((base) + (0x163))
#define SOC_SMART_CL_INT1_ADDR(base) ((base) + (0x164))
#define SOC_SMART_CL_INT2_ADDR(base) ((base) + (0x165))
#define SOC_SMART_CL_INT3_ADDR(base) ((base) + (0x166))
#define SOC_SMART_V_INT0_ADDR(base) ((base) + (0x167))
#define SOC_SMART_V_INT1_ADDR(base) ((base) + (0x168))
#define SOC_SMART_OFFSET_CURRENT0_ADDR(base) ((base) + (0x169))
#define SOC_SMART_OFFSET_CURRENT1_ADDR(base) ((base) + (0x16A))
#define SOC_SMART_OFFSET_VOLTAGE0_ADDR(base) ((base) + (0x16B))
#define SOC_SMART_OFFSET_VOLTAGE1_ADDR(base) ((base) + (0x16C))
#define SOC_SMART_OCV_VOLTAGE0_ADDR(base) ((base) + (0x16D))
#define SOC_SMART_OCV_VOLTAGE1_ADDR(base) ((base) + (0x16E))
#define SOC_SMART_OCV_CURRENT0_ADDR(base) ((base) + (0x16F))
#define SOC_SMART_OCV_CURRENT1_ADDR(base) ((base) + (0x170))
#define SOC_SMART_ECO_OUT_CLIN_0_ADDR(base) ((base) + (0x171))
#define SOC_SMART_ECO_OUT_CLIN_1_ADDR(base) ((base) + (0x172))
#define SOC_SMART_ECO_OUT_CLIN_2_ADDR(base) ((base) + (0x173))
#define SOC_SMART_ECO_OUT_CLIN_3_ADDR(base) ((base) + (0x174))
#define SOC_SMART_ECO_OUT_CLOUT_0_ADDR(base) ((base) + (0x175))
#define SOC_SMART_ECO_OUT_CLOUT_1_ADDR(base) ((base) + (0x176))
#define SOC_SMART_ECO_OUT_CLOUT_2_ADDR(base) ((base) + (0x177))
#define SOC_SMART_ECO_OUT_CLOUT_3_ADDR(base) ((base) + (0x178))
#define SOC_SMART_V_OUT0_PRE0_ADDR(base) ((base) + (0x179))
#define SOC_SMART_V_OUT1_PRE0_ADDR(base) ((base) + (0x17A))
#define SOC_SMART_V_OUT0_PRE1_ADDR(base) ((base) + (0x17B))
#define SOC_SMART_V_OUT1_PRE1_ADDR(base) ((base) + (0x17C))
#define SOC_SMART_V_OUT0_PRE2_ADDR(base) ((base) + (0x17D))
#define SOC_SMART_V_OUT1_PRE2_ADDR(base) ((base) + (0x17E))
#define SOC_SMART_V_OUT0_PRE3_ADDR(base) ((base) + (0x17F))
#define SOC_SMART_V_OUT1_PRE3_ADDR(base) ((base) + (0x180))
#define SOC_SMART_V_OUT0_PRE4_ADDR(base) ((base) + (0x181))
#define SOC_SMART_V_OUT1_PRE4_ADDR(base) ((base) + (0x182))
#define SOC_SMART_V_OUT0_PRE5_ADDR(base) ((base) + (0x183))
#define SOC_SMART_V_OUT1_PRE5_ADDR(base) ((base) + (0x184))
#define SOC_SMART_V_OUT0_PRE6_ADDR(base) ((base) + (0x185))
#define SOC_SMART_V_OUT1_PRE6_ADDR(base) ((base) + (0x186))
#define SOC_SMART_V_OUT0_PRE7_ADDR(base) ((base) + (0x187))
#define SOC_SMART_V_OUT1_PRE7_ADDR(base) ((base) + (0x188))
#define SOC_SMART_V_OUT0_PRE8_ADDR(base) ((base) + (0x189))
#define SOC_SMART_V_OUT1_PRE8_ADDR(base) ((base) + (0x18A))
#define SOC_SMART_V_OUT0_PRE9_ADDR(base) ((base) + (0x18B))
#define SOC_SMART_V_OUT1_PRE9_ADDR(base) ((base) + (0x18C))
#define SOC_SMART_CURRENT0_PRE0_ADDR(base) ((base) + (0x18D))
#define SOC_SMART_CURRENT1_PRE0_ADDR(base) ((base) + (0x18E))
#define SOC_SMART_CURRENT0_PRE1_ADDR(base) ((base) + (0x18F))
#define SOC_SMART_CURRENT1_PRE1_ADDR(base) ((base) + (0x190))
#define SOC_SMART_CURRENT0_PRE2_ADDR(base) ((base) + (0x191))
#define SOC_SMART_CURRENT1_PRE2_ADDR(base) ((base) + (0x192))
#define SOC_SMART_CURRENT0_PRE3_ADDR(base) ((base) + (0x193))
#define SOC_SMART_CURRENT1_PRE3_ADDR(base) ((base) + (0x194))
#define SOC_SMART_CURRENT0_PRE4_ADDR(base) ((base) + (0x195))
#define SOC_SMART_CURRENT1_PRE4_ADDR(base) ((base) + (0x196))
#define SOC_SMART_CURRENT0_PRE5_ADDR(base) ((base) + (0x197))
#define SOC_SMART_CURRENT1_PRE5_ADDR(base) ((base) + (0x198))
#define SOC_SMART_CURRENT0_PRE6_ADDR(base) ((base) + (0x199))
#define SOC_SMART_CURRENT1_PRE6_ADDR(base) ((base) + (0x19A))
#define SOC_SMART_CURRENT0_PRE7_ADDR(base) ((base) + (0x19B))
#define SOC_SMART_CURRENT1_PRE7_ADDR(base) ((base) + (0x19C))
#define SOC_SMART_CURRENT0_PRE8_ADDR(base) ((base) + (0x19D))
#define SOC_SMART_CURRENT1_PRE8_ADDR(base) ((base) + (0x19E))
#define SOC_SMART_CURRENT0_PRE9_ADDR(base) ((base) + (0x19F))
#define SOC_SMART_CURRENT1_PRE9_ADDR(base) ((base) + (0x1A0))
#define SOC_SMART_OFFSET_CURRENT_MOD_0_ADDR(base) ((base) + (0x1A1))
#define SOC_SMART_OFFSET_CURRENT_MOD_1_ADDR(base) ((base) + (0x1A2))
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_ADDR(base) ((base) + (0x1A3))
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_ADDR(base) ((base) + (0x1A4))
#define SOC_SMART_CLJ_RESERVED1_ADDR(base) ((base) + (0x1A5))
#define SOC_SMART_CLJ_RESERVED2_ADDR(base) ((base) + (0x1A6))
#define SOC_SMART_CLJ_RESERVED3_ADDR(base) ((base) + (0x1A7))
#define SOC_SMART_CLJ_RESERVED4_ADDR(base) ((base) + (0x1A8))
#define SOC_SMART_CLJ_RESERVED5_ADDR(base) ((base) + (0x1A9))
#define SOC_SMART_CLJ_RESERVED6_ADDR(base) ((base) + (0x1AA))
#define SOC_SMART_CLJ_RESERVED7_ADDR(base) ((base) + (0x1AB))
#define SOC_SMART_PMU_SOFT_RST_ADDR(base) ((base) + (0x1AC))
#define SOC_SMART_CLJ_DEBUG_ADDR(base) ((base) + (0x1AD))
#define SOC_SMART_CLJ_DEBUG_2_ADDR(base) ((base) + (0x1AE))
#define SOC_SMART_STATE_TEST_ADDR(base) ((base) + (0x1AF))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char chip_id : 8;
    } reg;
} SOC_SMART_VERSION_UNION;
#endif
#define SOC_SMART_VERSION_chip_id_START (0)
#define SOC_SMART_VERSION_chip_id_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otmp_d1r : 1;
        unsigned char otmp150_d1r : 1;
        unsigned char vsys_uv_d3r : 1;
        unsigned char vsys_6p0_d200ur : 1;
        unsigned char pwron_d20r : 1;
        unsigned char vbat_vcoin_sel_ff2 : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_STATUS1_UNION;
#endif
#define SOC_SMART_STATUS1_otmp_d1r_START (0)
#define SOC_SMART_STATUS1_otmp_d1r_END (0)
#define SOC_SMART_STATUS1_otmp150_d1r_START (1)
#define SOC_SMART_STATUS1_otmp150_d1r_END (1)
#define SOC_SMART_STATUS1_vsys_uv_d3r_START (2)
#define SOC_SMART_STATUS1_vsys_uv_d3r_END (2)
#define SOC_SMART_STATUS1_vsys_6p0_d200ur_START (3)
#define SOC_SMART_STATUS1_vsys_6p0_d200ur_END (3)
#define SOC_SMART_STATUS1_pwron_d20r_START (4)
#define SOC_SMART_STATUS1_pwron_d20r_END (4)
#define SOC_SMART_STATUS1_vbat_vcoin_sel_ff2_START (5)
#define SOC_SMART_STATUS1_vbat_vcoin_sel_ff2_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vbus_det_3p6_d20r : 1;
        unsigned char dcxo_clk_sel : 1;
        unsigned char tcxo_clk_sel : 1;
        unsigned char xo_mode_a2d_ff2 : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_STATUS2_UNION;
#endif
#define SOC_SMART_STATUS2_vbus_det_3p6_d20r_START (0)
#define SOC_SMART_STATUS2_vbus_det_3p6_d20r_END (0)
#define SOC_SMART_STATUS2_dcxo_clk_sel_START (1)
#define SOC_SMART_STATUS2_dcxo_clk_sel_END (1)
#define SOC_SMART_STATUS2_tcxo_clk_sel_START (2)
#define SOC_SMART_STATUS2_tcxo_clk_sel_END (2)
#define SOC_SMART_STATUS2_xo_mode_a2d_ff2_START (3)
#define SOC_SMART_STATUS2_xo_mode_a2d_ff2_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otmp_d1r : 1;
        unsigned char vsys_2p5_r : 1;
        unsigned char vsys_uv_d3r : 1;
        unsigned char vsys_6p0_d200ur : 1;
        unsigned char pwron_d4sr : 1;
        unsigned char pwron_d20f : 1;
        unsigned char pwron_d20r : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_IRQ1_UNION;
#endif
#define SOC_SMART_IRQ1_otmp_d1r_START (0)
#define SOC_SMART_IRQ1_otmp_d1r_END (0)
#define SOC_SMART_IRQ1_vsys_2p5_r_START (1)
#define SOC_SMART_IRQ1_vsys_2p5_r_END (1)
#define SOC_SMART_IRQ1_vsys_uv_d3r_START (2)
#define SOC_SMART_IRQ1_vsys_uv_d3r_END (2)
#define SOC_SMART_IRQ1_vsys_6p0_d200ur_START (3)
#define SOC_SMART_IRQ1_vsys_6p0_d200ur_END (3)
#define SOC_SMART_IRQ1_pwron_d4sr_START (4)
#define SOC_SMART_IRQ1_pwron_d4sr_END (4)
#define SOC_SMART_IRQ1_pwron_d20f_START (5)
#define SOC_SMART_IRQ1_pwron_d20f_END (5)
#define SOC_SMART_IRQ1_pwron_d20r_START (6)
#define SOC_SMART_IRQ1_pwron_d20r_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vbus_det_3p6_d20f : 1;
        unsigned char vbus_det_3p6_d20r : 1;
        unsigned char ocp_scp_r : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_IRQ2_UNION;
#endif
#define SOC_SMART_IRQ2_vbus_det_3p6_d20f_START (0)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20f_END (0)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20r_START (1)
#define SOC_SMART_IRQ2_vbus_det_3p6_d20r_END (1)
#define SOC_SMART_IRQ2_ocp_scp_r_START (2)
#define SOC_SMART_IRQ2_ocp_scp_r_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char tcxo_clk_sel_r : 1;
        unsigned char tcxo_clk_sel_f : 1;
        unsigned char dcxo_clk_sel_r : 1;
        unsigned char dcxo_clk_sel_f : 1;
        unsigned char alarm_on : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_IRQ3_UNION;
#endif
#define SOC_SMART_IRQ3_tcxo_clk_sel_r_START (0)
#define SOC_SMART_IRQ3_tcxo_clk_sel_r_END (0)
#define SOC_SMART_IRQ3_tcxo_clk_sel_f_START (1)
#define SOC_SMART_IRQ3_tcxo_clk_sel_f_END (1)
#define SOC_SMART_IRQ3_dcxo_clk_sel_r_START (2)
#define SOC_SMART_IRQ3_dcxo_clk_sel_r_END (2)
#define SOC_SMART_IRQ3_dcxo_clk_sel_f_START (3)
#define SOC_SMART_IRQ3_dcxo_clk_sel_f_END (3)
#define SOC_SMART_IRQ3_alarm_on_START (4)
#define SOC_SMART_IRQ3_alarm_on_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int_i : 1;
        unsigned char cl_out_i : 1;
        unsigned char cl_in_i : 1;
        unsigned char vbat_int_i : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_COUL_IRQ_UNION;
#endif
#define SOC_SMART_COUL_IRQ_cl_int_i_START (0)
#define SOC_SMART_COUL_IRQ_cl_int_i_END (0)
#define SOC_SMART_COUL_IRQ_cl_out_i_START (1)
#define SOC_SMART_COUL_IRQ_cl_out_i_END (1)
#define SOC_SMART_COUL_IRQ_cl_in_i_START (2)
#define SOC_SMART_COUL_IRQ_cl_in_i_END (2)
#define SOC_SMART_COUL_IRQ_vbat_int_i_START (3)
#define SOC_SMART_COUL_IRQ_vbat_int_i_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otmp_d1r_mk : 1;
        unsigned char vsys_2p5_r_mk : 1;
        unsigned char vsys_uv_d3r_mk : 1;
        unsigned char vsys_6p0_d200ur_mk : 1;
        unsigned char pwron_d4sr_mk : 1;
        unsigned char pwron_d20f_mk : 1;
        unsigned char pwron_d20r_mk : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_IRQ1_MASK_UNION;
#endif
#define SOC_SMART_IRQ1_MASK_otmp_d1r_mk_START (0)
#define SOC_SMART_IRQ1_MASK_otmp_d1r_mk_END (0)
#define SOC_SMART_IRQ1_MASK_vsys_2p5_r_mk_START (1)
#define SOC_SMART_IRQ1_MASK_vsys_2p5_r_mk_END (1)
#define SOC_SMART_IRQ1_MASK_vsys_uv_d3r_mk_START (2)
#define SOC_SMART_IRQ1_MASK_vsys_uv_d3r_mk_END (2)
#define SOC_SMART_IRQ1_MASK_vsys_6p0_d200ur_mk_START (3)
#define SOC_SMART_IRQ1_MASK_vsys_6p0_d200ur_mk_END (3)
#define SOC_SMART_IRQ1_MASK_pwron_d4sr_mk_START (4)
#define SOC_SMART_IRQ1_MASK_pwron_d4sr_mk_END (4)
#define SOC_SMART_IRQ1_MASK_pwron_d20f_mk_START (5)
#define SOC_SMART_IRQ1_MASK_pwron_d20f_mk_END (5)
#define SOC_SMART_IRQ1_MASK_pwron_d20r_mk_START (6)
#define SOC_SMART_IRQ1_MASK_pwron_d20r_mk_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vbus_det_3p6_d20f_mk : 1;
        unsigned char vbus_det_3p6_d20r_mk : 1;
        unsigned char ocp_scp_r_mk : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_IRQ2_MASK_UNION;
#endif
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20f_mk_START (0)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20f_mk_END (0)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20r_mk_START (1)
#define SOC_SMART_IRQ2_MASK_vbus_det_3p6_d20r_mk_END (1)
#define SOC_SMART_IRQ2_MASK_ocp_scp_r_mk_START (2)
#define SOC_SMART_IRQ2_MASK_ocp_scp_r_mk_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char tcxo_clk_sel_r_mk : 1;
        unsigned char tcxo_clk_sel_f_mk : 1;
        unsigned char dcxo_clk_sel_r_mk : 1;
        unsigned char dcxo_clk_sel_f_mk : 1;
        unsigned char alarm_on_mk : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_IRQ3_MASK_UNION;
#endif
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_r_mk_START (0)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_r_mk_END (0)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_f_mk_START (1)
#define SOC_SMART_IRQ3_MASK_tcxo_clk_sel_f_mk_END (1)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_r_mk_START (2)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_r_mk_END (2)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_f_mk_START (3)
#define SOC_SMART_IRQ3_MASK_dcxo_clk_sel_f_mk_END (3)
#define SOC_SMART_IRQ3_MASK_alarm_on_mk_START (4)
#define SOC_SMART_IRQ3_MASK_alarm_on_mk_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int_i_mk : 1;
        unsigned char cl_out_i_mk : 1;
        unsigned char cl_in_i_mk : 1;
        unsigned char vbat_int_i_mk : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_COUL_IRQ_MASK_UNION;
#endif
#define SOC_SMART_COUL_IRQ_MASK_cl_int_i_mk_START (0)
#define SOC_SMART_COUL_IRQ_MASK_cl_int_i_mk_END (0)
#define SOC_SMART_COUL_IRQ_MASK_cl_out_i_mk_START (1)
#define SOC_SMART_COUL_IRQ_MASK_cl_out_i_mk_END (1)
#define SOC_SMART_COUL_IRQ_MASK_cl_in_i_mk_START (2)
#define SOC_SMART_COUL_IRQ_MASK_cl_in_i_mk_END (2)
#define SOC_SMART_COUL_IRQ_MASK_vbat_int_i_mk_START (3)
#define SOC_SMART_COUL_IRQ_MASK_vbat_int_i_mk_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char scp_buck01 : 1;
        unsigned char scp_buck2 : 1;
        unsigned char scp_buck3 : 1;
        unsigned char scp_buck4 : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_SCP_BUCK_RECORD1_UNION;
#endif
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck01_START (0)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck01_END (0)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck2_START (1)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck2_END (1)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck3_START (2)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck3_END (2)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck4_START (3)
#define SOC_SMART_SCP_BUCK_RECORD1_scp_buck4_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_buck1 : 1;
        unsigned char ocp_buck2 : 1;
        unsigned char ocp_buck3 : 1;
        unsigned char ocp_buck4 : 1;
        unsigned char ocp_buck0 : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_OCP_BUCK_RECORD1_UNION;
#endif
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck1_START (0)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck1_END (0)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck2_START (1)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck2_END (1)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck3_START (2)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck3_END (2)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck4_START (3)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck4_END (3)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck0_START (4)
#define SOC_SMART_OCP_BUCK_RECORD1_ocp_buck0_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo1 : 1;
        unsigned char ocp_ldo2 : 1;
        unsigned char ocp_ldo3 : 1;
        unsigned char ocp_ldo4 : 1;
        unsigned char ocp_ldo5 : 1;
        unsigned char ocp_ldo6 : 1;
        unsigned char ocp_ldo7 : 1;
        unsigned char ocp_ldo8 : 1;
    } reg;
} SOC_SMART_OCP_LDO1_8_RECORD2_UNION;
#endif
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo1_START (0)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo1_END (0)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo2_START (1)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo2_END (1)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo3_START (2)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo3_END (2)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo4_START (3)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo4_END (3)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo5_START (4)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo5_END (4)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo6_START (5)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo6_END (5)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo7_START (6)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo7_END (6)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo8_START (7)
#define SOC_SMART_OCP_LDO1_8_RECORD2_ocp_ldo8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo9 : 1;
        unsigned char ocp_ldo10 : 1;
        unsigned char ocp_ldo11 : 1;
        unsigned char ocp_ldo12 : 1;
        unsigned char ocp_ldo13 : 1;
        unsigned char ocp_ldo14 : 1;
        unsigned char ocp_ldo15 : 1;
        unsigned char ocp_ldo16 : 1;
    } reg;
} SOC_SMART_OCP_LDO16_9_RECORD3_UNION;
#endif
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo9_START (0)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo9_END (0)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo10_START (1)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo10_END (1)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo11_START (2)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo11_END (2)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo12_START (3)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo12_END (3)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo13_START (4)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo13_END (4)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo14_START (5)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo14_END (5)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo15_START (6)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo15_END (6)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo16_START (7)
#define SOC_SMART_OCP_LDO16_9_RECORD3_ocp_ldo16_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo17 : 1;
        unsigned char ocp_ldo18 : 1;
        unsigned char ocp_ldo19 : 1;
        unsigned char ocp_ldo20 : 1;
        unsigned char ocp_ldo21 : 1;
        unsigned char ocp_ldo22 : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_OCP_LDO22_17_RECORD4_UNION;
#endif
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo17_START (0)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo17_END (0)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo18_START (1)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo18_END (1)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo19_START (2)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo19_END (2)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo20_START (3)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo20_END (3)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo21_START (4)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo21_END (4)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo22_START (5)
#define SOC_SMART_OCP_LDO22_17_RECORD4_ocp_ldo22_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_lvs2 : 1;
        unsigned char ocp_classd : 1;
        unsigned char scp_pmua : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_OCP_CLASSD_LVS2_RECORD5_UNION;
#endif
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_lvs2_START (0)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_lvs2_END (0)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_classd_START (1)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_ocp_classd_END (1)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_scp_pmua_START (2)
#define SOC_SMART_OCP_CLASSD_LVS2_RECORD5_scp_pmua_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_classd_ocp_deb : 1;
        unsigned char ocp_buck_deb_sel : 2;
        unsigned char en_buck_ocp_deb : 1;
        unsigned char scp_buck_deb_sel : 2;
        unsigned char en_buck_scp_deb : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_OCP_DEB0_UNION;
#endif
#define SOC_SMART_OCP_DEB0_en_classd_ocp_deb_START (0)
#define SOC_SMART_OCP_DEB0_en_classd_ocp_deb_END (0)
#define SOC_SMART_OCP_DEB0_ocp_buck_deb_sel_START (1)
#define SOC_SMART_OCP_DEB0_ocp_buck_deb_sel_END (2)
#define SOC_SMART_OCP_DEB0_en_buck_ocp_deb_START (3)
#define SOC_SMART_OCP_DEB0_en_buck_ocp_deb_END (3)
#define SOC_SMART_OCP_DEB0_scp_buck_deb_sel_START (4)
#define SOC_SMART_OCP_DEB0_scp_buck_deb_sel_END (5)
#define SOC_SMART_OCP_DEB0_en_buck_scp_deb_START (6)
#define SOC_SMART_OCP_DEB0_en_buck_scp_deb_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ldo_deb_sel : 2;
        unsigned char en_ldo_ocp_deb : 1;
        unsigned char ocp_lvs_deb_sel : 2;
        unsigned char en_lvs_ocp_deb : 1;
        unsigned char ocp_classd_deb_sel : 2;
    } reg;
} SOC_SMART_OCP_DEB1_UNION;
#endif
#define SOC_SMART_OCP_DEB1_ocp_ldo_deb_sel_START (0)
#define SOC_SMART_OCP_DEB1_ocp_ldo_deb_sel_END (1)
#define SOC_SMART_OCP_DEB1_en_ldo_ocp_deb_START (2)
#define SOC_SMART_OCP_DEB1_en_ldo_ocp_deb_END (2)
#define SOC_SMART_OCP_DEB1_ocp_lvs_deb_sel_START (3)
#define SOC_SMART_OCP_DEB1_ocp_lvs_deb_sel_END (4)
#define SOC_SMART_OCP_DEB1_en_lvs_ocp_deb_START (5)
#define SOC_SMART_OCP_DEB1_en_lvs_ocp_deb_END (5)
#define SOC_SMART_OCP_DEB1_ocp_classd_deb_sel_START (6)
#define SOC_SMART_OCP_DEB1_ocp_classd_deb_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vbus_det_3p6_ctrl : 1;
        unsigned char vsys_2p5_ctrl : 1;
        unsigned char vsys_uv_ctrl : 1;
        unsigned char vsys_6p0_ctrl : 1;
        unsigned char otmp150_ctrl : 1;
        unsigned char en_32kc : 1;
        unsigned char en_32kb : 1;
        unsigned char en_32ka : 1;
    } reg;
} SOC_SMART_ONOFF8_UNION;
#endif
#define SOC_SMART_ONOFF8_vbus_det_3p6_ctrl_START (0)
#define SOC_SMART_ONOFF8_vbus_det_3p6_ctrl_END (0)
#define SOC_SMART_ONOFF8_vsys_2p5_ctrl_START (1)
#define SOC_SMART_ONOFF8_vsys_2p5_ctrl_END (1)
#define SOC_SMART_ONOFF8_vsys_uv_ctrl_START (2)
#define SOC_SMART_ONOFF8_vsys_uv_ctrl_END (2)
#define SOC_SMART_ONOFF8_vsys_6p0_ctrl_START (3)
#define SOC_SMART_ONOFF8_vsys_6p0_ctrl_END (3)
#define SOC_SMART_ONOFF8_otmp150_ctrl_START (4)
#define SOC_SMART_ONOFF8_otmp150_ctrl_END (4)
#define SOC_SMART_ONOFF8_en_32kc_START (5)
#define SOC_SMART_ONOFF8_en_32kc_END (5)
#define SOC_SMART_ONOFF8_en_32kb_START (6)
#define SOC_SMART_ONOFF8_en_32kb_END (6)
#define SOC_SMART_ONOFF8_en_32ka_START (7)
#define SOC_SMART_ONOFF8_en_32ka_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_scp_ctrl_buck01 : 1;
        unsigned char ocp_scp_off_buck01 : 1;
        unsigned char ocp_scp_ctrl_buck2 : 1;
        unsigned char ocp_scp_off_buck2 : 1;
        unsigned char ocp_scp_ctrl_buck3 : 1;
        unsigned char ocp_scp_off_buck3 : 1;
        unsigned char ocp_scp_ctrl_buck4 : 1;
        unsigned char ocp_scp_off_buck4 : 1;
    } reg;
} SOC_SMART_OCP_SCP_MOD_CTRL1_UNION;
#endif
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck01_START (0)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck01_END (0)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck01_START (1)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck01_END (1)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck2_START (2)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck2_END (2)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck2_START (3)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck2_END (3)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck3_START (4)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck3_END (4)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck3_START (5)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck3_END (5)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck4_START (6)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_ctrl_buck4_END (6)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck4_START (7)
#define SOC_SMART_OCP_SCP_MOD_CTRL1_ocp_scp_off_buck4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo1 : 1;
        unsigned char ocp_off_ldo1 : 1;
        unsigned char ocp_ctrl_ldo2 : 1;
        unsigned char ocp_off_ldo2 : 1;
        unsigned char ocp_ctrl_ldo3 : 1;
        unsigned char ocp_off_ldo3 : 1;
        unsigned char ocp_ctrl_ldo4 : 1;
        unsigned char ocp_off_ldo4 : 1;
    } reg;
} SOC_SMART_OCP_MOD_CTRL3_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo1_START (0)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo1_END (0)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo1_START (1)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo1_END (1)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo2_START (2)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo2_END (2)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo2_START (3)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo2_END (3)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo3_START (4)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo3_END (4)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo3_START (5)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo3_END (5)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo4_START (6)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_ctrl_ldo4_END (6)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo4_START (7)
#define SOC_SMART_OCP_MOD_CTRL3_ocp_off_ldo4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo5 : 1;
        unsigned char ocp_off_ldo5 : 1;
        unsigned char ocp_ctrl_ldo6 : 1;
        unsigned char ocp_off_ldo6 : 1;
        unsigned char ocp_ctrl_ldo7 : 1;
        unsigned char ocp_off_ldo7 : 1;
        unsigned char ocp_ctrl_ldo8 : 1;
        unsigned char ocp_off_ldo8 : 1;
    } reg;
} SOC_SMART_OCP_MOD_CTRL4_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo5_START (0)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo5_END (0)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo5_START (1)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo5_END (1)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo6_START (2)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo6_END (2)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo6_START (3)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo6_END (3)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo7_START (4)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo7_END (4)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo7_START (5)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo7_END (5)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo8_START (6)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_ctrl_ldo8_END (6)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo8_START (7)
#define SOC_SMART_OCP_MOD_CTRL4_ocp_off_ldo8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo9 : 1;
        unsigned char ocp_off_ldo9 : 1;
        unsigned char ocp_ctrl_ldo10 : 1;
        unsigned char ocp_off_ldo10 : 1;
        unsigned char ocp_ctrl_ldo11 : 1;
        unsigned char ocp_off_ldo11 : 1;
        unsigned char ocp_ctrl_ldo12 : 1;
        unsigned char ocp_off_ldo12 : 1;
    } reg;
} SOC_SMART_OCP_MOD_CTRL5_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo9_START (0)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo9_END (0)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo9_START (1)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo9_END (1)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo10_START (2)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo10_END (2)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo10_START (3)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo10_END (3)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo11_START (4)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo11_END (4)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo11_START (5)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo11_END (5)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo12_START (6)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_ctrl_ldo12_END (6)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo12_START (7)
#define SOC_SMART_OCP_MOD_CTRL5_ocp_off_ldo12_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo13 : 1;
        unsigned char ocp_off_ldo13 : 1;
        unsigned char ocp_ctrl_ldo14 : 1;
        unsigned char ocp_off_ldo14 : 1;
        unsigned char ocp_ctrl_ldo15 : 1;
        unsigned char ocp_off_ldo15 : 1;
        unsigned char ocp_ctrl_ldo16 : 1;
        unsigned char ocp_off_ldo16 : 1;
    } reg;
} SOC_SMART_OCP_MOD_CTRL6_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo13_START (0)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo13_END (0)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo13_START (1)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo13_END (1)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo14_START (2)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo14_END (2)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo14_START (3)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo14_END (3)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo15_START (4)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo15_END (4)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo15_START (5)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo15_END (5)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo16_START (6)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_ctrl_ldo16_END (6)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo16_START (7)
#define SOC_SMART_OCP_MOD_CTRL6_ocp_off_ldo16_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo17 : 1;
        unsigned char ocp_off_ldo17 : 1;
        unsigned char ocp_ctrl_ldo18 : 1;
        unsigned char ocp_off_ldo18 : 1;
        unsigned char ocp_ctrl_ldo19 : 1;
        unsigned char ocp_off_ldo19 : 1;
        unsigned char ocp_ctrl_ldo20 : 1;
        unsigned char ocp_off_ldo20 : 1;
    } reg;
} SOC_SMART_OCP_MOD_CTRL7_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo17_START (0)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo17_END (0)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo17_START (1)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo17_END (1)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo18_START (2)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo18_END (2)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo18_START (3)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo18_END (3)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo19_START (4)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo19_END (4)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo19_START (5)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo19_END (5)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo20_START (6)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_ctrl_ldo20_END (6)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo20_START (7)
#define SOC_SMART_OCP_MOD_CTRL7_ocp_off_ldo20_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_ldo21 : 1;
        unsigned char ocp_off_ldo21 : 1;
        unsigned char ocp_ctrl_ldo22 : 1;
        unsigned char ocp_off_ldo22 : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_OCP_MOD_CTRL8_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo21_START (0)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo21_END (0)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo21_START (1)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo21_END (1)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo22_START (2)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_ctrl_ldo22_END (2)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo22_START (3)
#define SOC_SMART_OCP_MOD_CTRL8_ocp_off_ldo22_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_lvs2 : 1;
        unsigned char ocp_off_lvs2 : 1;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_OCP_MOD_CTRL9_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL9_ocp_ctrl_lvs2_START (0)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_ctrl_lvs2_END (0)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_off_lvs2_START (1)
#define SOC_SMART_OCP_MOD_CTRL9_ocp_off_lvs2_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ocp_ctrl_classd : 1;
        unsigned char ocp_off_classd : 1;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_OCP_MOD_CTRL11_UNION;
#endif
#define SOC_SMART_OCP_MOD_CTRL11_ocp_ctrl_classd_START (0)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_ctrl_classd_END (0)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_off_classd_START (1)
#define SOC_SMART_OCP_MOD_CTRL11_ocp_off_classd_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_buck01_int : 1;
        unsigned char en_buck2_int : 1;
        unsigned char en_buck3_int : 1;
        unsigned char en_buck4_int : 1;
        unsigned char en_extbuck_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ENABLE1_BUCK_UNION;
#endif
#define SOC_SMART_ENABLE1_BUCK_en_buck01_int_START (0)
#define SOC_SMART_ENABLE1_BUCK_en_buck01_int_END (0)
#define SOC_SMART_ENABLE1_BUCK_en_buck2_int_START (1)
#define SOC_SMART_ENABLE1_BUCK_en_buck2_int_END (1)
#define SOC_SMART_ENABLE1_BUCK_en_buck3_int_START (2)
#define SOC_SMART_ENABLE1_BUCK_en_buck3_int_END (2)
#define SOC_SMART_ENABLE1_BUCK_en_buck4_int_START (3)
#define SOC_SMART_ENABLE1_BUCK_en_buck4_int_END (3)
#define SOC_SMART_ENABLE1_BUCK_en_extbuck_int_START (4)
#define SOC_SMART_ENABLE1_BUCK_en_extbuck_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_buck01_int : 1;
        unsigned char dis_buck2_int : 1;
        unsigned char dis_buck3_int : 1;
        unsigned char dis_buck4_int : 1;
        unsigned char dis_extbuck_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_DISABLE1_BUCK_UNION;
#endif
#define SOC_SMART_DISABLE1_BUCK_dis_buck01_int_START (0)
#define SOC_SMART_DISABLE1_BUCK_dis_buck01_int_END (0)
#define SOC_SMART_DISABLE1_BUCK_dis_buck2_int_START (1)
#define SOC_SMART_DISABLE1_BUCK_dis_buck2_int_END (1)
#define SOC_SMART_DISABLE1_BUCK_dis_buck3_int_START (2)
#define SOC_SMART_DISABLE1_BUCK_dis_buck3_int_END (2)
#define SOC_SMART_DISABLE1_BUCK_dis_buck4_int_START (3)
#define SOC_SMART_DISABLE1_BUCK_dis_buck4_int_END (3)
#define SOC_SMART_DISABLE1_BUCK_dis_extbuck_int_START (4)
#define SOC_SMART_DISABLE1_BUCK_dis_extbuck_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_buck01_int : 1;
        unsigned char st_buck2_int : 1;
        unsigned char st_buck3_int : 1;
        unsigned char st_buck4_int : 1;
        unsigned char st_extbuck_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ONOFF_STATUS1_BUCK_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck01_int_START (0)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck01_int_END (0)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck2_int_START (1)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck2_int_END (1)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck3_int_START (2)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck3_int_END (2)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck4_int_START (3)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_buck4_int_END (3)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_extbuck_int_START (4)
#define SOC_SMART_ONOFF_STATUS1_BUCK_st_extbuck_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_ldo1_int : 1;
        unsigned char en_ldo2_int : 1;
        unsigned char en_ldo3_buck_int : 1;
        unsigned char en_ldo4_int : 1;
        unsigned char en_ldo5_int : 1;
        unsigned char en_ldo6_int : 1;
        unsigned char en_ldo7_int : 1;
        unsigned char en_ldo8_int : 1;
    } reg;
} SOC_SMART_ENABLE2_LDO1_8_UNION;
#endif
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo1_int_START (0)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo1_int_END (0)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo2_int_START (1)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo2_int_END (1)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo3_buck_int_START (2)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo3_buck_int_END (2)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo4_int_START (3)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo4_int_END (3)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo5_int_START (4)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo5_int_END (4)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo6_int_START (5)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo6_int_END (5)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo7_int_START (6)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo7_int_END (6)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo8_int_START (7)
#define SOC_SMART_ENABLE2_LDO1_8_en_ldo8_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_ldo1_int : 1;
        unsigned char dis_ldo2_int : 1;
        unsigned char dis_ldo3_buck_int : 1;
        unsigned char dis_ldo4_int : 1;
        unsigned char dis_ldo5_int : 1;
        unsigned char dis_ldo6_int : 1;
        unsigned char dis_ldo7_int : 1;
        unsigned char dis_ldo8_int : 1;
    } reg;
} SOC_SMART_DISABLE2_LDO1_8_UNION;
#endif
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo1_int_START (0)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo1_int_END (0)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo2_int_START (1)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo2_int_END (1)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo3_buck_int_START (2)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo3_buck_int_END (2)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo4_int_START (3)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo4_int_END (3)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo5_int_START (4)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo5_int_END (4)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo6_int_START (5)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo6_int_END (5)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo7_int_START (6)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo7_int_END (6)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo8_int_START (7)
#define SOC_SMART_DISABLE2_LDO1_8_dis_ldo8_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_ldo1_int : 1;
        unsigned char st_ldo2_int : 1;
        unsigned char st_ldo3_buck_int : 1;
        unsigned char st_ldo4_int : 1;
        unsigned char st_ldo5_int : 1;
        unsigned char st_ldo6_int : 1;
        unsigned char st_ldo7_int : 1;
        unsigned char st_ldo8_int : 1;
    } reg;
} SOC_SMART_ONOFF_STATUS2_LDO1_8_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo1_int_START (0)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo1_int_END (0)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo2_int_START (1)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo2_int_END (1)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo3_buck_int_START (2)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo3_buck_int_END (2)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo4_int_START (3)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo4_int_END (3)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo5_int_START (4)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo5_int_END (4)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo6_int_START (5)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo6_int_END (5)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo7_int_START (6)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo7_int_END (6)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo8_int_START (7)
#define SOC_SMART_ONOFF_STATUS2_LDO1_8_st_ldo8_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_ldo9_int : 1;
        unsigned char en_ldo10_int : 1;
        unsigned char en_ldo11_int : 1;
        unsigned char en_ldo12_int : 1;
        unsigned char en_ldo13_int : 1;
        unsigned char en_ldo14_int : 1;
        unsigned char en_ldo15_int : 1;
        unsigned char en_ldo16_int : 1;
    } reg;
} SOC_SMART_ENABLE3_LDO9_16_UNION;
#endif
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo9_int_START (0)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo9_int_END (0)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo10_int_START (1)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo10_int_END (1)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo11_int_START (2)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo11_int_END (2)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo12_int_START (3)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo12_int_END (3)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo13_int_START (4)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo13_int_END (4)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo14_int_START (5)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo14_int_END (5)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo15_int_START (6)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo15_int_END (6)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo16_int_START (7)
#define SOC_SMART_ENABLE3_LDO9_16_en_ldo16_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_ldo9_int : 1;
        unsigned char dis_ldo10_int : 1;
        unsigned char dis_ldo11_int : 1;
        unsigned char dis_ldo12_int : 1;
        unsigned char dis_ldo13_int : 1;
        unsigned char dis_ldo14_int : 1;
        unsigned char dis_ldo15_int : 1;
        unsigned char dis_ldo16_int : 1;
    } reg;
} SOC_SMART_DISABLE3_LDO9_16_UNION;
#endif
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo9_int_START (0)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo9_int_END (0)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo10_int_START (1)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo10_int_END (1)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo11_int_START (2)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo11_int_END (2)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo12_int_START (3)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo12_int_END (3)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo13_int_START (4)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo13_int_END (4)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo14_int_START (5)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo14_int_END (5)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo15_int_START (6)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo15_int_END (6)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo16_int_START (7)
#define SOC_SMART_DISABLE3_LDO9_16_dis_ldo16_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_ldo9_int : 1;
        unsigned char st_ldo10_int : 1;
        unsigned char st_ldo11_int : 1;
        unsigned char st_ldo12_int : 1;
        unsigned char st_ldo13_int : 1;
        unsigned char st_ldo14_int : 1;
        unsigned char st_ldo15_int : 1;
        unsigned char st_ldo16_int : 1;
    } reg;
} SOC_SMART_ONOFF_STATUS3_LDO9_16_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo9_int_START (0)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo9_int_END (0)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo10_int_START (1)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo10_int_END (1)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo11_int_START (2)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo11_int_END (2)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo12_int_START (3)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo12_int_END (3)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo13_int_START (4)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo13_int_END (4)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo14_int_START (5)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo14_int_END (5)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo15_int_START (6)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo15_int_END (6)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo16_int_START (7)
#define SOC_SMART_ONOFF_STATUS3_LDO9_16_st_ldo16_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_ldo17_int : 1;
        unsigned char en_ldo18_int : 1;
        unsigned char en_ldo19_int : 1;
        unsigned char en_ldo20_int : 1;
        unsigned char en_ldo21_int : 1;
        unsigned char en_ldo22_int : 1;
        unsigned char en_ldo3_batt_int : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_ENABLE4_LDO17_22_UNION;
#endif
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo17_int_START (0)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo17_int_END (0)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo18_int_START (1)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo18_int_END (1)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo19_int_START (2)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo19_int_END (2)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo20_int_START (3)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo20_int_END (3)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo21_int_START (4)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo21_int_END (4)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo22_int_START (5)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo22_int_END (5)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo3_batt_int_START (6)
#define SOC_SMART_ENABLE4_LDO17_22_en_ldo3_batt_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_ldo17_int : 1;
        unsigned char dis_ldo18_int : 1;
        unsigned char dis_ldo19_int : 1;
        unsigned char dis_ldo20_int : 1;
        unsigned char dis_ldo21_int : 1;
        unsigned char dis_ldo22_int : 1;
        unsigned char dis_ldo3_batt_int : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_DISABLE4_LDO17_22_UNION;
#endif
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo17_int_START (0)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo17_int_END (0)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo18_int_START (1)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo18_int_END (1)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo19_int_START (2)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo19_int_END (2)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo20_int_START (3)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo20_int_END (3)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo21_int_START (4)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo21_int_END (4)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo22_int_START (5)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo22_int_END (5)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo3_batt_int_START (6)
#define SOC_SMART_DISABLE4_LDO17_22_dis_ldo3_batt_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_ldo17_int : 1;
        unsigned char st_ldo18_int : 1;
        unsigned char st_ldo19_int : 1;
        unsigned char st_ldo20_int : 1;
        unsigned char st_ldo21_int : 1;
        unsigned char st_ldo22_int : 1;
        unsigned char st_ldo3_batt_int : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_ONOFF_STATUS4_LDO17_22_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo17_int_START (0)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo17_int_END (0)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo18_int_START (1)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo18_int_END (1)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo19_int_START (2)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo19_int_END (2)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo20_int_START (3)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo20_int_END (3)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo21_int_START (4)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo21_int_END (4)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo22_int_START (5)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo22_int_END (5)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo3_batt_int_START (6)
#define SOC_SMART_ONOFF_STATUS4_LDO17_22_st_ldo3_batt_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_lvs2_int : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_ENABLE5_LVS2_UNION;
#endif
#define SOC_SMART_ENABLE5_LVS2_en_lvs2_int_START (0)
#define SOC_SMART_ENABLE5_LVS2_en_lvs2_int_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_lvs2_int : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_DISABLE5_LVS2_UNION;
#endif
#define SOC_SMART_DISABLE5_LVS2_dis_lvs2_int_START (0)
#define SOC_SMART_DISABLE5_LVS2_dis_lvs2_int_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_lvs2_int : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_ONOFF_STATUS5_LVS2_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS5_LVS2_st_lvs2_int_START (0)
#define SOC_SMART_ONOFF_STATUS5_LVS2_st_lvs2_int_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_xo_clk0_int : 1;
        unsigned char en_xo_clk1_int : 1;
        unsigned char en_xo_clk2_int : 1;
        unsigned char en_xo_clk3_int : 1;
        unsigned char en_xo_clk4_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ENABLE6_XO_CLK_UNION;
#endif
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk0_int_START (0)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk0_int_END (0)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk1_int_START (1)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk1_int_END (1)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk2_int_START (2)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk2_int_END (2)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk3_int_START (3)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk3_int_END (3)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk4_int_START (4)
#define SOC_SMART_ENABLE6_XO_CLK_en_xo_clk4_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dis_xo_clk0_int : 1;
        unsigned char dis_xo_clk1_int : 1;
        unsigned char dis_xo_clk2_int : 1;
        unsigned char dis_xo_clk3_int : 1;
        unsigned char dis_xo_clk4_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_DISABLE6_XO_CLK_UNION;
#endif
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk0_int_START (0)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk0_int_END (0)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk1_int_START (1)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk1_int_END (1)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk2_int_START (2)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk2_int_END (2)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk3_int_START (3)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk3_int_END (3)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk4_int_START (4)
#define SOC_SMART_DISABLE6_XO_CLK_dis_xo_clk4_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char st_xo_clk0_int : 1;
        unsigned char st_xo_clk1_int : 1;
        unsigned char st_xo_clk2_int : 1;
        unsigned char st_xo_clk3_int : 1;
        unsigned char st_xo_clk4_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ONOFF_STATUS6_XO_CLK_UNION;
#endif
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk0_int_START (0)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk0_int_END (0)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk1_int_START (1)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk1_int_END (1)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk2_int_START (2)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk2_int_END (2)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk3_int_START (3)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk3_int_END (3)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk4_int_START (4)
#define SOC_SMART_ONOFF_STATUS6_XO_CLK_st_xo_clk4_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_eco_buck2_int : 1;
        unsigned char en_eco_buck3_int : 1;
        unsigned char en_eco_buck4_int : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_ECO_MOD_CFG1_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck2_int_START (0)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck2_int_END (0)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck3_int_START (1)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck3_int_END (1)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck4_int_START (2)
#define SOC_SMART_ECO_MOD_CFG1_en_eco_buck4_int_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_eco_ldo1_int : 1;
        unsigned char en_eco_ldo3_int : 1;
        unsigned char en_eco_ldo4_int : 1;
        unsigned char en_eco_ldo5_int : 1;
        unsigned char en_eco_ldo6_int : 1;
        unsigned char en_eco_ldo7_int : 1;
        unsigned char en_eco_ldo8_int : 1;
        unsigned char en_eco_ldo9_int : 1;
    } reg;
} SOC_SMART_ECO_MOD_CFG2_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo1_int_START (0)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo1_int_END (0)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo3_int_START (1)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo3_int_END (1)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo4_int_START (2)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo4_int_END (2)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo5_int_START (3)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo5_int_END (3)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo6_int_START (4)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo6_int_END (4)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo7_int_START (5)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo7_int_END (5)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo8_int_START (6)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo8_int_END (6)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo9_int_START (7)
#define SOC_SMART_ECO_MOD_CFG2_en_eco_ldo9_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_eco_ldo10_int : 1;
        unsigned char en_eco_ldo11_int : 1;
        unsigned char en_eco_ldo12_int : 1;
        unsigned char en_eco_ldo13_int : 1;
        unsigned char en_eco_ldo15_int : 1;
        unsigned char en_eco_ldo16_int : 1;
        unsigned char en_eco_ldo18_int : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_ECO_MOD_CFG3_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo10_int_START (0)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo10_int_END (0)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo11_int_START (1)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo11_int_END (1)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo12_int_START (2)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo12_int_END (2)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo13_int_START (3)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo13_int_END (3)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo15_int_START (4)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo15_int_END (4)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo16_int_START (5)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo16_int_END (5)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo18_int_START (6)
#define SOC_SMART_ECO_MOD_CFG3_en_eco_ldo18_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_eco_ldo19_int : 1;
        unsigned char en_eco_ldo21_int : 1;
        unsigned char en_eco_pmua_int : 1;
        unsigned char en_eco_ldo20_int : 1;
        unsigned char en_eco_ldobuck_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ECO_MOD_CFG4_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo19_int_START (0)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo19_int_END (0)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo21_int_START (1)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo21_int_END (1)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_pmua_int_START (2)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_pmua_int_END (2)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo20_int_START (3)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldo20_int_END (3)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldobuck_int_START (4)
#define SOC_SMART_ECO_MOD_CFG4_en_eco_ldobuck_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char force_eco_buck2_int : 1;
        unsigned char force_eco_buck3_int : 1;
        unsigned char force_eco_buck4_int : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_ECO_MOD_CFG5_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck2_int_START (0)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck2_int_END (0)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck3_int_START (1)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck3_int_END (1)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck4_int_START (2)
#define SOC_SMART_ECO_MOD_CFG5_force_eco_buck4_int_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char force_eco_ldo1_int : 1;
        unsigned char force_eco_ldo3_int : 1;
        unsigned char force_eco_ldo4_int : 1;
        unsigned char force_eco_ldo5_int : 1;
        unsigned char force_eco_ldo6_int : 1;
        unsigned char force_eco_ldo7_int : 1;
        unsigned char force_eco_ldo8_int : 1;
        unsigned char force_eco_ldo9_int : 1;
    } reg;
} SOC_SMART_ECO_MOD_CFG6_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo1_int_START (0)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo1_int_END (0)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo3_int_START (1)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo3_int_END (1)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo4_int_START (2)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo4_int_END (2)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo5_int_START (3)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo5_int_END (3)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo6_int_START (4)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo6_int_END (4)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo7_int_START (5)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo7_int_END (5)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo8_int_START (6)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo8_int_END (6)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo9_int_START (7)
#define SOC_SMART_ECO_MOD_CFG6_force_eco_ldo9_int_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char force_eco_ldo10_int : 1;
        unsigned char force_eco_ldo11_int : 1;
        unsigned char force_eco_ldo12_int : 1;
        unsigned char force_eco_ldo13_int : 1;
        unsigned char force_eco_ldo15_int : 1;
        unsigned char force_eco_ldo16_int : 1;
        unsigned char force_eco_ldo18_int : 1;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_ECO_MOD_CFG7_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo10_int_START (0)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo10_int_END (0)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo11_int_START (1)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo11_int_END (1)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo12_int_START (2)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo12_int_END (2)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo13_int_START (3)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo13_int_END (3)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo15_int_START (4)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo15_int_END (4)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo16_int_START (5)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo16_int_END (5)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo18_int_START (6)
#define SOC_SMART_ECO_MOD_CFG7_force_eco_ldo18_int_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char force_eco_ldo19_int : 1;
        unsigned char force_eco_ldo21_int : 1;
        unsigned char force_eco_pmua_int : 1;
        unsigned char force_eco_ldo20_int : 1;
        unsigned char force_eco_ldobuck_int : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_ECO_MOD_CFG8_UNION;
#endif
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo19_int_START (0)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo19_int_END (0)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo21_int_START (1)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo21_int_END (1)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_pmua_int_START (2)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_pmua_int_END (2)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo20_int_START (3)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldo20_int_END (3)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldobuck_int_START (4)
#define SOC_SMART_ECO_MOD_CFG8_force_eco_ldobuck_int_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char peri_en_ctrl_lvs2 : 1;
        unsigned char peri_en_ctrl_ldo12 : 1;
        unsigned char peri_en_ctrl_ldo18 : 1;
        unsigned char peri_en_ctrl_ldo8 : 1;
        unsigned char peri_en_ctrl_buck2 : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_PERI_EN_MARK_UNION;
#endif
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_lvs2_START (0)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_lvs2_END (0)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo12_START (1)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo12_END (1)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo18_START (2)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo18_END (2)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo8_START (3)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_ldo8_END (3)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_buck2_START (4)
#define SOC_SMART_PERI_EN_MARK_peri_en_ctrl_buck2_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_nmos_switch : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_BUCK2_REG0_UNION;
#endif
#define SOC_SMART_BUCK2_REG0_buck2_nmos_switch_START (0)
#define SOC_SMART_BUCK2_REG0_buck2_nmos_switch_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_dbias : 4;
        unsigned char buck2_sleep_ng : 1;
        unsigned char buck2_sleep_dmd : 1;
        unsigned char buck2_reg_r : 2;
    } reg;
} SOC_SMART_BUCK2_REG1_UNION;
#endif
#define SOC_SMART_BUCK2_REG1_buck2_dbias_START (0)
#define SOC_SMART_BUCK2_REG1_buck2_dbias_END (3)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_ng_START (4)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_ng_END (4)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_dmd_START (5)
#define SOC_SMART_BUCK2_REG1_buck2_sleep_dmd_END (5)
#define SOC_SMART_BUCK2_REG1_buck2_reg_r_START (6)
#define SOC_SMART_BUCK2_REG1_buck2_reg_r_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_adj_rlx : 4;
        unsigned char buck2_adj_clx : 2;
        unsigned char buck2_ocp_sel : 2;
    } reg;
} SOC_SMART_BUCK2_REG2_UNION;
#endif
#define SOC_SMART_BUCK2_REG2_buck2_adj_rlx_START (0)
#define SOC_SMART_BUCK2_REG2_buck2_adj_rlx_END (3)
#define SOC_SMART_BUCK2_REG2_buck2_adj_clx_START (4)
#define SOC_SMART_BUCK2_REG2_buck2_adj_clx_END (5)
#define SOC_SMART_BUCK2_REG2_buck2_ocp_sel_START (6)
#define SOC_SMART_BUCK2_REG2_buck2_ocp_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_dmd_sel : 3;
        unsigned char buck2_bias_reg : 1;
        unsigned char buck2_en_reg : 1;
        unsigned char buck2_dmd_clamp : 1;
        unsigned char buck2_ocp_dis : 1;
        unsigned char buck2_ocp_delay : 1;
    } reg;
} SOC_SMART_BUCK2_REG3_UNION;
#endif
#define SOC_SMART_BUCK2_REG3_buck2_dmd_sel_START (0)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_sel_END (2)
#define SOC_SMART_BUCK2_REG3_buck2_bias_reg_START (3)
#define SOC_SMART_BUCK2_REG3_buck2_bias_reg_END (3)
#define SOC_SMART_BUCK2_REG3_buck2_en_reg_START (4)
#define SOC_SMART_BUCK2_REG3_buck2_en_reg_END (4)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_clamp_START (5)
#define SOC_SMART_BUCK2_REG3_buck2_dmd_clamp_END (5)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_dis_START (6)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_dis_END (6)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_delay_START (7)
#define SOC_SMART_BUCK2_REG3_buck2_ocp_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_reg_dr : 3;
        unsigned char buck2_dt_sel : 2;
        unsigned char buck2_regop_clamp : 1;
        unsigned char buck2_reg_ss : 1;
        unsigned char buck2_regop_c : 1;
    } reg;
} SOC_SMART_BUCK2_REG4_UNION;
#endif
#define SOC_SMART_BUCK2_REG4_buck2_reg_dr_START (0)
#define SOC_SMART_BUCK2_REG4_buck2_reg_dr_END (2)
#define SOC_SMART_BUCK2_REG4_buck2_dt_sel_START (3)
#define SOC_SMART_BUCK2_REG4_buck2_dt_sel_END (4)
#define SOC_SMART_BUCK2_REG4_buck2_regop_clamp_START (5)
#define SOC_SMART_BUCK2_REG4_buck2_regop_clamp_END (5)
#define SOC_SMART_BUCK2_REG4_buck2_reg_ss_START (6)
#define SOC_SMART_BUCK2_REG4_buck2_reg_ss_END (6)
#define SOC_SMART_BUCK2_REG4_buck2_regop_c_START (7)
#define SOC_SMART_BUCK2_REG4_buck2_regop_c_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_ng_n_sel : 2;
        unsigned char buck2_ng_p_sel : 2;
        unsigned char buck2_pg_n_sel : 2;
        unsigned char buck2_pg_p_sel : 2;
    } reg;
} SOC_SMART_BUCK2_REG5_UNION;
#endif
#define SOC_SMART_BUCK2_REG5_buck2_ng_n_sel_START (0)
#define SOC_SMART_BUCK2_REG5_buck2_ng_n_sel_END (1)
#define SOC_SMART_BUCK2_REG5_buck2_ng_p_sel_START (2)
#define SOC_SMART_BUCK2_REG5_buck2_ng_p_sel_END (3)
#define SOC_SMART_BUCK2_REG5_buck2_pg_n_sel_START (4)
#define SOC_SMART_BUCK2_REG5_buck2_pg_n_sel_END (5)
#define SOC_SMART_BUCK2_REG5_buck2_pg_p_sel_START (6)
#define SOC_SMART_BUCK2_REG5_buck2_pg_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_ocp_toff : 2;
        unsigned char buck2_ton : 2;
        unsigned char buck2_filter_ton : 2;
        unsigned char buck2_ng_dt_sel : 1;
        unsigned char buck2_pg_dt_sel : 1;
    } reg;
} SOC_SMART_BUCK2_REG6_UNION;
#endif
#define SOC_SMART_BUCK2_REG6_buck2_ocp_toff_START (0)
#define SOC_SMART_BUCK2_REG6_buck2_ocp_toff_END (1)
#define SOC_SMART_BUCK2_REG6_buck2_ton_START (2)
#define SOC_SMART_BUCK2_REG6_buck2_ton_END (3)
#define SOC_SMART_BUCK2_REG6_buck2_filter_ton_START (4)
#define SOC_SMART_BUCK2_REG6_buck2_filter_ton_END (5)
#define SOC_SMART_BUCK2_REG6_buck2_ng_dt_sel_START (6)
#define SOC_SMART_BUCK2_REG6_buck2_ng_dt_sel_END (6)
#define SOC_SMART_BUCK2_REG6_buck2_pg_dt_sel_START (7)
#define SOC_SMART_BUCK2_REG6_buck2_pg_dt_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_dmd_ton : 3;
        unsigned char buck2_short_pdp : 1;
        unsigned char buck2_cmp_filter : 1;
        unsigned char buck2_ton_dmd : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_BUCK2_REG7_UNION;
#endif
#define SOC_SMART_BUCK2_REG7_buck2_dmd_ton_START (0)
#define SOC_SMART_BUCK2_REG7_buck2_dmd_ton_END (2)
#define SOC_SMART_BUCK2_REG7_buck2_short_pdp_START (3)
#define SOC_SMART_BUCK2_REG7_buck2_short_pdp_END (3)
#define SOC_SMART_BUCK2_REG7_buck2_cmp_filter_START (4)
#define SOC_SMART_BUCK2_REG7_buck2_cmp_filter_END (4)
#define SOC_SMART_BUCK2_REG7_buck2_ton_dmd_START (5)
#define SOC_SMART_BUCK2_REG7_buck2_ton_dmd_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_nmos_switch : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_BUCK3_REG0_UNION;
#endif
#define SOC_SMART_BUCK3_REG0_buck3_nmos_switch_START (0)
#define SOC_SMART_BUCK3_REG0_buck3_nmos_switch_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_dbias : 4;
        unsigned char buck3_sleep_ng : 1;
        unsigned char buck3_sleep_dmd : 1;
        unsigned char buck3_reg_r : 2;
    } reg;
} SOC_SMART_BUCK3_REG1_UNION;
#endif
#define SOC_SMART_BUCK3_REG1_buck3_dbias_START (0)
#define SOC_SMART_BUCK3_REG1_buck3_dbias_END (3)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_ng_START (4)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_ng_END (4)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_dmd_START (5)
#define SOC_SMART_BUCK3_REG1_buck3_sleep_dmd_END (5)
#define SOC_SMART_BUCK3_REG1_buck3_reg_r_START (6)
#define SOC_SMART_BUCK3_REG1_buck3_reg_r_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_adj_rlx : 4;
        unsigned char buck3_adj_clx : 2;
        unsigned char buck3_ocp_sel : 2;
    } reg;
} SOC_SMART_BUCK3_REG2_UNION;
#endif
#define SOC_SMART_BUCK3_REG2_buck3_adj_rlx_START (0)
#define SOC_SMART_BUCK3_REG2_buck3_adj_rlx_END (3)
#define SOC_SMART_BUCK3_REG2_buck3_adj_clx_START (4)
#define SOC_SMART_BUCK3_REG2_buck3_adj_clx_END (5)
#define SOC_SMART_BUCK3_REG2_buck3_ocp_sel_START (6)
#define SOC_SMART_BUCK3_REG2_buck3_ocp_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_dmd_sel : 3;
        unsigned char buck3_bias_reg : 1;
        unsigned char buck3_en_reg : 1;
        unsigned char buck3_dmd_clamp : 1;
        unsigned char buck3_ocp_dis : 1;
        unsigned char buck3_ocp_delay : 1;
    } reg;
} SOC_SMART_BUCK3_REG3_UNION;
#endif
#define SOC_SMART_BUCK3_REG3_buck3_dmd_sel_START (0)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_sel_END (2)
#define SOC_SMART_BUCK3_REG3_buck3_bias_reg_START (3)
#define SOC_SMART_BUCK3_REG3_buck3_bias_reg_END (3)
#define SOC_SMART_BUCK3_REG3_buck3_en_reg_START (4)
#define SOC_SMART_BUCK3_REG3_buck3_en_reg_END (4)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_clamp_START (5)
#define SOC_SMART_BUCK3_REG3_buck3_dmd_clamp_END (5)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_dis_START (6)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_dis_END (6)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_delay_START (7)
#define SOC_SMART_BUCK3_REG3_buck3_ocp_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_reg_dr : 3;
        unsigned char buck3_dt_sel : 2;
        unsigned char buck3_regop_clamp : 1;
        unsigned char buck3_reg_ss : 1;
        unsigned char buck3_regop_c : 1;
    } reg;
} SOC_SMART_BUCK3_REG4_UNION;
#endif
#define SOC_SMART_BUCK3_REG4_buck3_reg_dr_START (0)
#define SOC_SMART_BUCK3_REG4_buck3_reg_dr_END (2)
#define SOC_SMART_BUCK3_REG4_buck3_dt_sel_START (3)
#define SOC_SMART_BUCK3_REG4_buck3_dt_sel_END (4)
#define SOC_SMART_BUCK3_REG4_buck3_regop_clamp_START (5)
#define SOC_SMART_BUCK3_REG4_buck3_regop_clamp_END (5)
#define SOC_SMART_BUCK3_REG4_buck3_reg_ss_START (6)
#define SOC_SMART_BUCK3_REG4_buck3_reg_ss_END (6)
#define SOC_SMART_BUCK3_REG4_buck3_regop_c_START (7)
#define SOC_SMART_BUCK3_REG4_buck3_regop_c_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_ng_n_sel : 2;
        unsigned char buck3_ng_p_sel : 2;
        unsigned char buck3_pg_n_sel : 2;
        unsigned char buck3_pg_p_sel : 2;
    } reg;
} SOC_SMART_BUCK3_REG5_UNION;
#endif
#define SOC_SMART_BUCK3_REG5_buck3_ng_n_sel_START (0)
#define SOC_SMART_BUCK3_REG5_buck3_ng_n_sel_END (1)
#define SOC_SMART_BUCK3_REG5_buck3_ng_p_sel_START (2)
#define SOC_SMART_BUCK3_REG5_buck3_ng_p_sel_END (3)
#define SOC_SMART_BUCK3_REG5_buck3_pg_n_sel_START (4)
#define SOC_SMART_BUCK3_REG5_buck3_pg_n_sel_END (5)
#define SOC_SMART_BUCK3_REG5_buck3_pg_p_sel_START (6)
#define SOC_SMART_BUCK3_REG5_buck3_pg_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_ocp_toff : 2;
        unsigned char buck3_ton : 2;
        unsigned char buck3_filter_ton : 2;
        unsigned char buck3_ng_dt_sel : 1;
        unsigned char buck3_pg_dt_sel : 1;
    } reg;
} SOC_SMART_BUCK3_REG6_UNION;
#endif
#define SOC_SMART_BUCK3_REG6_buck3_ocp_toff_START (0)
#define SOC_SMART_BUCK3_REG6_buck3_ocp_toff_END (1)
#define SOC_SMART_BUCK3_REG6_buck3_ton_START (2)
#define SOC_SMART_BUCK3_REG6_buck3_ton_END (3)
#define SOC_SMART_BUCK3_REG6_buck3_filter_ton_START (4)
#define SOC_SMART_BUCK3_REG6_buck3_filter_ton_END (5)
#define SOC_SMART_BUCK3_REG6_buck3_ng_dt_sel_START (6)
#define SOC_SMART_BUCK3_REG6_buck3_ng_dt_sel_END (6)
#define SOC_SMART_BUCK3_REG6_buck3_pg_dt_sel_START (7)
#define SOC_SMART_BUCK3_REG6_buck3_pg_dt_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_dmd_ton : 3;
        unsigned char buck3_short_pdp : 1;
        unsigned char buck3_cmp_filter : 1;
        unsigned char buck3_ton_dmd : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_BUCK3_REG7_UNION;
#endif
#define SOC_SMART_BUCK3_REG7_buck3_dmd_ton_START (0)
#define SOC_SMART_BUCK3_REG7_buck3_dmd_ton_END (2)
#define SOC_SMART_BUCK3_REG7_buck3_short_pdp_START (3)
#define SOC_SMART_BUCK3_REG7_buck3_short_pdp_END (3)
#define SOC_SMART_BUCK3_REG7_buck3_cmp_filter_START (4)
#define SOC_SMART_BUCK3_REG7_buck3_cmp_filter_END (4)
#define SOC_SMART_BUCK3_REG7_buck3_ton_dmd_START (5)
#define SOC_SMART_BUCK3_REG7_buck3_ton_dmd_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_nmos_switch : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_BUCK4_REG0_UNION;
#endif
#define SOC_SMART_BUCK4_REG0_buck4_nmos_switch_START (0)
#define SOC_SMART_BUCK4_REG0_buck4_nmos_switch_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_dbias : 4;
        unsigned char buck4_sleep_ng : 1;
        unsigned char buck4_sleep_dmd : 1;
        unsigned char buck4_reg_r : 2;
    } reg;
} SOC_SMART_BUCK4_REG1_UNION;
#endif
#define SOC_SMART_BUCK4_REG1_buck4_dbias_START (0)
#define SOC_SMART_BUCK4_REG1_buck4_dbias_END (3)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_ng_START (4)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_ng_END (4)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_dmd_START (5)
#define SOC_SMART_BUCK4_REG1_buck4_sleep_dmd_END (5)
#define SOC_SMART_BUCK4_REG1_buck4_reg_r_START (6)
#define SOC_SMART_BUCK4_REG1_buck4_reg_r_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_adj_rlx : 4;
        unsigned char buck4_adj_clx : 2;
        unsigned char buck4_ocp_sel : 2;
    } reg;
} SOC_SMART_BUCK4_REG2_UNION;
#endif
#define SOC_SMART_BUCK4_REG2_buck4_adj_rlx_START (0)
#define SOC_SMART_BUCK4_REG2_buck4_adj_rlx_END (3)
#define SOC_SMART_BUCK4_REG2_buck4_adj_clx_START (4)
#define SOC_SMART_BUCK4_REG2_buck4_adj_clx_END (5)
#define SOC_SMART_BUCK4_REG2_buck4_ocp_sel_START (6)
#define SOC_SMART_BUCK4_REG2_buck4_ocp_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_dmd_sel : 3;
        unsigned char buck4_bias_reg : 1;
        unsigned char buck4_en_reg : 1;
        unsigned char buck4_dmd_clamp : 1;
        unsigned char buck4_ocp_dis : 1;
        unsigned char buck4_ocp_delay : 1;
    } reg;
} SOC_SMART_BUCK4_REG3_UNION;
#endif
#define SOC_SMART_BUCK4_REG3_buck4_dmd_sel_START (0)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_sel_END (2)
#define SOC_SMART_BUCK4_REG3_buck4_bias_reg_START (3)
#define SOC_SMART_BUCK4_REG3_buck4_bias_reg_END (3)
#define SOC_SMART_BUCK4_REG3_buck4_en_reg_START (4)
#define SOC_SMART_BUCK4_REG3_buck4_en_reg_END (4)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_clamp_START (5)
#define SOC_SMART_BUCK4_REG3_buck4_dmd_clamp_END (5)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_dis_START (6)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_dis_END (6)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_delay_START (7)
#define SOC_SMART_BUCK4_REG3_buck4_ocp_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_reg_dr : 3;
        unsigned char buck4_dt_sel : 2;
        unsigned char buck4_regop_clamp : 1;
        unsigned char buck4_reg_ss : 1;
        unsigned char buck4_regop_c : 1;
    } reg;
} SOC_SMART_BUCK4_REG4_UNION;
#endif
#define SOC_SMART_BUCK4_REG4_buck4_reg_dr_START (0)
#define SOC_SMART_BUCK4_REG4_buck4_reg_dr_END (2)
#define SOC_SMART_BUCK4_REG4_buck4_dt_sel_START (3)
#define SOC_SMART_BUCK4_REG4_buck4_dt_sel_END (4)
#define SOC_SMART_BUCK4_REG4_buck4_regop_clamp_START (5)
#define SOC_SMART_BUCK4_REG4_buck4_regop_clamp_END (5)
#define SOC_SMART_BUCK4_REG4_buck4_reg_ss_START (6)
#define SOC_SMART_BUCK4_REG4_buck4_reg_ss_END (6)
#define SOC_SMART_BUCK4_REG4_buck4_regop_c_START (7)
#define SOC_SMART_BUCK4_REG4_buck4_regop_c_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_ng_n_sel : 2;
        unsigned char buck4_ng_p_sel : 2;
        unsigned char buck4_pg_n_sel : 2;
        unsigned char buck4_pg_p_sel : 2;
    } reg;
} SOC_SMART_BUCK4_REG5_UNION;
#endif
#define SOC_SMART_BUCK4_REG5_buck4_ng_n_sel_START (0)
#define SOC_SMART_BUCK4_REG5_buck4_ng_n_sel_END (1)
#define SOC_SMART_BUCK4_REG5_buck4_ng_p_sel_START (2)
#define SOC_SMART_BUCK4_REG5_buck4_ng_p_sel_END (3)
#define SOC_SMART_BUCK4_REG5_buck4_pg_n_sel_START (4)
#define SOC_SMART_BUCK4_REG5_buck4_pg_n_sel_END (5)
#define SOC_SMART_BUCK4_REG5_buck4_pg_p_sel_START (6)
#define SOC_SMART_BUCK4_REG5_buck4_pg_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_ocp_toff : 2;
        unsigned char buck4_ton : 2;
        unsigned char buck4_filter_ton : 2;
        unsigned char buck4_ng_dt_sel : 1;
        unsigned char buck4_pg_dt_sel : 1;
    } reg;
} SOC_SMART_BUCK4_REG6_UNION;
#endif
#define SOC_SMART_BUCK4_REG6_buck4_ocp_toff_START (0)
#define SOC_SMART_BUCK4_REG6_buck4_ocp_toff_END (1)
#define SOC_SMART_BUCK4_REG6_buck4_ton_START (2)
#define SOC_SMART_BUCK4_REG6_buck4_ton_END (3)
#define SOC_SMART_BUCK4_REG6_buck4_filter_ton_START (4)
#define SOC_SMART_BUCK4_REG6_buck4_filter_ton_END (5)
#define SOC_SMART_BUCK4_REG6_buck4_ng_dt_sel_START (6)
#define SOC_SMART_BUCK4_REG6_buck4_ng_dt_sel_END (6)
#define SOC_SMART_BUCK4_REG6_buck4_pg_dt_sel_START (7)
#define SOC_SMART_BUCK4_REG6_buck4_pg_dt_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_dmd_ton : 3;
        unsigned char buck4_short_pdp : 1;
        unsigned char buck4_cmp_filter : 1;
        unsigned char buck4_ton_dmd : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_BUCK4_REG7_UNION;
#endif
#define SOC_SMART_BUCK4_REG7_buck4_dmd_ton_START (0)
#define SOC_SMART_BUCK4_REG7_buck4_dmd_ton_END (2)
#define SOC_SMART_BUCK4_REG7_buck4_short_pdp_START (3)
#define SOC_SMART_BUCK4_REG7_buck4_short_pdp_END (3)
#define SOC_SMART_BUCK4_REG7_buck4_cmp_filter_START (4)
#define SOC_SMART_BUCK4_REG7_buck4_cmp_filter_END (4)
#define SOC_SMART_BUCK4_REG7_buck4_ton_dmd_START (5)
#define SOC_SMART_BUCK4_REG7_buck4_ton_dmd_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck_reserve1 : 8;
    } reg;
} SOC_SMART_BUCK_RESERVE0_UNION;
#endif
#define SOC_SMART_BUCK_RESERVE0_buck_reserve1_START (0)
#define SOC_SMART_BUCK_RESERVE0_buck_reserve1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck_reserve2 : 8;
    } reg;
} SOC_SMART_BUCK_RESERVE1_UNION;
#endif
#define SOC_SMART_BUCK_RESERVE1_buck_reserve2_START (0)
#define SOC_SMART_BUCK_RESERVE1_buck_reserve2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_otp_reg : 2;
        unsigned char xo_ldo_curr : 2;
        unsigned char xo_ldo_res : 3;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_CLK_TOP0_UNION;
#endif
#define SOC_SMART_CLK_TOP0_xo_otp_reg_START (0)
#define SOC_SMART_CLK_TOP0_xo_otp_reg_END (1)
#define SOC_SMART_CLK_TOP0_xo_ldo_curr_START (2)
#define SOC_SMART_CLK_TOP0_xo_ldo_curr_END (3)
#define SOC_SMART_CLK_TOP0_xo_ldo_res_START (4)
#define SOC_SMART_CLK_TOP0_xo_ldo_res_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved_0 : 4;
        unsigned char xo_buff_curr_reg : 1;
        unsigned char xo_otp_reg_sel1 : 1;
        unsigned char xo_otp_reg_sel0 : 1;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_CLK_TOP1_UNION;
#endif
#define SOC_SMART_CLK_TOP1_xo_buff_curr_reg_START (4)
#define SOC_SMART_CLK_TOP1_xo_buff_curr_reg_END (4)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel1_START (5)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel1_END (5)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel0_START (6)
#define SOC_SMART_CLK_TOP1_xo_otp_reg_sel0_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char trim_freq_clk3 : 2;
        unsigned char trim_freq_clk2 : 2;
        unsigned char trim_freq_clk1 : 2;
        unsigned char trim_freq_clk0 : 2;
    } reg;
} SOC_SMART_CLK_TOP3_UNION;
#endif
#define SOC_SMART_CLK_TOP3_trim_freq_clk3_START (0)
#define SOC_SMART_CLK_TOP3_trim_freq_clk3_END (1)
#define SOC_SMART_CLK_TOP3_trim_freq_clk2_START (2)
#define SOC_SMART_CLK_TOP3_trim_freq_clk2_END (3)
#define SOC_SMART_CLK_TOP3_trim_freq_clk1_START (4)
#define SOC_SMART_CLK_TOP3_trim_freq_clk1_END (5)
#define SOC_SMART_CLK_TOP3_trim_freq_clk0_START (6)
#define SOC_SMART_CLK_TOP3_trim_freq_clk0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char trim_freq_clk4 : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_CLK_TOP4_UNION;
#endif
#define SOC_SMART_CLK_TOP4_trim_freq_clk4_START (0)
#define SOC_SMART_CLK_TOP4_trim_freq_clk4_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_reserve : 8;
    } reg;
} SOC_SMART_CLK_TOP5_UNION;
#endif
#define SOC_SMART_CLK_TOP5_xo_reserve_START (0)
#define SOC_SMART_CLK_TOP5_xo_reserve_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char classd_gain : 2;
        unsigned char classd_i_ocp : 2;
        unsigned char classd_mute_sel : 1;
        unsigned char classd_mute : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_CLASSD_CTRL1_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL1_classd_gain_START (0)
#define SOC_SMART_CLASSD_CTRL1_classd_gain_END (1)
#define SOC_SMART_CLASSD_CTRL1_classd_i_ocp_START (2)
#define SOC_SMART_CLASSD_CTRL1_classd_i_ocp_END (3)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_sel_START (4)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_sel_END (4)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_START (5)
#define SOC_SMART_CLASSD_CTRL1_classd_mute_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char classd_n_sel : 2;
        unsigned char classd_p_sel : 2;
        unsigned char classd_i_pump : 2;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_CLASSD_CTRL2_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL2_classd_n_sel_START (0)
#define SOC_SMART_CLASSD_CTRL2_classd_n_sel_END (1)
#define SOC_SMART_CLASSD_CTRL2_classd_p_sel_START (2)
#define SOC_SMART_CLASSD_CTRL2_classd_p_sel_END (3)
#define SOC_SMART_CLASSD_CTRL2_classd_i_pump_START (4)
#define SOC_SMART_CLASSD_CTRL2_classd_i_pump_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char classd_ocp_bps : 1;
        unsigned char classd_dt_sel : 1;
        unsigned char classd_pls_byp : 1;
        unsigned char en_classd_int : 1;
        unsigned char classd_drv_en : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_CLASSD_CTRL3_UNION;
#endif
#define SOC_SMART_CLASSD_CTRL3_classd_ocp_bps_START (0)
#define SOC_SMART_CLASSD_CTRL3_classd_ocp_bps_END (0)
#define SOC_SMART_CLASSD_CTRL3_classd_dt_sel_START (1)
#define SOC_SMART_CLASSD_CTRL3_classd_dt_sel_END (1)
#define SOC_SMART_CLASSD_CTRL3_classd_pls_byp_START (2)
#define SOC_SMART_CLASSD_CTRL3_classd_pls_byp_END (2)
#define SOC_SMART_CLASSD_CTRL3_en_classd_int_START (3)
#define SOC_SMART_CLASSD_CTRL3_en_classd_int_END (3)
#define SOC_SMART_CLASSD_CTRL3_classd_drv_en_START (4)
#define SOC_SMART_CLASSD_CTRL3_classd_drv_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck2_dv : 6;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_VSET_BUCK2_ADJ_UNION;
#endif
#define SOC_SMART_VSET_BUCK2_ADJ_buck2_dv_START (0)
#define SOC_SMART_VSET_BUCK2_ADJ_buck2_dv_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck3_dv : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_VSET_BUCK3_ADJ_UNION;
#endif
#define SOC_SMART_VSET_BUCK3_ADJ_buck3_dv_START (0)
#define SOC_SMART_VSET_BUCK3_ADJ_buck3_dv_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_dv : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_VSET_BUCK4_ADJ0_UNION;
#endif
#define SOC_SMART_VSET_BUCK4_ADJ0_buck4_dv_START (0)
#define SOC_SMART_VSET_BUCK4_ADJ0_buck4_dv_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck4_dv_adj : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_VSET_BUCK4_ADJ1_UNION;
#endif
#define SOC_SMART_VSET_BUCK4_ADJ1_buck4_dv_adj_START (0)
#define SOC_SMART_VSET_BUCK4_ADJ1_buck4_dv_adj_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo1 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo1 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO1_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO1_REG_ADJ_vset_ldo1_START (0)
#define SOC_SMART_LDO1_REG_ADJ_vset_ldo1_END (2)
#define SOC_SMART_LDO1_REG_ADJ_vrset_ldo1_START (4)
#define SOC_SMART_LDO1_REG_ADJ_vrset_ldo1_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo2 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo2 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO2_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO2_REG_ADJ_vset_ldo2_START (0)
#define SOC_SMART_LDO2_REG_ADJ_vset_ldo2_END (2)
#define SOC_SMART_LDO2_REG_ADJ_vrset_ldo2_START (4)
#define SOC_SMART_LDO2_REG_ADJ_vrset_ldo2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo3 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo3 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO3_REG_ADJ0_UNION;
#endif
#define SOC_SMART_LDO3_REG_ADJ0_vset_ldo3_START (0)
#define SOC_SMART_LDO3_REG_ADJ0_vset_ldo3_END (2)
#define SOC_SMART_LDO3_REG_ADJ0_vrset_ldo3_START (4)
#define SOC_SMART_LDO3_REG_ADJ0_vrset_ldo3_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo3_adj : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_LDO3_REG_ADJ1_UNION;
#endif
#define SOC_SMART_LDO3_REG_ADJ1_vset_ldo3_adj_START (0)
#define SOC_SMART_LDO3_REG_ADJ1_vset_ldo3_adj_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char i_sst_ldo4 : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_LDO4_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO4_REG_ADJ_i_sst_ldo4_START (0)
#define SOC_SMART_LDO4_REG_ADJ_i_sst_ldo4_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo5 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo5 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO5_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO5_REG_ADJ_vset_ldo5_START (0)
#define SOC_SMART_LDO5_REG_ADJ_vset_ldo5_END (2)
#define SOC_SMART_LDO5_REG_ADJ_vrset_ldo5_START (4)
#define SOC_SMART_LDO5_REG_ADJ_vrset_ldo5_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo6 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo6 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO6_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO6_REG_ADJ_vset_ldo6_START (0)
#define SOC_SMART_LDO6_REG_ADJ_vset_ldo6_END (2)
#define SOC_SMART_LDO6_REG_ADJ_vrset_ldo6_START (4)
#define SOC_SMART_LDO6_REG_ADJ_vrset_ldo6_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo7 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo7 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO7_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO7_REG_ADJ_vset_ldo7_START (0)
#define SOC_SMART_LDO7_REG_ADJ_vset_ldo7_END (2)
#define SOC_SMART_LDO7_REG_ADJ_vrset_ldo7_START (4)
#define SOC_SMART_LDO7_REG_ADJ_vrset_ldo7_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo8 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo8 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO8_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO8_REG_ADJ_vset_ldo8_START (0)
#define SOC_SMART_LDO8_REG_ADJ_vset_ldo8_END (2)
#define SOC_SMART_LDO8_REG_ADJ_vrset_ldo8_START (4)
#define SOC_SMART_LDO8_REG_ADJ_vrset_ldo8_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo9 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo9 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO9_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO9_REG_ADJ_vset_ldo9_START (0)
#define SOC_SMART_LDO9_REG_ADJ_vset_ldo9_END (2)
#define SOC_SMART_LDO9_REG_ADJ_vrset_ldo9_START (4)
#define SOC_SMART_LDO9_REG_ADJ_vrset_ldo9_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo10 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo10 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO10_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO10_REG_ADJ_vset_ldo10_START (0)
#define SOC_SMART_LDO10_REG_ADJ_vset_ldo10_END (2)
#define SOC_SMART_LDO10_REG_ADJ_vrset_ldo10_START (4)
#define SOC_SMART_LDO10_REG_ADJ_vrset_ldo10_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo11 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo11 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO11_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO11_REG_ADJ_vset_ldo11_START (0)
#define SOC_SMART_LDO11_REG_ADJ_vset_ldo11_END (2)
#define SOC_SMART_LDO11_REG_ADJ_vrset_ldo11_START (4)
#define SOC_SMART_LDO11_REG_ADJ_vrset_ldo11_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo12 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo12 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO12_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO12_REG_ADJ_vset_ldo12_START (0)
#define SOC_SMART_LDO12_REG_ADJ_vset_ldo12_END (2)
#define SOC_SMART_LDO12_REG_ADJ_vrset_ldo12_START (4)
#define SOC_SMART_LDO12_REG_ADJ_vrset_ldo12_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo13 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo13 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO13_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO13_REG_ADJ_vset_ldo13_START (0)
#define SOC_SMART_LDO13_REG_ADJ_vset_ldo13_END (2)
#define SOC_SMART_LDO13_REG_ADJ_vrset_ldo13_START (4)
#define SOC_SMART_LDO13_REG_ADJ_vrset_ldo13_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo14 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo14 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO14_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO14_REG_ADJ_vset_ldo14_START (0)
#define SOC_SMART_LDO14_REG_ADJ_vset_ldo14_END (2)
#define SOC_SMART_LDO14_REG_ADJ_vrset_ldo14_START (4)
#define SOC_SMART_LDO14_REG_ADJ_vrset_ldo14_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo15 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo15 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO15_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO15_REG_ADJ_vset_ldo15_START (0)
#define SOC_SMART_LDO15_REG_ADJ_vset_ldo15_END (2)
#define SOC_SMART_LDO15_REG_ADJ_vrset_ldo15_START (4)
#define SOC_SMART_LDO15_REG_ADJ_vrset_ldo15_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo16 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo16 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO16_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO16_REG_ADJ_vset_ldo16_START (0)
#define SOC_SMART_LDO16_REG_ADJ_vset_ldo16_END (2)
#define SOC_SMART_LDO16_REG_ADJ_vrset_ldo16_START (4)
#define SOC_SMART_LDO16_REG_ADJ_vrset_ldo16_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo17 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo17 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO17_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO17_REG_ADJ_vset_ldo17_START (0)
#define SOC_SMART_LDO17_REG_ADJ_vset_ldo17_END (2)
#define SOC_SMART_LDO17_REG_ADJ_vrset_ldo17_START (4)
#define SOC_SMART_LDO17_REG_ADJ_vrset_ldo17_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo18 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo18 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO18_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO18_REG_ADJ_vset_ldo18_START (0)
#define SOC_SMART_LDO18_REG_ADJ_vset_ldo18_END (2)
#define SOC_SMART_LDO18_REG_ADJ_vrset_ldo18_START (4)
#define SOC_SMART_LDO18_REG_ADJ_vrset_ldo18_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo19 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo19 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO19_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO19_REG_ADJ_vset_ldo19_START (0)
#define SOC_SMART_LDO19_REG_ADJ_vset_ldo19_END (2)
#define SOC_SMART_LDO19_REG_ADJ_vrset_ldo19_START (4)
#define SOC_SMART_LDO19_REG_ADJ_vrset_ldo19_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo20 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo20 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO20_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO20_REG_ADJ_vset_ldo20_START (0)
#define SOC_SMART_LDO20_REG_ADJ_vset_ldo20_END (2)
#define SOC_SMART_LDO20_REG_ADJ_vrset_ldo20_START (4)
#define SOC_SMART_LDO20_REG_ADJ_vrset_ldo20_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo21 : 3;
        unsigned char reserved_0 : 1;
        unsigned char vrset_ldo21 : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_LDO21_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO21_REG_ADJ_vset_ldo21_START (0)
#define SOC_SMART_LDO21_REG_ADJ_vset_ldo21_END (2)
#define SOC_SMART_LDO21_REG_ADJ_vrset_ldo21_START (4)
#define SOC_SMART_LDO21_REG_ADJ_vrset_ldo21_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo22 : 3;
        unsigned char en_dc_ldo22 : 1;
        unsigned char vrset_ldo22 : 3;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_LDO22_REG_ADJ_UNION;
#endif
#define SOC_SMART_LDO22_REG_ADJ_vset_ldo22_START (0)
#define SOC_SMART_LDO22_REG_ADJ_vset_ldo22_END (2)
#define SOC_SMART_LDO22_REG_ADJ_en_dc_ldo22_START (3)
#define SOC_SMART_LDO22_REG_ADJ_en_dc_ldo22_END (3)
#define SOC_SMART_LDO22_REG_ADJ_vrset_ldo22_START (4)
#define SOC_SMART_LDO22_REG_ADJ_vrset_ldo22_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_pmua : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_PMUA_REG_ADJ_UNION;
#endif
#define SOC_SMART_PMUA_REG_ADJ_vset_pmua_START (0)
#define SOC_SMART_PMUA_REG_ADJ_vset_pmua_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char sstset_lvs2 : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_LVS_ADJ1_UNION;
#endif
#define SOC_SMART_LVS_ADJ1_sstset_lvs2_START (0)
#define SOC_SMART_LVS_ADJ1_sstset_lvs2_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ibias_trim_en : 2;
        unsigned char ref_reserve : 2;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_BANDGAP_THSD_ADJ1_UNION;
#endif
#define SOC_SMART_BANDGAP_THSD_ADJ1_ibias_trim_en_START (0)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ibias_trim_en_END (1)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ref_reserve_START (2)
#define SOC_SMART_BANDGAP_THSD_ADJ1_ref_reserve_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_tmp_int : 2;
        unsigned char en_eco_thsd_int : 1;
        unsigned char reserved_0 : 1;
        unsigned char thsd_set_tmp : 2;
        unsigned char reserved_1 : 2;
    } reg;
} SOC_SMART_BANDGAP_THSD_ADJ2_UNION;
#endif
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_tmp_int_START (0)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_tmp_int_END (1)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_eco_thsd_int_START (2)
#define SOC_SMART_BANDGAP_THSD_ADJ2_en_eco_thsd_int_END (2)
#define SOC_SMART_BANDGAP_THSD_ADJ2_thsd_set_tmp_START (4)
#define SOC_SMART_BANDGAP_THSD_ADJ2_thsd_set_tmp_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_dr3_int : 1;
        unsigned char dr3_mode : 1;
        unsigned char en_dr4_int : 1;
        unsigned char dr4_mode : 1;
        unsigned char en_dr5_int : 1;
        unsigned char dr5_mode : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_DR_FLA_CTRL1_UNION;
#endif
#define SOC_SMART_DR_FLA_CTRL1_en_dr3_int_START (0)
#define SOC_SMART_DR_FLA_CTRL1_en_dr3_int_END (0)
#define SOC_SMART_DR_FLA_CTRL1_dr3_mode_START (1)
#define SOC_SMART_DR_FLA_CTRL1_dr3_mode_END (1)
#define SOC_SMART_DR_FLA_CTRL1_en_dr4_int_START (2)
#define SOC_SMART_DR_FLA_CTRL1_en_dr4_int_END (2)
#define SOC_SMART_DR_FLA_CTRL1_dr4_mode_START (3)
#define SOC_SMART_DR_FLA_CTRL1_dr4_mode_END (3)
#define SOC_SMART_DR_FLA_CTRL1_en_dr5_int_START (4)
#define SOC_SMART_DR_FLA_CTRL1_en_dr5_int_END (4)
#define SOC_SMART_DR_FLA_CTRL1_dr5_mode_START (5)
#define SOC_SMART_DR_FLA_CTRL1_dr5_mode_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char en_dr1_int : 1;
        unsigned char dr1_mode : 1;
        unsigned char reserved_0 : 2;
        unsigned char en_dr2_int : 1;
        unsigned char dr2_mode : 1;
        unsigned char reserved_1 : 2;
    } reg;
} SOC_SMART_DR_FLA_CTRL2_UNION;
#endif
#define SOC_SMART_DR_FLA_CTRL2_en_dr1_int_START (0)
#define SOC_SMART_DR_FLA_CTRL2_en_dr1_int_END (0)
#define SOC_SMART_DR_FLA_CTRL2_dr1_mode_START (1)
#define SOC_SMART_DR_FLA_CTRL2_dr1_mode_END (1)
#define SOC_SMART_DR_FLA_CTRL2_en_dr2_int_START (4)
#define SOC_SMART_DR_FLA_CTRL2_en_dr2_int_END (4)
#define SOC_SMART_DR_FLA_CTRL2_dr2_mode_START (5)
#define SOC_SMART_DR_FLA_CTRL2_dr2_mode_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char flash_period_dr12 : 8;
    } reg;
} SOC_SMART_FLASH_PERIOD_DR12_UNION;
#endif
#define SOC_SMART_FLASH_PERIOD_DR12_flash_period_dr12_START (0)
#define SOC_SMART_FLASH_PERIOD_DR12_flash_period_dr12_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char flash_on_dr12 : 8;
    } reg;
} SOC_SMART_FLASH_ON_DR12_UNION;
#endif
#define SOC_SMART_FLASH_ON_DR12_flash_on_dr12_START (0)
#define SOC_SMART_FLASH_ON_DR12_flash_on_dr12_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char flash_period_dr345 : 8;
    } reg;
} SOC_SMART_FLASH_PERIOD_DR345_UNION;
#endif
#define SOC_SMART_FLASH_PERIOD_DR345_flash_period_dr345_START (0)
#define SOC_SMART_FLASH_PERIOD_DR345_flash_period_dr345_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char flash_on_dr345 : 8;
    } reg;
} SOC_SMART_FLASH_ON_DR345_UNION;
#endif
#define SOC_SMART_FLASH_ON_DR345_flash_on_dr345_START (0)
#define SOC_SMART_FLASH_ON_DR345_flash_on_dr345_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr1_mode_sel : 1;
        unsigned char dr2_mode_sel : 1;
        unsigned char dr3_mode_sel : 1;
        unsigned char dr4_mode_sel : 1;
        unsigned char dr5_mode_sel : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_DR_MODE_SEL_UNION;
#endif
#define SOC_SMART_DR_MODE_SEL_dr1_mode_sel_START (0)
#define SOC_SMART_DR_MODE_SEL_dr1_mode_sel_END (0)
#define SOC_SMART_DR_MODE_SEL_dr2_mode_sel_START (1)
#define SOC_SMART_DR_MODE_SEL_dr2_mode_sel_END (1)
#define SOC_SMART_DR_MODE_SEL_dr3_mode_sel_START (2)
#define SOC_SMART_DR_MODE_SEL_dr3_mode_sel_END (2)
#define SOC_SMART_DR_MODE_SEL_dr4_mode_sel_START (3)
#define SOC_SMART_DR_MODE_SEL_dr4_mode_sel_END (3)
#define SOC_SMART_DR_MODE_SEL_dr5_mode_sel_START (4)
#define SOC_SMART_DR_MODE_SEL_dr5_mode_sel_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr1_en : 1;
        unsigned char dr1_flash_en : 1;
        unsigned char reserved_0 : 2;
        unsigned char dr2_en : 1;
        unsigned char dr2_flash_en : 1;
        unsigned char reserved_1 : 2;
    } reg;
} SOC_SMART_DR_BRE_CTRL_UNION;
#endif
#define SOC_SMART_DR_BRE_CTRL_dr1_en_START (0)
#define SOC_SMART_DR_BRE_CTRL_dr1_en_END (0)
#define SOC_SMART_DR_BRE_CTRL_dr1_flash_en_START (1)
#define SOC_SMART_DR_BRE_CTRL_dr1_flash_en_END (1)
#define SOC_SMART_DR_BRE_CTRL_dr2_en_START (4)
#define SOC_SMART_DR_BRE_CTRL_dr2_en_END (4)
#define SOC_SMART_DR_BRE_CTRL_dr2_flash_en_START (5)
#define SOC_SMART_DR_BRE_CTRL_dr2_flash_en_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr12_t_off : 3;
        unsigned char reserved_0 : 1;
        unsigned char dr12_t_on : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_DR12_TIM_CONF0_UNION;
#endif
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_off_START (0)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_off_END (2)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_on_START (4)
#define SOC_SMART_DR12_TIM_CONF0_dr12_t_on_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr12_t_rise : 3;
        unsigned char reserved_0 : 1;
        unsigned char dr12_t_fall : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_DR12_TIM_CONF1_UNION;
#endif
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_rise_START (0)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_rise_END (2)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_fall_START (4)
#define SOC_SMART_DR12_TIM_CONF1_dr12_t_fall_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char iset_dr1 : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR1_ISET_UNION;
#endif
#define SOC_SMART_DR1_ISET_iset_dr1_START (0)
#define SOC_SMART_DR1_ISET_iset_dr1_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char iset_dr2 : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR2_ISET_UNION;
#endif
#define SOC_SMART_DR2_ISET_iset_dr2_START (0)
#define SOC_SMART_DR2_ISET_iset_dr2_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr3_en : 1;
        unsigned char dr4_en : 1;
        unsigned char dr5_en : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR_LED_CTRL_UNION;
#endif
#define SOC_SMART_DR_LED_CTRL_dr3_en_START (0)
#define SOC_SMART_DR_LED_CTRL_dr3_en_END (0)
#define SOC_SMART_DR_LED_CTRL_dr4_en_START (1)
#define SOC_SMART_DR_LED_CTRL_dr4_en_END (1)
#define SOC_SMART_DR_LED_CTRL_dr5_en_START (2)
#define SOC_SMART_DR_LED_CTRL_dr5_en_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr3_out_ctrl : 2;
        unsigned char dr4_out_ctrl : 2;
        unsigned char dr5_out_ctrl : 2;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_DR_OUT_CTRL_UNION;
#endif
#define SOC_SMART_DR_OUT_CTRL_dr3_out_ctrl_START (0)
#define SOC_SMART_DR_OUT_CTRL_dr3_out_ctrl_END (1)
#define SOC_SMART_DR_OUT_CTRL_dr4_out_ctrl_START (2)
#define SOC_SMART_DR_OUT_CTRL_dr4_out_ctrl_END (3)
#define SOC_SMART_DR_OUT_CTRL_dr5_out_ctrl_START (4)
#define SOC_SMART_DR_OUT_CTRL_dr5_out_ctrl_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char iset_dr3 : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR3_ISET_UNION;
#endif
#define SOC_SMART_DR3_ISET_iset_dr3_START (0)
#define SOC_SMART_DR3_ISET_iset_dr3_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr3_start_delay : 8;
    } reg;
} SOC_SMART_DR3_START_DEL_UNION;
#endif
#define SOC_SMART_DR3_START_DEL_dr3_start_delay_START (0)
#define SOC_SMART_DR3_START_DEL_dr3_start_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char iset_dr4 : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR4_ISET_UNION;
#endif
#define SOC_SMART_DR4_ISET_iset_dr4_START (0)
#define SOC_SMART_DR4_ISET_iset_dr4_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr4_start_delay : 8;
    } reg;
} SOC_SMART_DR4_START_DEL_UNION;
#endif
#define SOC_SMART_DR4_START_DEL_dr4_start_delay_START (0)
#define SOC_SMART_DR4_START_DEL_dr4_start_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char iset_dr5 : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_DR5_ISET_UNION;
#endif
#define SOC_SMART_DR5_ISET_iset_dr5_START (0)
#define SOC_SMART_DR5_ISET_iset_dr5_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr5_start_delay : 8;
    } reg;
} SOC_SMART_DR5_START_DEL_UNION;
#endif
#define SOC_SMART_DR5_START_DEL_dr5_start_delay_START (0)
#define SOC_SMART_DR5_START_DEL_dr5_start_delay_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr345_t_off : 4;
        unsigned char dr345_t_on : 4;
    } reg;
} SOC_SMART_DR3_TIM_CONF0_UNION;
#endif
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_off_START (0)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_off_END (3)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_on_START (4)
#define SOC_SMART_DR3_TIM_CONF0_dr345_t_on_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char dr345_t_rise : 3;
        unsigned char reserved_0 : 1;
        unsigned char dr345_t_fall : 3;
        unsigned char reserved_1 : 1;
    } reg;
} SOC_SMART_DR3_TIM_CONF1_UNION;
#endif
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_rise_START (0)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_rise_END (2)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_fall_START (4)
#define SOC_SMART_DR3_TIM_CONF1_dr345_t_fall_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pwe_int : 1;
        unsigned char otp_pwe_pulse : 1;
        unsigned char otp_write_mask : 1;
        unsigned char otp_por_int : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_OTP_CTRL1_UNION;
#endif
#define SOC_SMART_OTP_CTRL1_otp_pwe_int_START (0)
#define SOC_SMART_OTP_CTRL1_otp_pwe_int_END (0)
#define SOC_SMART_OTP_CTRL1_otp_pwe_pulse_START (1)
#define SOC_SMART_OTP_CTRL1_otp_pwe_pulse_END (1)
#define SOC_SMART_OTP_CTRL1_otp_write_mask_START (2)
#define SOC_SMART_OTP_CTRL1_otp_write_mask_END (2)
#define SOC_SMART_OTP_CTRL1_otp_por_int_START (3)
#define SOC_SMART_OTP_CTRL1_otp_por_int_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pa : 2;
        unsigned char otp_ptm : 2;
        unsigned char otp_pprog : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_OTP_CTRL2_UNION;
#endif
#define SOC_SMART_OTP_CTRL2_otp_pa_START (0)
#define SOC_SMART_OTP_CTRL2_otp_pa_END (1)
#define SOC_SMART_OTP_CTRL2_otp_ptm_START (2)
#define SOC_SMART_OTP_CTRL2_otp_ptm_END (3)
#define SOC_SMART_OTP_CTRL2_otp_pprog_START (4)
#define SOC_SMART_OTP_CTRL2_otp_pprog_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdin : 8;
    } reg;
} SOC_SMART_OTP_PDIN_UNION;
#endif
#define SOC_SMART_OTP_PDIN_otp_pdin_START (0)
#define SOC_SMART_OTP_PDIN_otp_pdin_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ana_in : 8;
    } reg;
} SOC_SMART_ANA_IN_UNION;
#endif
#define SOC_SMART_ANA_IN_ana_in_START (0)
#define SOC_SMART_ANA_IN_ana_in_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_SMART_RESERVED0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_SMART_RESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 8;
    } reg;
} SOC_SMART_RESERVED2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char aux_offset_cfg1 : 2;
        unsigned char aux_ibias_cfg1 : 2;
        unsigned char aux_offset_cfg2 : 2;
        unsigned char aux_ibias_cfg2 : 2;
    } reg;
} SOC_SMART_DAC_CTRL_UNION;
#endif
#define SOC_SMART_DAC_CTRL_aux_offset_cfg1_START (0)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg1_END (1)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg1_START (2)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg1_END (3)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg2_START (4)
#define SOC_SMART_DAC_CTRL_aux_offset_cfg2_END (5)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg2_START (6)
#define SOC_SMART_DAC_CTRL_aux_ibias_cfg2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_pfm_solution_sel : 1;
        unsigned char buck01_mode_sel : 1;
        unsigned char buck01_z_trim : 1;
        unsigned char buck01_interleaving_ctrl : 1;
        unsigned char buck01_osc_frequency : 4;
    } reg;
} SOC_SMART_BUCK01_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL0_buck01_pfm_solution_sel_START (0)
#define SOC_SMART_BUCK01_CTRL0_buck01_pfm_solution_sel_END (0)
#define SOC_SMART_BUCK01_CTRL0_buck01_mode_sel_START (1)
#define SOC_SMART_BUCK01_CTRL0_buck01_mode_sel_END (1)
#define SOC_SMART_BUCK01_CTRL0_buck01_z_trim_START (2)
#define SOC_SMART_BUCK01_CTRL0_buck01_z_trim_END (2)
#define SOC_SMART_BUCK01_CTRL0_buck01_interleaving_ctrl_START (3)
#define SOC_SMART_BUCK01_CTRL0_buck01_interleaving_ctrl_END (3)
#define SOC_SMART_BUCK01_CTRL0_buck01_osc_frequency_START (4)
#define SOC_SMART_BUCK01_CTRL0_buck01_osc_frequency_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_ea_comp_cap_sel : 2;
        unsigned char buck01_vc_sel : 2;
        unsigned char buck01_burst_drv_ctr : 1;
        unsigned char buck01_pfm_vth_sel : 1;
        unsigned char buck01_pfm_ctrl : 2;
    } reg;
} SOC_SMART_BUCK01_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL1_buck01_ea_comp_cap_sel_START (0)
#define SOC_SMART_BUCK01_CTRL1_buck01_ea_comp_cap_sel_END (1)
#define SOC_SMART_BUCK01_CTRL1_buck01_vc_sel_START (2)
#define SOC_SMART_BUCK01_CTRL1_buck01_vc_sel_END (3)
#define SOC_SMART_BUCK01_CTRL1_buck01_burst_drv_ctr_START (4)
#define SOC_SMART_BUCK01_CTRL1_buck01_burst_drv_ctr_END (4)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_vth_sel_START (5)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_vth_sel_END (5)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_ctrl_START (6)
#define SOC_SMART_BUCK01_CTRL1_buck01_pfm_ctrl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_comp_adj : 8;
    } reg;
} SOC_SMART_BUCK01_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL2_buck01_comp_adj_START (0)
#define SOC_SMART_BUCK01_CTRL2_buck01_comp_adj_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_vout_set : 7;
        unsigned char reserved : 1;
    } reg;
} SOC_SMART_BUCK01_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL3_buck01_vout_set_START (0)
#define SOC_SMART_BUCK01_CTRL3_buck01_vout_set_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_ib_pwm_sel : 1;
        unsigned char buck01_isns_rc_sel : 1;
        unsigned char buck01_scp_shield : 1;
        unsigned char buck01_sft_sel : 1;
        unsigned char buck01_remote_sense_os : 3;
        unsigned char buck01_remote_sense_sel : 1;
    } reg;
} SOC_SMART_BUCK01_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK01_CTRL4_buck01_ib_pwm_sel_START (0)
#define SOC_SMART_BUCK01_CTRL4_buck01_ib_pwm_sel_END (0)
#define SOC_SMART_BUCK01_CTRL4_buck01_isns_rc_sel_START (1)
#define SOC_SMART_BUCK01_CTRL4_buck01_isns_rc_sel_END (1)
#define SOC_SMART_BUCK01_CTRL4_buck01_scp_shield_START (2)
#define SOC_SMART_BUCK01_CTRL4_buck01_scp_shield_END (2)
#define SOC_SMART_BUCK01_CTRL4_buck01_sft_sel_START (3)
#define SOC_SMART_BUCK01_CTRL4_buck01_sft_sel_END (3)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_os_START (4)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_os_END (6)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_sel_START (7)
#define SOC_SMART_BUCK01_CTRL4_buck01_remote_sense_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_ng_n_sel : 2;
        unsigned char buck0_ng_p_sel : 2;
        unsigned char buck0_pg_n_sel : 2;
        unsigned char buck0_pg_p_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_n_sel_START (0)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_n_sel_END (1)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_p_sel_START (2)
#define SOC_SMART_BUCK0_CTRL0_buck0_ng_p_sel_END (3)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_n_sel_START (4)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_n_sel_END (5)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_p_sel_START (6)
#define SOC_SMART_BUCK0_CTRL0_buck0_pg_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck0_cs_mode_sel : 1;
        unsigned char buck0_pdn_lx_det : 1;
        unsigned char buck0_pdn_lx_sel : 1;
        unsigned char buck0_ng_dt_sel : 1;
        unsigned char buck0_pg_dt_sel : 1;
        unsigned char buck0_dt_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL1_buck0_cs_mode_sel_START (1)
#define SOC_SMART_BUCK0_CTRL1_buck0_cs_mode_sel_END (1)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_det_START (2)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_det_END (2)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_sel_START (3)
#define SOC_SMART_BUCK0_CTRL1_buck0_pdn_lx_sel_END (3)
#define SOC_SMART_BUCK0_CTRL1_buck0_ng_dt_sel_START (4)
#define SOC_SMART_BUCK0_CTRL1_buck0_ng_dt_sel_END (4)
#define SOC_SMART_BUCK0_CTRL1_buck0_pg_dt_sel_START (5)
#define SOC_SMART_BUCK0_CTRL1_buck0_pg_dt_sel_END (5)
#define SOC_SMART_BUCK0_CTRL1_buck0_dt_sel_START (6)
#define SOC_SMART_BUCK0_CTRL1_buck0_dt_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_bt_sel : 2;
        unsigned char buck0_cs_sel : 2;
        unsigned char buck0_cs_os_sel : 1;
        unsigned char buck0_cs_dt_sel : 1;
        unsigned char buck0_cs_mos_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL2_buck0_bt_sel_START (0)
#define SOC_SMART_BUCK0_CTRL2_buck0_bt_sel_END (1)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_sel_START (2)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_sel_END (3)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_os_sel_START (4)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_os_sel_END (4)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_dt_sel_START (5)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_dt_sel_END (5)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_mos_sel_START (6)
#define SOC_SMART_BUCK0_CTRL2_buck0_cs_mos_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck0_ocp_n_sel : 2;
        unsigned char buck0_ocp_new_old_sel : 1;
        unsigned char buck0_ccc_sel : 2;
        unsigned char buck0_ccm_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_n_sel_START (1)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_n_sel_END (2)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_new_old_sel_START (3)
#define SOC_SMART_BUCK0_CTRL3_buck0_ocp_new_old_sel_END (3)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccc_sel_START (4)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccc_sel_END (5)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccm_sel_START (6)
#define SOC_SMART_BUCK0_CTRL3_buck0_ccm_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_ocp_sel : 4;
        unsigned char buck0_ocp_tran_enhanced : 1;
        unsigned char buck0_nmos_ocp : 1;
        unsigned char buck0_ocp_p_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_sel_START (0)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_sel_END (3)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_tran_enhanced_START (4)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_tran_enhanced_END (4)
#define SOC_SMART_BUCK0_CTRL4_buck0_nmos_ocp_START (5)
#define SOC_SMART_BUCK0_CTRL4_buck0_nmos_ocp_END (5)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_p_sel_START (6)
#define SOC_SMART_BUCK0_CTRL4_buck0_ocp_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck0_new_dmd_sel : 4;
        unsigned char buck0_dmd_en : 1;
        unsigned char buck0_ocp_shield : 1;
        unsigned char buck0_ocp_delay_sel : 1;
    } reg;
} SOC_SMART_BUCK0_CTRL5_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL5_buck0_new_dmd_sel_START (1)
#define SOC_SMART_BUCK0_CTRL5_buck0_new_dmd_sel_END (4)
#define SOC_SMART_BUCK0_CTRL5_buck0_dmd_en_START (5)
#define SOC_SMART_BUCK0_CTRL5_buck0_dmd_en_END (5)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_shield_START (6)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_shield_END (6)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_delay_sel_START (7)
#define SOC_SMART_BUCK0_CTRL5_buck0_ocp_delay_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_dmd_sel : 2;
        unsigned char buck0_mos_sel : 2;
        unsigned char buck0_isc_sel : 2;
        unsigned char buck0_ipk_sel : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL6_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL6_buck0_dmd_sel_START (0)
#define SOC_SMART_BUCK0_CTRL6_buck0_dmd_sel_END (1)
#define SOC_SMART_BUCK0_CTRL6_buck0_mos_sel_START (2)
#define SOC_SMART_BUCK0_CTRL6_buck0_mos_sel_END (3)
#define SOC_SMART_BUCK0_CTRL6_buck0_isc_sel_START (4)
#define SOC_SMART_BUCK0_CTRL6_buck0_isc_sel_END (5)
#define SOC_SMART_BUCK0_CTRL6_buck0_ipk_sel_START (6)
#define SOC_SMART_BUCK0_CTRL6_buck0_ipk_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_l_sel : 1;
        unsigned char buck0_slope_gen : 3;
        unsigned char buck0_sc_sel : 2;
        unsigned char buck0_dmd_shield_n : 1;
        unsigned char buck0_dmd_clamp : 1;
    } reg;
} SOC_SMART_BUCK0_CTRL7_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL7_buck0_l_sel_START (0)
#define SOC_SMART_BUCK0_CTRL7_buck0_l_sel_END (0)
#define SOC_SMART_BUCK0_CTRL7_buck0_slope_gen_START (1)
#define SOC_SMART_BUCK0_CTRL7_buck0_slope_gen_END (3)
#define SOC_SMART_BUCK0_CTRL7_buck0_sc_sel_START (4)
#define SOC_SMART_BUCK0_CTRL7_buck0_sc_sel_END (5)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_shield_n_START (6)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_shield_n_END (6)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_clamp_START (7)
#define SOC_SMART_BUCK0_CTRL7_buck0_dmd_clamp_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck0_ton_on : 2;
        unsigned char buck0_ton_off : 1;
        unsigned char buck0_clk_sel : 1;
        unsigned char buck0_ea_sel : 1;
        unsigned char buck0_slope_dc : 2;
    } reg;
} SOC_SMART_BUCK0_CTRL8_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_on_START (1)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_on_END (2)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_off_START (3)
#define SOC_SMART_BUCK0_CTRL8_buck0_ton_off_END (3)
#define SOC_SMART_BUCK0_CTRL8_buck0_clk_sel_START (4)
#define SOC_SMART_BUCK0_CTRL8_buck0_clk_sel_END (4)
#define SOC_SMART_BUCK0_CTRL8_buck0_ea_sel_START (5)
#define SOC_SMART_BUCK0_CTRL8_buck0_ea_sel_END (5)
#define SOC_SMART_BUCK0_CTRL8_buck0_slope_dc_START (6)
#define SOC_SMART_BUCK0_CTRL8_buck0_slope_dc_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_reserved0 : 8;
    } reg;
} SOC_SMART_BUCK0_CTRL9_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL9_buck0_reserved0_START (0)
#define SOC_SMART_BUCK0_CTRL9_buck0_reserved0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck0_reserved1 : 8;
    } reg;
} SOC_SMART_BUCK0_CTRL10_UNION;
#endif
#define SOC_SMART_BUCK0_CTRL10_buck0_reserved1_START (0)
#define SOC_SMART_BUCK0_CTRL10_buck0_reserved1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_ng_n_sel : 2;
        unsigned char buck1_ng_p_sel : 2;
        unsigned char buck1_pg_n_sel : 2;
        unsigned char buck1_pg_p_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL0_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_n_sel_START (0)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_n_sel_END (1)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_p_sel_START (2)
#define SOC_SMART_BUCK1_CTRL0_buck1_ng_p_sel_END (3)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_n_sel_START (4)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_n_sel_END (5)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_p_sel_START (6)
#define SOC_SMART_BUCK1_CTRL0_buck1_pg_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck1_cs_mode_sel : 1;
        unsigned char buck1_pdn_lx_det : 1;
        unsigned char buck1_pdn_lx_sel : 1;
        unsigned char buck1_ng_dt_sel : 1;
        unsigned char buck1_pg_dt_sel : 1;
        unsigned char buck1_dt_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL1_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL1_buck1_cs_mode_sel_START (1)
#define SOC_SMART_BUCK1_CTRL1_buck1_cs_mode_sel_END (1)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_det_START (2)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_det_END (2)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_sel_START (3)
#define SOC_SMART_BUCK1_CTRL1_buck1_pdn_lx_sel_END (3)
#define SOC_SMART_BUCK1_CTRL1_buck1_ng_dt_sel_START (4)
#define SOC_SMART_BUCK1_CTRL1_buck1_ng_dt_sel_END (4)
#define SOC_SMART_BUCK1_CTRL1_buck1_pg_dt_sel_START (5)
#define SOC_SMART_BUCK1_CTRL1_buck1_pg_dt_sel_END (5)
#define SOC_SMART_BUCK1_CTRL1_buck1_dt_sel_START (6)
#define SOC_SMART_BUCK1_CTRL1_buck1_dt_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_bt_sel : 2;
        unsigned char buck1_cs_sel : 2;
        unsigned char buck1_cs_os_sel : 1;
        unsigned char buck1_cs_dt_sel : 1;
        unsigned char buck1_cs_mos_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL2_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL2_buck1_bt_sel_START (0)
#define SOC_SMART_BUCK1_CTRL2_buck1_bt_sel_END (1)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_sel_START (2)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_sel_END (3)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_os_sel_START (4)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_os_sel_END (4)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_dt_sel_START (5)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_dt_sel_END (5)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_mos_sel_START (6)
#define SOC_SMART_BUCK1_CTRL2_buck1_cs_mos_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck1_ocp_n_sel : 2;
        unsigned char buck1_ocp_new_old_sel : 1;
        unsigned char buck1_ccc_sel : 2;
        unsigned char buck1_ccm_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL3_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_n_sel_START (1)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_n_sel_END (2)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_new_old_sel_START (3)
#define SOC_SMART_BUCK1_CTRL3_buck1_ocp_new_old_sel_END (3)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccc_sel_START (4)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccc_sel_END (5)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccm_sel_START (6)
#define SOC_SMART_BUCK1_CTRL3_buck1_ccm_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_ocp_sel : 4;
        unsigned char buck1_ocp_tran_enhanced : 1;
        unsigned char buck1_nmos_ocp : 1;
        unsigned char buck1_ocp_p_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL4_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_sel_START (0)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_sel_END (3)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_tran_enhanced_START (4)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_tran_enhanced_END (4)
#define SOC_SMART_BUCK1_CTRL4_buck1_nmos_ocp_START (5)
#define SOC_SMART_BUCK1_CTRL4_buck1_nmos_ocp_END (5)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_p_sel_START (6)
#define SOC_SMART_BUCK1_CTRL4_buck1_ocp_p_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck1_new_dmd_sel : 4;
        unsigned char buck1_dmd_en : 1;
        unsigned char buck1_ocp_shield : 1;
        unsigned char buck1_ocp_delay_sel : 1;
    } reg;
} SOC_SMART_BUCK1_CTRL5_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL5_buck1_new_dmd_sel_START (1)
#define SOC_SMART_BUCK1_CTRL5_buck1_new_dmd_sel_END (4)
#define SOC_SMART_BUCK1_CTRL5_buck1_dmd_en_START (5)
#define SOC_SMART_BUCK1_CTRL5_buck1_dmd_en_END (5)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_shield_START (6)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_shield_END (6)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_delay_sel_START (7)
#define SOC_SMART_BUCK1_CTRL5_buck1_ocp_delay_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_dmd_sel : 2;
        unsigned char buck1_mos_sel : 2;
        unsigned char buck1_isc_sel : 2;
        unsigned char buck1_ipk_sel : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL6_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL6_buck1_dmd_sel_START (0)
#define SOC_SMART_BUCK1_CTRL6_buck1_dmd_sel_END (1)
#define SOC_SMART_BUCK1_CTRL6_buck1_mos_sel_START (2)
#define SOC_SMART_BUCK1_CTRL6_buck1_mos_sel_END (3)
#define SOC_SMART_BUCK1_CTRL6_buck1_isc_sel_START (4)
#define SOC_SMART_BUCK1_CTRL6_buck1_isc_sel_END (5)
#define SOC_SMART_BUCK1_CTRL6_buck1_ipk_sel_START (6)
#define SOC_SMART_BUCK1_CTRL6_buck1_ipk_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_l_sel : 1;
        unsigned char buck1_slope_gen : 3;
        unsigned char buck1_sc_sel : 2;
        unsigned char buck1_dmd_shield_n : 1;
        unsigned char buck1_dmd_clamp : 1;
    } reg;
} SOC_SMART_BUCK1_CTRL7_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL7_buck1_l_sel_START (0)
#define SOC_SMART_BUCK1_CTRL7_buck1_l_sel_END (0)
#define SOC_SMART_BUCK1_CTRL7_buck1_slope_gen_START (1)
#define SOC_SMART_BUCK1_CTRL7_buck1_slope_gen_END (3)
#define SOC_SMART_BUCK1_CTRL7_buck1_sc_sel_START (4)
#define SOC_SMART_BUCK1_CTRL7_buck1_sc_sel_END (5)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_shield_n_START (6)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_shield_n_END (6)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_clamp_START (7)
#define SOC_SMART_BUCK1_CTRL7_buck1_dmd_clamp_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char reserved : 1;
        unsigned char buck1_ton_on : 2;
        unsigned char buck1_ton_off : 1;
        unsigned char buck1_clk_sel : 1;
        unsigned char buck1_ea_sel : 1;
        unsigned char buck1_slope_dc : 2;
    } reg;
} SOC_SMART_BUCK1_CTRL8_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_on_START (1)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_on_END (2)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_off_START (3)
#define SOC_SMART_BUCK1_CTRL8_buck1_ton_off_END (3)
#define SOC_SMART_BUCK1_CTRL8_buck1_clk_sel_START (4)
#define SOC_SMART_BUCK1_CTRL8_buck1_clk_sel_END (4)
#define SOC_SMART_BUCK1_CTRL8_buck1_ea_sel_START (5)
#define SOC_SMART_BUCK1_CTRL8_buck1_ea_sel_END (5)
#define SOC_SMART_BUCK1_CTRL8_buck1_slope_dc_START (6)
#define SOC_SMART_BUCK1_CTRL8_buck1_slope_dc_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_reserved0 : 8;
    } reg;
} SOC_SMART_BUCK1_CTRL9_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL9_buck1_reserved0_START (0)
#define SOC_SMART_BUCK1_CTRL9_buck1_reserved0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck1_reserved1 : 8;
    } reg;
} SOC_SMART_BUCK1_CTRL10_UNION;
#endif
#define SOC_SMART_BUCK1_CTRL10_buck1_reserved1_START (0)
#define SOC_SMART_BUCK1_CTRL10_buck1_reserved1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ldo22_ocp_vos : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_LDO22_OCP_VOS_UNION;
#endif
#define SOC_SMART_LDO22_OCP_VOS_ldo22_ocp_vos_START (0)
#define SOC_SMART_LDO22_OCP_VOS_ldo22_ocp_vos_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char vset_ldo_buck : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_VSET_LDO_BUCK_UNION;
#endif
#define SOC_SMART_VSET_LDO_BUCK_vset_ldo_buck_START (0)
#define SOC_SMART_VSET_LDO_BUCK_vset_ldo_buck_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_ldo_en_cfg : 1;
        unsigned char xo_ldo_en_sel : 1;
        unsigned char xo_ldo_res_reg : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_XO_LDO_CTRL_UNION;
#endif
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_cfg_START (0)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_cfg_END (0)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_sel_START (1)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_en_sel_END (1)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_res_reg_START (2)
#define SOC_SMART_XO_LDO_CTRL_xo_ldo_res_reg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char buck01_mode_ctrl : 1;
        unsigned char buck01_phase_sel : 1;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_BUCK01_MOD_CTRL_UNION;
#endif
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_mode_ctrl_START (0)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_mode_ctrl_END (0)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_phase_sel_START (1)
#define SOC_SMART_BUCK01_MOD_CTRL_buck01_phase_sel_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char sensor_clk_en : 1;
        unsigned char sensor_clk_div_num : 2;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_SENSOR_CLK_CTRL_UNION;
#endif
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_en_START (0)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_en_END (0)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_div_num_START (1)
#define SOC_SMART_SENSOR_CLK_CTRL_sensor_clk_div_num_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ck_19m2_clk_en : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_CK_19M2_CTRL_UNION;
#endif
#define SOC_SMART_CK_19M2_CTRL_ck_19m2_clk_en_START (0)
#define SOC_SMART_CK_19M2_CTRL_ck_19m2_clk_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char extbuck_mod_sel : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_EXTBUCK_MOD_SEL_UNION;
#endif
#define SOC_SMART_EXTBUCK_MOD_SEL_extbuck_mod_sel_START (0)
#define SOC_SMART_EXTBUCK_MOD_SEL_extbuck_mod_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_tri_cap : 3;
        unsigned char xo_sys_phase : 1;
        unsigned char xo_c1_cap : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_XO_WAVE_CTRL_UNION;
#endif
#define SOC_SMART_XO_WAVE_CTRL_xo_tri_cap_START (0)
#define SOC_SMART_XO_WAVE_CTRL_xo_tri_cap_END (2)
#define SOC_SMART_XO_WAVE_CTRL_xo_sys_phase_START (3)
#define SOC_SMART_XO_WAVE_CTRL_xo_sys_phase_END (3)
#define SOC_SMART_XO_WAVE_CTRL_xo_c1_cap_START (4)
#define SOC_SMART_XO_WAVE_CTRL_xo_c1_cap_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_otmp_d1r : 1;
        unsigned char np_hreset_n_f : 1;
        unsigned char np_vsys_2p5_r : 1;
        unsigned char np_vsys_uv_d3r : 1;
        unsigned char np_vsys_6p0_d200ur : 1;
        unsigned char np_pwron_d4sr : 1;
        unsigned char np_pwron_d20f : 1;
        unsigned char np_pwron_d20r : 1;
    } reg;
} SOC_SMART_NP_IRQ1_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ1_RECORD_np_otmp_d1r_START (0)
#define SOC_SMART_NP_IRQ1_RECORD_np_otmp_d1r_END (0)
#define SOC_SMART_NP_IRQ1_RECORD_np_hreset_n_f_START (1)
#define SOC_SMART_NP_IRQ1_RECORD_np_hreset_n_f_END (1)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_2p5_r_START (2)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_2p5_r_END (2)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_uv_d3r_START (3)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_uv_d3r_END (3)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_6p0_d200ur_START (4)
#define SOC_SMART_NP_IRQ1_RECORD_np_vsys_6p0_d200ur_END (4)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d4sr_START (5)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d4sr_END (5)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20f_START (6)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20f_END (6)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20r_START (7)
#define SOC_SMART_NP_IRQ1_RECORD_np_pwron_d20r_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_vbat_vcoin_sel : 1;
        unsigned char np_vbus_det_3p6_d150r : 1;
        unsigned char np_vbus_det_3p6_d20f : 1;
        unsigned char np_vbus_det_3p6_d20r : 1;
        unsigned char np_pwron_restart : 1;
        unsigned char np_pwron_dnsr : 1;
        unsigned char np_pwron_d500r : 1;
        unsigned char np_otmp150_d1r : 1;
    } reg;
} SOC_SMART_NP_IRQ2_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ2_RECORD_np_vbat_vcoin_sel_START (0)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbat_vcoin_sel_END (0)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d150r_START (1)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d150r_END (1)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20f_START (2)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20f_END (2)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20r_START (3)
#define SOC_SMART_NP_IRQ2_RECORD_np_vbus_det_3p6_d20r_END (3)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_restart_START (4)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_restart_END (4)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_dnsr_START (5)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_dnsr_END (5)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_d500r_START (6)
#define SOC_SMART_NP_IRQ2_RECORD_np_pwron_d500r_END (6)
#define SOC_SMART_NP_IRQ2_RECORD_np_otmp150_d1r_START (7)
#define SOC_SMART_NP_IRQ2_RECORD_np_otmp150_d1r_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_tcxo_clk_sel_r : 1;
        unsigned char np_tcxo_clk_sel_f : 1;
        unsigned char np_dcxo_clk_sel_r : 1;
        unsigned char np_dcxo_clk_sel_f : 1;
        unsigned char np_alarm_on : 1;
        unsigned char np_pwr_hold_2d_pwrn : 1;
        unsigned char np_pwr_hold_2d_pwrd : 1;
        unsigned char np_pdns_rst_sel : 1;
    } reg;
} SOC_SMART_NP_IRQ3_RECORD_UNION;
#endif
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_r_START (0)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_r_END (0)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_f_START (1)
#define SOC_SMART_NP_IRQ3_RECORD_np_tcxo_clk_sel_f_END (1)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_r_START (2)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_r_END (2)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_f_START (3)
#define SOC_SMART_NP_IRQ3_RECORD_np_dcxo_clk_sel_f_END (3)
#define SOC_SMART_NP_IRQ3_RECORD_np_alarm_on_START (4)
#define SOC_SMART_NP_IRQ3_RECORD_np_alarm_on_END (4)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrn_START (5)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrn_END (5)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrd_START (6)
#define SOC_SMART_NP_IRQ3_RECORD_np_pwr_hold_2d_pwrd_END (6)
#define SOC_SMART_NP_IRQ3_RECORD_np_pdns_rst_sel_START (7)
#define SOC_SMART_NP_IRQ3_RECORD_np_pdns_rst_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_scp_buck01 : 1;
        unsigned char np_scp_buck2 : 1;
        unsigned char np_scp_buck3 : 1;
        unsigned char np_scp_buck4 : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_NP_SCP_RECORD1_UNION;
#endif
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck01_START (0)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck01_END (0)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck2_START (1)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck2_END (1)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck3_START (2)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck3_END (2)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck4_START (3)
#define SOC_SMART_NP_SCP_RECORD1_np_scp_buck4_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_ocp_buck1 : 1;
        unsigned char np_ocp_buck2 : 1;
        unsigned char np_ocp_buck3 : 1;
        unsigned char np_ocp_buck4 : 1;
        unsigned char np_ocp_buck0 : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_NP_OCP_RECORD1_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck1_START (0)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck1_END (0)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck2_START (1)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck2_END (1)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck3_START (2)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck3_END (2)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck4_START (3)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck4_END (3)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck0_START (4)
#define SOC_SMART_NP_OCP_RECORD1_np_ocp_buck0_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_ocp_ldo1 : 1;
        unsigned char np_ocp_ldo2 : 1;
        unsigned char np_ocp_ldo3 : 1;
        unsigned char np_ocp_ldo4 : 1;
        unsigned char np_ocp_ldo5 : 1;
        unsigned char np_ocp_ldo6 : 1;
        unsigned char np_ocp_ldo7 : 1;
        unsigned char np_ocp_ldo8 : 1;
    } reg;
} SOC_SMART_NP_OCP_RECORD2_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo1_START (0)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo1_END (0)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo2_START (1)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo2_END (1)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo3_START (2)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo3_END (2)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo4_START (3)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo4_END (3)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo5_START (4)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo5_END (4)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo6_START (5)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo6_END (5)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo7_START (6)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo7_END (6)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo8_START (7)
#define SOC_SMART_NP_OCP_RECORD2_np_ocp_ldo8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_ocp_ldo9 : 1;
        unsigned char np_ocp_ldo10 : 1;
        unsigned char np_ocp_ldo11 : 1;
        unsigned char np_ocp_ldo12 : 1;
        unsigned char np_ocp_ldo13 : 1;
        unsigned char np_ocp_ldo14 : 1;
        unsigned char np_ocp_ldo15 : 1;
        unsigned char np_ocp_ldo16 : 1;
    } reg;
} SOC_SMART_NP_OCP_RECORD3_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo9_START (0)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo9_END (0)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo10_START (1)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo10_END (1)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo11_START (2)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo11_END (2)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo12_START (3)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo12_END (3)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo13_START (4)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo13_END (4)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo14_START (5)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo14_END (5)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo15_START (6)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo15_END (6)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo16_START (7)
#define SOC_SMART_NP_OCP_RECORD3_np_ocp_ldo16_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_ocp_ldo17 : 1;
        unsigned char np_ocp_ldo18 : 1;
        unsigned char np_ocp_ldo19 : 1;
        unsigned char np_ocp_ldo20 : 1;
        unsigned char np_ocp_ldo21 : 1;
        unsigned char np_ocp_ldo22 : 1;
        unsigned char reserved : 2;
    } reg;
} SOC_SMART_NP_OCP_RECORD4_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo17_START (0)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo17_END (0)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo18_START (1)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo18_END (1)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo19_START (2)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo19_END (2)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo20_START (3)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo20_END (3)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo21_START (4)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo21_END (4)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo22_START (5)
#define SOC_SMART_NP_OCP_RECORD4_np_ocp_ldo22_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_ocp_lvs2 : 1;
        unsigned char np_ocp_classd : 1;
        unsigned char np_scp_pmua : 1;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_NP_OCP_RECORD5_UNION;
#endif
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_lvs2_START (0)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_lvs2_END (0)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_classd_START (1)
#define SOC_SMART_NP_OCP_RECORD5_np_ocp_classd_END (1)
#define SOC_SMART_NP_OCP_RECORD5_np_scp_pmua_START (2)
#define SOC_SMART_NP_OCP_RECORD5_np_scp_pmua_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char trim_c1fix : 8;
    } reg;
} SOC_SMART_CLK_TOP2_UNION;
#endif
#define SOC_SMART_CLK_TOP2_trim_c1fix_START (0)
#define SOC_SMART_CLK_TOP2_trim_c1fix_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcdr0 : 8;
    } reg;
} SOC_SMART_RTCDR0_UNION;
#endif
#define SOC_SMART_RTCDR0_rtcdr0_START (0)
#define SOC_SMART_RTCDR0_rtcdr0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcdr1 : 8;
    } reg;
} SOC_SMART_RTCDR1_UNION;
#endif
#define SOC_SMART_RTCDR1_rtcdr1_START (0)
#define SOC_SMART_RTCDR1_rtcdr1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcdr2 : 8;
    } reg;
} SOC_SMART_RTCDR2_UNION;
#endif
#define SOC_SMART_RTCDR2_rtcdr2_START (0)
#define SOC_SMART_RTCDR2_rtcdr2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcdr3 : 8;
    } reg;
} SOC_SMART_RTCDR3_UNION;
#endif
#define SOC_SMART_RTCDR3_rtcdr3_START (0)
#define SOC_SMART_RTCDR3_rtcdr3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcmr0 : 8;
    } reg;
} SOC_SMART_RTCMR0_UNION;
#endif
#define SOC_SMART_RTCMR0_rtcmr0_START (0)
#define SOC_SMART_RTCMR0_rtcmr0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcmr1 : 8;
    } reg;
} SOC_SMART_RTCMR1_UNION;
#endif
#define SOC_SMART_RTCMR1_rtcmr1_START (0)
#define SOC_SMART_RTCMR1_rtcmr1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcmr2 : 8;
    } reg;
} SOC_SMART_RTCMR2_UNION;
#endif
#define SOC_SMART_RTCMR2_rtcmr2_START (0)
#define SOC_SMART_RTCMR2_rtcmr2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcmr3 : 8;
    } reg;
} SOC_SMART_RTCMR3_UNION;
#endif
#define SOC_SMART_RTCMR3_rtcmr3_START (0)
#define SOC_SMART_RTCMR3_rtcmr3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcclr0 : 8;
    } reg;
} SOC_SMART_RTCLR0_UNION;
#endif
#define SOC_SMART_RTCLR0_rtcclr0_START (0)
#define SOC_SMART_RTCLR0_rtcclr0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcclr1 : 8;
    } reg;
} SOC_SMART_RTCLR1_UNION;
#endif
#define SOC_SMART_RTCLR1_rtcclr1_START (0)
#define SOC_SMART_RTCLR1_rtcclr1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcclr2 : 8;
    } reg;
} SOC_SMART_RTCLR2_UNION;
#endif
#define SOC_SMART_RTCLR2_rtcclr2_START (0)
#define SOC_SMART_RTCLR2_rtcclr2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtcclr3 : 8;
    } reg;
} SOC_SMART_RTCLR3_UNION;
#endif
#define SOC_SMART_RTCLR3_rtcclr3_START (0)
#define SOC_SMART_RTCLR3_rtcclr3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtccr : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_RTCCTRL_UNION;
#endif
#define SOC_SMART_RTCCTRL_rtccr_START (0)
#define SOC_SMART_RTCCTRL_rtccr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob0 : 8;
    } reg;
} SOC_SMART_OTP_PDOB0_UNION;
#endif
#define SOC_SMART_OTP_PDOB0_otp_pdob0_START (0)
#define SOC_SMART_OTP_PDOB0_otp_pdob0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob1 : 8;
    } reg;
} SOC_SMART_OTP_PDOB1_UNION;
#endif
#define SOC_SMART_OTP_PDOB1_otp_pdob1_START (0)
#define SOC_SMART_OTP_PDOB1_otp_pdob1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob2 : 8;
    } reg;
} SOC_SMART_OTP_PDOB2_UNION;
#endif
#define SOC_SMART_OTP_PDOB2_otp_pdob2_START (0)
#define SOC_SMART_OTP_PDOB2_otp_pdob2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char otp_pdob3 : 8;
    } reg;
} SOC_SMART_OTP_PDOB3_UNION;
#endif
#define SOC_SMART_OTP_PDOB3_otp_pdob3_START (0)
#define SOC_SMART_OTP_PDOB3_otp_pdob3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char crc_value0 : 8;
    } reg;
} SOC_SMART_CRC_VALUE0_UNION;
#endif
#define SOC_SMART_CRC_VALUE0_crc_value0_START (0)
#define SOC_SMART_CRC_VALUE0_crc_value0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char crc_value1 : 8;
    } reg;
} SOC_SMART_CRC_VALUE1_UNION;
#endif
#define SOC_SMART_CRC_VALUE1_crc_value1_START (0)
#define SOC_SMART_CRC_VALUE1_crc_value1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char crc_value2 : 5;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_CRC_VALUE2_UNION;
#endif
#define SOC_SMART_CRC_VALUE2_crc_value2_START (0)
#define SOC_SMART_CRC_VALUE2_crc_value2_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char pdns_time_sel : 3;
        unsigned char pdns_mk : 1;
        unsigned char pdns_pd_sel : 1;
        unsigned char vsys_uv_adj : 1;
        unsigned char nopwr_rc_off : 1;
        unsigned char pdns_rst_sel : 1;
    } reg;
} SOC_SMART_NP_REG_ADJ1_UNION;
#endif
#define SOC_SMART_NP_REG_ADJ1_pdns_time_sel_START (0)
#define SOC_SMART_NP_REG_ADJ1_pdns_time_sel_END (2)
#define SOC_SMART_NP_REG_ADJ1_pdns_mk_START (3)
#define SOC_SMART_NP_REG_ADJ1_pdns_mk_END (3)
#define SOC_SMART_NP_REG_ADJ1_pdns_pd_sel_START (4)
#define SOC_SMART_NP_REG_ADJ1_pdns_pd_sel_END (4)
#define SOC_SMART_NP_REG_ADJ1_vsys_uv_adj_START (5)
#define SOC_SMART_NP_REG_ADJ1_vsys_uv_adj_END (5)
#define SOC_SMART_NP_REG_ADJ1_nopwr_rc_off_START (6)
#define SOC_SMART_NP_REG_ADJ1_nopwr_rc_off_END (6)
#define SOC_SMART_NP_REG_ADJ1_pdns_rst_sel_START (7)
#define SOC_SMART_NP_REG_ADJ1_pdns_rst_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char lvs_offset : 2;
        unsigned char buffer_vos_trim : 3;
        unsigned char dac_buffer_en : 1;
        unsigned char ref_res_sel_int : 1;
        unsigned char pmua_short_mk : 1;
    } reg;
} SOC_SMART_NP_REG_ADJ2_UNION;
#endif
#define SOC_SMART_NP_REG_ADJ2_lvs_offset_START (0)
#define SOC_SMART_NP_REG_ADJ2_lvs_offset_END (1)
#define SOC_SMART_NP_REG_ADJ2_buffer_vos_trim_START (2)
#define SOC_SMART_NP_REG_ADJ2_buffer_vos_trim_END (4)
#define SOC_SMART_NP_REG_ADJ2_dac_buffer_en_START (5)
#define SOC_SMART_NP_REG_ADJ2_dac_buffer_en_END (5)
#define SOC_SMART_NP_REG_ADJ2_ref_res_sel_int_START (6)
#define SOC_SMART_NP_REG_ADJ2_ref_res_sel_int_END (6)
#define SOC_SMART_NP_REG_ADJ2_pmua_short_mk_START (7)
#define SOC_SMART_NP_REG_ADJ2_pmua_short_mk_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char nopwr_vcoinsl : 2;
        unsigned char nopwr_en_backup_chg : 1;
        unsigned char nopwr_backup_chg_sel : 1;
        unsigned char codec_reg_mask : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_NP_REG_CHG_UNION;
#endif
#define SOC_SMART_NP_REG_CHG_nopwr_vcoinsl_START (0)
#define SOC_SMART_NP_REG_CHG_nopwr_vcoinsl_END (1)
#define SOC_SMART_NP_REG_CHG_nopwr_en_backup_chg_START (2)
#define SOC_SMART_NP_REG_CHG_nopwr_en_backup_chg_END (2)
#define SOC_SMART_NP_REG_CHG_nopwr_backup_chg_sel_START (3)
#define SOC_SMART_NP_REG_CHG_nopwr_backup_chg_sel_END (3)
#define SOC_SMART_NP_REG_CHG_codec_reg_mask_START (4)
#define SOC_SMART_NP_REG_CHG_codec_reg_mask_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_clk_step_adj1 : 8;
    } reg;
} SOC_SMART_RTC_ADJ1_UNION;
#endif
#define SOC_SMART_RTC_ADJ1_rtc_clk_step_adj1_START (0)
#define SOC_SMART_RTC_ADJ1_rtc_clk_step_adj1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_clk_step_adj2 : 8;
    } reg;
} SOC_SMART_RTC_ADJ2_UNION;
#endif
#define SOC_SMART_RTC_ADJ2_rtc_clk_step_adj2_START (0)
#define SOC_SMART_RTC_ADJ2_rtc_clk_step_adj2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_cali_thresold1 : 8;
    } reg;
} SOC_SMART_XO_THRESOLD1_UNION;
#endif
#define SOC_SMART_XO_THRESOLD1_xo_cali_thresold1_START (0)
#define SOC_SMART_XO_THRESOLD1_xo_cali_thresold1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_cali_thresold2 : 8;
    } reg;
} SOC_SMART_XO_THRESOLD2_UNION;
#endif
#define SOC_SMART_XO_THRESOLD2_xo_cali_thresold2_START (0)
#define SOC_SMART_XO_THRESOLD2_xo_cali_thresold2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved0 : 8;
    } reg;
} SOC_SMART_NP_RSVED_ANA0_UNION;
#endif
#define SOC_SMART_NP_RSVED_ANA0_no_pwr_resved0_START (0)
#define SOC_SMART_NP_RSVED_ANA0_no_pwr_resved0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved1 : 8;
    } reg;
} SOC_SMART_NP_RSVED_ANA1_UNION;
#endif
#define SOC_SMART_NP_RSVED_ANA1_no_pwr_resved1_START (0)
#define SOC_SMART_NP_RSVED_ANA1_no_pwr_resved1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved2 : 8;
    } reg;
} SOC_SMART_NP_RSVED0_UNION;
#endif
#define SOC_SMART_NP_RSVED0_no_pwr_resved2_START (0)
#define SOC_SMART_NP_RSVED0_no_pwr_resved2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved3 : 8;
    } reg;
} SOC_SMART_NP_RSVED1_UNION;
#endif
#define SOC_SMART_NP_RSVED1_no_pwr_resved3_START (0)
#define SOC_SMART_NP_RSVED1_no_pwr_resved3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved4 : 8;
    } reg;
} SOC_SMART_NP_RSVED2_UNION;
#endif
#define SOC_SMART_NP_RSVED2_no_pwr_resved4_START (0)
#define SOC_SMART_NP_RSVED2_no_pwr_resved4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved5 : 8;
    } reg;
} SOC_SMART_NP_RSVED3_UNION;
#endif
#define SOC_SMART_NP_RSVED3_no_pwr_resved5_START (0)
#define SOC_SMART_NP_RSVED3_no_pwr_resved5_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved6 : 8;
    } reg;
} SOC_SMART_NP_RSVED4_UNION;
#endif
#define SOC_SMART_NP_RSVED4_no_pwr_resved6_START (0)
#define SOC_SMART_NP_RSVED4_no_pwr_resved6_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved7 : 8;
    } reg;
} SOC_SMART_NP_RSVED5_UNION;
#endif
#define SOC_SMART_NP_RSVED5_no_pwr_resved7_START (0)
#define SOC_SMART_NP_RSVED5_no_pwr_resved7_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved8 : 8;
    } reg;
} SOC_SMART_NP_RSVED6_UNION;
#endif
#define SOC_SMART_NP_RSVED6_no_pwr_resved8_START (0)
#define SOC_SMART_NP_RSVED6_no_pwr_resved8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char no_pwr_resved9 : 8;
    } reg;
} SOC_SMART_NP_RSVED7_UNION;
#endif
#define SOC_SMART_NP_RSVED7_no_pwr_resved9_START (0)
#define SOC_SMART_NP_RSVED7_no_pwr_resved9_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrup_timer0 : 8;
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER0_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER0_rtc_pwrup_timer0_START (0)
#define SOC_SMART_RTC_PWRUP_TIMER0_rtc_pwrup_timer0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrup_timer1 : 8;
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER1_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER1_rtc_pwrup_timer1_START (0)
#define SOC_SMART_RTC_PWRUP_TIMER1_rtc_pwrup_timer1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrup_timer2 : 8;
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER2_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER2_rtc_pwrup_timer2_START (0)
#define SOC_SMART_RTC_PWRUP_TIMER2_rtc_pwrup_timer2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrup_timer3 : 8;
    } reg;
} SOC_SMART_RTC_PWRUP_TIMER3_UNION;
#endif
#define SOC_SMART_RTC_PWRUP_TIMER3_rtc_pwrup_timer3_START (0)
#define SOC_SMART_RTC_PWRUP_TIMER3_rtc_pwrup_timer3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrdown_timer0 : 8;
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER0_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER0_rtc_pwrdown_timer0_START (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER0_rtc_pwrdown_timer0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrdown_timer1 : 8;
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER1_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER1_rtc_pwrdown_timer1_START (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER1_rtc_pwrdown_timer1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrdown_timer2 : 8;
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER2_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER2_rtc_pwrdown_timer2_START (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER2_rtc_pwrdown_timer2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char rtc_pwrdown_timer3 : 8;
    } reg;
} SOC_SMART_RTC_PWRDOWN_TIMER3_UNION;
#endif
#define SOC_SMART_RTC_PWRDOWN_TIMER3_rtc_pwrdown_timer3_START (0)
#define SOC_SMART_RTC_PWRDOWN_TIMER3_rtc_pwrdown_timer3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char nopwr_rc_off_en : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_NOPWR_RC_OFF_EN_UNION;
#endif
#define SOC_SMART_NOPWR_RC_OFF_EN_nopwr_rc_off_en_START (0)
#define SOC_SMART_NOPWR_RC_OFF_EN_nopwr_rc_off_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char xo_dig_clk0 : 1;
        unsigned char xo_dig_clk1 : 1;
        unsigned char xo_dig_clk2 : 1;
        unsigned char xo_dig_clk3 : 1;
        unsigned char xo_dig_clk4 : 1;
        unsigned char reserved : 3;
    } reg;
} SOC_SMART_XO_DIG_CLK_UNION;
#endif
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk0_START (0)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk0_END (0)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk1_START (1)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk1_END (1)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk2_START (2)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk2_END (2)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk3_START (3)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk3_END (3)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk4_START (4)
#define SOC_SMART_XO_DIG_CLK_xo_dig_clk4_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char smpl_open_en : 1;
        unsigned char smpl_time_sel : 2;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_SMPL_OPEN_EN_UNION;
#endif
#define SOC_SMART_SMPL_OPEN_EN_smpl_open_en_START (0)
#define SOC_SMART_SMPL_OPEN_EN_smpl_open_en_END (0)
#define SOC_SMART_SMPL_OPEN_EN_smpl_time_sel_START (1)
#define SOC_SMART_SMPL_OPEN_EN_smpl_time_sel_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char pwr_hold_2d_deb : 2;
        unsigned char reserved : 6;
    } reg;
} SOC_SMART_PWR_HOLD_2D_DEB_UNION;
#endif
#define SOC_SMART_PWR_HOLD_2D_DEB_pwr_hold_2d_deb_START (0)
#define SOC_SMART_PWR_HOLD_2D_DEB_pwr_hold_2d_deb_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char ck19m_600_586_en : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_CK19M2_600_586_EN_UNION;
#endif
#define SOC_SMART_CK19M2_600_586_EN_ck19m_600_586_en_START (0)
#define SOC_SMART_CK19M2_600_586_EN_ck19m_600_586_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char np_smpl_irq : 1;
        unsigned char reserved : 7;
    } reg;
} SOC_SMART_NP_SMPL_IRQ_UNION;
#endif
#define SOC_SMART_NP_SMPL_IRQ_np_smpl_irq_START (0)
#define SOC_SMART_NP_SMPL_IRQ_np_smpl_irq_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char trim_c2fix : 4;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_CLK_TOP6_UNION;
#endif
#define SOC_SMART_CLK_TOP6_trim_c2fix_START (0)
#define SOC_SMART_CLK_TOP6_trim_c2fix_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current_0 : 8;
    } reg;
} SOC_SMART_CURRENT_0_UNION;
#endif
#define SOC_SMART_CURRENT_0_current_0_START (0)
#define SOC_SMART_CURRENT_0_current_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current_1 : 8;
    } reg;
} SOC_SMART_CURRENT_1_UNION;
#endif
#define SOC_SMART_CURRENT_1_current_1_START (0)
#define SOC_SMART_CURRENT_1_current_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out_0 : 8;
    } reg;
} SOC_SMART_V_OUT_0_UNION;
#endif
#define SOC_SMART_V_OUT_0_v_out_0_START (0)
#define SOC_SMART_V_OUT_0_v_out_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out_1 : 8;
    } reg;
} SOC_SMART_V_OUT_1_UNION;
#endif
#define SOC_SMART_V_OUT_1_v_out_1_START (0)
#define SOC_SMART_V_OUT_1_v_out_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_ctrl : 3;
        unsigned char reflash_value_ctrl : 1;
        unsigned char eco_filter_time : 2;
        unsigned char calibration_ctrl : 1;
        unsigned char coul_ctrl_onoff_reg : 1;
    } reg;
} SOC_SMART_CLJ_CTRL_REG_UNION;
#endif
#define SOC_SMART_CLJ_CTRL_REG_eco_ctrl_START (0)
#define SOC_SMART_CLJ_CTRL_REG_eco_ctrl_END (2)
#define SOC_SMART_CLJ_CTRL_REG_reflash_value_ctrl_START (3)
#define SOC_SMART_CLJ_CTRL_REG_reflash_value_ctrl_END (3)
#define SOC_SMART_CLJ_CTRL_REG_eco_filter_time_START (4)
#define SOC_SMART_CLJ_CTRL_REG_eco_filter_time_END (5)
#define SOC_SMART_CLJ_CTRL_REG_calibration_ctrl_START (6)
#define SOC_SMART_CLJ_CTRL_REG_calibration_ctrl_END (6)
#define SOC_SMART_CLJ_CTRL_REG_coul_ctrl_onoff_reg_START (7)
#define SOC_SMART_CLJ_CTRL_REG_coul_ctrl_onoff_reg_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_reflash_time : 8;
    } reg;
} SOC_SMART_ECO_REFALSH_TIME_UNION;
#endif
#define SOC_SMART_ECO_REFALSH_TIME_eco_reflash_time_START (0)
#define SOC_SMART_ECO_REFALSH_TIME_eco_reflash_time_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_out0 : 8;
    } reg;
} SOC_SMART_CL_OUT0_UNION;
#endif
#define SOC_SMART_CL_OUT0_cl_out0_START (0)
#define SOC_SMART_CL_OUT0_cl_out0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_out1 : 8;
    } reg;
} SOC_SMART_CL_OUT1_UNION;
#endif
#define SOC_SMART_CL_OUT1_cl_out1_START (0)
#define SOC_SMART_CL_OUT1_cl_out1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_out2 : 8;
    } reg;
} SOC_SMART_CL_OUT2_UNION;
#endif
#define SOC_SMART_CL_OUT2_cl_out2_START (0)
#define SOC_SMART_CL_OUT2_cl_out2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_out3 : 8;
    } reg;
} SOC_SMART_CL_OUT3_UNION;
#endif
#define SOC_SMART_CL_OUT3_cl_out3_START (0)
#define SOC_SMART_CL_OUT3_cl_out3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_in0 : 8;
    } reg;
} SOC_SMART_CL_IN0_UNION;
#endif
#define SOC_SMART_CL_IN0_cl_in0_START (0)
#define SOC_SMART_CL_IN0_cl_in0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_in1 : 8;
    } reg;
} SOC_SMART_CL_IN1_UNION;
#endif
#define SOC_SMART_CL_IN1_cl_in1_START (0)
#define SOC_SMART_CL_IN1_cl_in1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_in2 : 8;
    } reg;
} SOC_SMART_CL_IN2_UNION;
#endif
#define SOC_SMART_CL_IN2_cl_in2_START (0)
#define SOC_SMART_CL_IN2_cl_in2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_in3 : 8;
    } reg;
} SOC_SMART_CL_IN3_UNION;
#endif
#define SOC_SMART_CL_IN3_cl_in3_START (0)
#define SOC_SMART_CL_IN3_cl_in3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char chg_timer0 : 8;
    } reg;
} SOC_SMART_CHG_TIMER0_UNION;
#endif
#define SOC_SMART_CHG_TIMER0_chg_timer0_START (0)
#define SOC_SMART_CHG_TIMER0_chg_timer0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char chg_timer1 : 8;
    } reg;
} SOC_SMART_CHG_TIMER1_UNION;
#endif
#define SOC_SMART_CHG_TIMER1_chg_timer1_START (0)
#define SOC_SMART_CHG_TIMER1_chg_timer1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char chg_timer2 : 8;
    } reg;
} SOC_SMART_CHG_TIMER2_UNION;
#endif
#define SOC_SMART_CHG_TIMER2_chg_timer2_START (0)
#define SOC_SMART_CHG_TIMER2_chg_timer2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char chg_timer3 : 8;
    } reg;
} SOC_SMART_CHG_TIMER3_UNION;
#endif
#define SOC_SMART_CHG_TIMER3_chg_timer3_START (0)
#define SOC_SMART_CHG_TIMER3_chg_timer3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char load_timer0 : 8;
    } reg;
} SOC_SMART_LOAD_TIMER0_UNION;
#endif
#define SOC_SMART_LOAD_TIMER0_load_timer0_START (0)
#define SOC_SMART_LOAD_TIMER0_load_timer0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char load_timer1 : 8;
    } reg;
} SOC_SMART_LOAD_TIMER1_UNION;
#endif
#define SOC_SMART_LOAD_TIMER1_load_timer1_START (0)
#define SOC_SMART_LOAD_TIMER1_load_timer1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char load_timer2 : 8;
    } reg;
} SOC_SMART_LOAD_TIMER2_UNION;
#endif
#define SOC_SMART_LOAD_TIMER2_load_timer2_START (0)
#define SOC_SMART_LOAD_TIMER2_load_timer2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char load_timer3 : 8;
    } reg;
} SOC_SMART_LOAD_TIMER3_UNION;
#endif
#define SOC_SMART_LOAD_TIMER3_load_timer3_START (0)
#define SOC_SMART_LOAD_TIMER3_load_timer3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int0 : 8;
    } reg;
} SOC_SMART_CL_INT0_UNION;
#endif
#define SOC_SMART_CL_INT0_cl_int0_START (0)
#define SOC_SMART_CL_INT0_cl_int0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int1 : 8;
    } reg;
} SOC_SMART_CL_INT1_UNION;
#endif
#define SOC_SMART_CL_INT1_cl_int1_START (0)
#define SOC_SMART_CL_INT1_cl_int1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int2 : 8;
    } reg;
} SOC_SMART_CL_INT2_UNION;
#endif
#define SOC_SMART_CL_INT2_cl_int2_START (0)
#define SOC_SMART_CL_INT2_cl_int2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cl_int3 : 8;
    } reg;
} SOC_SMART_CL_INT3_UNION;
#endif
#define SOC_SMART_CL_INT3_cl_int3_START (0)
#define SOC_SMART_CL_INT3_cl_int3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_int0 : 8;
    } reg;
} SOC_SMART_V_INT0_UNION;
#endif
#define SOC_SMART_V_INT0_v_int0_START (0)
#define SOC_SMART_V_INT0_v_int0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_int1 : 8;
    } reg;
} SOC_SMART_V_INT1_UNION;
#endif
#define SOC_SMART_V_INT1_v_int1_START (0)
#define SOC_SMART_V_INT1_v_int1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_current0 : 8;
    } reg;
} SOC_SMART_OFFSET_CURRENT0_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT0_offset_current0_START (0)
#define SOC_SMART_OFFSET_CURRENT0_offset_current0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_current1 : 8;
    } reg;
} SOC_SMART_OFFSET_CURRENT1_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT1_offset_current1_START (0)
#define SOC_SMART_OFFSET_CURRENT1_offset_current1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_voltage0 : 8;
    } reg;
} SOC_SMART_OFFSET_VOLTAGE0_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE0_offset_voltage0_START (0)
#define SOC_SMART_OFFSET_VOLTAGE0_offset_voltage0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_voltage1 : 8;
    } reg;
} SOC_SMART_OFFSET_VOLTAGE1_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE1_offset_voltage1_START (0)
#define SOC_SMART_OFFSET_VOLTAGE1_offset_voltage1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_ocv_data0 : 8;
    } reg;
} SOC_SMART_OCV_VOLTAGE0_UNION;
#endif
#define SOC_SMART_OCV_VOLTAGE0_v_ocv_data0_START (0)
#define SOC_SMART_OCV_VOLTAGE0_v_ocv_data0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_ocv_data1 : 8;
    } reg;
} SOC_SMART_OCV_VOLTAGE1_UNION;
#endif
#define SOC_SMART_OCV_VOLTAGE1_v_ocv_data1_START (0)
#define SOC_SMART_OCV_VOLTAGE1_v_ocv_data1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char i_ocv_data0 : 8;
    } reg;
} SOC_SMART_OCV_CURRENT0_UNION;
#endif
#define SOC_SMART_OCV_CURRENT0_i_ocv_data0_START (0)
#define SOC_SMART_OCV_CURRENT0_i_ocv_data0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char i_ocv_data1 : 8;
    } reg;
} SOC_SMART_OCV_CURRENT1_UNION;
#endif
#define SOC_SMART_OCV_CURRENT1_i_ocv_data1_START (0)
#define SOC_SMART_OCV_CURRENT1_i_ocv_data1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clin0 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLIN_0_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_0_eco_out_clin0_START (0)
#define SOC_SMART_ECO_OUT_CLIN_0_eco_out_clin0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clin1 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLIN_1_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_1_eco_out_clin1_START (0)
#define SOC_SMART_ECO_OUT_CLIN_1_eco_out_clin1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clin2 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLIN_2_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_2_eco_out_clin2_START (0)
#define SOC_SMART_ECO_OUT_CLIN_2_eco_out_clin2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clin3 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLIN_3_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLIN_3_eco_out_clin3_START (0)
#define SOC_SMART_ECO_OUT_CLIN_3_eco_out_clin3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clout0 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_0_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_0_eco_out_clout0_START (0)
#define SOC_SMART_ECO_OUT_CLOUT_0_eco_out_clout0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clout1 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_1_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_1_eco_out_clout1_START (0)
#define SOC_SMART_ECO_OUT_CLOUT_1_eco_out_clout1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clout2 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_2_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_2_eco_out_clout2_START (0)
#define SOC_SMART_ECO_OUT_CLOUT_2_eco_out_clout2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char eco_out_clout3 : 8;
    } reg;
} SOC_SMART_ECO_OUT_CLOUT_3_UNION;
#endif
#define SOC_SMART_ECO_OUT_CLOUT_3_eco_out_clout3_START (0)
#define SOC_SMART_ECO_OUT_CLOUT_3_eco_out_clout3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre0 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE0_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE0_v_out0_pre0_START (0)
#define SOC_SMART_V_OUT0_PRE0_v_out0_pre0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre0 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE0_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE0_v_out1_pre0_START (0)
#define SOC_SMART_V_OUT1_PRE0_v_out1_pre0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre1 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE1_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE1_v_out0_pre1_START (0)
#define SOC_SMART_V_OUT0_PRE1_v_out0_pre1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre1 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE1_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE1_v_out1_pre1_START (0)
#define SOC_SMART_V_OUT1_PRE1_v_out1_pre1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre2 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE2_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE2_v_out0_pre2_START (0)
#define SOC_SMART_V_OUT0_PRE2_v_out0_pre2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre2 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE2_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE2_v_out1_pre2_START (0)
#define SOC_SMART_V_OUT1_PRE2_v_out1_pre2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre3 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE3_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE3_v_out0_pre3_START (0)
#define SOC_SMART_V_OUT0_PRE3_v_out0_pre3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre3 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE3_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE3_v_out1_pre3_START (0)
#define SOC_SMART_V_OUT1_PRE3_v_out1_pre3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre4 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE4_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE4_v_out0_pre4_START (0)
#define SOC_SMART_V_OUT0_PRE4_v_out0_pre4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre4 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE4_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE4_v_out1_pre4_START (0)
#define SOC_SMART_V_OUT1_PRE4_v_out1_pre4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre5 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE5_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE5_v_out0_pre5_START (0)
#define SOC_SMART_V_OUT0_PRE5_v_out0_pre5_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre5 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE5_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE5_v_out1_pre5_START (0)
#define SOC_SMART_V_OUT1_PRE5_v_out1_pre5_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre6 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE6_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE6_v_out0_pre6_START (0)
#define SOC_SMART_V_OUT0_PRE6_v_out0_pre6_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre6 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE6_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE6_v_out1_pre6_START (0)
#define SOC_SMART_V_OUT1_PRE6_v_out1_pre6_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre7 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE7_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE7_v_out0_pre7_START (0)
#define SOC_SMART_V_OUT0_PRE7_v_out0_pre7_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre7 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE7_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE7_v_out1_pre7_START (0)
#define SOC_SMART_V_OUT1_PRE7_v_out1_pre7_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre8 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE8_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE8_v_out0_pre8_START (0)
#define SOC_SMART_V_OUT0_PRE8_v_out0_pre8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre8 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE8_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE8_v_out1_pre8_START (0)
#define SOC_SMART_V_OUT1_PRE8_v_out1_pre8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out0_pre9 : 8;
    } reg;
} SOC_SMART_V_OUT0_PRE9_UNION;
#endif
#define SOC_SMART_V_OUT0_PRE9_v_out0_pre9_START (0)
#define SOC_SMART_V_OUT0_PRE9_v_out0_pre9_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_out1_pre9 : 8;
    } reg;
} SOC_SMART_V_OUT1_PRE9_UNION;
#endif
#define SOC_SMART_V_OUT1_PRE9_v_out1_pre9_START (0)
#define SOC_SMART_V_OUT1_PRE9_v_out1_pre9_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre0 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE0_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE0_current0_pre0_START (0)
#define SOC_SMART_CURRENT0_PRE0_current0_pre0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre0 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE0_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE0_current1_pre0_START (0)
#define SOC_SMART_CURRENT1_PRE0_current1_pre0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre1 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE1_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE1_current0_pre1_START (0)
#define SOC_SMART_CURRENT0_PRE1_current0_pre1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre1 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE1_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE1_current1_pre1_START (0)
#define SOC_SMART_CURRENT1_PRE1_current1_pre1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre2 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE2_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE2_current0_pre2_START (0)
#define SOC_SMART_CURRENT0_PRE2_current0_pre2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre2 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE2_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE2_current1_pre2_START (0)
#define SOC_SMART_CURRENT1_PRE2_current1_pre2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre3 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE3_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE3_current0_pre3_START (0)
#define SOC_SMART_CURRENT0_PRE3_current0_pre3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre3 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE3_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE3_current1_pre3_START (0)
#define SOC_SMART_CURRENT1_PRE3_current1_pre3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre4 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE4_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE4_current0_pre4_START (0)
#define SOC_SMART_CURRENT0_PRE4_current0_pre4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre4 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE4_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE4_current1_pre4_START (0)
#define SOC_SMART_CURRENT1_PRE4_current1_pre4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre5 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE5_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE5_current0_pre5_START (0)
#define SOC_SMART_CURRENT0_PRE5_current0_pre5_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre5 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE5_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE5_current1_pre5_START (0)
#define SOC_SMART_CURRENT1_PRE5_current1_pre5_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre6 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE6_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE6_current0_pre6_START (0)
#define SOC_SMART_CURRENT0_PRE6_current0_pre6_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre6 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE6_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE6_current1_pre6_START (0)
#define SOC_SMART_CURRENT1_PRE6_current1_pre6_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre7 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE7_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE7_current0_pre7_START (0)
#define SOC_SMART_CURRENT0_PRE7_current0_pre7_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre7 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE7_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE7_current1_pre7_START (0)
#define SOC_SMART_CURRENT1_PRE7_current1_pre7_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre8 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE8_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE8_current0_pre8_START (0)
#define SOC_SMART_CURRENT0_PRE8_current0_pre8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre8 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE8_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE8_current1_pre8_START (0)
#define SOC_SMART_CURRENT1_PRE8_current1_pre8_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current0_pre9 : 8;
    } reg;
} SOC_SMART_CURRENT0_PRE9_UNION;
#endif
#define SOC_SMART_CURRENT0_PRE9_current0_pre9_START (0)
#define SOC_SMART_CURRENT0_PRE9_current0_pre9_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current1_pre9 : 8;
    } reg;
} SOC_SMART_CURRENT1_PRE9_UNION;
#endif
#define SOC_SMART_CURRENT1_PRE9_current1_pre9_START (0)
#define SOC_SMART_CURRENT1_PRE9_current1_pre9_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_current_mod_0 : 8;
    } reg;
} SOC_SMART_OFFSET_CURRENT_MOD_0_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT_MOD_0_offset_current_mod_0_START (0)
#define SOC_SMART_OFFSET_CURRENT_MOD_0_offset_current_mod_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_current_mod_1 : 8;
    } reg;
} SOC_SMART_OFFSET_CURRENT_MOD_1_UNION;
#endif
#define SOC_SMART_OFFSET_CURRENT_MOD_1_offset_current_mod_1_START (0)
#define SOC_SMART_OFFSET_CURRENT_MOD_1_offset_current_mod_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_voltage_mod_0 : 8;
    } reg;
} SOC_SMART_OFFSET_VOLTAGE_MOD_0_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_offset_voltage_mod_0_START (0)
#define SOC_SMART_OFFSET_VOLTAGE_MOD_0_offset_voltage_mod_0_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char offset_voltage_mod_1 : 8;
    } reg;
} SOC_SMART_OFFSET_VOLTAGE_MOD_1_UNION;
#endif
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_offset_voltage_mod_1_START (0)
#define SOC_SMART_OFFSET_VOLTAGE_MOD_1_offset_voltage_mod_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char clj_rw_inf1 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED1_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED1_clj_rw_inf1_START (0)
#define SOC_SMART_CLJ_RESERVED1_clj_rw_inf1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char clj_rw_inf2 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED2_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED2_clj_rw_inf2_START (0)
#define SOC_SMART_CLJ_RESERVED2_clj_rw_inf2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char clj_rw_inf3 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED3_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED3_clj_rw_inf3_START (0)
#define SOC_SMART_CLJ_RESERVED3_clj_rw_inf3_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char clj_rw_inf4 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED4_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED4_clj_rw_inf4_START (0)
#define SOC_SMART_CLJ_RESERVED4_clj_rw_inf4_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char i_reserve_1 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED5_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED5_i_reserve_1_START (0)
#define SOC_SMART_CLJ_RESERVED5_i_reserve_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char i_reserve_2 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED6_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED6_i_reserve_2_START (0)
#define SOC_SMART_CLJ_RESERVED6_i_reserve_2_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char v_reserve_1 : 8;
    } reg;
} SOC_SMART_CLJ_RESERVED7_UNION;
#endif
#define SOC_SMART_CLJ_RESERVED7_v_reserve_1_START (0)
#define SOC_SMART_CLJ_RESERVED7_v_reserve_1_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char soft_rst_n : 8;
    } reg;
} SOC_SMART_PMU_SOFT_RST_UNION;
#endif
#define SOC_SMART_PMU_SOFT_RST_soft_rst_n_START (0)
#define SOC_SMART_PMU_SOFT_RST_soft_rst_n_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char cic_clk_inv_i : 1;
        unsigned char cic_clk_inv_v : 1;
        unsigned char adc_ana_v_output : 1;
        unsigned char adc_ana_i_output : 1;
        unsigned char cali_en_i : 1;
        unsigned char cali_en_i_force : 1;
        unsigned char cali_en_v_force : 1;
        unsigned char cali_en_v : 1;
    } reg;
} SOC_SMART_CLJ_DEBUG_UNION;
#endif
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_i_START (0)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_i_END (0)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_v_START (1)
#define SOC_SMART_CLJ_DEBUG_cic_clk_inv_v_END (1)
#define SOC_SMART_CLJ_DEBUG_adc_ana_v_output_START (2)
#define SOC_SMART_CLJ_DEBUG_adc_ana_v_output_END (2)
#define SOC_SMART_CLJ_DEBUG_adc_ana_i_output_START (3)
#define SOC_SMART_CLJ_DEBUG_adc_ana_i_output_END (3)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_START (4)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_END (4)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_force_START (5)
#define SOC_SMART_CLJ_DEBUG_cali_en_i_force_END (5)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_force_START (6)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_force_END (6)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_START (7)
#define SOC_SMART_CLJ_DEBUG_cali_en_v_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char current_coul_always_off : 1;
        unsigned char voltage_coul_always_off : 1;
        unsigned char coul_gate_clk_en : 1;
        unsigned char reg_data_clr : 1;
        unsigned char reserved : 4;
    } reg;
} SOC_SMART_CLJ_DEBUG_2_UNION;
#endif
#define SOC_SMART_CLJ_DEBUG_2_current_coul_always_off_START (0)
#define SOC_SMART_CLJ_DEBUG_2_current_coul_always_off_END (0)
#define SOC_SMART_CLJ_DEBUG_2_voltage_coul_always_off_START (1)
#define SOC_SMART_CLJ_DEBUG_2_voltage_coul_always_off_END (1)
#define SOC_SMART_CLJ_DEBUG_2_coul_gate_clk_en_START (2)
#define SOC_SMART_CLJ_DEBUG_2_coul_gate_clk_en_END (2)
#define SOC_SMART_CLJ_DEBUG_2_reg_data_clr_START (3)
#define SOC_SMART_CLJ_DEBUG_2_reg_data_clr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned char value;
    struct
    {
        unsigned char state_test : 3;
        unsigned char reserved : 5;
    } reg;
} SOC_SMART_STATE_TEST_UNION;
#endif
#define SOC_SMART_STATE_TEST_state_test_START (0)
#define SOC_SMART_STATE_TEST_state_test_END (2)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
