#ifndef __SOC_MDDRC_AXI_INTERFACE_H__
#define __SOC_MDDRC_AXI_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MDDRC_AXI_AXI_RTL_INF_ADDR(base) ((base) + (0x000))
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_ADDR(base) ((base) + (0x004))
#define SOC_MDDRC_AXI_AXI_CKG_ADDR(base) ((base) + (0x008))
#define SOC_MDDRC_AXI_AXI_ACTION_ADDR(base) ((base) + (0x020))
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_ADDR(base) ((base) + (0x024))
#define SOC_MDDRC_AXI_AXI_REGION_MAP_ADDR(base,regions) ((base) + (0x100+0x10*(regions)))
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ADDR(base,regions) ((base) + (0x104+0x10*(regions)))
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ADDR(base,regions) ((base) + (0x108+0x10*(regions)))
#define SOC_MDDRC_AXI_AXI_QOS_MAP_ADDR(base,ports) ((base) + (0x200+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_ADDR(base,ports) ((base) + (0x204+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_ADDR(base,ports) ((base) + (0x208+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_ADDR(base,ports) ((base) + (0x20C+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ADDR(base,ports) ((base) + (0x300+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_ADDR(base,ports) ((base) + (0x304+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ADDR(base,ports) ((base) + (0x308+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ADDR(base,groups) ((base) + (0x400+0x10*(groups)))
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_ADDR(base,groups) ((base) + (0x404+0x10*(groups)))
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_ADDR(base,groups) ((base) + (0x408+0x10*(groups)))
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_ADDR(base,groups) ((base) + (0x40C+0x10*(groups)))
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_ADDR(base,ports) ((base) + (0x500+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_ADDR(base,ports) ((base) + (0x504+0x10*(ports)))
#define SOC_MDDRC_AXI_AXI_STATUS_ADDR(base) ((base) + (0x600))
#define SOC_MDDRC_AXI_AXI_INT_STATUS_ADDR(base) ((base) + (0x610))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr_width : 6;
        unsigned int no_of_chs : 2;
        unsigned int no_of_prts : 4;
        unsigned int no_of_exclus : 8;
        unsigned int ecc_status : 1;
        unsigned int reserved_0 : 3;
        unsigned int no_of_addr_rgns : 4;
        unsigned int no_of_ostd_group : 2;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_MDDRC_AXI_AXI_RTL_INF_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_RTL_INF_addr_width_START (0)
#define SOC_MDDRC_AXI_AXI_RTL_INF_addr_width_END (5)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_chs_START (6)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_chs_END (7)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_prts_START (8)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_prts_END (11)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_exclus_START (12)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_exclus_END (19)
#define SOC_MDDRC_AXI_AXI_RTL_INF_ecc_status_START (20)
#define SOC_MDDRC_AXI_AXI_RTL_INF_ecc_status_END (20)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_addr_rgns_START (24)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_addr_rgns_END (27)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_ostd_group_START (28)
#define SOC_MDDRC_AXI_AXI_RTL_INF_no_of_ostd_group_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apb_cfg_lock : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_AXI_AXI_CFG_LOCK_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_apb_cfg_lock_START (0)
#define SOC_MDDRC_AXI_AXI_CFG_LOCK_apb_cfg_lock_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dyn_ckg_axi : 12;
        unsigned int dyn_ckg_rdr : 1;
        unsigned int reserved_0 : 3;
        unsigned int sta_ckg_dmc : 4;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_MDDRC_AXI_AXI_CKG_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_axi_START (0)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_axi_END (11)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_rdr_START (12)
#define SOC_MDDRC_AXI_AXI_CKG_dyn_ckg_rdr_END (12)
#define SOC_MDDRC_AXI_AXI_CKG_sta_ckg_dmc_START (16)
#define SOC_MDDRC_AXI_AXI_CKG_sta_ckg_dmc_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int exclusive_en : 1;
        unsigned int rd_wrap_split_en : 1;
        unsigned int ecc_rmw_en : 1;
        unsigned int reserved_0 : 5;
        unsigned int wr_rcv_mode : 12;
        unsigned int reserved_1 : 12;
    } reg;
} SOC_MDDRC_AXI_AXI_ACTION_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_ACTION_exclusive_en_START (0)
#define SOC_MDDRC_AXI_AXI_ACTION_exclusive_en_END (0)
#define SOC_MDDRC_AXI_AXI_ACTION_rd_wrap_split_en_START (1)
#define SOC_MDDRC_AXI_AXI_ACTION_rd_wrap_split_en_END (1)
#define SOC_MDDRC_AXI_AXI_ACTION_ecc_rmw_en_START (2)
#define SOC_MDDRC_AXI_AXI_ACTION_ecc_rmw_en_END (2)
#define SOC_MDDRC_AXI_AXI_ACTION_wr_rcv_mode_START (8)
#define SOC_MDDRC_AXI_AXI_ACTION_wr_rcv_mode_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rw_arb_dis : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MDDRC_AXI_AXI_RW_ARB_DIS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_rw_arb_dis_START (0)
#define SOC_MDDRC_AXI_AXI_RW_ARB_DIS_rw_arb_dis_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rgn_base_addr : 8;
        unsigned int rgn_size : 3;
        unsigned int reserved_0 : 1;
        unsigned int rgn_en : 1;
        unsigned int reserved_1 : 19;
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_MAP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_base_addr_START (0)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_base_addr_END (7)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_size_START (8)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_size_END (10)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_en_START (12)
#define SOC_MDDRC_AXI_AXI_REGION_MAP_rgn_en_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_start : 2;
        unsigned int ch_mode : 2;
        unsigned int ch_intlv : 2;
        unsigned int reserved_0 : 2;
        unsigned int ch_offset : 8;
        unsigned int addr_aligned : 3;
        unsigned int reserved_1 : 1;
        unsigned int ecc_byp : 1;
        unsigned int reserved_2 : 3;
        unsigned int rnk_mod : 2;
        unsigned int reserved_3 : 2;
        unsigned int bnk_mod : 3;
        unsigned int reserved_4 : 1;
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_ATTRIB_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_start_START (0)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_start_END (1)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_mode_START (2)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_mode_END (3)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_intlv_START (4)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_intlv_END (5)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_offset_START (8)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ch_offset_END (15)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_addr_aligned_START (16)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_addr_aligned_END (18)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ecc_byp_START (20)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_ecc_byp_END (20)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_rnk_mod_START (24)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_rnk_mod_END (25)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_bnk_mod_START (28)
#define SOC_MDDRC_AXI_AXI_REGION_ATTRIB_bnk_mod_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bnk_scrmbl : 4;
        unsigned int reserved_0 : 4;
        unsigned int ch_scrmbl : 4;
        unsigned int reserved_1 : 20;
    } reg;
} SOC_MDDRC_AXI_AXI_REGION_SCRMBL_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_bnk_scrmbl_START (0)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_bnk_scrmbl_END (3)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ch_scrmbl_START (8)
#define SOC_MDDRC_AXI_AXI_REGION_SCRMBL_ch_scrmbl_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int id_map_idx : 12;
        unsigned int pri_map_mode : 1;
        unsigned int reserved_0 : 3;
        unsigned int pri_push_en : 1;
        unsigned int push_qos_en : 1;
        unsigned int hurry_qos_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int rw_arb_mode : 1;
        unsigned int qos_rever : 1;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_MAP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_MAP_id_map_idx_START (0)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_id_map_idx_END (11)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_map_mode_START (12)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_map_mode_END (12)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_push_en_START (16)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_pri_push_en_END (16)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_push_qos_en_START (17)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_push_qos_en_END (17)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_hurry_qos_en_START (18)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_hurry_qos_en_END (18)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_rw_arb_mode_START (20)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_rw_arb_mode_END (20)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_qos_rever_START (21)
