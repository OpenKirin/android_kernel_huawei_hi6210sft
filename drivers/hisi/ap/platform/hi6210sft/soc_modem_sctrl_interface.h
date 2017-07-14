#ifndef __SOC_MODEM_SCTRL_INTERFACE_H__
#define __SOC_MODEM_SCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ADDR(base) ((base) + (0x0000))
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ADDR(base) ((base) + (0x0004))
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ADDR(base) ((base) + (0x0008))
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ADDR(base) ((base) + (0x0018))
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ADDR(base) ((base) + (0x001C))
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ADDR(base) ((base) + (0x0020))
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_ADDR(base) ((base) + (0x0040))
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_ADDR(base) ((base) + (0x0044))
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_ADDR(base) ((base) + (0x0048))
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_ADDR(base) ((base) + (0x004C))
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_ADDR(base) ((base) + (0x0050))
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_ADDR(base) ((base) + (0x0054))
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_ADDR(base) ((base) + (0x0058))
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_ADDR(base) ((base) + (0x005C))
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_ADDR(base) ((base) + (0x0060))
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_ADDR(base) ((base) + (0x0064))
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_ADDR(base) ((base) + (0x0068))
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_ADDR(base) ((base) + (0x006C))
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_ADDR(base) ((base) + (0x0074))
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_ADDR(base) ((base) + (0x0078))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_ADDR(base) ((base) + (0x0100))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_ADDR(base) ((base) + (0x0104))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_ADDR(base) ((base) + (0x0108))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_ADDR(base) ((base) + (0x0120))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_ADDR(base) ((base) + (0x0124))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_ADDR(base) ((base) + (0x0128))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_ADDR(base) ((base) + (0x012C))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_ADDR(base) ((base) + (0x0130))
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_ADDR(base) ((base) + (0x0134))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_ADDR(base) ((base) + (0x0150))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_ADDR(base) ((base) + (0x0154))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_ADDR(base) ((base) + (0x0158))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_ADDR(base) ((base) + (0x0170))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_ADDR(base) ((base) + (0x0174))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_ADDR(base) ((base) + (0x0178))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_ADDR(base) ((base) + (0x017C))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_ADDR(base) ((base) + (0x0180))
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_ADDR(base) ((base) + (0x0184))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_ADDR(base) ((base) + (0x01E0))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_ADDR(base) ((base) + (0x01E4))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_ADDR(base) ((base) + (0x01E8))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_ADDR(base) ((base) + (0x01F0))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_ADDR(base) ((base) + (0x01F4))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_ADDR(base) ((base) + (0x01F8))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_ADDR(base) ((base) + (0x0200))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_ADDR(base) ((base) + (0x0204))
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_ADDR(base) ((base) + (0x0208))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ADDR(base) ((base) + (0x020C))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ADDR(base) ((base) + (0x0210))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ADDR(base) ((base) + (0x0214))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ADDR(base) ((base) + (0x0218))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ADDR(base) ((base) + (0x021C))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ADDR(base) ((base) + (0x0220))
#define SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_ADDR(base) ((base) + (0x0224))
#define SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_ADDR(base) ((base) + (0x0228))
#define SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_ADDR(base) ((base) + (0x022C))
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_ADDR(base) ((base) + (0x0230))
#define SOC_MODEM_SCTRL_MDMSC_INT_DIS_ADDR(base) ((base) + (0x0234))
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_ADDR(base) ((base) + (0x0238))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_ADDR(base) ((base) + (0x0250))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_ADDR(base) ((base) + (0x0254))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_ADDR(base) ((base) + (0x0258))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_ADDR(base) ((base) + (0x025C))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_ADDR(base) ((base) + (0x0260))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_ADDR(base) ((base) + (0x0264))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_ADDR(base) ((base) + (0x0268))
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_ADDR(base) ((base) + (0x026C))
#define SOC_MODEM_SCTRL_MDMSC_BBPCLK_SEL_CTRL_ADDR(base) ((base) + (0x0270))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEBUG_RSTCTRL_ADDR(base) ((base) + (0x0274))
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_ADDR(base) ((base) + (0x02A0))
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_ADDR(base) ((base) + (0x02A4))
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_ADDR(base) ((base) + (0x02A8))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL4_ADDR(base) ((base) + (0x02AC))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_ADDR(base) ((base) + (0x02B0))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_ADDR(base) ((base) + (0x02B4))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL2_ADDR(base) ((base) + (0x02B8))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL0_ADDR(base) ((base) + (0x02BC))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL1_ADDR(base) ((base) + (0x02C0))
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_ADDR(base) ((base) + (0x02C4))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_ADDR(base) ((base) + (0x02C8))
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_STAT_ADDR(base) ((base) + (0x02CC))
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_ADDR(base) ((base) + (0x02D0))
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_ADDR(base) ((base) + (0x02D4))
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_ADDR(base) ((base) + (0x02D8))
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_ADDR(base) ((base) + (0x02DC))
#define SOC_MODEM_SCTRL_MDMSC_MEMCTRL_ADDR(base) ((base) + (0x02E0))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_ADDR(base) ((base) + (0x02E4))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_ADDR(base) ((base) + (0x02E8))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_ADDR(base) ((base) + (0x02EC))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_ADDR(base) ((base) + (0x02F0))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_ADDR(base) ((base) + (0x02F4))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT0_ADDR(base) ((base) + (0x02F8))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_ADDR(base) ((base) + (0x02FC))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_ADDR(base) ((base) + (0x0300))
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_ADDR(base) ((base) + (0x0304))
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_ADDR(base) ((base) + (0x0308))
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_ADDR(base) ((base) + (0x030C))
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_ADDR(base) ((base) + (0x0310))
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ADDR(base) ((base) + (0x0314))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_ADDR(base) ((base) + (0x0318))
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_ADDR(base) ((base) + (0x031C))
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_ADDR(base) ((base) + (0x0320))
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_ADDR(base) ((base) + (0x0324))
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_ADDR(base) ((base) + (0x0328))
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_ADDR(base) ((base) + (0x0330))
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME1_ADDR(base) ((base) + (0x0334))
#define SOC_MODEM_SCTRL_MDMSC_BBEPWDN_SRAM_CTRL_ADDR(base) ((base) + (0x0340))
#define SOC_MODEM_SCTRL_MDMSC_BBE16_OVERADDR_PROT_ADDR(base) ((base) + (0x0344))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT0_ADDR(base) ((base) + (0x0350))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT1_ADDR(base) ((base) + (0x0354))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT2_ADDR(base) ((base) + (0x0358))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT3_ADDR(base) ((base) + (0x035C))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT4_ADDR(base) ((base) + (0x0360))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT5_ADDR(base) ((base) + (0x0364))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT6_ADDR(base) ((base) + (0x0368))
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT7_ADDR(base) ((base) + (0x036C))
#define SOC_MODEM_SCTRL_MDMSC_WBBPID_ADDR(base) ((base) + (0x0380))
#define SOC_MODEM_SCTRL_MDMSC_GBBPID_ADDR(base) ((base) + (0x0384))
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER0_ADDR(base) ((base) + (0x0388))
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER1_ADDR(base) ((base) + (0x038C))
#define SOC_MODEM_SCTRL_MDMSC_SOC_VERSION_ADDR(base) ((base) + (0x0394))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED01_ADDR(base) ((base) + (0x0398))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED02_ADDR(base) ((base) + (0x039C))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED03_ADDR(base) ((base) + (0x03A0))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED04_ADDR(base) ((base) + (0x03A4))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED05_ADDR(base) ((base) + (0x03A8))
#define SOC_MODEM_SCTRL_MDMSC_RESERVED06_ADDR(base) ((base) + (0x03AC))
#define SOC_MODEM_SCTRL_MDMSC_FPGA_BBP_DRX_FLAG_ADDR(base) ((base) + (0x03B0))
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_ADDR(base) ((base) + (0x03B4))
#define SOC_MODEM_SCTRL_MDMSC_TESTPIN_SEL_ADDR(base) ((base) + (0x03B8))
#define SOC_MODEM_SCTRL_MODEM_TESTPIN_SEL_ADDR(base) ((base) + (0x03BC))
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_ADDR(base) ((base) + (0x03D0))
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTDIS_ADDR(base) ((base) + (0x03D4))
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_STAT_ADDR(base) ((base) + (0x03D8))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_clken_sci0_pclk : 1;
        unsigned int ao_peri_clken_sci1_pclk : 1;
        unsigned int ao_peri_clken_modem_timer0_pclk : 1;
        unsigned int ao_peri_clken_modem_timer1_pclk : 1;
        unsigned int ao_peri_clken_modem_timer2_pclk : 1;
        unsigned int ao_peri_clken_modem_timer3_pclk : 1;
        unsigned int ao_peri_clken_modem_timer4_pclk : 1;
        unsigned int ao_peri_clken_modem_timer5_pclk : 1;
        unsigned int ao_peri_clken_modem_timer6_pclk : 1;
        unsigned int ao_peri_clken_modem_timer7_pclk : 1;
        unsigned int ao_peri_clken_modem_timer8_pclk : 1;
        unsigned int ao_peri_clken_modem_timer9_pclk : 1;
        unsigned int ao_peri_clken_watchdog0_pclk : 1;
        unsigned int ao_peri_clken_watchdog1_pclk : 1;
        unsigned int ao_peri_clken_apb_bbp_on : 1;
        unsigned int ao_peri_clken_19m_bbp_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int ao_peri_clken_104m_gbbp1_on : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_clken_104m_gbbp2_on : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_sci0_pclk_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_sci0_pclk_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_sci1_pclk_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_sci1_pclk_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer0_pclk_START (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer0_pclk_END (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer1_pclk_START (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer1_pclk_END (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer2_pclk_START (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer2_pclk_END (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer3_pclk_START (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer3_pclk_END (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer4_pclk_START (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer4_pclk_END (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer5_pclk_START (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer5_pclk_END (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer6_pclk_START (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer6_pclk_END (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer7_pclk_START (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer7_pclk_END (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer8_pclk_START (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer8_pclk_END (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer9_pclk_START (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_modem_timer9_pclk_END (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_watchdog0_pclk_START (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_watchdog0_pclk_END (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_watchdog1_pclk_START (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_watchdog1_pclk_END (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_apb_bbp_on_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_apb_bbp_on_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_19m_bbp_on_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_19m_bbp_on_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_104m_gbbp1_on_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_104m_gbbp1_on_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_104m_gbbp2_on_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_ao_peri_clken_104m_gbbp2_on_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_clkdis_sci0_pclk : 1;
        unsigned int ao_peri_clkdis_sci1_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer0_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer1_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer2_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer3_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer4_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer5_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer6_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer7_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer8_pclk : 1;
        unsigned int ao_peri_clkdis_modem_timer9_pclk : 1;
        unsigned int ao_peri_clkdis_watchdog0_pclk : 1;
        unsigned int ao_peri_clkdis_watchdog1_pclk : 1;
        unsigned int ao_peri_clkdis_apb_bbp_on : 1;
        unsigned int ao_peri_clkdis_19m_bbp_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int ao_peri_clkdis_104m_gbbp1_on : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_clkdis_104m_gbbp2_on : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_sci0_pclk_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_sci0_pclk_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_sci1_pclk_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_sci1_pclk_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer0_pclk_START (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer0_pclk_END (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer1_pclk_START (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer1_pclk_END (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer2_pclk_START (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer2_pclk_END (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer3_pclk_START (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer3_pclk_END (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer4_pclk_START (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer4_pclk_END (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer5_pclk_START (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer5_pclk_END (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer6_pclk_START (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer6_pclk_END (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer7_pclk_START (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer7_pclk_END (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer8_pclk_START (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer8_pclk_END (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer9_pclk_START (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_modem_timer9_pclk_END (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_watchdog0_pclk_START (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_watchdog0_pclk_END (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_watchdog1_pclk_START (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_watchdog1_pclk_END (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_apb_bbp_on_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_apb_bbp_on_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_19m_bbp_on_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_19m_bbp_on_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_104m_gbbp1_on_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_104m_gbbp1_on_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_104m_gbbp2_on_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKDIS_ao_peri_clkdis_104m_gbbp2_on_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_clken_stat_sci0_pclk : 1;
        unsigned int ao_peri_clken_stat_sci1_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer0_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer1_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer2_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer3_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer4_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer5_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer6_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer7_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer8_pclk : 1;
        unsigned int ao_peri_clken_stat_modem_timer9_pclk : 1;
        unsigned int ao_peri_clken_stat_watchdog0_pclk : 1;
        unsigned int ao_peri_clken_stat_watchdog1_pclk : 1;
        unsigned int ao_peri_clken_stat_apb_bbp_on : 1;
        unsigned int ao_peri_clken_stat_19m_bbp_on : 1;
        unsigned int reserved_0 : 1;
        unsigned int ao_peri_clken_stat_104m_gbbp1_on : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_clken_stat_104m_gbbp2_on : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_sci0_pclk_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_sci0_pclk_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_sci1_pclk_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_sci1_pclk_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer0_pclk_START (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer0_pclk_END (2)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer1_pclk_START (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer1_pclk_END (3)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer2_pclk_START (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer2_pclk_END (4)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer3_pclk_START (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer3_pclk_END (5)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer4_pclk_START (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer4_pclk_END (6)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer5_pclk_START (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer5_pclk_END (7)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer6_pclk_START (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer6_pclk_END (8)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer7_pclk_START (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer7_pclk_END (9)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer8_pclk_START (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer8_pclk_END (10)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer9_pclk_START (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_modem_timer9_pclk_END (11)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_watchdog0_pclk_START (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_watchdog0_pclk_END (12)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_watchdog1_pclk_START (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_watchdog1_pclk_END (13)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_apb_bbp_on_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_apb_bbp_on_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_19m_bbp_on_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_19m_bbp_on_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_104m_gbbp1_on_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_104m_gbbp1_on_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_104m_gbbp2_on_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_CLKEN_STAT_ao_peri_clken_stat_104m_gbbp2_on_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_rsten_sci0 : 1;
        unsigned int ao_peri_rsten_sci1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int ao_peri_rsten_reset_apb_bbp_on_n : 1;
        unsigned int ao_peri_rsten_reset_19m_bbp_on_n : 1;
        unsigned int ao_peri_rsten_reset_32k_bbp_on_n : 1;
        unsigned int ao_peri_rsten_reset_104m_gbbp1_on_n : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_rsten_reset_104m_gbbp2_on_n : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_sci0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_sci0_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_sci1_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_sci1_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_apb_bbp_on_n_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_apb_bbp_on_n_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_19m_bbp_on_n_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_19m_bbp_on_n_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_32k_bbp_on_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_32k_bbp_on_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_104m_gbbp1_on_n_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_104m_gbbp1_on_n_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_104m_gbbp2_on_n_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_ao_peri_rsten_reset_104m_gbbp2_on_n_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_rstdis_sci0 : 1;
        unsigned int ao_peri_rstdis_sci1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int ao_peri_rstdis_reset_apb_bbp_on_n : 1;
        unsigned int ao_peri_rstdis_reset_19m_bbp_on_n : 1;
        unsigned int ao_peri_rstdis_reset_32k_bbp_on_n : 1;
        unsigned int ao_peri_rstdis_reset_104m_gbbp1_on_n : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_rstdis_reset_104m_gbbp2_on_n : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_sci0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_sci0_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_sci1_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_sci1_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_apb_bbp_on_n_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_apb_bbp_on_n_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_19m_bbp_on_n_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_19m_bbp_on_n_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_32k_bbp_on_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_32k_bbp_on_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_104m_gbbp1_on_n_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_104m_gbbp1_on_n_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_104m_gbbp2_on_n_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTDIS_ao_peri_rstdis_reset_104m_gbbp2_on_n_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ao_peri_rsten_stat_sci0 : 1;
        unsigned int ao_peri_rsten_stat_sci1 : 1;
        unsigned int reserved_0 : 12;
        unsigned int ao_peri_rsten_stat_apb_bbp_on_n : 1;
        unsigned int ao_peri_rsten_stat_19m_bbp_on_n : 1;
        unsigned int ao_peri_rsten_stat_32k_bbp_on_n : 1;
        unsigned int ao_peri_rsten_stat_104m_gbbp1_on_n : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int ao_peri_rsten_stat_104m_gbbp2_on_n : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_sci0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_sci0_END (0)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_sci1_START (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_sci1_END (1)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_apb_bbp_on_n_START (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_apb_bbp_on_n_END (14)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_19m_bbp_on_n_START (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_19m_bbp_on_n_END (15)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_32k_bbp_on_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_32k_bbp_on_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_104m_gbbp1_on_n_START (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_104m_gbbp1_on_n_END (17)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_104m_gbbp2_on_n_START (20)
#define SOC_MODEM_SCTRL_MDMSC_AO_RSTEN_STAT_ao_peri_rsten_stat_104m_gbbp2_on_n_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clken_dspbbe : 1;
        unsigned int pw_clken_bbp_cs : 1;
        unsigned int pw_clken_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_pw_clken_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clkdis_dspbbe : 1;
        unsigned int pw_clkdis_bbp_cs : 1;
        unsigned int pw_clkdis_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKDIS_pw_clkdis_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_clken_stat_dspbbe : 1;
        unsigned int pw_clken_stat_bbp_cs : 1;
        unsigned int pw_clken_stat_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_CLKEN_STAT_pw_clken_stat_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rsten_dspbbe : 1;
        unsigned int pw_rsten_bbp_cs : 1;
        unsigned int pw_rsten_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_pw_rsten_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rstdis_dspbbe : 1;
        unsigned int pw_rstdis_bbp_cs : 1;
        unsigned int pw_rstdis_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTDIS_pw_rstdis_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_rsten_stat_dspbbe : 1;
        unsigned int pw_rsten_stat_bbp_cs : 1;
        unsigned int pw_rsten_stat_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_RSTEN_STAT_pw_rsten_stat_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_isoen_dspbbe : 1;
        unsigned int pw_isoen_bbp_cs : 1;
        unsigned int pw_isoen_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_pw_isoen_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_isodis_dspbbe : 1;
        unsigned int pw_isodis_bbp_cs : 1;
        unsigned int pw_isodis_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISODIS_pw_isodis_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_iso_stat_dspbbe : 1;
        unsigned int pw_iso_stat_bbp_cs : 1;
        unsigned int pw_iso_stat_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_ISOEN_STAT_pw_iso_stat_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmosen_dspbbe : 1;
        unsigned int pw_mtcmosen_bbp_cs : 1;
        unsigned int pw_mtcmosen_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSEN_pw_mtcmosen_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmosdis_dspbbe : 1;
        unsigned int pw_mtcmosdis_bbp_cs : 1;
        unsigned int pw_mtcmosdis_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOSDIS_pw_mtcmosdis_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_stat_dspbbe : 1;
        unsigned int pw_mtcmos_stat_bbp_cs : 1;
        unsigned int pw_mtcmos_stat_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_STAT_pw_mtcmos_stat_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_ack_dspbbe : 1;
        unsigned int pw_mtcmos_ack_bbp_cs : 1;
        unsigned int pw_mtcmos_ack_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_ACK_SUB_pw_mtcmos_ack_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pw_mtcmos_timeout_stat_dspbbe : 1;
        unsigned int pw_mtcmos_timeout_stat_bbp_cs : 1;
        unsigned int pw_mtcmos_timeout_stat_lte : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_dspbbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_bbp_cs_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_bbp_cs_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_lte_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PW_MTCMOS_TIMEOUT_STAT_pw_mtcmos_timeout_stat_lte_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clken_bbe16_kernel : 1;
        unsigned int periph_clken_clk_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_clken_modem_dmac : 1;
        unsigned int periph_clken_cicom_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_clken_cicom_l_cipher : 1;
        unsigned int periph_clken_cicom_gu0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_clken_modem_uart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 13;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_clk_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_clk_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_modem_dmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_modem_dmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_l_cipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_l_cipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_gu0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_cicom_gu0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_modem_uart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_periph_clken_modem_uart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clkdis_bbe16_kernel : 1;
        unsigned int periph_clkdis_clk_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_clkdis_modem_dmac : 1;
        unsigned int periph_clkdis_cicom_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_clkdis_cicom_l_cipher : 1;
        unsigned int periph_clkdis_cicom_gu0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_clkdis_modem_uart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 13;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_clk_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_clk_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_modem_dmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_modem_dmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_l_cipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_l_cipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_gu0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_cicom_gu0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_modem_uart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKDIS_periph_clkdis_modem_uart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_clken_stat_bbe16_kernel : 1;
        unsigned int periph_clken_stat_clk_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_clken_stat_modem_dmac : 1;
        unsigned int periph_clken_stat_cicom_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_clken_stat_cicom_l_cipher : 1;
        unsigned int periph_clken_stat_cicom_gu0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_clken_stat_modem_uart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 1;
        unsigned int reserved_12 : 13;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_clk_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_clk_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_modem_dmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_modem_dmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_l_cipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_l_cipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_gu0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_cicom_gu0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_modem_uart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CLKEN_STAT_periph_clken_stat_modem_uart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clken0_122m_tds : 1;
        unsigned int bbp_clken0_245m_tds : 1;
        unsigned int bbp_clken0_19m_cs : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clken0_122m_twc : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_clken0_122m_wc_abb : 1;
        unsigned int bbp_clken0_61m_wbbp_cs : 1;
        unsigned int bbp_clken0_122m_wbbp_cs : 1;
        unsigned int bbp_clken0_122m_tw : 1;
        unsigned int bbp_clken0_104m_gbbp1 : 1;
        unsigned int bbp_clken0_axis_cs : 1;
        unsigned int bbp_clken0_122m_cbbp : 1;
        unsigned int reserved_2 : 1;
        unsigned int bbp_clken0_axim_bbc : 1;
        unsigned int bbp_clken0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_clken0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_clken0_245m_lte_bbc : 1;
        unsigned int bbp_clken0_245m_wbbp_cs : 1;
        unsigned int bbp_clken0_104m_gbbp_sdr : 1;
        unsigned int bbp_clken0_245m_wbbp_sdr : 1;
        unsigned int bbp_clken0_104m_gbbp2 : 1;
        unsigned int bbp_clken0_150m_noc_cs : 1;
        unsigned int bbp_clken0_axim_bbpmst : 1;
        unsigned int bbp_clken0_19m_ch0_bbc : 1;
        unsigned int bbp_clken0_19m_ch1_bbc : 1;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN0_bbp_clken0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clkdis0_122m_tds : 1;
        unsigned int bbp_clkdis0_245m_tds : 1;
        unsigned int bbp_clkdis0_19m_cs : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clkdis0_122m_twc : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_clkdis0_122m_wc_abb : 1;
        unsigned int bbp_clkdis0_61m_wbbp_cs : 1;
        unsigned int bbp_clkdis0_122m_wbbp_cs : 1;
        unsigned int bbp_clkdis0_122m_tw : 1;
        unsigned int bbp_clkdis0_104m_gbbp1 : 1;
        unsigned int bbp_clkdis0_axis_cs : 1;
        unsigned int bbp_clkdis0_122m_cbbp : 1;
        unsigned int reserved_2 : 1;
        unsigned int bbp_clkdis0_axim_bbc : 1;
        unsigned int bbp_clkdis0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_clkdis0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_clkdis0_245m_lte_bbc : 1;
        unsigned int bbp_clkdis0_245m_wbbp_cs : 1;
        unsigned int bbp_clkdis0_104m_gbbp_sdr : 1;
        unsigned int bbp_clkdis0_245m_wbbp_sdr : 1;
        unsigned int bbp_clkdis0_104m_gbbp2 : 1;
        unsigned int bbp_clkdis0_150m_noc_cs : 1;
        unsigned int bbp_clkdis0_axim_bbpmst : 1;
        unsigned int bbp_clkdis0_19m_ch0_bbc : 1;
        unsigned int bbp_clkdis0_19m_ch1_bbc : 1;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS0_bbp_clkdis0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clken_stat0_122m_tds : 1;
        unsigned int bbp_clken_stat0_245m_tds : 1;
        unsigned int bbp_clken_stat0_19m_cs : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clken_stat0_122m_twc : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_clken_stat0_122m_wc_abb : 1;
        unsigned int bbp_clken_stat0_61m_wbbp_cs : 1;
        unsigned int bbp_clken_stat0_122m_wbbp_cs : 1;
        unsigned int bbp_clken_stat0_122m_tw : 1;
        unsigned int bbp_clken_stat0_104m_gbbp1 : 1;
        unsigned int bbp_clken_stat0_axis_cs : 1;
        unsigned int bbp_clken_stat0_122m_cbbp : 1;
        unsigned int reserved_2 : 1;
        unsigned int bbp_clken_stat0_axim_bbc : 1;
        unsigned int bbp_clken_stat0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_clken_stat0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_clken_stat0_245m_lte_bbc : 1;
        unsigned int bbp_clken_stat0_245m_wbbp_cs : 1;
        unsigned int bbp_clken_stat0_104m_gbbp_sdr : 1;
        unsigned int bbp_clken_stat0_245m_wbbp_sdr : 1;
        unsigned int bbp_clken_stat0_104m_gbbp2 : 1;
        unsigned int bbp_clken_stat0_150m_noc_cs : 1;
        unsigned int bbp_clken_stat0_axim_bbpmst : 1;
        unsigned int bbp_clken_stat0_19m_ch0_bbc : 1;
        unsigned int bbp_clken_stat0_19m_ch1_bbc : 1;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT0_bbp_clken_stat0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clken1_axim_wbbp : 1;
        unsigned int bbp_clken1_61m_wbbp_ps : 1;
        unsigned int bbp_clken1_122m_wbbp_ps : 1;
        unsigned int bbp_clken1_245m_wbbp_ps : 1;
        unsigned int bbp_clken1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clken1_122m_cbbp_irm : 1;
        unsigned int bbp_clken1_axis_irm : 1;
        unsigned int bbp_clken1_122m_wc_irm : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 6;
        unsigned int bbp_clken1_axi_lte : 1;
        unsigned int bbp_clken1_122m_lte_pdf : 1;
        unsigned int bbp_clken1_122m_lte_pdt : 1;
        unsigned int bbp_clken1_122m_tds_pdt : 1;
        unsigned int bbp_clken1_245m_lte : 1;
        unsigned int bbp_clken1_19m_lte : 1;
        unsigned int reserved_3 : 10;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_wc_irm_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axi_lte_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_axi_lte_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_lte_pdf_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_lte_pdf_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_lte_pdt_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_lte_pdt_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_tds_pdt_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_122m_tds_pdt_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_lte_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_245m_lte_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_19m_lte_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN1_bbp_clken1_19m_lte_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clkdis1_axim_wbbp : 1;
        unsigned int bbp_clkdis1_61m_wbbp_ps : 1;
        unsigned int bbp_clkdis1_122m_wbbp_ps : 1;
        unsigned int bbp_clkdis1_245m_wbbp_ps : 1;
        unsigned int bbp_clkdis1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clkdis1_122m_cbbp_irm : 1;
        unsigned int bbp_clkdis1_axis_irm : 1;
        unsigned int bbp_clkdis1_122m_wc_irm : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 6;
        unsigned int bbp_clkdis1_axi_lte : 1;
        unsigned int bbp_clkdis1_122m_lte_pdf : 1;
        unsigned int bbp_clkdis1_122m_lte_pdt : 1;
        unsigned int bbp_clkdis1_122m_tds_pdt : 1;
        unsigned int bbp_clkdis1_245m_lte : 1;
        unsigned int bbp_clkdis1_19m_lte : 1;
        unsigned int reserved_3 : 10;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_wc_irm_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axi_lte_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_axi_lte_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_lte_pdf_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_lte_pdf_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_lte_pdt_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_lte_pdt_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_tds_pdt_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_122m_tds_pdt_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_lte_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_245m_lte_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_19m_lte_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKDIS1_bbp_clkdis1_19m_lte_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clken_stat1_axim_wbbp : 1;
        unsigned int bbp_clken_stat1_61m_wbbp_ps : 1;
        unsigned int bbp_clken_stat1_122m_wbbp_ps : 1;
        unsigned int bbp_clken_stat1_245m_wbbp_ps : 1;
        unsigned int bbp_clken_stat1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_clken_stat1_122m_cbbp_irm : 1;
        unsigned int bbp_clken_stat1_axis_irm : 1;
        unsigned int bbp_clken_stat1_122m_wc_irm : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 6;
        unsigned int bbp_clken_stat1_axi_lte : 1;
        unsigned int bbp_clken_stat1_122m_lte_pdf : 1;
        unsigned int bbp_clken_stat1_122m_lte_pdt : 1;
        unsigned int bbp_clken_stat1_122m_tds_pdt : 1;
        unsigned int bbp_clken_stat1_245m_lte : 1;
        unsigned int bbp_clken_stat1_19m_lte : 1;
        unsigned int reserved_3 : 10;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_wc_irm_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axi_lte_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_axi_lte_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_lte_pdf_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_lte_pdf_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_lte_pdt_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_lte_pdt_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_tds_pdt_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_122m_tds_pdt_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_lte_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_245m_lte_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_19m_lte_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_CLKEN_STAT1_bbp_clken_stat1_19m_lte_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rsten_bbe16_kernel : 1;
        unsigned int periph_rsten_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_rsten_mdmac : 1;
        unsigned int periph_rsten_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_rsten_lcipher : 1;
        unsigned int periph_rsten_gucipher0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_rsten_muart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 14;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_mdmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_mdmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_lcipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_lcipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_gucipher0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_gucipher0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_muart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_periph_rsten_muart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rstdis_bbe16_kernel : 1;
        unsigned int periph_rstdis_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_rstdis_mdmac : 1;
        unsigned int periph_rstdis_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_rstdis_lcipher : 1;
        unsigned int periph_rstdis_gucipher0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_rstdis_muart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 14;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_mdmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_mdmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_lcipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_lcipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_gucipher0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_gucipher0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_muart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTDIS_periph_rstdis_muart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int periph_rsten_stat_bbe16_kernel : 1;
        unsigned int periph_rsten_stat_bbe16_lbus : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int periph_rsten_stat_mdmac : 1;
        unsigned int periph_rsten_stat_upacc : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int periph_rsten_stat_lcipher : 1;
        unsigned int periph_rsten_stat_gucipher0 : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
        unsigned int periph_rsten_stat_stat_muart0 : 1;
        unsigned int reserved_10 : 1;
        unsigned int reserved_11 : 14;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_bbe16_kernel_START (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_bbe16_kernel_END (4)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_bbe16_lbus_START (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_bbe16_lbus_END (5)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_mdmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_mdmac_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_upacc_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_upacc_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_lcipher_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_lcipher_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_gucipher0_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_gucipher0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_stat_muart0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_RSTEN_STAT_periph_rsten_stat_stat_muart0_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rsten0_122m_tds : 1;
        unsigned int bbp_rsten0_245m_tds : 1;
        unsigned int bbp_rsten0_19m_cs : 1;
        unsigned int bbp_rsten0_32k_cs : 1;
        unsigned int bbp_rsten0_122m_twc : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rsten0_122m_wc_abb : 1;
        unsigned int bbp_rsten0_61m_wbbp_cs : 1;
        unsigned int bbp_rsten0_122m_wbbp_cs : 1;
        unsigned int bbp_rsten0_122m_tw : 1;
        unsigned int bbp_rsten0_104m_gbbp1 : 1;
        unsigned int bbp_rsten0_axis_cs : 1;
        unsigned int bbp_rsten0_122m_cbbp : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_rsten0_axim_bbc : 1;
        unsigned int bbp_rsten0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_rsten0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_rsten0_245m_lte_bbc : 1;
        unsigned int bbp_rsten0_245m_wbbp_cs : 1;
        unsigned int bbp_rsten0_104m_gbbp_sdr : 1;
        unsigned int bbp_rsten0_245m_wbbp_sdr : 1;
        unsigned int bbp_rsten0_104m_gbbp2 : 1;
        unsigned int bbp_rsten0_150m_noc_cs : 1;
        unsigned int bbp_rsten0_axim_bbpmst : 1;
        unsigned int bbp_rsten0_19m_ch0_bbc : 1;
        unsigned int bbp_rsten0_19m_ch1_bbc : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_32k_cs_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_32k_cs_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN0_bbp_rsten0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rstdis0_122m_tds : 1;
        unsigned int bbp_rstdis0_245m_tds : 1;
        unsigned int bbp_rstdis0_19m_cs : 1;
        unsigned int bbp_rstdis0_32k_cs : 1;
        unsigned int bbp_rstdis0_122m_twc : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rstdis0_122m_wc_abb : 1;
        unsigned int bbp_rstdis0_61m_wbbp_cs : 1;
        unsigned int bbp_rstdis0_122m_wbbp_cs : 1;
        unsigned int bbp_rstdis0_122m_tw : 1;
        unsigned int bbp_rstdis0_104m_gbbp1 : 1;
        unsigned int bbp_rstdis0_axis_cs : 1;
        unsigned int bbp_rstdis0_122m_cbbp : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_rstdis0_axim_bbc : 1;
        unsigned int bbp_rstdis0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_rstdis0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_rstdis0_245m_lte_bbc : 1;
        unsigned int bbp_rstdis0_245m_wbbp_cs : 1;
        unsigned int bbp_rstdis0_104m_gbbp_sdr : 1;
        unsigned int bbp_rstdis0_245m_wbbp_sdr : 1;
        unsigned int bbp_rstdis0_104m_gbbp2 : 1;
        unsigned int bbp_rstdis0_150m_noc_cs : 1;
        unsigned int bbp_rstdis0_axim_bbpmst : 1;
        unsigned int bbp_rstdis0_19m_ch0_bbc : 1;
        unsigned int bbp_rstdis0_19m_ch1_bbc : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_32k_cs_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_32k_cs_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS0_bbp_rstdis0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rsten_stat0_122m_tds : 1;
        unsigned int bbp_rsten_stat0_245m_tds : 1;
        unsigned int bbp_rsten_stat0_19m_cs : 1;
        unsigned int bbp_rsten_stat0_32k_cs : 1;
        unsigned int bbp_rsten_stat0_122m_twc : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rsten_stat0_122m_wc_abb : 1;
        unsigned int bbp_rsten_stat0_61m_wbbp_cs : 1;
        unsigned int bbp_rsten_stat0_122m_wbbp_cs : 1;
        unsigned int bbp_rsten_stat0_122m_tw : 1;
        unsigned int bbp_rsten_stat0_104m_gbbp1 : 1;
        unsigned int bbp_rsten_stat0_axis_cs : 1;
        unsigned int bbp_rsten_stat0_122m_cbbp : 1;
        unsigned int reserved_1 : 1;
        unsigned int bbp_rsten_stat0_axim_bbc : 1;
        unsigned int bbp_rsten_stat0_122m_lte_pdf_bbc : 1;
        unsigned int bbp_rsten_stat0_122m_lte_pdt_bbc : 1;
        unsigned int bbp_rsten_stat0_245m_lte_bbc : 1;
        unsigned int bbp_rsten_stat0_245m_wbbp_cs : 1;
        unsigned int bbp_rsten_stat0_104m_gbbp_sdr : 1;
        unsigned int bbp_rsten_stat0_245m_wbbp_sdr : 1;
        unsigned int bbp_rsten_stat0_104m_gbbp2 : 1;
        unsigned int bbp_rsten_stat0_150m_noc_cs : 1;
        unsigned int bbp_rsten_stat0_axim_bbpmst : 1;
        unsigned int bbp_rsten_stat0_19m_ch0_bbc : 1;
        unsigned int bbp_rsten_stat0_19m_ch1_bbc : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_tds_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_tds_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_tds_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_tds_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_cs_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_cs_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_32k_cs_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_32k_cs_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_twc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_twc_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_wc_abb_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_wc_abb_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_61m_wbbp_cs_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_61m_wbbp_cs_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_wbbp_cs_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_wbbp_cs_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_tw_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_tw_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axis_cs_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axis_cs_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_cbbp_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_cbbp_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axim_bbc_START (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axim_bbc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_lte_pdf_bbc_START (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_lte_pdf_bbc_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_lte_pdt_bbc_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_122m_lte_pdt_bbc_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_lte_bbc_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_lte_bbc_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_wbbp_cs_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_wbbp_cs_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp_sdr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp_sdr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_wbbp_sdr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_245m_wbbp_sdr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_104m_gbbp2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_150m_noc_cs_START (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_150m_noc_cs_END (22)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axim_bbpmst_START (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_axim_bbpmst_END (23)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_ch0_bbc_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_ch0_bbc_END (24)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_ch1_bbc_START (25)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT0_bbp_rsten_stat0_19m_ch1_bbc_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rsten1_axim_wbbp : 1;
        unsigned int bbp_rsten1_61m_wbbp_ps : 1;
        unsigned int bbp_rsten1_122m_wbbp_ps : 1;
        unsigned int bbp_rsten1_245m_wbbp_ps : 1;
        unsigned int bbp_rsten1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rsten1_122m_cbbp_irm : 1;
        unsigned int bbp_rsten1_axis_irm : 1;
        unsigned int bbp_rsten1_122m_wc_irm : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN1_bbp_rsten1_122m_wc_irm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rstdis1_axim_wbbp : 1;
        unsigned int bbp_rstdis1_61m_wbbp_ps : 1;
        unsigned int bbp_rstdis1_122m_wbbp_ps : 1;
        unsigned int bbp_rstdis1_245m_wbbp_ps : 1;
        unsigned int bbp_rstdis1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rstdis1_122m_cbbp_irm : 1;
        unsigned int bbp_rstdis1_axis_irm : 1;
        unsigned int bbp_rstdis1_122m_wc_irm : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTDIS1_bbp_rstdis1_122m_wc_irm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_rsten_stat1_axim_wbbp : 1;
        unsigned int bbp_rsten_stat1_61m_wbbp_ps : 1;
        unsigned int bbp_rsten_stat1_122m_wbbp_ps : 1;
        unsigned int bbp_rsten_stat1_245m_wbbp_ps : 1;
        unsigned int bbp_rsten_stat1_245m_irm : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbp_rsten_stat1_122m_cbbp_irm : 1;
        unsigned int bbp_rsten_stat1_axis_irm : 1;
        unsigned int bbp_rsten_stat1_122m_wc_irm : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_axim_wbbp_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_axim_wbbp_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_61m_wbbp_ps_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_61m_wbbp_ps_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_wbbp_ps_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_wbbp_ps_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_245m_wbbp_ps_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_245m_wbbp_ps_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_245m_irm_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_245m_irm_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_cbbp_irm_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_cbbp_irm_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_axis_irm_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_axis_irm_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_wc_irm_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBP_RSTEN_STAT1_bbp_rsten_stat1_122m_wc_irm_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_en_ipc_s_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_en_ipc_ns_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_en_ipc_s_lock_intr4 : 1;
        unsigned int sc_secondary_int_en_ipc_ns_lock_intr4 : 1;
        unsigned int reserved_0 : 12;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_s_inner_core_intr4_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_s_inner_core_intr4_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_ns_inner_core_intr4_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_ns_inner_core_intr4_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_s_lock_intr4_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_s_lock_intr4_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_ns_lock_intr4_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_EN_sc_secondary_int_en_ipc_ns_lock_intr4_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_raw_ipc_s_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_raw_ipc_ns_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_raw_ipc_s_lock_intr4 : 1;
        unsigned int sc_secondary_int_raw_ipc_ns_lock_intr4 : 1;
        unsigned int reserved_0 : 12;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_s_inner_core_intr4_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_s_inner_core_intr4_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_ns_inner_core_intr4_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_ns_inner_core_intr4_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_s_lock_intr4_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_s_lock_intr4_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_ns_lock_intr4_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATRAW_sc_secondary_int_raw_ipc_ns_lock_intr4_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_mask_ipc_s_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_mask_ipc_ns_inner_core_intr4 : 1;
        unsigned int sc_secondary_int_mask_ipc_s_lock_intr4 : 1;
        unsigned int sc_secondary_int_mask_ipc_ns_lock_intr4 : 1;
        unsigned int reserved_0 : 12;
        unsigned int reserved_1 : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_s_inner_core_intr4_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_s_inner_core_intr4_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_ns_inner_core_intr4_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_ns_inner_core_intr4_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_s_lock_intr4_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_s_lock_intr4_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_ns_lock_intr4_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT0_STATMSK_sc_secondary_int_mask_ipc_ns_lock_intr4_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int sc_secondary_int_en_axierrirq_n : 1;
        unsigned int sc_secondary_int_en_mwdt_bbe_ot_intr : 1;
        unsigned int sc_secondary_int_en_mnoc_fault0 : 1;
        unsigned int sc_secondary_int_en_mnoc_fault1 : 1;
        unsigned int sc_secondary_int_en_comm_32k_int : 1;
        unsigned int sc_secondary_int_en_ccpu_sftfiq_intr : 1;
        unsigned int sc_secondary_newint_en_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_en_arremap_error_flag : 1;
        unsigned int sc_secondary_int_en_awremap_error_flag : 1;
        unsigned int sc_secondary_int_en_usim0_detect_int : 1;
        unsigned int sc_secondary_int_en_usim1_detect_int : 1;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_axierrirq_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_axierrirq_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mwdt_bbe_ot_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mwdt_bbe_ot_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mnoc_fault0_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mnoc_fault0_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mnoc_fault1_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_mnoc_fault1_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_comm_32k_int_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_comm_32k_int_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_ccpu_sftfiq_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_ccpu_sftfiq_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_newint_en_bbpmst_error_int_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_newint_en_bbpmst_error_int_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_arremap_error_flag_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_arremap_error_flag_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_awremap_error_flag_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_awremap_error_flag_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_usim0_detect_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_usim0_detect_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_usim1_detect_int_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_EN_sc_secondary_int_en_usim1_detect_int_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int sc_secondary_int_raw_axierrirq_n : 1;
        unsigned int sc_secondary_int_raw_mwdt_bbe_ot_intr : 1;
        unsigned int sc_secondary_int_raw_mnoc_fault0 : 1;
        unsigned int sc_secondary_int_raw_mnoc_fault1 : 1;
        unsigned int sc_secondary_int_raw_comm_32k_int : 1;
        unsigned int sc_secondary_int_raw_ccpu_sftfiq_intr : 1;
        unsigned int sc_secondary_newint_raw_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_raw_arremap_error_flag : 1;
        unsigned int sc_secondary_int_raw_awremap_error_flag : 1;
        unsigned int sc_secondary_int_raw_usim0_detect_int : 1;
        unsigned int sc_secondary_int_raw_usim1_detect_int : 1;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_axierrirq_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_axierrirq_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mwdt_bbe_ot_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mwdt_bbe_ot_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mnoc_fault0_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mnoc_fault0_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mnoc_fault1_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_mnoc_fault1_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_comm_32k_int_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_comm_32k_int_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_ccpu_sftfiq_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_ccpu_sftfiq_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_newint_raw_bbpmst_error_int_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_newint_raw_bbpmst_error_int_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_arremap_error_flag_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_arremap_error_flag_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_awremap_error_flag_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_awremap_error_flag_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_usim0_detect_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_usim0_detect_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_usim1_detect_int_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATRAW_sc_secondary_int_raw_usim1_detect_int_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int sc_secondary_int_mask_axierrirq_n : 1;
        unsigned int sc_secondary_int_mask_mwdt_bbe_ot_intr : 1;
        unsigned int sc_secondary_int_mask_mnoc_fault0 : 1;
        unsigned int sc_secondary_int_mask_mnoc_fault1 : 1;
        unsigned int sc_secondary_int_mask_comm_32k_int : 1;
        unsigned int sc_secondary_int_mask_ccpu_sftfiq_intr : 1;
        unsigned int sc_secondary_newint_mask_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_mask_arremap_error_flag : 1;
        unsigned int sc_secondary_int_mask_awremap_error_flag : 1;
        unsigned int sc_secondary_int_mask_usim0_detect_int : 1;
        unsigned int sc_secondary_int_mask_usim1_detect_int : 1;
        unsigned int reserved_1 : 5;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_axierrirq_n_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_axierrirq_n_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mwdt_bbe_ot_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mwdt_bbe_ot_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mnoc_fault0_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mnoc_fault0_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mnoc_fault1_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_mnoc_fault1_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_comm_32k_int_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_comm_32k_int_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_ccpu_sftfiq_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_ccpu_sftfiq_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_newint_mask_bbpmst_error_int_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_newint_mask_bbpmst_error_int_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_arremap_error_flag_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_arremap_error_flag_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_awremap_error_flag_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_awremap_error_flag_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_usim0_detect_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_usim0_detect_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_usim1_detect_int_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_NEWINT1_STATMSK_sc_secondary_int_mask_usim1_detect_int_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_en_wbbp_otdoa_int2bbe : 1;
        unsigned int sc_secondary_int_en_bbpslot_bbe16_in14 : 1;
        unsigned int sc_secondary_int_en_bbpslot_bbe16_in13 : 1;
        unsigned int sc_secondary_int_en_upacc_dsp_int : 1;
        unsigned int sc_secondary_int_en_upacc_arm_int : 1;
        unsigned int sc_secondary_int_en_g1_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_en_g1_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_en_g2_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_en_g2_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_en_bbpcom_ctu_g1_arm_intr : 1;
        unsigned int sc_secondary_int_en_bbpcom_ctu_g2_arm_intr : 1;
        unsigned int sc_secondary_int_en_bbpcom_ctu_w_arm_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_card1_0ms_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_wdrx_slp_awk_sw_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_clk_sw_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_card2_0ms_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_search_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_rake_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_decode_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_card1_time_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_card2_time_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_multi_search_intr : 1;
        unsigned int sc_secondary_int_en_wbbp_bbpmst_intr : 1;
        unsigned int sc_secondary_int_en_lte_dsp_warn_intr : 1;
        unsigned int sc_secondary_int_en_mwdt_bbe_intr : 1;
        unsigned int sc_secondary_int_en_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_en_mtimer8_intc : 1;
        unsigned int sc_secondary_int_en_mtimer9_intc : 1;
        unsigned int sc_secondary_int_en_muart0_intr : 1;
        unsigned int sc_secondary_int_en_uart3_intr : 1;
        unsigned int sc_secondary_int_en_uart0_intr : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_otdoa_int2bbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_otdoa_int2bbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpslot_bbe16_in14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpslot_bbe16_in14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpslot_bbe16_in13_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpslot_bbe16_in13_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_upacc_dsp_int_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_upacc_dsp_int_END (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_upacc_arm_int_START (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_upacc_arm_int_END (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g1_int_bbp_to_dsp_32k_START (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g1_int_bbp_to_dsp_32k_END (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g1_int_bbp_to_dsp_START (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g1_int_bbp_to_dsp_END (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g2_int_bbp_to_dsp_32k_START (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g2_int_bbp_to_dsp_32k_END (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g2_int_bbp_to_dsp_START (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_g2_int_bbp_to_dsp_END (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_g1_arm_intr_START (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_g1_arm_intr_END (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_g2_arm_intr_START (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_g2_arm_intr_END (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_w_arm_intr_START (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpcom_ctu_w_arm_intr_END (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card1_0ms_intr_START (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card1_0ms_intr_END (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_wdrx_slp_awk_sw_intr_START (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_wdrx_slp_awk_sw_intr_END (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_clk_sw_intr_START (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_clk_sw_intr_END (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card2_0ms_intr_START (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card2_0ms_intr_END (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_search_intr_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_search_intr_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_rake_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_rake_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_decode_intr_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_decode_intr_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card1_time_intr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card1_time_intr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card2_time_intr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_card2_time_intr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_multi_search_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_multi_search_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_bbpmst_intr_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_wbbp_bbpmst_intr_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_lte_dsp_warn_intr_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_lte_dsp_warn_intr_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mwdt_bbe_intr_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mwdt_bbe_intr_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpmst_error_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_bbpmst_error_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mtimer8_intc_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mtimer8_intc_END (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mtimer9_intc_START (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_mtimer9_intc_END (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_muart0_intr_START (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_muart0_intr_END (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_uart3_intr_START (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_uart3_intr_END (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_uart0_intr_START (30)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_EN_sc_secondary_int_en_uart0_intr_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_raw_wbbp_otdoa_int2bbe : 1;
        unsigned int sc_secondary_int_raw_bbpslot_bbe16_in14 : 1;
        unsigned int sc_secondary_int_raw_bbpslot_bbe16_in13 : 1;
        unsigned int sc_secondary_int_raw_upacc_dsp_int : 1;
        unsigned int sc_secondary_int_raw_upacc_arm_int : 1;
        unsigned int sc_secondary_int_raw_g1_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_raw_g1_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_raw_g2_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_raw_g2_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_raw_bbpcom_ctu_g1_arm_intr : 1;
        unsigned int sc_secondary_int_raw_bbpcom_ctu_g2_arm_intr : 1;
        unsigned int sc_secondary_int_raw_bbpcom_ctu_w_arm_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_card1_0ms_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_wdrx_slp_awk_sw_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_clk_sw_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_card2_0ms_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_search_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_rake_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_decode_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_card1_time_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_card2_time_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_multi_search_intr : 1;
        unsigned int sc_secondary_int_raw_wbbp_bbpmst_intr : 1;
        unsigned int sc_secondary_int_raw_lte_dsp_warn_intr : 1;
        unsigned int sc_secondary_int_raw_mwdt_bbe_intr : 1;
        unsigned int sc_secondary_int_raw_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_raw_mtimer8_intc : 1;
        unsigned int sc_secondary_int_raw_mtimer9_intc : 1;
        unsigned int sc_secondary_int_raw_muart0_intr : 1;
        unsigned int sc_secondary_int_raw_uart3_intr : 1;
        unsigned int sc_secondary_int_raw_uart0_intr : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_otdoa_int2bbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_otdoa_int2bbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpslot_bbe16_in14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpslot_bbe16_in14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpslot_bbe16_in13_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpslot_bbe16_in13_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_upacc_dsp_int_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_upacc_dsp_int_END (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_upacc_arm_int_START (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_upacc_arm_int_END (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g1_int_bbp_to_dsp_32k_START (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g1_int_bbp_to_dsp_32k_END (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g1_int_bbp_to_dsp_START (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g1_int_bbp_to_dsp_END (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g2_int_bbp_to_dsp_32k_START (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g2_int_bbp_to_dsp_32k_END (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g2_int_bbp_to_dsp_START (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_g2_int_bbp_to_dsp_END (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_g1_arm_intr_START (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_g1_arm_intr_END (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_g2_arm_intr_START (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_g2_arm_intr_END (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_w_arm_intr_START (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpcom_ctu_w_arm_intr_END (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card1_0ms_intr_START (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card1_0ms_intr_END (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_wdrx_slp_awk_sw_intr_START (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_wdrx_slp_awk_sw_intr_END (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_clk_sw_intr_START (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_clk_sw_intr_END (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card2_0ms_intr_START (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card2_0ms_intr_END (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_search_intr_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_search_intr_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_rake_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_rake_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_decode_intr_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_decode_intr_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card1_time_intr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card1_time_intr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card2_time_intr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_card2_time_intr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_multi_search_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_multi_search_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_bbpmst_intr_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_wbbp_bbpmst_intr_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_lte_dsp_warn_intr_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_lte_dsp_warn_intr_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mwdt_bbe_intr_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mwdt_bbe_intr_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpmst_error_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_bbpmst_error_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mtimer8_intc_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mtimer8_intc_END (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mtimer9_intc_START (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_mtimer9_intc_END (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_muart0_intr_START (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_muart0_intr_END (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_uart3_intr_START (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_uart3_intr_END (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_uart0_intr_START (30)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATRAW_sc_secondary_int_raw_uart0_intr_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_secondary_int_mask_wbbp_otdoa_int2bbe : 1;
        unsigned int sc_secondary_int_mask_bbpslot_bbe16_in14 : 1;
        unsigned int sc_secondary_int_mask_bbpslot_bbe16_in13 : 1;
        unsigned int sc_secondary_int_mask_upacc_dsp_int : 1;
        unsigned int sc_secondary_int_mask_upacc_arm_int : 1;
        unsigned int sc_secondary_int_mask_g1_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_mask_g1_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_mask_g2_int_bbp_to_dsp_32k : 1;
        unsigned int sc_secondary_int_mask_g2_int_bbp_to_dsp : 1;
        unsigned int sc_secondary_int_mask_bbpcom_ctu_g1_arm_intr : 1;
        unsigned int sc_secondary_int_mask_bbpcom_ctu_g2_arm_intr : 1;
        unsigned int sc_secondary_int_mask_bbpcom_ctu_w_arm_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_card1_0ms_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_wdrx_slp_awk_sw_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_clk_sw_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_card2_0ms_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_search_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_rake_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_decode_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_card1_time_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_card2_time_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_multi_search_intr : 1;
        unsigned int sc_secondary_int_mask_wbbp_bbpmst_intr : 1;
        unsigned int sc_secondary_int_mask_lte_dsp_warn_intr : 1;
        unsigned int sc_secondary_int_mask_mwdt_bbe_intr : 1;
        unsigned int sc_secondary_int_mask_bbpmst_error_int : 1;
        unsigned int sc_secondary_int_mask_mtimer8_intc : 1;
        unsigned int sc_secondary_int_mask_mtimer9_intc : 1;
        unsigned int sc_secondary_int_mask_muart0_intr : 1;
        unsigned int sc_secondary_int_mask_uart3_intr : 1;
        unsigned int sc_secondary_int_mask_uart0_intr : 1;
        unsigned int reserved : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_otdoa_int2bbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_otdoa_int2bbe_END (0)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpslot_bbe16_in14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpslot_bbe16_in14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpslot_bbe16_in13_START (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpslot_bbe16_in13_END (2)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_upacc_dsp_int_START (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_upacc_dsp_int_END (3)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_upacc_arm_int_START (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_upacc_arm_int_END (4)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g1_int_bbp_to_dsp_32k_START (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g1_int_bbp_to_dsp_32k_END (5)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g1_int_bbp_to_dsp_START (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g1_int_bbp_to_dsp_END (6)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g2_int_bbp_to_dsp_32k_START (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g2_int_bbp_to_dsp_32k_END (7)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g2_int_bbp_to_dsp_START (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_g2_int_bbp_to_dsp_END (8)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_g1_arm_intr_START (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_g1_arm_intr_END (9)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_g2_arm_intr_START (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_g2_arm_intr_END (10)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_w_arm_intr_START (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpcom_ctu_w_arm_intr_END (11)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card1_0ms_intr_START (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card1_0ms_intr_END (12)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_wdrx_slp_awk_sw_intr_START (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_wdrx_slp_awk_sw_intr_END (13)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_clk_sw_intr_START (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_clk_sw_intr_END (14)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card2_0ms_intr_START (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card2_0ms_intr_END (15)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_search_intr_START (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_search_intr_END (16)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_rake_intr_START (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_rake_intr_END (17)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_decode_intr_START (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_decode_intr_END (18)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card1_time_intr_START (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card1_time_intr_END (19)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card2_time_intr_START (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_card2_time_intr_END (20)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_multi_search_intr_START (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_multi_search_intr_END (21)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_bbpmst_intr_START (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_wbbp_bbpmst_intr_END (22)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_lte_dsp_warn_intr_START (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_lte_dsp_warn_intr_END (23)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mwdt_bbe_intr_START (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mwdt_bbe_intr_END (24)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpmst_error_int_START (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_bbpmst_error_int_END (25)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mtimer8_intc_START (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mtimer8_intc_END (26)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mtimer9_intc_START (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_mtimer9_intc_END (27)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_muart0_intr_START (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_muart0_intr_END (28)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_uart3_intr_START (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_uart3_intr_END (29)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_uart0_intr_START (30)
#define SOC_MODEM_SCTRL_MDMSC_SECONDARY_INT_STATMSK_sc_secondary_int_mask_uart0_intr_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_en0_usim0_detect_int : 1;
        unsigned int ccpu_wakeup_int_en0_usim1_detect_int : 1;
        unsigned int ccpu_wakeup_int_en0_GPIO2 : 1;
        unsigned int ccpu_wakeup_int_en0_mdmnoc_fault0_intr : 1;
        unsigned int ccpu_wakeup_int_en0_mdmnoc_fault1_intr : 1;
        unsigned int ccpu_wakeup_int_en0_ccpu_sftfiq_intr : 1;
        unsigned int reserved_0 : 1;
        unsigned int ccpu_wakeup_int_en0_GPIO7 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ccpu_wakeup_int_en0_GPIO9 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int ccpu_wakeup_int_en0_CSYSPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_en0_CDBGPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_en0_OTG_WKP_STS : 1;
        unsigned int ccpu_wakeup_int_en0_cbbp_intr01 : 1;
        unsigned int ccpu_wakeup_int_en0_RTC_INT : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer0 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer1 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer2 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer3 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer4 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer5 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer6 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer7 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer8 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer9 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer10 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer11 : 1;
        unsigned int ccpu_wakeup_int_en0_MTimer12 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_usim0_detect_int_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_usim0_detect_int_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_usim1_detect_int_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_usim1_detect_int_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO2_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO2_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_mdmnoc_fault0_intr_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_mdmnoc_fault0_intr_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_mdmnoc_fault1_intr_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_mdmnoc_fault1_intr_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_ccpu_sftfiq_intr_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_ccpu_sftfiq_intr_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO7_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO7_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO9_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_GPIO9_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_CSYSPWRUPREQ_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_CSYSPWRUPREQ_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_CDBGPWRUPREQ_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_CDBGPWRUPREQ_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_OTG_WKP_STS_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_OTG_WKP_STS_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_cbbp_intr01_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_cbbp_intr01_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_RTC_INT_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_RTC_INT_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer0_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer0_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer1_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer1_END (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer3_START (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer3_END (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer4_START (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer4_END (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer5_START (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer5_END (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer6_START (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer6_END (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer7_START (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer7_END (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer8_START (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer8_END (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer9_START (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer9_END (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer10_START (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer10_END (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer11_START (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer11_END (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer12_START (31)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN0_ccpu_wakeup_int_en0_MTimer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_raw0_usim0_detect_int : 1;
        unsigned int ccpu_wakeup_int_raw0_usim1_detect_int : 1;
        unsigned int ccpu_wakeup_int_raw0_GPIO2 : 1;
        unsigned int ccpu_wakeup_int_raw0_mdmnoc_fault0_intr : 1;
        unsigned int ccpu_wakeup_int_raw0_mdmnoc_fault1_intr : 1;
        unsigned int ccpu_wakeup_int_raw0_ccpu_sftfiq_intr : 1;
        unsigned int reserved_0 : 1;
        unsigned int ccpu_wakeup_int_raw0_GPIO7 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ccpu_wakeup_int_raw0_GPIO9 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int ccpu_wakeup_int_raw0_CSYSPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_raw0_CDBGPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_raw0_OTG_WKP_STS : 1;
        unsigned int ccpu_wakeup_int_raw0_cbbp_intr01 : 1;
        unsigned int ccpu_wakeup_int_raw0_RTC_INT : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer0 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer1 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer2 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer3 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer4 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer5 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer6 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer7 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer8 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer9 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer10 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer11 : 1;
        unsigned int ccpu_wakeup_int_raw0_MTimer12 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_usim0_detect_int_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_usim0_detect_int_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_usim1_detect_int_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_usim1_detect_int_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO2_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO2_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_mdmnoc_fault0_intr_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_mdmnoc_fault0_intr_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_mdmnoc_fault1_intr_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_mdmnoc_fault1_intr_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_ccpu_sftfiq_intr_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_ccpu_sftfiq_intr_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO7_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO7_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO9_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_GPIO9_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_CSYSPWRUPREQ_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_CSYSPWRUPREQ_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_CDBGPWRUPREQ_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_CDBGPWRUPREQ_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_OTG_WKP_STS_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_OTG_WKP_STS_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_cbbp_intr01_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_cbbp_intr01_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_RTC_INT_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_RTC_INT_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer0_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer0_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer1_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer1_END (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer3_START (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer3_END (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer4_START (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer4_END (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer5_START (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer5_END (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer6_START (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer6_END (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer7_START (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer7_END (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer8_START (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer8_END (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer9_START (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer9_END (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer10_START (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer10_END (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer11_START (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer11_END (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer12_START (31)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW0_ccpu_wakeup_int_raw0_MTimer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_mask0_usim0_detect_int : 1;
        unsigned int ccpu_wakeup_int_mask0_usim1_detect_int : 1;
        unsigned int ccpu_wakeup_int_mask0_GPIO2 : 1;
        unsigned int ccpu_wakeup_int_mask0_mdmnoc_fault0_intr : 1;
        unsigned int ccpu_wakeup_int_mask0_mdmnoc_fault1_intr : 1;
        unsigned int ccpu_wakeup_int_mask0_ccpu_sftfiq_intr : 1;
        unsigned int reserved_0 : 1;
        unsigned int ccpu_wakeup_int_mask0_GPIO7 : 1;
        unsigned int reserved_1 : 1;
        unsigned int ccpu_wakeup_int_mask0_GPIO9 : 1;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int reserved_5 : 1;
        unsigned int ccpu_wakeup_int_mask0_CSYSPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_mask0_CDBGPWRUPREQ : 1;
        unsigned int ccpu_wakeup_int_mask0_OTG_WKP_STS : 1;
        unsigned int ccpu_wakeup_int_mask0_cbbp_intr01 : 1;
        unsigned int ccpu_wakeup_int_mask0_RTC_INT : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer0 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer1 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer2 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer3 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer4 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer5 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer6 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer7 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer8 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer9 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer10 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer11 : 1;
        unsigned int ccpu_wakeup_int_mask0_MTimer12 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_usim0_detect_int_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_usim0_detect_int_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_usim1_detect_int_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_usim1_detect_int_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO2_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO2_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_mdmnoc_fault0_intr_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_mdmnoc_fault0_intr_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_mdmnoc_fault1_intr_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_mdmnoc_fault1_intr_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_ccpu_sftfiq_intr_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_ccpu_sftfiq_intr_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO7_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO7_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO9_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_GPIO9_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_CSYSPWRUPREQ_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_CSYSPWRUPREQ_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_CDBGPWRUPREQ_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_CDBGPWRUPREQ_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_OTG_WKP_STS_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_OTG_WKP_STS_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_cbbp_intr01_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_cbbp_intr01_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_RTC_INT_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_RTC_INT_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer0_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer0_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer1_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer1_END (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer2_START (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer2_END (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer3_START (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer3_END (22)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer4_START (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer4_END (23)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer5_START (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer5_END (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer6_START (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer6_END (25)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer7_START (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer7_END (26)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer8_START (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer8_END (27)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer9_START (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer9_END (28)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer10_START (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer10_END (29)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer11_START (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer11_END (30)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer12_START (31)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK0_ccpu_wakeup_int_mask0_MTimer12_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_en1_MTimer13 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer14 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer15 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer16 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer17 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer18 : 1;
        unsigned int ccpu_wakeup_int_en1_MTimer19 : 1;
        unsigned int ccpu_wakeup_int_en1_MWatchDog : 1;
        unsigned int ccpu_wakeup_int_en1_CCPU_WKUP_VOTE : 1;
        unsigned int ccpu_wakeup_int_en1_GBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_en1_GBBP2WKUP : 1;
        unsigned int ccpu_wakeup_int_en1_WBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_en1_lte_arm_wakeup_int : 1;
        unsigned int ccpu_wakeup_int_en1_tds_drx_arm_int1 : 1;
        unsigned int ccpu_wakeup_int_en1_IPC2CCPU_01 : 1;
        unsigned int ccpu_wakeup_int_en1_IPF_0 : 1;
        unsigned int ccpu_wakeup_int_en1_IPF_1 : 1;
        unsigned int ccpu_wakeup_int_en1_SOCP_0 : 1;
        unsigned int ccpu_wakeup_int_en1_SOCP_1 : 1;
        unsigned int ccpu_wakeup_int_en1_IPC2CCPU_06 : 1;
        unsigned int ccpu_wakeup_int_en1_SEC_IPC2CCPU_01 : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer13_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer13_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer15_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer15_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer16_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer16_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer17_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer17_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer18_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer18_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer19_START (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MTimer19_END (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MWatchDog_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_MWatchDog_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_CCPU_WKUP_VOTE_START (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_CCPU_WKUP_VOTE_END (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_GBBP1WKUP_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_GBBP1WKUP_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_GBBP2WKUP_START (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_GBBP2WKUP_END (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_WBBP1WKUP_START (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_WBBP1WKUP_END (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_lte_arm_wakeup_int_START (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_lte_arm_wakeup_int_END (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_tds_drx_arm_int1_START (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_tds_drx_arm_int1_END (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPC2CCPU_01_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPC2CCPU_01_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPF_0_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPF_0_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPF_1_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPF_1_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SOCP_0_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SOCP_0_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SOCP_1_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SOCP_1_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPC2CCPU_06_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_IPC2CCPU_06_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SEC_IPC2CCPU_01_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_EN1_ccpu_wakeup_int_en1_SEC_IPC2CCPU_01_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_raw1_MTimer13 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer14 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer15 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer16 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer17 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer18 : 1;
        unsigned int ccpu_wakeup_int_raw1_MTimer19 : 1;
        unsigned int ccpu_wakeup_int_raw1_MWatchDog : 1;
        unsigned int ccpu_wakeup_int_raw1_CCPU_WKUP_VOTE : 1;
        unsigned int ccpu_wakeup_int_raw1_GBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_raw1_GBBP2WKUP : 1;
        unsigned int ccpu_wakeup_int_raw1_WBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_raw1_lte_arm_wakeup_int : 1;
        unsigned int ccpu_wakeup_int_raw1_tds_drx_arm_int1 : 1;
        unsigned int ccpu_wakeup_int_raw1_IPC2CCPU_01 : 1;
        unsigned int ccpu_wakeup_int_raw1_IPF_0 : 1;
        unsigned int ccpu_wakeup_int_raw1_IPF_1 : 1;
        unsigned int ccpu_wakeup_int_raw1_SOCP_0 : 1;
        unsigned int ccpu_wakeup_int_raw1_SOCP_1 : 1;
        unsigned int ccpu_wakeup_int_raw1_IPC2CCPU_06 : 1;
        unsigned int ccpu_wakeup_int_raw1_SEC_IPC2CCPU_01 : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer13_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer13_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer15_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer15_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer16_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer16_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer17_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer17_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer18_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer18_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer19_START (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MTimer19_END (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MWatchDog_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_MWatchDog_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_CCPU_WKUP_VOTE_START (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_CCPU_WKUP_VOTE_END (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_GBBP1WKUP_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_GBBP1WKUP_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_GBBP2WKUP_START (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_GBBP2WKUP_END (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_WBBP1WKUP_START (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_WBBP1WKUP_END (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_lte_arm_wakeup_int_START (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_lte_arm_wakeup_int_END (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_tds_drx_arm_int1_START (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_tds_drx_arm_int1_END (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPC2CCPU_01_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPC2CCPU_01_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPF_0_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPF_0_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPF_1_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPF_1_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SOCP_0_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SOCP_0_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SOCP_1_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SOCP_1_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPC2CCPU_06_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_IPC2CCPU_06_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SEC_IPC2CCPU_01_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATRAW1_ccpu_wakeup_int_raw1_SEC_IPC2CCPU_01_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_wakeup_int_mask1_MTimer13 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer14 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer15 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer16 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer17 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer18 : 1;
        unsigned int ccpu_wakeup_int_mask1_MTimer19 : 1;
        unsigned int ccpu_wakeup_int_mask1_MWatchDog : 1;
        unsigned int ccpu_wakeup_int_mask1_CCPU_WKUP_VOTE : 1;
        unsigned int ccpu_wakeup_int_mask1_GBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_mask1_GBBP2WKUP : 1;
        unsigned int ccpu_wakeup_int_mask1_WBBP1WKUP : 1;
        unsigned int ccpu_wakeup_int_mask1_lte_arm_wakeup_int : 1;
        unsigned int ccpu_wakeup_int_mask1_tds_drx_arm_int1 : 1;
        unsigned int ccpu_wakeup_int_mask1_IPC2CCPU_01 : 1;
        unsigned int ccpu_wakeup_int_mask1_IPF_0 : 1;
        unsigned int ccpu_wakeup_int_mask1_IPF_1 : 1;
        unsigned int ccpu_wakeup_int_mask1_SOCP_0 : 1;
        unsigned int ccpu_wakeup_int_mask1_SOCP_1 : 1;
        unsigned int ccpu_wakeup_int_mask1_IPC2CCPU_06 : 1;
        unsigned int ccpu_wakeup_int_mask1_SEC_IPC2CCPU_01 : 1;
        unsigned int ccpu_wakeup_int_mask1 : 11;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer13_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer13_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer14_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer14_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer15_START (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer15_END (2)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer16_START (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer16_END (3)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer17_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer17_END (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer18_START (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer18_END (5)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer19_START (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MTimer19_END (6)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MWatchDog_START (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_MWatchDog_END (7)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_CCPU_WKUP_VOTE_START (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_CCPU_WKUP_VOTE_END (8)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_GBBP1WKUP_START (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_GBBP1WKUP_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_GBBP2WKUP_START (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_GBBP2WKUP_END (10)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_WBBP1WKUP_START (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_WBBP1WKUP_END (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_lte_arm_wakeup_int_START (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_lte_arm_wakeup_int_END (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_tds_drx_arm_int1_START (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_tds_drx_arm_int1_END (13)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPC2CCPU_01_START (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPC2CCPU_01_END (14)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPF_0_START (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPF_0_END (15)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPF_1_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPF_1_END (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SOCP_0_START (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SOCP_0_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SOCP_1_START (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SOCP_1_END (18)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPC2CCPU_06_START (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_IPC2CCPU_06_END (19)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SEC_IPC2CCPU_01_START (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_SEC_IPC2CCPU_01_END (20)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_START (21)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_WKUP_INT_STATMSK1_ccpu_wakeup_int_mask1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_statr_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_statr_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_mdmsc_int_statr_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_mdmsc_int_statr_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_mdmsc_int_statr_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_RAW_STAT_mdmsc_int_statr_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_statm_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_statm_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_mdmsc_int_statm_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_mdmsc_int_statm_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_mdmsc_int_statm_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_MASK_STAT_mdmsc_int_statm_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_clear_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_clear_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_mdmsc_int_clear_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_mdmsc_int_clear_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_mdmsc_int_clear_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_CLEAR_mdmsc_int_clear_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_en_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_en_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_EN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_mdmsc_int_en_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_mdmsc_int_en_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_mdmsc_int_en_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_mdmsc_int_en_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_dis_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_dis_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_DIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_DIS_mdmsc_int_dis_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_DIS_mdmsc_int_dis_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_DIS_mdmsc_int_dis_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_DIS_mdmsc_int_dis_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_int_en_sta_bbe16_mwtd_intr_req : 1;
        unsigned int mdmsc_int_en_sta_ccpu_mwtd_intr_req : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_mdmsc_int_en_sta_bbe16_mwtd_intr_req_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_mdmsc_int_en_sta_bbe16_mwtd_intr_req_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_mdmsc_int_en_sta_ccpu_mwtd_intr_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_EN_STAT_mdmsc_int_en_sta_ccpu_mwtd_intr_req_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_en0 : 1;
        unsigned int sc_int_count_en1 : 1;
        unsigned int sc_int_count_en2 : 1;
        unsigned int sc_int_count_en3 : 1;
        unsigned int sc_int_count_en4 : 1;
        unsigned int sc_int_count_en5 : 1;
        unsigned int sc_int_count_en6 : 1;
        unsigned int sc_int_count_en7 : 1;
        unsigned int sc_int_count_en8 : 1;
        unsigned int sc_int_count_en9 : 1;
        unsigned int sc_int_count_en10 : 1;
        unsigned int sc_int_count_en11 : 1;
        unsigned int sc_int_count_en12 : 1;
        unsigned int sc_int_count_en13 : 1;
        unsigned int sc_int_count_en14 : 1;
        unsigned int sc_int_count_en15 : 1;
        unsigned int sc_int_count_en16 : 1;
        unsigned int sc_int_count_en17 : 1;
        unsigned int sc_int_count_en18 : 1;
        unsigned int sc_int_count_en19 : 1;
        unsigned int sc_int_count_en20 : 1;
        unsigned int sc_int_count_en21 : 1;
        unsigned int sc_int_count_en22 : 1;
        unsigned int sc_int_count_en23 : 1;
        unsigned int sc_int_count_en24 : 1;
        unsigned int sc_int_count_en25 : 1;
        unsigned int sc_int_count_en26 : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int sc_int_count_en29 : 1;
        unsigned int sc_int_count_en30 : 1;
        unsigned int sc_int_count_en31 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en0_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en1_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en1_END (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en2_START (2)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en2_END (2)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en3_START (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en3_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en4_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en4_END (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en5_START (5)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en5_END (5)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en6_START (6)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en6_END (6)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en7_START (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en7_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en8_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en8_END (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en9_START (9)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en9_END (9)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en10_START (10)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en10_END (10)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en11_START (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en11_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en12_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en12_END (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en13_START (13)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en13_END (13)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en14_START (14)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en14_END (14)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en15_START (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en15_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en16_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en16_END (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en17_START (17)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en17_END (17)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en18_START (18)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en18_END (18)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en19_START (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en19_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en20_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en20_END (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en21_START (21)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en21_END (21)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en22_START (22)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en22_END (22)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en23_START (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en23_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en24_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en24_END (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en25_START (25)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en25_END (25)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en26_START (26)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en26_END (26)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en29_START (29)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en29_END (29)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en30_START (30)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en30_END (30)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en31_START (31)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN0_sc_int_count_en31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_en32 : 1;
        unsigned int sc_int_count_en33 : 1;
        unsigned int sc_int_count_en34 : 1;
        unsigned int sc_int_count_en35 : 1;
        unsigned int sc_int_count_en36 : 1;
        unsigned int sc_int_count_en37 : 1;
        unsigned int sc_int_count_en38 : 1;
        unsigned int sc_int_count_en39 : 1;
        unsigned int sc_int_count_en40 : 1;
        unsigned int sc_int_count_en41 : 1;
        unsigned int sc_int_count_en42 : 1;
        unsigned int sc_int_count_en43 : 1;
        unsigned int sc_int_count_en44 : 1;
        unsigned int sc_int_count_en45 : 1;
        unsigned int sc_int_count_en46 : 1;
        unsigned int sc_int_count_en47 : 1;
        unsigned int sc_int_count_en48 : 1;
        unsigned int sc_int_count_en49 : 1;
        unsigned int sc_int_count_en50 : 1;
        unsigned int sc_int_count_en51 : 1;
        unsigned int sc_int_count_en52 : 1;
        unsigned int sc_int_count_en53 : 1;
        unsigned int sc_int_count_en54 : 1;
        unsigned int sc_int_count_en55 : 1;
        unsigned int sc_int_count_en56 : 1;
        unsigned int sc_int_count_en57 : 1;
        unsigned int sc_int_count_en58 : 1;
        unsigned int sc_int_count_en59 : 1;
        unsigned int sc_int_count_en60 : 1;
        unsigned int sc_int_count_en61 : 1;
        unsigned int sc_int_count_en62 : 1;
        unsigned int sc_int_count_en63 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en32_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en32_END (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en33_START (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en33_END (1)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en34_START (2)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en34_END (2)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en35_START (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en35_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en36_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en36_END (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en37_START (5)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en37_END (5)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en38_START (6)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en38_END (6)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en39_START (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en39_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en40_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en40_END (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en41_START (9)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en41_END (9)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en42_START (10)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en42_END (10)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en43_START (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en43_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en44_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en44_END (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en45_START (13)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en45_END (13)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en46_START (14)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en46_END (14)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en47_START (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en47_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en48_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en48_END (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en49_START (17)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en49_END (17)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en50_START (18)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en50_END (18)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en51_START (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en51_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en52_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en52_END (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en53_START (21)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en53_END (21)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en54_START (22)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en54_END (22)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en55_START (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en55_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en56_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en56_END (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en57_START (25)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en57_END (25)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en58_START (26)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en58_END (26)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en59_START (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en59_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en60_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en60_END (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en61_START (29)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en61_END (29)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en62_START (30)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en62_END (30)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en63_START (31)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_EN1_sc_int_count_en63_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta0 : 4;
        unsigned int sc_int_count_sta1 : 4;
        unsigned int sc_int_count_sta2 : 4;
        unsigned int sc_int_count_sta3 : 4;
        unsigned int sc_int_count_sta4 : 4;
        unsigned int sc_int_count_sta5 : 4;
        unsigned int sc_int_count_sta6 : 4;
        unsigned int sc_int_count_sta7 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta0_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta1_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta1_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta2_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta2_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta3_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta3_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta4_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta4_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta5_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta5_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta6_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta6_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta7_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT0_sc_int_count_sta7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta8 : 4;
        unsigned int sc_int_count_sta9 : 4;
        unsigned int sc_int_count_sta10 : 4;
        unsigned int sc_int_count_sta11 : 4;
        unsigned int sc_int_count_sta12 : 4;
        unsigned int sc_int_count_sta13 : 4;
        unsigned int sc_int_count_sta14 : 4;
        unsigned int sc_int_count_sta15 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta8_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta8_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta9_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta9_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta10_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta10_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta11_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta11_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta12_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta12_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta13_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta13_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta14_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta14_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta15_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT1_sc_int_count_sta15_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta16 : 4;
        unsigned int sc_int_count_sta17 : 4;
        unsigned int sc_int_count_sta18 : 4;
        unsigned int sc_int_count_sta19 : 4;
        unsigned int sc_int_count_sta20 : 4;
        unsigned int sc_int_count_sta21 : 4;
        unsigned int sc_int_count_sta22 : 4;
        unsigned int sc_int_count_sta23 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta16_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta16_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta17_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta17_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta18_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta18_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta19_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta19_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta20_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta20_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta21_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta21_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta22_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta22_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta23_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT2_sc_int_count_sta23_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta24 : 4;
        unsigned int sc_int_count_sta25 : 4;
        unsigned int sc_int_count_sta26 : 4;
        unsigned int sc_int_count_sta27 : 4;
        unsigned int sc_int_count_sta28 : 4;
        unsigned int sc_int_count_sta29 : 4;
        unsigned int sc_int_count_sta30 : 4;
        unsigned int sc_int_count_sta31 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta24_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta24_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta25_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta25_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta26_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta26_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta27_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta27_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta28_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta28_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta29_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta29_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta30_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta30_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta31_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT3_sc_int_count_sta31_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta32 : 4;
        unsigned int sc_int_count_sta33 : 4;
        unsigned int sc_int_count_sta34 : 4;
        unsigned int sc_int_count_sta35 : 4;
        unsigned int sc_int_count_sta36 : 4;
        unsigned int sc_int_count_sta37 : 4;
        unsigned int sc_int_count_sta38 : 4;
        unsigned int sc_int_count_sta39 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta32_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta32_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta33_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta33_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta34_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta34_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta35_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta35_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta36_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta36_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta37_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta37_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta38_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta38_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta39_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT4_sc_int_count_sta39_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_int_count_sta40 : 4;
        unsigned int sc_int_count_sta41 : 4;
        unsigned int sc_int_count_sta42 : 4;
        unsigned int sc_int_count_sta43 : 4;
        unsigned int sc_int_count_sta44 : 4;
        unsigned int sc_int_count_sta45 : 4;
        unsigned int sc_int_count_sta46 : 4;
        unsigned int sc_int_count_sta47 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta40_START (0)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta40_END (3)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta41_START (4)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta41_END (7)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta42_START (8)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta42_END (11)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta43_START (12)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta43_END (15)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta44_START (16)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta44_END (19)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta45_START (20)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta45_END (23)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta46_START (24)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta46_END (27)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta47_START (28)
#define SOC_MODEM_SCTRL_MDMSC_INT_COUNT_STAT5_sc_int_count_sta47_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_clk_sel : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBPCLK_SEL_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBPCLK_SEL_CTRL_bbp_clk_sel_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBPCLK_SEL_CTRL_bbp_clk_sel_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_debug_reset : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_DEBUG_RSTCTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEBUG_RSTCTRL_bbe16_debug_reset_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEBUG_RSTCTRL_bbe16_debug_reset_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en0_ccpu_dualtimer0_en0 : 2;
        unsigned int timer_en0_ccpu_dualtimer0_en1 : 2;
        unsigned int timer_en0_ccpu_dualtimer1_en0 : 2;
        unsigned int timer_en0_ccpu_dualtimer1_en1 : 2;
        unsigned int timer_en0_ccpu_dualtimer2_en0 : 2;
        unsigned int timer_en0_ccpu_dualtimer2_en1 : 2;
        unsigned int timer_en0_ccpu_dualtimer3_en0 : 2;
        unsigned int timer_en0_ccpu_dualtimer3_en1 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer0_en0 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer0_en1 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer1_en0 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer1_en1 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer2_en0 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer2_en1 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer3_en0 : 2;
        unsigned int timer_en0_msk_ccpu_dualtimer3_en1 : 2;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer0_en0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer0_en0_END (1)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer0_en1_START (2)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer0_en1_END (3)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer1_en0_START (4)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer1_en0_END (5)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer1_en1_START (6)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer1_en1_END (7)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer2_en0_START (8)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer2_en0_END (9)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer2_en1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer2_en1_END (11)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer3_en0_START (12)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer3_en0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer3_en1_START (14)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_ccpu_dualtimer3_en1_END (15)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer0_en0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer0_en0_END (17)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer0_en1_START (18)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer0_en1_END (19)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer1_en0_START (20)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer1_en0_END (21)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer1_en1_START (22)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer1_en1_END (23)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer2_en0_START (24)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer2_en0_END (25)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer2_en1_START (26)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer2_en1_END (27)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer3_en0_START (28)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer3_en0_END (29)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer3_en1_START (30)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN0_timer_en0_msk_ccpu_dualtimer3_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer_en1_ccpu_dualtimer4_en0 : 2;
        unsigned int timer_en1_ccpu_dualtimer4_en1 : 2;
        unsigned int timer_en1_ccpu_dualtimer5_en0 : 2;
        unsigned int timer_en1_ccpu_dualtimer5_en1 : 2;
        unsigned int timer_en1_ccpu_dualtimer6_en0 : 2;
        unsigned int timer_en1_ccpu_dualtimer6_en1 : 2;
        unsigned int timer_en1_ccpu_dualtimer7_en0 : 2;
        unsigned int timer_en1_ccpu_dualtimer7_en1 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer4_en0 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer4_en1 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer5_en0 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer5_en1 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer6_en0 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer6_en1 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer7_en0 : 2;
        unsigned int timer_en1_msk_ccpu_dualtimer7_en1 : 2;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer4_en0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer4_en0_END (1)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer4_en1_START (2)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer4_en1_END (3)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer5_en0_START (4)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer5_en0_END (5)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer5_en1_START (6)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer5_en1_END (7)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer6_en0_START (8)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer6_en0_END (9)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer6_en1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer6_en1_END (11)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer7_en0_START (12)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer7_en0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer7_en1_START (14)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_ccpu_dualtimer7_en1_END (15)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer4_en0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer4_en0_END (17)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer4_en1_START (18)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer4_en1_END (19)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer5_en0_START (20)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer5_en0_END (21)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer5_en1_START (22)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer5_en1_END (23)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer6_en0_START (24)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer6_en0_END (25)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer6_en1_START (26)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer6_en1_END (27)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer7_en0_START (28)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer7_en0_END (29)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer7_en1_START (30)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN1_timer_en1_msk_ccpu_dualtimer7_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 8;
        unsigned int timer_en2_ccpu_dualtimer8_en0 : 2;
        unsigned int timer_en2_ccpu_dualtimer8_en1 : 2;
        unsigned int timer_en2_ccpu_dualtimer9_en0 : 2;
        unsigned int timer_en2_ccpu_dualtimer9_en1 : 2;
        unsigned int reserved_1 : 8;
        unsigned int timer_en2_msk_ccpu_dualtimer8_en0 : 2;
        unsigned int timer_en2_msk_ccpu_dualtimer8_en1 : 2;
        unsigned int timer_en2_msk_ccpu_dualtimer9_en0 : 2;
        unsigned int timer_en2_msk_ccpu_dualtimer9_en1 : 2;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer8_en0_START (8)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer8_en0_END (9)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer8_en1_START (10)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer8_en1_END (11)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer9_en0_START (12)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer9_en0_END (13)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer9_en1_START (14)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_ccpu_dualtimer9_en1_END (15)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer8_en0_START (24)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer8_en0_END (25)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer8_en1_START (26)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer8_en1_END (27)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer9_en0_START (28)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer9_en0_END (29)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer9_en1_START (30)
#define SOC_MODEM_SCTRL_MDMSC_TIMER_EN2_timer_en2_msk_ccpu_dualtimer9_en1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int remap_error_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL4_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL4_remap_error_clr_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL4_remap_error_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int arremap_error_flag : 1;
        unsigned int awremap_error_flag : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_arremap_error_flag_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_arremap_error_flag_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_awremap_error_flag_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL_RPT_awremap_error_flag_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sram_addr_cfg_value : 12;
        unsigned int sram_addr_boundary : 20;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_sram_addr_cfg_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_sram_addr_cfg_value_END (11)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_sram_addr_boundary_START (12)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL3_sram_addr_boundary_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_remap_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL2_ccpu_remap_en_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL2_ccpu_remap_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_remap_cfg_value : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL0_ccpu_remap_cfg_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL0_ccpu_remap_cfg_value_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs_ccpu_dbg_rst_ctrl : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL1_cs_ccpu_dbg_rst_ctrl_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_DEFCTRL1_cs_ccpu_dbg_rst_ctrl_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gbbp_gps_restrain_sel : 1;
        unsigned int gbbp_led_restrain_sel : 1;
        unsigned int clk_en_sysnoc_mdm : 1;
        unsigned int reserved_0 : 2;
        unsigned int modemnoc_timeout_en : 1;
        unsigned int tcxo0_afc_high_z : 1;
        unsigned int tcxo1_afc_high_z : 1;
        unsigned int alwayson_and_periph_sys_ctrl0_sci0 : 1;
        unsigned int alwayson_and_periph_sys_ctrl0_sci1 : 1;
        unsigned int reserved_1 : 6;
        unsigned int gbbp_gps_restrain_sel_msk : 1;
        unsigned int gbbp_led_restrain_sel_msk : 1;
        unsigned int clk_en_sysnoc_mdm_msk : 1;
        unsigned int reserved_2 : 2;
        unsigned int modemnoc_timeout_en_msk : 1;
        unsigned int tcxo0_afc_high_z_msk : 1;
        unsigned int tcxo1_afc_high_z_msk : 1;
        unsigned int alwayson_and_periph_sys_ctrl0_msk_sci0 : 1;
        unsigned int alwayson_and_periph_sys_ctrl0_msk_sci1 : 1;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_gps_restrain_sel_START (0)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_gps_restrain_sel_END (0)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_led_restrain_sel_START (1)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_led_restrain_sel_END (1)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_clk_en_sysnoc_mdm_START (2)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_clk_en_sysnoc_mdm_END (2)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_modemnoc_timeout_en_START (5)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_modemnoc_timeout_en_END (5)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo0_afc_high_z_START (6)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo0_afc_high_z_END (6)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo1_afc_high_z_START (7)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo1_afc_high_z_END (7)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_sci0_START (8)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_sci0_END (8)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_sci1_START (9)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_sci1_END (9)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_gps_restrain_sel_msk_START (16)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_gps_restrain_sel_msk_END (16)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_led_restrain_sel_msk_START (17)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_gbbp_led_restrain_sel_msk_END (17)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_clk_en_sysnoc_mdm_msk_START (18)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_clk_en_sysnoc_mdm_msk_END (18)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_modemnoc_timeout_en_msk_START (21)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_modemnoc_timeout_en_msk_END (21)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo0_afc_high_z_msk_START (22)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo0_afc_high_z_msk_END (22)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo1_afc_high_z_msk_START (23)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_tcxo1_afc_high_z_msk_END (23)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_msk_sci0_START (24)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_msk_sci0_END (24)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_msk_sci1_START (25)
#define SOC_MODEM_SCTRL_MDMSC_ALWAYSON_SYS_CTRL_alwayson_and_periph_sys_ctrl0_msk_sci1_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gucicom0sel_mode : 1;
        unsigned int gucicom0soft_auto_clk_gate_en : 1;
        unsigned int gucicom0soft_gate_clk_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 1;
        unsigned int mdmdmac_auto_clken0_sel : 1;
        unsigned int mdmdmac_auto_clken1_sel : 1;
        unsigned int dw_x2x_auto_clk_gate_en : 1;
        unsigned int dw_axi_auto_clk_gate_en : 1;
        unsigned int UPACC_auto_clk_gate_en : 1;
        unsigned int upacc_soft_gate_clk_en : 1;
        unsigned int bbe16_axi_auto_clk_gate_en : 1;
        unsigned int ddr_x2x_auto_clk_gate_en : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int gucicom0sel_mode_msk : 1;
        unsigned int gucicom0soft_auto_clk_gate_en_msk : 1;
        unsigned int gucicom0soft_gate_clk_en_msk : 1;
        unsigned int reserved_5 : 1;
        unsigned int reserved_6 : 1;
        unsigned int reserved_7 : 1;
        unsigned int mdmdmac_auto_clken0_sel_msk : 1;
        unsigned int mdmdmac_auto_clken1_sel_msk : 1;
        unsigned int dw_x2x_auto_clk_gate_en_msk : 1;
        unsigned int dw_axi_auto_clk_gate_en_msk : 1;
        unsigned int UPACC_auto_clk_gate_en_msk : 1;
        unsigned int upacc_soft_gate_clk_en_msk : 1;
        unsigned int bbe16_axi_auto_clk_gate_en_msk : 1;
        unsigned int ddr_x2x_auto_clk_gate_en_msk : 1;
        unsigned int reserved_8 : 1;
        unsigned int reserved_9 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0sel_mode_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0sel_mode_END (0)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_auto_clk_gate_en_START (1)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_auto_clk_gate_en_END (1)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_gate_clk_en_START (2)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_gate_clk_en_END (2)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken0_sel_START (6)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken0_sel_END (6)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken1_sel_START (7)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken1_sel_END (7)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_x2x_auto_clk_gate_en_START (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_x2x_auto_clk_gate_en_END (8)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_axi_auto_clk_gate_en_START (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_axi_auto_clk_gate_en_END (9)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_UPACC_auto_clk_gate_en_START (10)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_UPACC_auto_clk_gate_en_END (10)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_upacc_soft_gate_clk_en_START (11)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_upacc_soft_gate_clk_en_END (11)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_bbe16_axi_auto_clk_gate_en_START (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_bbe16_axi_auto_clk_gate_en_END (12)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_ddr_x2x_auto_clk_gate_en_START (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_ddr_x2x_auto_clk_gate_en_END (13)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0sel_mode_msk_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0sel_mode_msk_END (16)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_auto_clk_gate_en_msk_START (17)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_auto_clk_gate_en_msk_END (17)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_gate_clk_en_msk_START (18)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_gucicom0soft_gate_clk_en_msk_END (18)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken0_sel_msk_START (22)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken0_sel_msk_END (22)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken1_sel_msk_START (23)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_mdmdmac_auto_clken1_sel_msk_END (23)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_x2x_auto_clk_gate_en_msk_START (24)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_x2x_auto_clk_gate_en_msk_END (24)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_axi_auto_clk_gate_en_msk_START (25)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_dw_axi_auto_clk_gate_en_msk_END (25)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_UPACC_auto_clk_gate_en_msk_START (26)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_UPACC_auto_clk_gate_en_msk_END (26)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_upacc_soft_gate_clk_en_msk_START (27)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_upacc_soft_gate_clk_en_msk_END (27)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_bbe16_axi_auto_clk_gate_en_msk_START (28)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_bbe16_axi_auto_clk_gate_en_msk_END (28)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_ddr_x2x_auto_clk_gate_en_msk_START (29)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_CTRL_ddr_x2x_auto_clk_gate_en_msk_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gucipher0_clk_state : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 30;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PERIPH_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_STAT_gucipher0_clk_state_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PERIPH_STAT_gucipher0_clk_state_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_noc_master_press_edmac : 3;
        unsigned int reserved_0 : 1;
        unsigned int modem_noc_master_hurry_edmac : 3;
        unsigned int reserved_1 : 1;
        unsigned int modem_noc_master_awqos_edmac : 3;
        unsigned int reserved_2 : 1;
        unsigned int modem_noc_master_arqos_edmac : 3;
        unsigned int reserved_3 : 1;
        unsigned int modem_noc_master_press_lcipher : 3;
        unsigned int reserved_4 : 1;
        unsigned int modem_noc_master_hurry_lcipher : 3;
        unsigned int reserved_5 : 1;
        unsigned int modem_noc_master_awqos_lcipher : 3;
        unsigned int reserved_6 : 1;
        unsigned int modem_noc_master_arqos_lcipher : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_press_edmac_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_press_edmac_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_hurry_edmac_START (4)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_hurry_edmac_END (6)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_awqos_edmac_START (8)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_awqos_edmac_END (10)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_arqos_edmac_START (12)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_arqos_edmac_END (14)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_press_lcipher_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_press_lcipher_END (18)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_hurry_lcipher_START (20)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_hurry_lcipher_END (22)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_awqos_lcipher_START (24)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_awqos_lcipher_END (26)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_arqos_lcipher_START (28)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL0_modem_noc_master_arqos_lcipher_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_noc_master_press_upacc : 3;
        unsigned int reserved_0 : 1;
        unsigned int modem_noc_master_hurry_upacc : 3;
        unsigned int reserved_1 : 1;
        unsigned int modem_noc_master_awqos_upacc : 3;
        unsigned int reserved_2 : 1;
        unsigned int modem_noc_master_arqos_upacc : 3;
        unsigned int reserved_3 : 1;
        unsigned int modem_noc_master_press_gucipher : 3;
        unsigned int reserved_4 : 1;
        unsigned int modem_noc_master_hurry_gucipher : 3;
        unsigned int reserved_5 : 1;
        unsigned int modem_noc_master_awqos_gucipher : 3;
        unsigned int reserved_6 : 1;
        unsigned int modem_noc_master_arqos_gucipher : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_press_upacc_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_press_upacc_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_hurry_upacc_START (4)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_hurry_upacc_END (6)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_awqos_upacc_START (8)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_awqos_upacc_END (10)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_arqos_upacc_START (12)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_arqos_upacc_END (14)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_press_gucipher_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_press_gucipher_END (18)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_hurry_gucipher_START (20)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_hurry_gucipher_END (22)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_awqos_gucipher_START (24)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_awqos_gucipher_END (26)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_arqos_gucipher_START (28)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL1_modem_noc_master_arqos_gucipher_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_noc_master_press_lbbp0 : 3;
        unsigned int reserved_0 : 1;
        unsigned int modem_noc_master_hurry_lbbp0 : 3;
        unsigned int reserved_1 : 1;
        unsigned int modem_noc_master_awqos_lbbp0 : 3;
        unsigned int reserved_2 : 1;
        unsigned int modem_noc_master_arqos_lbbp0 : 3;
        unsigned int reserved_3 : 1;
        unsigned int modem_noc_master_press_gubbp0 : 3;
        unsigned int reserved_4 : 1;
        unsigned int modem_noc_master_hurry_gubbp0 : 3;
        unsigned int reserved_5 : 1;
        unsigned int modem_noc_master_awqos_gubbp0 : 3;
        unsigned int reserved_6 : 1;
        unsigned int modem_noc_master_arqos_gubbp0 : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_press_lbbp0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_press_lbbp0_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_hurry_lbbp0_START (4)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_hurry_lbbp0_END (6)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_awqos_lbbp0_START (8)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_awqos_lbbp0_END (10)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_arqos_lbbp0_START (12)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_arqos_lbbp0_END (14)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_press_gubbp0_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_press_gubbp0_END (18)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_hurry_gubbp0_START (20)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_hurry_gubbp0_END (22)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_awqos_gubbp0_START (24)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_awqos_gubbp0_END (26)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_arqos_gubbp0_START (28)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL2_modem_noc_master_arqos_gubbp0_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_noc_master_press_ccpu : 3;
        unsigned int reserved_0 : 1;
        unsigned int modem_noc_master_hurry_ccpu : 3;
        unsigned int reserved_1 : 1;
        unsigned int modem_noc_master_awqos_ccpu : 3;
        unsigned int reserved_2 : 1;
        unsigned int modem_noc_master_arqos_ccpu : 3;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_press_ccpu_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_press_ccpu_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_hurry_ccpu_START (4)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_hurry_ccpu_END (6)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_awqos_ccpu_START (8)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_awqos_ccpu_END (10)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_arqos_ccpu_START (12)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL3_modem_noc_master_arqos_ccpu_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsys_ramctrl_d1w2r : 16;
        unsigned int mdmsys_ramctrl_s : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MEMCTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MEMCTRL_mdmsys_ramctrl_d1w2r_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MEMCTRL_mdmsys_ramctrl_d1w2r_END (15)
#define SOC_MODEM_SCTRL_MDMSC_MEMCTRL_mdmsys_ramctrl_s_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MEMCTRL_mdmsys_ramctrl_s_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_notrace_mem_ctrl : 16;
        unsigned int bbe16_trace_mem_ctrl : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_bbe16_notrace_mem_ctrl_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_bbe16_notrace_mem_ctrl_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_bbe16_trace_mem_ctrl_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_MEMCTRL_bbe16_trace_mem_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_lowpower_en : 1;
        unsigned int bbe16_pwrdwn_req : 1;
        unsigned int bbe16_overaddr_prot_rev : 1;
        unsigned int bbe16_overaddr_prot_bypass : 1;
        unsigned int reserved_0 : 12;
        unsigned int bbe16_lowpower_en_msk : 1;
        unsigned int bbe16_pwrdwn_req_msk : 1;
        unsigned int bbe16_ddraddr_prot_rev_msk : 1;
        unsigned int bbe16_ddraddr_prot_bypass_msk : 1;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_lowpower_en_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_lowpower_en_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_pwrdwn_req_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_pwrdwn_req_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_overaddr_prot_rev_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_overaddr_prot_rev_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_overaddr_prot_bypass_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_overaddr_prot_bypass_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_lowpower_en_msk_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_lowpower_en_msk_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_pwrdwn_req_msk_START (17)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_pwrdwn_req_msk_END (17)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_ddraddr_prot_rev_msk_START (18)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_ddraddr_prot_rev_msk_END (18)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_ddraddr_prot_bypass_msk_START (19)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DEFCTRL_bbe16_ddraddr_prot_bypass_msk_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_tcm_sel0 : 1;
        unsigned int bbe16_tcm_sel1 : 1;
        unsigned int bbe16_tcm_sel2 : 1;
        unsigned int bbe16_tcm_sel3 : 1;
        unsigned int bbe16_tcm_sel4 : 1;
        unsigned int bbe16_tcm_sel5 : 1;
        unsigned int bbe16_tcm_sel6 : 1;
        unsigned int bbe16_tcm_sel7 : 1;
        unsigned int bbe16_tcm_sel8 : 1;
        unsigned int bbe16_tcm_sel9 : 1;
        unsigned int bbe16_tcm_sel10 : 1;
        unsigned int bbe16_tcm_sel11 : 1;
        unsigned int bbe16_tcm_sel12 : 1;
        unsigned int bbe16_tcm_sel13 : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel0_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel0_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel1_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel1_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel2_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel2_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel3_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel3_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel4_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel4_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel5_START (5)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel5_END (5)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel6_START (6)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel6_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel7_START (7)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel7_END (7)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel8_START (8)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel8_END (8)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel9_START (9)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel9_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel10_START (10)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel10_END (10)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel11_START (11)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel11_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel12_START (12)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel12_END (12)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel13_START (13)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_TCM_SEL_bbe16_tcm_sel13_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_runstall : 1;
        unsigned int bbe16_statvectorsel : 1;
        unsigned int bbe16_ocdhaltonreset : 1;
        unsigned int reserved_0 : 1;
        unsigned int bbe16_pireqpriority : 2;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_runstall_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_runstall_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_statvectorsel_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_statvectorsel_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_ocdhaltonreset_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_ocdhaltonreset_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_pireqpriority_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL0_bbe16_pireqpriority_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_nmi_irq : 16;
        unsigned int bbe16_nmi_irq_msk : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_bbe16_nmi_irq_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_bbe16_nmi_irq_END (15)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_bbe16_nmi_irq_msk_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_CTRL1_bbe16_nmi_irq_msk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_tie_expstate : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_STAT0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT0_bbe16_tie_expstate_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT0_bbe16_tie_expstate_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 3;
        unsigned int bbe16_xocdmode : 1;
        unsigned int bbe16_pwaitmode : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_bbe16_xocdmode_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_bbe16_xocdmode_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_bbe16_pwaitmode_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_STAT1_bbe16_pwaitmode_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_2ddr_valid_laddr : 12;
        unsigned int reserved_0 : 4;
        unsigned int bbe16_2ddr_valid_haddr : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_bbe16_2ddr_valid_laddr_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_bbe16_2ddr_valid_laddr_END (11)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_bbe16_2ddr_valid_haddr_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_DDRADDR_PROT_bbe16_2ddr_valid_haddr_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe_domain_idlereq : 1;
        unsigned int bbp_domain_idlereq : 1;
        unsigned int reserved_0 : 14;
        unsigned int bbe_domain_idlereq_msk : 1;
        unsigned int bbp_domain_idlereq_msk : 1;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbe_domain_idlereq_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbe_domain_idlereq_END (0)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbp_domain_idlereq_START (1)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbp_domain_idlereq_END (1)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbe_domain_idlereq_msk_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbe_domain_idlereq_msk_END (16)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbp_domain_idlereq_msk_START (17)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_CTRL_bbp_domain_idlereq_msk_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe_domain_idleack : 1;
        unsigned int bbe_domain_idle : 1;
        unsigned int bbp_domain_idleack : 1;
        unsigned int bbp_domain_idle : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbe_domain_idleack_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbe_domain_idleack_END (0)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbe_domain_idle_START (1)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbe_domain_idle_END (1)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbp_domain_idleack_START (2)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbp_domain_idleack_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbp_domain_idle_START (3)
#define SOC_MODEM_SCTRL_MDMSC_MDMNOC_POWER_DOMAIN_RPT_bbp_domain_idle_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_noc_master_press_lbbp1 : 3;
        unsigned int reserved_0 : 1;
        unsigned int modem_noc_master_hurry_lbbp1 : 3;
        unsigned int reserved_1 : 1;
        unsigned int modem_noc_master_awqos_lbbp1 : 3;
        unsigned int reserved_2 : 1;
        unsigned int modem_noc_master_arqos_lbbp1 : 3;
        unsigned int reserved_3 : 1;
        unsigned int modem_noc_master_press_gubbp1 : 3;
        unsigned int reserved_4 : 1;
        unsigned int modem_noc_master_hurry_gubbp1 : 3;
        unsigned int reserved_5 : 1;
        unsigned int modem_noc_master_awqos_gubbp1 : 3;
        unsigned int reserved_6 : 1;
        unsigned int modem_noc_master_arqos_gubbp1 : 3;
        unsigned int reserved_7 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_press_lbbp1_START (0)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_press_lbbp1_END (2)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_hurry_lbbp1_START (4)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_hurry_lbbp1_END (6)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_awqos_lbbp1_START (8)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_awqos_lbbp1_END (10)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_arqos_lbbp1_START (12)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_arqos_lbbp1_END (14)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_press_gubbp1_START (16)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_press_gubbp1_END (18)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_hurry_gubbp1_START (20)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_hurry_gubbp1_END (22)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_awqos_gubbp1_START (24)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_awqos_gubbp1_END (26)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_arqos_gubbp1_START (28)
#define SOC_MODEM_SCTRL_MDMSC_MNOC_QOSCTRL4_modem_noc_master_arqos_gubbp1_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbpaxi_priority_set : 2;
        unsigned int bbp_axi_bsi_cg_en : 1;
        unsigned int bbp_axi_rs_cg_en : 1;
        unsigned int bbp_axi_gs_cg_en : 1;
        unsigned int bus_lockdown_protect : 2;
        unsigned int reserved : 9;
        unsigned int atpram_ctrl : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbpaxi_priority_set_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbpaxi_priority_set_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_bsi_cg_en_START (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_bsi_cg_en_END (2)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_rs_cg_en_START (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_rs_cg_en_END (3)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_gs_cg_en_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bbp_axi_gs_cg_en_END (4)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bus_lockdown_protect_START (5)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_bus_lockdown_protect_END (6)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_atpram_ctrl_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBP_LBUS_CTRL_atpram_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ccpu_localaxi_dlock_irq : 1;
        unsigned int ccpu_localaxi_dlock_wr : 1;
        unsigned int reserved_0 : 2;
        unsigned int ccpu_localaxi_dlock_id : 6;
        unsigned int reserved_1 : 6;
        unsigned int ccpu_localaxi_dlock_slv : 2;
        unsigned int reserved_2 : 6;
        unsigned int ccpu_localaxi_dlock_mst : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_irq_START (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_irq_END (0)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_wr_START (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_wr_END (1)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_id_START (4)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_id_END (9)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_slv_START (16)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_slv_END (17)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_mst_START (24)
#define SOC_MODEM_SCTRL_MDMSC_CCPU_LAXI_STAT_ccpu_localaxi_dlock_mst_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_localaxi_dlock_irq : 1;
        unsigned int bbe16_localaxi_dlock_wr : 1;
        unsigned int reserved_0 : 2;
        unsigned int bbe16_localaxi_dlock_id : 6;
        unsigned int reserved_1 : 6;
        unsigned int bbe16_localaxi_dlock_slv : 1;
        unsigned int reserved_2 : 7;
        unsigned int bbe16_localaxi_dlock_mst : 1;
        unsigned int reserved_3 : 7;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_irq_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_irq_END (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_wr_START (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_wr_END (1)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_id_START (4)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_id_END (9)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_slv_START (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_slv_END (16)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_mst_START (24)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_LAXI_STAT_bbe16_localaxi_dlock_mst_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmnoc_in_lpower_pulse_width : 10;
        unsigned int reserved_0 : 6;
        unsigned int mdmnoc_out_lpower_pulse_width : 10;
        unsigned int reserved_1 : 5;
        unsigned int mdmnoc_lpower_en : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_in_lpower_pulse_width_START (0)
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_in_lpower_pulse_width_END (9)
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_out_lpower_pulse_width_START (16)
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_out_lpower_pulse_width_END (25)
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_lpower_en_START (31)
#define SOC_MODEM_SCTRL_MDMSC_NOC_LPOWER_CFG_mdmnoc_lpower_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_div0_ccpu_cfg_value : 7;
        unsigned int clk_div0_ccpu_cfg_vld : 1;
        unsigned int clk_div0_bbe16_lowpower_cfg_value : 7;
        unsigned int clk_div0_bbe16_lowpower_cfg_vld : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
        unsigned int reserved_2 : 7;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_ccpu_cfg_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_ccpu_cfg_value_END (6)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_ccpu_cfg_vld_START (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_ccpu_cfg_vld_END (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_bbe16_lowpower_cfg_value_START (8)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_bbe16_lowpower_cfg_value_END (14)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_bbe16_lowpower_cfg_vld_START (15)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG0_clk_div0_bbe16_lowpower_cfg_vld_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_div1_bbe16_cfg_value : 7;
        unsigned int clk_div1_bbe16_cfg_value_vld : 1;
        unsigned int clk_div1_ccpuatb_cfg_value : 7;
        unsigned int clk_div1_ccpuatb_cfg_value_vld : 1;
        unsigned int clk_div1_ccpuapb_cfg_value : 7;
        unsigned int clk_div1_ccpuapb_cfg_value_vld : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_bbe16_cfg_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_bbe16_cfg_value_END (6)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_bbe16_cfg_value_vld_START (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_bbe16_cfg_value_vld_END (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuatb_cfg_value_START (8)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuatb_cfg_value_END (14)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuatb_cfg_value_vld_START (15)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuatb_cfg_value_vld_END (15)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuapb_cfg_value_START (16)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuapb_cfg_value_END (22)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuapb_cfg_value_vld_START (23)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG1_clk_div1_ccpuapb_cfg_value_vld_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_div2_noc_cfg_value : 7;
        unsigned int clk_div2_noc_cfg_vld : 1;
        unsigned int clk_div2_ccpu_lbus_cfg_value : 7;
        unsigned int clk_div2_ccpu_lbus_cfg_vld : 1;
        unsigned int clk_div2_mdmnoc_lpower_cfg_value : 7;
        unsigned int clk_div2_mdmnoc_lpower_cfg_vld : 1;
        unsigned int reserved_0 : 7;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_noc_cfg_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_noc_cfg_value_END (6)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_noc_cfg_vld_START (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_noc_cfg_vld_END (7)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_ccpu_lbus_cfg_value_START (8)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_ccpu_lbus_cfg_value_END (14)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_ccpu_lbus_cfg_vld_START (15)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_ccpu_lbus_cfg_vld_END (15)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_mdmnoc_lpower_cfg_value_START (16)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_mdmnoc_lpower_cfg_value_END (22)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_mdmnoc_lpower_cfg_vld_START (23)
#define SOC_MODEM_SCTRL_MDMSC_DFS_DIVCFG2_clk_div2_mdmnoc_lpower_cfg_vld_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwup_time_dspbbe : 16;
        unsigned int pwup_time_lte : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_pwup_time_dspbbe_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_pwup_time_dspbbe_END (15)
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_pwup_time_lte_START (16)
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME0_pwup_time_lte_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pwup_time_bbp_cs : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_PWUP_TIME1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME1_pwup_time_bbp_cs_START (0)
#define SOC_MODEM_SCTRL_MDMSC_PWUP_TIME1_pwup_time_bbp_cs_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16pwrdn_sram_remap_addr : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBEPWDN_SRAM_CTRL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBEPWDN_SRAM_CTRL_bbe16pwrdn_sram_remap_addr_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBEPWDN_SRAM_CTRL_bbe16pwrdn_sram_remap_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbe16_overaddr_prot_value : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBE16_OVERADDR_PROT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBE16_OVERADDR_PROT_bbe16_overaddr_prot_value_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBE16_OVERADDR_PROT_bbe16_overaddr_prot_value_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT0_sc_slicer_count_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT0_sc_slicer_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_gbbp1_int : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT1_sc_slicer_count_gbbp1_int_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT1_sc_slicer_count_gbbp1_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_gbbp1_int_32k : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT2_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT2_sc_slicer_count_gbbp1_int_32k_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT2_sc_slicer_count_gbbp1_int_32k_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_gbbp2_int : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT3_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT3_sc_slicer_count_gbbp2_int_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT3_sc_slicer_count_gbbp2_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_gbbp2_int_32k : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT4_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT4_sc_slicer_count_gbbp2_int_32k_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT4_sc_slicer_count_gbbp2_int_32k_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_wbbp_clksw : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT5_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT5_sc_slicer_count_wbbp_clksw_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT5_sc_slicer_count_wbbp_clksw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_wbbp_int_32k : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT6_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT6_sc_slicer_count_wbbp_int_32k_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT6_sc_slicer_count_wbbp_int_32k_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sc_slicer_count_1x_evdo_int_32k : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT7_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT7_sc_slicer_count_1x_evdo_int_32k_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SLICER_COUNT7_sc_slicer_count_1x_evdo_int_32k_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wbbp_id : 16;
        unsigned int wbbp_designer : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_WBBPID_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_WBBPID_wbbp_id_START (0)
#define SOC_MODEM_SCTRL_MDMSC_WBBPID_wbbp_id_END (15)
#define SOC_MODEM_SCTRL_MDMSC_WBBPID_wbbp_designer_START (16)
#define SOC_MODEM_SCTRL_MDMSC_WBBPID_wbbp_designer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gbbp_id : 16;
        unsigned int gbbp_designer : 16;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_GBBPID_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_GBBPID_gbbp_id_START (0)
#define SOC_MODEM_SCTRL_MDMSC_GBBPID_gbbp_id_END (15)
#define SOC_MODEM_SCTRL_MDMSC_GBBPID_gbbp_designer_START (16)
#define SOC_MODEM_SCTRL_MDMSC_GBBPID_gbbp_designer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ldrx_abs_timer_low : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER0_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER0_ldrx_abs_timer_low_START (0)
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER0_ldrx_abs_timer_low_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ldrx_abs_timer_high : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER1_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER1_ldrx_abs_timer_high_START (0)
#define SOC_MODEM_SCTRL_MDMSC_LTEBBP_DRX_TIMER1_ldrx_abs_timer_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_soc_version : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_SOC_VERSION_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_SOC_VERSION_modem_soc_version_START (0)
#define SOC_MODEM_SCTRL_MDMSC_SOC_VERSION_modem_soc_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved01 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED01_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED01_mdmsc_reserved01_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED01_mdmsc_reserved01_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved02 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED02_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED02_mdmsc_reserved02_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED02_mdmsc_reserved02_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved03 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED03_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED03_mdmsc_reserved03_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED03_mdmsc_reserved03_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved04 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED04_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED04_mdmsc_reserved04_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED04_mdmsc_reserved04_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved05 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED05_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED05_mdmsc_reserved05_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED05_mdmsc_reserved05_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_reserved06 : 32;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_RESERVED06_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_RESERVED06_mdmsc_reserved06_START (0)
#define SOC_MODEM_SCTRL_MDMSC_RESERVED06_mdmsc_reserved06_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_gcudrx_deepsleep_flag : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_FPGA_BBP_DRX_FLAG_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_FPGA_BBP_DRX_FLAG_fpga_gcudrx_deepsleep_flag_START (0)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_BBP_DRX_FLAG_fpga_gcudrx_deepsleep_flag_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_pmussi0_mst_cnt : 3;
        unsigned int reserved_0 : 1;
        unsigned int fpga_pmussi1_mst_cnt : 3;
        unsigned int reserved_1 : 1;
        unsigned int fpga_pmussi2_mst_cnt : 3;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi0_mst_cnt_START (0)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi0_mst_cnt_END (2)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi1_mst_cnt_START (4)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi1_mst_cnt_END (6)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi2_mst_cnt_START (8)
#define SOC_MODEM_SCTRL_MDMSC_FPGA_PMUSSI_CNT_fpga_pmussi2_mst_cnt_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mdmsc_testpin_sel : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_TESTPIN_SEL_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_TESTPIN_SEL_mdmsc_testpin_sel_START (0)
#define SOC_MODEM_SCTRL_MDMSC_TESTPIN_SEL_mdmsc_testpin_sel_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int modem_testpin_sel : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MODEM_SCTRL_MODEM_TESTPIN_SEL_UNION;
#endif
#define SOC_MODEM_SCTRL_MODEM_TESTPIN_SEL_modem_testpin_sel_START (0)
#define SOC_MODEM_SCTRL_MODEM_TESTPIN_SEL_modem_testpin_sel_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_bbit_modem_glb_rsten : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_fpga_bbit_modem_glb_rsten_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_fpga_bbit_modem_glb_rsten_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_bbit_modem_glb_rstdis : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTDIS_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTDIS_fpga_bbit_modem_glb_rstdis_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTDIS_fpga_bbit_modem_glb_rstdis_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fpga_bbit_modem_glb_rsten_stat : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_STAT_UNION;
#endif
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_STAT_fpga_bbit_modem_glb_rsten_stat_START (0)
#define SOC_MODEM_SCTRL_MDMSC_BBIT_GLB_RSTEN_STAT_fpga_bbit_modem_glb_rsten_stat_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
