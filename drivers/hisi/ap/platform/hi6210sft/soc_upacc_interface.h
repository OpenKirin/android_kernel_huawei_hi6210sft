#ifndef __SOC_UPACC_INTERFACE_H__
#define __SOC_UPACC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_UPACC_MAC_ENCAP_START_ADDR(base) ((base) + (0x0000))
#define SOC_UPACC_LOCH_NUM_ADDR(base) ((base) + (0x0004))
#define SOC_UPACC_DDI0_EN_ADDR(base) ((base) + (0x0008))
#define SOC_UPACC_SI_EN_ADDR(base) ((base) + (0x000C))
#define SOC_UPACC_SI_DATA_ADDR(base) ((base) + (0x0010))
#define SOC_UPACC_PADDING_LENGTH_ADDR(base) ((base) + (0x0014))
#define SOC_UPACC_ENCAP_TRANS_ADDR_ADDR(base) ((base) + (0x0018))
#define SOC_UPACC_TRANS_NUM_ADDR(base) ((base) + (0x001C))
#define SOC_UPACC_BBP_DEST_ADDR_ADDR(base) ((base) + (0x0020))
#define SOC_UPACC_INT_EN_ADDR(base) ((base) + (0x0024))
#define SOC_UPACC_INT_RAW_ADDR(base) ((base) + (0x0028))
#define SOC_UPACC_INT_MASK_ADDR(base) ((base) + (0x002C))
#define SOC_UPACC_INT_CLR_ADDR(base) ((base) + (0x0030))
#define SOC_UPACC_BUS_ERROR_ADDR_ADDR(base) ((base) + (0x0034))
#define SOC_UPACC_LOCH1_PARAM_ADDR(base) ((base) + (0x0038))
#define SOC_UPACC_LOCH2_PARAM_ADDR(base) ((base) + (0x003C))
#define SOC_UPACC_LOCH3_PARAM_ADDR(base) ((base) + (0x0040))
#define SOC_UPACC_LOCH4_PARAM_ADDR(base) ((base) + (0x0044))
#define SOC_UPACC_LOCH5_PARAM_ADDR(base) ((base) + (0x0048))
#define SOC_UPACC_LOCH6_PARAM_ADDR(base) ((base) + (0x004C))
#define SOC_UPACC_LOCH7_PARAM_ADDR(base) ((base) + (0x0050))
#define SOC_UPACC_LOCH8_PARAM_ADDR(base) ((base) + (0x0054))
#define SOC_UPACC_LOCH1_START_ADDR_ADDR(base) ((base) + (0x0058))
#define SOC_UPACC_LOCH2_START_ADDR_ADDR(base) ((base) + (0x005C))
#define SOC_UPACC_LOCH3_START_ADDR_ADDR(base) ((base) + (0x0060))
#define SOC_UPACC_LOCH4_START_ADDR_ADDR(base) ((base) + (0x0064))
#define SOC_UPACC_LOCH5_START_ADDR_ADDR(base) ((base) + (0x0068))
#define SOC_UPACC_LOCH6_START_ADDR_ADDR(base) ((base) + (0x006C))
#define SOC_UPACC_LOCH7_START_ADDR_ADDR(base) ((base) + (0x0070))
#define SOC_UPACC_LOCH8_START_ADDR_ADDR(base) ((base) + (0x0074))
#define SOC_UPACC_LOCH1_END_ADDR_ADDR(base) ((base) + (0x0078))
#define SOC_UPACC_LOCH2_END_ADDR_ADDR(base) ((base) + (0x007C))
#define SOC_UPACC_LOCH3_END_ADDR_ADDR(base) ((base) + (0x0080))
#define SOC_UPACC_LOCH4_END_ADDR_ADDR(base) ((base) + (0x0084))
#define SOC_UPACC_LOCH5_END_ADDR_ADDR(base) ((base) + (0x0088))
#define SOC_UPACC_LOCH6_END_ADDR_ADDR(base) ((base) + (0x008C))
#define SOC_UPACC_LOCH7_END_ADDR_ADDR(base) ((base) + (0x0090))
#define SOC_UPACC_LOCH8_END_ADDR_ADDR(base) ((base) + (0x0094))
#define SOC_UPACC_LOCH1_READ_ADDR_ADDR(base) ((base) + (0x0098))
#define SOC_UPACC_LOCH2_READ_ADDR_ADDR(base) ((base) + (0x009C))
#define SOC_UPACC_LOCH3_READ_ADDR_ADDR(base) ((base) + (0x00A0))
#define SOC_UPACC_LOCH4_READ_ADDR_ADDR(base) ((base) + (0x00A4))
#define SOC_UPACC_LOCH5_READ_ADDR_ADDR(base) ((base) + (0x00A8))
#define SOC_UPACC_LOCH6_READ_ADDR_ADDR(base) ((base) + (0x00AC))
#define SOC_UPACC_LOCH7_READ_ADDR_ADDR(base) ((base) + (0x00B0))
#define SOC_UPACC_LOCH8_READ_ADDR_ADDR(base) ((base) + (0x00B4))
#define SOC_UPACC_LOCH1_NUM_CFG_ADDR(base) ((base) + (0x00B8))
#define SOC_UPACC_LOCH2_NUM_CFG_ADDR(base) ((base) + (0x00BC))
#define SOC_UPACC_LOCH3_NUM_CFG_ADDR(base) ((base) + (0x00C0))
#define SOC_UPACC_LOCH4_NUM_CFG_ADDR(base) ((base) + (0x00C4))
#define SOC_UPACC_LOCH5_NUM_CFG_ADDR(base) ((base) + (0x00C8))
#define SOC_UPACC_LOCH6_NUM_CFG_ADDR(base) ((base) + (0x00CC))
#define SOC_UPACC_LOCH7_NUM_CFG_ADDR(base) ((base) + (0x00D0))
#define SOC_UPACC_LOCH8_NUM_CFG_ADDR(base) ((base) + (0x00D4))
#define SOC_UPACC_EN_ADDR(base) ((base) + (0x00D8))
#define SOC_UPACC_PDUARY_EN_E_ADDR(base) ((base) + (0x00DC))
#define SOC_UPACC_LOCH1_PDUARY_ADDR_ADDR(base) ((base) + (0x00E0))
#define SOC_UPACC_LOCH2_PDUARY_ADDR_ADDR(base) ((base) + (0x00E4))
#define SOC_UPACC_LOCH3_PDUARY_ADDR_ADDR(base) ((base) + (0x00E8))
#define SOC_UPACC_LOCH4_PDUARY_ADDR_ADDR(base) ((base) + (0x00EC))
#define SOC_UPACC_LOCH5_PDUARY_ADDR_ADDR(base) ((base) + (0x00F0))
#define SOC_UPACC_LOCH6_PDUARY_ADDR_ADDR(base) ((base) + (0x00F4))
#define SOC_UPACC_LOCH7_PDUARY_ADDR_ADDR(base) ((base) + (0x00F8))
#define SOC_UPACC_LOCH8_PDUARY_ADDR_ADDR(base) ((base) + (0x00FC))
#define SOC_UPACC_MAC_ENCAP_START_I1_ADDR(base) ((base) + (0x0100))
#define SOC_UPACC_LOCH_NUM_I1_ADDR(base) ((base) + (0x0104))
#define SOC_UPACC_HEAD0_EN_I1_ADDR(base) ((base) + (0x0108))
#define SOC_UPACC_E_RNTI_I1_ADDR(base) ((base) + (0x010C))
#define SOC_UPACC_SI_EN_I1_ADDR(base) ((base) + (0x0110))
#define SOC_UPACC_SI_DATA_I1_ADDR(base) ((base) + (0x0114))
#define SOC_UPACC_PADDING_LEN_I1_ADDR(base) ((base) + (0x0118))
#define SOC_UPACC_TSN_LEN_I1_ADDR(base) ((base) + (0x011C))
#define SOC_UPACC_PARAM_ADDR_I1_ADDR(base) ((base) + (0x0120))
#define SOC_UPACC_HARQ_BUF_ADDR_I1_ADDR(base) ((base) + (0x0124))
#define SOC_UPACC_BBP_DEST_ADDR_I1_ADDR(base) ((base) + (0x0128))
#define SOC_UPACC_TRANS_NUM_I1_ADDR(base) ((base) + (0x012C))
#define SOC_UPACC_INT_EN_I1_ADDR(base) ((base) + (0x0130))
#define SOC_UPACC_INT_RAW_I1_ADDR(base) ((base) + (0x0134))
#define SOC_UPACC_INT_MASK_I1_ADDR(base) ((base) + (0x0138))
#define SOC_UPACC_INT_CLR_I1_ADDR(base) ((base) + (0x013C))
#define SOC_UPACC_BUS_ERROR_ADDR_I1_ADDR(base) ((base) + (0x0140))
#define SOC_UPACC_EN_I1_ADDR(base) ((base) + (0x0144))
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_ADDR(base) ((base) + (0x0148))
#define SOC_UPACC_BBP_WRITE_ADDR_I1_ADDR(base) ((base) + (0x014C))
#define SOC_UPACC_PDUARY_EN_I1_ADDR(base) ((base) + (0x0150))
#define SOC_UPACC_MAC_ENCAP_START_I2_ADDR(base) ((base) + (0x0200))
#define SOC_UPACC_LOCH_NUM_I2_ADDR(base) ((base) + (0x0204))
#define SOC_UPACC_HEAD0_EN_I2_ADDR(base) ((base) + (0x0208))
#define SOC_UPACC_E_RNTI_I2_ADDR(base) ((base) + (0x020C))
#define SOC_UPACC_SI_EN_I2_ADDR(base) ((base) + (0x0210))
#define SOC_UPACC_SI_DATA_I2_ADDR(base) ((base) + (0x0214))
#define SOC_UPACC_PADDING_LEN_I2_ADDR(base) ((base) + (0x0218))
#define SOC_UPACC_TSN_LEN_I2_ADDR(base) ((base) + (0x021C))
#define SOC_UPACC_PARAM_ADDR_I2_ADDR(base) ((base) + (0x0220))
#define SOC_UPACC_HARQ_BUF_ADDR_I2_ADDR(base) ((base) + (0x0224))
#define SOC_UPACC_BBP_DEST_ADDR_I2_ADDR(base) ((base) + (0x0228))
#define SOC_UPACC_TRANS_NUM_I2_ADDR(base) ((base) + (0x022C))
#define SOC_UPACC_INT_EN_I2_ADDR(base) ((base) + (0x0230))
#define SOC_UPACC_INT_RAW_I2_ADDR(base) ((base) + (0x0234))
#define SOC_UPACC_INT_MASK_I2_ADDR(base) ((base) + (0x0238))
#define SOC_UPACC_INT_CLR_I2_ADDR(base) ((base) + (0x023C))
#define SOC_UPACC_BUS_ERROR_ADDR_I2_ADDR(base) ((base) + (0x0240))
#define SOC_UPACC_EN_I2_ADDR(base) ((base) + (0x0244))
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_ADDR(base) ((base) + (0x0248))
#define SOC_UPACC_BBP_WRITE_ADDR_I2_ADDR(base) ((base) + (0x024C))
#define SOC_UPACC_PDUARY_EN_I2_ADDR(base) ((base) + (0x0250))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mac_encap_start : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_UPACC_MAC_ENCAP_START_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_mac_encap_start_START (0)
#define SOC_UPACC_MAC_ENCAP_START_mac_encap_start_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch_num : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_UPACC_LOCH_NUM_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_loch_num_START (0)
#define SOC_UPACC_LOCH_NUM_loch_num_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddi0_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_DDI0_EN_UNION;
#endif
#define SOC_UPACC_DDI0_EN_ddi0_en_START (0)
#define SOC_UPACC_DDI0_EN_ddi0_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_SI_EN_UNION;
#endif
#define SOC_UPACC_SI_EN_si_en_START (0)
#define SOC_UPACC_SI_EN_si_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_hlid_data : 4;
        unsigned int si_hlbs_data : 4;
        unsigned int si_tebs_data : 5;
        unsigned int si_uph_data : 5;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_SI_DATA_UNION;
