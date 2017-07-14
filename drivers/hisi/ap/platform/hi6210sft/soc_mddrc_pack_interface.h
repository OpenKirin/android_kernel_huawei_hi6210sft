#ifndef __SOC_MDDRC_PACK_INTERFACE_H__
#define __SOC_MDDRC_PACK_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_REVISION_ADDR(base) ((base) + (0x000))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_ADDR(base) ((base) + (0x004))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_ADDR(base) ((base) + (0x008))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_ADDR(base) ((base) + (0x000C))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_ADDR(base) ((base) + (0x010))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER1_ADDR(base) ((base) + (0x014))
#define SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_ADDR(base) ((base) + (0x018))
#define SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_ADDR(base) ((base) + (0x01C))
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_ADDR(base) ((base) + (0x020))
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_ADDR(base) ((base) + (0x024))
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_ADDR(base) ((base) + (0x028))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_ADDR(base) ((base) + (0x02C))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_ADDR(base) ((base) + (0x030))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_ADDR(base) ((base) + (0x034))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_ADDR(base) ((base) + (0x038))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_ADDR(base) ((base) + (0x03C))
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_ADDR(base) ((base) + (0x040))
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_ADDR(base) ((base) + (0x044))
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_ADDR(base) ((base) + (0x048))
#define SOC_MDDRC_PACK_DDRC_PACK_RANKEN_ADDR(base) ((base) + (0x04C))
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_ADDR(base) ((base) + (0x0050))
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_ADDR(base) ((base) + (0x0054))
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_ADDR(base) ((base) + (0x0058))
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_ADDR(base) ((base) + (0x005C))
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_ADDR(base) ((base) + (0x0060))
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_ADDR(base) ((base) + (0x0064))
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_ADDR(base) ((base) + (0x0068))
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_ADDR(base) ((base) + (0x006C))
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_ADDR(base) ((base) + (0x0070))
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_ADDR(base) ((base) + (0x0074))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_ADDR(base) ((base) + (0x0078))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_ADDR(base) ((base) + (0x007C))
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_ADDR(base) ((base) + (0x0080))
#define SOC_MDDRC_PACK_DDRC_PACK_DMSEL_ADDR(base) ((base) + (0x0084))
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ADDR(base) ((base) + (0x0088))
#define SOC_MDDRC_PACK_DDRC_PACK_DQSSEL_ADDR(base) ((base) + (0x008C))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ADDR(base) ((base) + (0x0090))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_ADDR(base) ((base) + (0x0094))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_ADDR(base) ((base) + (0x0098))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_ADDR(base) ((base) + (0x009C))
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_ADDR(base) ((base) + (0x00A0))
#define SOC_MDDRC_PACK_DDRC_PACK_SWTWLDQS_ADDR(base) ((base) + (0x00A4))
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_ADDR(base) ((base) + (0x00A8))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_ADDR(base) ((base) + (0x00AC))
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ADDR(base) ((base) + (0x00B0))
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ADDR(base) ((base) + (0x00B4))
#define SOC_MDDRC_PACK_DDRC_PACK_BISTTIMER_ADDR(base) ((base) + (0x00B8))
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_ADDR(base) ((base) + (0x00D0))
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_ADDR(base) ((base) + (0x00D4))
#define SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_ADDR(base) ((base) + (0x00D8))
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_ADDR(base) ((base) + (0x00DC))
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ADDR(base) ((base) + (0x100))
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_ADDR(base) ((base) + (0x104))
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_ADDR(base) ((base) + (0x108))
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_ADDR(base) ((base) + (0x10C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_ADDR(base) ((base) + (0x120))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_ADDR(base) ((base) + (0x124))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_ADDR(base) ((base) + (0x128))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_ADDR(base) ((base) + (0x12C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_ADDR(base) ((base) + (0x130))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_ADDR(base) ((base) + (0x134))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_ADDR(base) ((base) + (0x138))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_ADDR(base) ((base) + (0x13C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_ADDR(base) ((base) + (0x140))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_ADDR(base) ((base) + (0x144))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_ADDR(base) ((base) + (0x148))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_ADDR(base) ((base) + (0x14C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_ADDR(base) ((base) + (0x150))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_ADDR(base) ((base) + (0x154))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_ADDR(base) ((base) + (0x158))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_ADDR(base) ((base) + (0x15C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_ADDR(base) ((base) + (0x160))
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL9_ADDR(base) ((base) + (0x164))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_ADDR(base) ((base) + (0x168))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_ADDR(base) ((base) + (0x170))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_ADDR(base) ((base) + (0x174))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_ADDR(base) ((base) + (0x178))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_ADDR(base) ((base) + (0x17C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_ADDR(base) ((base) + (0x180))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_ADDR(base) ((base) + (0x184))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_ADDR(base) ((base) + (0x188))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ADDR(base) ((base) + (0x018C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_ADDR(base) ((base) + (0x0190))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDC_ADDR(base) ((base) + (0x0194))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDS_ADDR(base) ((base) + (0x0198))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ADDR(base) ((base) + (0x019C))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_ADDR(base) ((base) + (0x1A0))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_ADDR(base) ((base) + (0x1A4))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_ADDR(base) ((base) + (0x1A8))
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_ADDR(base) ((base) + (0x1AC))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_ADDR(base) ((base) + (0x01B0))
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_ADDR(base) ((base) + (0x01B4))
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_ADDR(base) ((base) + (0x01C0))
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_ADDR(base) ((base) + (0x01C4))
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_ADDR(base) ((base) + (0x01C8))
#define SOC_MDDRC_PACK_DDRC_PACK_CATRESULT_ADDR(base) ((base) + (0x01CC))
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDQRESULT_ADDR(base) ((base) + (0x01D0))
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_ADDR(base) ((base) + (0x01D4))
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_P_ADDR(base) ((base) + (0x01D8))
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_N_ADDR(base) ((base) + (0x01DC))
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_ADDR(base) ((base) + (0x01E4))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_ADDR(base,n) ((base) + (0x200+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_ADDR(base,n) ((base) + (0x204+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_ADDR(base,n) ((base) + (0x208+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_ADDR(base,n) ((base) + (0x210+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_ADDR(base,n) ((base) + (0x214+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL2_ADDR(base,n) ((base) + (0x218+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_ADDR(base,n) ((base) + (0x21C+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_ADDR(base,n) ((base) + (0x220+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL2_ADDR(base,n) ((base) + (0x224+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_ADDR(base,n) ((base) + (0x228+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_ADDR(base,n) ((base) + (0x22C+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_ADDR(base,n) ((base) + (0x230+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQDLY_ADDR(base,n) ((base) + (0x234+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWLSL_ADDR(base,n) ((base) + (0x238+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNGDS_ADDR(base,n) ((base) + (0x23C+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_ADDR(base,n) ((base) + (0x240+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_ADDR(base,n) ((base) + (0x640+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_ADDR(base,n) ((base) + (0x24C+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_ADDR(base,n) ((base) + (0x250+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_ADDR(base,n) ((base) + (0x254+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_ADDR(base,n) ((base) + (0x258+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_ADDR(base,n) ((base) + (0x260+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_ADDR(base,n) ((base) + (0x264+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_ADDR(base,n) ((base) + (0x268+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_ADDR(base,n) ((base) + (0x26C+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_ADDR(base,n) ((base) + (0x270+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_ADDR(base,n) ((base) + (0x274+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_ADDR(base,n) ((base) + (0x278+(n)*0x80))
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_ADDR(base,n) ((base) + (0x27C+(n)*0x80))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int minor : 8;
        unsigned int major : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_REVISION_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_REVISION_minor_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_REVISION_minor_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_REVISION_major_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_REVISION_major_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int init_en : 1;
        unsigned int pll_init_en : 1;
        unsigned int dlymeas_en : 1;
        unsigned int zcal_en : 1;
        unsigned int wl_en : 1;
        unsigned int gt_en : 1;
        unsigned int gdst_en : 1;
        unsigned int wl2_en : 1;
        unsigned int rdet_en : 1;
        unsigned int wdet_en : 1;
        unsigned int dram_init_en : 1;
        unsigned int cat_en : 1;
        unsigned int dram_rst : 1;
        unsigned int phy_rst : 1;
        unsigned int pack_rst : 1;
        unsigned int phyconn_rst : 1;
        unsigned int reserved : 15;
        unsigned int ctl_cke_bypass : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_init_en_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_init_en_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_pll_init_en_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_pll_init_en_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dlymeas_en_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dlymeas_en_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_zcal_en_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_zcal_en_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wl_en_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wl_en_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_gt_en_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_gt_en_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_gdst_en_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_gdst_en_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wl2_en_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wl2_en_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_rdet_en_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_rdet_en_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wdet_en_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_wdet_en_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dram_init_en_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dram_init_en_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_cat_en_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_cat_en_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dram_rst_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_dram_rst_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_phy_rst_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_phy_rst_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_pack_rst_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_pack_rst_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_phyconn_rst_START (15)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_phyconn_rst_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_ctl_cke_bypass_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITCTRL_ctl_cke_bypass_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int pll_lock_err : 1;
        unsigned int dlymeas_err : 1;
        unsigned int zcal_err : 1;
        unsigned int wl_err : 1;
        unsigned int gt_err : 1;
        unsigned int gdst_err : 1;
        unsigned int wl2_err : 1;
        unsigned int rdet_err : 1;
        unsigned int wdet_err : 1;
        unsigned int cat_err : 1;
        unsigned int reserved_1 : 21;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_pll_lock_err_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_pll_lock_err_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_dlymeas_err_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_dlymeas_err_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_zcal_err_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_zcal_err_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wl_err_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wl_err_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_gt_err_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_gt_err_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_gdst_err_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_gdst_err_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wl2_err_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wl2_err_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_rdet_err_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_rdet_err_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wdet_err_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_wdet_err_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_cat_err_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYINITSTATUS_cat_err_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_phy_clkgated : 4;
        unsigned int reserved_0 : 4;
        unsigned int ac_phy_clkgated : 1;
        unsigned int ck_phy_clkgated : 1;
        unsigned int dx_phgated_en : 1;
        unsigned int dx_phclkgated : 1;
        unsigned int dx_phgated_men : 1;
        unsigned int reserved_1 : 18;
        unsigned int byp_pll_lock : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phy_clkgated_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phy_clkgated_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_ac_phy_clkgated_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_ac_phy_clkgated_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_ck_phy_clkgated_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_ck_phy_clkgated_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phgated_en_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phgated_en_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phclkgated_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phclkgated_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phgated_men_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_dx_phgated_men_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_byp_pll_lock_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCLKGATED_byp_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_reset : 8;
        unsigned int reserved : 4;
        unsigned int t_dram_cke_high : 20;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_t_dram_reset_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_t_dram_reset_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_t_dram_cke_high_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER0_t_dram_cke_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_cke_low : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER1_t_dram_cke_low_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYTIMER1_t_dram_cke_low_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pll_pwdn : 3;
        unsigned int reserved_0 : 1;
        unsigned int pll_freq_range : 2;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_pll_pwdn_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_pll_pwdn_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_pll_freq_range_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLCTRL_pll_freq_range_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_pll_rst : 8;
        unsigned int reserved : 8;
        unsigned int t_pll_lock : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_t_pll_rst_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_t_pll_rst_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_t_pll_lock_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_PLLTIMER_t_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dly_meas_type : 1;
        unsigned int dly_track_type : 1;
        unsigned int dynamic_dqsgth : 2;
        unsigned int dynamic_dqsgen : 1;
        unsigned int dynamic_dqsen : 1;
        unsigned int phy_autoref_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int dly_track_limit : 7;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_meas_type_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_meas_type_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_track_type_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_track_type_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsgth_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsgth_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsgen_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsgen_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsen_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dynamic_dqsen_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_phy_autoref_en_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_phy_autoref_en_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_track_limit_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DLYMEASCTRL_dly_track_limit_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int zcomp_rsp_dly : 6;
        unsigned int reserved_0 : 6;
        unsigned int zcomp_num : 4;
        unsigned int reserved_1 : 15;
        unsigned int zcfuzzy_en : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcomp_rsp_dly_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcomp_rsp_dly_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcomp_num_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcomp_num_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcfuzzy_en_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPCTRL_zcfuzzy_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int zcode_ndrv : 6;
        unsigned int reserved_0 : 1;
        unsigned int ndrv_cal_result : 1;
        unsigned int zcode_ndrv_cal : 7;
        unsigned int reserved_1 : 1;
        unsigned int zcode_pdrv : 6;
        unsigned int reserved_2 : 1;
        unsigned int pdrv_cal_result : 1;
        unsigned int zcode_pdrv_cal : 7;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_ndrv_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_ndrv_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_ndrv_cal_result_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_ndrv_cal_result_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_ndrv_cal_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_ndrv_cal_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_pdrv_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_pdrv_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_pdrv_cal_result_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_pdrv_cal_result_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_pdrv_cal_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_IMPSTATUS_zcode_pdrv_cal_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dcfg_type : 3;
        unsigned int reserved_0 : 1;
        unsigned int nosra : 1;
        unsigned int ma2t : 1;
        unsigned int maddr_mir : 1;
        unsigned int reserved_1 : 1;
        unsigned int lpddr23_pre_en : 1;
        unsigned int lpddr23_mrw1617_en : 1;
        unsigned int lpddr23_zqc_en : 1;
        unsigned int reserved_2 : 21;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_dcfg_type_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_dcfg_type_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_nosra_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_nosra_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_ma2t_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_ma2t_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_maddr_mir_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_maddr_mir_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_pre_en_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_pre_en_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_mrw1617_en_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_mrw1617_en_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_zqc_en_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMCFG_lpddr23_zqc_en_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_rtp : 4;
        unsigned int t_wtr : 4;
        unsigned int t_rp : 4;
        unsigned int t_rcd : 4;
        unsigned int t_ras : 6;
        unsigned int t_rrd : 4;
        unsigned int t_rc : 6;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rtp_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rtp_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_wtr_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_wtr_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rp_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rp_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rcd_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rcd_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_ras_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_ras_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rrd_START (22)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rrd_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rc_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER0_t_rc_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_mrd : 4;
        unsigned int t_mod : 5;
        unsigned int t_faw : 6;
        unsigned int reserved_0: 1;
        unsigned int t_rfc : 9;
        unsigned int t_rtw : 5;
        unsigned int reserved_1: 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_mrd_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_mrd_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_mod_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_mod_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_faw_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_faw_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_rfc_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_rfc_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_rtw_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER1_t_rtw_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_xs : 10;
        unsigned int t_xp : 5;
        unsigned int reserved_0: 1;
        unsigned int t_cke : 4;
        unsigned int t_dllk : 10;
        unsigned int reserved_1: 1;
        unsigned int t_ccd : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_xs_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_xs_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_xp_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_xp_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_cke_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_cke_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_dllk_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_dllk_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_ccd_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER2_t_ccd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_zcal : 10;
        unsigned int t_init5 : 14;
        unsigned int t_wl : 4;
        unsigned int t_wr : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_zcal_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_zcal_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_init5_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_init5_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_wl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_wl_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_wr_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER3_t_wr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_wlmrd : 6;
        unsigned int reserved_0: 1;
        unsigned int t_wlo : 5;
        unsigned int t_odt : 4;
        unsigned int reserved_1: 8;
        unsigned int t_odton : 4;
        unsigned int reserved_2: 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_wlmrd_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_wlmrd_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_wlo_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_wlo_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_odt_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_odt_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_odton_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DRAMTIMER4_t_odton_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wodt_rank0 : 4;
        unsigned int wodt_rank1 : 4;
        unsigned int wodt_rank2 : 4;
        unsigned int wodt_rank3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ODTCR_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank0_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank1_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank1_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank2_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank2_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank3_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ODTCR_wodt_rank3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtr_rank : 4;
        unsigned int dqsgsl_mrgn : 6;
        unsigned int dqsgrt_shft : 6;
        unsigned int dqsgrt_chk : 6;
        unsigned int dqsg_cstep : 2;
        unsigned int gtds_rspdly : 6;
        unsigned int dtrerrstop : 1;
        unsigned int skip_eye_opening : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dtr_rank_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dtr_rank_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgsl_mrgn_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgsl_mrgn_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgrt_shft_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgrt_shft_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgrt_chk_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsgrt_chk_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsg_cstep_START (22)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dqsg_cstep_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_gtds_rspdly_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_gtds_rspdly_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dtrerrstop_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_dtrerrstop_END (30)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_skip_eye_opening_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL0_skip_eye_opening_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rank_en : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_RANKEN_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_RANKEN_rank_en_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_RANKEN_rank_en_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtbank : 3;
        unsigned int reserved : 1;
        unsigned int dtcol : 12;
        unsigned int dtrow : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtbank_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtbank_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtcol_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtcol_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtrow_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINMADDR_dtrow_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_op : 2;
        unsigned int reserved_0 : 2;
        unsigned int bist_mode : 3;
        unsigned int reserved_1 : 1;
        unsigned int bist_pat : 2;
        unsigned int reserved_2 : 6;
        unsigned int bist_fail_stop : 8;
        unsigned int reserved_3 : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_op_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_op_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_mode_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_mode_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_pat_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_pat_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_fail_stop_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTCTRL_bist_fail_stop_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_data_b0 : 8;
        unsigned int bist_data_b1 : 8;
        unsigned int bist_data_b2 : 8;
        unsigned int bist_data_b3 : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b0_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b1_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b1_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b2_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b2_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b3_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA0_bist_data_b3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_data_b4 : 8;
        unsigned int bist_data_b5 : 8;
        unsigned int bist_data_b6 : 8;
        unsigned int bist_data_b7 : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b4_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b4_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b5_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b5_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b6_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b6_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b7_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTDATA1_bist_data_b7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_done : 1;
        unsigned int bist_acerr : 1;
        unsigned int bist_dxerr : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_done_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_done_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_acerr_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_acerr_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_dxerr_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTSTATUS_bist_dxerr_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr0 : 16;
        unsigned int mr1 : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_mr0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_mr0_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_mr1_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG01_mr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mr2 : 16;
        unsigned int mr3 : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_mr2_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_mr2_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_mr3_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_MODEREG23_mr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int det_pat55 : 8;
        unsigned int det_patAA : 8;
        unsigned int det_patFF : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_pat55_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_pat55_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_patAA_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_patAA_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_patFF_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DETPATTERN_det_patFF_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cfg_wl : 5;
        unsigned int reserved_0 : 2;
        unsigned int cfg_rl : 5;
        unsigned int reserved_1 : 4;
        unsigned int scramb_en : 1;
        unsigned int addr_toggle : 1;
        unsigned int addr_delay : 1;
        unsigned int cfg_dlyupd : 1;
        unsigned int swap_en : 3;
        unsigned int swapaddr_en : 2;
        unsigned int swapdm_en : 2;
        unsigned int swapwl_en : 3;
        unsigned int swapdfibyte_en : 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_MISC_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_wl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_wl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_rl_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_rl_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_scramb_en_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_scramb_en_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_addr_toggle_START (17)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_addr_toggle_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_addr_delay_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_addr_delay_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_dlyupd_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_cfg_dlyupd_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swap_en_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swap_en_END (22)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapaddr_en_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapaddr_en_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapdm_en_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapdm_en_END (26)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapwl_en_START (27)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapwl_en_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapdfibyte_en_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_MISC_swapdfibyte_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trnkwtw : 5;
        unsigned int trnkrtr : 5;
        unsigned int trnkrtw : 5;
        unsigned int trnkwtr : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkwtw_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkwtw_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkrtr_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkrtr_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkrtw_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkrtw_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkwtr_START (15)
#define SOC_MDDRC_PACK_DDRC_PACK_RNK2RNK_trnkwtr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int sel_pos_rx : 1;
        unsigned int lp_ck_sel : 2;
        unsigned int reserved_1 : 2;
        unsigned int cmdoen : 1;
        unsigned int ckoen : 3;
        unsigned int ckeoen : 1;
        unsigned int csoen : 1;
        unsigned int resetoen : 1;
        unsigned int reserved_2 : 18;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_sel_pos_rx_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_sel_pos_rx_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_lp_ck_sel_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_lp_ck_sel_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_cmdoen_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_cmdoen_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_ckoen_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_ckoen_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_ckeoen_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_ckeoen_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_csoen_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_csoen_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_resetoen_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL0_resetoen_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs_gated_error : 8;
        unsigned int reserved_0 : 8;
        unsigned int dqsb_gated_error : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_dqs_gated_error_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_dqs_gated_error_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_dqsb_gated_error_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDBG_dqsb_gated_error_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phyupd_resp : 13;
        unsigned int retrain_en : 1;
        unsigned int gtrten : 1;
        unsigned int reserved : 1;
        unsigned int retrain_thrd : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_phyupd_resp_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_phyupd_resp_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_retrain_en_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_retrain_en_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_gtrten_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_gtrten_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_retrain_thrd_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_RETCTRL0_retrain_thrd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dmswap_sel : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DMSEL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DMSEL_dxctl_dmswap_sel_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DMSEL_dxctl_dmswap_sel_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int diff_dqs_en : 1;
        unsigned int dxiopldn : 1;
        unsigned int aciopldn : 1;
        unsigned int reserved_0 : 3;
        unsigned int reserved_1 : 2;
        unsigned int reserved_2 : 1;
        unsigned int reserved_3 : 1;
        unsigned int reserved_4 : 1;
        unsigned int ronsel : 3;
        unsigned int ronsel_dqs : 3;
        unsigned int ronsel_ac1t : 3;
        unsigned int ronsel_ac2t : 3;
        unsigned int ronsel_ck : 3;
        unsigned int odtsel : 3;
        unsigned int odtsel_dqs : 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_IOCTL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_diff_dqs_en_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_diff_dqs_en_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_dxiopldn_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_dxiopldn_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_aciopldn_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_aciopldn_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_dqs_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_dqs_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ac1t_START (17)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ac1t_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ac2t_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ac2t_END (22)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ck_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_ronsel_ck_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_odtsel_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_odtsel_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_odtsel_dqs_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL_odtsel_dqs_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqswap_sel : 32;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DQSSEL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DQSSEL_dqswap_sel_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DQSSEL_dqswap_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int ac_pll_thrm : 1;
        unsigned int ac_pll_testpem : 1;
        unsigned int ac_pll_testen : 1;
        unsigned int ac_pll_init : 1;
        unsigned int ac_pll_cpi : 3;
        unsigned int ac_pll_sp : 3;
        unsigned int ac_pll_lt : 2;
        unsigned int ac_pll_calt : 1;
        unsigned int ac_pll_calm : 1;
        unsigned int ac_pll_cal : 1;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_thrm_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_thrm_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_testpem_START (17)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_testpem_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_testen_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_testen_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_init_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_init_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_cpi_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_cpi_END (22)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_sp_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_sp_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_lt_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_lt_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_calt_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_calt_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_calm_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_calm_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_cal_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL1_ac_pll_cal_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_ck0p_mclk : 3;
        unsigned int dx_ckd2 : 3;
        unsigned int reserved : 26;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_dx_ck0p_mclk_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_dx_ck0p_mclk_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_dx_ckd2_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCKCTRL_dx_ckd2_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_pll_test : 8;
        unsigned int reserved : 23;
        unsigned int ac_pll_lock : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_ac_pll_test_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_ac_pll_test_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_ac_pll_lock_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_AC_ac_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_pll_test : 16;
        unsigned int reserved : 12;
        unsigned int dx_pll_lock : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_dx_pll_test_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_dx_pll_test_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_dx_pll_lock_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYPLLCTRL_DX_dx_pll_lock_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wlmode : 1;
        unsigned int sw_gtmode : 1;
        unsigned int reserved : 29;
        unsigned int wl_wdqs_gated : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_sw_wlmode_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_sw_wlmode_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_sw_gtmode_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_sw_gtmode_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_wl_wdqs_gated_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTMODE_wl_wdqs_gated_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_wl_dqs : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_SWTWLDQS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_SWTWLDQS_sw_wl_dqs_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTWLDQS_sw_wl_dqs_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wl_dq_result : 8;
        unsigned int gt_result : 8;
        unsigned int gds_result : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_wl_dq_result_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_wl_dq_result_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_gt_result_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_gt_result_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_gds_result_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_SWTRLT_gds_result_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_dqsgerror : 1;
        unsigned int phy_gatetdc : 1;
        unsigned int phy_odten_gated : 1;
        unsigned int phy_dummypad_use : 1;
        unsigned int phy_dyn_pupden : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dqsgerror_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dqsgerror_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_gatetdc_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_gatetdc_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_odten_gated_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_odten_gated_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dummypad_use_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dummypad_use_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dyn_pupden_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYCTRL2_phy_dyn_pupden_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_popmode : 6;
        unsigned int ioctl_genvref_ie : 6;
        unsigned int ioctl_genvref_pd : 6;
        unsigned int reserved_0 : 6;
        unsigned int ioctl_squeach_pd : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_popmode_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_popmode_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_genvref_ie_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_genvref_ie_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_genvref_pd_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_genvref_pd_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_squeach_pd_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL1_ioctl_squeach_pd_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ioctl_genvref_rangel_0 : 6;
        unsigned int ioctl_genvref_rangel_1 : 6;
        unsigned int ioctl_genvref_refsel_0 : 6;
        unsigned int ioctl_genvref_refsel_1 : 6;
        unsigned int ioctl_genvref_refsel_2 : 6;
        unsigned int reserved : 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_rangel_0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_rangel_0_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_rangel_1_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_rangel_1_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_0_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_0_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_1_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_1_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_2_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_IOCTL2_ioctl_genvref_refsel_2_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bstupdt_timer : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_BISTTIMER_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_BISTTIMER_bstupdt_timer_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_BISTTIMER_bstupdt_timer_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdet_samp_num : 4;
        unsigned int wdet_rb_backtap : 4;
        unsigned int reserved_0 : 4;
        unsigned int wrdet_av_en : 1;
        unsigned int wdet_rbs_en : 1;
        unsigned int wdet_ds_en : 1;
        unsigned int wdet_lbs_en : 1;
        unsigned int rdet_samp_num : 4;
        unsigned int rdet_rb_backtap : 7;
        unsigned int reserved_1 : 1;
        unsigned int rdet_av_en : 1;
        unsigned int rdet_rbs_en : 1;
        unsigned int rdet_ds_en : 1;
        unsigned int rdet_lbs_en : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_samp_num_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_samp_num_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_rb_backtap_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_rb_backtap_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wrdet_av_en_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wrdet_av_en_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_rbs_en_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_rbs_en_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_ds_en_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_ds_en_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_lbs_en_START (15)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_wdet_lbs_en_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_samp_num_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_samp_num_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_rb_backtap_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_rb_backtap_END (26)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_av_en_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_av_en_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_rbs_en_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_rbs_en_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_ds_en_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_ds_en_END (30)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_lbs_en_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL1_rdet_lbs_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mrr_pat_A : 8;
        unsigned int mrr_pat_B : 8;
        unsigned int mrr_pat_mask : 8;
        unsigned int gds_automrg_en : 1;
        unsigned int reserved : 2;
        unsigned int mrr_bl4 : 1;
        unsigned int mrr_pat_order : 3;
        unsigned int rdet_method_sel : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_A_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_A_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_B_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_B_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_mask_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_mask_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_gds_automrg_en_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_gds_automrg_en_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_bl4_START (27)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_bl4_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_order_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_mrr_pat_order_END (30)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_rdet_method_sel_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL2_rdet_method_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_sel : 1;
        unsigned int op_sel : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_wr_sel_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_wr_sel_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_op_sel_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_REGBANKCTRL_op_sel_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rpat_cnt_num : 4;
        unsigned int reserved_0 : 4;
        unsigned int rpat_cnt_num_open : 4;
        unsigned int reserved_1 : 4;
        unsigned int gdsrt_backtap : 3;
        unsigned int reserved_2 : 12;
        unsigned int exd_gtres_en : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_rpat_cnt_num_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_rpat_cnt_num_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_rpat_cnt_num_open_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_rpat_cnt_num_open_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_gdsrt_backtap_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_gdsrt_backtap_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_exd_gtres_en_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_TRAINCTRL3_exd_gtres_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_cmp_mask : 16;
        unsigned int ba_cmp_mask : 3;
        unsigned int we_cmp_mask : 1;
        unsigned int cas_cmp_mask : 1;
        unsigned int ras_cmp_mask : 1;
        unsigned int cs_cmp_mask : 4;
        unsigned int rst_cmp_mask : 1;
        unsigned int acbist_en : 1;
        unsigned int aclpbk_tg : 1;
        unsigned int ac_rdffsel : 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_addr_cmp_mask_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_addr_cmp_mask_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ba_cmp_mask_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ba_cmp_mask_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_we_cmp_mask_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_we_cmp_mask_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_cas_cmp_mask_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_cas_cmp_mask_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ras_cmp_mask_START (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ras_cmp_mask_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_cs_cmp_mask_START (22)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_cs_cmp_mask_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_rst_cmp_mask_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_rst_cmp_mask_END (26)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_acbist_en_START (27)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_acbist_en_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_aclpbk_tg_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_aclpbk_tg_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ac_rdffsel_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL0_ac_rdffsel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt_cmp_mask : 4;
        unsigned int cke_cmp_mask : 4;
        unsigned int ac_lfsr_seed : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_odt_cmp_mask_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_odt_cmp_mask_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_cke_cmp_mask_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_cke_cmp_mask_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_ac_lfsr_seed_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTCTRL1_ac_lfsr_seed_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_bist_err : 16;
        unsigned int ba_bist_err : 3;
        unsigned int we_bist_err : 1;
        unsigned int cas_bist_err : 1;
        unsigned int ras_bist_err : 1;
        unsigned int cs_bist_err : 4;
        unsigned int rst_bist_err : 1;
        unsigned int reserved : 5;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_addr_bist_err_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_addr_bist_err_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_ba_bist_err_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_ba_bist_err_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_we_bist_err_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_we_bist_err_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_cas_bist_err_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_cas_bist_err_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_ras_bist_err_START (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_ras_bist_err_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_cs_bist_err_START (22)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_cs_bist_err_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_rst_bist_err_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS0_rst_bist_err_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt_bist_err : 4;
        unsigned int cke_bist_err : 4;
        unsigned int reserved : 24;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_odt_bist_err_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_odt_bist_err_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_cke_bist_err_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACBISTSTS1_cke_bist_err_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt0_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int odt1_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_odt0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_odt0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_odt1_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL0_odt1_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt2_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int odt3_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_odt2_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_odt2_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_odt3_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL1_odt3_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs0_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int cs1_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_cs0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_cs0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_cs1_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL2_cs1_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs2_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int cs3_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_cs2_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_cs2_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_cs3_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL3_cs3_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cke0_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int cke1_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_cke0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_cke0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_cke1_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL4_cke1_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cke2_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int cke3_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_cke2_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_cke2_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_cke3_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL5_cke3_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int we_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int cas_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_we_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_we_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_cas_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL6_cas_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ras_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int resetn_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_ras_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_ras_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_resetn_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL7_resetn_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr0_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int addr1_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_addr0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_addr0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_addr1_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL0_addr1_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr2_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int addr3_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_addr2_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_addr2_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_addr3_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL1_addr3_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr4_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int addr5_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_addr4_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_addr4_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_addr5_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL2_addr5_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr6_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int addr7_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_addr6_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_addr6_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_addr7_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL3_addr7_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr8_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int addr9_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_addr8_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_addr8_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_addr9_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL4_addr9_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr10_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int addr11_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_addr10_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_addr10_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_addr11_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL5_addr11_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr12_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int addr13_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_addr12_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_addr12_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_addr13_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL6_addr13_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr14_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int addr15_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_addr14_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_addr14_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_addr15_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL7_addr15_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ba0_bdl : 5;
        unsigned int reserved_0: 11;
        unsigned int ba1_bdl : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_ba0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_ba0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_ba1_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL8_ba1_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ba2_bdl : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL9_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL9_ba2_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACADDRBDL9_ba2_bdl_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dramclk0_bdl : 5;
        unsigned int reserved_0 : 3;
        unsigned int dramclk1_bdl : 5;
        unsigned int reserved_1 : 3;
        unsigned int refclk_bdl : 5;
        unsigned int reserved_2 : 3;
        unsigned int fbclk_bdl : 5;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_dramclk0_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_dramclk0_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_dramclk1_bdl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_dramclk1_bdl_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_refclk_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_refclk_bdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_fbclk_bdl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCLKBDL_fbclk_bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enshift_a0 : 1;
        unsigned int margin_a0 : 1;
        unsigned int margin_a1 : 1;
        unsigned int dramclk_h : 1;
        unsigned int dramclk_l : 1;
        unsigned int lvdqclkdiv2 : 1;
        unsigned int bufphyclk_div2 : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_enshift_a0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_enshift_a0_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_margin_a0_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_margin_a0_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_margin_a1_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_margin_a1_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_dramclk_h_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_dramclk_h_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_dramclk_l_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_dramclk_l_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_lvdqclkdiv2_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_lvdqclkdiv2_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_bufphyclk_div2_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL0_bufphyclk_div2_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dram1sel_reset : 1;
        unsigned int dram1sel_cs : 1;
        unsigned int dram1sel_cke : 1;
        unsigned int dram1sel_odt : 1;
        unsigned int dram1sel_ras : 1;
        unsigned int dram1sel_cas : 1;
        unsigned int dram1sel_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int dram1sel_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int dram1sel_addr : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_reset_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_reset_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cs_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cs_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cke_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cke_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_odt_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_odt_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_ras_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_ras_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cas_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_cas_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_we_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_we_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_ba_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_ba_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_addr_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL1_dram1sel_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sdrsel_reset : 1;
        unsigned int sdrsel_cs : 1;
        unsigned int sdrsel_cke : 1;
        unsigned int sdrsel_odt : 1;
        unsigned int sdrsel_ras : 1;
        unsigned int sdrsel_cas : 1;
        unsigned int sdrsel_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int sdrsel_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int sdrsel_addr : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_reset_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_reset_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cs_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cs_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cke_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cke_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_odt_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_odt_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_ras_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_ras_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cas_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_cas_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_we_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_we_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_ba_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_ba_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_addr_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL2_sdrsel_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int posedge_reset : 1;
        unsigned int posedge_cs : 1;
        unsigned int posedge_cke : 1;
        unsigned int posedge_odt : 1;
        unsigned int posedge_ras : 1;
        unsigned int posedge_cas : 1;
        unsigned int posedge_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int posedge_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int posedge_addr : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_reset_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_reset_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cs_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cs_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cke_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cke_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_odt_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_odt_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_ras_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_ras_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cas_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_cas_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_we_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_we_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_ba_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_ba_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_addr_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL3_posedge_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timing2T_reset : 1;
        unsigned int timing2T_cs : 1;
        unsigned int timing2T_cke : 1;
        unsigned int timing2T_odt : 1;
        unsigned int timing2T_ras : 1;
        unsigned int timing2T_cas : 1;
        unsigned int timing2T_we : 1;
        unsigned int reserved_0 : 1;
        unsigned int timing2T_ba : 3;
        unsigned int reserved_1 : 5;
        unsigned int timing2T_addr : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_reset_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_reset_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cs_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cs_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cke_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cke_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_odt_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_odt_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_ras_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_ras_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cas_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_cas_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_we_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_we_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_ba_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_ba_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_addr_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL4_timing2T_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk1x_dramclk0 : 4;
        unsigned int clk1x_dramclk1 : 4;
        unsigned int clk1x_cmd2t_ctl : 4;
        unsigned int clk1x_cmd2t : 4;
        unsigned int clk1x_cmd1t : 4;
        unsigned int clk1x_mclk : 4;
        unsigned int clk1x_cmd2t_ctl2 : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_dramclk0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_dramclk0_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_dramclk1_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_dramclk1_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_ctl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_ctl_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd1t_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd1t_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_mclk_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_mclk_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_ctl2_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL5_clk1x_cmd2t_ctl2_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk2x_dramclk0 : 4;
        unsigned int clk2x_dramclk1 : 4;
        unsigned int clk2x_cmd2t_ctl : 4;
        unsigned int clk2x_cmd2t : 4;
        unsigned int clk2x_cmd1t : 4;
        unsigned int clk2x_mclk : 4;
        unsigned int clk2x_cmd2t_ctl2 : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_dramclk0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_dramclk0_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_dramclk1_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_dramclk1_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_ctl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_ctl_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd1t_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd1t_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_mclk_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_mclk_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_ctl2_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL6_clk2x_cmd2t_ctl2_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ckd2_mclk : 3;
        unsigned int ck0p_mclk : 3;
        unsigned int ck1p_dclk0 : 3;
        unsigned int ck2p_dclk1 : 3;
        unsigned int ck3p_cmd1t : 3;
        unsigned int reserved_0 : 3;
        unsigned int ck5p_cmd2tc : 3;
        unsigned int halft_cmd2tctl : 1;
        unsigned int reserved_1 : 1;
        unsigned int halft_cmd1t : 1;
        unsigned int halft_dramclk1 : 1;
        unsigned int halft_dramclk0 : 1;
        unsigned int halft_cmd2tctl2 : 1;
        unsigned int reserved_2 : 5;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ckd2_mclk_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ckd2_mclk_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck0p_mclk_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck0p_mclk_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck1p_dclk0_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck1p_dclk0_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck2p_dclk1_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck2p_dclk1_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck3p_cmd1t_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck3p_cmd1t_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck5p_cmd2tc_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_ck5p_cmd2tc_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd2tctl_START (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd2tctl_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd1t_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd1t_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_dramclk1_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_dramclk1_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_dramclk0_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_dramclk0_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd2tctl2_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL7_halft_cmd2tctl2_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_rdcnt : 3;
        unsigned int reserved_0 : 5;
        unsigned int DESKEW_regread : 1;
        unsigned int reserved_1 : 7;
        unsigned int acdbg_config : 4;
        unsigned int reserved_2 : 12;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_ac_rdcnt_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_ac_rdcnt_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_DESKEW_regread_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_DESKEW_regread_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_acdbg_config_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACDEBUG_acdbg_config_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_rsv_control : 32;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDC_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDC_ac_rsv_control_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDC_ac_rsv_control_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_rsv_status : 32;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDS_ac_rsv_status_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYRSVDS_ac_rsv_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ac_ck6p_reserve : 3;
        unsigned int ac_ck7p_reserve : 3;
        unsigned int ac_ck8p_reserve : 3;
        unsigned int ac_ck9p_reserve : 3;
        unsigned int ac_ck10p_reserve : 3;
        unsigned int ac_ck11p_reserve : 3;
        unsigned int ac_ck12p_reserve : 3;
        unsigned int reserved : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck6p_reserve_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck6p_reserve_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck7p_reserve_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck7p_reserve_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck8p_reserve_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck8p_reserve_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck9p_reserve_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck9p_reserve_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck10p_reserve_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck10p_reserve_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck11p_reserve_START (15)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck11p_reserve_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck12p_reserve_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL8_ac_ck12p_reserve_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt1_bdl0 : 5;
        unsigned int reserved_0: 11;
        unsigned int odt1_bdl1 : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_odt1_bdl0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_odt1_bdl0_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_odt1_bdl1_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL8_odt1_bdl1_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int odt1_bdl2 : 5;
        unsigned int reserved_0: 11;
        unsigned int odt1_bdl3 : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_odt1_bdl2_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_odt1_bdl2_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_odt1_bdl3_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL9_odt1_bdl3_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs1_bdl0 : 5;
        unsigned int reserved_0: 11;
        unsigned int cs1_bdl1 : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_cs1_bdl0_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_cs1_bdl0_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_cs1_bdl1_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL10_cs1_bdl1_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cs1_bdl2 : 5;
        unsigned int reserved_0: 11;
        unsigned int cs1_bdl3 : 5;
        unsigned int reserved_1: 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_cs1_bdl2_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_cs1_bdl2_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_cs1_bdl3_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACCMDBDL11_cs1_bdl3_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acdcc_dq1 : 3;
        unsigned int reserved_0 : 1;
        unsigned int acdcc_dq0 : 3;
        unsigned int reserved_1 : 1;
        unsigned int acdcc_dqs1 : 3;
        unsigned int reserved_2 : 1;
        unsigned int acdcc_dqs0 : 3;
        unsigned int reserved_3 : 1;
        unsigned int acdcc_mclk : 3;
        unsigned int reserved_4 : 13;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dq1_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dq1_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dq0_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dq0_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dqs1_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dqs1_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dqs0_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_dqs0_END (14)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_mclk_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYDCC_acdcc_mclk_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acsdrsel_cs1 : 1;
        unsigned int acsdrsel_cke1 : 1;
        unsigned int acsdrsel_odt1 : 1;
        unsigned int acposedge_cs1 : 1;
        unsigned int acposedge_cke1 : 1;
        unsigned int acposedge_odt1 : 1;
        unsigned int acdram1sel_cs1 : 1;
        unsigned int acdram1sel_cke1 : 1;
        unsigned int acdram1sel_odt1 : 1;
        unsigned int actiming2t_cs1 : 1;
        unsigned int actiming2t_cke1 : 1;
        unsigned int actiming2t_odt1 : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_cs1_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_cs1_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_cke1_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_cke1_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_odt1_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acsdrsel_odt1_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_cs1_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_cs1_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_cke1_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_cke1_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_odt1_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acposedge_odt1_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_cs1_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_cs1_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_cke1_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_cke1_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_odt1_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_acdram1sel_odt1_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_cs1_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_cs1_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_cke1_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_cke1_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_odt1_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_ACPHYCTL9_actiming2t_odt1_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tcackel : 6;
        unsigned int reserved_0: 2;
        unsigned int tcaent : 6;
        unsigned int reserved_1: 2;
        unsigned int tcacd : 6;
        unsigned int reserved_2: 2;
        unsigned int tcackeh : 6;
        unsigned int reserved_3: 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcackel_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcackel_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcaent_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcaent_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcacd_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcacd_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcackeh_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER0_tcackeh_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tcaext : 6;
        unsigned int reserved_0: 2;
        unsigned int tmrz : 6;
        unsigned int reserved_1: 18;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_tcaext_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_tcaext_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_tmrz_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_CATTIMER1_tmrz_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ca_samp_num_bdl : 4;
        unsigned int reserved_0 : 4;
        unsigned int ca_samp_num_ph : 4;
        unsigned int cat_rb_backtap : 4;
        unsigned int reserved_1 : 2;
        unsigned int cat_cat_phydq_sel : 1;
        unsigned int cat_restore_en : 1;
        unsigned int cat_openeye_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int sw_cat_mrw42 : 1;
        unsigned int sw_cat_mrw48 : 1;
        unsigned int sw_cat_mrw41 : 1;
        unsigned int sw_cat_strobe : 1;
        unsigned int sw_cat_cke_high : 1;
        unsigned int sw_cat_cke_low : 1;
        unsigned int sw_cat_dqvalid : 1;
        unsigned int sw_cat_en : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_ca_samp_num_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_ca_samp_num_bdl_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_ca_samp_num_ph_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_ca_samp_num_ph_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_rb_backtap_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_rb_backtap_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_cat_phydq_sel_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_cat_phydq_sel_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_restore_en_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_restore_en_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_openeye_en_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_cat_openeye_en_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw42_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw42_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw48_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw48_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw41_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_mrw41_END (26)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_strobe_START (27)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_strobe_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_cke_high_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_cke_high_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_cke_low_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_cke_low_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_dqvalid_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_dqvalid_END (30)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_en_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_CATCONFIG_sw_cat_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cat_reault : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_CATRESULT_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_CATRESULT_cat_reault_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_CATRESULT_cat_reault_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int phy_dq_result : 32;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_PHYDQRESULT_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDQRESULT_phy_dq_result_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_PHYDQRESULT_phy_dq_result_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addrph_a_right : 5;
        unsigned int reserved_0 : 3;
        unsigned int addrph_a_left : 5;
        unsigned int reserved_1 : 3;
        unsigned int addrph_a : 5;
        unsigned int reserved_2 : 3;
        unsigned int addrph_a_ori : 5;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_right_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_right_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_left_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_left_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_ori_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_ADDRPHBOUND_addrph_a_ori_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_cat_pat_p : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_P_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_P_sw_cat_pat_p_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_P_sw_cat_pat_p_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_cat_pat_n : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_N_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_N_sw_cat_pat_n_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_SWCATPATTERN_N_sw_cat_pat_n_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int t_dram_clk_enable : 4;
        unsigned int t_dram_clk_disable : 4;
        unsigned int t_wakeup_thrd_lv3 : 4;
        unsigned int t_resp : 4;
        unsigned int lp_pll_powerdown_disable : 1;
        unsigned int lp_dx_phy_phgated_disable : 1;
        unsigned int lp_dx_phy_clkgated_disable : 1;
        unsigned int lp_ac_phy_clkgated_disable : 1;
        unsigned int lp_cmdoen_disable : 1;
        unsigned int t_wakeup_thrd_lv2 : 4;
        unsigned int gcken_dxbist : 1;
        unsigned int gcken_acbist : 1;
        unsigned int gcken_retrain : 1;
        unsigned int gcken_dtrain : 1;
        unsigned int gcken_dinit : 1;
        unsigned int gcken_dfi_main : 1;
        unsigned int gcken_auto_en : 1;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_dram_clk_enable_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_dram_clk_enable_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_dram_clk_disable_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_dram_clk_disable_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_wakeup_thrd_lv3_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_wakeup_thrd_lv3_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_resp_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_resp_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_pll_powerdown_disable_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_pll_powerdown_disable_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_dx_phy_phgated_disable_START (17)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_dx_phy_phgated_disable_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_dx_phy_clkgated_disable_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_dx_phy_clkgated_disable_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_ac_phy_clkgated_disable_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_ac_phy_clkgated_disable_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_cmdoen_disable_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_lp_cmdoen_disable_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_wakeup_thrd_lv2_START (21)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_t_wakeup_thrd_lv2_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dxbist_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dxbist_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_acbist_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_acbist_END (26)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_retrain_START (27)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_retrain_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dtrain_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dtrain_END (28)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dinit_START (29)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dinit_END (29)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dfi_main_START (30)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_dfi_main_END (30)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_auto_en_START (31)
#define SOC_MDDRC_PACK_DDRC_PACK_LPCTRL_gcken_auto_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bist_en : 1;
        unsigned int reserved_0 : 7;
        unsigned int dq_cmp_mask : 8;
        unsigned int dqm_cmp_mask : 1;
        unsigned int reserved_1 : 7;
        unsigned int lfsr_seed : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_bist_en_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_bist_en_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_dq_cmp_mask_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_dq_cmp_mask_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_dqm_cmp_mask_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_dqm_cmp_mask_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_lfsr_seed_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTCTRL_lfsr_seed_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dq_cmp_rerr : 8;
        unsigned int dq_cmp_ferr : 8;
        unsigned int dqm_cmp_err : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dq_cmp_rerr_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dq_cmp_rerr_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dq_cmp_ferr_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dq_cmp_ferr_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dqm_cmp_err_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNBISTSTS_dqm_cmp_err_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bl_dis : 1;
        unsigned int dm_dis : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_bl_dis_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_bl_dis_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_dm_dis_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCTRL_dm_dis_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq0bdl : 5;
        unsigned int reserved_0: 3;
        unsigned int wdq1bdl : 5;
        unsigned int reserved_1: 3;
        unsigned int wdq2bdl : 5;
        unsigned int reserved_2: 3;
        unsigned int wdq3bdl : 5;
        unsigned int reserved_3: 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq0bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq0bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq1bdl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq1bdl_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq2bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq2bdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq3bdl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL0_wdq3bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdq4bdl : 5;
        unsigned int reserved_0: 3;
        unsigned int wdq5bdl : 5;
        unsigned int reserved_1: 3;
        unsigned int wdq6bdl : 5;
        unsigned int reserved_2: 3;
        unsigned int wdq7bdl : 5;
        unsigned int reserved_3: 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq4bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq4bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq5bdl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq5bdl_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq6bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq6bdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq7bdl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL1_wdq7bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdmbdl : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL2_wdmbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQNBDL2_wdmbdl_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdq0bdl : 5;
        unsigned int reserved_0: 3;
        unsigned int rdq1bdl : 5;
        unsigned int reserved_1: 3;
        unsigned int rdq2bdl : 5;
        unsigned int reserved_2: 3;
        unsigned int rdq3bdl : 5;
        unsigned int reserved_3: 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq0bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq0bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq1bdl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq1bdl_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq2bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq2bdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq3bdl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL0_rdq3bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdq4bdl : 5;
        unsigned int reserved_0: 3;
        unsigned int rdq5bdl : 5;
        unsigned int reserved_1: 3;
        unsigned int rdq6bdl : 5;
        unsigned int reserved_2: 3;
        unsigned int rdq7bdl : 5;
        unsigned int reserved_3: 3;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq4bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq4bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq5bdl_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq5bdl_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq6bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq6bdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq7bdl_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL1_rdq7bdl_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdmbdl : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL2_rdmbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQNBDL2_rdmbdl_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int oen_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int wdqsoe_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_oen_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_oen_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_wdqsoe_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNOEBDL_wdqsoe_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsbdl : 7;
        unsigned int reserved_0: 9;
        unsigned int rdqscyc : 7;
        unsigned int reserved_1: 9;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_rdqsbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_rdqsbdl_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_rdqscyc_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDQSDLY_rdqscyc_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdqsbdl : 5;
        unsigned int reserved_0: 3;
        unsigned int wdqsphase : 4;
        unsigned int reserved_1: 20;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_wdqsbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_wdqsbdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_wdqsphase_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQSDLY_wdqsphase_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 8;
        unsigned int wdqphase : 5;
        unsigned int reserved_1: 19;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWDQDLY_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQDLY_wdqphase_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWDQDLY_wdqphase_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 16;
        unsigned int wlsl : 2;
        unsigned int reserved_1: 14;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWLSL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWLSL_wlsl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWLSL_wlsl_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gds : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNGDS_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNGDS_gds_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNGDS_gds_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsgbdl : 6;
        unsigned int reserved_0 : 2;
        unsigned int rdqsgphase : 6;
        unsigned int reserved_1 : 2;
        unsigned int rdqsgtxbdl : 5;
        unsigned int reserved_2 : 3;
        unsigned int org_rdqsgph : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgbdl_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgphase_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgphase_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgtxbdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_rdqsgtxbdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_org_rdqsgph_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK0DXNRDQSGDLY_org_rdqsgph_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsgbdl : 6;
        unsigned int reserved_0 : 2;
        unsigned int rdqsgphase : 6;
        unsigned int reserved_1 : 2;
        unsigned int rdqsgtxbdl : 5;
        unsigned int reserved_2 : 3;
        unsigned int org_rdqsgph : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgbdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgbdl_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgphase_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgphase_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgtxbdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_rdqsgtxbdl_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_org_rdqsgph_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_RANK1DXNRDQSGDLY_org_rdqsgph_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_fbclk_bdl : 5;
        unsigned int reserved_0 : 11;
        unsigned int dx_refclk_bdl : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_dx_fbclk_bdl_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_dx_fbclk_bdl_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_dx_refclk_bdl_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNCLKBDL_dx_refclk_bdl_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rdqsbdl_right : 7;
        unsigned int reserved_0 : 9;
        unsigned int rdqsbdl_left : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_rdqsbdl_right_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_rdqsbdl_right_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_rdqsbdl_left_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNRDBOUND_rdqsbdl_left_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdqphase_right : 5;
        unsigned int reserved_0 : 11;
        unsigned int wdqphase_left : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_wdqphase_right_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_wdqphase_right_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_wdqphase_left_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNWRBOUND_wdqphase_left_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_pll_thrm : 1;
        unsigned int dx_pll_testpem : 1;
        unsigned int dx_pll_testen : 1;
        unsigned int dx_pll_init : 1;
        unsigned int dx_pll_cpi : 3;
        unsigned int dx_pll_sp : 3;
        unsigned int dx_pll_lt : 2;
        unsigned int dx_pll_calt : 1;
        unsigned int dx_pll_calm : 1;
        unsigned int dx_pll_cal : 1;
        unsigned int reserved : 17;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_thrm_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_thrm_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_testpem_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_testpem_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_testen_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_testen_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_init_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_init_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_cpi_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_cpi_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_sp_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_sp_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_lt_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_lt_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_calt_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_calt_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_calm_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_calm_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_cal_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYCTRL_dx_pll_cal_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxn_2nd_dq : 8;
        unsigned int rxp_2nd_dq : 8;
        unsigned int dx_margin_a1 : 1;
        unsigned int dx_dqs_l : 1;
        unsigned int dx_dqs_h : 1;
        unsigned int dx_rxn_2nd_dm : 1;
        unsigned int dx_rxp_2nd_dm : 1;
        unsigned int dqsgatedla : 1;
        unsigned int lvdqclkdiv2 : 1;
        unsigned int bufphyclkdiv2 : 1;
        unsigned int margin_a0 : 1;
        unsigned int enshift_a0 : 1;
        unsigned int ptrgated_en : 1;
        unsigned int reserved : 5;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_rxn_2nd_dq_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_rxn_2nd_dq_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_rxp_2nd_dq_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_rxp_2nd_dq_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_margin_a1_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_margin_a1_END (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_dqs_l_START (17)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_dqs_l_END (17)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_dqs_h_START (18)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_dqs_h_END (18)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_rxn_2nd_dm_START (19)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_rxn_2nd_dm_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_rxp_2nd_dm_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dx_rxp_2nd_dm_END (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dqsgatedla_START (21)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_dqsgatedla_END (21)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_lvdqclkdiv2_START (22)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_lvdqclkdiv2_END (22)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_bufphyclkdiv2_START (23)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_bufphyclkdiv2_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_margin_a0_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_margin_a0_END (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_enshift_a0_START (25)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_enshift_a0_END (25)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_ptrgated_en_START (26)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL0_ptrgated_en_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mclk2x : 4;
        unsigned int mclk1x : 4;
        unsigned int dqsclk2x : 4;
        unsigned int dqsclk1x : 4;
        unsigned int dqsgclk2x : 4;
        unsigned int dqsgclk1x : 4;
        unsigned int dqclk2x : 4;
        unsigned int dqclk1x : 4;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_mclk2x_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_mclk2x_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_mclk1x_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_mclk1x_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsclk2x_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsclk2x_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsclk1x_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsclk1x_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsgclk2x_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsgclk2x_END (19)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsgclk1x_START (20)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqsgclk1x_END (23)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqclk2x_START (24)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqclk2x_END (27)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqclk1x_START (28)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL1_dqclk1x_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs_cb : 3;
        unsigned int dqs_ca : 3;
        unsigned int dqs_rdcnt : 3;
        unsigned int s2b : 1;
        unsigned int s2a : 1;
        unsigned int s1b : 1;
        unsigned int s1a : 1;
        unsigned int s0b : 1;
        unsigned int s0a : 1;
        unsigned int reserved : 17;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_cb_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_cb_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_ca_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_ca_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_rdcnt_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_dqs_rdcnt_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s2b_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s2b_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s2a_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s2a_END (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s1b_START (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s1b_END (11)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s1a_START (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s1a_END (12)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s0b_START (13)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s0b_END (13)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s0a_START (14)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG0_s0a_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dqs0_gold : 8;
        unsigned int dqs0b : 8;
        unsigned int dqs0 : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0_gold_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0_gold_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0b_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0b_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUG1_dqs0_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dx_rsv_control : 16;
        unsigned int dx_rsv_status : 16;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_dx_rsv_control_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_dx_rsv_control_END (15)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_dx_rsv_status_START (16)
#define SOC_MDDRC_PACK_DDRC_PACK_DXPHYRSVD_dx_rsv_status_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int BUFRESETCONTN_gated_DQSGERROR : 1;
        unsigned int BUFRESETCONTN_gated_TDC : 1;
        unsigned int reg_GDS_r1T_sel_16b : 1;
        unsigned int reg_ODTEN_gated : 1;
        unsigned int reg_dummypad_use : 1;
        unsigned int reg_dynamic_PUPDEN_16b : 1;
        unsigned int reg_sel_halfT_gated_16b : 1;
        unsigned int reg_dqsglat1T_en : 1;
        unsigned int reg_squeach_en : 1;
        unsigned int reg_dqsg_TX_2path : 1;
        unsigned int reg_OE_extend1T_en : 1;
        unsigned int reserved : 21;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_BUFRESETCONTN_gated_DQSGERROR_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_BUFRESETCONTN_gated_DQSGERROR_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_BUFRESETCONTN_gated_TDC_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_BUFRESETCONTN_gated_TDC_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_GDS_r1T_sel_16b_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_GDS_r1T_sel_16b_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_ODTEN_gated_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_ODTEN_gated_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dummypad_use_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dummypad_use_END (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dynamic_PUPDEN_16b_START (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dynamic_PUPDEN_16b_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_sel_halfT_gated_16b_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_sel_halfT_gated_16b_END (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dqsglat1T_en_START (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dqsglat1T_en_END (7)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_squeach_en_START (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_squeach_en_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dqsg_TX_2path_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_dqsg_TX_2path_END (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_OE_extend1T_en_START (10)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNMISCCTRL2_reg_OE_extend1T_en_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reg_dbg_REFFB_postdly : 1;
        unsigned int reg_dbg_REFFB_predly : 1;
        unsigned int reg_dbg_pllclk_sel : 1;
        unsigned int reg_dbg_prepost_sel : 1;
        unsigned int DESKEW_regread : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_REFFB_postdly_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_REFFB_postdly_END (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_REFFB_predly_START (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_REFFB_predly_END (1)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_pllclk_sel_START (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_pllclk_sel_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_prepost_sel_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_reg_dbg_prepost_sel_END (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_DESKEW_regread_START (4)
#define SOC_MDDRC_PACK_DDRC_PACK_DXDEBUGCONFIG_DESKEW_regread_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dxctl_dq_dcc : 3;
        unsigned int dxctl_dqsg_dcc : 3;
        unsigned int dxctl_dqs_dcc : 3;
        unsigned int dxctl_mclk_dcc : 3;
        unsigned int reserved : 20;
    } reg;
} SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_UNION;
#endif
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dq_dcc_START (0)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dq_dcc_END (2)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dqsg_dcc_START (3)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dqsg_dcc_END (5)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dqs_dcc_START (6)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_dqs_dcc_END (8)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_mclk_dcc_START (9)
#define SOC_MDDRC_PACK_DDRC_PACK_DXNDCC_dxctl_mclk_dcc_END (11)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
