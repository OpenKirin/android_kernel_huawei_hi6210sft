#ifndef __SOC_VPP_INTERFACE_H__
#define __SOC_VPP_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_VPP_VOCTRL_ADDR(base) ((base) + (0x0000))
#define SOC_VPP_VOINTSTA_ADDR(base) ((base) + (0x0004))
#define SOC_VPP_VOMSKINTSTA_ADDR(base) ((base) + (0x0008))
#define SOC_VPP_VOINTMSK_ADDR(base) ((base) + (0x000C))
#define SOC_VPP_VOUVERSION1_ADDR(base) ((base) + (0x0010))
#define SOC_VPP_VOUVERSION2_ADDR(base) ((base) + (0x0014))
#define SOC_VPP_VODEBUG_ADDR(base) ((base) + (0x0020))
#define SOC_VPP_VOLNKLSTCTRL_ADDR(base) ((base) + (0x0024))
#define SOC_VPP_VOLNKLSTADDR_ADDR(base) ((base) + (0x0028))
#define SOC_VPP_VOLNKLSTSTRT_ADDR(base) ((base) + (0x002C))
#define SOC_VPP_VOLNKLSTPENDINGSTA_ADDR(base) ((base) + (0x0030))
#define SOC_VPP_VOLNKLSTWORKINGSTA_ADDR(base) ((base) + (0x0034))
#define SOC_VPP_VOLNKLSTENDSTA_ADDR(base) ((base) + (0x0038))
#define SOC_VPP_VOLNKLSTNUMSTA_ADDR(base) ((base) + (0x003C))
#define SOC_VPP_VOPARAUP_ADDR(base) ((base) + (0x0040))
#define SOC_VPP_VHDHCOEFAD_ADDR(base) ((base) + (0x0044))
#define SOC_VPP_VHDVCOEFAD_ADDR(base) ((base) + (0x0048))
#define SOC_VPP_VADHCOEFAD_ADDR(base) ((base) + (0x004C))
#define SOC_VPP_VADVCOEFAD_ADDR(base) ((base) + (0x0050))
#define SOC_VPP_ACCAD_ADDR(base) ((base) + (0x0054))
#define SOC_VPP_VHDCTRL_ADDR(base) ((base) + (0x0100))
#define SOC_VPP_VHDUPD_ADDR(base) ((base) + (0x0104))
#define SOC_VPP_VHDLADDR_ADDR(base) ((base) + (0x0108))
#define SOC_VPP_VHDLCADDR_ADDR(base) ((base) + (0x010C))
#define SOC_VPP_VHDCADDR_ADDR(base) ((base) + (0x0110))
#define SOC_VPP_VHDCCADDR_ADDR(base) ((base) + (0x0114))
#define SOC_VPP_VHDNADDR_ADDR(base) ((base) + (0x0118))
#define SOC_VPP_VHDNCADDR_ADDR(base) ((base) + (0x011C))
#define SOC_VPP_VHDSTRIDE_ADDR(base) ((base) + (0x0124))
#define SOC_VPP_VHDIRESO_ADDR(base) ((base) + (0x0128))
#define SOC_VPP_VHDDIEADDR_ADDR(base) ((base) + (0x0138))
#define SOC_VPP_VHDWBC1ADDR_ADDR(base) ((base) + (0x013C))
#define SOC_VPP_VHDWBC1STRD_ADDR(base) ((base) + (0x0140))
#define SOC_VPP_VHDDIESTADDR_ADDR(base) ((base) + (0x0144))
#define SOC_VPP_VHDVFPOS_ADDR(base) ((base) + (0x0168))
#define SOC_VPP_VHDVLPOS_ADDR(base) ((base) + (0x016C))
#define SOC_VPP_VHDBK_ADDR(base) ((base) + (0x0170))
#define SOC_VPP_VHDCSCIDC_ADDR(base) ((base) + (0x0180))
#define SOC_VPP_VHDCSCODC_ADDR(base) ((base) + (0x0184))
#define SOC_VPP_VHDCSCP0_ADDR(base) ((base) + (0x0188))
#define SOC_VPP_VHDCSCP1_ADDR(base) ((base) + (0x018C))
#define SOC_VPP_VHDCSCP2_ADDR(base) ((base) + (0x0190))
#define SOC_VPP_VHDCSCP3_ADDR(base) ((base) + (0x0194))
#define SOC_VPP_VHDCSCP4_ADDR(base) ((base) + (0x0198))
#define SOC_VPP_VHDACM0_ADDR(base) ((base) + (0x01A0))
#define SOC_VPP_VHDACM1_ADDR(base) ((base) + (0x01A4))
#define SOC_VPP_VHDACM2_ADDR(base) ((base) + (0x01A8))
#define SOC_VPP_VHDACM3_ADDR(base) ((base) + (0x01AC))
#define SOC_VPP_VHDACM4_ADDR(base) ((base) + (0x01B0))
#define SOC_VPP_VHDACM5_ADDR(base) ((base) + (0x01B4))
#define SOC_VPP_VHDACM6_ADDR(base) ((base) + (0x01B8))
#define SOC_VPP_VHDACM7_ADDR(base) ((base) + (0x01BC))
#define SOC_VPP_VHDHSP_ADDR(base) ((base) + (0x01C0))
#define SOC_VPP_VHDHLOFFSET_ADDR(base) ((base) + (0x01C4))
#define SOC_VPP_VHDHCOFFSET_ADDR(base) ((base) + (0x01C8))
#define SOC_VPP_VHDVSP_ADDR(base) ((base) + (0x01D8))
#define SOC_VPP_VHDVSR_ADDR(base) ((base) + (0x01DC))
#define SOC_VPP_VHDVOFFSET_ADDR(base) ((base) + (0x01E0))
#define SOC_VPP_VHDZMEORESO_ADDR(base) ((base) + (0x01E4))
#define SOC_VPP_VHDZMEIRESO_ADDR(base) ((base) + (0x01E8))
#define SOC_VPP_VHDACCTHD1_ADDR(base) ((base) + (0x0200))
#define SOC_VPP_VHDACCTHD2_ADDR(base) ((base) + (0x0204))
#define SOC_VPP_VHDACCLOWN_ADDR(base) ((base) + (0x0210бл0x0218))
#define SOC_VPP_VHDACCMEDN_ADDR(base) ((base) + (0x0220бл0x0228))
#define SOC_VPP_VHDACCHIGHN_ADDR(base) ((base) + (0x0230бл0x0238))
#define SOC_VPP_VHDACCMLN_ADDR(base) ((base) + (0x0240бл0x0248))
#define SOC_VPP_VHDACCMHN_ADDR(base) ((base) + (0x0250бл0x0258))
#define SOC_VPP_VHDACC3LOW_ADDR(base) ((base) + (0x0260))
#define SOC_VPP_VHDACC3MED_ADDR(base) ((base) + (0x0264))
#define SOC_VPP_VHDACC3HIGH_ADDR(base) ((base) + (0x0268))
#define SOC_VPP_VHDACC8MLOW_ADDR(base) ((base) + (0x026C))
#define SOC_VPP_VHDACC8MHIGH_ADDR(base) ((base) + (0x0270))
#define SOC_VPP_VHDACCTOTAL_ADDR(base) ((base) + (0x0274))
#define SOC_VPP_VHDIFIRCOEF01_ADDR(base) ((base) + (0x0280))
#define SOC_VPP_VHDIFIRCOEF23_ADDR(base) ((base) + (0x0284))
#define SOC_VPP_VHDIFIRCOEF45_ADDR(base) ((base) + (0x0288))
#define SOC_VPP_VHDIFIRCOEF67_ADDR(base) ((base) + (0x028C))
#define SOC_VPP_VHDDIECTRL_ADDR(base) ((base) + (0x0300))
#define SOC_VPP_VHDDIELMA0_ADDR(base) ((base) + (0x0308))
#define SOC_VPP_VHDDIELMA1_ADDR(base) ((base) + (0x030C))
#define SOC_VPP_VHDDIELMA2_ADDR(base) ((base) + (0x0310))
#define SOC_VPP_VHDDIEINTEN_ADDR(base) ((base) + (0x0314))
#define SOC_VPP_VHDDIESCALE_ADDR(base) ((base) + (0x0318))
#define SOC_VPP_VHDDIECHECK1_ADDR(base) ((base) + (0x031C))
#define SOC_VPP_VHDDIECHECK2_ADDR(base) ((base) + (0x0320))
#define SOC_VPP_VHDDIEDIR0_3_ADDR(base) ((base) + (0x324))
#define SOC_VPP_VHDDIEDIR4_7_ADDR(base) ((base) + (0x328))
#define SOC_VPP_VHDDIEDIR8_11_ADDR(base) ((base) + (0x32C))
#define SOC_VPP_VHDDIEDIR12_14_ADDR(base) ((base) + (0x330))
#define SOC_VPP_VHDDIESTA_ADDR(base) ((base) + (0x0338))
#define SOC_VPP_VHDDIESTKADDR_ADDR(base) ((base) + (0x03A4))
#define SOC_VPP_VHDDIESTLADDR_ADDR(base) ((base) + (0x03A8))
#define SOC_VPP_VHDDIESTMADDR_ADDR(base) ((base) + (0x03AC))
#define SOC_VPP_VHDDIESTNADDR_ADDR(base) ((base) + (0x03B0))
#define SOC_VPP_VHDDIESTSQTRADDR_ADDR(base) ((base) + (0x03B4))
#define SOC_VPP_VHDCCRSCLR0_ADDR(base) ((base) + (0x03B8))
#define SOC_VPP_VHDCCRSCLR1_ADDR(base) ((base) + (0x03BC))
#define SOC_VPP_VHDPDCTRL_ADDR(base) ((base) + (0x0400))
#define SOC_VPP_VHDPDBLKPOS0_ADDR(base) ((base) + (0x0404))
#define SOC_VPP_VHDPDBLKPOS1_ADDR(base) ((base) + (0x0408))
#define SOC_VPP_VHDPDBLKTHD_ADDR(base) ((base) + (0x040C))
#define SOC_VPP_VHDPDHISTTHD_ADDR(base) ((base) + (0x0410))
#define SOC_VPP_VHDPDUMTHD_ADDR(base) ((base) + (0x0414))
#define SOC_VPP_VHDPDPCCCORING_ADDR(base) ((base) + (0x0418))
#define SOC_VPP_VHDPDPCCHTHD_ADDR(base) ((base) + (0x041C))
#define SOC_VPP_VHDPDPCCVTHD_ADDR(base) ((base) + (0x0420))
#define SOC_VPP_VHDPDITDIFFVTHD_ADDR(base) ((base) + (0x0424))
#define SOC_VPP_VHDPDLASITHD_ADDR(base) ((base) + (0x0428))
#define SOC_VPP_VHDPDFRMITDIFF_ADDR(base) ((base) + (0x042C))
#define SOC_VPP_VHDPDSTLBLKSAD_ADDR(base) ((base) + (0x0430бл0x046C))
#define SOC_VPP_VHDPDHISTBIN_ADDR(base) ((base) + (0x0470бл0x47C))
#define SOC_VPP_VHDPDUMMATCH0_ADDR(base) ((base) + (0x0480))
#define SOC_VPP_VHDPDUMNOMATCH0_ADDR(base) ((base) + (0x0484))
#define SOC_VPP_VHDPDUMMATCH1_ADDR(base) ((base) + (0x0488))
#define SOC_VPP_VHDPDUMNOMATCH1_ADDR(base) ((base) + (0x048C))
#define SOC_VPP_VHDPDPCCFFWD_ADDR(base) ((base) + (0x0490))
#define SOC_VPP_VHDPDPCCFWD_ADDR(base) ((base) + (0x0494))
#define SOC_VPP_VHDPDPCCBWD_ADDR(base) ((base) + (0x0498))
#define SOC_VPP_VHDPDPCCCRSS_ADDR(base) ((base) + (0x49C))
#define SOC_VPP_VHDPDPCCPW_ADDR(base) ((base) + (0x4A0))
#define SOC_VPP_VHDPDPCCFWDTKR_ADDR(base) ((base) + (0x4A4))
#define SOC_VPP_VHDPDPCCBWDTKR_ADDR(base) ((base) + (0x4A8))
#define SOC_VPP_VHDPDPCCBLKFWD_ADDR(base) ((base) + (0x04ACбл0x4CC))
#define SOC_VPP_VHDPDPCCBLKBWD_ADDR(base) ((base) + (0x04D0бл0x4F0))
#define SOC_VPP_VHDPDLASICNT14_ADDR(base) ((base) + (0x4F4))
#define SOC_VPP_VHDPDLASICNT32_ADDR(base) ((base) + (0x4F8))
#define SOC_VPP_VHDPDLASICNT34_ADDR(base) ((base) + (0x4FC))
#define SOC_VPP_VHDHLCOEF_ADDR(base) ((base) + (0x2000бл0x210C))
#define SOC_VPP_VHDHCCOEF_ADDR(base) ((base) + (0x2200бл0x2284))
#define SOC_VPP_VHDVLCOEF_ADDR(base) ((base) + (0x2400бл0x250C))
#define SOC_VPP_VHDVCCOEF_ADDR(base) ((base) + (0x2600бл0x2684))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int outstd_rid1 : 4;
        unsigned int outstd_rid0 : 4;
        unsigned int vo_id_sel : 1;
        unsigned int reserved_1 : 3;
        unsigned int outstd_wid0 : 4;
        unsigned int bus_dbg_en : 2;
        unsigned int reserved_2 : 9;
        unsigned int vo_ck_gt_en : 1;
    } reg;
} SOC_VPP_VOCTRL_UNION;
#endif
#define SOC_VPP_VOCTRL_outstd_rid1_START (4)
#define SOC_VPP_VOCTRL_outstd_rid1_END (7)
#define SOC_VPP_VOCTRL_outstd_rid0_START (8)
#define SOC_VPP_VOCTRL_outstd_rid0_END (11)
#define SOC_VPP_VOCTRL_vo_id_sel_START (12)
#define SOC_VPP_VOCTRL_vo_id_sel_END (12)
#define SOC_VPP_VOCTRL_outstd_wid0_START (16)
#define SOC_VPP_VOCTRL_outstd_wid0_END (19)
#define SOC_VPP_VOCTRL_bus_dbg_en_START (20)
#define SOC_VPP_VOCTRL_bus_dbg_en_END (21)
#define SOC_VPP_VOCTRL_vo_ck_gt_en_START (31)
#define SOC_VPP_VOCTRL_vo_ck_gt_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 9;
        unsigned int vte_int : 1;
        unsigned int reserved_1 : 2;
        unsigned int lnk_tend_int : 1;
        unsigned int reserved_2 : 9;
        unsigned int vhdrr_int : 1;
        unsigned int reserved_3 : 8;
        unsigned int be_int : 1;
    } reg;
} SOC_VPP_VOINTSTA_UNION;
#endif
#define SOC_VPP_VOINTSTA_vte_int_START (9)
#define SOC_VPP_VOINTSTA_vte_int_END (9)
#define SOC_VPP_VOINTSTA_lnk_tend_int_START (12)
#define SOC_VPP_VOINTSTA_lnk_tend_int_END (12)
#define SOC_VPP_VOINTSTA_vhdrr_int_START (22)
#define SOC_VPP_VOINTSTA_vhdrr_int_END (22)
#define SOC_VPP_VOINTSTA_be_int_START (31)
#define SOC_VPP_VOINTSTA_be_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 9;
        unsigned int vte_int : 1;
        unsigned int reserved_1 : 2;
        unsigned int lnk_tend_int : 1;
        unsigned int reserved_2 : 9;
        unsigned int vhdrr_int : 1;
        unsigned int reserved_3 : 8;
        unsigned int be_int : 1;
    } reg;
} SOC_VPP_VOMSKINTSTA_UNION;
#endif
#define SOC_VPP_VOMSKINTSTA_vte_int_START (9)
#define SOC_VPP_VOMSKINTSTA_vte_int_END (9)
#define SOC_VPP_VOMSKINTSTA_lnk_tend_int_START (12)
#define SOC_VPP_VOMSKINTSTA_lnk_tend_int_END (12)
#define SOC_VPP_VOMSKINTSTA_vhdrr_int_START (22)
#define SOC_VPP_VOMSKINTSTA_vhdrr_int_END (22)
#define SOC_VPP_VOMSKINTSTA_be_int_START (31)
#define SOC_VPP_VOMSKINTSTA_be_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 9;
        unsigned int vte_intmsk : 1;
        unsigned int reserved_1 : 2;
        unsigned int lnk_tend_intmsk : 1;
        unsigned int reserved_2 : 9;
        unsigned int vhdrr_intmsk : 1;
        unsigned int reserved_3 : 8;
        unsigned int be_intmsk : 1;
    } reg;
} SOC_VPP_VOINTMSK_UNION;
#endif
#define SOC_VPP_VOINTMSK_vte_intmsk_START (9)
#define SOC_VPP_VOINTMSK_vte_intmsk_END (9)
#define SOC_VPP_VOINTMSK_lnk_tend_intmsk_START (12)
#define SOC_VPP_VOINTMSK_lnk_tend_intmsk_END (12)
#define SOC_VPP_VOINTMSK_vhdrr_intmsk_START (22)
#define SOC_VPP_VOINTMSK_vhdrr_intmsk_END (22)
#define SOC_VPP_VOINTMSK_be_intmsk_START (31)
#define SOC_VPP_VOINTMSK_be_intmsk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vouversion0 : 32;
    } reg;
} SOC_VPP_VOUVERSION1_UNION;
#endif
#define SOC_VPP_VOUVERSION1_vouversion0_START (0)
#define SOC_VPP_VOUVERSION1_vouversion0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vouversion1 : 32;
    } reg;
} SOC_VPP_VOUVERSION2_UNION;
#endif
#define SOC_VPP_VOUVERSION2_vouversion1_START (0)
#define SOC_VPP_VOUVERSION2_vouversion1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rm_en_chn : 4;
        unsigned int dhd_ff_info : 2;
        unsigned int dsd_ff_info : 2;
        unsigned int wbc0_ff_info : 2;
        unsigned int wbc1_ff_info : 2;
        unsigned int wbc2_ff_info : 2;
        unsigned int wbc_mode : 4;
        unsigned int node_num : 6;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VODEBUG_UNION;