#endif
#define SOC_UPACC_SI_DATA_si_hlid_data_START (0)
#define SOC_UPACC_SI_DATA_si_hlid_data_END (3)
#define SOC_UPACC_SI_DATA_si_hlbs_data_START (4)
#define SOC_UPACC_SI_DATA_si_hlbs_data_END (7)
#define SOC_UPACC_SI_DATA_si_tebs_data_START (8)
#define SOC_UPACC_SI_DATA_si_tebs_data_END (12)
#define SOC_UPACC_SI_DATA_si_uph_data_START (13)
#define SOC_UPACC_SI_DATA_si_uph_data_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int padding_length : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_PADDING_LENGTH_UNION;
#endif
#define SOC_UPACC_PADDING_LENGTH_padding_length_START (0)
#define SOC_UPACC_PADDING_LENGTH_padding_length_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_trans_addr : 32;
    } reg;
} SOC_UPACC_ENCAP_TRANS_ADDR_UNION;
#endif
#define SOC_UPACC_ENCAP_TRANS_ADDR_encap_trans_addr_START (0)
#define SOC_UPACC_ENCAP_TRANS_ADDR_encap_trans_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_num : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_TRANS_NUM_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_trans_num_START (0)
#define SOC_UPACC_TRANS_NUM_trans_num_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_dest_addr : 32;
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_bbp_dest_addr_START (0)
#define SOC_UPACC_BBP_DEST_ADDR_bbp_dest_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_en : 1;
        unsigned int trans_end_en : 1;
        unsigned int addr1_error_en : 1;
        unsigned int addr2_error_en : 1;
        unsigned int addr3_error_en : 1;
        unsigned int addr4_error_en : 1;
        unsigned int addr5_error_en : 1;
        unsigned int addr6_error_en : 1;
        unsigned int addr7_error_en : 1;
        unsigned int addr8_error_en : 1;
        unsigned int num_error_en : 1;
        unsigned int encap_addr_error_en : 1;
        unsigned int dest_addr_error_en : 1;
        unsigned int bus_error_en : 1;
        unsigned int dsp_int_en : 1;
        unsigned int arm_int_en : 1;
        unsigned int pduary_addr1_error_en : 1;
        unsigned int pduary_addr2_error_en : 1;
        unsigned int pduary_addr3_error_en : 1;
        unsigned int pduary_addr4_error_en : 1;
        unsigned int pduary_addr5_error_en : 1;
        unsigned int pduary_addr6_error_en : 1;
        unsigned int pduary_addr7_error_en : 1;
        unsigned int pduary_addr8_error_en : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_UPACC_INT_EN_UNION;
#endif
#define SOC_UPACC_INT_EN_encap_end_en_START (0)
#define SOC_UPACC_INT_EN_encap_end_en_END (0)
#define SOC_UPACC_INT_EN_trans_end_en_START (1)
#define SOC_UPACC_INT_EN_trans_end_en_END (1)
#define SOC_UPACC_INT_EN_addr1_error_en_START (2)
#define SOC_UPACC_INT_EN_addr1_error_en_END (2)
#define SOC_UPACC_INT_EN_addr2_error_en_START (3)
#define SOC_UPACC_INT_EN_addr2_error_en_END (3)
#define SOC_UPACC_INT_EN_addr3_error_en_START (4)
#define SOC_UPACC_INT_EN_addr3_error_en_END (4)
#define SOC_UPACC_INT_EN_addr4_error_en_START (5)
#define SOC_UPACC_INT_EN_addr4_error_en_END (5)
#define SOC_UPACC_INT_EN_addr5_error_en_START (6)
#define SOC_UPACC_INT_EN_addr5_error_en_END (6)
#define SOC_UPACC_INT_EN_addr6_error_en_START (7)
#define SOC_UPACC_INT_EN_addr6_error_en_END (7)
#define SOC_UPACC_INT_EN_addr7_error_en_START (8)
#define SOC_UPACC_INT_EN_addr7_error_en_END (8)
#define SOC_UPACC_INT_EN_addr8_error_en_START (9)
#define SOC_UPACC_INT_EN_addr8_error_en_END (9)
#define SOC_UPACC_INT_EN_num_error_en_START (10)
#define SOC_UPACC_INT_EN_num_error_en_END (10)
#define SOC_UPACC_INT_EN_encap_addr_error_en_START (11)
#define SOC_UPACC_INT_EN_encap_addr_error_en_END (11)
#define SOC_UPACC_INT_EN_dest_addr_error_en_START (12)
#define SOC_UPACC_INT_EN_dest_addr_error_en_END (12)
#define SOC_UPACC_INT_EN_bus_error_en_START (13)
#define SOC_UPACC_INT_EN_bus_error_en_END (13)
#define SOC_UPACC_INT_EN_dsp_int_en_START (14)
#define SOC_UPACC_INT_EN_dsp_int_en_END (14)
#define SOC_UPACC_INT_EN_arm_int_en_START (15)
#define SOC_UPACC_INT_EN_arm_int_en_END (15)
#define SOC_UPACC_INT_EN_pduary_addr1_error_en_START (16)
#define SOC_UPACC_INT_EN_pduary_addr1_error_en_END (16)
#define SOC_UPACC_INT_EN_pduary_addr2_error_en_START (17)
#define SOC_UPACC_INT_EN_pduary_addr2_error_en_END (17)
#define SOC_UPACC_INT_EN_pduary_addr3_error_en_START (18)
#define SOC_UPACC_INT_EN_pduary_addr3_error_en_END (18)
#define SOC_UPACC_INT_EN_pduary_addr4_error_en_START (19)
#define SOC_UPACC_INT_EN_pduary_addr4_error_en_END (19)
#define SOC_UPACC_INT_EN_pduary_addr5_error_en_START (20)
#define SOC_UPACC_INT_EN_pduary_addr5_error_en_END (20)
#define SOC_UPACC_INT_EN_pduary_addr6_error_en_START (21)
#define SOC_UPACC_INT_EN_pduary_addr6_error_en_END (21)
#define SOC_UPACC_INT_EN_pduary_addr7_error_en_START (22)
#define SOC_UPACC_INT_EN_pduary_addr7_error_en_END (22)
#define SOC_UPACC_INT_EN_pduary_addr8_error_en_START (23)
#define SOC_UPACC_INT_EN_pduary_addr8_error_en_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_raw : 1;
        unsigned int trans_end_raw : 1;
        unsigned int addr1_error_raw : 1;
        unsigned int addr2_error_raw : 1;
        unsigned int addr3_error_raw : 1;
        unsigned int addr4_error_raw : 1;
        unsigned int addr5_error_raw : 1;
        unsigned int addr6_error_raw : 1;
        unsigned int addr7_error_raw : 1;
        unsigned int addr8_error_raw : 1;
        unsigned int num_error_raw : 1;
        unsigned int encap_addr_error_raw : 1;
        unsigned int dest_addr_error_raw : 1;
        unsigned int bus_error_raw : 1;
        unsigned int dsp_int_raw : 1;
        unsigned int arm_int_raw : 1;
        unsigned int pduary_addr1_error_raw : 1;
        unsigned int pduary_addr2_error_raw : 1;
        unsigned int pduary_addr3_error_raw : 1;
        unsigned int pduary_addr4_error_raw : 1;
        unsigned int pduary_addr5_error_raw : 1;
        unsigned int pduary_addr6_error_raw : 1;
        unsigned int pduary_addr7_error_raw : 1;
        unsigned int pduary_addr8_error_raw : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_UPACC_INT_RAW_UNION;
