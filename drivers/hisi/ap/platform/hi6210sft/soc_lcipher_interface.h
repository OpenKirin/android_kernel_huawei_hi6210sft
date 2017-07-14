#ifndef __SOC_LCIPHER_INTERFACE_H__
#define __SOC_LCIPHER_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_LCIPHER_CIPHER_CTRL_ADDR(base) ((base) + (0x000))
#define SOC_LCIPHER_CIPHER_PRI_ADDR(base) ((base) + (0x004))
#define SOC_LCIPHER_TOTAL_BD_NUM_ADDR(base) ((base) + (0x008))
#define SOC_LCIPHER_INVALID_BD_NUM_ADDR(base) ((base) + (0x00C))
#define SOC_LCIPHER_DMA_CFG_ADDR(base) ((base) + (0x014))
#define SOC_LCIPHER_TEST_REG0_ADDR(base) ((base) + (0x020))
#define SOC_LCIPHER_TEST_REG1_ADDR(base) ((base) + (0x024))
#define SOC_LCIPHER_TEST_REG2_ADDR(base) ((base) + (0x028))
#define SOC_LCIPHER_cipher_debug20_ADDR(base) ((base) + (0x02C))
#define SOC_LCIPHER_cipher_debug0_ADDR(base) ((base) + (0x030))
#define SOC_LCIPHER_cipher_debug1_ADDR(base) ((base) + (0x034))
#define SOC_LCIPHER_cipher_debug2_ADDR(base) ((base) + (0x038))
#define SOC_LCIPHER_cipher_debug3_ADDR(base) ((base) + (0x03C))
#define SOC_LCIPHER_cipher_debug4_ADDR(base) ((base) + (0x040))
#define SOC_LCIPHER_cipher_debug5_ADDR(base) ((base) + (0x044))
#define SOC_LCIPHER_cipher_debug6_ADDR(base) ((base) + (0x048))
#define SOC_LCIPHER_cipher_debug7_ADDR(base) ((base) + (0x04C))
#define SOC_LCIPHER_cipher_debug8_ADDR(base) ((base) + (0x050))
#define SOC_LCIPHER_cipher_debug9_ADDR(base) ((base) + (0x054))
#define SOC_LCIPHER_cipher_debug10_ADDR(base) ((base) + (0x058))
#define SOC_LCIPHER_cipher_debug11_ADDR(base) ((base) + (0x05C))
#define SOC_LCIPHER_cipher_debug12_ADDR(base) ((base) + (0x060))
#define SOC_LCIPHER_cipher_debug13_ADDR(base) ((base) + (0x064))
#define SOC_LCIPHER_cipher_debug14_ADDR(base) ((base) + (0x068))
#define SOC_LCIPHER_cipher_debug15_ADDR(base) ((base) + (0x06C))
#define SOC_LCIPHER_cipher_debug16_ADDR(base) ((base) + (0x070))
#define SOC_LCIPHER_cipher_debug17_ADDR(base) ((base) + (0x074))
#define SOC_LCIPHER_cipher_debug18_ADDR(base) ((base) + (0x078))
#define SOC_LCIPHER_cipher_debug19_ADDR(base) ((base) + (0x07C))
#define SOC_LCIPHER_CH0_SOFTRESET_ADDR(base) ((base) + (0x80))
#define SOC_LCIPHER_CH0_EN_ADDR(base) ((base) + (0x84))
#define SOC_LCIPHER_CH0_CONFIG_ADDR(base) ((base) + (0x88))
#define SOC_LCIPHER_CH0_BDQ_BADDR_ADDR(base) ((base) + (0x8C))
#define SOC_LCIPHER_CH0_BDQ_SIZE_ADDR(base) ((base) + (0x90))
#define SOC_LCIPHER_CH0_BDQ_PTR_ADDR(base) ((base) + (0x94))
#define SOC_LCIPHER_CH0_BDQ_RADDR_ADDR(base) ((base) + (0x98))
#define SOC_LCIPHER_CH0_BDQ_WADDR_ADDR(base) ((base) + (0x9C))
#define SOC_LCIPHER_CH0_BD_NUM_ADDR(base) ((base) + (0xA0))
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ADDR(base) ((base) + (0xA4))
#define SOC_LCIPHER_CH1_SOFTRESET_ADDR(base) ((base) + (0x100))
#define SOC_LCIPHER_CH1_EN_ADDR(base) ((base) + (0x104))
#define SOC_LCIPHER_CH1_CONFIG_ADDR(base) ((base) + (0x108))
#define SOC_LCIPHER_CH1_BDQ_BADDR_ADDR(base) ((base) + (0x10C))
#define SOC_LCIPHER_CH1_BDQ_SIZE_ADDR(base) ((base) + (0x110))
#define SOC_LCIPHER_CH1_BDQ_PTR_ADDR(base) ((base) + (0x114))
#define SOC_LCIPHER_CH1_BDQ_RADDR_ADDR(base) ((base) + (0x118))
#define SOC_LCIPHER_CH1_BDQ_WADDR_ADDR(base) ((base) + (0x11C))
#define SOC_LCIPHER_CH1_BD_NUM_ADDR(base) ((base) + (0x120))
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ADDR(base) ((base) + (0x124))
#define SOC_LCIPHER_CH2_SOFTRESET_ADDR(base) ((base) + (0x180))
#define SOC_LCIPHER_CH2_EN_ADDR(base) ((base) + (0x184))
#define SOC_LCIPHER_CH2_CONFIG_ADDR(base) ((base) + (0x188))
#define SOC_LCIPHER_CH2_BDQ_BADDR_ADDR(base) ((base) + (0x18C))
#define SOC_LCIPHER_CH2_BDQ_SIZE_ADDR(base) ((base) + (0x190))
#define SOC_LCIPHER_CH2_BDQ_PTR_ADDR(base) ((base) + (0x194))
#define SOC_LCIPHER_CH2_BDQ_RADDR_ADDR(base) ((base) + (0x198))
#define SOC_LCIPHER_CH2_BDQ_WADDR_ADDR(base) ((base) + (0x19C))
#define SOC_LCIPHER_CH2_BD_NUM_ADDR(base) ((base) + (0x1A0))
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ADDR(base) ((base) + (0x1A4))
#define SOC_LCIPHER_CH3_SOFTRESET_ADDR(base) ((base) + (0x200))
#define SOC_LCIPHER_CH3_EN_ADDR(base) ((base) + (0x204))
#define SOC_LCIPHER_CH3_CONFIG_ADDR(base) ((base) + (0x208))
#define SOC_LCIPHER_CH3_BDQ_BADDR_ADDR(base) ((base) + (0x20C))
#define SOC_LCIPHER_CH3_BDQ_SIZE_ADDR(base) ((base) + (0x210))
#define SOC_LCIPHER_CH3_BDQ_PTR_ADDR(base) ((base) + (0x214))
#define SOC_LCIPHER_CH3_BDQ_RADDR_ADDR(base) ((base) + (0x218))
#define SOC_LCIPHER_CH3_BDQ_WADDR_ADDR(base) ((base) + (0x21C))
#define SOC_LCIPHER_CH3_BD_NUM_ADDR(base) ((base) + (0x220))
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ADDR(base) ((base) + (0x224))
#define SOC_LCIPHER_CH4_SOFTRESET_ADDR(base) ((base) + (0x280))
#define SOC_LCIPHER_CH4_EN_ADDR(base) ((base) + (0x284))
#define SOC_LCIPHER_CH4_CONFIG_ADDR(base) ((base) + (0x288))
#define SOC_LCIPHER_CH4_BDQ_BADDR_ADDR(base) ((base) + (0x28C))
#define SOC_LCIPHER_CH4_BDQ_SIZE_ADDR(base) ((base) + (0x290))
#define SOC_LCIPHER_CH4_BDQ_PTR_ADDR(base) ((base) + (0x294))
#define SOC_LCIPHER_CH4_BDQ_RADDR_ADDR(base) ((base) + (0x298))
#define SOC_LCIPHER_CH4_BDQ_WADDR_ADDR(base) ((base) + (0x29C))
#define SOC_LCIPHER_CH4_BD_NUM_ADDR(base) ((base) + (0x2A0))
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ADDR(base) ((base) + (0x2A4))
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ADDR(base) ((base) + (0x400))
#define SOC_LCIPHER_CIPHER_INT_STATUS_ADDR(base) ((base) + (0x404))
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ADDR(base) ((base) + (0x408))
#define SOC_LCIPHER_CIPHER_INT0_MASK_ADDR(base) ((base) + (0x40C))
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_ADDR(base) ((base) + (0x410))
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ADDR(base) ((base) + (0x414))
#define SOC_LCIPHER_CIPHER_INT1_MASK_ADDR(base) ((base) + (0x418))
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_ADDR(base) ((base) + (0x41C))
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ADDR(base) ((base) + (0x420))
#define SOC_LCIPHER_CIPHER_INT2_MASK_ADDR(base) ((base) + (0x424))
#define SOC_LCIPHER_CIPHER_INT2_MSTATUS_ADDR(base) ((base) + (0x428))
#define SOC_LCIPHER_CH0_RDQ_BADDR_ADDR(base) ((base) + (0x480))
#define SOC_LCIPHER_CH0_RDQ_SIZE_ADDR(base) ((base) + (0x484))
#define SOC_LCIPHER_CH0_RDQ_PTR_ADDR(base) ((base) + (0x488))
#define SOC_LCIPHER_CH0_RDQ_RADDR_ADDR(base) ((base) + (0x48C))
#define SOC_LCIPHER_CH0_RDQ_WADDR_ADDR(base) ((base) + (0x490))
#define SOC_LCIPHER_CH1_RDQ_BADDR_ADDR(base) ((base) + (0x500))
#define SOC_LCIPHER_CH1_RDQ_SIZE_ADDR(base) ((base) + (0x504))
#define SOC_LCIPHER_CH1_RDQ_PTR_ADDR(base) ((base) + (0x508))
#define SOC_LCIPHER_CH1_RDQ_RADDR_ADDR(base) ((base) + (0x50C))
#define SOC_LCIPHER_CH1_RDQ_WADDR_ADDR(base) ((base) + (0x510))
#define SOC_LCIPHER_CH2_RDQ_BADDR_ADDR(base) ((base) + (0x580))
#define SOC_LCIPHER_CH2_RDQ_SIZE_ADDR(base) ((base) + (0x584))
#define SOC_LCIPHER_CH2_RDQ_PTR_ADDR(base) ((base) + (0x588))
#define SOC_LCIPHER_CH2_RDQ_RADDR_ADDR(base) ((base) + (0x58C))
#define SOC_LCIPHER_CH2_RDQ_WADDR_ADDR(base) ((base) + (0x590))
#define SOC_LCIPHER_CH3_RDQ_BADDR_ADDR(base) ((base) + (0x600))
#define SOC_LCIPHER_CH3_RDQ_SIZE_ADDR(base) ((base) + (0x604))
#define SOC_LCIPHER_CH3_RDQ_PTR_ADDR(base) ((base) + (0x608))
#define SOC_LCIPHER_CH3_RDQ_RADDR_ADDR(base) ((base) + (0x60C))
#define SOC_LCIPHER_CH3_RDQ_WADDR_ADDR(base) ((base) + (0x610))
#define SOC_LCIPHER_CH4_RDQ_BADDR_ADDR(base) ((base) + (0x680))
#define SOC_LCIPHER_CH4_RDQ_SIZE_ADDR(base) ((base) + (0x684))
#define SOC_LCIPHER_CH4_RDQ_PTR_ADDR(base) ((base) + (0x688))
#define SOC_LCIPHER_CH4_RDQ_RADDR_ADDR(base) ((base) + (0x68C))
#define SOC_LCIPHER_CH4_RDQ_WADDR_ADDR(base) ((base) + (0x690))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cipher_srst : 1;
        unsigned int cipher_cg_en : 1;
        unsigned int reserved : 29;
        unsigned int cipher_busy : 1;
    } reg;
} SOC_LCIPHER_CIPHER_CTRL_UNION;
#endif
#define SOC_LCIPHER_CIPHER_CTRL_cipher_srst_START (0)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_srst_END (0)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_cg_en_START (1)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_cg_en_END (1)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_busy_START (31)
#define SOC_LCIPHER_CIPHER_CTRL_cipher_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int idata_threshold : 28;
        unsigned int ch_pri : 1;
        unsigned int reserved : 3;
    } reg;
} SOC_LCIPHER_CIPHER_PRI_UNION;
#endif
#define SOC_LCIPHER_CIPHER_PRI_idata_threshold_START (0)
#define SOC_LCIPHER_CIPHER_PRI_idata_threshold_END (27)
#define SOC_LCIPHER_CIPHER_PRI_ch_pri_START (28)
#define SOC_LCIPHER_CIPHER_PRI_ch_pri_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int total_bd_num : 32;
    } reg;
} SOC_LCIPHER_TOTAL_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_TOTAL_BD_NUM_total_bd_num_START (0)
#define SOC_LCIPHER_TOTAL_BD_NUM_total_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_INVALID_BD_NUM_invalid_bd_num_START (0)
#define SOC_LCIPHER_INVALID_BD_NUM_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_id : 3;
        unsigned int obuf_id : 3;
        unsigned int ocd_id : 3;
        unsigned int icd_id : 3;
        unsigned int ibuf_id : 3;
        unsigned int reserved_0: 1;
        unsigned int rd_pri : 3;
        unsigned int obuf_pri : 3;
        unsigned int ocd_pri : 3;
        unsigned int icd_pri : 3;
        unsigned int ibuf_pri : 3;
        unsigned int reserved_1: 1;
    } reg;
} SOC_LCIPHER_DMA_CFG_UNION;
#endif
#define SOC_LCIPHER_DMA_CFG_rd_id_START (0)
#define SOC_LCIPHER_DMA_CFG_rd_id_END (2)
#define SOC_LCIPHER_DMA_CFG_obuf_id_START (3)
#define SOC_LCIPHER_DMA_CFG_obuf_id_END (5)
#define SOC_LCIPHER_DMA_CFG_ocd_id_START (6)
#define SOC_LCIPHER_DMA_CFG_ocd_id_END (8)
#define SOC_LCIPHER_DMA_CFG_icd_id_START (9)
#define SOC_LCIPHER_DMA_CFG_icd_id_END (11)
#define SOC_LCIPHER_DMA_CFG_ibuf_id_START (12)
#define SOC_LCIPHER_DMA_CFG_ibuf_id_END (14)
#define SOC_LCIPHER_DMA_CFG_rd_pri_START (16)
#define SOC_LCIPHER_DMA_CFG_rd_pri_END (18)
#define SOC_LCIPHER_DMA_CFG_obuf_pri_START (19)
#define SOC_LCIPHER_DMA_CFG_obuf_pri_END (21)
#define SOC_LCIPHER_DMA_CFG_ocd_pri_START (22)
#define SOC_LCIPHER_DMA_CFG_ocd_pri_END (24)
#define SOC_LCIPHER_DMA_CFG_icd_pri_START (25)
#define SOC_LCIPHER_DMA_CFG_icd_pri_END (27)
#define SOC_LCIPHER_DMA_CFG_ibuf_pri_START (28)
#define SOC_LCIPHER_DMA_CFG_ibuf_pri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spram_mem_ctrl : 16;
        unsigned int atpram_mem_ctrl : 16;
    } reg;
} SOC_LCIPHER_TEST_REG0_UNION;
#endif
#define SOC_LCIPHER_TEST_REG0_spram_mem_ctrl_START (0)
#define SOC_LCIPHER_TEST_REG0_spram_mem_ctrl_END (15)
#define SOC_LCIPHER_TEST_REG0_atpram_mem_ctrl_START (16)
#define SOC_LCIPHER_TEST_REG0_atpram_mem_ctrl_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int aes_key_cov : 1;
        unsigned int snow3g_key_cov : 1;
        unsigned int cipher_dma_ctrl : 6;
        unsigned int zuc_key_cov : 1;
        unsigned int aes_iv_cov : 1;
        unsigned int snow3g_iv_cov : 1;
        unsigned int zuc_iv_cov : 1;
        unsigned int reserved : 20;
    } reg;
} SOC_LCIPHER_TEST_REG1_UNION;
#endif
#define SOC_LCIPHER_TEST_REG1_aes_key_cov_START (0)
#define SOC_LCIPHER_TEST_REG1_aes_key_cov_END (0)
#define SOC_LCIPHER_TEST_REG1_snow3g_key_cov_START (1)
#define SOC_LCIPHER_TEST_REG1_snow3g_key_cov_END (1)
#define SOC_LCIPHER_TEST_REG1_cipher_dma_ctrl_START (2)
#define SOC_LCIPHER_TEST_REG1_cipher_dma_ctrl_END (7)
#define SOC_LCIPHER_TEST_REG1_zuc_key_cov_START (8)
#define SOC_LCIPHER_TEST_REG1_zuc_key_cov_END (8)
#define SOC_LCIPHER_TEST_REG1_aes_iv_cov_START (9)
#define SOC_LCIPHER_TEST_REG1_aes_iv_cov_END (9)
#define SOC_LCIPHER_TEST_REG1_snow3g_iv_cov_START (10)
#define SOC_LCIPHER_TEST_REG1_snow3g_iv_cov_END (10)
#define SOC_LCIPHER_TEST_REG1_zuc_iv_cov_START (11)
#define SOC_LCIPHER_TEST_REG1_zuc_iv_cov_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_TEST_REG2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dma_rd_gnt : 1;
        unsigned int dma_ocd_gnt : 1;
        unsigned int dma_icd_gnt : 1;
        unsigned int dma_obuf_gnt : 1;
        unsigned int dma_ibuf_gnt : 1;
        unsigned int reserved_0 : 3;
        unsigned int dma_rd_req : 1;
        unsigned int dma_ocd_req : 1;
        unsigned int dma_icd_req : 1;
        unsigned int dma_obuf_req : 1;
        unsigned int dma_ibuf_req : 1;
        unsigned int reserved_1 : 3;
        unsigned int dma_rd_idle : 1;
        unsigned int dma_ocd_idle : 1;
        unsigned int dma_icd_idle : 1;
        unsigned int dma_obuf_idle : 1;
        unsigned int dma_ibuf_idle : 1;
        unsigned int reserved_2 : 3;
        unsigned int dma_rd_trans_end : 1;
        unsigned int dma_ocd_last_read : 1;
        unsigned int dma_icd_last_read : 1;
        unsigned int dma_obuf_trans_end : 1;
        unsigned int dma_ibuf_last_read : 1;
        unsigned int reserved_3 : 3;
    } reg;
} SOC_LCIPHER_cipher_debug20_UNION;
#endif
#define SOC_LCIPHER_cipher_debug20_dma_rd_gnt_START (0)
#define SOC_LCIPHER_cipher_debug20_dma_rd_gnt_END (0)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_gnt_START (1)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_gnt_END (1)
#define SOC_LCIPHER_cipher_debug20_dma_icd_gnt_START (2)
#define SOC_LCIPHER_cipher_debug20_dma_icd_gnt_END (2)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_gnt_START (3)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_gnt_END (3)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_gnt_START (4)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_gnt_END (4)
#define SOC_LCIPHER_cipher_debug20_dma_rd_req_START (8)
#define SOC_LCIPHER_cipher_debug20_dma_rd_req_END (8)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_req_START (9)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_req_END (9)
#define SOC_LCIPHER_cipher_debug20_dma_icd_req_START (10)
#define SOC_LCIPHER_cipher_debug20_dma_icd_req_END (10)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_req_START (11)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_req_END (11)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_req_START (12)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_req_END (12)
#define SOC_LCIPHER_cipher_debug20_dma_rd_idle_START (16)
#define SOC_LCIPHER_cipher_debug20_dma_rd_idle_END (16)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_idle_START (17)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_idle_END (17)
#define SOC_LCIPHER_cipher_debug20_dma_icd_idle_START (18)
#define SOC_LCIPHER_cipher_debug20_dma_icd_idle_END (18)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_idle_START (19)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_idle_END (19)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_idle_START (20)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_idle_END (20)
#define SOC_LCIPHER_cipher_debug20_dma_rd_trans_end_START (24)
#define SOC_LCIPHER_cipher_debug20_dma_rd_trans_end_END (24)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_last_read_START (25)
#define SOC_LCIPHER_cipher_debug20_dma_ocd_last_read_END (25)
#define SOC_LCIPHER_cipher_debug20_dma_icd_last_read_START (26)
#define SOC_LCIPHER_cipher_debug20_dma_icd_last_read_END (26)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_trans_end_START (27)
#define SOC_LCIPHER_cipher_debug20_dma_obuf_trans_end_END (27)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_last_read_START (28)
#define SOC_LCIPHER_cipher_debug20_dma_ibuf_last_read_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug0_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug2_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug3_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug4_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug5_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug6_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug7_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug8_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug9_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug10_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug11_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug12_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug13_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug14_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug15_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug16_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug17_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug18_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_cipher_debug19_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_srst : 1;
        unsigned int ch_bdq_clear : 1;
        unsigned int ch_rdq_clear : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CH0_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH0_SOFTRESET_ch_srst_START (0)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_srst_END (0)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_bdq_clear_START (1)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_bdq_clear_END (1)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_rdq_clear_START (2)
