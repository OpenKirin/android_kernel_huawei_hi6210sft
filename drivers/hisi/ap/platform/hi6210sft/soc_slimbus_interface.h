#ifndef __SOC_SLIMBUS_INTERFACE_H__
#define __SOC_SLIMBUS_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SLIMBUS_INTEN_ADDR(base) ((base) + (0x0000))
#define SOC_SLIMBUS_INTSTS_ADDR(base) ((base) + (0x0004))
#define SOC_SLIMBUS_TXARBI1_ADDR(base) ((base) + (0x0008))
#define SOC_SLIMBUS_TXARBI2_ADDR(base) ((base) + (0x000C))
#define SOC_SLIMBUS_TXMSGHDR1_ADDR(base) ((base) + (0x0010))
#define SOC_SLIMBUS_TXMSGHDR2_ADDR(base) ((base) + (0x0014))
#define SOC_SLIMBUS_TXMSGHDR3_ADDR(base) ((base) + (0x0018))
#define SOC_SLIMBUS_TXMSGPLD1_ADDR(base) ((base) + (0x001C))
#define SOC_SLIMBUS_TXMSGPLD2_ADDR(base) ((base) + (0x0020))
#define SOC_SLIMBUS_TXMSGPLD3_ADDR(base) ((base) + (0x0024))
#define SOC_SLIMBUS_RXARBI1_ADDR(base) ((base) + (0x0038))
#define SOC_SLIMBUS_RXARBI2_ADDR(base) ((base) + (0x003C))
#define SOC_SLIMBUS_RXMSGHDR1_ADDR(base) ((base) + (0x0040))
#define SOC_SLIMBUS_RXMSGHDR2_ADDR(base) ((base) + (0x0044))
#define SOC_SLIMBUS_RXMSGHDR3_ADDR(base) ((base) + (0x0048))
#define SOC_SLIMBUS_RXMSGPLD1_ADDR(base) ((base) + (0x004C))
#define SOC_SLIMBUS_RXMSGPLD2_ADDR(base) ((base) + (0x0050))
#define SOC_SLIMBUS_IFEA310_ADDR(base) ((base) + (0x0068))
#define SOC_SLIMBUS_IFEA4732_ADDR(base) ((base) + (0x006C))
#define SOC_SLIMBUS_FEA310_ADDR(base) ((base) + (0x0074))
#define SOC_SLIMBUS_FEA4732_ADDR(base) ((base) + (0x0078))
#define SOC_SLIMBUS_CNFG_ADDR(base) ((base) + (0x0080))
#define SOC_SLIMBUS_INTR_ADDR(base) ((base) + (0x0084))
#define SOC_SLIMBUS_RPPREEN_ADDR(base) ((base) + (0x0088))
#define SOC_SLIMBUS_GD0EA310_ADDR(base) ((base) + (0x0150))
#define SOC_SLIMBUS_GD0EA4732_ADDR(base) ((base) + (0x0154))
#define SOC_SLIMBUS_GD0LA_ADDR(base) ((base) + (0x0158))
#define SOC_SLIMBUS_GD0INTEN_ADDR(base) ((base) + (0x015C))
#define SOC_SLIMBUS_GD0INTSTS_ADDR(base) ((base) + (0x0160))
#define SOC_SLIMBUS_D0PiINTEN_ADDR(base) ((base) + (0x0164+0x10*i))
#define SOC_SLIMBUS_D0PiINTSTS_ADDR(base) ((base) + (0x0168+0x10*i))
#define SOC_SLIMBUS_D0PiCNFG_ADDR(base) ((base) + (0x016C+0x10*i))
#define SOC_SLIMBUS_D0PiDP_ADDR(base) ((base) + (0x0170+0x10*i))
#define SOC_SLIMBUS_SDMAiCNFG_ADDR(base) ((base) + (0x0400+0x4*i))
#define SOC_SLIMBUS_ADPRTi_ADDR(base) ((base) + (0x0500+0x4*i))
#define SOC_SLIMBUS_FLCONSAV1_ADDR(base) ((base) + (0x0900))
#define SOC_SLIMBUS_MHCONSAV1_ADDR(base) ((base) + (0x0934))
#define SOC_SLIMBUS_AFCONSAV1_ADDR(base) ((base) + (0x0948))
#define SOC_SLIMBUS_AFCONSAV2_ADDR(base) ((base) + (0x094C))
#define SOC_SLIMBUS_IFCONSAV1_ADDR(base) ((base) + (0x0968))
#define SOC_SLIMBUS_GD0MSGCS1_ADDR(base) ((base) + (0x0978))
#define SOC_SLIMBUS_GD0MSGCS2_ADDR(base) ((base) + (0x097C))
#define SOC_SLIMBUS_GD0PRTiCS1_ADDR(base) ((base) + (0x0980+0x4*i))
#define SOC_SLIMBUS_CHCONSAVi_ADDR(base) ((base) + (0x0A00+0x8*(i-1)))
#define SOC_SLIMBUS_GD0PRTiCS2_ADDR(base) ((base) + (0x0A04+0x8*i))
#define SOC_SLIMBUS_CHMAPCSi_ADDR(base) ((base) + (0x0A80+0x4*(i-1)))
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_msg_pack_en : 1;
        unsigned int tx_msg_nack_en : 1;
        unsigned int tx_msg_nore_en : 1;
        unsigned int tx_msg_udef_en : 1;
        unsigned int rx_msg_pack_en : 1;
        unsigned int rx_msg_nack_en : 1;
        unsigned int rx_msg_nore_en : 1;
        unsigned int rx_msg_udef_en : 1;
        unsigned int reconfig_set_en : 1;
        unsigned int reconfig_clear_en : 1;
        unsigned int ex_error_en : 1;
        unsigned int data_tx_col_en : 1;
        unsigned int unsprtd_msg_en : 1;
        unsigned int am_h_inta_n : 1;
        unsigned int gd0_h_inta_n : 1;
        unsigned int reserved_0 : 4;
        unsigned int prep_cont_sts_en : 1;
        unsigned int Rx_Msg_OFL_en : 1;
        unsigned int clk_pause_sts_en : 1;
        unsigned int reserved_1 : 10;
    } reg;
} SOC_SLIMBUS_INTEN_UNION;
#define SOC_SLIMBUS_INTEN_tx_msg_pack_en_START (0)
#define SOC_SLIMBUS_INTEN_tx_msg_pack_en_END (0)
#define SOC_SLIMBUS_INTEN_tx_msg_nack_en_START (1)
#define SOC_SLIMBUS_INTEN_tx_msg_nack_en_END (1)
#define SOC_SLIMBUS_INTEN_tx_msg_nore_en_START (2)
#define SOC_SLIMBUS_INTEN_tx_msg_nore_en_END (2)
#define SOC_SLIMBUS_INTEN_tx_msg_udef_en_START (3)
#define SOC_SLIMBUS_INTEN_tx_msg_udef_en_END (3)
#define SOC_SLIMBUS_INTEN_rx_msg_pack_en_START (4)
#define SOC_SLIMBUS_INTEN_rx_msg_pack_en_END (4)
#define SOC_SLIMBUS_INTEN_rx_msg_nack_en_START (5)
#define SOC_SLIMBUS_INTEN_rx_msg_nack_en_END (5)
#define SOC_SLIMBUS_INTEN_rx_msg_nore_en_START (6)
#define SOC_SLIMBUS_INTEN_rx_msg_nore_en_END (6)
#define SOC_SLIMBUS_INTEN_rx_msg_udef_en_START (7)
#define SOC_SLIMBUS_INTEN_rx_msg_udef_en_END (7)
#define SOC_SLIMBUS_INTEN_reconfig_set_en_START (8)
#define SOC_SLIMBUS_INTEN_reconfig_set_en_END (8)
#define SOC_SLIMBUS_INTEN_reconfig_clear_en_START (9)
#define SOC_SLIMBUS_INTEN_reconfig_clear_en_END (9)
#define SOC_SLIMBUS_INTEN_ex_error_en_START (10)
#define SOC_SLIMBUS_INTEN_ex_error_en_END (10)
#define SOC_SLIMBUS_INTEN_data_tx_col_en_START (11)
#define SOC_SLIMBUS_INTEN_data_tx_col_en_END (11)
#define SOC_SLIMBUS_INTEN_unsprtd_msg_en_START (12)
#define SOC_SLIMBUS_INTEN_unsprtd_msg_en_END (12)
#define SOC_SLIMBUS_INTEN_am_h_inta_n_START (13)
#define SOC_SLIMBUS_INTEN_am_h_inta_n_END (13)
#define SOC_SLIMBUS_INTEN_gd0_h_inta_n_START (14)
#define SOC_SLIMBUS_INTEN_gd0_h_inta_n_END (14)
#define SOC_SLIMBUS_INTEN_prep_cont_sts_en_START (19)
#define SOC_SLIMBUS_INTEN_prep_cont_sts_en_END (19)
#define SOC_SLIMBUS_INTEN_Rx_Msg_OFL_en_START (20)
#define SOC_SLIMBUS_INTEN_Rx_Msg_OFL_en_END (20)
#define SOC_SLIMBUS_INTEN_clk_pause_sts_en_START (21)
#define SOC_SLIMBUS_INTEN_clk_pause_sts_en_END (21)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_msg_pack : 1;
        unsigned int tx_msg_nack : 1;
        unsigned int tx_msg_nore : 1;
        unsigned int tx_msg_udef : 1;
        unsigned int rx_msg_pack : 1;
        unsigned int rx_msg_nack : 1;
        unsigned int rx_msg_nore : 1;
        unsigned int rx_msg_udef : 1;
        unsigned int reconfig_set : 1;
        unsigned int reconfig_clear : 1;
        unsigned int ex_error : 1;
        unsigned int data_tx_col : 1;
        unsigned int unsprtd_msg : 1;
        unsigned int prep_cont_sts : 1;
        unsigned int Rx_Msg_OFL_sts : 1;
        unsigned int clk_pause_sts : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_INTSTS_UNION;