#endif
#define SOC_UPACC_INT_RAW_encap_end_raw_START (0)
#define SOC_UPACC_INT_RAW_encap_end_raw_END (0)
#define SOC_UPACC_INT_RAW_trans_end_raw_START (1)
#define SOC_UPACC_INT_RAW_trans_end_raw_END (1)
#define SOC_UPACC_INT_RAW_addr1_error_raw_START (2)
#define SOC_UPACC_INT_RAW_addr1_error_raw_END (2)
#define SOC_UPACC_INT_RAW_addr2_error_raw_START (3)
#define SOC_UPACC_INT_RAW_addr2_error_raw_END (3)
#define SOC_UPACC_INT_RAW_addr3_error_raw_START (4)
#define SOC_UPACC_INT_RAW_addr3_error_raw_END (4)
#define SOC_UPACC_INT_RAW_addr4_error_raw_START (5)
#define SOC_UPACC_INT_RAW_addr4_error_raw_END (5)
#define SOC_UPACC_INT_RAW_addr5_error_raw_START (6)
#define SOC_UPACC_INT_RAW_addr5_error_raw_END (6)
#define SOC_UPACC_INT_RAW_addr6_error_raw_START (7)
#define SOC_UPACC_INT_RAW_addr6_error_raw_END (7)
#define SOC_UPACC_INT_RAW_addr7_error_raw_START (8)
#define SOC_UPACC_INT_RAW_addr7_error_raw_END (8)
#define SOC_UPACC_INT_RAW_addr8_error_raw_START (9)
#define SOC_UPACC_INT_RAW_addr8_error_raw_END (9)
#define SOC_UPACC_INT_RAW_num_error_raw_START (10)
#define SOC_UPACC_INT_RAW_num_error_raw_END (10)
#define SOC_UPACC_INT_RAW_encap_addr_error_raw_START (11)
#define SOC_UPACC_INT_RAW_encap_addr_error_raw_END (11)
#define SOC_UPACC_INT_RAW_dest_addr_error_raw_START (12)
#define SOC_UPACC_INT_RAW_dest_addr_error_raw_END (12)
#define SOC_UPACC_INT_RAW_bus_error_raw_START (13)
#define SOC_UPACC_INT_RAW_bus_error_raw_END (13)
#define SOC_UPACC_INT_RAW_dsp_int_raw_START (14)
#define SOC_UPACC_INT_RAW_dsp_int_raw_END (14)
#define SOC_UPACC_INT_RAW_arm_int_raw_START (15)
#define SOC_UPACC_INT_RAW_arm_int_raw_END (15)
#define SOC_UPACC_INT_RAW_pduary_addr1_error_raw_START (16)
#define SOC_UPACC_INT_RAW_pduary_addr1_error_raw_END (16)
#define SOC_UPACC_INT_RAW_pduary_addr2_error_raw_START (17)
#define SOC_UPACC_INT_RAW_pduary_addr2_error_raw_END (17)
#define SOC_UPACC_INT_RAW_pduary_addr3_error_raw_START (18)
#define SOC_UPACC_INT_RAW_pduary_addr3_error_raw_END (18)
#define SOC_UPACC_INT_RAW_pduary_addr4_error_raw_START (19)
#define SOC_UPACC_INT_RAW_pduary_addr4_error_raw_END (19)
#define SOC_UPACC_INT_RAW_pduary_addr5_error_raw_START (20)
#define SOC_UPACC_INT_RAW_pduary_addr5_error_raw_END (20)
#define SOC_UPACC_INT_RAW_pduary_addr6_error_raw_START (21)
#define SOC_UPACC_INT_RAW_pduary_addr6_error_raw_END (21)
#define SOC_UPACC_INT_RAW_pduary_addr7_error_raw_START (22)
#define SOC_UPACC_INT_RAW_pduary_addr7_error_raw_END (22)
#define SOC_UPACC_INT_RAW_pduary_addr8_error_raw_START (23)
#define SOC_UPACC_INT_RAW_pduary_addr8_error_raw_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_mask : 1;
        unsigned int trans_end_mask : 1;
        unsigned int addr1_error_mask : 1;
        unsigned int addr2_error_mask : 1;
        unsigned int addr3_error_mask : 1;
        unsigned int addr4_error_mask : 1;
        unsigned int addr5_error_mask : 1;
        unsigned int addr6_error_mask : 1;
        unsigned int addr7_error_mask : 1;
        unsigned int addr8_error_mask : 1;
        unsigned int num_error_mask : 1;
        unsigned int encap_addr_error_mask : 1;
        unsigned int dest_addr_error_mask : 1;
        unsigned int bus_error_mask : 1;
        unsigned int dsp_int_mask : 1;
        unsigned int arm_int_mask : 1;
        unsigned int pduary_addr1_error_mask : 1;
        unsigned int pduary_addr2_error_mask : 1;
        unsigned int pduary_addr3_error_mask : 1;
        unsigned int pduary_addr4_error_mask : 1;
        unsigned int pduary_addr5_error_mask : 1;
        unsigned int pduary_addr6_error_mask : 1;
        unsigned int pduary_addr7_error_mask : 1;
        unsigned int pduary_addr8_error_mask : 1;
        unsigned int reserved : 8;
    } reg;
} SOC_UPACC_INT_MASK_UNION;
#endif
#define SOC_UPACC_INT_MASK_encap_end_mask_START (0)
#define SOC_UPACC_INT_MASK_encap_end_mask_END (0)
#define SOC_UPACC_INT_MASK_trans_end_mask_START (1)
#define SOC_UPACC_INT_MASK_trans_end_mask_END (1)
#define SOC_UPACC_INT_MASK_addr1_error_mask_START (2)
#define SOC_UPACC_INT_MASK_addr1_error_mask_END (2)
#define SOC_UPACC_INT_MASK_addr2_error_mask_START (3)
#define SOC_UPACC_INT_MASK_addr2_error_mask_END (3)
#define SOC_UPACC_INT_MASK_addr3_error_mask_START (4)
#define SOC_UPACC_INT_MASK_addr3_error_mask_END (4)
#define SOC_UPACC_INT_MASK_addr4_error_mask_START (5)
#define SOC_UPACC_INT_MASK_addr4_error_mask_END (5)
#define SOC_UPACC_INT_MASK_addr5_error_mask_START (6)
#define SOC_UPACC_INT_MASK_addr5_error_mask_END (6)
#define SOC_UPACC_INT_MASK_addr6_error_mask_START (7)
#define SOC_UPACC_INT_MASK_addr6_error_mask_END (7)
#define SOC_UPACC_INT_MASK_addr7_error_mask_START (8)
#define SOC_UPACC_INT_MASK_addr7_error_mask_END (8)
#define SOC_UPACC_INT_MASK_addr8_error_mask_START (9)
#define SOC_UPACC_INT_MASK_addr8_error_mask_END (9)
#define SOC_UPACC_INT_MASK_num_error_mask_START (10)
#define SOC_UPACC_INT_MASK_num_error_mask_END (10)
#define SOC_UPACC_INT_MASK_encap_addr_error_mask_START (11)
#define SOC_UPACC_INT_MASK_encap_addr_error_mask_END (11)
#define SOC_UPACC_INT_MASK_dest_addr_error_mask_START (12)
#define SOC_UPACC_INT_MASK_dest_addr_error_mask_END (12)
#define SOC_UPACC_INT_MASK_bus_error_mask_START (13)
#define SOC_UPACC_INT_MASK_bus_error_mask_END (13)
#define SOC_UPACC_INT_MASK_dsp_int_mask_START (14)
#define SOC_UPACC_INT_MASK_dsp_int_mask_END (14)
#define SOC_UPACC_INT_MASK_arm_int_mask_START (15)
#define SOC_UPACC_INT_MASK_arm_int_mask_END (15)
#define SOC_UPACC_INT_MASK_pduary_addr1_error_mask_START (16)
#define SOC_UPACC_INT_MASK_pduary_addr1_error_mask_END (16)
#define SOC_UPACC_INT_MASK_pduary_addr2_error_mask_START (17)
#define SOC_UPACC_INT_MASK_pduary_addr2_error_mask_END (17)
#define SOC_UPACC_INT_MASK_pduary_addr3_error_mask_START (18)
#define SOC_UPACC_INT_MASK_pduary_addr3_error_mask_END (18)
#define SOC_UPACC_INT_MASK_pduary_addr4_error_mask_START (19)
#define SOC_UPACC_INT_MASK_pduary_addr4_error_mask_END (19)
#define SOC_UPACC_INT_MASK_pduary_addr5_error_mask_START (20)
#define SOC_UPACC_INT_MASK_pduary_addr5_error_mask_END (20)
#define SOC_UPACC_INT_MASK_pduary_addr6_error_mask_START (21)
#define SOC_UPACC_INT_MASK_pduary_addr6_error_mask_END (21)
#define SOC_UPACC_INT_MASK_pduary_addr7_error_mask_START (22)
#define SOC_UPACC_INT_MASK_pduary_addr7_error_mask_END (22)
#define SOC_UPACC_INT_MASK_pduary_addr8_error_mask_START (23)
#define SOC_UPACC_INT_MASK_pduary_addr8_error_mask_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_clr : 1;
        unsigned int trans_end_clr : 1;
        unsigned int addr1_error_clr : 1;
        unsigned int addr2_error_clr : 1;
        unsigned int addr3_error_clr : 1;
        unsigned int addr4_error_clr : 1;
        unsigned int addr5_error_clr : 1;
        unsigned int addr6_error_clr : 1;
        unsigned int addr7_error_clr : 1;
        unsigned int addr8_error_clr : 1;
        unsigned int num_error_clr : 1;
        unsigned int encap_addr_error_clr : 1;
        unsigned int dest_addr_error_clr : 1;
        unsigned int bus_error_clr : 1;
        unsigned int reserved_0 : 1;
        unsigned int reserved_1 : 1;
        unsigned int pduary_addr1_error_clr : 1;
        unsigned int pduary_addr2_error_clr : 1;
        unsigned int pduary_addr3_error_clr : 1;
        unsigned int pduary_addr4_error_clr : 1;
        unsigned int pduary_addr5_error_clr : 1;
        unsigned int pduary_addr6_error_clr : 1;
        unsigned int pduary_addr7_error_clr : 1;
        unsigned int pduary_addr8_error_clr : 1;
        unsigned int reserved_2 : 8;
    } reg;
} SOC_UPACC_INT_CLR_UNION;
#endif
#define SOC_UPACC_INT_CLR_encap_end_clr_START (0)
#define SOC_UPACC_INT_CLR_encap_end_clr_END (0)
#define SOC_UPACC_INT_CLR_trans_end_clr_START (1)
#define SOC_UPACC_INT_CLR_trans_end_clr_END (1)
#define SOC_UPACC_INT_CLR_addr1_error_clr_START (2)
#define SOC_UPACC_INT_CLR_addr1_error_clr_END (2)
#define SOC_UPACC_INT_CLR_addr2_error_clr_START (3)
#define SOC_UPACC_INT_CLR_addr2_error_clr_END (3)
#define SOC_UPACC_INT_CLR_addr3_error_clr_START (4)
#define SOC_UPACC_INT_CLR_addr3_error_clr_END (4)
#define SOC_UPACC_INT_CLR_addr4_error_clr_START (5)
#define SOC_UPACC_INT_CLR_addr4_error_clr_END (5)
#define SOC_UPACC_INT_CLR_addr5_error_clr_START (6)
#define SOC_UPACC_INT_CLR_addr5_error_clr_END (6)
#define SOC_UPACC_INT_CLR_addr6_error_clr_START (7)
#define SOC_UPACC_INT_CLR_addr6_error_clr_END (7)
#define SOC_UPACC_INT_CLR_addr7_error_clr_START (8)
#define SOC_UPACC_INT_CLR_addr7_error_clr_END (8)
#define SOC_UPACC_INT_CLR_addr8_error_clr_START (9)
#define SOC_UPACC_INT_CLR_addr8_error_clr_END (9)
#define SOC_UPACC_INT_CLR_num_error_clr_START (10)
#define SOC_UPACC_INT_CLR_num_error_clr_END (10)
#define SOC_UPACC_INT_CLR_encap_addr_error_clr_START (11)
#define SOC_UPACC_INT_CLR_encap_addr_error_clr_END (11)
#define SOC_UPACC_INT_CLR_dest_addr_error_clr_START (12)
#define SOC_UPACC_INT_CLR_dest_addr_error_clr_END (12)
#define SOC_UPACC_INT_CLR_bus_error_clr_START (13)
#define SOC_UPACC_INT_CLR_bus_error_clr_END (13)
#define SOC_UPACC_INT_CLR_pduary_addr1_error_clr_START (16)
#define SOC_UPACC_INT_CLR_pduary_addr1_error_clr_END (16)
#define SOC_UPACC_INT_CLR_pduary_addr2_error_clr_START (17)
#define SOC_UPACC_INT_CLR_pduary_addr2_error_clr_END (17)
#define SOC_UPACC_INT_CLR_pduary_addr3_error_clr_START (18)
#define SOC_UPACC_INT_CLR_pduary_addr3_error_clr_END (18)
#define SOC_UPACC_INT_CLR_pduary_addr4_error_clr_START (19)
#define SOC_UPACC_INT_CLR_pduary_addr4_error_clr_END (19)
#define SOC_UPACC_INT_CLR_pduary_addr5_error_clr_START (20)
#define SOC_UPACC_INT_CLR_pduary_addr5_error_clr_END (20)
#define SOC_UPACC_INT_CLR_pduary_addr6_error_clr_START (21)
#define SOC_UPACC_INT_CLR_pduary_addr6_error_clr_END (21)
#define SOC_UPACC_INT_CLR_pduary_addr7_error_clr_START (22)
#define SOC_UPACC_INT_CLR_pduary_addr7_error_clr_END (22)
#define SOC_UPACC_INT_CLR_pduary_addr8_error_clr_START (23)
#define SOC_UPACC_INT_CLR_pduary_addr8_error_clr_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bus_error_addr : 32;
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_bus_error_addr_START (0)
#define SOC_UPACC_BUS_ERROR_ADDR_bus_error_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn1 : 6;
        unsigned int n1 : 6;
        unsigned int ddi1 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH1_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH1_PARAM_tsn1_START (0)
#define SOC_UPACC_LOCH1_PARAM_tsn1_END (5)
#define SOC_UPACC_LOCH1_PARAM_n1_START (6)
#define SOC_UPACC_LOCH1_PARAM_n1_END (11)
#define SOC_UPACC_LOCH1_PARAM_ddi1_START (12)
#define SOC_UPACC_LOCH1_PARAM_ddi1_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn2 : 6;
        unsigned int n2 : 6;
        unsigned int ddi2 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH2_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH2_PARAM_tsn2_START (0)
#define SOC_UPACC_LOCH2_PARAM_tsn2_END (5)
#define SOC_UPACC_LOCH2_PARAM_n2_START (6)
#define SOC_UPACC_LOCH2_PARAM_n2_END (11)
#define SOC_UPACC_LOCH2_PARAM_ddi2_START (12)
#define SOC_UPACC_LOCH2_PARAM_ddi2_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn3 : 6;
        unsigned int n3 : 6;
        unsigned int ddi3 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH3_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH3_PARAM_tsn3_START (0)
#define SOC_UPACC_LOCH3_PARAM_tsn3_END (5)
#define SOC_UPACC_LOCH3_PARAM_n3_START (6)
#define SOC_UPACC_LOCH3_PARAM_n3_END (11)
#define SOC_UPACC_LOCH3_PARAM_ddi3_START (12)
#define SOC_UPACC_LOCH3_PARAM_ddi3_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn4 : 6;
        unsigned int n4 : 6;
        unsigned int ddi4 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH4_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH4_PARAM_tsn4_START (0)
#define SOC_UPACC_LOCH4_PARAM_tsn4_END (5)
#define SOC_UPACC_LOCH4_PARAM_n4_START (6)
#define SOC_UPACC_LOCH4_PARAM_n4_END (11)
#define SOC_UPACC_LOCH4_PARAM_ddi4_START (12)
#define SOC_UPACC_LOCH4_PARAM_ddi4_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn5 : 6;
        unsigned int n5 : 6;
        unsigned int ddi5 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH5_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH5_PARAM_tsn5_START (0)
#define SOC_UPACC_LOCH5_PARAM_tsn5_END (5)
#define SOC_UPACC_LOCH5_PARAM_n5_START (6)
#define SOC_UPACC_LOCH5_PARAM_n5_END (11)
#define SOC_UPACC_LOCH5_PARAM_ddi5_START (12)
#define SOC_UPACC_LOCH5_PARAM_ddi5_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn6 : 6;
        unsigned int n6 : 6;
        unsigned int ddi6 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH6_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH6_PARAM_tsn6_START (0)
#define SOC_UPACC_LOCH6_PARAM_tsn6_END (5)
#define SOC_UPACC_LOCH6_PARAM_n6_START (6)
#define SOC_UPACC_LOCH6_PARAM_n6_END (11)
#define SOC_UPACC_LOCH6_PARAM_ddi6_START (12)
#define SOC_UPACC_LOCH6_PARAM_ddi6_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn7 : 6;
        unsigned int n7 : 6;
        unsigned int ddi7 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH7_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH7_PARAM_tsn7_START (0)