#define SOC_MDDRC_AXI_AXI_QOS_MAP_qos_rever_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_pri0 : 3;
        unsigned int reserved_0: 1;
        unsigned int wr_pri1 : 3;
        unsigned int reserved_1: 1;
        unsigned int wr_pri2 : 3;
        unsigned int reserved_2: 1;
        unsigned int wr_pri3 : 3;
        unsigned int reserved_3: 1;
        unsigned int wr_pri4 : 3;
        unsigned int reserved_4: 1;
        unsigned int wr_pri5 : 3;
        unsigned int reserved_5: 1;
        unsigned int wr_pri6 : 3;
        unsigned int reserved_6: 1;
        unsigned int wr_pri7 : 3;
        unsigned int reserved_7: 1;
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_WRPRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri0_START (0)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri0_END (2)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri1_START (4)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri1_END (6)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri2_START (8)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri2_END (10)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri3_START (12)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri3_END (14)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri4_START (16)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri4_END (18)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri5_START (20)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri5_END (22)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri6_START (24)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri6_END (26)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri7_START (28)
#define SOC_MDDRC_AXI_AXI_QOS_WRPRI_wr_pri7_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_pri0 : 3;
        unsigned int reserved_0: 1;
        unsigned int rd_pri1 : 3;
        unsigned int reserved_1: 1;
        unsigned int rd_pri2 : 3;
        unsigned int reserved_2: 1;
        unsigned int rd_pri3 : 3;
        unsigned int reserved_3: 1;
        unsigned int rd_pri4 : 3;
        unsigned int reserved_4: 1;
        unsigned int rd_pri5 : 3;
        unsigned int reserved_5: 1;
        unsigned int rd_pri6 : 3;
        unsigned int reserved_6: 1;
        unsigned int rd_pri7 : 3;
        unsigned int reserved_7: 1;
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_RDPRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri0_START (0)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri0_END (2)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri1_START (4)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri1_END (6)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri2_START (8)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri2_END (10)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri3_START (12)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri3_END (14)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri4_START (16)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri4_END (18)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri5_START (20)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri5_END (22)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri6_START (24)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri6_END (26)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri7_START (28)
#define SOC_MDDRC_AXI_AXI_QOS_RDPRI_rd_pri7_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_adpt_low : 4;
        unsigned int rd_adpt_lvl : 3;
        unsigned int reserved_0 : 1;
        unsigned int rd_adpt_high : 4;
        unsigned int reserved_1 : 4;
        unsigned int wr_adpt_low : 4;
        unsigned int wr_adpt_lvl : 3;
        unsigned int reserved_2 : 1;
        unsigned int wr_adpt_high : 4;
        unsigned int reserved_3 : 4;
    } reg;
} SOC_MDDRC_AXI_AXI_QOS_ADPT_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_low_START (0)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_low_END (3)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_lvl_START (4)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_lvl_END (6)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_high_START (8)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_rd_adpt_high_END (11)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_low_START (16)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_low_END (19)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_lvl_START (20)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_lvl_END (22)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_high_START (24)
#define SOC_MDDRC_AXI_AXI_QOS_ADPT_wr_adpt_high_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prt_ostd_lvl : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRT_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_prt_ostd_lvl_START (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_prt_ostd_lvl_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prt_ostd_st : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_prt_ostd_st_START (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRT_ST_prt_ostd_st_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ecc_cmd_pri : 3;
        unsigned int reserved : 1;
        unsigned int ecc_cmd_id : 28;
    } reg;
} SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_pri_START (0)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_pri_END (2)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_id_START (4)
#define SOC_MDDRC_AXI_AXI_ECC_CMD_PRI_ecc_cmd_id_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int group_ostd_lvl : 7;
        unsigned int reserved_0 : 9;
        unsigned int group_ostd_sel : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_GROUP_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_lvl_START (0)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_lvl_END (6)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_sel_START (16)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_group_ostd_sel_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 8;
        unsigned int pri1_ostd_lvl : 7;
        unsigned int reserved_1 : 1;
        unsigned int pri2_ostd_lvl : 7;
        unsigned int reserved_2 : 1;
        unsigned int pri3_ostd_lvl : 7;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRI0_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri1_ostd_lvl_START (8)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri1_ostd_lvl_END (14)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri2_ostd_lvl_START (16)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri2_ostd_lvl_END (22)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri3_ostd_lvl_START (24)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI0_pri3_ostd_lvl_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pri4_ostd_lvl : 7;
        unsigned int reserved_0 : 1;
        unsigned int pri5_ostd_lvl : 7;
        unsigned int reserved_1 : 1;
        unsigned int pri6_ostd_lvl : 7;
        unsigned int reserved_2 : 1;
        unsigned int pri7_ostd_lvl : 7;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_PRI1_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri4_ostd_lvl_START (0)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri4_ostd_lvl_END (6)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri5_ostd_lvl_START (8)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri5_ostd_lvl_END (14)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri6_ostd_lvl_START (16)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri6_ostd_lvl_END (22)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri7_ostd_lvl_START (24)
#define SOC_MDDRC_AXI_AXI_OSTD_PRI1_pri7_ostd_lvl_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int group_ostd_st : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_group_ostd_st_START (0)
#define SOC_MDDRC_AXI_AXI_OSTD_GROUP_ST_group_ostd_st_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wr_mid_sel : 32;
    } reg;
} SOC_MDDRC_AXI_AXI_PUSH_WRMID_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_wr_mid_sel_START (0)
#define SOC_MDDRC_AXI_AXI_PUSH_WRMID_wr_mid_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_mid_sel : 32;
    } reg;
} SOC_MDDRC_AXI_AXI_PUSH_RDMID_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_rd_mid_sel_START (0)
#define SOC_MDDRC_AXI_AXI_PUSH_RDMID_rd_mid_sel_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int axi_if_busy : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MDDRC_AXI_AXI_STATUS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_STATUS_axi_if_busy_START (0)
#define SOC_MDDRC_AXI_AXI_STATUS_axi_if_busy_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_ports : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_MDDRC_AXI_AXI_INT_STATUS_UNION;
#endif
#define SOC_MDDRC_AXI_AXI_INT_STATUS_int_ports_START (0)
#define SOC_MDDRC_AXI_AXI_INT_STATUS_int_ports_END (11)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