#define SOC_SLIMBUS_INTSTS_tx_msg_pack_START (0)
#define SOC_SLIMBUS_INTSTS_tx_msg_pack_END (0)
#define SOC_SLIMBUS_INTSTS_tx_msg_nack_START (1)
#define SOC_SLIMBUS_INTSTS_tx_msg_nack_END (1)
#define SOC_SLIMBUS_INTSTS_tx_msg_nore_START (2)
#define SOC_SLIMBUS_INTSTS_tx_msg_nore_END (2)
#define SOC_SLIMBUS_INTSTS_tx_msg_udef_START (3)
#define SOC_SLIMBUS_INTSTS_tx_msg_udef_END (3)
#define SOC_SLIMBUS_INTSTS_rx_msg_pack_START (4)
#define SOC_SLIMBUS_INTSTS_rx_msg_pack_END (4)
#define SOC_SLIMBUS_INTSTS_rx_msg_nack_START (5)
#define SOC_SLIMBUS_INTSTS_rx_msg_nack_END (5)
#define SOC_SLIMBUS_INTSTS_rx_msg_nore_START (6)
#define SOC_SLIMBUS_INTSTS_rx_msg_nore_END (6)
#define SOC_SLIMBUS_INTSTS_rx_msg_udef_START (7)
#define SOC_SLIMBUS_INTSTS_rx_msg_udef_END (7)
#define SOC_SLIMBUS_INTSTS_reconfig_set_START (8)
#define SOC_SLIMBUS_INTSTS_reconfig_set_END (8)
#define SOC_SLIMBUS_INTSTS_reconfig_clear_START (9)
#define SOC_SLIMBUS_INTSTS_reconfig_clear_END (9)
#define SOC_SLIMBUS_INTSTS_ex_error_START (10)
#define SOC_SLIMBUS_INTSTS_ex_error_END (10)
#define SOC_SLIMBUS_INTSTS_data_tx_col_START (11)
#define SOC_SLIMBUS_INTSTS_data_tx_col_END (11)
#define SOC_SLIMBUS_INTSTS_unsprtd_msg_START (12)
#define SOC_SLIMBUS_INTSTS_unsprtd_msg_END (12)
#define SOC_SLIMBUS_INTSTS_prep_cont_sts_START (13)
#define SOC_SLIMBUS_INTSTS_prep_cont_sts_END (13)
#define SOC_SLIMBUS_INTSTS_Rx_Msg_OFL_sts_START (14)
#define SOC_SLIMBUS_INTSTS_Rx_Msg_OFL_sts_END (14)
#define SOC_SLIMBUS_INTSTS_clk_pause_sts_START (15)
#define SOC_SLIMBUS_INTSTS_clk_pause_sts_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ArbitrationPriority : 3;
        unsigned int AE : 1;
        unsigned int ArbitrationType : 4;
        unsigned int Source_LA_EA : 8;
        unsigned int Source_EA : 16;
    } reg;
} SOC_SLIMBUS_TXARBI1_UNION;
#define SOC_SLIMBUS_TXARBI1_ArbitrationPriority_START (0)
#define SOC_SLIMBUS_TXARBI1_ArbitrationPriority_END (2)
#define SOC_SLIMBUS_TXARBI1_AE_START (3)
#define SOC_SLIMBUS_TXARBI1_AE_END (3)
#define SOC_SLIMBUS_TXARBI1_ArbitrationType_START (4)
#define SOC_SLIMBUS_TXARBI1_ArbitrationType_END (7)
#define SOC_SLIMBUS_TXARBI1_Source_LA_EA_START (8)
#define SOC_SLIMBUS_TXARBI1_Source_LA_EA_END (15)
#define SOC_SLIMBUS_TXARBI1_Source_EA_START (16)
#define SOC_SLIMBUS_TXARBI1_Source_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Source_EA : 16;
        unsigned int Source_EA : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_SLIMBUS_TXARBI2_UNION;