#endif
#define SOC_VPP_VODEBUG_rm_en_chn_START (0)
#define SOC_VPP_VODEBUG_rm_en_chn_END (3)
#define SOC_VPP_VODEBUG_dhd_ff_info_START (4)
#define SOC_VPP_VODEBUG_dhd_ff_info_END (5)
#define SOC_VPP_VODEBUG_dsd_ff_info_START (6)
#define SOC_VPP_VODEBUG_dsd_ff_info_END (7)
#define SOC_VPP_VODEBUG_wbc0_ff_info_START (8)
#define SOC_VPP_VODEBUG_wbc0_ff_info_END (9)
#define SOC_VPP_VODEBUG_wbc1_ff_info_START (10)
#define SOC_VPP_VODEBUG_wbc1_ff_info_END (11)
#define SOC_VPP_VODEBUG_wbc2_ff_info_START (12)
#define SOC_VPP_VODEBUG_wbc2_ff_info_END (13)
#define SOC_VPP_VODEBUG_wbc_mode_START (14)
#define SOC_VPP_VODEBUG_wbc_mode_END (17)
#define SOC_VPP_VODEBUG_node_num_START (18)
#define SOC_VPP_VODEBUG_node_num_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lnk_fst_num : 8;
        unsigned int lnk_fst_node_num : 10;
        unsigned int reserved : 13;
        unsigned int lnk_en : 1;
    } reg;
} SOC_VPP_VOLNKLSTCTRL_UNION;
#endif
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_num_START (0)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_num_END (7)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_node_num_START (8)
#define SOC_VPP_VOLNKLSTCTRL_lnk_fst_node_num_END (17)
#define SOC_VPP_VOLNKLSTCTRL_lnk_en_START (31)
#define SOC_VPP_VOLNKLSTCTRL_lnk_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lnk_addr : 32;
    } reg;
} SOC_VPP_VOLNKLSTADDR_UNION;
#endif
#define SOC_VPP_VOLNKLSTADDR_lnk_addr_START (0)
#define SOC_VPP_VOLNKLSTADDR_lnk_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 31;
        unsigned int lnk_start : 1;
    } reg;
} SOC_VPP_VOLNKLSTSTRT_UNION;
#endif
#define SOC_VPP_VOLNKLSTSTRT_lnk_start_START (31)
#define SOC_VPP_VOLNKLSTSTRT_lnk_start_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_pendig : 32;
    } reg;
} SOC_VPP_VOLNKLSTPENDINGSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTPENDINGSTA_addr_pendig_START (0)
#define SOC_VPP_VOLNKLSTPENDINGSTA_addr_pendig_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_working : 32;
    } reg;
} SOC_VPP_VOLNKLSTWORKINGSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTWORKINGSTA_addr_working_START (0)
#define SOC_VPP_VOLNKLSTWORKINGSTA_addr_working_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_end : 32;
    } reg;
} SOC_VPP_VOLNKLSTENDSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTENDSTA_addr_end_START (0)
#define SOC_VPP_VOLNKLSTENDSTA_addr_end_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int node_num_pending : 8;
        unsigned int node_num_working : 8;
        unsigned int node_num_end : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VOLNKLSTNUMSTA_UNION;