#define SOC_LCIPHER_CH0_SOFTRESET_ch_rdq_clear_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_en : 1;
        unsigned int reserved : 29;
        unsigned int pack_en : 1;
        unsigned int ch_busy : 1;
    } reg;
} SOC_LCIPHER_CH0_EN_UNION;
#endif
#define SOC_LCIPHER_CH0_EN_ch_en_START (0)
#define SOC_LCIPHER_CH0_EN_ch_en_END (0)
#define SOC_LCIPHER_CH0_EN_pack_en_START (30)
#define SOC_LCIPHER_CH0_EN_pack_en_END (30)
#define SOC_LCIPHER_CH0_EN_ch_busy_START (31)
#define SOC_LCIPHER_CH0_EN_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iv_sel : 1;
        unsigned int iv_num : 1;
        unsigned int rdq_ctrl : 2;
        unsigned int reserved_0 : 1;
        unsigned int ufield_len : 2;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_LCIPHER_CH0_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH0_CONFIG_iv_sel_START (0)
#define SOC_LCIPHER_CH0_CONFIG_iv_sel_END (0)
#define SOC_LCIPHER_CH0_CONFIG_iv_num_START (1)
#define SOC_LCIPHER_CH0_CONFIG_iv_num_END (1)
#define SOC_LCIPHER_CH0_CONFIG_rdq_ctrl_START (2)
#define SOC_LCIPHER_CH0_CONFIG_rdq_ctrl_END (3)
#define SOC_LCIPHER_CH0_CONFIG_ufield_len_START (5)
#define SOC_LCIPHER_CH0_CONFIG_ufield_len_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH0_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH0_BDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH0_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH0_BDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0 : 6;
        unsigned int rptr : 10;
        unsigned int reserved_1 : 4;
        unsigned int ch_bdq_empty : 1;
        unsigned int ch_bdq_full : 1;
    } reg;
} SOC_LCIPHER_CH0_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH0_BDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH0_BDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH0_BDQ_PTR_rptr_END (25)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_empty_START (30)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_empty_END (30)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_full_START (31)
#define SOC_LCIPHER_CH0_BDQ_PTR_ch_bdq_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH0_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_RADDR_addr_START (0)
#define SOC_LCIPHER_CH0_BDQ_RADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH0_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_BDQ_WADDR_addr_START (0)
#define SOC_LCIPHER_CH0_BDQ_WADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch0_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH0_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH0_BD_NUM_ch0_bd_num_START (0)
#define SOC_LCIPHER_CH0_BD_NUM_ch0_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch0_invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH0_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ch0_invalid_bd_num_START (0)
#define SOC_LCIPHER_CH0_INVALID_BD_NUM_ch0_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_srst : 1;
        unsigned int ch_bdq_clear : 1;
        unsigned int ch_rdq_clear : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CH1_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH1_SOFTRESET_ch_srst_START (0)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_srst_END (0)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_bdq_clear_START (1)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_bdq_clear_END (1)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_rdq_clear_START (2)