#define SOC_SLIMBUS_TXARBI2_Source_EA_START (0)
#define SOC_SLIMBUS_TXARBI2_Source_EA_END (15)
#define SOC_SLIMBUS_TXARBI2_Source_EA_START (16)
#define SOC_SLIMBUS_TXARBI2_Source_EA_END (23)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Remaininglength : 5;
        unsigned int Messagetype : 3;
        unsigned int Messagecode : 7;
        unsigned int PrimaryIntegrity : 5;
        unsigned int DestinationType : 2;
        unsigned int reserved : 2;
        unsigned int Dest_EA : 8;
    } reg;
} SOC_SLIMBUS_TXMSGHDR1_UNION;
#define SOC_SLIMBUS_TXMSGHDR1_Remaininglength_START (0)
#define SOC_SLIMBUS_TXMSGHDR1_Remaininglength_END (4)
#define SOC_SLIMBUS_TXMSGHDR1_Messagetype_START (5)
#define SOC_SLIMBUS_TXMSGHDR1_Messagetype_END (7)
#define SOC_SLIMBUS_TXMSGHDR1_Messagecode_START (8)
#define SOC_SLIMBUS_TXMSGHDR1_Messagecode_END (14)
#define SOC_SLIMBUS_TXMSGHDR1_PrimaryIntegrity_START (15)
#define SOC_SLIMBUS_TXMSGHDR1_PrimaryIntegrity_END (19)
#define SOC_SLIMBUS_TXMSGHDR1_DestinationType_START (20)
#define SOC_SLIMBUS_TXMSGHDR1_DestinationType_END (21)
#define SOC_SLIMBUS_TXMSGHDR1_Dest_EA_START (24)
#define SOC_SLIMBUS_TXMSGHDR1_Dest_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
    } reg;
} SOC_SLIMBUS_TXMSGHDR2_UNION;
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START (0)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END (7)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START (8)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END (15)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START (16)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END (23)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_START (24)
#define SOC_SLIMBUS_TXMSGHDR2_Dest_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Dest_LA_EA : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SLIMBUS_TXMSGHDR3_UNION;
#define SOC_SLIMBUS_TXMSGHDR3_Dest_LA_EA_START (0)
#define SOC_SLIMBUS_TXMSGHDR3_Dest_LA_EA_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_msg_payload3 : 8;
        unsigned int msg_rdy : 1;
        unsigned int : 23;
    } reg;
} SOC_SLIMBUS_TXMSGPLD3_UNION;
#define SOC_SLIMBUS_TXMSGPLD3_tx_msg_payload3_START (0)
#define SOC_SLIMBUS_TXMSGPLD3_tx_msg_payload3_END (7)
#define SOC_SLIMBUS_TXMSGPLD3_msg_rdy_START (8)
#define SOC_SLIMBUS_TXMSGPLD3_msg_rdy_END (8)
#define SOC_SLIMBUS_TXMSGPLD3__START (9)
#define SOC_SLIMBUS_TXMSGPLD3__END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ArbitrationPriority : 3;
        unsigned int AE : 1;
        unsigned int ArbitrationType : 4;
        unsigned int Source_LA_EA : 8;
        unsigned int Source_EA : 8;
        unsigned int Source_EA : 8;
    } reg;
} SOC_SLIMBUS_RXARBI1_UNION;
#define SOC_SLIMBUS_RXARBI1_ArbitrationPriority_START (0)
#define SOC_SLIMBUS_RXARBI1_ArbitrationPriority_END (2)
#define SOC_SLIMBUS_RXARBI1_AE_START (3)
#define SOC_SLIMBUS_RXARBI1_AE_END (3)
#define SOC_SLIMBUS_RXARBI1_ArbitrationType_START (4)
#define SOC_SLIMBUS_RXARBI1_ArbitrationType_END (7)
#define SOC_SLIMBUS_RXARBI1_Source_LA_EA_START (8)
#define SOC_SLIMBUS_RXARBI1_Source_LA_EA_END (15)
#define SOC_SLIMBUS_RXARBI1_Source_EA_START (16)
#define SOC_SLIMBUS_RXARBI1_Source_EA_END (23)
#define SOC_SLIMBUS_RXARBI1_Source_EA_START (24)
#define SOC_SLIMBUS_RXARBI1_Source_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Source_EA : 8;
        unsigned int Source_EA : 8;
        unsigned int Source_EA : 8;
        unsigned int msg_resp : 4;
        unsigned int reserved : 4;
    } reg;
} SOC_SLIMBUS_RXARBI2_UNION;
#define SOC_SLIMBUS_RXARBI2_Source_EA_START (0)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END (7)
#define SOC_SLIMBUS_RXARBI2_Source_EA_START (8)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END (15)
#define SOC_SLIMBUS_RXARBI2_Source_EA_START (16)
#define SOC_SLIMBUS_RXARBI2_Source_EA_END (23)
#define SOC_SLIMBUS_RXARBI2_msg_resp_START (24)
#define SOC_SLIMBUS_RXARBI2_msg_resp_END (27)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Remaininglength : 5;
        unsigned int Messagetype : 3;
        unsigned int Messagecode : 7;
        unsigned int reserved_0 : 1;
        unsigned int PrimaryIntegrity : 4;
        unsigned int DestinationType : 2;
        unsigned int reserved_1 : 2;
        unsigned int Dest_EA : 8;
    } reg;
} SOC_SLIMBUS_RXMSGHDR1_UNION;
#define SOC_SLIMBUS_RXMSGHDR1_Remaininglength_START (0)
#define SOC_SLIMBUS_RXMSGHDR1_Remaininglength_END (4)
#define SOC_SLIMBUS_RXMSGHDR1_Messagetype_START (5)
#define SOC_SLIMBUS_RXMSGHDR1_Messagetype_END (7)
#define SOC_SLIMBUS_RXMSGHDR1_Messagecode_START (8)
#define SOC_SLIMBUS_RXMSGHDR1_Messagecode_END (14)
#define SOC_SLIMBUS_RXMSGHDR1_PrimaryIntegrity_START (16)
#define SOC_SLIMBUS_RXMSGHDR1_PrimaryIntegrity_END (19)
#define SOC_SLIMBUS_RXMSGHDR1_DestinationType_START (20)
#define SOC_SLIMBUS_RXMSGHDR1_DestinationType_END (21)
#define SOC_SLIMBUS_RXMSGHDR1_Dest_EA_START (24)
#define SOC_SLIMBUS_RXMSGHDR1_Dest_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
        unsigned int Dest_EA : 8;
    } reg;
} SOC_SLIMBUS_RXMSGHDR2_UNION;
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START (0)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END (7)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START (8)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END (15)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START (16)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END (23)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_START (24)
#define SOC_SLIMBUS_RXMSGHDR2_Dest_EA_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Dest_LA_EA : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SLIMBUS_RXMSGHDR3_UNION;
#define SOC_SLIMBUS_RXMSGHDR3_Dest_LA_EA_START (0)
#define SOC_SLIMBUS_RXMSGHDR3_Dest_LA_EA_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ifea_47_32 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_IFEA4732_UNION;
#define SOC_SLIMBUS_IFEA4732_ifea_47_32_START (0)
#define SOC_SLIMBUS_IFEA4732_ifea_47_32_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ifea_47_32 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_FEA4732_UNION;
#define SOC_SLIMBUS_FEA4732_ifea_47_32_START (0)
#define SOC_SLIMBUS_FEA4732_ifea_47_32_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fr_pri_sec : 1;
        unsigned int am_en : 1;
        unsigned int fr_en : 1;
        unsigned int gd0_en : 1;
        unsigned int fr_clk_freq : 4;
        unsigned int fr_clk_gear : 5;
        unsigned int fr_boot_mode : 5;
        unsigned int fr_boot_gear : 4;
        unsigned int fr_clk_pause : 1;
        unsigned int if_en : 1;
        unsigned int framer_clk_on_off : 1;
        unsigned int reserved : 7;
    } reg;
} SOC_SLIMBUS_CNFG_UNION;
#define SOC_SLIMBUS_CNFG_fr_pri_sec_START (0)
#define SOC_SLIMBUS_CNFG_fr_pri_sec_END (0)
#define SOC_SLIMBUS_CNFG_am_en_START (1)
#define SOC_SLIMBUS_CNFG_am_en_END (1)
#define SOC_SLIMBUS_CNFG_fr_en_START (2)
#define SOC_SLIMBUS_CNFG_fr_en_END (2)
#define SOC_SLIMBUS_CNFG_gd0_en_START (3)
#define SOC_SLIMBUS_CNFG_gd0_en_END (3)
#define SOC_SLIMBUS_CNFG_fr_clk_freq_START (4)
#define SOC_SLIMBUS_CNFG_fr_clk_freq_END (7)
#define SOC_SLIMBUS_CNFG_fr_clk_gear_START (8)
#define SOC_SLIMBUS_CNFG_fr_clk_gear_END (12)
#define SOC_SLIMBUS_CNFG_fr_boot_mode_START (13)
#define SOC_SLIMBUS_CNFG_fr_boot_mode_END (17)
#define SOC_SLIMBUS_CNFG_fr_boot_gear_START (18)
#define SOC_SLIMBUS_CNFG_fr_boot_gear_END (21)
#define SOC_SLIMBUS_CNFG_fr_clk_pause_START (22)
#define SOC_SLIMBUS_CNFG_fr_clk_pause_END (22)
#define SOC_SLIMBUS_CNFG_if_en_START (23)
#define SOC_SLIMBUS_CNFG_if_en_END (23)
#define SOC_SLIMBUS_CNFG_framer_clk_on_off_START (24)
#define SOC_SLIMBUS_CNFG_framer_clk_on_off_END (24)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int am_if_int : 1;
        unsigned int gd0_int : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SLIMBUS_INTR_UNION;