#endif
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_pending_START (0)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_pending_END (7)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_working_START (8)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_working_END (15)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_end_START (16)
#define SOC_VPP_VOLNKLSTNUMSTA_node_num_end_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vhd_hcoef_upd : 1;
        unsigned int vhd_vcoef_upd : 1;
        unsigned int reserved_0 : 2;
        unsigned int video_acc_upd : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_VPP_VOPARAUP_UNION;
#endif
#define SOC_VPP_VOPARAUP_vhd_hcoef_upd_START (0)
#define SOC_VPP_VOPARAUP_vhd_hcoef_upd_END (0)
#define SOC_VPP_VOPARAUP_vhd_vcoef_upd_START (1)
#define SOC_VPP_VOPARAUP_vhd_vcoef_upd_END (1)
#define SOC_VPP_VOPARAUP_video_acc_upd_START (4)
#define SOC_VPP_VOPARAUP_video_acc_upd_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef_addr : 32;
    } reg;
} SOC_VPP_VHDHCOEFAD_UNION;
#endif
#define SOC_VPP_VHDHCOEFAD_coef_addr_START (0)
#define SOC_VPP_VHDHCOEFAD_coef_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef_addr : 32;
    } reg;
} SOC_VPP_VHDVCOEFAD_UNION;
#endif
#define SOC_VPP_VHDVCOEFAD_coef_addr_START (0)
#define SOC_VPP_VHDVCOEFAD_coef_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef_addr : 32;
    } reg;
} SOC_VPP_VADHCOEFAD_UNION;
#endif
#define SOC_VPP_VADHCOEFAD_coef_addr_START (0)
#define SOC_VPP_VADHCOEFAD_coef_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef_addr : 32;
    } reg;
} SOC_VPP_VADVCOEFAD_UNION;
#endif
#define SOC_VPP_VADVCOEFAD_coef_addr_START (0)
#define SOC_VPP_VADVCOEFAD_coef_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef_addr : 32;
    } reg;
} SOC_VPP_ACCAD_UNION;
#endif
#define SOC_VPP_ACCAD_coef_addr_START (0)
#define SOC_VPP_ACCAD_coef_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ifmt : 4;
        unsigned int time_out : 4;
        unsigned int reserved_0 : 4;
        unsigned int chm_rmode : 2;
        unsigned int lm_rmode : 2;
        unsigned int bfield_first : 1;
        unsigned int vup_mode : 1;
        unsigned int ifir_mode : 2;
        unsigned int reserved_1 : 3;
        unsigned int vhd_sta_wr_en : 1;
        unsigned int ofl_btm : 1;
        unsigned int ofl_inter : 1;
        unsigned int wbc1_int_en : 1;
        unsigned int wbc1_en : 1;
        unsigned int mute_en : 1;
        unsigned int reserved_2 : 1;
        unsigned int resource_sel : 1;
        unsigned int surface_en : 1;
    } reg;
} SOC_VPP_VHDCTRL_UNION;
#endif
#define SOC_VPP_VHDCTRL_ifmt_START (0)
#define SOC_VPP_VHDCTRL_ifmt_END (3)
#define SOC_VPP_VHDCTRL_time_out_START (4)
#define SOC_VPP_VHDCTRL_time_out_END (7)
#define SOC_VPP_VHDCTRL_chm_rmode_START (12)
#define SOC_VPP_VHDCTRL_chm_rmode_END (13)
#define SOC_VPP_VHDCTRL_lm_rmode_START (14)
#define SOC_VPP_VHDCTRL_lm_rmode_END (15)
#define SOC_VPP_VHDCTRL_bfield_first_START (16)
#define SOC_VPP_VHDCTRL_bfield_first_END (16)
#define SOC_VPP_VHDCTRL_vup_mode_START (17)
#define SOC_VPP_VHDCTRL_vup_mode_END (17)
#define SOC_VPP_VHDCTRL_ifir_mode_START (18)
#define SOC_VPP_VHDCTRL_ifir_mode_END (19)
#define SOC_VPP_VHDCTRL_vhd_sta_wr_en_START (23)
#define SOC_VPP_VHDCTRL_vhd_sta_wr_en_END (23)
#define SOC_VPP_VHDCTRL_ofl_btm_START (24)
#define SOC_VPP_VHDCTRL_ofl_btm_END (24)
#define SOC_VPP_VHDCTRL_ofl_inter_START (25)
#define SOC_VPP_VHDCTRL_ofl_inter_END (25)
#define SOC_VPP_VHDCTRL_wbc1_int_en_START (26)
#define SOC_VPP_VHDCTRL_wbc1_int_en_END (26)
#define SOC_VPP_VHDCTRL_wbc1_en_START (27)
#define SOC_VPP_VHDCTRL_wbc1_en_END (27)
#define SOC_VPP_VHDCTRL_mute_en_START (28)
#define SOC_VPP_VHDCTRL_mute_en_END (28)
#define SOC_VPP_VHDCTRL_resource_sel_START (30)
#define SOC_VPP_VHDCTRL_resource_sel_END (30)
#define SOC_VPP_VHDCTRL_surface_en_START (31)
#define SOC_VPP_VHDCTRL_surface_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int regup : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VPP_VHDUPD_UNION;
#endif
#define SOC_VPP_VHDUPD_regup_START (0)
#define SOC_VPP_VHDUPD_regup_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_laddr : 32;
    } reg;
} SOC_VPP_VHDLADDR_UNION;
#endif
#define SOC_VPP_VHDLADDR_surface_laddr_START (0)
#define SOC_VPP_VHDLADDR_surface_laddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_lcaddr : 32;
    } reg;
} SOC_VPP_VHDLCADDR_UNION;
#endif
#define SOC_VPP_VHDLCADDR_surface_lcaddr_START (0)
#define SOC_VPP_VHDLCADDR_surface_lcaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_caddr : 32;
    } reg;
} SOC_VPP_VHDCADDR_UNION;
#endif
#define SOC_VPP_VHDCADDR_surface_caddr_START (0)
#define SOC_VPP_VHDCADDR_surface_caddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_ccaddr : 32;
    } reg;
} SOC_VPP_VHDCCADDR_UNION;
#endif
#define SOC_VPP_VHDCCADDR_surface_ccaddr_START (0)
#define SOC_VPP_VHDCCADDR_surface_ccaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_naddr : 32;
    } reg;
} SOC_VPP_VHDNADDR_UNION;
#endif
#define SOC_VPP_VHDNADDR_surface_naddr_START (0)
#define SOC_VPP_VHDNADDR_surface_naddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_ncaddr : 32;
    } reg;
} SOC_VPP_VHDNCADDR_UNION;
#endif
#define SOC_VPP_VHDNCADDR_surface_ncaddr_START (0)
#define SOC_VPP_VHDNCADDR_surface_ncaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int surface_stride : 16;
        unsigned int surface_cstride : 16;
    } reg;
} SOC_VPP_VHDSTRIDE_UNION;
#endif
#define SOC_VPP_VHDSTRIDE_surface_stride_START (0)
#define SOC_VPP_VHDSTRIDE_surface_stride_END (15)
#define SOC_VPP_VHDSTRIDE_surface_cstride_START (16)
#define SOC_VPP_VHDSTRIDE_surface_cstride_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iw : 12;
        unsigned int ih : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDIRESO_UNION;
#endif
#define SOC_VPP_VHDIRESO_iw_START (0)
#define SOC_VPP_VHDIRESO_iw_END (11)
#define SOC_VPP_VHDIRESO_ih_START (12)
#define SOC_VPP_VHDIRESO_ih_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dieaddr : 32;
    } reg;
} SOC_VPP_VHDDIEADDR_UNION;
#endif
#define SOC_VPP_VHDDIEADDR_dieaddr_START (0)
#define SOC_VPP_VHDDIEADDR_dieaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wbc1addr : 32;
    } reg;
} SOC_VPP_VHDWBC1ADDR_UNION;
#endif
#define SOC_VPP_VHDWBC1ADDR_wbc1addr_START (0)
#define SOC_VPP_VHDWBC1ADDR_wbc1addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wbc1strd : 16;
        unsigned int req_interval : 10;
        unsigned int reserved : 4;
        unsigned int wbc1_dft : 2;
    } reg;
} SOC_VPP_VHDWBC1STRD_UNION;
#endif
#define SOC_VPP_VHDWBC1STRD_wbc1strd_START (0)
#define SOC_VPP_VHDWBC1STRD_wbc1strd_END (15)
#define SOC_VPP_VHDWBC1STRD_req_interval_START (16)
#define SOC_VPP_VHDWBC1STRD_req_interval_END (25)
#define SOC_VPP_VHDWBC1STRD_wbc1_dft_START (30)
#define SOC_VPP_VHDWBC1STRD_wbc1_dft_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int diestaddr : 32;
    } reg;
} SOC_VPP_VHDDIESTADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTADDR_diestaddr_START (0)
#define SOC_VPP_VHDDIESTADDR_diestaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int video_xfpos : 12;
        unsigned int video_yfpos : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDVFPOS_UNION;
#endif
#define SOC_VPP_VHDVFPOS_video_xfpos_START (0)
#define SOC_VPP_VHDVFPOS_video_xfpos_END (11)
#define SOC_VPP_VHDVFPOS_video_yfpos_START (12)
#define SOC_VPP_VHDVFPOS_video_yfpos_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int video_xlpos : 12;
        unsigned int video_ylpos : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDVLPOS_UNION;