#define SOC_LCIPHER_CH1_SOFTRESET_ch_rdq_clear_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_en : 1;
        unsigned int reserved : 29;
        unsigned int pack_en : 1;
        unsigned int ch_busy : 1;
    } reg;
} SOC_LCIPHER_CH1_EN_UNION;
#endif
#define SOC_LCIPHER_CH1_EN_ch_en_START (0)
#define SOC_LCIPHER_CH1_EN_ch_en_END (0)
#define SOC_LCIPHER_CH1_EN_pack_en_START (30)
#define SOC_LCIPHER_CH1_EN_pack_en_END (30)
#define SOC_LCIPHER_CH1_EN_ch_busy_START (31)
#define SOC_LCIPHER_CH1_EN_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iv_sel : 1;
        unsigned int iv_num : 1;
        unsigned int rdq_ctrl : 2;
        unsigned int reserved_0 : 1;
        unsigned int ufield_len : 2;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_LCIPHER_CH1_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH1_CONFIG_iv_sel_START (0)
#define SOC_LCIPHER_CH1_CONFIG_iv_sel_END (0)
#define SOC_LCIPHER_CH1_CONFIG_iv_num_START (1)
#define SOC_LCIPHER_CH1_CONFIG_iv_num_END (1)
#define SOC_LCIPHER_CH1_CONFIG_rdq_ctrl_START (2)
#define SOC_LCIPHER_CH1_CONFIG_rdq_ctrl_END (3)
#define SOC_LCIPHER_CH1_CONFIG_ufield_len_START (5)
#define SOC_LCIPHER_CH1_CONFIG_ufield_len_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH1_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH1_BDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH1_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH1_BDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0 : 6;
        unsigned int rptr : 10;
        unsigned int reserved_1 : 4;
        unsigned int ch1_bdq_empty : 1;
        unsigned int ch1_bdq_full : 1;
    } reg;
} SOC_LCIPHER_CH1_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH1_BDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH1_BDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH1_BDQ_PTR_rptr_END (25)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_empty_START (30)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_empty_END (30)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_full_START (31)
#define SOC_LCIPHER_CH1_BDQ_PTR_ch1_bdq_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH1_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_RADDR_addr_START (0)
#define SOC_LCIPHER_CH1_BDQ_RADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH1_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_BDQ_WADDR_addr_START (0)
#define SOC_LCIPHER_CH1_BDQ_WADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH1_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH1_BD_NUM_ch1_bd_num_START (0)
#define SOC_LCIPHER_CH1_BD_NUM_ch1_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH1_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ch1_invalid_bd_num_START (0)
#define SOC_LCIPHER_CH1_INVALID_BD_NUM_ch1_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_srst : 1;
        unsigned int ch_bdq_clear : 1;
        unsigned int ch_rdq_clear : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CH2_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH2_SOFTRESET_ch_srst_START (0)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_srst_END (0)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_bdq_clear_START (1)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_bdq_clear_END (1)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_rdq_clear_START (2)