#define SOC_SLIMBUS_INTR_am_if_int_START (0)
#define SOC_SLIMBUS_INTR_am_if_int_END (0)
#define SOC_SLIMBUS_INTR_gd0_int_START (1)
#define SOC_SLIMBUS_INTR_gd0_int_END (1)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int af_rp_pre_en : 1;
        unsigned int if_rp_pre_en : 1;
        unsigned int gd0_rp_pre_en : 1;
        unsigned int reserved_0 : 5;
        unsigned int fr_enumerated : 1;
        unsigned int if_enumerated : 1;
        unsigned int gd0_enumerated : 1;
        unsigned int reserved_1 : 21;
    } reg;
} SOC_SLIMBUS_RPPREEN_UNION;
#define SOC_SLIMBUS_RPPREEN_af_rp_pre_en_START (0)
#define SOC_SLIMBUS_RPPREEN_af_rp_pre_en_END (0)
#define SOC_SLIMBUS_RPPREEN_if_rp_pre_en_START (1)
#define SOC_SLIMBUS_RPPREEN_if_rp_pre_en_END (1)
#define SOC_SLIMBUS_RPPREEN_gd0_rp_pre_en_START (2)
#define SOC_SLIMBUS_RPPREEN_gd0_rp_pre_en_END (2)
#define SOC_SLIMBUS_RPPREEN_fr_enumerated_START (8)
#define SOC_SLIMBUS_RPPREEN_fr_enumerated_END (8)
#define SOC_SLIMBUS_RPPREEN_if_enumerated_START (9)
#define SOC_SLIMBUS_RPPREEN_if_enumerated_END (9)
#define SOC_SLIMBUS_RPPREEN_gd0_enumerated_START (10)
#define SOC_SLIMBUS_RPPREEN_gd0_enumerated_END (10)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gd0ea_47_32 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_GD0EA4732_UNION;
#define SOC_SLIMBUS_GD0EA4732_gd0ea_47_32_START (0)
#define SOC_SLIMBUS_GD0EA4732_gd0ea_47_32_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gd0la : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SLIMBUS_GD0LA_UNION;
#define SOC_SLIMBUS_GD0LA_gd0la_START (0)
#define SOC_SLIMBUS_GD0LA_gd0la_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gd0_p0_int_en : 1;
        unsigned int gd0_p1_int_en : 1;
        unsigned int gd0_p2_int_en : 1;
        unsigned int gd0_p3_int_en : 1;
        unsigned int gd0_p4_int_en : 1;
        unsigned int gd0_p5_int_en : 1;
        unsigned int gd0_p6_int_en : 1;
        unsigned int gd0_p7_int_en : 1;
        unsigned int gd0_p8_int_en : 1;
        unsigned int gd0_p9_int_en : 1;
        unsigned int gd0_p10_int_en : 1;
        unsigned int gd0_p11_int_en : 1;
        unsigned int gd0_p12_int_en : 1;
        unsigned int gd0_p13_int_en : 1;
        unsigned int gd0_p14_int_en : 1;
        unsigned int gd0_p15_int_en : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_GD0INTEN_UNION;