#endif
#define SOC_VPP_VHDVLPOS_video_xlpos_START (0)
#define SOC_VPP_VHDVLPOS_video_xlpos_END (11)
#define SOC_VPP_VHDVLPOS_video_ylpos_START (12)
#define SOC_VPP_VHDVLPOS_video_ylpos_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vbk_cr : 8;
        unsigned int vbk_cb : 8;
        unsigned int vbk_y : 8;
        unsigned int vbk_alpha : 8;
    } reg;
} SOC_VPP_VHDBK_UNION;
#endif
#define SOC_VPP_VHDBK_vbk_cr_START (0)
#define SOC_VPP_VHDBK_vbk_cr_END (7)
#define SOC_VPP_VHDBK_vbk_cb_START (8)
#define SOC_VPP_VHDBK_vbk_cb_END (15)
#define SOC_VPP_VHDBK_vbk_y_START (16)
#define SOC_VPP_VHDBK_vbk_y_END (23)
#define SOC_VPP_VHDBK_vbk_alpha_START (24)
#define SOC_VPP_VHDBK_vbk_alpha_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscidc0 : 9;
        unsigned int cscidc1 : 9;
        unsigned int cscidc2 : 9;
        unsigned int csc_en : 1;
        unsigned int reserved : 4;
    } reg;
} SOC_VPP_VHDCSCIDC_UNION;
#endif
#define SOC_VPP_VHDCSCIDC_cscidc0_START (0)
#define SOC_VPP_VHDCSCIDC_cscidc0_END (8)
#define SOC_VPP_VHDCSCIDC_cscidc1_START (9)
#define SOC_VPP_VHDCSCIDC_cscidc1_END (17)
#define SOC_VPP_VHDCSCIDC_cscidc2_START (18)
#define SOC_VPP_VHDCSCIDC_cscidc2_END (26)
#define SOC_VPP_VHDCSCIDC_csc_en_START (27)
#define SOC_VPP_VHDCSCIDC_csc_en_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscodc0 : 9;
        unsigned int cscodc1 : 9;
        unsigned int cscodc2 : 9;
        unsigned int reserved : 5;
    } reg;
} SOC_VPP_VHDCSCODC_UNION;
#endif
#define SOC_VPP_VHDCSCODC_cscodc0_START (0)
#define SOC_VPP_VHDCSCODC_cscodc0_END (8)
#define SOC_VPP_VHDCSCODC_cscodc1_START (9)
#define SOC_VPP_VHDCSCODC_cscodc1_END (17)
#define SOC_VPP_VHDCSCODC_cscodc2_START (18)
#define SOC_VPP_VHDCSCODC_cscodc2_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscp00 : 13;
        unsigned int reserved_0: 3;
        unsigned int cscp01 : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VPP_VHDCSCP0_UNION;
#endif
#define SOC_VPP_VHDCSCP0_cscp00_START (0)
#define SOC_VPP_VHDCSCP0_cscp00_END (12)
#define SOC_VPP_VHDCSCP0_cscp01_START (16)
#define SOC_VPP_VHDCSCP0_cscp01_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscp02 : 13;
        unsigned int reserved_0: 3;
        unsigned int cscp10 : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VPP_VHDCSCP1_UNION;
#endif
#define SOC_VPP_VHDCSCP1_cscp02_START (0)
#define SOC_VPP_VHDCSCP1_cscp02_END (12)
#define SOC_VPP_VHDCSCP1_cscp10_START (16)
#define SOC_VPP_VHDCSCP1_cscp10_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscp11 : 13;
        unsigned int reserved_0: 3;
        unsigned int cscp12 : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VPP_VHDCSCP2_UNION;
#endif
#define SOC_VPP_VHDCSCP2_cscp11_START (0)
#define SOC_VPP_VHDCSCP2_cscp11_END (12)
#define SOC_VPP_VHDCSCP2_cscp12_START (16)
#define SOC_VPP_VHDCSCP2_cscp12_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscp20 : 13;
        unsigned int reserved_0: 3;
        unsigned int cscp21 : 13;
        unsigned int reserved_1: 3;
    } reg;
} SOC_VPP_VHDCSCP3_UNION;
#endif
#define SOC_VPP_VHDCSCP3_cscp20_START (0)
#define SOC_VPP_VHDCSCP3_cscp20_END (12)
#define SOC_VPP_VHDCSCP3_cscp21_START (16)
#define SOC_VPP_VHDCSCP3_cscp21_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cscp22 : 13;
        unsigned int reserved : 19;
    } reg;
} SOC_VPP_VHDCSCP4_UNION;
#endif
#define SOC_VPP_VHDCSCP4_cscp22_START (0)
#define SOC_VPP_VHDCSCP4_cscp22_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_u_off : 5;
        unsigned int acm_b_u_off : 5;
        unsigned int acm_c_u_off : 5;
        unsigned int acm_d_u_off : 5;
        unsigned int acm_fir_blk : 4;
        unsigned int acm_sec_blk : 4;
        unsigned int acm0_en : 1;
        unsigned int acm1_en : 1;
        unsigned int acm2_en : 1;
        unsigned int acm3_en : 1;
    } reg;
} SOC_VPP_VHDACM0_UNION;
#endif
#define SOC_VPP_VHDACM0_acm_a_u_off_START (0)
#define SOC_VPP_VHDACM0_acm_a_u_off_END (4)
#define SOC_VPP_VHDACM0_acm_b_u_off_START (5)
#define SOC_VPP_VHDACM0_acm_b_u_off_END (9)
#define SOC_VPP_VHDACM0_acm_c_u_off_START (10)
#define SOC_VPP_VHDACM0_acm_c_u_off_END (14)
#define SOC_VPP_VHDACM0_acm_d_u_off_START (15)
#define SOC_VPP_VHDACM0_acm_d_u_off_END (19)
#define SOC_VPP_VHDACM0_acm_fir_blk_START (20)
#define SOC_VPP_VHDACM0_acm_fir_blk_END (23)
#define SOC_VPP_VHDACM0_acm_sec_blk_START (24)
#define SOC_VPP_VHDACM0_acm_sec_blk_END (27)
#define SOC_VPP_VHDACM0_acm0_en_START (28)
#define SOC_VPP_VHDACM0_acm0_en_END (28)
#define SOC_VPP_VHDACM0_acm1_en_START (29)
#define SOC_VPP_VHDACM0_acm1_en_END (29)
#define SOC_VPP_VHDACM0_acm2_en_START (30)
#define SOC_VPP_VHDACM0_acm2_en_END (30)
#define SOC_VPP_VHDACM0_acm3_en_START (31)
#define SOC_VPP_VHDACM0_acm3_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_v_off : 5;
        unsigned int acm_b_v_off : 5;
        unsigned int acm_c_v_off : 5;
        unsigned int acm_d_v_off : 5;
        unsigned int acm_test_en : 1;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACM1_UNION;
#endif
#define SOC_VPP_VHDACM1_acm_a_v_off_START (0)
#define SOC_VPP_VHDACM1_acm_a_v_off_END (4)
#define SOC_VPP_VHDACM1_acm_b_v_off_START (5)
#define SOC_VPP_VHDACM1_acm_b_v_off_END (9)
#define SOC_VPP_VHDACM1_acm_c_v_off_START (10)
#define SOC_VPP_VHDACM1_acm_c_v_off_END (14)
#define SOC_VPP_VHDACM1_acm_d_v_off_START (15)
#define SOC_VPP_VHDACM1_acm_d_v_off_END (19)
#define SOC_VPP_VHDACM1_acm_test_en_START (20)
#define SOC_VPP_VHDACM1_acm_test_en_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_u_off : 5;
        unsigned int acm_b_u_off : 5;
        unsigned int acm_c_u_off : 5;
        unsigned int acm_d_u_off : 5;
        unsigned int acm_fir_blk : 4;
        unsigned int acm_sec_blk : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_VPP_VHDACM2_UNION;
#endif
#define SOC_VPP_VHDACM2_acm_a_u_off_START (0)
#define SOC_VPP_VHDACM2_acm_a_u_off_END (4)
#define SOC_VPP_VHDACM2_acm_b_u_off_START (5)
#define SOC_VPP_VHDACM2_acm_b_u_off_END (9)
#define SOC_VPP_VHDACM2_acm_c_u_off_START (10)
#define SOC_VPP_VHDACM2_acm_c_u_off_END (14)
#define SOC_VPP_VHDACM2_acm_d_u_off_START (15)
#define SOC_VPP_VHDACM2_acm_d_u_off_END (19)
#define SOC_VPP_VHDACM2_acm_fir_blk_START (20)
#define SOC_VPP_VHDACM2_acm_fir_blk_END (23)
#define SOC_VPP_VHDACM2_acm_sec_blk_START (24)
#define SOC_VPP_VHDACM2_acm_sec_blk_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_v_off : 5;
        unsigned int acm_b_v_off : 5;
        unsigned int acm_c_v_off : 5;
        unsigned int acm_d_v_off : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_VPP_VHDACM3_UNION;
#endif
#define SOC_VPP_VHDACM3_acm_a_v_off_START (0)
#define SOC_VPP_VHDACM3_acm_a_v_off_END (4)
#define SOC_VPP_VHDACM3_acm_b_v_off_START (5)
#define SOC_VPP_VHDACM3_acm_b_v_off_END (9)
#define SOC_VPP_VHDACM3_acm_c_v_off_START (10)
#define SOC_VPP_VHDACM3_acm_c_v_off_END (14)
#define SOC_VPP_VHDACM3_acm_d_v_off_START (15)
#define SOC_VPP_VHDACM3_acm_d_v_off_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_u_off : 5;
        unsigned int acm_b_u_off : 5;
        unsigned int acm_c_u_off : 5;
        unsigned int acm_d_u_off : 5;
        unsigned int acm_fir_blk : 4;
        unsigned int acm_sec_blk : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_VPP_VHDACM4_UNION;
#endif
#define SOC_VPP_VHDACM4_acm_a_u_off_START (0)
#define SOC_VPP_VHDACM4_acm_a_u_off_END (4)
#define SOC_VPP_VHDACM4_acm_b_u_off_START (5)
#define SOC_VPP_VHDACM4_acm_b_u_off_END (9)
#define SOC_VPP_VHDACM4_acm_c_u_off_START (10)
#define SOC_VPP_VHDACM4_acm_c_u_off_END (14)
#define SOC_VPP_VHDACM4_acm_d_u_off_START (15)
#define SOC_VPP_VHDACM4_acm_d_u_off_END (19)
#define SOC_VPP_VHDACM4_acm_fir_blk_START (20)
#define SOC_VPP_VHDACM4_acm_fir_blk_END (23)
#define SOC_VPP_VHDACM4_acm_sec_blk_START (24)
#define SOC_VPP_VHDACM4_acm_sec_blk_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_v_off : 5;
        unsigned int acm_b_v_off : 5;
        unsigned int acm_c_v_off : 5;
        unsigned int acm_d_v_off : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_VPP_VHDACM5_UNION;
#endif
#define SOC_VPP_VHDACM5_acm_a_v_off_START (0)
#define SOC_VPP_VHDACM5_acm_a_v_off_END (4)
#define SOC_VPP_VHDACM5_acm_b_v_off_START (5)
#define SOC_VPP_VHDACM5_acm_b_v_off_END (9)
#define SOC_VPP_VHDACM5_acm_c_v_off_START (10)
#define SOC_VPP_VHDACM5_acm_c_v_off_END (14)
#define SOC_VPP_VHDACM5_acm_d_v_off_START (15)
#define SOC_VPP_VHDACM5_acm_d_v_off_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_u_off : 5;
        unsigned int acm_b_u_off : 5;
        unsigned int acm_c_u_off : 5;
        unsigned int acm_d_u_off : 5;
        unsigned int acm_fir_blk : 4;
        unsigned int acm_sec_blk : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_VPP_VHDACM6_UNION;