#define SOC_LCIPHER_CH2_SOFTRESET_ch_rdq_clear_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_en : 1;
        unsigned int reserved : 29;
        unsigned int pack_en : 1;
        unsigned int ch_busy : 1;
    } reg;
} SOC_LCIPHER_CH2_EN_UNION;
#endif
#define SOC_LCIPHER_CH2_EN_ch_en_START (0)
#define SOC_LCIPHER_CH2_EN_ch_en_END (0)
#define SOC_LCIPHER_CH2_EN_pack_en_START (30)
#define SOC_LCIPHER_CH2_EN_pack_en_END (30)
#define SOC_LCIPHER_CH2_EN_ch_busy_START (31)
#define SOC_LCIPHER_CH2_EN_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iv_sel : 1;
        unsigned int iv_num : 1;
        unsigned int rdq_ctrl : 2;
        unsigned int reserved_0 : 1;
        unsigned int ufield_len : 2;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_LCIPHER_CH2_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH2_CONFIG_iv_sel_START (0)
#define SOC_LCIPHER_CH2_CONFIG_iv_sel_END (0)
#define SOC_LCIPHER_CH2_CONFIG_iv_num_START (1)
#define SOC_LCIPHER_CH2_CONFIG_iv_num_END (1)
#define SOC_LCIPHER_CH2_CONFIG_rdq_ctrl_START (2)
#define SOC_LCIPHER_CH2_CONFIG_rdq_ctrl_END (3)
#define SOC_LCIPHER_CH2_CONFIG_ufield_len_START (5)
#define SOC_LCIPHER_CH2_CONFIG_ufield_len_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH2_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH2_BDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH2_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH2_BDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0 : 6;
        unsigned int rptr : 10;
        unsigned int reserved_1 : 4;
        unsigned int ch2_bdq_empty : 1;
        unsigned int ch2_bdq_full : 1;
    } reg;
} SOC_LCIPHER_CH2_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH2_BDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH2_BDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH2_BDQ_PTR_rptr_END (25)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_empty_START (30)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_empty_END (30)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_full_START (31)
#define SOC_LCIPHER_CH2_BDQ_PTR_ch2_bdq_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH2_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_RADDR_addr_START (0)
#define SOC_LCIPHER_CH2_BDQ_RADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH2_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_BDQ_WADDR_addr_START (0)
#define SOC_LCIPHER_CH2_BDQ_WADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH2_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH2_BD_NUM_ch2_bd_num_START (0)
#define SOC_LCIPHER_CH2_BD_NUM_ch2_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch2_invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH2_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ch2_invalid_bd_num_START (0)
#define SOC_LCIPHER_CH2_INVALID_BD_NUM_ch2_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_srst : 1;
        unsigned int ch_bdq_clear : 1;
        unsigned int ch_rdq_clear : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CH3_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH3_SOFTRESET_ch_srst_START (0)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_srst_END (0)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_bdq_clear_START (1)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_bdq_clear_END (1)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_rdq_clear_START (2)