#define SOC_SLIMBUS_GD0INTEN_gd0_p0_int_en_START (0)
#define SOC_SLIMBUS_GD0INTEN_gd0_p0_int_en_END (0)
#define SOC_SLIMBUS_GD0INTEN_gd0_p1_int_en_START (1)
#define SOC_SLIMBUS_GD0INTEN_gd0_p1_int_en_END (1)
#define SOC_SLIMBUS_GD0INTEN_gd0_p2_int_en_START (2)
#define SOC_SLIMBUS_GD0INTEN_gd0_p2_int_en_END (2)
#define SOC_SLIMBUS_GD0INTEN_gd0_p3_int_en_START (3)
#define SOC_SLIMBUS_GD0INTEN_gd0_p3_int_en_END (3)
#define SOC_SLIMBUS_GD0INTEN_gd0_p4_int_en_START (4)
#define SOC_SLIMBUS_GD0INTEN_gd0_p4_int_en_END (4)
#define SOC_SLIMBUS_GD0INTEN_gd0_p5_int_en_START (5)
#define SOC_SLIMBUS_GD0INTEN_gd0_p5_int_en_END (5)
#define SOC_SLIMBUS_GD0INTEN_gd0_p6_int_en_START (6)
#define SOC_SLIMBUS_GD0INTEN_gd0_p6_int_en_END (6)
#define SOC_SLIMBUS_GD0INTEN_gd0_p7_int_en_START (7)
#define SOC_SLIMBUS_GD0INTEN_gd0_p7_int_en_END (7)
#define SOC_SLIMBUS_GD0INTEN_gd0_p8_int_en_START (8)
#define SOC_SLIMBUS_GD0INTEN_gd0_p8_int_en_END (8)
#define SOC_SLIMBUS_GD0INTEN_gd0_p9_int_en_START (9)
#define SOC_SLIMBUS_GD0INTEN_gd0_p9_int_en_END (9)
#define SOC_SLIMBUS_GD0INTEN_gd0_p10_int_en_START (10)
#define SOC_SLIMBUS_GD0INTEN_gd0_p10_int_en_END (10)
#define SOC_SLIMBUS_GD0INTEN_gd0_p11_int_en_START (11)
#define SOC_SLIMBUS_GD0INTEN_gd0_p11_int_en_END (11)
#define SOC_SLIMBUS_GD0INTEN_gd0_p12_int_en_START (12)
#define SOC_SLIMBUS_GD0INTEN_gd0_p12_int_en_END (12)
#define SOC_SLIMBUS_GD0INTEN_gd0_p13_int_en_START (13)
#define SOC_SLIMBUS_GD0INTEN_gd0_p13_int_en_END (13)
#define SOC_SLIMBUS_GD0INTEN_gd0_p14_int_en_START (14)
#define SOC_SLIMBUS_GD0INTEN_gd0_p14_int_en_END (14)
#define SOC_SLIMBUS_GD0INTEN_gd0_p15_int_en_START (15)
#define SOC_SLIMBUS_GD0INTEN_gd0_p15_int_en_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gd0_p0_int_sts : 1;
        unsigned int gd0_p1_int_sts : 1;
        unsigned int gd0_p2_int_sts : 1;
        unsigned int gd0_p3_int_sts : 1;
        unsigned int gd0_p4_int_sts : 1;
        unsigned int gd0_p5_int_sts : 1;
        unsigned int gd0_p6_int_sts : 1;
        unsigned int gd0_p7_int_sts : 1;
        unsigned int gd0_p8_int_sts : 1;
        unsigned int gd0_p9_int_sts : 1;
        unsigned int gd0_p10_int_sts : 1;
        unsigned int gd0_p11_int_sts : 1;
        unsigned int gd0_p12_int_sts : 1;
        unsigned int gd0_p13_int_sts : 1;
        unsigned int gd0_p14_int_sts : 1;
        unsigned int gd0_p15_int_sts : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_SLIMBUS_GD0INTSTS_UNION;