#endif
#define SOC_VPP_VHDACM6_acm_a_u_off_START (0)
#define SOC_VPP_VHDACM6_acm_a_u_off_END (4)
#define SOC_VPP_VHDACM6_acm_b_u_off_START (5)
#define SOC_VPP_VHDACM6_acm_b_u_off_END (9)
#define SOC_VPP_VHDACM6_acm_c_u_off_START (10)
#define SOC_VPP_VHDACM6_acm_c_u_off_END (14)
#define SOC_VPP_VHDACM6_acm_d_u_off_START (15)
#define SOC_VPP_VHDACM6_acm_d_u_off_END (19)
#define SOC_VPP_VHDACM6_acm_fir_blk_START (20)
#define SOC_VPP_VHDACM6_acm_fir_blk_END (23)
#define SOC_VPP_VHDACM6_acm_sec_blk_START (24)
#define SOC_VPP_VHDACM6_acm_sec_blk_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acm_a_v_off : 5;
        unsigned int acm_b_v_off : 5;
        unsigned int acm_c_v_off : 5;
        unsigned int acm_d_v_off : 5;
        unsigned int reserved : 12;
    } reg;
} SOC_VPP_VHDACM7_UNION;
#endif
#define SOC_VPP_VHDACM7_acm_a_v_off_START (0)
#define SOC_VPP_VHDACM7_acm_a_v_off_END (4)
#define SOC_VPP_VHDACM7_acm_b_v_off_START (5)
#define SOC_VPP_VHDACM7_acm_b_v_off_END (9)
#define SOC_VPP_VHDACM7_acm_c_v_off_START (10)
#define SOC_VPP_VHDACM7_acm_c_v_off_END (14)
#define SOC_VPP_VHDACM7_acm_d_v_off_START (15)
#define SOC_VPP_VHDACM7_acm_d_v_off_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hratio : 16;
        unsigned int reserved_0 : 3;
        unsigned int hfir_order : 1;
        unsigned int reserved_1 : 3;
        unsigned int hchfir_en : 1;
        unsigned int hlfir_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int hchmid_en : 1;
        unsigned int hlmid_en : 1;
        unsigned int hchmsc_en : 1;
        unsigned int hlmsc_en : 1;
    } reg;
} SOC_VPP_VHDHSP_UNION;
#endif
#define SOC_VPP_VHDHSP_hratio_START (0)
#define SOC_VPP_VHDHSP_hratio_END (15)
#define SOC_VPP_VHDHSP_hfir_order_START (19)
#define SOC_VPP_VHDHSP_hfir_order_END (19)
#define SOC_VPP_VHDHSP_hchfir_en_START (23)
#define SOC_VPP_VHDHSP_hchfir_en_END (23)
#define SOC_VPP_VHDHSP_hlfir_en_START (24)
#define SOC_VPP_VHDHSP_hlfir_en_END (24)
#define SOC_VPP_VHDHSP_hchmid_en_START (28)
#define SOC_VPP_VHDHSP_hchmid_en_END (28)
#define SOC_VPP_VHDHSP_hlmid_en_START (29)
#define SOC_VPP_VHDHSP_hlmid_en_END (29)
#define SOC_VPP_VHDHSP_hchmsc_en_START (30)
#define SOC_VPP_VHDHSP_hchmsc_en_END (30)
#define SOC_VPP_VHDHSP_hlmsc_en_START (31)
#define SOC_VPP_VHDHSP_hlmsc_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hor_loffset : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VPP_VHDHLOFFSET_UNION;
#endif
#define SOC_VPP_VHDHLOFFSET_hor_loffset_START (0)
#define SOC_VPP_VHDHLOFFSET_hor_loffset_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hor_coffset : 17;
        unsigned int reserved : 15;
    } reg;
} SOC_VPP_VHDHCOFFSET_UNION;
#endif
#define SOC_VPP_VHDHCOFFSET_hor_coffset_START (0)
#define SOC_VPP_VHDHCOFFSET_hor_coffset_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 23;
        unsigned int vchfir_en : 1;
        unsigned int vlfir_en : 1;
        unsigned int chroma_type : 1;
        unsigned int vsc_chroma_tap : 1;
        unsigned int vsc_luma_tap : 1;
        unsigned int vchmid_en : 1;
        unsigned int vlmid_en : 1;
        unsigned int vchmsc_en : 1;
        unsigned int vlmsc_en : 1;
    } reg;
} SOC_VPP_VHDVSP_UNION;
#endif
#define SOC_VPP_VHDVSP_vchfir_en_START (23)
#define SOC_VPP_VHDVSP_vchfir_en_END (23)
#define SOC_VPP_VHDVSP_vlfir_en_START (24)
#define SOC_VPP_VHDVSP_vlfir_en_END (24)
#define SOC_VPP_VHDVSP_chroma_type_START (25)
#define SOC_VPP_VHDVSP_chroma_type_END (25)
#define SOC_VPP_VHDVSP_vsc_chroma_tap_START (26)
#define SOC_VPP_VHDVSP_vsc_chroma_tap_END (26)
#define SOC_VPP_VHDVSP_vsc_luma_tap_START (27)
#define SOC_VPP_VHDVSP_vsc_luma_tap_END (27)
#define SOC_VPP_VHDVSP_vchmid_en_START (28)
#define SOC_VPP_VHDVSP_vchmid_en_END (28)
#define SOC_VPP_VHDVSP_vlmid_en_START (29)
#define SOC_VPP_VHDVSP_vlmid_en_END (29)
#define SOC_VPP_VHDVSP_vchmsc_en_START (30)
#define SOC_VPP_VHDVSP_vchmsc_en_END (30)
#define SOC_VPP_VHDVSP_vlmsc_en_START (31)
#define SOC_VPP_VHDVSP_vlmsc_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vratio : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_VPP_VHDVSR_UNION;
#endif
#define SOC_VPP_VHDVSR_vratio_START (0)
#define SOC_VPP_VHDVSR_vratio_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vchroma_offset : 16;
        unsigned int vluma_offset : 16;
    } reg;
} SOC_VPP_VHDVOFFSET_UNION;
#endif
#define SOC_VPP_VHDVOFFSET_vchroma_offset_START (0)
#define SOC_VPP_VHDVOFFSET_vchroma_offset_END (15)
#define SOC_VPP_VHDVOFFSET_vluma_offset_START (16)
#define SOC_VPP_VHDVOFFSET_vluma_offset_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ow : 12;
        unsigned int oh : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDZMEORESO_UNION;
#endif
#define SOC_VPP_VHDZMEORESO_ow_START (0)
#define SOC_VPP_VHDZMEORESO_ow_END (11)
#define SOC_VPP_VHDZMEORESO_oh_START (12)
#define SOC_VPP_VHDZMEORESO_oh_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iw : 12;
        unsigned int ih : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDZMEIRESO_UNION;
#endif
#define SOC_VPP_VHDZMEIRESO_iw_START (0)
#define SOC_VPP_VHDZMEIRESO_iw_END (11)
#define SOC_VPP_VHDZMEIRESO_ih_START (12)
#define SOC_VPP_VHDZMEIRESO_ih_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int thd_low : 10;
        unsigned int thd_high : 10;
        unsigned int thd_med_low : 10;
        unsigned int acc_mode : 1;
        unsigned int acc_en : 1;
    } reg;
} SOC_VPP_VHDACCTHD1_UNION;
#endif
#define SOC_VPP_VHDACCTHD1_thd_low_START (0)
#define SOC_VPP_VHDACCTHD1_thd_low_END (9)
#define SOC_VPP_VHDACCTHD1_thd_high_START (10)
#define SOC_VPP_VHDACCTHD1_thd_high_END (19)
#define SOC_VPP_VHDACCTHD1_thd_med_low_START (20)
#define SOC_VPP_VHDACCTHD1_thd_med_low_END (29)
#define SOC_VPP_VHDACCTHD1_acc_mode_START (30)
#define SOC_VPP_VHDACCTHD1_acc_mode_END (30)
#define SOC_VPP_VHDACCTHD1_acc_en_START (31)
#define SOC_VPP_VHDACCTHD1_acc_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int thd_med_high : 10;
        unsigned int acc_multiple : 8;
        unsigned int acc_rst : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_VPP_VHDACCTHD2_UNION;
#endif
#define SOC_VPP_VHDACCTHD2_thd_med_high_START (0)
#define SOC_VPP_VHDACCTHD2_thd_med_high_END (9)
#define SOC_VPP_VHDACCTHD2_acc_multiple_START (10)
#define SOC_VPP_VHDACCTHD2_acc_multiple_END (17)
#define SOC_VPP_VHDACCTHD2_acc_rst_START (18)
#define SOC_VPP_VHDACCTHD2_acc_rst_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int table_data1n : 10;
        unsigned int table_data2n : 10;
        unsigned int table_data3n : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDACCLOWN_UNION;
#endif
#define SOC_VPP_VHDACCLOWN_table_data1n_START (0)
#define SOC_VPP_VHDACCLOWN_table_data1n_END (9)
#define SOC_VPP_VHDACCLOWN_table_data2n_START (10)
#define SOC_VPP_VHDACCLOWN_table_data2n_END (19)
#define SOC_VPP_VHDACCLOWN_table_data3n_START (20)
#define SOC_VPP_VHDACCLOWN_table_data3n_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int table_data1n : 10;
        unsigned int table_data2n : 10;
        unsigned int table_data3n : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDACCMEDN_UNION;
#endif
#define SOC_VPP_VHDACCMEDN_table_data1n_START (0)
#define SOC_VPP_VHDACCMEDN_table_data1n_END (9)
#define SOC_VPP_VHDACCMEDN_table_data2n_START (10)
#define SOC_VPP_VHDACCMEDN_table_data2n_END (19)
#define SOC_VPP_VHDACCMEDN_table_data3n_START (20)
#define SOC_VPP_VHDACCMEDN_table_data3n_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int table_data1n : 10;
        unsigned int table_data2n : 10;
        unsigned int table_data3n : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDACCHIGHN_UNION;
#endif
#define SOC_VPP_VHDACCHIGHN_table_data1n_START (0)
#define SOC_VPP_VHDACCHIGHN_table_data1n_END (9)
#define SOC_VPP_VHDACCHIGHN_table_data2n_START (10)
#define SOC_VPP_VHDACCHIGHN_table_data2n_END (19)
#define SOC_VPP_VHDACCHIGHN_table_data3n_START (20)
#define SOC_VPP_VHDACCHIGHN_table_data3n_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int table_data1n : 10;
        unsigned int table_data2n : 10;
        unsigned int table_data3n : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDACCMLN_UNION;
