#ifndef __SOC_MDDRC_DUMMYREAD_INTERFACE_H__
#define __SOC_MDDRC_DUMMYREAD_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_ADDR(base) ((base) + (0x0))
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_ADDR(base) ((base) + (0x4))
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_ADDR(base) ((base) + (0x8))
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_ADDR(base,rnks) ((base) + (0xC+0x4*(rnks)))
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_ADDR(base) ((base) + (0x020))
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_ADDR(base) ((base) + (0x024))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_dummy_rd_en_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CTRL_dummy_rd_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_cnt : 32;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_dummy_rd_cnt_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_CNT_dummy_rd_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_num : 8;
        unsigned int dummy_rd_gap : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_num_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_num_END (7)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_gap_START (8)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_NUM_dummy_rd_gap_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_rnk_addr : 32;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_dummy_rd_rnk_addr_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_RNKADD_dummy_rd_rnk_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_qos : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_dummy_rd_qos_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_QOS_dummy_rd_qos_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dummy_rd_id : 16;
        unsigned int dummy_rd_mid : 16;
    } reg;
} SOC_MDDRC_dummyread_DDRC_DUMRD_XID_UNION;
#endif
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_id_START (0)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_id_END (15)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_mid_START (16)
#define SOC_MDDRC_dummyread_DDRC_DUMRD_XID_dummy_rd_mid_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