#define SOC_SLIMBUS_GD0INTSTS_gd0_p0_int_sts_START (0)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p0_int_sts_END (0)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p1_int_sts_START (1)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p1_int_sts_END (1)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p2_int_sts_START (2)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p2_int_sts_END (2)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p3_int_sts_START (3)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p3_int_sts_END (3)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p4_int_sts_START (4)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p4_int_sts_END (4)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p5_int_sts_START (5)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p5_int_sts_END (5)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p6_int_sts_START (6)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p6_int_sts_END (6)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p7_int_sts_START (7)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p7_int_sts_END (7)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p8_int_sts_START (8)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p8_int_sts_END (8)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p9_int_sts_START (9)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p9_int_sts_END (9)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p10_int_sts_START (10)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p10_int_sts_END (10)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p11_int_sts_START (11)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p11_int_sts_END (11)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p12_int_sts_START (12)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p12_int_sts_END (12)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p13_int_sts_START (13)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p13_int_sts_END (13)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p14_int_sts_START (14)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p14_int_sts_END (14)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p15_int_sts_START (15)
#define SOC_SLIMBUS_GD0INTSTS_gd0_p15_int_sts_END (15)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int src_threshold : 1;
        unsigned int src_fifo_empty : 1;
        unsigned int src_fifo_full : 1;
        unsigned int src_fifo_underrun : 1;
        unsigned int reserved_0 : 12;
        unsigned int sink_threshold : 1;
        unsigned int sink_fifo_empty : 1;
        unsigned int sink_fifo_full : 1;
        unsigned int sink_fifo_overrun : 1;
        unsigned int reserved_1 : 11;
        unsigned int Timeout_en : 1;
    } reg;
} SOC_SLIMBUS_D0PiINTEN_UNION;
#define SOC_SLIMBUS_D0PiINTEN_src_threshold_START (0)
#define SOC_SLIMBUS_D0PiINTEN_src_threshold_END (0)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_empty_START (1)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_empty_END (1)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_full_START (2)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_full_END (2)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_underrun_START (3)
#define SOC_SLIMBUS_D0PiINTEN_src_fifo_underrun_END (3)
#define SOC_SLIMBUS_D0PiINTEN_sink_threshold_START (16)
#define SOC_SLIMBUS_D0PiINTEN_sink_threshold_END (16)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_empty_START (17)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_empty_END (17)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_full_START (18)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_full_END (18)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_overrun_START (19)
#define SOC_SLIMBUS_D0PiINTEN_sink_fifo_overrun_END (19)
#define SOC_SLIMBUS_D0PiINTEN_Timeout_en_START (31)
#define SOC_SLIMBUS_D0PiINTEN_Timeout_en_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Src_Thresholdreached : 1;
        unsigned int src_fifo_empty : 1;
        unsigned int src_fifo_full : 1;
        unsigned int src_fifo_underrun : 1;
        unsigned int src_fifo_empty_poll : 1;
        unsigned int reserved_0 : 11;
        unsigned int sink_Thresholdreached : 1;
        unsigned int sink_fifo_empty : 1;
        unsigned int sink_fifo_full : 1;
        unsigned int sink_fifo_overrun : 1;
        unsigned int sink_fifo_empty_poll : 1;
        unsigned int reserved_1 : 10;
        unsigned int Timeout_sts : 1;
    } reg;
} SOC_SLIMBUS_D0PiINTSTS_UNION;
#define SOC_SLIMBUS_D0PiINTSTS_Src_Thresholdreached_START (0)
#define SOC_SLIMBUS_D0PiINTSTS_Src_Thresholdreached_END (0)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_START (1)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_END (1)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_full_START (2)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_full_END (2)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_underrun_START (3)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_underrun_END (3)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_poll_START (4)
#define SOC_SLIMBUS_D0PiINTSTS_src_fifo_empty_poll_END (4)
#define SOC_SLIMBUS_D0PiINTSTS_sink_Thresholdreached_START (16)
#define SOC_SLIMBUS_D0PiINTSTS_sink_Thresholdreached_END (16)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_START (17)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_END (17)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_full_START (18)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_full_END (18)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_overrun_START (19)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_overrun_END (19)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_poll_START (20)
#define SOC_SLIMBUS_D0PiINTSTS_sink_fifo_empty_poll_END (20)
#define SOC_SLIMBUS_D0PiINTSTS_Timeout_sts_START (31)
#define SOC_SLIMBUS_D0PiINTSTS_Timeout_sts_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int FIFOWatermark : 6;
        unsigned int reserved_0 : 10;
        unsigned int dma_en : 1;
        unsigned int packed_en : 1;
        unsigned int Timeout : 8;
        unsigned int AHB_8_16_32 : 2;
        unsigned int wake_up_ena : 1;
        unsigned int wake_up_sts : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_SLIMBUS_D0PiCNFG_UNION;
#define SOC_SLIMBUS_D0PiCNFG_FIFOWatermark_START (0)
#define SOC_SLIMBUS_D0PiCNFG_FIFOWatermark_END (5)
#define SOC_SLIMBUS_D0PiCNFG_dma_en_START (16)
#define SOC_SLIMBUS_D0PiCNFG_dma_en_END (16)
#define SOC_SLIMBUS_D0PiCNFG_packed_en_START (17)
#define SOC_SLIMBUS_D0PiCNFG_packed_en_END (17)
#define SOC_SLIMBUS_D0PiCNFG_Timeout_START (18)
#define SOC_SLIMBUS_D0PiCNFG_Timeout_END (25)
#define SOC_SLIMBUS_D0PiCNFG_AHB_8_16_32_START (26)
#define SOC_SLIMBUS_D0PiCNFG_AHB_8_16_32_END (27)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_ena_START (28)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_ena_END (28)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_sts_START (29)
#define SOC_SLIMBUS_D0PiCNFG_wake_up_sts_END (29)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int DMATransferCount : 20;
        unsigned int DMAburstsize : 2;
        unsigned int reserved_1 : 6;
    } reg;
} SOC_SLIMBUS_SDMAiCNFG_UNION;
#define SOC_SLIMBUS_SDMAiCNFG_DMATransferCount_START (4)
#define SOC_SLIMBUS_SDMAiCNFG_DMATransferCount_END (23)
#define SOC_SLIMBUS_SDMAiCNFG_DMAburstsize_START (24)
#define SOC_SLIMBUS_SDMAiCNFG_DMAburstsize_END (25)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int Period_value : 13;
        unsigned int reserved : 17;
        unsigned int Smoother_en : 1;
        unsigned int Period_load_en : 1;
    } reg;
} SOC_SLIMBUS_ADPRTi_UNION;
#define SOC_SLIMBUS_ADPRTi_Period_value_START (0)
#define SOC_SLIMBUS_ADPRTi_Period_value_END (12)
#define SOC_SLIMBUS_ADPRTi_Smoother_en_START (30)
#define SOC_SLIMBUS_ADPRTi_Smoother_en_END (30)
#define SOC_SLIMBUS_ADPRTi_Period_load_en_START (31)
#define SOC_SLIMBUS_ADPRTi_Period_load_en_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int next_frame_state : 5;
        unsigned int reserved_0 : 5;
        unsigned int cell1_count_10_0 : 11;
        unsigned int cell1_count_6_0 : 7;
        unsigned int current_clk_rx_state : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_SLIMBUS_FLCONSAV1_UNION;