#define SOC_UPACC_LOCH7_PARAM_tsn7_END (5)
#define SOC_UPACC_LOCH7_PARAM_n7_START (6)
#define SOC_UPACC_LOCH7_PARAM_n7_END (11)
#define SOC_UPACC_LOCH7_PARAM_ddi7_START (12)
#define SOC_UPACC_LOCH7_PARAM_ddi7_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn8 : 6;
        unsigned int n8 : 6;
        unsigned int ddi8 : 6;
        unsigned int reserved : 14;
    } reg;
} SOC_UPACC_LOCH8_PARAM_UNION;
#endif
#define SOC_UPACC_LOCH8_PARAM_tsn8_START (0)
#define SOC_UPACC_LOCH8_PARAM_tsn8_END (5)
#define SOC_UPACC_LOCH8_PARAM_n8_START (6)
#define SOC_UPACC_LOCH8_PARAM_n8_END (11)
#define SOC_UPACC_LOCH8_PARAM_ddi8_START (12)
#define SOC_UPACC_LOCH8_PARAM_ddi8_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch1_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH1_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_START_ADDR_loch1_start_addr_START (0)
#define SOC_UPACC_LOCH1_START_ADDR_loch1_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch2_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH2_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_START_ADDR_loch2_start_addr_START (0)
#define SOC_UPACC_LOCH2_START_ADDR_loch2_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch3_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH3_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_START_ADDR_loch3_start_addr_START (0)
#define SOC_UPACC_LOCH3_START_ADDR_loch3_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch4_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH4_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_START_ADDR_loch4_start_addr_START (0)
#define SOC_UPACC_LOCH4_START_ADDR_loch4_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch5_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH5_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_START_ADDR_loch5_start_addr_START (0)
#define SOC_UPACC_LOCH5_START_ADDR_loch5_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch6_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH6_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_START_ADDR_loch6_start_addr_START (0)
#define SOC_UPACC_LOCH6_START_ADDR_loch6_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch7_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH7_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_START_ADDR_loch7_start_addr_START (0)
#define SOC_UPACC_LOCH7_START_ADDR_loch7_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch8_start_addr : 32;
    } reg;
} SOC_UPACC_LOCH8_START_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_START_ADDR_loch8_start_addr_START (0)
#define SOC_UPACC_LOCH8_START_ADDR_loch8_start_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch1_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH1_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_END_ADDR_loch1_end_addr_START (0)
#define SOC_UPACC_LOCH1_END_ADDR_loch1_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch2_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH2_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_END_ADDR_loch2_end_addr_START (0)
#define SOC_UPACC_LOCH2_END_ADDR_loch2_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch3_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH3_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_END_ADDR_loch3_end_addr_START (0)
#define SOC_UPACC_LOCH3_END_ADDR_loch3_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch4_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH4_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_END_ADDR_loch4_end_addr_START (0)
#define SOC_UPACC_LOCH4_END_ADDR_loch4_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch5_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH5_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_END_ADDR_loch5_end_addr_START (0)
#define SOC_UPACC_LOCH5_END_ADDR_loch5_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch6_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH6_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_END_ADDR_loch6_end_addr_START (0)
#define SOC_UPACC_LOCH6_END_ADDR_loch6_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch7_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH7_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_END_ADDR_loch7_end_addr_START (0)
#define SOC_UPACC_LOCH7_END_ADDR_loch7_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch8_end_addr : 32;
    } reg;
} SOC_UPACC_LOCH8_END_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_END_ADDR_loch8_end_addr_START (0)
#define SOC_UPACC_LOCH8_END_ADDR_loch8_end_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch1_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH1_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_READ_ADDR_loch1_read_addr_START (0)
#define SOC_UPACC_LOCH1_READ_ADDR_loch1_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch2_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH2_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_READ_ADDR_loch2_read_addr_START (0)
#define SOC_UPACC_LOCH2_READ_ADDR_loch2_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch3_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH3_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_READ_ADDR_loch3_read_addr_START (0)
#define SOC_UPACC_LOCH3_READ_ADDR_loch3_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch4_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH4_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_READ_ADDR_loch4_read_addr_START (0)
#define SOC_UPACC_LOCH4_READ_ADDR_loch4_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch5_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH5_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_READ_ADDR_loch5_read_addr_START (0)
#define SOC_UPACC_LOCH5_READ_ADDR_loch5_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch6_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH6_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_READ_ADDR_loch6_read_addr_START (0)
#define SOC_UPACC_LOCH6_READ_ADDR_loch6_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch7_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH7_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_READ_ADDR_loch7_read_addr_START (0)
#define SOC_UPACC_LOCH7_READ_ADDR_loch7_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch8_read_addr : 32;
    } reg;
} SOC_UPACC_LOCH8_READ_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_READ_ADDR_loch8_read_addr_START (0)
#define SOC_UPACC_LOCH8_READ_ADDR_loch8_read_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch1_read_num : 16;
        unsigned int loch1_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH1_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_read_num_START (0)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_read_num_END (15)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_pduary_num_START (16)
#define SOC_UPACC_LOCH1_NUM_CFG_loch1_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch2_read_num : 16;
        unsigned int loch2_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH2_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_read_num_START (0)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_read_num_END (15)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_pduary_num_START (16)
#define SOC_UPACC_LOCH2_NUM_CFG_loch2_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch3_read_num : 16;
        unsigned int loch3_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH3_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_read_num_START (0)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_read_num_END (15)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_pduary_num_START (16)
#define SOC_UPACC_LOCH3_NUM_CFG_loch3_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch4_read_num : 16;
        unsigned int loch4_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH4_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_read_num_START (0)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_read_num_END (15)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_pduary_num_START (16)
#define SOC_UPACC_LOCH4_NUM_CFG_loch4_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch5_read_num : 16;
        unsigned int loch5_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH5_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_read_num_START (0)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_read_num_END (15)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_pduary_num_START (16)
#define SOC_UPACC_LOCH5_NUM_CFG_loch5_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch6_read_num : 16;
        unsigned int loch6_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH6_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_read_num_START (0)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_read_num_END (15)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_pduary_num_START (16)
#define SOC_UPACC_LOCH6_NUM_CFG_loch6_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch7_read_num : 16;
        unsigned int loch7_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH7_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_read_num_START (0)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_read_num_END (15)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_pduary_num_START (16)
#define SOC_UPACC_LOCH7_NUM_CFG_loch7_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch8_read_num : 16;
        unsigned int loch8_pduary_num : 16;
    } reg;
} SOC_UPACC_LOCH8_NUM_CFG_UNION;
#endif
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_read_num_START (0)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_read_num_END (15)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_pduary_num_START (16)
#define SOC_UPACC_LOCH8_NUM_CFG_loch8_pduary_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int upacc_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_EN_UNION;
#endif
#define SOC_UPACC_EN_upacc_en_START (0)
#define SOC_UPACC_EN_upacc_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pduary_en_e : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_PDUARY_EN_E_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_E_pduary_en_e_START (0)
#define SOC_UPACC_PDUARY_EN_E_pduary_en_e_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch1_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH1_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH1_PDUARY_ADDR_loch1_pduary_addr_START (0)
#define SOC_UPACC_LOCH1_PDUARY_ADDR_loch1_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch2_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH2_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH2_PDUARY_ADDR_loch2_pduary_addr_START (0)
#define SOC_UPACC_LOCH2_PDUARY_ADDR_loch2_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch3_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH3_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH3_PDUARY_ADDR_loch3_pduary_addr_START (0)
#define SOC_UPACC_LOCH3_PDUARY_ADDR_loch3_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch4_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH4_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH4_PDUARY_ADDR_loch4_pduary_addr_START (0)
#define SOC_UPACC_LOCH4_PDUARY_ADDR_loch4_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch5_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH5_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH5_PDUARY_ADDR_loch5_pduary_addr_START (0)
#define SOC_UPACC_LOCH5_PDUARY_ADDR_loch5_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch6_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH6_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH6_PDUARY_ADDR_loch6_pduary_addr_START (0)
#define SOC_UPACC_LOCH6_PDUARY_ADDR_loch6_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch7_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH7_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH7_PDUARY_ADDR_loch7_pduary_addr_START (0)
#define SOC_UPACC_LOCH7_PDUARY_ADDR_loch7_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch8_pduary_addr : 32;
    } reg;
} SOC_UPACC_LOCH8_PDUARY_ADDR_UNION;
#endif
#define SOC_UPACC_LOCH8_PDUARY_ADDR_loch8_pduary_addr_START (0)
#define SOC_UPACC_LOCH8_PDUARY_ADDR_loch8_pduary_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mac_encap_start_i1 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_UPACC_MAC_ENCAP_START_I1_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_I1_mac_encap_start_i1_START (0)
#define SOC_UPACC_MAC_ENCAP_START_I1_mac_encap_start_i1_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch_num_i1 : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_UPACC_LOCH_NUM_I1_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_I1_loch_num_i1_START (0)
#define SOC_UPACC_LOCH_NUM_I1_loch_num_i1_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int head0_en_i1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_HEAD0_EN_I1_UNION;
#endif
#define SOC_UPACC_HEAD0_EN_I1_head0_en_i1_START (0)
#define SOC_UPACC_HEAD0_EN_I1_head0_en_i1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int e_rnti_i1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_E_RNTI_I1_UNION;
#endif
#define SOC_UPACC_E_RNTI_I1_e_rnti_i1_START (0)
#define SOC_UPACC_E_RNTI_I1_e_rnti_i1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_en_i1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_SI_EN_I1_UNION;
#endif
#define SOC_UPACC_SI_EN_I1_si_en_i1_START (0)
#define SOC_UPACC_SI_EN_I1_si_en_i1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_hlid_i1 : 4;
        unsigned int si_hlbs_i1 : 4;
        unsigned int si_tebs_i1 : 5;
        unsigned int reserved_0 : 3;
        unsigned int si_uph_i1 : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_UPACC_SI_DATA_I1_UNION;
#endif
#define SOC_UPACC_SI_DATA_I1_si_hlid_i1_START (0)
#define SOC_UPACC_SI_DATA_I1_si_hlid_i1_END (3)
#define SOC_UPACC_SI_DATA_I1_si_hlbs_i1_START (4)
#define SOC_UPACC_SI_DATA_I1_si_hlbs_i1_END (7)
#define SOC_UPACC_SI_DATA_I1_si_tebs_i1_START (8)
#define SOC_UPACC_SI_DATA_I1_si_tebs_i1_END (12)
#define SOC_UPACC_SI_DATA_I1_si_uph_i1_START (16)
#define SOC_UPACC_SI_DATA_I1_si_uph_i1_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int padding_len_i1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_PADDING_LEN_I1_UNION;
#endif
#define SOC_UPACC_PADDING_LEN_I1_padding_len_i1_START (0)
#define SOC_UPACC_PADDING_LEN_I1_padding_len_i1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn_len_i1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_TSN_LEN_I1_UNION;
#endif
#define SOC_UPACC_TSN_LEN_I1_tsn_len_i1_START (0)
#define SOC_UPACC_TSN_LEN_I1_tsn_len_i1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int param_addr_i1 : 32;
    } reg;
} SOC_UPACC_PARAM_ADDR_I1_UNION;
#endif
#define SOC_UPACC_PARAM_ADDR_I1_param_addr_i1_START (0)
#define SOC_UPACC_PARAM_ADDR_I1_param_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hraq_buf_addr_i1 : 32;
    } reg;
} SOC_UPACC_HARQ_BUF_ADDR_I1_UNION;
#endif
#define SOC_UPACC_HARQ_BUF_ADDR_I1_hraq_buf_addr_i1_START (0)
#define SOC_UPACC_HARQ_BUF_ADDR_I1_hraq_buf_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_dest_addr_i1 : 32;
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_I1_bbp_dest_addr_i1_START (0)
#define SOC_UPACC_BBP_DEST_ADDR_I1_bbp_dest_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_num_i1 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_TRANS_NUM_I1_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_I1_trans_num_i1_START (0)
#define SOC_UPACC_TRANS_NUM_I1_trans_num_i1_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_en_i1 : 1;
        unsigned int trans_end_en_i1 : 1;
        unsigned int addr1_error_en_i1 : 1;
        unsigned int addr2_error_en_i1 : 1;
        unsigned int addr3_error_en_i1 : 1;
        unsigned int addr4_error_en_i1 : 1;
        unsigned int addr5_error_en_i1 : 1;
        unsigned int addr6_error_en_i1 : 1;
        unsigned int addr7_error_en_i1 : 1;
        unsigned int addr8_error_en_i1 : 1;
        unsigned int addr9_error_en_i1 : 1;
        unsigned int addr10_error_en_i1 : 1;
        unsigned int addr11_error_en_i1 : 1;
        unsigned int addr12_error_en_i1 : 1;
        unsigned int addr13_error_en_i1 : 1;
        unsigned int addr14_error_en_i1 : 1;
        unsigned int param_addr_error_en_i1 : 1;
        unsigned int harq_addr_error_en_i1 : 1;
        unsigned int dest_addr_eorr_en_i1 : 1;
        unsigned int loch_num_error_en_i1 : 1;
        unsigned int bus_error_en_i1 : 1;
        unsigned int dsp_int_en_i1 : 1;
        unsigned int arm_int_en_i1 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_EN_I1_UNION;