#endif
#define SOC_VPP_VHDACCMLN_table_data1n_START (0)
#define SOC_VPP_VHDACCMLN_table_data1n_END (9)
#define SOC_VPP_VHDACCMLN_table_data2n_START (10)
#define SOC_VPP_VHDACCMLN_table_data2n_END (19)
#define SOC_VPP_VHDACCMLN_table_data3n_START (20)
#define SOC_VPP_VHDACCMLN_table_data3n_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int table_data1n : 10;
        unsigned int table_data2n : 10;
        unsigned int table_data3n : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDACCMHN_UNION;
#endif
#define SOC_VPP_VHDACCMHN_table_data1n_START (0)
#define SOC_VPP_VHDACCMHN_table_data1n_END (9)
#define SOC_VPP_VHDACCMHN_table_data2n_START (10)
#define SOC_VPP_VHDACCMHN_table_data2n_END (19)
#define SOC_VPP_VHDACCMHN_table_data3n_START (20)
#define SOC_VPP_VHDACCMHN_table_data3n_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt3_low : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACC3LOW_UNION;
#endif
#define SOC_VPP_VHDACC3LOW_cnt3_low_START (0)
#define SOC_VPP_VHDACC3LOW_cnt3_low_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt3_med : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACC3MED_UNION;
#endif
#define SOC_VPP_VHDACC3MED_cnt3_med_START (0)
#define SOC_VPP_VHDACC3MED_cnt3_med_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt3_high : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACC3HIGH_UNION;
#endif
#define SOC_VPP_VHDACC3HIGH_cnt3_high_START (0)
#define SOC_VPP_VHDACC3HIGH_cnt3_high_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt8_med_low : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACC8MLOW_UNION;
#endif
#define SOC_VPP_VHDACC8MLOW_cnt8_med_low_START (0)
#define SOC_VPP_VHDACC8MLOW_cnt8_med_low_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt8_med_high : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACC8MHIGH_UNION;
#endif
#define SOC_VPP_VHDACC8MHIGH_cnt8_med_high_START (0)
#define SOC_VPP_VHDACC8MHIGH_cnt8_med_high_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acc_pix_total : 21;
        unsigned int reserved : 11;
    } reg;
} SOC_VPP_VHDACCTOTAL_UNION;
#endif
#define SOC_VPP_VHDACCTOTAL_acc_pix_total_START (0)
#define SOC_VPP_VHDACCTOTAL_acc_pix_total_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef0 : 10;
        unsigned int reserved_0: 6;
        unsigned int coef1 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDIFIRCOEF01_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF01_coef0_START (0)
#define SOC_VPP_VHDIFIRCOEF01_coef0_END (9)
#define SOC_VPP_VHDIFIRCOEF01_coef1_START (16)
#define SOC_VPP_VHDIFIRCOEF01_coef1_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef2 : 10;
        unsigned int reserved_0: 6;
        unsigned int coef3 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDIFIRCOEF23_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF23_coef2_START (0)
#define SOC_VPP_VHDIFIRCOEF23_coef2_END (9)
#define SOC_VPP_VHDIFIRCOEF23_coef3_START (16)
#define SOC_VPP_VHDIFIRCOEF23_coef3_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef4 : 10;
        unsigned int reserved_0: 6;
        unsigned int coef5 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDIFIRCOEF45_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF45_coef4_START (0)
#define SOC_VPP_VHDIFIRCOEF45_coef4_END (9)
#define SOC_VPP_VHDIFIRCOEF45_coef5_START (16)
#define SOC_VPP_VHDIFIRCOEF45_coef5_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coef6 : 10;
        unsigned int reserved_0: 6;
        unsigned int coef7 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDIFIRCOEF67_UNION;
#endif
#define SOC_VPP_VHDIFIRCOEF67_coef6_START (0)
#define SOC_VPP_VHDIFIRCOEF67_coef6_END (9)
#define SOC_VPP_VHDIFIRCOEF67_coef7_START (16)
#define SOC_VPP_VHDIFIRCOEF67_coef7_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int stinfo_stop : 1;
        unsigned int die_rst : 1;
        unsigned int reserved_1 : 6;
        unsigned int die_chmmode : 2;
        unsigned int die_lmmode : 2;
        unsigned int die_out_sel_c : 1;
        unsigned int die_out_sel_l : 1;
        unsigned int die_chroma_en : 1;
        unsigned int die_luma_en : 1;
    } reg;
} SOC_VPP_VHDDIECTRL_UNION;
#endif
#define SOC_VPP_VHDDIECTRL_stinfo_stop_START (16)
#define SOC_VPP_VHDDIECTRL_stinfo_stop_END (16)
#define SOC_VPP_VHDDIECTRL_die_rst_START (17)
#define SOC_VPP_VHDDIECTRL_die_rst_END (17)
#define SOC_VPP_VHDDIECTRL_die_chmmode_START (24)
#define SOC_VPP_VHDDIECTRL_die_chmmode_END (25)
#define SOC_VPP_VHDDIECTRL_die_lmmode_START (26)
#define SOC_VPP_VHDDIECTRL_die_lmmode_END (27)
#define SOC_VPP_VHDDIECTRL_die_out_sel_c_START (28)
#define SOC_VPP_VHDDIECTRL_die_out_sel_c_END (28)
#define SOC_VPP_VHDDIECTRL_die_out_sel_l_START (29)
#define SOC_VPP_VHDDIECTRL_die_out_sel_l_END (29)
#define SOC_VPP_VHDDIECTRL_die_chroma_en_START (30)
#define SOC_VPP_VHDDIECTRL_die_chroma_en_END (30)
#define SOC_VPP_VHDDIECTRL_die_luma_en_START (31)
#define SOC_VPP_VHDDIECTRL_die_luma_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_qtbl1 : 8;
        unsigned int luma_qtbl2 : 8;
        unsigned int luma_qtbl3 : 8;
        unsigned int scale_ratio_ppd : 6;
        unsigned int reserved : 2;
    } reg;
} SOC_VPP_VHDDIELMA0_UNION;
#endif
#define SOC_VPP_VHDDIELMA0_luma_qtbl1_START (0)
#define SOC_VPP_VHDDIELMA0_luma_qtbl1_END (7)
#define SOC_VPP_VHDDIELMA0_luma_qtbl2_START (8)
#define SOC_VPP_VHDDIELMA0_luma_qtbl2_END (15)
#define SOC_VPP_VHDDIELMA0_luma_qtbl3_START (16)
#define SOC_VPP_VHDDIELMA0_luma_qtbl3_END (23)
#define SOC_VPP_VHDDIELMA0_scale_ratio_ppd_START (24)
#define SOC_VPP_VHDDIELMA0_scale_ratio_ppd_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_reqtbl0 : 8;
        unsigned int luma_reqtbl1 : 8;
        unsigned int luma_reqtbl2 : 8;
        unsigned int luma_reqtbl3 : 8;
    } reg;
} SOC_VPP_VHDDIELMA1_UNION;
#endif
#define SOC_VPP_VHDDIELMA1_luma_reqtbl0_START (0)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl0_END (7)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl1_START (8)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl1_END (15)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl2_START (16)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl2_END (23)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl3_START (24)
#define SOC_VPP_VHDDIELMA1_luma_reqtbl3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int luma_win_size : 2;
        unsigned int luma_scesdf_max : 1;
        unsigned int die_st_qrst_en : 1;
        unsigned int die_st_n_en : 1;
        unsigned int die_st_m_en : 1;
        unsigned int die_st_l_en : 1;
        unsigned int die_st_k_en : 1;
        unsigned int luma_qrst_max : 1;
        unsigned int luma_mf_max : 1;
        unsigned int chroma_mf_max : 1;
        unsigned int reserved : 18;
        unsigned int die_st_mode : 3;
    } reg;
} SOC_VPP_VHDDIELMA2_UNION;
#endif
#define SOC_VPP_VHDDIELMA2_luma_win_size_START (0)
#define SOC_VPP_VHDDIELMA2_luma_win_size_END (1)
#define SOC_VPP_VHDDIELMA2_luma_scesdf_max_START (2)
#define SOC_VPP_VHDDIELMA2_luma_scesdf_max_END (2)
#define SOC_VPP_VHDDIELMA2_die_st_qrst_en_START (3)
#define SOC_VPP_VHDDIELMA2_die_st_qrst_en_END (3)
#define SOC_VPP_VHDDIELMA2_die_st_n_en_START (4)
#define SOC_VPP_VHDDIELMA2_die_st_n_en_END (4)
#define SOC_VPP_VHDDIELMA2_die_st_m_en_START (5)
#define SOC_VPP_VHDDIELMA2_die_st_m_en_END (5)
#define SOC_VPP_VHDDIELMA2_die_st_l_en_START (6)
#define SOC_VPP_VHDDIELMA2_die_st_l_en_END (6)
#define SOC_VPP_VHDDIELMA2_die_st_k_en_START (7)
#define SOC_VPP_VHDDIELMA2_die_st_k_en_END (7)
#define SOC_VPP_VHDDIELMA2_luma_qrst_max_START (8)
#define SOC_VPP_VHDDIELMA2_luma_qrst_max_END (8)
#define SOC_VPP_VHDDIELMA2_luma_mf_max_START (9)
#define SOC_VPP_VHDDIELMA2_luma_mf_max_END (9)
#define SOC_VPP_VHDDIELMA2_chroma_mf_max_START (10)
#define SOC_VPP_VHDDIELMA2_chroma_mf_max_END (10)
#define SOC_VPP_VHDDIELMA2_die_st_mode_START (29)
#define SOC_VPP_VHDDIELMA2_die_st_mode_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dir_inten : 4;
        unsigned int reserved_0 : 3;
        unsigned int dir_ck_enh : 1;
        unsigned int dir_inten_ver : 4;
        unsigned int reserved_1 : 4;
        unsigned int ver_min_inten : 16;
    } reg;
} SOC_VPP_VHDDIEINTEN_UNION;
#endif
#define SOC_VPP_VHDDIEINTEN_dir_inten_START (0)
#define SOC_VPP_VHDDIEINTEN_dir_inten_END (3)
#define SOC_VPP_VHDDIEINTEN_dir_ck_enh_START (7)
#define SOC_VPP_VHDDIEINTEN_dir_ck_enh_END (7)
#define SOC_VPP_VHDDIEINTEN_dir_inten_ver_START (8)
#define SOC_VPP_VHDDIEINTEN_dir_inten_ver_END (11)
#define SOC_VPP_VHDDIEINTEN_ver_min_inten_START (16)
#define SOC_VPP_VHDDIEINTEN_ver_min_inten_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int range_scale : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_VPP_VHDDIESCALE_UNION;
#endif
#define SOC_VPP_VHDDIESCALE_range_scale_START (0)
#define SOC_VPP_VHDDIESCALE_range_scale_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_max_range : 6;
        unsigned int reserved_0 : 2;
        unsigned int ck_range_gain : 4;
        unsigned int reserved_1 : 4;
        unsigned int ck_gain : 4;
        unsigned int reserved_2 : 12;
    } reg;
} SOC_VPP_VHDDIECHECK1_UNION;
#endif
#define SOC_VPP_VHDDIECHECK1_ck_max_range_START (0)
#define SOC_VPP_VHDDIECHECK1_ck_max_range_END (5)
#define SOC_VPP_VHDDIECHECK1_ck_range_gain_START (8)
#define SOC_VPP_VHDDIECHECK1_ck_range_gain_END (11)
#define SOC_VPP_VHDDIECHECK1_ck_gain_START (16)
#define SOC_VPP_VHDDIECHECK1_ck_gain_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ck_max_range : 6;
        unsigned int reserved_0 : 2;
        unsigned int ck_range_gain : 4;
        unsigned int reserved_1 : 4;
        unsigned int ck_gain : 4;
        unsigned int reserved_2 : 12;
    } reg;
} SOC_VPP_VHDDIECHECK2_UNION;
#endif
#define SOC_VPP_VHDDIECHECK2_ck_max_range_START (0)
#define SOC_VPP_VHDDIECHECK2_ck_max_range_END (5)
#define SOC_VPP_VHDDIECHECK2_ck_range_gain_START (8)
#define SOC_VPP_VHDDIECHECK2_ck_range_gain_END (11)
#define SOC_VPP_VHDDIECHECK2_ck_gain_START (16)
#define SOC_VPP_VHDDIECHECK2_ck_gain_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dir0_mult : 6;
        unsigned int reserved_0: 2;
        unsigned int dir1_mult : 6;
        unsigned int reserved_1: 2;
        unsigned int dir2_mult : 6;
        unsigned int reserved_2: 2;
        unsigned int dir3_mult : 6;
        unsigned int reserved_3: 2;
    } reg;
} SOC_VPP_VHDDIEDIR0_3_UNION;
#endif
#define SOC_VPP_VHDDIEDIR0_3_dir0_mult_START (0)
#define SOC_VPP_VHDDIEDIR0_3_dir0_mult_END (5)
#define SOC_VPP_VHDDIEDIR0_3_dir1_mult_START (8)
#define SOC_VPP_VHDDIEDIR0_3_dir1_mult_END (13)
#define SOC_VPP_VHDDIEDIR0_3_dir2_mult_START (16)
#define SOC_VPP_VHDDIEDIR0_3_dir2_mult_END (21)
#define SOC_VPP_VHDDIEDIR0_3_dir3_mult_START (24)
#define SOC_VPP_VHDDIEDIR0_3_dir3_mult_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dir4_mult : 6;
        unsigned int reserved_0: 2;
        unsigned int dir5_mult : 6;
        unsigned int reserved_1: 2;
        unsigned int dir6_mult : 6;
        unsigned int reserved_2: 2;
        unsigned int dir7_mult : 6;
        unsigned int reserved_3: 2;
    } reg;
} SOC_VPP_VHDDIEDIR4_7_UNION;
#endif
#define SOC_VPP_VHDDIEDIR4_7_dir4_mult_START (0)
#define SOC_VPP_VHDDIEDIR4_7_dir4_mult_END (5)
#define SOC_VPP_VHDDIEDIR4_7_dir5_mult_START (8)
#define SOC_VPP_VHDDIEDIR4_7_dir5_mult_END (13)
#define SOC_VPP_VHDDIEDIR4_7_dir6_mult_START (16)
#define SOC_VPP_VHDDIEDIR4_7_dir6_mult_END (21)
#define SOC_VPP_VHDDIEDIR4_7_dir7_mult_START (24)
#define SOC_VPP_VHDDIEDIR4_7_dir7_mult_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dir8_mult : 6;
        unsigned int reserved_0 : 2;
        unsigned int dir9_mult : 6;
        unsigned int reserved_1 : 2;
        unsigned int dir10_mult : 6;
        unsigned int reserved_2 : 2;
        unsigned int dir11_mult : 6;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_VPP_VHDDIEDIR8_11_UNION;