#define SOC_SLIMBUS_FLCONSAV1_next_frame_state_START (0)
#define SOC_SLIMBUS_FLCONSAV1_next_frame_state_END (4)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_10_0_START (10)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_10_0_END (20)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_6_0_START (21)
#define SOC_SLIMBUS_FLCONSAV1_cell1_count_6_0_END (27)
#define SOC_SLIMBUS_FLCONSAV1_current_clk_rx_state_START (28)
#define SOC_SLIMBUS_FLCONSAV1_current_clk_rx_state_END (30)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_guide_val : 5;
        unsigned int sig_clk_gear : 4;
        unsigned int sig_root_freq : 4;
        unsigned int sig_subfr_mode : 5;
        unsigned int reserved : 14;
    } reg;
} SOC_SLIMBUS_MHCONSAV1_UNION;
#define SOC_SLIMBUS_MHCONSAV1_sig_guide_val_START (0)
#define SOC_SLIMBUS_MHCONSAV1_sig_guide_val_END (4)
#define SOC_SLIMBUS_MHCONSAV1_sig_clk_gear_START (5)
#define SOC_SLIMBUS_MHCONSAV1_sig_clk_gear_END (8)
#define SOC_SLIMBUS_MHCONSAV1_sig_root_freq_START (9)
#define SOC_SLIMBUS_MHCONSAV1_sig_root_freq_END (12)
#define SOC_SLIMBUS_MHCONSAV1_sig_subfr_mode_START (13)
#define SOC_SLIMBUS_MHCONSAV1_sig_subfr_mode_END (17)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int slim_fr_fl_info_cnt : 3;
        unsigned int sig_slim_fr_fl_info : 4;
        unsigned int cur_boot_st : 4;
        unsigned int fr_log_addr : 7;
        unsigned int root_supr_fr_cnt : 14;
    } reg;
} SOC_SLIMBUS_AFCONSAV1_UNION;
#define SOC_SLIMBUS_AFCONSAV1_slim_fr_fl_info_cnt_START (0)
#define SOC_SLIMBUS_AFCONSAV1_slim_fr_fl_info_cnt_END (2)
#define SOC_SLIMBUS_AFCONSAV1_sig_slim_fr_fl_info_START (3)
#define SOC_SLIMBUS_AFCONSAV1_sig_slim_fr_fl_info_END (6)
#define SOC_SLIMBUS_AFCONSAV1_cur_boot_st_START (7)
#define SOC_SLIMBUS_AFCONSAV1_cur_boot_st_END (10)
#define SOC_SLIMBUS_AFCONSAV1_fr_log_addr_START (11)
#define SOC_SLIMBUS_AFCONSAV1_fr_log_addr_END (17)
#define SOC_SLIMBUS_AFCONSAV1_root_supr_fr_cnt_START (18)
#define SOC_SLIMBUS_AFCONSAV1_root_supr_fr_cnt_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curr_enum_st : 2;
        unsigned int cur_fr_st : 2;
        unsigned int core_info : 3;
        unsigned int dev_info : 3;
        unsigned int reserved : 22;
    } reg;
} SOC_SLIMBUS_AFCONSAV2_UNION;
#define SOC_SLIMBUS_AFCONSAV2_curr_enum_st_START (0)
#define SOC_SLIMBUS_AFCONSAV2_curr_enum_st_END (1)
#define SOC_SLIMBUS_AFCONSAV2_cur_fr_st_START (2)
#define SOC_SLIMBUS_AFCONSAV2_cur_fr_st_END (3)
#define SOC_SLIMBUS_AFCONSAV2_core_info_START (4)
#define SOC_SLIMBUS_AFCONSAV2_core_info_END (6)
#define SOC_SLIMBUS_AFCONSAV2_dev_info_START (7)
#define SOC_SLIMBUS_AFCONSAV2_dev_info_END (9)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int logical_addr : 8;
        unsigned int receive_ala : 1;
        unsigned int arb_pri : 3;
        unsigned int curr_enu_state : 2;
        unsigned int reserved : 18;
    } reg;
} SOC_SLIMBUS_IFCONSAV1_UNION;
#define SOC_SLIMBUS_IFCONSAV1_logical_addr_START (0)
#define SOC_SLIMBUS_IFCONSAV1_logical_addr_END (7)
#define SOC_SLIMBUS_IFCONSAV1_receive_ala_START (8)
#define SOC_SLIMBUS_IFCONSAV1_receive_ala_END (8)
#define SOC_SLIMBUS_IFCONSAV1_arb_pri_START (9)
#define SOC_SLIMBUS_IFCONSAV1_arb_pri_END (11)
#define SOC_SLIMBUS_IFCONSAV1_curr_enu_state_START (12)
#define SOC_SLIMBUS_IFCONSAV1_curr_enu_state_END (13)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_channel_1 : 1;
        unsigned int sig_channel_2 : 1;
        unsigned int sig_channel_3 : 1;
        unsigned int sig_channel_4 : 1;
        unsigned int sig_channel_5 : 1;
        unsigned int sig_channel_6 : 1;
        unsigned int sig_channel_7 : 1;
        unsigned int sig_channel_8 : 1;
        unsigned int sig_channel_9 : 1;
        unsigned int sig_channel_10 : 1;
        unsigned int sig_channel_11 : 1;
        unsigned int sig_channel_12 : 1;
        unsigned int sig_channel_13 : 1;
        unsigned int sig_channel_14 : 1;
        unsigned int sig_channel_15 : 1;
        unsigned int sig_channel_16 : 1;
        unsigned int sig_act_channel_1 : 1;
        unsigned int sig_act_channel_2 : 1;
        unsigned int sig_act_channel_3 : 1;
        unsigned int sig_act_channel_4 : 1;
        unsigned int sig_act_channel_5 : 1;
        unsigned int sig_act_channel_6 : 1;
        unsigned int sig_act_channel_7 : 1;
        unsigned int sig_act_channel_8 : 1;
        unsigned int sig_act_channel_9 : 1;
        unsigned int sig_act_channel_10 : 1;
        unsigned int sig_act_channel_11 : 1;
        unsigned int sig_act_channel_12 : 1;
        unsigned int sig_act_channel_13 : 1;
        unsigned int sig_act_channel_14 : 1;
        unsigned int sig_act_channel_15 : 1;
        unsigned int sig_act_channel_16 : 1;
    } reg;
} SOC_SLIMBUS_GD0MSGCS1_UNION;
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_1_START (0)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_1_END (0)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_2_START (1)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_2_END (1)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_3_START (2)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_3_END (2)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_4_START (3)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_4_END (3)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_5_START (4)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_5_END (4)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_6_START (5)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_6_END (5)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_7_START (6)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_7_END (6)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_8_START (7)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_8_END (7)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_9_START (8)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_9_END (8)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_10_START (9)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_10_END (9)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_11_START (10)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_11_END (10)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_12_START (11)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_12_END (11)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_13_START (12)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_13_END (12)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_14_START (13)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_14_END (13)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_15_START (14)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_15_END (14)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_16_START (15)
#define SOC_SLIMBUS_GD0MSGCS1_sig_channel_16_END (15)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_1_START (16)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_1_END (16)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_2_START (17)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_2_END (17)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_3_START (18)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_3_END (18)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_4_START (19)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_4_END (19)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_5_START (20)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_5_END (20)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_6_START (21)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_6_END (21)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_7_START (22)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_7_END (22)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_8_START (23)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_8_END (23)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_9_START (24)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_9_END (24)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_10_START (25)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_10_END (25)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_11_START (26)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_11_END (26)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_12_START (27)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_12_END (27)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_13_START (28)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_13_END (28)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_14_START (29)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_14_END (29)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_15_START (30)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_15_END (30)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_16_START (31)
#define SOC_SLIMBUS_GD0MSGCS1_sig_act_channel_16_END (31)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_gd_log_addr : 8;
        unsigned int receive_ala : 1;
        unsigned int arb_pri : 3;
        unsigned int curr_enu_state : 2;
        unsigned int reserved : 18;
    } reg;
} SOC_SLIMBUS_GD0MSGCS2_UNION;
#define SOC_SLIMBUS_GD0MSGCS2_sig_gd_log_addr_START (0)
#define SOC_SLIMBUS_GD0MSGCS2_sig_gd_log_addr_END (7)
#define SOC_SLIMBUS_GD0MSGCS2_receive_ala_START (8)
#define SOC_SLIMBUS_GD0MSGCS2_receive_ala_END (8)
#define SOC_SLIMBUS_GD0MSGCS2_arb_pri_START (9)
#define SOC_SLIMBUS_GD0MSGCS2_arb_pri_END (11)
#define SOC_SLIMBUS_GD0MSGCS2_curr_enu_state_START (12)
#define SOC_SLIMBUS_GD0MSGCS2_curr_enu_state_END (13)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_gd_pi_seg_length : 5;
        unsigned int sig_gd_pi_dat_len : 5;
        unsigned int sig_gd_pi_protocol : 4;
        unsigned int sig_gd_pi_src : 1;
        unsigned int sig_gd_pi_sink : 1;
        unsigned int sig_gd_pi_src_sink : 1;
        unsigned int sig_gd_pi_rec_bound : 1;
        unsigned int sig_gd_pi_ch : 4;
        unsigned int sig_gd_pi_freq_lock : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_SLIMBUS_GD0PRTiCS1_UNION;
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_seg_length_START (0)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_seg_length_END (4)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_dat_len_START (5)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_dat_len_END (9)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_protocol_START (10)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_protocol_END (13)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_START (14)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_END (14)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_sink_START (15)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_sink_END (15)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_sink_START (16)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_src_sink_END (16)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_rec_bound_START (17)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_rec_bound_END (17)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_ch_START (18)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_ch_END (21)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_freq_lock_START (22)
#define SOC_SLIMBUS_GD0PRTiCS1_sig_gd_pi_freq_lock_END (22)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_slim_x_fl_seg_len_chi : 5;
        unsigned int sig_slim_x_fl_seg_off_chi : 11;
        unsigned int sig_slim_x_fl_seg_int_chi : 11;
        unsigned int reserved : 5;
    } reg;
} SOC_SLIMBUS_CHCONSAVi_UNION;
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_len_chi_START (0)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_len_chi_END (4)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_off_chi_START (5)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_off_chi_END (15)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_int_chi_START (16)
#define SOC_SLIMBUS_CHCONSAVi_sig_slim_x_fl_seg_int_chi_END (26)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sig_gd_presence_rate_d0_pi : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SLIMBUS_GD0PRTiCS2_UNION;
#define SOC_SLIMBUS_GD0PRTiCS2_sig_gd_presence_rate_d0_pi_START (0)
#define SOC_SLIMBUS_GD0PRTiCS2_sig_gd_presence_rate_d0_pi_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int channel_number : 8;
        unsigned int entry_valid_reg : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_SLIMBUS_CHMAPCSi_UNION;
#define SOC_SLIMBUS_CHMAPCSi_channel_number_START (0)
#define SOC_SLIMBUS_CHMAPCSi_channel_number_END (7)
#define SOC_SLIMBUS_CHMAPCSi_entry_valid_reg_START (8)
#define SOC_SLIMBUS_CHMAPCSi_entry_valid_reg_END (8)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