#endif
#define SOC_UPACC_INT_EN_I1_encap_end_en_i1_START (0)
#define SOC_UPACC_INT_EN_I1_encap_end_en_i1_END (0)
#define SOC_UPACC_INT_EN_I1_trans_end_en_i1_START (1)
#define SOC_UPACC_INT_EN_I1_trans_end_en_i1_END (1)
#define SOC_UPACC_INT_EN_I1_addr1_error_en_i1_START (2)
#define SOC_UPACC_INT_EN_I1_addr1_error_en_i1_END (2)
#define SOC_UPACC_INT_EN_I1_addr2_error_en_i1_START (3)
#define SOC_UPACC_INT_EN_I1_addr2_error_en_i1_END (3)
#define SOC_UPACC_INT_EN_I1_addr3_error_en_i1_START (4)
#define SOC_UPACC_INT_EN_I1_addr3_error_en_i1_END (4)
#define SOC_UPACC_INT_EN_I1_addr4_error_en_i1_START (5)
#define SOC_UPACC_INT_EN_I1_addr4_error_en_i1_END (5)
#define SOC_UPACC_INT_EN_I1_addr5_error_en_i1_START (6)
#define SOC_UPACC_INT_EN_I1_addr5_error_en_i1_END (6)
#define SOC_UPACC_INT_EN_I1_addr6_error_en_i1_START (7)
#define SOC_UPACC_INT_EN_I1_addr6_error_en_i1_END (7)
#define SOC_UPACC_INT_EN_I1_addr7_error_en_i1_START (8)
#define SOC_UPACC_INT_EN_I1_addr7_error_en_i1_END (8)
#define SOC_UPACC_INT_EN_I1_addr8_error_en_i1_START (9)
#define SOC_UPACC_INT_EN_I1_addr8_error_en_i1_END (9)
#define SOC_UPACC_INT_EN_I1_addr9_error_en_i1_START (10)
#define SOC_UPACC_INT_EN_I1_addr9_error_en_i1_END (10)
#define SOC_UPACC_INT_EN_I1_addr10_error_en_i1_START (11)
#define SOC_UPACC_INT_EN_I1_addr10_error_en_i1_END (11)
#define SOC_UPACC_INT_EN_I1_addr11_error_en_i1_START (12)
#define SOC_UPACC_INT_EN_I1_addr11_error_en_i1_END (12)
#define SOC_UPACC_INT_EN_I1_addr12_error_en_i1_START (13)
#define SOC_UPACC_INT_EN_I1_addr12_error_en_i1_END (13)
#define SOC_UPACC_INT_EN_I1_addr13_error_en_i1_START (14)
#define SOC_UPACC_INT_EN_I1_addr13_error_en_i1_END (14)
#define SOC_UPACC_INT_EN_I1_addr14_error_en_i1_START (15)
#define SOC_UPACC_INT_EN_I1_addr14_error_en_i1_END (15)
#define SOC_UPACC_INT_EN_I1_param_addr_error_en_i1_START (16)
#define SOC_UPACC_INT_EN_I1_param_addr_error_en_i1_END (16)
#define SOC_UPACC_INT_EN_I1_harq_addr_error_en_i1_START (17)
#define SOC_UPACC_INT_EN_I1_harq_addr_error_en_i1_END (17)
#define SOC_UPACC_INT_EN_I1_dest_addr_eorr_en_i1_START (18)
#define SOC_UPACC_INT_EN_I1_dest_addr_eorr_en_i1_END (18)
#define SOC_UPACC_INT_EN_I1_loch_num_error_en_i1_START (19)
#define SOC_UPACC_INT_EN_I1_loch_num_error_en_i1_END (19)
#define SOC_UPACC_INT_EN_I1_bus_error_en_i1_START (20)
#define SOC_UPACC_INT_EN_I1_bus_error_en_i1_END (20)
#define SOC_UPACC_INT_EN_I1_dsp_int_en_i1_START (21)
#define SOC_UPACC_INT_EN_I1_dsp_int_en_i1_END (21)
#define SOC_UPACC_INT_EN_I1_arm_int_en_i1_START (22)
#define SOC_UPACC_INT_EN_I1_arm_int_en_i1_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_raw_i1 : 1;
        unsigned int trans_end_raw_i1 : 1;
        unsigned int addr1_error_raw_i1 : 1;
        unsigned int addr2_error_raw_i1 : 1;
        unsigned int addr3_error_raw_i1 : 1;
        unsigned int addr4_error_raw_i1 : 1;
        unsigned int addr5_error_raw_i1 : 1;
        unsigned int addr6_error_raw_i1 : 1;
        unsigned int addr7_error_raw_i1 : 1;
        unsigned int addr8_error_raw_i1 : 1;
        unsigned int addr9_error_raw_i1 : 1;
        unsigned int addr10_error_raw_i1 : 1;
        unsigned int addr11_error_raw_i1 : 1;
        unsigned int addr12_error_raw_i1 : 1;
        unsigned int addr13_error_raw_i1 : 1;
        unsigned int addr14_error_raw_i1 : 1;
        unsigned int param_addr_error_raw_i1 : 1;
        unsigned int harq_addr_error_raw_i1 : 1;
        unsigned int dest_addr_eorr_raw_i1 : 1;
        unsigned int loch_num_error_raw_i1 : 1;
        unsigned int bus_error_raw_i1 : 1;
        unsigned int dsp_int_raw_i1 : 1;
        unsigned int arm_int_raw_i1 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_RAW_I1_UNION;
#endif
#define SOC_UPACC_INT_RAW_I1_encap_end_raw_i1_START (0)
#define SOC_UPACC_INT_RAW_I1_encap_end_raw_i1_END (0)
#define SOC_UPACC_INT_RAW_I1_trans_end_raw_i1_START (1)
#define SOC_UPACC_INT_RAW_I1_trans_end_raw_i1_END (1)
#define SOC_UPACC_INT_RAW_I1_addr1_error_raw_i1_START (2)
#define SOC_UPACC_INT_RAW_I1_addr1_error_raw_i1_END (2)
#define SOC_UPACC_INT_RAW_I1_addr2_error_raw_i1_START (3)
#define SOC_UPACC_INT_RAW_I1_addr2_error_raw_i1_END (3)
#define SOC_UPACC_INT_RAW_I1_addr3_error_raw_i1_START (4)
#define SOC_UPACC_INT_RAW_I1_addr3_error_raw_i1_END (4)
#define SOC_UPACC_INT_RAW_I1_addr4_error_raw_i1_START (5)
#define SOC_UPACC_INT_RAW_I1_addr4_error_raw_i1_END (5)
#define SOC_UPACC_INT_RAW_I1_addr5_error_raw_i1_START (6)
#define SOC_UPACC_INT_RAW_I1_addr5_error_raw_i1_END (6)
#define SOC_UPACC_INT_RAW_I1_addr6_error_raw_i1_START (7)
#define SOC_UPACC_INT_RAW_I1_addr6_error_raw_i1_END (7)
#define SOC_UPACC_INT_RAW_I1_addr7_error_raw_i1_START (8)
#define SOC_UPACC_INT_RAW_I1_addr7_error_raw_i1_END (8)
#define SOC_UPACC_INT_RAW_I1_addr8_error_raw_i1_START (9)
#define SOC_UPACC_INT_RAW_I1_addr8_error_raw_i1_END (9)
#define SOC_UPACC_INT_RAW_I1_addr9_error_raw_i1_START (10)
#define SOC_UPACC_INT_RAW_I1_addr9_error_raw_i1_END (10)
#define SOC_UPACC_INT_RAW_I1_addr10_error_raw_i1_START (11)
#define SOC_UPACC_INT_RAW_I1_addr10_error_raw_i1_END (11)
#define SOC_UPACC_INT_RAW_I1_addr11_error_raw_i1_START (12)
#define SOC_UPACC_INT_RAW_I1_addr11_error_raw_i1_END (12)
#define SOC_UPACC_INT_RAW_I1_addr12_error_raw_i1_START (13)
#define SOC_UPACC_INT_RAW_I1_addr12_error_raw_i1_END (13)
#define SOC_UPACC_INT_RAW_I1_addr13_error_raw_i1_START (14)
#define SOC_UPACC_INT_RAW_I1_addr13_error_raw_i1_END (14)
#define SOC_UPACC_INT_RAW_I1_addr14_error_raw_i1_START (15)
#define SOC_UPACC_INT_RAW_I1_addr14_error_raw_i1_END (15)
#define SOC_UPACC_INT_RAW_I1_param_addr_error_raw_i1_START (16)
#define SOC_UPACC_INT_RAW_I1_param_addr_error_raw_i1_END (16)
#define SOC_UPACC_INT_RAW_I1_harq_addr_error_raw_i1_START (17)
#define SOC_UPACC_INT_RAW_I1_harq_addr_error_raw_i1_END (17)
#define SOC_UPACC_INT_RAW_I1_dest_addr_eorr_raw_i1_START (18)
#define SOC_UPACC_INT_RAW_I1_dest_addr_eorr_raw_i1_END (18)
#define SOC_UPACC_INT_RAW_I1_loch_num_error_raw_i1_START (19)
#define SOC_UPACC_INT_RAW_I1_loch_num_error_raw_i1_END (19)
#define SOC_UPACC_INT_RAW_I1_bus_error_raw_i1_START (20)
#define SOC_UPACC_INT_RAW_I1_bus_error_raw_i1_END (20)
#define SOC_UPACC_INT_RAW_I1_dsp_int_raw_i1_START (21)
#define SOC_UPACC_INT_RAW_I1_dsp_int_raw_i1_END (21)
#define SOC_UPACC_INT_RAW_I1_arm_int_raw_i1_START (22)
#define SOC_UPACC_INT_RAW_I1_arm_int_raw_i1_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_msk_i1 : 1;
        unsigned int trans_end_msk_i1 : 1;
        unsigned int addr1_error_msk_i1 : 1;
        unsigned int addr2_error_msk_i1 : 1;
        unsigned int addr3_error_msk_i1 : 1;
        unsigned int addr4_error_msk_i1 : 1;
        unsigned int addr5_error_msk_i1 : 1;
        unsigned int addr6_error_msk_i1 : 1;
        unsigned int addr7_error_msk_i1 : 1;
        unsigned int addr8_error_msk_i1 : 1;
        unsigned int addr9_error_msk_i1 : 1;
        unsigned int addr10_error_msk_i1 : 1;
        unsigned int addr11_error_msk_i1 : 1;
        unsigned int addr12_error_msk_i1 : 1;
        unsigned int addr13_error_msk_i1 : 1;
        unsigned int addr14_error_msk_i1 : 1;
        unsigned int param_addr_error_msk_i1 : 1;
        unsigned int harq_addr_error_msk_i1 : 1;
        unsigned int dest_addr_eorr_msk_i1 : 1;
        unsigned int loch_num_error_msk_i1 : 1;
        unsigned int bus_error_msk_i1 : 1;
        unsigned int dsp_int_msk_i1 : 1;
        unsigned int arm_int_msk_i1 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_MASK_I1_UNION;