#endif
#define SOC_VPP_VHDDIEDIR8_11_dir8_mult_START (0)
#define SOC_VPP_VHDDIEDIR8_11_dir8_mult_END (5)
#define SOC_VPP_VHDDIEDIR8_11_dir9_mult_START (8)
#define SOC_VPP_VHDDIEDIR8_11_dir9_mult_END (13)
#define SOC_VPP_VHDDIEDIR8_11_dir10_mult_START (16)
#define SOC_VPP_VHDDIEDIR8_11_dir10_mult_END (21)
#define SOC_VPP_VHDDIEDIR8_11_dir11_mult_START (24)
#define SOC_VPP_VHDDIEDIR8_11_dir11_mult_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dir12_mult : 6;
        unsigned int reserved_0 : 2;
        unsigned int dir13_mult : 6;
        unsigned int reserved_1 : 2;
        unsigned int dir14_mult : 6;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_VPP_VHDDIEDIR12_14_UNION;
#endif
#define SOC_VPP_VHDDIEDIR12_14_dir12_mult_START (0)
#define SOC_VPP_VHDDIEDIR12_14_dir12_mult_END (5)
#define SOC_VPP_VHDDIEDIR12_14_dir13_mult_START (8)
#define SOC_VPP_VHDDIEDIR12_14_dir13_mult_END (13)
#define SOC_VPP_VHDDIEDIR12_14_dir14_mult_START (16)
#define SOC_VPP_VHDDIEDIR12_14_dir14_mult_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_ref_field : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_VPP_VHDDIESTA_UNION;
#endif
#define SOC_VPP_VHDDIESTA_die_ref_field_START (0)
#define SOC_VPP_VHDDIESTA_die_ref_field_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_k_addr : 32;
    } reg;
} SOC_VPP_VHDDIESTKADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTKADDR_die_k_addr_START (0)
#define SOC_VPP_VHDDIESTKADDR_die_k_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_l_addr : 32;
    } reg;
} SOC_VPP_VHDDIESTLADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTLADDR_die_l_addr_START (0)
#define SOC_VPP_VHDDIESTLADDR_die_l_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_m_addr : 32;
    } reg;
} SOC_VPP_VHDDIESTMADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTMADDR_die_m_addr_START (0)
#define SOC_VPP_VHDDIESTMADDR_die_m_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_n_addr : 32;
    } reg;
} SOC_VPP_VHDDIESTNADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTNADDR_die_n_addr_START (0)
#define SOC_VPP_VHDDIESTNADDR_die_n_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int die_sqtr_addr : 32;
    } reg;
} SOC_VPP_VHDDIESTSQTRADDR_UNION;
#endif
#define SOC_VPP_VHDDIESTSQTRADDR_die_sqtr_addr_START (0)
#define SOC_VPP_VHDDIESTSQTRADDR_die_sqtr_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int no_ccr_detect_thd : 8;
        unsigned int no_ccr_detect_max : 8;
        unsigned int chroma_ma_offset : 8;
        unsigned int chroma_ccr_en : 1;
        unsigned int reserved : 7;
    } reg;
} SOC_VPP_VHDCCRSCLR0_UNION;
#endif
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_thd_START (0)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_thd_END (7)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_max_START (8)
#define SOC_VPP_VHDCCRSCLR0_no_ccr_detect_max_END (15)
#define SOC_VPP_VHDCCRSCLR0_chroma_ma_offset_START (16)
#define SOC_VPP_VHDCCRSCLR0_chroma_ma_offset_END (23)
#define SOC_VPP_VHDCCRSCLR0_chroma_ccr_en_START (24)
#define SOC_VPP_VHDCCRSCLR0_chroma_ccr_en_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int max_xchroma : 8;
        unsigned int no_ccr_detect_blend : 4;
        unsigned int reserved : 4;
        unsigned int similar_thd : 8;
        unsigned int similar_max : 8;
    } reg;
} SOC_VPP_VHDCCRSCLR1_UNION;
#endif
#define SOC_VPP_VHDCCRSCLR1_max_xchroma_START (0)
#define SOC_VPP_VHDCCRSCLR1_max_xchroma_END (7)
#define SOC_VPP_VHDCCRSCLR1_no_ccr_detect_blend_START (8)
#define SOC_VPP_VHDCCRSCLR1_no_ccr_detect_blend_END (11)
#define SOC_VPP_VHDCCRSCLR1_similar_thd_START (16)
#define SOC_VPP_VHDCCRSCLR1_similar_thd_END (23)
#define SOC_VPP_VHDCCRSCLR1_similar_max_START (24)
#define SOC_VPP_VHDCCRSCLR1_similar_max_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 20;
        unsigned int edge_smooth_ratio : 8;
        unsigned int reserved_1 : 1;
        unsigned int dir_mch_c : 1;
        unsigned int edge_smooth_en : 1;
        unsigned int dir_mch_l : 1;
    } reg;
} SOC_VPP_VHDPDCTRL_UNION;
#endif
#define SOC_VPP_VHDPDCTRL_edge_smooth_ratio_START (20)
#define SOC_VPP_VHDPDCTRL_edge_smooth_ratio_END (27)
#define SOC_VPP_VHDPDCTRL_dir_mch_c_START (29)
#define SOC_VPP_VHDPDCTRL_dir_mch_c_END (29)
#define SOC_VPP_VHDPDCTRL_edge_smooth_en_START (30)
#define SOC_VPP_VHDPDCTRL_edge_smooth_en_END (30)
#define SOC_VPP_VHDPDCTRL_dir_mch_l_START (31)
#define SOC_VPP_VHDPDCTRL_dir_mch_l_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int blk_x : 12;
        unsigned int blk_y : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDPDBLKPOS0_UNION;
#endif
#define SOC_VPP_VHDPDBLKPOS0_blk_x_START (0)
#define SOC_VPP_VHDPDBLKPOS0_blk_x_END (11)
#define SOC_VPP_VHDPDBLKPOS0_blk_y_START (12)
#define SOC_VPP_VHDPDBLKPOS0_blk_y_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int blk_x : 12;
        unsigned int blk_y : 12;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDPDBLKPOS1_UNION;
#endif
#define SOC_VPP_VHDPDBLKPOS1_blk_x_START (0)
#define SOC_VPP_VHDPDBLKPOS1_blk_x_END (11)
#define SOC_VPP_VHDPDBLKPOS1_blk_y_START (12)
#define SOC_VPP_VHDPDBLKPOS1_blk_y_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stillblk_thd : 8;
        unsigned int diff_movblk_thd : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_VPP_VHDPDBLKTHD_UNION;