#define SOC_LCIPHER_CH3_SOFTRESET_ch_rdq_clear_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_en : 1;
        unsigned int reserved : 29;
        unsigned int pack_en : 1;
        unsigned int ch_busy : 1;
    } reg;
} SOC_LCIPHER_CH3_EN_UNION;
#endif
#define SOC_LCIPHER_CH3_EN_ch_en_START (0)
#define SOC_LCIPHER_CH3_EN_ch_en_END (0)
#define SOC_LCIPHER_CH3_EN_pack_en_START (30)
#define SOC_LCIPHER_CH3_EN_pack_en_END (30)
#define SOC_LCIPHER_CH3_EN_ch_busy_START (31)
#define SOC_LCIPHER_CH3_EN_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iv_sel : 1;
        unsigned int iv_num : 1;
        unsigned int rdq_ctrl : 2;
        unsigned int reserved_0 : 1;
        unsigned int ufield_len : 2;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_LCIPHER_CH3_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH3_CONFIG_iv_sel_START (0)
#define SOC_LCIPHER_CH3_CONFIG_iv_sel_END (0)
#define SOC_LCIPHER_CH3_CONFIG_iv_num_START (1)
#define SOC_LCIPHER_CH3_CONFIG_iv_num_END (1)
#define SOC_LCIPHER_CH3_CONFIG_rdq_ctrl_START (2)
#define SOC_LCIPHER_CH3_CONFIG_rdq_ctrl_END (3)
#define SOC_LCIPHER_CH3_CONFIG_ufield_len_START (5)
#define SOC_LCIPHER_CH3_CONFIG_ufield_len_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH3_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH3_BDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH3_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH3_BDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0 : 6;
        unsigned int rptr : 10;
        unsigned int reserved_1 : 4;
        unsigned int ch3_bdq_empty : 1;
        unsigned int ch3_bdq_full : 1;
    } reg;
} SOC_LCIPHER_CH3_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH3_BDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH3_BDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH3_BDQ_PTR_rptr_END (25)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_empty_START (30)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_empty_END (30)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_full_START (31)
#define SOC_LCIPHER_CH3_BDQ_PTR_ch3_bdq_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH3_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_RADDR_addr_START (0)
#define SOC_LCIPHER_CH3_BDQ_RADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH3_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_BDQ_WADDR_addr_START (0)
#define SOC_LCIPHER_CH3_BDQ_WADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch3_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH3_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH3_BD_NUM_ch3_bd_num_START (0)
#define SOC_LCIPHER_CH3_BD_NUM_ch3_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch3_invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH3_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ch3_invalid_bd_num_START (0)
#define SOC_LCIPHER_CH3_INVALID_BD_NUM_ch3_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_srst : 1;
        unsigned int ch_bdq_clear : 1;
        unsigned int ch_rdq_clear : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CH4_SOFTRESET_UNION;