#endif
#define SOC_UPACC_INT_MASK_I1_encap_end_msk_i1_START (0)
#define SOC_UPACC_INT_MASK_I1_encap_end_msk_i1_END (0)
#define SOC_UPACC_INT_MASK_I1_trans_end_msk_i1_START (1)
#define SOC_UPACC_INT_MASK_I1_trans_end_msk_i1_END (1)
#define SOC_UPACC_INT_MASK_I1_addr1_error_msk_i1_START (2)
#define SOC_UPACC_INT_MASK_I1_addr1_error_msk_i1_END (2)
#define SOC_UPACC_INT_MASK_I1_addr2_error_msk_i1_START (3)
#define SOC_UPACC_INT_MASK_I1_addr2_error_msk_i1_END (3)
#define SOC_UPACC_INT_MASK_I1_addr3_error_msk_i1_START (4)
#define SOC_UPACC_INT_MASK_I1_addr3_error_msk_i1_END (4)
#define SOC_UPACC_INT_MASK_I1_addr4_error_msk_i1_START (5)
#define SOC_UPACC_INT_MASK_I1_addr4_error_msk_i1_END (5)
#define SOC_UPACC_INT_MASK_I1_addr5_error_msk_i1_START (6)
#define SOC_UPACC_INT_MASK_I1_addr5_error_msk_i1_END (6)
#define SOC_UPACC_INT_MASK_I1_addr6_error_msk_i1_START (7)
#define SOC_UPACC_INT_MASK_I1_addr6_error_msk_i1_END (7)
#define SOC_UPACC_INT_MASK_I1_addr7_error_msk_i1_START (8)
#define SOC_UPACC_INT_MASK_I1_addr7_error_msk_i1_END (8)
#define SOC_UPACC_INT_MASK_I1_addr8_error_msk_i1_START (9)
#define SOC_UPACC_INT_MASK_I1_addr8_error_msk_i1_END (9)
#define SOC_UPACC_INT_MASK_I1_addr9_error_msk_i1_START (10)
#define SOC_UPACC_INT_MASK_I1_addr9_error_msk_i1_END (10)
#define SOC_UPACC_INT_MASK_I1_addr10_error_msk_i1_START (11)
#define SOC_UPACC_INT_MASK_I1_addr10_error_msk_i1_END (11)
#define SOC_UPACC_INT_MASK_I1_addr11_error_msk_i1_START (12)
#define SOC_UPACC_INT_MASK_I1_addr11_error_msk_i1_END (12)
#define SOC_UPACC_INT_MASK_I1_addr12_error_msk_i1_START (13)
#define SOC_UPACC_INT_MASK_I1_addr12_error_msk_i1_END (13)
#define SOC_UPACC_INT_MASK_I1_addr13_error_msk_i1_START (14)
#define SOC_UPACC_INT_MASK_I1_addr13_error_msk_i1_END (14)
#define SOC_UPACC_INT_MASK_I1_addr14_error_msk_i1_START (15)
#define SOC_UPACC_INT_MASK_I1_addr14_error_msk_i1_END (15)
#define SOC_UPACC_INT_MASK_I1_param_addr_error_msk_i1_START (16)
#define SOC_UPACC_INT_MASK_I1_param_addr_error_msk_i1_END (16)
#define SOC_UPACC_INT_MASK_I1_harq_addr_error_msk_i1_START (17)
#define SOC_UPACC_INT_MASK_I1_harq_addr_error_msk_i1_END (17)
#define SOC_UPACC_INT_MASK_I1_dest_addr_eorr_msk_i1_START (18)
#define SOC_UPACC_INT_MASK_I1_dest_addr_eorr_msk_i1_END (18)
#define SOC_UPACC_INT_MASK_I1_loch_num_error_msk_i1_START (19)
#define SOC_UPACC_INT_MASK_I1_loch_num_error_msk_i1_END (19)
#define SOC_UPACC_INT_MASK_I1_bus_error_msk_i1_START (20)
#define SOC_UPACC_INT_MASK_I1_bus_error_msk_i1_END (20)
#define SOC_UPACC_INT_MASK_I1_dsp_int_msk_i1_START (21)
#define SOC_UPACC_INT_MASK_I1_dsp_int_msk_i1_END (21)
#define SOC_UPACC_INT_MASK_I1_arm_int_msk_i1_START (22)
#define SOC_UPACC_INT_MASK_I1_arm_int_msk_i1_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_clr_i1 : 1;
        unsigned int trans_end_clr_i1 : 1;
        unsigned int addr1_error_clr_i1 : 1;
        unsigned int addr2_error_clr_i1 : 1;
        unsigned int addr3_error_clr_i1 : 1;
        unsigned int addr4_error_clr_i1 : 1;
        unsigned int addr5_error_clr_i1 : 1;
        unsigned int addr6_error_clr_i1 : 1;
        unsigned int addr7_error_clr_i1 : 1;
        unsigned int addr8_error_clr_i1 : 1;
        unsigned int addr9_error_clr_i1 : 1;
        unsigned int addr10_error_clr_i1 : 1;
        unsigned int addr11_error_clr_i1 : 1;
        unsigned int addr12_error_clr_i1 : 1;
        unsigned int addr13_error_clr_i1 : 1;
        unsigned int addr14_error_clr_i1 : 1;
        unsigned int param_addr_error_clr_i1 : 1;
        unsigned int harq_addr_error_clr_i1 : 1;
        unsigned int dest_addr_eorr_clr_i1 : 1;
        unsigned int loch_num_error_clr_i1 : 1;
        unsigned int bus_error_clr_i1 : 1;
        unsigned int dsp_int_clr_i1 : 1;
        unsigned int arm_int_clr_i1 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_CLR_I1_UNION;
#endif
#define SOC_UPACC_INT_CLR_I1_encap_end_clr_i1_START (0)
#define SOC_UPACC_INT_CLR_I1_encap_end_clr_i1_END (0)
#define SOC_UPACC_INT_CLR_I1_trans_end_clr_i1_START (1)
#define SOC_UPACC_INT_CLR_I1_trans_end_clr_i1_END (1)
#define SOC_UPACC_INT_CLR_I1_addr1_error_clr_i1_START (2)
#define SOC_UPACC_INT_CLR_I1_addr1_error_clr_i1_END (2)
#define SOC_UPACC_INT_CLR_I1_addr2_error_clr_i1_START (3)
#define SOC_UPACC_INT_CLR_I1_addr2_error_clr_i1_END (3)
#define SOC_UPACC_INT_CLR_I1_addr3_error_clr_i1_START (4)
#define SOC_UPACC_INT_CLR_I1_addr3_error_clr_i1_END (4)
#define SOC_UPACC_INT_CLR_I1_addr4_error_clr_i1_START (5)
#define SOC_UPACC_INT_CLR_I1_addr4_error_clr_i1_END (5)
#define SOC_UPACC_INT_CLR_I1_addr5_error_clr_i1_START (6)
#define SOC_UPACC_INT_CLR_I1_addr5_error_clr_i1_END (6)
#define SOC_UPACC_INT_CLR_I1_addr6_error_clr_i1_START (7)
#define SOC_UPACC_INT_CLR_I1_addr6_error_clr_i1_END (7)
#define SOC_UPACC_INT_CLR_I1_addr7_error_clr_i1_START (8)
#define SOC_UPACC_INT_CLR_I1_addr7_error_clr_i1_END (8)
#define SOC_UPACC_INT_CLR_I1_addr8_error_clr_i1_START (9)
#define SOC_UPACC_INT_CLR_I1_addr8_error_clr_i1_END (9)
#define SOC_UPACC_INT_CLR_I1_addr9_error_clr_i1_START (10)
#define SOC_UPACC_INT_CLR_I1_addr9_error_clr_i1_END (10)
#define SOC_UPACC_INT_CLR_I1_addr10_error_clr_i1_START (11)
#define SOC_UPACC_INT_CLR_I1_addr10_error_clr_i1_END (11)
#define SOC_UPACC_INT_CLR_I1_addr11_error_clr_i1_START (12)
#define SOC_UPACC_INT_CLR_I1_addr11_error_clr_i1_END (12)
#define SOC_UPACC_INT_CLR_I1_addr12_error_clr_i1_START (13)
#define SOC_UPACC_INT_CLR_I1_addr12_error_clr_i1_END (13)
#define SOC_UPACC_INT_CLR_I1_addr13_error_clr_i1_START (14)
#define SOC_UPACC_INT_CLR_I1_addr13_error_clr_i1_END (14)
#define SOC_UPACC_INT_CLR_I1_addr14_error_clr_i1_START (15)
#define SOC_UPACC_INT_CLR_I1_addr14_error_clr_i1_END (15)
#define SOC_UPACC_INT_CLR_I1_param_addr_error_clr_i1_START (16)
#define SOC_UPACC_INT_CLR_I1_param_addr_error_clr_i1_END (16)
#define SOC_UPACC_INT_CLR_I1_harq_addr_error_clr_i1_START (17)
#define SOC_UPACC_INT_CLR_I1_harq_addr_error_clr_i1_END (17)
#define SOC_UPACC_INT_CLR_I1_dest_addr_eorr_clr_i1_START (18)
#define SOC_UPACC_INT_CLR_I1_dest_addr_eorr_clr_i1_END (18)
#define SOC_UPACC_INT_CLR_I1_loch_num_error_clr_i1_START (19)
#define SOC_UPACC_INT_CLR_I1_loch_num_error_clr_i1_END (19)
#define SOC_UPACC_INT_CLR_I1_bus_error_clr_i1_START (20)
#define SOC_UPACC_INT_CLR_I1_bus_error_clr_i1_END (20)
#define SOC_UPACC_INT_CLR_I1_dsp_int_clr_i1_START (21)
#define SOC_UPACC_INT_CLR_I1_dsp_int_clr_i1_END (21)
#define SOC_UPACC_INT_CLR_I1_arm_int_clr_i1_START (22)
#define SOC_UPACC_INT_CLR_I1_arm_int_clr_i1_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bus_error_addr_i1 : 32;
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_I1_bus_error_addr_i1_START (0)
#define SOC_UPACC_BUS_ERROR_ADDR_I1_bus_error_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int upacc_en_i1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_EN_I1_UNION;
#endif
#define SOC_UPACC_EN_I1_upacc_en_i1_START (0)
#define SOC_UPACC_EN_I1_upacc_en_i1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int harq_write_addr_i1 : 32;
    } reg;
} SOC_UPACC_HARQ_WRITE_ADDR_I1_UNION;
#endif
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_harq_write_addr_i1_START (0)
#define SOC_UPACC_HARQ_WRITE_ADDR_I1_harq_write_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_write_addr_i1 : 32;
    } reg;
} SOC_UPACC_BBP_WRITE_ADDR_I1_UNION;
#endif
#define SOC_UPACC_BBP_WRITE_ADDR_I1_bbp_write_addr_i1_START (0)
#define SOC_UPACC_BBP_WRITE_ADDR_I1_bbp_write_addr_i1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pduary_en_i1 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_PDUARY_EN_I1_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_I1_pduary_en_i1_START (0)
#define SOC_UPACC_PDUARY_EN_I1_pduary_en_i1_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mac_encap_start_i2 : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_UPACC_MAC_ENCAP_START_I2_UNION;
#endif
#define SOC_UPACC_MAC_ENCAP_START_I2_mac_encap_start_i2_START (0)
#define SOC_UPACC_MAC_ENCAP_START_I2_mac_encap_start_i2_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int loch_num_i2 : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_UPACC_LOCH_NUM_I2_UNION;
#endif
#define SOC_UPACC_LOCH_NUM_I2_loch_num_i2_START (0)
#define SOC_UPACC_LOCH_NUM_I2_loch_num_i2_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int head0_en_i2 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_HEAD0_EN_I2_UNION;
#endif
#define SOC_UPACC_HEAD0_EN_I2_head0_en_i2_START (0)
#define SOC_UPACC_HEAD0_EN_I2_head0_en_i2_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int e_rnti_i2 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_E_RNTI_I2_UNION;
#endif
#define SOC_UPACC_E_RNTI_I2_e_rnti_i2_START (0)
#define SOC_UPACC_E_RNTI_I2_e_rnti_i2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_en_i2 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_SI_EN_I2_UNION;
#endif
#define SOC_UPACC_SI_EN_I2_si_en_i2_START (0)
#define SOC_UPACC_SI_EN_I2_si_en_i2_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int si_hlid_i2 : 4;
        unsigned int si_hlbs_i2 : 4;
        unsigned int si_tebs_i2 : 5;
        unsigned int reserved_0 : 3;
        unsigned int si_uph_i2 : 5;
        unsigned int reserved_1 : 11;
    } reg;
} SOC_UPACC_SI_DATA_I2_UNION;
#endif
#define SOC_UPACC_SI_DATA_I2_si_hlid_i2_START (0)
#define SOC_UPACC_SI_DATA_I2_si_hlid_i2_END (3)
#define SOC_UPACC_SI_DATA_I2_si_hlbs_i2_START (4)
#define SOC_UPACC_SI_DATA_I2_si_hlbs_i2_END (7)
#define SOC_UPACC_SI_DATA_I2_si_tebs_i2_START (8)
#define SOC_UPACC_SI_DATA_I2_si_tebs_i2_END (12)
#define SOC_UPACC_SI_DATA_I2_si_uph_i2_START (16)
#define SOC_UPACC_SI_DATA_I2_si_uph_i2_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int padding_len_i2 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_PADDING_LEN_I2_UNION;
#endif
#define SOC_UPACC_PADDING_LEN_I2_padding_len_i2_START (0)
#define SOC_UPACC_PADDING_LEN_I2_padding_len_i2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tsn_len_i2 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_TSN_LEN_I2_UNION;
#endif
#define SOC_UPACC_TSN_LEN_I2_tsn_len_i2_START (0)
#define SOC_UPACC_TSN_LEN_I2_tsn_len_i2_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int param_addr_i2 : 32;
    } reg;
} SOC_UPACC_PARAM_ADDR_I2_UNION;
#endif
#define SOC_UPACC_PARAM_ADDR_I2_param_addr_i2_START (0)
#define SOC_UPACC_PARAM_ADDR_I2_param_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hraq_buf_addr_i2 : 32;
    } reg;
} SOC_UPACC_HARQ_BUF_ADDR_I2_UNION;
#endif
#define SOC_UPACC_HARQ_BUF_ADDR_I2_hraq_buf_addr_i2_START (0)
#define SOC_UPACC_HARQ_BUF_ADDR_I2_hraq_buf_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_dest_addr_i2 : 32;
    } reg;
} SOC_UPACC_BBP_DEST_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BBP_DEST_ADDR_I2_bbp_dest_addr_i2_START (0)
#define SOC_UPACC_BBP_DEST_ADDR_I2_bbp_dest_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_num_i2 : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_UPACC_TRANS_NUM_I2_UNION;
#endif
#define SOC_UPACC_TRANS_NUM_I2_trans_num_i2_START (0)
#define SOC_UPACC_TRANS_NUM_I2_trans_num_i2_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_en_i2 : 1;
        unsigned int trans_end_en_i2 : 1;
        unsigned int addr1_error_en_i2 : 1;
        unsigned int addr2_error_en_i2 : 1;
        unsigned int addr3_error_en_i2 : 1;
        unsigned int addr4_error_en_i2 : 1;
        unsigned int addr5_error_en_i2 : 1;
        unsigned int addr6_error_en_i2 : 1;
        unsigned int addr7_error_en_i2 : 1;
        unsigned int addr8_error_en_i2 : 1;
        unsigned int addr9_error_en_i2 : 1;
        unsigned int addr10_error_en_i2 : 1;
        unsigned int addr11_error_en_i2 : 1;
        unsigned int addr12_error_en_i2 : 1;
        unsigned int addr13_error_en_i2 : 1;
        unsigned int addr14_error_en_i2 : 1;
        unsigned int param_addr_error_en_i2 : 1;
        unsigned int harq_addr_error_en_i2 : 1;
        unsigned int dest_addr_eorr_en_i2 : 1;
        unsigned int loch_num_error_en_i2 : 1;
        unsigned int bus_error_en_i2 : 1;
        unsigned int dsp_int_en_i2 : 1;
        unsigned int arm_int_en_12 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_EN_I2_UNION;