#endif
#define SOC_VPP_VHDPDBLKTHD_stillblk_thd_START (0)
#define SOC_VPP_VHDPDBLKTHD_stillblk_thd_END (7)
#define SOC_VPP_VHDPDBLKTHD_diff_movblk_thd_START (8)
#define SOC_VPP_VHDPDBLKTHD_diff_movblk_thd_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hist_thd0 : 8;
        unsigned int hist_thd1 : 8;
        unsigned int hist_thd2 : 8;
        unsigned int hist_thd3 : 8;
    } reg;
} SOC_VPP_VHDPDHISTTHD_UNION;
#endif
#define SOC_VPP_VHDPDHISTTHD_hist_thd0_START (0)
#define SOC_VPP_VHDPDHISTTHD_hist_thd0_END (7)
#define SOC_VPP_VHDPDHISTTHD_hist_thd1_START (8)
#define SOC_VPP_VHDPDHISTTHD_hist_thd1_END (15)
#define SOC_VPP_VHDPDHISTTHD_hist_thd2_START (16)
#define SOC_VPP_VHDPDHISTTHD_hist_thd2_END (23)
#define SOC_VPP_VHDPDHISTTHD_hist_thd3_START (24)
#define SOC_VPP_VHDPDHISTTHD_hist_thd3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int um_thd0 : 8;
        unsigned int um_thd1 : 8;
        unsigned int um_thd2 : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDPDUMTHD_UNION;
#endif
#define SOC_VPP_VHDPDUMTHD_um_thd0_START (0)
#define SOC_VPP_VHDPDUMTHD_um_thd0_END (7)
#define SOC_VPP_VHDPDUMTHD_um_thd1_START (8)
#define SOC_VPP_VHDPDUMTHD_um_thd1_END (15)
#define SOC_VPP_VHDPDUMTHD_um_thd2_START (16)
#define SOC_VPP_VHDPDUMTHD_um_thd2_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int coring_tkr : 8;
        unsigned int coring_norm : 8;
        unsigned int coring_blk : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_VPP_VHDPDPCCCORING_UNION;
#endif
#define SOC_VPP_VHDPDPCCCORING_coring_tkr_START (0)
#define SOC_VPP_VHDPDPCCCORING_coring_tkr_END (7)
#define SOC_VPP_VHDPDPCCCORING_coring_norm_START (8)
#define SOC_VPP_VHDPDPCCCORING_coring_norm_END (15)
#define SOC_VPP_VHDPDPCCCORING_coring_blk_START (16)
#define SOC_VPP_VHDPDPCCCORING_coring_blk_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_hthd : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_VPP_VHDPDPCCHTHD_UNION;
#endif
#define SOC_VPP_VHDPDPCCHTHD_pcc_hthd_START (0)
#define SOC_VPP_VHDPDPCCHTHD_pcc_hthd_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_vthd0 : 8;
        unsigned int pcc_vthd1 : 8;
        unsigned int pcc_vthd2 : 8;
        unsigned int pcc_vthd3 : 8;
    } reg;
} SOC_VPP_VHDPDPCCVTHD_UNION;
#endif
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd0_START (0)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd0_END (7)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd1_START (8)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd1_END (15)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd2_START (16)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd2_END (23)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd3_START (24)
#define SOC_VPP_VHDPDPCCVTHD_pcc_vthd3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int itdiff_vthd0 : 8;
        unsigned int itdiff_vthd1 : 8;
        unsigned int itdiff_vthd2 : 8;
        unsigned int itdiff_vthd3 : 8;
    } reg;
} SOC_VPP_VHDPDITDIFFVTHD_UNION;
#endif
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd0_START (0)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd0_END (7)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd1_START (8)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd1_END (15)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd2_START (16)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd2_END (23)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd3_START (24)
#define SOC_VPP_VHDPDITDIFFVTHD_itdiff_vthd3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lasi_thd : 8;
        unsigned int edge_thd : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_VPP_VHDPDLASITHD_UNION;
#endif
#define SOC_VPP_VHDPDLASITHD_lasi_thd_START (0)
#define SOC_VPP_VHDPDLASITHD_lasi_thd_END (7)
#define SOC_VPP_VHDPDLASITHD_edge_thd_START (8)
#define SOC_VPP_VHDPDLASITHD_edge_thd_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frm_it_diff : 32;
    } reg;
} SOC_VPP_VHDPDFRMITDIFF_UNION;
#endif
#define SOC_VPP_VHDPDFRMITDIFF_frm_it_diff_START (0)
#define SOC_VPP_VHDPDFRMITDIFF_frm_it_diff_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int stlblk_sad : 32;
    } reg;
} SOC_VPP_VHDPDSTLBLKSAD_UNION;
#endif
#define SOC_VPP_VHDPDSTLBLKSAD_stlblk_sad_START (0)
#define SOC_VPP_VHDPDSTLBLKSAD_stlblk_sad_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hsit_bin : 32;
    } reg;
} SOC_VPP_VHDPDHISTBIN_UNION;
#endif
#define SOC_VPP_VHDPDHISTBIN_hsit_bin_START (0)
#define SOC_VPP_VHDPDHISTBIN_hsit_bin_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int match_um : 32;
    } reg;
} SOC_VPP_VHDPDUMMATCH0_UNION;
#endif
#define SOC_VPP_VHDPDUMMATCH0_match_um_START (0)
#define SOC_VPP_VHDPDUMMATCH0_match_um_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nomatch_um : 32;
    } reg;
} SOC_VPP_VHDPDUMNOMATCH0_UNION;
#endif
#define SOC_VPP_VHDPDUMNOMATCH0_nomatch_um_START (0)
#define SOC_VPP_VHDPDUMNOMATCH0_nomatch_um_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int match_um : 32;
    } reg;
} SOC_VPP_VHDPDUMMATCH1_UNION;
#endif
#define SOC_VPP_VHDPDUMMATCH1_match_um_START (0)
#define SOC_VPP_VHDPDUMMATCH1_match_um_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nomatch_um : 32;
    } reg;
} SOC_VPP_VHDPDUMNOMATCH1_UNION;
#endif
#define SOC_VPP_VHDPDUMNOMATCH1_nomatch_um_START (0)
#define SOC_VPP_VHDPDUMNOMATCH1_nomatch_um_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_ffwd : 32;
    } reg;
} SOC_VPP_VHDPDPCCFFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCFFWD_pcc_ffwd_START (0)
#define SOC_VPP_VHDPDPCCFFWD_pcc_ffwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_fwd : 32;
    } reg;
} SOC_VPP_VHDPDPCCFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCFWD_pcc_fwd_START (0)
#define SOC_VPP_VHDPDPCCFWD_pcc_fwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_bwd : 32;
    } reg;
} SOC_VPP_VHDPDPCCBWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBWD_pcc_bwd_START (0)
#define SOC_VPP_VHDPDPCCBWD_pcc_bwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_crss : 32;
    } reg;
} SOC_VPP_VHDPDPCCCRSS_UNION;
#endif
#define SOC_VPP_VHDPDPCCCRSS_pcc_crss_START (0)
#define SOC_VPP_VHDPDPCCCRSS_pcc_crss_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_pw : 32;
    } reg;
} SOC_VPP_VHDPDPCCPW_UNION;
#endif
#define SOC_VPP_VHDPDPCCPW_pcc_pw_START (0)
#define SOC_VPP_VHDPDPCCPW_pcc_pw_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_fwd_tkr : 32;
    } reg;
} SOC_VPP_VHDPDPCCFWDTKR_UNION;
#endif
#define SOC_VPP_VHDPDPCCFWDTKR_pcc_fwd_tkr_START (0)
#define SOC_VPP_VHDPDPCCFWDTKR_pcc_fwd_tkr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_bwd_tkr : 32;
    } reg;
} SOC_VPP_VHDPDPCCBWDTKR_UNION;
#endif
#define SOC_VPP_VHDPDPCCBWDTKR_pcc_bwd_tkr_START (0)
#define SOC_VPP_VHDPDPCCBWDTKR_pcc_bwd_tkr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_blk_fwd : 32;
    } reg;
} SOC_VPP_VHDPDPCCBLKFWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBLKFWD_pcc_blk_fwd_START (0)
#define SOC_VPP_VHDPDPCCBLKFWD_pcc_blk_fwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcc_blk_bwd : 32;
    } reg;
} SOC_VPP_VHDPDPCCBLKBWD_UNION;
#endif
#define SOC_VPP_VHDPDPCCBLKBWD_pcc_blk_bwd_START (0)
#define SOC_VPP_VHDPDPCCBLKBWD_pcc_blk_bwd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lasi_cnt : 32;
    } reg;
} SOC_VPP_VHDPDLASICNT14_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT14_lasi_cnt_START (0)
#define SOC_VPP_VHDPDLASICNT14_lasi_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lasi_cnt : 32;
    } reg;
} SOC_VPP_VHDPDLASICNT32_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT32_lasi_cnt_START (0)
#define SOC_VPP_VHDPDLASICNT32_lasi_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lasi_cnt : 32;
    } reg;
} SOC_VPP_VHDPDLASICNT34_UNION;
#endif
#define SOC_VPP_VHDPDLASICNT34_lasi_cnt_START (0)
#define SOC_VPP_VHDPDLASICNT34_lasi_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hlcoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int hlcoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDHLCOEF_UNION;
#endif
#define SOC_VPP_VHDHLCOEF_hlcoefn1_START (0)
#define SOC_VPP_VHDHLCOEF_hlcoefn1_END (9)
#define SOC_VPP_VHDHLCOEF_hlcoefn2_START (16)
#define SOC_VPP_VHDHLCOEF_hlcoefn2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hccoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int hccoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDHCCOEF_UNION;
#endif
#define SOC_VPP_VHDHCCOEF_hccoefn1_START (0)
#define SOC_VPP_VHDHCCOEF_hccoefn1_END (9)
#define SOC_VPP_VHDHCCOEF_hccoefn2_START (16)
#define SOC_VPP_VHDHCCOEF_hccoefn2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vlcoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int vlcoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDVLCOEF_UNION;
#endif
#define SOC_VPP_VHDVLCOEF_vlcoefn1_START (0)
#define SOC_VPP_VHDVLCOEF_vlcoefn1_END (9)
#define SOC_VPP_VHDVLCOEF_vlcoefn2_START (16)
#define SOC_VPP_VHDVLCOEF_vlcoefn2_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int vccoefn1 : 10;
        unsigned int reserved_0: 6;
        unsigned int vccoefn2 : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_VPP_VHDVCCOEF_UNION;
#endif
#define SOC_VPP_VHDVCCOEF_vccoefn1_START (0)
#define SOC_VPP_VHDVCCOEF_vccoefn1_END (9)
#define SOC_VPP_VHDVCCOEF_vccoefn2_START (16)
#define SOC_VPP_VHDVCCOEF_vccoefn2_END (25)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