#endif
#define SOC_LCIPHER_CH4_SOFTRESET_ch_srst_START (0)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_srst_END (0)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_bdq_clear_START (1)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_bdq_clear_END (1)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_rdq_clear_START (2)
#define SOC_LCIPHER_CH4_SOFTRESET_ch_rdq_clear_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch_en : 1;
        unsigned int reserved : 29;
        unsigned int pack_en : 1;
        unsigned int ch_busy : 1;
    } reg;
} SOC_LCIPHER_CH4_EN_UNION;
#endif
#define SOC_LCIPHER_CH4_EN_ch_en_START (0)
#define SOC_LCIPHER_CH4_EN_ch_en_END (0)
#define SOC_LCIPHER_CH4_EN_pack_en_START (30)
#define SOC_LCIPHER_CH4_EN_pack_en_END (30)
#define SOC_LCIPHER_CH4_EN_ch_busy_START (31)
#define SOC_LCIPHER_CH4_EN_ch_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int iv_sel : 1;
        unsigned int iv_num : 1;
        unsigned int rdq_ctrl : 2;
        unsigned int reserved_0 : 1;
        unsigned int ufield_len : 2;
        unsigned int reserved_1 : 25;
    } reg;
} SOC_LCIPHER_CH4_CONFIG_UNION;
#endif
#define SOC_LCIPHER_CH4_CONFIG_iv_sel_START (0)
#define SOC_LCIPHER_CH4_CONFIG_iv_sel_END (0)
#define SOC_LCIPHER_CH4_CONFIG_iv_num_START (1)
#define SOC_LCIPHER_CH4_CONFIG_iv_num_END (1)
#define SOC_LCIPHER_CH4_CONFIG_rdq_ctrl_START (2)
#define SOC_LCIPHER_CH4_CONFIG_rdq_ctrl_END (3)
#define SOC_LCIPHER_CH4_CONFIG_ufield_len_START (5)
#define SOC_LCIPHER_CH4_CONFIG_ufield_len_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH4_BDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH4_BDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH4_BDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH4_BDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0 : 6;
        unsigned int rptr : 10;
        unsigned int reserved_1 : 4;
        unsigned int ch4_bdq_empty : 1;
        unsigned int ch4_bdq_full : 1;
    } reg;
} SOC_LCIPHER_CH4_BDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH4_BDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH4_BDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH4_BDQ_PTR_rptr_END (25)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_empty_START (30)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_empty_END (30)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_full_START (31)
#define SOC_LCIPHER_CH4_BDQ_PTR_ch4_bdq_full_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH4_BDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_RADDR_addr_START (0)
#define SOC_LCIPHER_CH4_BDQ_RADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int addr : 32;
    } reg;
} SOC_LCIPHER_CH4_BDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_BDQ_WADDR_addr_START (0)
#define SOC_LCIPHER_CH4_BDQ_WADDR_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch4_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH4_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH4_BD_NUM_ch4_bd_num_START (0)
#define SOC_LCIPHER_CH4_BD_NUM_ch4_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch4_invalid_bd_num : 32;
    } reg;
} SOC_LCIPHER_CH4_INVALID_BD_NUM_UNION;
#endif
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ch4_invalid_bd_num_START (0)
#define SOC_LCIPHER_CH4_INVALID_BD_NUM_ch4_invalid_bd_num_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch0_pkt_num : 4;
        unsigned int ch1_pkt_num : 4;
        unsigned int ch2_pkt_num : 4;
        unsigned int ch3_pkt_num : 4;
        unsigned int timeout_time : 9;
        unsigned int ch4_pkt_num : 4;
        unsigned int reserved : 3;
    } reg;
} SOC_LCIPHER_CH_INT_PKT_INTERVAL_UNION;
#endif
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch0_pkt_num_START (0)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch0_pkt_num_END (3)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch1_pkt_num_START (4)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch1_pkt_num_END (7)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch2_pkt_num_START (8)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch2_pkt_num_END (11)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch3_pkt_num_START (12)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch3_pkt_num_END (15)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_timeout_time_START (16)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_timeout_time_END (24)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch4_pkt_num_START (25)
#define SOC_LCIPHER_CH_INT_PKT_INTERVAL_ch4_pkt_num_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cipher_int0 : 1;
        unsigned int cipher_int1 : 1;
        unsigned int cipher_int2 : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_LCIPHER_CIPHER_INT_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int0_START (0)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int0_END (0)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int1_START (1)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int1_END (1)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int2_START (2)