#endif
#define SOC_UPACC_INT_EN_I2_encap_end_en_i2_START (0)
#define SOC_UPACC_INT_EN_I2_encap_end_en_i2_END (0)
#define SOC_UPACC_INT_EN_I2_trans_end_en_i2_START (1)
#define SOC_UPACC_INT_EN_I2_trans_end_en_i2_END (1)
#define SOC_UPACC_INT_EN_I2_addr1_error_en_i2_START (2)
#define SOC_UPACC_INT_EN_I2_addr1_error_en_i2_END (2)
#define SOC_UPACC_INT_EN_I2_addr2_error_en_i2_START (3)
#define SOC_UPACC_INT_EN_I2_addr2_error_en_i2_END (3)
#define SOC_UPACC_INT_EN_I2_addr3_error_en_i2_START (4)
#define SOC_UPACC_INT_EN_I2_addr3_error_en_i2_END (4)
#define SOC_UPACC_INT_EN_I2_addr4_error_en_i2_START (5)
#define SOC_UPACC_INT_EN_I2_addr4_error_en_i2_END (5)
#define SOC_UPACC_INT_EN_I2_addr5_error_en_i2_START (6)
#define SOC_UPACC_INT_EN_I2_addr5_error_en_i2_END (6)
#define SOC_UPACC_INT_EN_I2_addr6_error_en_i2_START (7)
#define SOC_UPACC_INT_EN_I2_addr6_error_en_i2_END (7)
#define SOC_UPACC_INT_EN_I2_addr7_error_en_i2_START (8)
#define SOC_UPACC_INT_EN_I2_addr7_error_en_i2_END (8)
#define SOC_UPACC_INT_EN_I2_addr8_error_en_i2_START (9)
#define SOC_UPACC_INT_EN_I2_addr8_error_en_i2_END (9)
#define SOC_UPACC_INT_EN_I2_addr9_error_en_i2_START (10)
#define SOC_UPACC_INT_EN_I2_addr9_error_en_i2_END (10)
#define SOC_UPACC_INT_EN_I2_addr10_error_en_i2_START (11)
#define SOC_UPACC_INT_EN_I2_addr10_error_en_i2_END (11)
#define SOC_UPACC_INT_EN_I2_addr11_error_en_i2_START (12)
#define SOC_UPACC_INT_EN_I2_addr11_error_en_i2_END (12)
#define SOC_UPACC_INT_EN_I2_addr12_error_en_i2_START (13)
#define SOC_UPACC_INT_EN_I2_addr12_error_en_i2_END (13)
#define SOC_UPACC_INT_EN_I2_addr13_error_en_i2_START (14)
#define SOC_UPACC_INT_EN_I2_addr13_error_en_i2_END (14)
#define SOC_UPACC_INT_EN_I2_addr14_error_en_i2_START (15)
#define SOC_UPACC_INT_EN_I2_addr14_error_en_i2_END (15)
#define SOC_UPACC_INT_EN_I2_param_addr_error_en_i2_START (16)
#define SOC_UPACC_INT_EN_I2_param_addr_error_en_i2_END (16)
#define SOC_UPACC_INT_EN_I2_harq_addr_error_en_i2_START (17)
#define SOC_UPACC_INT_EN_I2_harq_addr_error_en_i2_END (17)
#define SOC_UPACC_INT_EN_I2_dest_addr_eorr_en_i2_START (18)
#define SOC_UPACC_INT_EN_I2_dest_addr_eorr_en_i2_END (18)
#define SOC_UPACC_INT_EN_I2_loch_num_error_en_i2_START (19)
#define SOC_UPACC_INT_EN_I2_loch_num_error_en_i2_END (19)
#define SOC_UPACC_INT_EN_I2_bus_error_en_i2_START (20)
#define SOC_UPACC_INT_EN_I2_bus_error_en_i2_END (20)
#define SOC_UPACC_INT_EN_I2_dsp_int_en_i2_START (21)
#define SOC_UPACC_INT_EN_I2_dsp_int_en_i2_END (21)
#define SOC_UPACC_INT_EN_I2_arm_int_en_12_START (22)
#define SOC_UPACC_INT_EN_I2_arm_int_en_12_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_raw_i2 : 1;
        unsigned int trans_end_raw_i2 : 1;
        unsigned int addr1_error_raw_i2 : 1;
        unsigned int addr2_error_raw_i2 : 1;
        unsigned int addr3_error_raw_i2 : 1;
        unsigned int addr4_error_raw_i2 : 1;
        unsigned int addr5_error_raw_i2 : 1;
        unsigned int addr6_error_raw_i2 : 1;
        unsigned int addr7_error_raw_i2 : 1;
        unsigned int addr8_error_raw_i2 : 1;
        unsigned int addr9_error_raw_i2 : 1;
        unsigned int addr10_error_raw_i2 : 1;
        unsigned int addr11_error_raw_i2 : 1;
        unsigned int addr12_error_raw_i2 : 1;
        unsigned int addr13_error_raw_i2 : 1;
        unsigned int addr14_error_raw_i2 : 1;
        unsigned int param_addr_error_raw_i2 : 1;
        unsigned int harq_addr_error_raw_i2 : 1;
        unsigned int dest_addr_eorr_raw_i2 : 1;
        unsigned int loch_num_error_raw_i2 : 1;
        unsigned int bus_error_raw_i2 : 1;
        unsigned int dsp_int_raw_i2 : 1;
        unsigned int arm_int_raw_i2 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_RAW_I2_UNION;
#endif
#define SOC_UPACC_INT_RAW_I2_encap_end_raw_i2_START (0)
#define SOC_UPACC_INT_RAW_I2_encap_end_raw_i2_END (0)
#define SOC_UPACC_INT_RAW_I2_trans_end_raw_i2_START (1)
#define SOC_UPACC_INT_RAW_I2_trans_end_raw_i2_END (1)
#define SOC_UPACC_INT_RAW_I2_addr1_error_raw_i2_START (2)
#define SOC_UPACC_INT_RAW_I2_addr1_error_raw_i2_END (2)
#define SOC_UPACC_INT_RAW_I2_addr2_error_raw_i2_START (3)
#define SOC_UPACC_INT_RAW_I2_addr2_error_raw_i2_END (3)
#define SOC_UPACC_INT_RAW_I2_addr3_error_raw_i2_START (4)
#define SOC_UPACC_INT_RAW_I2_addr3_error_raw_i2_END (4)
#define SOC_UPACC_INT_RAW_I2_addr4_error_raw_i2_START (5)
#define SOC_UPACC_INT_RAW_I2_addr4_error_raw_i2_END (5)
#define SOC_UPACC_INT_RAW_I2_addr5_error_raw_i2_START (6)
#define SOC_UPACC_INT_RAW_I2_addr5_error_raw_i2_END (6)
#define SOC_UPACC_INT_RAW_I2_addr6_error_raw_i2_START (7)
#define SOC_UPACC_INT_RAW_I2_addr6_error_raw_i2_END (7)
#define SOC_UPACC_INT_RAW_I2_addr7_error_raw_i2_START (8)
#define SOC_UPACC_INT_RAW_I2_addr7_error_raw_i2_END (8)
#define SOC_UPACC_INT_RAW_I2_addr8_error_raw_i2_START (9)
#define SOC_UPACC_INT_RAW_I2_addr8_error_raw_i2_END (9)
#define SOC_UPACC_INT_RAW_I2_addr9_error_raw_i2_START (10)
#define SOC_UPACC_INT_RAW_I2_addr9_error_raw_i2_END (10)
#define SOC_UPACC_INT_RAW_I2_addr10_error_raw_i2_START (11)
#define SOC_UPACC_INT_RAW_I2_addr10_error_raw_i2_END (11)
#define SOC_UPACC_INT_RAW_I2_addr11_error_raw_i2_START (12)
#define SOC_UPACC_INT_RAW_I2_addr11_error_raw_i2_END (12)
#define SOC_UPACC_INT_RAW_I2_addr12_error_raw_i2_START (13)
#define SOC_UPACC_INT_RAW_I2_addr12_error_raw_i2_END (13)
#define SOC_UPACC_INT_RAW_I2_addr13_error_raw_i2_START (14)
#define SOC_UPACC_INT_RAW_I2_addr13_error_raw_i2_END (14)
#define SOC_UPACC_INT_RAW_I2_addr14_error_raw_i2_START (15)
#define SOC_UPACC_INT_RAW_I2_addr14_error_raw_i2_END (15)
#define SOC_UPACC_INT_RAW_I2_param_addr_error_raw_i2_START (16)
#define SOC_UPACC_INT_RAW_I2_param_addr_error_raw_i2_END (16)
#define SOC_UPACC_INT_RAW_I2_harq_addr_error_raw_i2_START (17)
#define SOC_UPACC_INT_RAW_I2_harq_addr_error_raw_i2_END (17)
#define SOC_UPACC_INT_RAW_I2_dest_addr_eorr_raw_i2_START (18)
#define SOC_UPACC_INT_RAW_I2_dest_addr_eorr_raw_i2_END (18)
#define SOC_UPACC_INT_RAW_I2_loch_num_error_raw_i2_START (19)
#define SOC_UPACC_INT_RAW_I2_loch_num_error_raw_i2_END (19)
#define SOC_UPACC_INT_RAW_I2_bus_error_raw_i2_START (20)
#define SOC_UPACC_INT_RAW_I2_bus_error_raw_i2_END (20)
#define SOC_UPACC_INT_RAW_I2_dsp_int_raw_i2_START (21)
#define SOC_UPACC_INT_RAW_I2_dsp_int_raw_i2_END (21)
#define SOC_UPACC_INT_RAW_I2_arm_int_raw_i2_START (22)
#define SOC_UPACC_INT_RAW_I2_arm_int_raw_i2_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_msk_i2 : 1;
        unsigned int trans_end_msk_i2 : 1;
        unsigned int addr1_error_msk_i2 : 1;
        unsigned int addr2_error_msk_i2 : 1;
        unsigned int addr3_error_msk_i2 : 1;
        unsigned int addr4_error_msk_i2 : 1;
        unsigned int addr5_error_msk_i2 : 1;
        unsigned int addr6_error_msk_i2 : 1;
        unsigned int addr7_error_msk_i2 : 1;
        unsigned int addr8_error_msk_i2 : 1;
        unsigned int addr9_error_msk_i2 : 1;
        unsigned int addr10_error_msk_i2 : 1;
        unsigned int addr11_error_msk_i2 : 1;
        unsigned int addr12_error_msk_i2 : 1;
        unsigned int addr13_error_msk_i2 : 1;
        unsigned int addr14_error_msk_i2 : 1;
        unsigned int param_addr_error_msk_i2 : 1;
        unsigned int harq_addr_error_msk_i2 : 1;
        unsigned int dest_addr_eorr_msk_i2 : 1;
        unsigned int loch_num_error_msk_i2 : 1;
        unsigned int bus_error_msk_i2 : 1;
        unsigned int dsp_int_msk_i2 : 1;
        unsigned int arm_int_msk_i2 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_MASK_I2_UNION;
#endif
#define SOC_UPACC_INT_MASK_I2_encap_end_msk_i2_START (0)
#define SOC_UPACC_INT_MASK_I2_encap_end_msk_i2_END (0)
#define SOC_UPACC_INT_MASK_I2_trans_end_msk_i2_START (1)
#define SOC_UPACC_INT_MASK_I2_trans_end_msk_i2_END (1)
#define SOC_UPACC_INT_MASK_I2_addr1_error_msk_i2_START (2)
#define SOC_UPACC_INT_MASK_I2_addr1_error_msk_i2_END (2)
#define SOC_UPACC_INT_MASK_I2_addr2_error_msk_i2_START (3)
#define SOC_UPACC_INT_MASK_I2_addr2_error_msk_i2_END (3)
#define SOC_UPACC_INT_MASK_I2_addr3_error_msk_i2_START (4)
#define SOC_UPACC_INT_MASK_I2_addr3_error_msk_i2_END (4)
#define SOC_UPACC_INT_MASK_I2_addr4_error_msk_i2_START (5)
#define SOC_UPACC_INT_MASK_I2_addr4_error_msk_i2_END (5)
#define SOC_UPACC_INT_MASK_I2_addr5_error_msk_i2_START (6)
#define SOC_UPACC_INT_MASK_I2_addr5_error_msk_i2_END (6)
#define SOC_UPACC_INT_MASK_I2_addr6_error_msk_i2_START (7)
#define SOC_UPACC_INT_MASK_I2_addr6_error_msk_i2_END (7)
#define SOC_UPACC_INT_MASK_I2_addr7_error_msk_i2_START (8)
#define SOC_UPACC_INT_MASK_I2_addr7_error_msk_i2_END (8)
#define SOC_UPACC_INT_MASK_I2_addr8_error_msk_i2_START (9)
#define SOC_UPACC_INT_MASK_I2_addr8_error_msk_i2_END (9)
#define SOC_UPACC_INT_MASK_I2_addr9_error_msk_i2_START (10)
#define SOC_UPACC_INT_MASK_I2_addr9_error_msk_i2_END (10)
#define SOC_UPACC_INT_MASK_I2_addr10_error_msk_i2_START (11)
#define SOC_UPACC_INT_MASK_I2_addr10_error_msk_i2_END (11)
#define SOC_UPACC_INT_MASK_I2_addr11_error_msk_i2_START (12)
#define SOC_UPACC_INT_MASK_I2_addr11_error_msk_i2_END (12)
#define SOC_UPACC_INT_MASK_I2_addr12_error_msk_i2_START (13)
#define SOC_UPACC_INT_MASK_I2_addr12_error_msk_i2_END (13)
#define SOC_UPACC_INT_MASK_I2_addr13_error_msk_i2_START (14)
#define SOC_UPACC_INT_MASK_I2_addr13_error_msk_i2_END (14)
#define SOC_UPACC_INT_MASK_I2_addr14_error_msk_i2_START (15)
#define SOC_UPACC_INT_MASK_I2_addr14_error_msk_i2_END (15)
#define SOC_UPACC_INT_MASK_I2_param_addr_error_msk_i2_START (16)
#define SOC_UPACC_INT_MASK_I2_param_addr_error_msk_i2_END (16)
#define SOC_UPACC_INT_MASK_I2_harq_addr_error_msk_i2_START (17)
#define SOC_UPACC_INT_MASK_I2_harq_addr_error_msk_i2_END (17)
#define SOC_UPACC_INT_MASK_I2_dest_addr_eorr_msk_i2_START (18)
#define SOC_UPACC_INT_MASK_I2_dest_addr_eorr_msk_i2_END (18)
#define SOC_UPACC_INT_MASK_I2_loch_num_error_msk_i2_START (19)
#define SOC_UPACC_INT_MASK_I2_loch_num_error_msk_i2_END (19)
#define SOC_UPACC_INT_MASK_I2_bus_error_msk_i2_START (20)
#define SOC_UPACC_INT_MASK_I2_bus_error_msk_i2_END (20)
#define SOC_UPACC_INT_MASK_I2_dsp_int_msk_i2_START (21)
#define SOC_UPACC_INT_MASK_I2_dsp_int_msk_i2_END (21)
#define SOC_UPACC_INT_MASK_I2_arm_int_msk_i2_START (22)
#define SOC_UPACC_INT_MASK_I2_arm_int_msk_i2_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int encap_end_clr_i2 : 1;
        unsigned int trans_end_clr_i2 : 1;
        unsigned int addr1_error_clr_i2 : 1;
        unsigned int addr2_error_clr_i2 : 1;
        unsigned int addr3_error_clr_i2 : 1;
        unsigned int addr4_error_clr_i2 : 1;
        unsigned int addr5_error_clr_i2 : 1;
        unsigned int addr6_error_clr_i2 : 1;
        unsigned int addr7_error_clr_i2 : 1;
        unsigned int addr8_error_clr_i2 : 1;
        unsigned int addr9_error_clr_i2 : 1;
        unsigned int addr10_error_clr_i2 : 1;
        unsigned int addr11_error_clr_i2 : 1;
        unsigned int addr12_error_clr_i2 : 1;
        unsigned int addr13_error_clr_i2 : 1;
        unsigned int addr14_error_clr_i2 : 1;
        unsigned int param_addr_error_clr_i2 : 1;
        unsigned int harq_addr_error_clr_i2 : 1;
        unsigned int dest_addr_eorr_clr_i2 : 1;
        unsigned int loch_num_error_clr_i2 : 1;
        unsigned int bus_error_clr_i2 : 1;
        unsigned int dsp_int_clr_i2 : 1;
        unsigned int arm_int_clr_i2 : 1;
        unsigned int reserved : 9;
    } reg;
} SOC_UPACC_INT_CLR_I2_UNION;
#endif
#define SOC_UPACC_INT_CLR_I2_encap_end_clr_i2_START (0)
#define SOC_UPACC_INT_CLR_I2_encap_end_clr_i2_END (0)
#define SOC_UPACC_INT_CLR_I2_trans_end_clr_i2_START (1)
#define SOC_UPACC_INT_CLR_I2_trans_end_clr_i2_END (1)
#define SOC_UPACC_INT_CLR_I2_addr1_error_clr_i2_START (2)
#define SOC_UPACC_INT_CLR_I2_addr1_error_clr_i2_END (2)
#define SOC_UPACC_INT_CLR_I2_addr2_error_clr_i2_START (3)
#define SOC_UPACC_INT_CLR_I2_addr2_error_clr_i2_END (3)
#define SOC_UPACC_INT_CLR_I2_addr3_error_clr_i2_START (4)
#define SOC_UPACC_INT_CLR_I2_addr3_error_clr_i2_END (4)
#define SOC_UPACC_INT_CLR_I2_addr4_error_clr_i2_START (5)
#define SOC_UPACC_INT_CLR_I2_addr4_error_clr_i2_END (5)
#define SOC_UPACC_INT_CLR_I2_addr5_error_clr_i2_START (6)
#define SOC_UPACC_INT_CLR_I2_addr5_error_clr_i2_END (6)
#define SOC_UPACC_INT_CLR_I2_addr6_error_clr_i2_START (7)
#define SOC_UPACC_INT_CLR_I2_addr6_error_clr_i2_END (7)
#define SOC_UPACC_INT_CLR_I2_addr7_error_clr_i2_START (8)
#define SOC_UPACC_INT_CLR_I2_addr7_error_clr_i2_END (8)
#define SOC_UPACC_INT_CLR_I2_addr8_error_clr_i2_START (9)
#define SOC_UPACC_INT_CLR_I2_addr8_error_clr_i2_END (9)
#define SOC_UPACC_INT_CLR_I2_addr9_error_clr_i2_START (10)
#define SOC_UPACC_INT_CLR_I2_addr9_error_clr_i2_END (10)
#define SOC_UPACC_INT_CLR_I2_addr10_error_clr_i2_START (11)
#define SOC_UPACC_INT_CLR_I2_addr10_error_clr_i2_END (11)
#define SOC_UPACC_INT_CLR_I2_addr11_error_clr_i2_START (12)
#define SOC_UPACC_INT_CLR_I2_addr11_error_clr_i2_END (12)
#define SOC_UPACC_INT_CLR_I2_addr12_error_clr_i2_START (13)
#define SOC_UPACC_INT_CLR_I2_addr12_error_clr_i2_END (13)
#define SOC_UPACC_INT_CLR_I2_addr13_error_clr_i2_START (14)
#define SOC_UPACC_INT_CLR_I2_addr13_error_clr_i2_END (14)
#define SOC_UPACC_INT_CLR_I2_addr14_error_clr_i2_START (15)
#define SOC_UPACC_INT_CLR_I2_addr14_error_clr_i2_END (15)
#define SOC_UPACC_INT_CLR_I2_param_addr_error_clr_i2_START (16)
#define SOC_UPACC_INT_CLR_I2_param_addr_error_clr_i2_END (16)
#define SOC_UPACC_INT_CLR_I2_harq_addr_error_clr_i2_START (17)
#define SOC_UPACC_INT_CLR_I2_harq_addr_error_clr_i2_END (17)
#define SOC_UPACC_INT_CLR_I2_dest_addr_eorr_clr_i2_START (18)
#define SOC_UPACC_INT_CLR_I2_dest_addr_eorr_clr_i2_END (18)
#define SOC_UPACC_INT_CLR_I2_loch_num_error_clr_i2_START (19)
#define SOC_UPACC_INT_CLR_I2_loch_num_error_clr_i2_END (19)
#define SOC_UPACC_INT_CLR_I2_bus_error_clr_i2_START (20)
#define SOC_UPACC_INT_CLR_I2_bus_error_clr_i2_END (20)
#define SOC_UPACC_INT_CLR_I2_dsp_int_clr_i2_START (21)
#define SOC_UPACC_INT_CLR_I2_dsp_int_clr_i2_END (21)
#define SOC_UPACC_INT_CLR_I2_arm_int_clr_i2_START (22)
#define SOC_UPACC_INT_CLR_I2_arm_int_clr_i2_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bus_error_addr_i2 : 32;
    } reg;
} SOC_UPACC_BUS_ERROR_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BUS_ERROR_ADDR_I2_bus_error_addr_i2_START (0)
#define SOC_UPACC_BUS_ERROR_ADDR_I2_bus_error_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int upacc_en_i2 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_EN_I2_UNION;
#endif
#define SOC_UPACC_EN_I2_upacc_en_i2_START (0)
#define SOC_UPACC_EN_I2_upacc_en_i2_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int harq_write_addr_i2 : 32;
    } reg;
} SOC_UPACC_HARQ_WRITE_ADDR_I2_UNION;
#endif
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_harq_write_addr_i2_START (0)
#define SOC_UPACC_HARQ_WRITE_ADDR_I2_harq_write_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbp_write_addr_i2 : 32;
    } reg;
} SOC_UPACC_BBP_WRITE_ADDR_I2_UNION;
#endif
#define SOC_UPACC_BBP_WRITE_ADDR_I2_bbp_write_addr_i2_START (0)
#define SOC_UPACC_BBP_WRITE_ADDR_I2_bbp_write_addr_i2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pduary_en_i2 : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_UPACC_PDUARY_EN_I2_UNION;
#endif
#define SOC_UPACC_PDUARY_EN_I2_pduary_en_i2_START (0)
#define SOC_UPACC_PDUARY_EN_I2_pduary_en_i2_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