#define SOC_LCIPHER_CIPHER_INT_STATUS_cipher_int2_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch0_bdq_full : 1;
        unsigned int ch0_rdq_full : 1;
        unsigned int ch0_nbd_done : 1;
        unsigned int ch0_bd_done : 1;
        unsigned int ch0_allbd_done : 1;
        unsigned int ch0_integrity_err : 1;
        unsigned int reserved_0 : 2;
        unsigned int ch1_bdq_full : 1;
        unsigned int ch1_rdq_full : 1;
        unsigned int ch1_nbd_done : 1;
        unsigned int ch1_bd_done : 1;
        unsigned int ch1_allbd_done : 1;
        unsigned int ch1_integrity_err : 1;
        unsigned int reserved_1 : 2;
        unsigned int ch2_bdq_full : 1;
        unsigned int ch2_rdq_full : 1;
        unsigned int ch2_nbd_done : 1;
        unsigned int ch2_bd_done : 1;
        unsigned int ch2_allbd_done : 1;
        unsigned int ch2_integrity_err : 1;
        unsigned int reserved_2 : 2;
        unsigned int ch3_bdq_full : 1;
        unsigned int ch3_rdq_full : 1;
        unsigned int ch3_nbd_done : 1;
        unsigned int ch3_bd_done : 1;
        unsigned int ch3_allbd_done : 1;
        unsigned int ch3_integrity_err : 1;
        unsigned int reserved_3 : 2;
    } reg;
} SOC_LCIPHER_CIPHER_INT0_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bdq_full_START (0)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bdq_full_END (0)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_rdq_full_START (1)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_rdq_full_END (1)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_nbd_done_START (2)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_nbd_done_END (2)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bd_done_START (3)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_bd_done_END (3)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_allbd_done_START (4)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_allbd_done_END (4)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_integrity_err_START (5)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch0_integrity_err_END (5)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bdq_full_START (8)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bdq_full_END (8)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_rdq_full_START (9)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_rdq_full_END (9)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_nbd_done_START (10)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_nbd_done_END (10)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bd_done_START (11)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_bd_done_END (11)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_allbd_done_START (12)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_allbd_done_END (12)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_integrity_err_START (13)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch1_integrity_err_END (13)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bdq_full_START (16)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bdq_full_END (16)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_rdq_full_START (17)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_rdq_full_END (17)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_nbd_done_START (18)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_nbd_done_END (18)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bd_done_START (19)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_bd_done_END (19)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_allbd_done_START (20)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_allbd_done_END (20)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_integrity_err_START (21)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch2_integrity_err_END (21)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bdq_full_START (24)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bdq_full_END (24)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_rdq_full_START (25)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_rdq_full_END (25)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_nbd_done_START (26)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_nbd_done_END (26)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bd_done_START (27)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_bd_done_END (27)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_allbd_done_START (28)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_allbd_done_END (28)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_integrity_err_START (29)
#define SOC_LCIPHER_CIPHER_INT0_STATUS_ch3_integrity_err_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int0_mask : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT0_MASK_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_MASK_int0_mask_START (0)
#define SOC_LCIPHER_CIPHER_INT0_MASK_int0_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int0_mstatus : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT0_MSTATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_int0_mstatus_START (0)
#define SOC_LCIPHER_CIPHER_INT0_MSTATUS_int0_mstatus_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch0_bdq_empty : 1;
        unsigned int ch0_rdq_empty : 1;
        unsigned int ch0_timeout : 1;
        unsigned int reserved_0 : 5;
        unsigned int ch1_bdq_empty : 1;
        unsigned int ch1_rdq_empty : 1;
        unsigned int ch1_timeout : 1;
        unsigned int reserved_1 : 5;
        unsigned int ch2_bdq_empty : 1;
        unsigned int ch2_rdq_empty : 1;
        unsigned int ch2_timeout : 1;
        unsigned int reserved_2 : 5;
        unsigned int ch3_bdq_empty : 1;
        unsigned int ch3_rdq_empty : 1;
        unsigned int ch3_timeout : 1;
        unsigned int reserved_3 : 5;
    } reg;
} SOC_LCIPHER_CIPHER_INT1_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_bdq_empty_START (0)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_bdq_empty_END (0)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_rdq_empty_START (1)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_rdq_empty_END (1)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_timeout_START (2)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch0_timeout_END (2)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_bdq_empty_START (8)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_bdq_empty_END (8)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_rdq_empty_START (9)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_rdq_empty_END (9)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_timeout_START (10)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch1_timeout_END (10)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_bdq_empty_START (16)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_bdq_empty_END (16)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_rdq_empty_START (17)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_rdq_empty_END (17)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_timeout_START (18)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch2_timeout_END (18)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_bdq_empty_START (24)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_bdq_empty_END (24)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_rdq_empty_START (25)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_rdq_empty_END (25)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_timeout_START (26)
#define SOC_LCIPHER_CIPHER_INT1_STATUS_ch3_timeout_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int1_mask : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT1_MASK_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_MASK_int1_mask_START (0)
#define SOC_LCIPHER_CIPHER_INT1_MASK_int1_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int1_mstatus : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT1_MSTATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_int1_mstatus_START (0)
#define SOC_LCIPHER_CIPHER_INT1_MSTATUS_int1_mstatus_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch4_bdq_full : 1;
        unsigned int ch4_rdq_full : 1;
        unsigned int ch4_nbd_done : 1;
        unsigned int ch4_bd_done : 1;
        unsigned int ch4_allbd_done : 1;
        unsigned int ch4_bdq_empty : 1;
        unsigned int ch4_rdq_empty : 1;
        unsigned int ch4_timeout : 1;
        unsigned int reserved : 24;
    } reg;
} SOC_LCIPHER_CIPHER_INT2_STATUS_UNION;
#endif
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_full_START (0)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_full_END (0)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_full_START (1)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_full_END (1)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_nbd_done_START (2)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_nbd_done_END (2)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bd_done_START (3)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bd_done_END (3)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_allbd_done_START (4)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_allbd_done_END (4)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_empty_START (5)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_bdq_empty_END (5)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_empty_START (6)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_rdq_empty_END (6)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_timeout_START (7)
#define SOC_LCIPHER_CIPHER_INT2_STATUS_ch4_timeout_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT2_MASK_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_LCIPHER_CIPHER_INT2_MSTATUS_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH0_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH0_RDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH0_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH0_RDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0: 6;
        unsigned int rptr : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_LCIPHER_CH0_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH0_RDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH0_RDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH0_RDQ_PTR_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr : 32;
    } reg;
} SOC_LCIPHER_CH0_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_RADDR_raddr_START (0)
#define SOC_LCIPHER_CH0_RDQ_RADDR_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr : 32;
    } reg;
} SOC_LCIPHER_CH0_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH0_RDQ_WADDR_waddr_START (0)
#define SOC_LCIPHER_CH0_RDQ_WADDR_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH1_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH1_RDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH1_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH1_RDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0: 6;
        unsigned int rptr : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_LCIPHER_CH1_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH1_RDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH1_RDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH1_RDQ_PTR_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr : 32;
    } reg;
} SOC_LCIPHER_CH1_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_RADDR_raddr_START (0)
#define SOC_LCIPHER_CH1_RDQ_RADDR_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr : 32;
    } reg;
} SOC_LCIPHER_CH1_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH1_RDQ_WADDR_waddr_START (0)
#define SOC_LCIPHER_CH1_RDQ_WADDR_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH2_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH2_RDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH2_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH2_RDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0: 6;
        unsigned int rptr : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_LCIPHER_CH2_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH2_RDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH2_RDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH2_RDQ_PTR_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr : 32;
    } reg;
} SOC_LCIPHER_CH2_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_RADDR_raddr_START (0)
#define SOC_LCIPHER_CH2_RDQ_RADDR_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr : 32;
    } reg;
} SOC_LCIPHER_CH2_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH2_RDQ_WADDR_waddr_START (0)
#define SOC_LCIPHER_CH2_RDQ_WADDR_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH3_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH3_RDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH3_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH3_RDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0: 6;
        unsigned int rptr : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_LCIPHER_CH3_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH3_RDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH3_RDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH3_RDQ_PTR_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr : 32;
    } reg;
} SOC_LCIPHER_CH3_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_RADDR_raddr_START (0)
#define SOC_LCIPHER_CH3_RDQ_RADDR_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr : 32;
    } reg;
} SOC_LCIPHER_CH3_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH3_RDQ_WADDR_waddr_START (0)
#define SOC_LCIPHER_CH3_RDQ_WADDR_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int base_addr_l : 3;
        unsigned int base_addr : 29;
    } reg;
} SOC_LCIPHER_CH4_RDQ_BADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_l_START (0)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_l_END (2)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_START (3)
#define SOC_LCIPHER_CH4_RDQ_BADDR_base_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int size : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_LCIPHER_CH4_RDQ_SIZE_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_SIZE_size_START (0)
#define SOC_LCIPHER_CH4_RDQ_SIZE_size_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wptr : 10;
        unsigned int reserved_0: 6;
        unsigned int rptr : 10;
        unsigned int reserved_1: 6;
    } reg;
} SOC_LCIPHER_CH4_RDQ_PTR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_PTR_wptr_START (0)
#define SOC_LCIPHER_CH4_RDQ_PTR_wptr_END (9)
#define SOC_LCIPHER_CH4_RDQ_PTR_rptr_START (16)
#define SOC_LCIPHER_CH4_RDQ_PTR_rptr_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int raddr : 32;
    } reg;
} SOC_LCIPHER_CH4_RDQ_RADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_RADDR_raddr_START (0)
#define SOC_LCIPHER_CH4_RDQ_RADDR_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int waddr : 32;
    } reg;
} SOC_LCIPHER_CH4_RDQ_WADDR_UNION;
#endif
#define SOC_LCIPHER_CH4_RDQ_WADDR_waddr_START (0)
#define SOC_LCIPHER_CH4_RDQ_WADDR_waddr_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
