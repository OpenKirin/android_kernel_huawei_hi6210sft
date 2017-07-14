#ifndef __SOC_SOCP_INTERFACE_H__
#define __SOC_SOCP_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SOCP_GLOBAL_CTRL_ADDR(base) ((base) + (0x0000))
#define SOC_SOCP_ENC_SRST_CTRL_ADDR(base) ((base) + (0x0004))
#define SOC_SOCP_DEC_SRST_CTRL_ADDR(base) ((base) + (0x0008))
#define SOC_SOCP_ENC_CH_STATUS_ADDR(base) ((base) + (0x000C))
#define SOC_SOCP_DEC_CH_STATUS_ADDR(base) ((base) + (0x0010))
#define SOC_SOCP_CLK_CTRL_ADDR(base) ((base) + (0x0014))
#define SOC_SOCP_PRIOR_CFG_ADDR(base) ((base) + (0x0018))
#define SOC_SOCP_DEC_INT_TIMEOUT_ADDR(base) ((base) + (0x0020))
#define SOC_SOCP_INT_TIMEOUT_ADDR(base) ((base) + (0x0024))
#define SOC_SOCP_BUFFER_TIMEOUT_ADDR(base) ((base) + (0x0028))
#define SOC_SOCP_DEC_PKT_LEN_CFG_ADDR(base) ((base) + (0x002C))
#define SOC_SOCP_ENC_SRCCH_SECCTRL_ADDR(base) ((base) + (0x0030))
#define SOC_SOCP_ENC_DSTCH_SECCTRL_ADDR(base) ((base) + (0x0034))
#define SOC_SOCP_DEC_SRCCH_SECCTRL_ADDR(base) ((base) + (0x0038))
#define SOC_SOCP_DEC_DSTCH_SECCTRL_ADDR(base) ((base) + (0x003C))
#define SOC_SOCP_GLB_REG_SECCTRL_ADDR(base) ((base) + (0x0040))
#define SOC_SOCP_GLOBAL_INT_STATUS_ADDR(base) ((base) + (0x0050))
#define SOC_SOCP_ENC_CORE0_MASK0_ADDR(base) ((base) + (0x0054))
#define SOC_SOCP_ENC_CORE0_RAWINT0_ADDR(base) ((base) + (0x0058))
#define SOC_SOCP_ENC_CORE0_INT0_ADDR(base) ((base) + (0x005C))
#define SOC_SOCP_ENC_CORE0_MASK1_ADDR(base) ((base) + (0x0060))
#define SOC_SOCP_ENC_CORE1_MASK1_ADDR(base) ((base) + (0x0064))
#define SOC_SOCP_ENC_RAWINT1_ADDR(base) ((base) + (0x0068))
#define SOC_SOCP_ENC_CORE0_INT1_ADDR(base) ((base) + (0x006C))
#define SOC_SOCP_ENC_CORE1_INT1_ADDR(base) ((base) + (0x0070))
#define SOC_SOCP_ENC_CORE0_MASK2_ADDR(base) ((base) + (0x0074))
#define SOC_SOCP_ENC_CORE0_RAWINT2_ADDR(base) ((base) + (0x0078))
#define SOC_SOCP_ENC_CORE0_INT2_ADDR(base) ((base) + (0x007C))
#define SOC_SOCP_ENC_CORE0_MASK3_ADDR(base) ((base) + (0x0080))
#define SOC_SOCP_ENC_CORE1_MASK3_ADDR(base) ((base) + (0x0084))
#define SOC_SOCP_ENC_RAWINT3_ADDR(base) ((base) + (0x0088))
#define SOC_SOCP_ENC_CORE0_INT3_ADDR(base) ((base) + (0x008C))
#define SOC_SOCP_ENC_CORE1_INT3_ADDR(base) ((base) + (0x0090))
#define SOC_SOCP_DEC_CORE0_MASK0_ADDR(base) ((base) + (0x00A8))
#define SOC_SOCP_DEC_CORE1_MASK0_ADDR(base) ((base) + (0x00AC))
#define SOC_SOCP_DEC_RAWINT0_ADDR(base) ((base) + (0x00B0))
#define SOC_SOCP_DEC_CORE0_INT0_ADDR(base) ((base) + (0x00B4))
#define SOC_SOCP_DEC_CORE1_INT0_ADDR(base) ((base) + (0x00B8))
#define SOC_SOCP_DEC_CORE0_MASK1_ADDR(base) ((base) + (0x00BC))
#define SOC_SOCP_DEC_CORE0_RAWINT1_ADDR(base) ((base) + (0x00C0))
#define SOC_SOCP_DEC_CORE0_INT1_ADDR(base) ((base) + (0x00C4))
#define SOC_SOCP_DEC_CORE0_MASK2_ADDR(base) ((base) + (0x00C8))
#define SOC_SOCP_DEC_CORE1Note_MASK2_ADDR(base) ((base) + (0x00CC))
#define SOC_SOCP_DEC_RAWINT2_ADDR(base) ((base) + (0x00D0))
#define SOC_SOCP_DEC_CORE0Note_NT2_ADDR(base) ((base) + (0x00D4))
#define SOC_SOCP_DEC_CORE1Note_INT2_ADDR(base) ((base) + (0x00D8))
#define SOC_SOCP_ENC_CORE1_MASK0_ADDR(base) ((base) + (0x00DC))
#define SOC_SOCP_ENC_CORE1_INT0_ADDR(base) ((base) + (0x00E0))
#define SOC_SOCP_ENC_CORE1_MASK2_ADDR(base) ((base) + (0x00E4))
#define SOC_SOCP_ENC_CORE1_INT2_ADDR(base) ((base) + (0x00E8))
#define SOC_SOCP_DEC_CORE1_MASK1_ADDR(base) ((base) + (0x00EC))
#define SOC_SOCP_DEC_CORE1_INT1_ADDR(base) ((base) + (0x00F0))
#define SOC_SOCP_BUS_ERROR_MASK_ADDR(base) ((base) + (0x00F4))
#define SOC_SOCP_BUS_ERROR_RAWINT_ADDR(base) ((base) + (0x00F8))
#define SOC_SOCP_ENC_SRC_BUFm_WPTR_ADDR(base,m) ((base) + (0x0100+0x40*(m)))
#define SOC_SOCP_ENC_SRC_BUFm_RPTR_ADDR(base,m) ((base) + (0x0104+0x40*(m)))
#define SOC_SOCP_ENC_SRC_BUFm_ADDR_ADDR(base,m) ((base) + (0x0108+0x40*(m)))
#define SOC_SOCP_ENC_SRC_BUFm_CFG0_ADDR(base,m) ((base) + (0x010C+0x40*(m)))
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_ADDR(base,m) ((base) + (0x0110+0x40*(m)))
#define SOC_SOCP_ENC_SRC_RDQ_WPTR_ADDR(base,m) ((base) + (0x0114+0x40*(m)))
#define SOC_SOCP_ENC_SRC_RDQ_RPTR_ADDR(base,m) ((base) + (0x0118+0x40*(m)))
#define SOC_SOCP_ENC_SRC_RDQ_BADDR_ADDR(base,m) ((base) + (0x011C+0x40*(m)))
#define SOC_SOCP_ENC_SRC_RDQ_CFG_ADDR(base,m) ((base) + (0x0120+0x40*(m)))
#define SOC_SOCP_ENC_DEST_BUFn_WPTR_ADDR(base,n) ((base) + (0x0900+0x20*(n)))
#define SOC_SOCP_ENC_DEST_BUFn_RPTR_ADDR(base,n) ((base) + (0x0904+0x20*(n)))
#define SOC_SOCP_ENC_DEST_BUFn_ADDR_ADDR(base,n) ((base) + (0x0908+0x20*(n)))
#define SOC_SOCP_ENC_DEST_BUFn_CFG_ADDR(base,n) ((base) + (0x090C+0x20*(n)))
#define SOC_SOCP_ENC_DEST_BUFn_THRH_ADDR(base,n) ((base) + (0x0910+0x20*(n)))
#define SOC_SOCP_DEC_SRC_BUFx_WPTR_ADDR(base,x) ((base) + (0X0A00+0X40*(x)))
#define SOC_SOCP_DEC_SRC_BUFx_RPTR_ADDR(base,x) ((base) + (0X0A04+0X40*(x)))
#define SOC_SOCP_DEC_SRC_BUFx_ADDR_ADDR(base,x) ((base) + (0X0A08+0X40*(x)))
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_ADDR(base,x) ((base) + (0X0A0C+0X40*(x)))
#define SOC_SOCP_DEC_BUFx_STATUS0_ADDR(base,x) ((base) + (0X0A20+0X40*(x)))
#define SOC_SOCP_DEC_BUFx_STATUS1_ADDR(base,x) ((base) + (0X0A24+0X40*(x)))
#define SOC_SOCP_DEC_DEST_BUFy_WPTR_ADDR(base,y) ((base) + (0x0C00+0x10*y))
#define SOC_SOCP_DEC_DEST_BUFy_RPTR_ADDR(base,y) ((base) + (0x0C04+0x10*y))
#define SOC_SOCP_DEC_DEST_BUFy_ADDR_ADDR(base,y) ((base) + (0x0C08+0x10*y))
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_ADDR(base,y) ((base) + (0x0C0C+0x10*y))
#define SOC_SOCP_ENC_CD_DBG0_ADDR(base) ((base) + (0x0E00))
#define SOC_SOCP_ENC_CD_DBG1_ADDR(base) ((base) + (0x0E04))
#define SOC_SOCP_ENC_IBUF_DBG0_ADDR(base) ((base) + (0x0E08))
#define SOC_SOCP_ENC_IBUF_DBG1_ADDR(base) ((base) + (0x0E0C))
#define SOC_SOCP_ENC_IBUF_DBG2_ADDR(base) ((base) + (0x0E10))
#define SOC_SOCP_ENC_IBUF_DBG3_ADDR(base) ((base) + (0x0E14))
#define SOC_SOCP_ENC_OBUF_DBG0_ADDR(base) ((base) + (0x0E18))
#define SOC_SOCP_ENC_OBUF_DBG1_ADDR(base) ((base) + (0x0E1C))
#define SOC_SOCP_ENC_OBUF_DBG2_ADDR(base) ((base) + (0x0E20))
#define SOC_SOCP_ENC_OBUF_DBG3_ADDR(base) ((base) + (0x0E24))
#define SOC_SOCP_DEC_IBUF_DBG0_ADDR(base) ((base) + (0x0E28))
#define SOC_SOCP_DEC_IBUF_DBG1_ADDR(base) ((base) + (0x0E2C))
#define SOC_SOCP_DEC_IBUF_DBG2_ADDR(base) ((base) + (0x0E30))
#define SOC_SOCP_DEC_IBUF_DBG3_ADDR(base) ((base) + (0x0E34))
#define SOC_SOCP_DEC_OBUF_DBG0_ADDR(base) ((base) + (0x0E38))
#define SOC_SOCP_DEC_OBUF_DBG1_ADDR(base) ((base) + (0x0E3C))
#define SOC_SOCP_DEC_OBUF_DBG2_ADDR(base) ((base) + (0x0E40))
#define SOC_SOCP_DEC_OBUF_DBG3_ADDR(base) ((base) + (0x0E44))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int global_srst : 1;
        unsigned int reserved_0 : 15;
        unsigned int ch_halt : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_SOCP_GLOBAL_CTRL_UNION;
#endif
#define SOC_SOCP_GLOBAL_CTRL_global_srst_START (0)
#define SOC_SOCP_GLOBAL_CTRL_global_srst_END (0)
#define SOC_SOCP_GLOBAL_CTRL_ch_halt_START (16)
#define SOC_SOCP_GLOBAL_CTRL_ch_halt_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_chm_srst : 32;
    } reg;
} SOC_SOCP_ENC_SRST_CTRL_UNION;
#endif
#define SOC_SOCP_ENC_SRST_CTRL_enc_chm_srst_START (0)
#define SOC_SOCP_ENC_SRST_CTRL_enc_chm_srst_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_chx_srst : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SOCP_DEC_SRST_CTRL_UNION;
#endif
#define SOC_SOCP_DEC_SRST_CTRL_dec_chx_srst_START (0)
#define SOC_SOCP_DEC_SRST_CTRL_dec_chx_srst_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_chm_busy : 32;
    } reg;
} SOC_SOCP_ENC_CH_STATUS_UNION;
#endif
#define SOC_SOCP_ENC_CH_STATUS_enc_chm_busy_START (0)
#define SOC_SOCP_ENC_CH_STATUS_enc_chm_busy_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_chx_busy : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_SOCP_DEC_CH_STATUS_UNION;
#endif
#define SOC_SOCP_DEC_CH_STATUS_dec_chx_busy_START (0)
#define SOC_SOCP_DEC_CH_STATUS_dec_chx_busy_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_gclk_en : 1;
        unsigned int dec_gclk_en : 1;
        unsigned int reg_clk_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int ram_gclk_en : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_SOCP_CLK_CTRL_UNION;
#endif
#define SOC_SOCP_CLK_CTRL_enc_gclk_en_START (0)
#define SOC_SOCP_CLK_CTRL_enc_gclk_en_END (0)
#define SOC_SOCP_CLK_CTRL_dec_gclk_en_START (1)
#define SOC_SOCP_CLK_CTRL_dec_gclk_en_END (1)
#define SOC_SOCP_CLK_CTRL_reg_clk_en_START (2)
#define SOC_SOCP_CLK_CTRL_reg_clk_en_END (2)
#define SOC_SOCP_CLK_CTRL_ram_gclk_en_START (4)
#define SOC_SOCP_CLK_CTRL_ram_gclk_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_prior_cfg : 1;
        unsigned int dec_prior_cfg : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_SOCP_PRIOR_CFG_UNION;
#endif
#define SOC_SOCP_PRIOR_CFG_enc_prior_cfg_START (0)
#define SOC_SOCP_PRIOR_CFG_enc_prior_cfg_END (0)
#define SOC_SOCP_PRIOR_CFG_dec_prior_cfg_START (1)
#define SOC_SOCP_PRIOR_CFG_dec_prior_cfg_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_timeout0_cfg : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_SOCP_INT_TIMEOUT_UNION;
#endif
#define SOC_SOCP_INT_TIMEOUT_int_timeout0_cfg_START (0)
#define SOC_SOCP_INT_TIMEOUT_int_timeout0_cfg_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int buffer_timeout_cfg : 16;
        unsigned int reserved : 15;
        unsigned int buffer_timeout_en : 1;
    } reg;
} SOC_SOCP_BUFFER_TIMEOUT_UNION;
#endif
#define SOC_SOCP_BUFFER_TIMEOUT_buffer_timeout_cfg_START (0)
#define SOC_SOCP_BUFFER_TIMEOUT_buffer_timeout_cfg_END (15)
#define SOC_SOCP_BUFFER_TIMEOUT_buffer_timeout_en_START (31)
#define SOC_SOCP_BUFFER_TIMEOUT_buffer_timeout_en_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_max_pkt_len : 12;
        unsigned int dec_min_pkt_len : 5;
        unsigned int reserved : 15;
    } reg;
} SOC_SOCP_DEC_PKT_LEN_CFG_UNION;
#endif
#define SOC_SOCP_DEC_PKT_LEN_CFG_dec_max_pkt_len_START (0)
#define SOC_SOCP_DEC_PKT_LEN_CFG_dec_max_pkt_len_END (11)
#define SOC_SOCP_DEC_PKT_LEN_CFG_dec_min_pkt_len_START (12)
#define SOC_SOCP_DEC_PKT_LEN_CFG_dec_min_pkt_len_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_dec_obuf_ovf_int : 1;
        unsigned int core0_dec_err_int : 1;
        unsigned int core0_dec_tfr_int : 1;
        unsigned int core1_dec_tfr_int : 1;
        unsigned int core1_dec_obuf_ovf_int : 1;
        unsigned int core1_dec_err_int : 1;
        unsigned int reserved_0 : 4;
        unsigned int core1_enc_rdq_int : 1;
        unsigned int core0_enc_rdq_int : 1;
        unsigned int core0_enc_obuf_ovf_int : 1;
        unsigned int core1_enc_flag_err_int : 1;
        unsigned int core0_enc_flag_err_int : 1;
        unsigned int core0_enc_tfr_int : 1;
        unsigned int core1_enc_obuf_ovf_int : 1;
        unsigned int core1_enc_tfr_int : 1;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_SOCP_GLOBAL_INT_STATUS_UNION;
#endif
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_obuf_ovf_int_START (0)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_obuf_ovf_int_END (0)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_err_int_START (1)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_err_int_END (1)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_tfr_int_START (2)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_dec_tfr_int_END (2)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_tfr_int_START (3)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_tfr_int_END (3)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_obuf_ovf_int_START (4)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_obuf_ovf_int_END (4)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_err_int_START (5)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_dec_err_int_END (5)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_rdq_int_START (10)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_rdq_int_END (10)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_rdq_int_START (11)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_rdq_int_END (11)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_obuf_ovf_int_START (12)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_obuf_ovf_int_END (12)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_flag_err_int_START (13)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_flag_err_int_END (13)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_flag_err_int_START (14)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_flag_err_int_END (14)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_tfr_int_START (15)
#define SOC_SOCP_GLOBAL_INT_STATUS_core0_enc_tfr_int_END (15)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_obuf_ovf_int_START (16)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_obuf_ovf_int_END (16)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_tfr_int_START (17)
#define SOC_SOCP_GLOBAL_INT_STATUS_core1_enc_tfr_int_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_tfr_mask : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SOCP_ENC_CORE0_MASK0_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_MASK0_core0_enc_tfr_mask_START (0)
#define SOC_SOCP_ENC_CORE0_MASK0_core0_enc_tfr_mask_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_tfr_rawint : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SOCP_ENC_CORE0_RAWINT0_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_RAWINT0_enc_tfr_rawint_START (0)
#define SOC_SOCP_ENC_CORE0_RAWINT0_enc_tfr_rawint_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_tfr_maskint : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SOCP_ENC_CORE0_INT0_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_INT0_core0_enc_tfr_maskint_START (0)
#define SOC_SOCP_ENC_CORE0_INT0_core0_enc_tfr_maskint_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_SOCP_ENC_CORE0_MASK1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_SOCP_ENC_CORE1_MASK1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_flag_err_rawint : 32;
    } reg;
} SOC_SOCP_ENC_RAWINT1_UNION;
#endif
#define SOC_SOCP_ENC_RAWINT1_enc_flag_err_rawint_START (0)
#define SOC_SOCP_ENC_RAWINT1_enc_flag_err_rawint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_flag_err_app_maskint : 32;
    } reg;
} SOC_SOCP_ENC_CORE0_INT1_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_INT1_enc_flag_err_app_maskint_START (0)
#define SOC_SOCP_ENC_CORE0_INT1_enc_flag_err_app_maskint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_flag_err_modem_maskint : 32;
    } reg;
} SOC_SOCP_ENC_CORE1_INT1_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_INT1_enc_flag_err_modem_maskint_START (0)
#define SOC_SOCP_ENC_CORE1_INT1_enc_flag_err_modem_maskint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_obuf_ovf_mask : 7;
        unsigned int reserved_0 : 9;
        unsigned int core0_enc_obuf_thrh_ovf_mask : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_SOCP_ENC_CORE0_MASK2_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_MASK2_core0_enc_obuf_ovf_mask_START (0)
#define SOC_SOCP_ENC_CORE0_MASK2_core0_enc_obuf_ovf_mask_END (6)
#define SOC_SOCP_ENC_CORE0_MASK2_core0_enc_obuf_thrh_ovf_mask_START (16)
#define SOC_SOCP_ENC_CORE0_MASK2_core0_enc_obuf_thrh_ovf_mask_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_obuf_ovf_rawint : 7;
        unsigned int reserved_0 : 9;
        unsigned int enc_obuf_thrh_ovf_rawint : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_SOCP_ENC_CORE0_RAWINT2_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_RAWINT2_enc_obuf_ovf_rawint_START (0)
#define SOC_SOCP_ENC_CORE0_RAWINT2_enc_obuf_ovf_rawint_END (6)
#define SOC_SOCP_ENC_CORE0_RAWINT2_enc_obuf_thrh_ovf_rawint_START (16)
#define SOC_SOCP_ENC_CORE0_RAWINT2_enc_obuf_thrh_ovf_rawint_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_obuf_ovf_maskint : 7;
        unsigned int reserved_0 : 9;
        unsigned int core0_enc_obuf_thrh_ovf_maskint : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_SOCP_ENC_CORE0_INT2_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_INT2_core0_enc_obuf_ovf_maskint_START (0)
#define SOC_SOCP_ENC_CORE0_INT2_core0_enc_obuf_ovf_maskint_END (6)
#define SOC_SOCP_ENC_CORE0_INT2_core0_enc_obuf_thrh_ovf_maskint_START (16)
#define SOC_SOCP_ENC_CORE0_INT2_core0_enc_obuf_thrh_ovf_maskint_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_rdq_done_mask : 32;
    } reg;
} SOC_SOCP_ENC_CORE0_MASK3_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_MASK3_core0_enc_rdq_done_mask_START (0)
#define SOC_SOCP_ENC_CORE0_MASK3_core0_enc_rdq_done_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_rdq_done_mask : 32;
    } reg;
} SOC_SOCP_ENC_CORE1_MASK3_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_MASK3_core0_enc_rdq_done_mask_START (0)
#define SOC_SOCP_ENC_CORE1_MASK3_core0_enc_rdq_done_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_rdq_done_rawint : 32;
    } reg;
} SOC_SOCP_ENC_RAWINT3_UNION;
#endif
#define SOC_SOCP_ENC_RAWINT3_enc_rdq_done_rawint_START (0)
#define SOC_SOCP_ENC_RAWINT3_enc_rdq_done_rawint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_enc_rdq_done_int : 32;
    } reg;
} SOC_SOCP_ENC_CORE0_INT3_UNION;
#endif
#define SOC_SOCP_ENC_CORE0_INT3_core0_enc_rdq_done_int_START (0)
#define SOC_SOCP_ENC_CORE0_INT3_core0_enc_rdq_done_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_enc_rdq_done_int : 32;
    } reg;
} SOC_SOCP_ENC_CORE1_INT3_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_INT3_core1_enc_rdq_done_int_START (0)
#define SOC_SOCP_ENC_CORE1_INT3_core1_enc_rdq_done_int_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_dtype0_tfr_int_mask0 : 4;
        unsigned int core0_dtype1_tfr_int_mask1 : 4;
        unsigned int core0_dtype2_tfr_int_mask2 : 4;
        unsigned int core0_dtype3_tfr_int_mask3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE0_MASK0_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype0_tfr_int_mask0_START (0)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype0_tfr_int_mask0_END (3)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype1_tfr_int_mask1_START (4)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype1_tfr_int_mask1_END (7)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype2_tfr_int_mask2_START (8)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype2_tfr_int_mask2_END (11)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype3_tfr_int_mask3_START (12)
#define SOC_SOCP_DEC_CORE0_MASK0_core0_dtype3_tfr_int_mask3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_dtype0_tfr_int_mask0 : 4;
        unsigned int core1_dtype1_tfr_int_mask1 : 4;
        unsigned int core1_dtype2_tfr_int_mask2 : 4;
        unsigned int core1_dtype3_tfr_int_mask3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE1_MASK0_UNION;
#endif
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype0_tfr_int_mask0_START (0)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype0_tfr_int_mask0_END (3)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype1_tfr_int_mask1_START (4)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype1_tfr_int_mask1_END (7)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype2_tfr_int_mask2_START (8)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype2_tfr_int_mask2_END (11)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype3_tfr_int_mask3_START (12)
#define SOC_SOCP_DEC_CORE1_MASK0_core1_dtype3_tfr_int_mask3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtype0_tfr_rawint0 : 4;
        unsigned int dtype1_tfr_rawint1 : 4;
        unsigned int dtype2_tfr_rawint2 : 4;
        unsigned int dtype3_tfr_rawint3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_RAWINT0_UNION;
#endif
#define SOC_SOCP_DEC_RAWINT0_dtype0_tfr_rawint0_START (0)
#define SOC_SOCP_DEC_RAWINT0_dtype0_tfr_rawint0_END (3)
#define SOC_SOCP_DEC_RAWINT0_dtype1_tfr_rawint1_START (4)
#define SOC_SOCP_DEC_RAWINT0_dtype1_tfr_rawint1_END (7)
#define SOC_SOCP_DEC_RAWINT0_dtype2_tfr_rawint2_START (8)
#define SOC_SOCP_DEC_RAWINT0_dtype2_tfr_rawint2_END (11)
#define SOC_SOCP_DEC_RAWINT0_dtype3_tfr_rawint3_START (12)
#define SOC_SOCP_DEC_RAWINT0_dtype3_tfr_rawint3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_dtype0_tfr_maskint0 : 4;
        unsigned int core0_dtype1_tfr_maskint1 : 4;
        unsigned int core0_dtype2_tfr_maskint2 : 4;
        unsigned int core0_dtype3_tfr_maskint3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE0_INT0_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype0_tfr_maskint0_START (0)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype0_tfr_maskint0_END (3)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype1_tfr_maskint1_START (4)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype1_tfr_maskint1_END (7)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype2_tfr_maskint2_START (8)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype2_tfr_maskint2_END (11)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype3_tfr_maskint3_START (12)
#define SOC_SOCP_DEC_CORE0_INT0_core0_dtype3_tfr_maskint3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_dtype0_tfr_maskint0 : 4;
        unsigned int core1_dtype1_tfr_maskint1 : 4;
        unsigned int core1_dtype2_tfr_maskint2 : 4;
        unsigned int core1_dtype3_tfr_maskint3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE1_INT0_UNION;
#endif
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype0_tfr_maskint0_START (0)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype0_tfr_maskint0_END (3)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype1_tfr_maskint1_START (4)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype1_tfr_maskint1_END (7)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype2_tfr_maskint2_START (8)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype2_tfr_maskint2_END (11)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype3_tfr_maskint3_START (12)
#define SOC_SOCP_DEC_CORE1_INT0_core1_dtype3_tfr_maskint3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int core0_dec_ibuf_underflow_mask : 4;
        unsigned int core0_dec_flag_unmatch_mask : 4;
        unsigned int core0_dec_dtype_unmatch_mask : 4;
        unsigned int core0_dec_crc_err_mask : 4;
        unsigned int core0_dec_len_err_mask : 4;
        unsigned int core0_dec_7d_err_mask : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SOCP_DEC_CORE0_MASK1_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_ibuf_underflow_mask_START (4)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_ibuf_underflow_mask_END (7)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_flag_unmatch_mask_START (8)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_flag_unmatch_mask_END (11)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_dtype_unmatch_mask_START (12)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_dtype_unmatch_mask_END (15)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_crc_err_mask_START (16)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_crc_err_mask_END (19)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_len_err_mask_START (20)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_len_err_mask_END (23)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_7d_err_mask_START (24)
#define SOC_SOCP_DEC_CORE0_MASK1_core0_dec_7d_err_mask_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int dec_ibuf_underflow_rawint : 4;
        unsigned int dec_flag_unmatch_rawint : 4;
        unsigned int dec_obuf_id_unmatch_rawint : 4;
        unsigned int dec_crc_err_rawint : 4;
        unsigned int dec_len_err_rawint : 4;
        unsigned int dec_7d_err_rawint : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SOCP_DEC_CORE0_RAWINT1_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_ibuf_underflow_rawint_START (4)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_ibuf_underflow_rawint_END (7)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_flag_unmatch_rawint_START (8)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_flag_unmatch_rawint_END (11)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_obuf_id_unmatch_rawint_START (12)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_obuf_id_unmatch_rawint_END (15)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_crc_err_rawint_START (16)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_crc_err_rawint_END (19)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_len_err_rawint_START (20)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_len_err_rawint_END (23)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_7d_err_rawint_START (24)
#define SOC_SOCP_DEC_CORE0_RAWINT1_dec_7d_err_rawint_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int core0_dec_ibuf_underflow_maskint : 4;
        unsigned int core0_dec_flag_unmatch_maskint : 4;
        unsigned int core0_dec_obuf_id_unmatch_maskint : 4;
        unsigned int core0_dec_crc_err_maskint : 4;
        unsigned int core0_dec_len_err_maskint : 4;
        unsigned int core0_dec_7d_err_maskint : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SOCP_DEC_CORE0_INT1_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_ibuf_underflow_maskint_START (4)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_ibuf_underflow_maskint_END (7)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_flag_unmatch_maskint_START (8)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_flag_unmatch_maskint_END (11)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_obuf_id_unmatch_maskint_START (12)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_obuf_id_unmatch_maskint_END (15)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_crc_err_maskint_START (16)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_crc_err_maskint_END (19)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_len_err_maskint_START (20)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_len_err_maskint_END (23)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_7d_err_maskint_START (24)
#define SOC_SOCP_DEC_CORE0_INT1_core0_dec_7d_err_maskint_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_dtype0_obuf_ovf_mask0 : 4;
        unsigned int core0_dtype1_obuf_ovf_mask1 : 4;
        unsigned int core0_dtype2_obuf_ovf_mask2 : 4;
        unsigned int core0_dtype3_obuf_ovf_mask3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE0_MASK2_UNION;
#endif
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype0_obuf_ovf_mask0_START (0)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype0_obuf_ovf_mask0_END (3)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype1_obuf_ovf_mask1_START (4)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype1_obuf_ovf_mask1_END (7)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype2_obuf_ovf_mask2_START (8)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype2_obuf_ovf_mask2_END (11)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype3_obuf_ovf_mask3_START (12)
#define SOC_SOCP_DEC_CORE0_MASK2_core0_dtype3_obuf_ovf_mask3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_dtype0_obuf_ovf_mask0 : 4;
        unsigned int core1_dtype1_obuf_ovf_mask1 : 4;
        unsigned int core1_dtype2_obuf_ovf_mask2 : 4;
        unsigned int core1_dtype3_obuf_ovf_mask3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE1Note_MASK2_UNION;
#endif
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype0_obuf_ovf_mask0_START (0)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype0_obuf_ovf_mask0_END (3)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype1_obuf_ovf_mask1_START (4)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype1_obuf_ovf_mask1_END (7)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype2_obuf_ovf_mask2_START (8)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype2_obuf_ovf_mask2_END (11)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype3_obuf_ovf_mask3_START (12)
#define SOC_SOCP_DEC_CORE1Note_MASK2_core1_dtype3_obuf_ovf_mask3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dtype0_obuf_ovf_rawint0 : 4;
        unsigned int dtype1_obuf_ovf_rawint1 : 4;
        unsigned int dtype2_obuf_ovf_rawint2 : 4;
        unsigned int dtype3_obuf_ovf_rawint3 : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_RAWINT2_UNION;
#endif
#define SOC_SOCP_DEC_RAWINT2_dtype0_obuf_ovf_rawint0_START (0)
#define SOC_SOCP_DEC_RAWINT2_dtype0_obuf_ovf_rawint0_END (3)
#define SOC_SOCP_DEC_RAWINT2_dtype1_obuf_ovf_rawint1_START (4)
#define SOC_SOCP_DEC_RAWINT2_dtype1_obuf_ovf_rawint1_END (7)
#define SOC_SOCP_DEC_RAWINT2_dtype2_obuf_ovf_rawint2_START (8)
#define SOC_SOCP_DEC_RAWINT2_dtype2_obuf_ovf_rawint2_END (11)
#define SOC_SOCP_DEC_RAWINT2_dtype3_obuf_ovf_rawint3_START (12)
#define SOC_SOCP_DEC_RAWINT2_dtype3_obuf_ovf_rawint3_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core0_dtype0_obuf_ovf_int : 4;
        unsigned int core0_dtype1_obuf_ovf_int : 4;
        unsigned int core0_dtype2_obuf_ovf_int : 4;
        unsigned int core0_dtype3_obuf_ovf_int : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE0Note_NT2_UNION;
#endif
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype0_obuf_ovf_int_START (0)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype0_obuf_ovf_int_END (3)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype1_obuf_ovf_int_START (4)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype1_obuf_ovf_int_END (7)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype2_obuf_ovf_int_START (8)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype2_obuf_ovf_int_END (11)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype3_obuf_ovf_int_START (12)
#define SOC_SOCP_DEC_CORE0Note_NT2_core0_dtype3_obuf_ovf_int_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_dtype0_obuf_ovf_int : 4;
        unsigned int core1_dtype1_obuf_ovf_int : 4;
        unsigned int core1_dtype2_obuf_ovf_int : 4;
        unsigned int core1_dtype3_obuf_ovf_int : 4;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_CORE1Note_INT2_UNION;
#endif
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype0_obuf_ovf_int_START (0)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype0_obuf_ovf_int_END (3)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype1_obuf_ovf_int_START (4)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype1_obuf_ovf_int_END (7)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype2_obuf_ovf_int_START (8)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype2_obuf_ovf_int_END (11)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype3_obuf_ovf_int_START (12)
#define SOC_SOCP_DEC_CORE1Note_INT2_core1_dtype3_obuf_ovf_int_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_enc_tfr_mask : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SOCP_ENC_CORE1_MASK0_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_MASK0_core1_enc_tfr_mask_START (0)
#define SOC_SOCP_ENC_CORE1_MASK0_core1_enc_tfr_mask_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_enc_tfr_maskint : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_SOCP_ENC_CORE1_INT0_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_INT0_core1_enc_tfr_maskint_START (0)
#define SOC_SOCP_ENC_CORE1_INT0_core1_enc_tfr_maskint_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_enc_obuf_ovf_mask : 7;
        unsigned int reserved_0 : 9;
        unsigned int core1_enc_obuf_thrh_ovf_mask : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_SOCP_ENC_CORE1_MASK2_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_MASK2_core1_enc_obuf_ovf_mask_START (0)
#define SOC_SOCP_ENC_CORE1_MASK2_core1_enc_obuf_ovf_mask_END (6)
#define SOC_SOCP_ENC_CORE1_MASK2_core1_enc_obuf_thrh_ovf_mask_START (16)
#define SOC_SOCP_ENC_CORE1_MASK2_core1_enc_obuf_thrh_ovf_mask_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int core1_enc_obuf_ovf_maskint : 7;
        unsigned int reserved_0 : 9;
        unsigned int core1_enc_obuf_thrh_ovf_maskint : 7;
        unsigned int reserved_1 : 9;
    } reg;
} SOC_SOCP_ENC_CORE1_INT2_UNION;
#endif
#define SOC_SOCP_ENC_CORE1_INT2_core1_enc_obuf_ovf_maskint_START (0)
#define SOC_SOCP_ENC_CORE1_INT2_core1_enc_obuf_ovf_maskint_END (6)
#define SOC_SOCP_ENC_CORE1_INT2_core1_enc_obuf_thrh_ovf_maskint_START (16)
#define SOC_SOCP_ENC_CORE1_INT2_core1_enc_obuf_thrh_ovf_maskint_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int core1_dec_ibuf_underflow_mask : 4;
        unsigned int core1_dec_flag_unmatch_mask : 4;
        unsigned int core1_dec_dtype_unmatch_mask : 4;
        unsigned int core1_dec_crc_err_mask : 4;
        unsigned int core1_dec_len_err_mask : 4;
        unsigned int core1_dec_7d_err_mask : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SOCP_DEC_CORE1_MASK1_UNION;
#endif
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_ibuf_underflow_mask_START (4)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_ibuf_underflow_mask_END (7)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_flag_unmatch_mask_START (8)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_flag_unmatch_mask_END (11)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_dtype_unmatch_mask_START (12)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_dtype_unmatch_mask_END (15)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_crc_err_mask_START (16)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_crc_err_mask_END (19)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_len_err_mask_START (20)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_len_err_mask_END (23)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_7d_err_mask_START (24)
#define SOC_SOCP_DEC_CORE1_MASK1_core1_dec_7d_err_mask_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 4;
        unsigned int core1_dec_ibuf_underflow_maskint : 4;
        unsigned int core1_dec_flag_unmatch_maskint : 4;
        unsigned int core1_dec_obuf_id_unmatch_maskint : 4;
        unsigned int core1_dec_crc_err_maskint : 4;
        unsigned int core1_dec_len_err_maskint : 4;
        unsigned int core1_dec_7d_err_maskint : 4;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_SOCP_DEC_CORE1_INT1_UNION;
#endif
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_ibuf_underflow_maskint_START (4)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_ibuf_underflow_maskint_END (7)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_flag_unmatch_maskint_START (8)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_flag_unmatch_maskint_END (11)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_obuf_id_unmatch_maskint_START (12)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_obuf_id_unmatch_maskint_END (15)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_crc_err_maskint_START (16)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_crc_err_maskint_END (19)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_len_err_maskint_START (20)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_len_err_maskint_END (23)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_7d_err_maskint_START (24)
#define SOC_SOCP_DEC_CORE1_INT1_core1_dec_7d_err_maskint_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_src_bufm_wptr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_BUFm_WPTR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_BUFm_WPTR_enc_src_bufm_wptr_START (0)
#define SOC_SOCP_ENC_SRC_BUFm_WPTR_enc_src_bufm_wptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_src_bufm_rptr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_BUFm_RPTR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_BUFm_RPTR_enc_src_bufm_rptr_START (0)
#define SOC_SOCP_ENC_SRC_BUFm_RPTR_enc_src_bufm_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_src_bufm_addr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_BUFm_ADDR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_BUFm_ADDR_enc_src_bufm_addr_START (0)
#define SOC_SOCP_ENC_SRC_BUFm_ADDR_enc_src_bufm_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_src_bufm_size : 27;
        unsigned int reserved : 5;
    } reg;
} SOC_SOCP_ENC_SRC_BUFm_CFG0_UNION;
#endif
#define SOC_SOCP_ENC_SRC_BUFm_CFG0_enc_src_bufm_size_START (0)
#define SOC_SOCP_ENC_SRC_BUFm_CFG0_enc_src_bufm_size_END (26)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_chm_en : 1;
        unsigned int enc_chm_mode : 2;
        unsigned int reserved_0 : 1;
        unsigned int enc_chm_dest_buf_id : 4;
        unsigned int enc_chm_prior_id : 2;
        unsigned int bypass_en : 1;
        unsigned int no_data_type : 1;
        unsigned int reserved_1 : 4;
        unsigned int data_type : 8;
        unsigned int reserved_2 : 7;
        unsigned int enc_debug : 1;
    } reg;
} SOC_SOCP_ENC_SRC_BUFm_CFG1_UNION;
#endif
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_en_START (0)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_en_END (0)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_mode_START (1)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_mode_END (2)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_dest_buf_id_START (4)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_dest_buf_id_END (7)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_prior_id_START (8)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_chm_prior_id_END (9)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_bypass_en_START (10)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_bypass_en_END (10)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_no_data_type_START (11)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_no_data_type_END (11)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_data_type_START (16)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_data_type_END (23)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_debug_START (31)
#define SOC_SOCP_ENC_SRC_BUFm_CFG1_enc_debug_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_bufm_rdq_wptr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_RDQ_WPTR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_RDQ_WPTR_enc_bufm_rdq_wptr_START (0)
#define SOC_SOCP_ENC_SRC_RDQ_WPTR_enc_bufm_rdq_wptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_bufm_rdq_rptr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_RDQ_RPTR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_RDQ_RPTR_enc_bufm_rdq_rptr_START (0)
#define SOC_SOCP_ENC_SRC_RDQ_RPTR_enc_bufm_rdq_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_bufm_rdq_baddr : 32;
    } reg;
} SOC_SOCP_ENC_SRC_RDQ_BADDR_UNION;
#endif
#define SOC_SOCP_ENC_SRC_RDQ_BADDR_enc_bufm_rdq_baddr_START (0)
#define SOC_SOCP_ENC_SRC_RDQ_BADDR_enc_bufm_rdq_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_bufm_rdq_size : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_ENC_SRC_RDQ_CFG_UNION;
#endif
#define SOC_SOCP_ENC_SRC_RDQ_CFG_enc_bufm_rdq_size_START (0)
#define SOC_SOCP_ENC_SRC_RDQ_CFG_enc_bufm_rdq_size_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_dest_bufn_wptr : 32;
    } reg;
} SOC_SOCP_ENC_DEST_BUFn_WPTR_UNION;
#endif
#define SOC_SOCP_ENC_DEST_BUFn_WPTR_enc_dest_bufn_wptr_START (0)
#define SOC_SOCP_ENC_DEST_BUFn_WPTR_enc_dest_bufn_wptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_dest_bufn_rptr : 32;
    } reg;
} SOC_SOCP_ENC_DEST_BUFn_RPTR_UNION;
#endif
#define SOC_SOCP_ENC_DEST_BUFn_RPTR_enc_dest_bufn_rptr_START (0)
#define SOC_SOCP_ENC_DEST_BUFn_RPTR_enc_dest_bufn_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_dest_bufn_addr : 32;
    } reg;
} SOC_SOCP_ENC_DEST_BUFn_ADDR_UNION;
#endif
#define SOC_SOCP_ENC_DEST_BUFn_ADDR_enc_dest_bufn_addr_START (0)
#define SOC_SOCP_ENC_DEST_BUFn_ADDR_enc_dest_bufn_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_dest_bufn_size : 21;
        unsigned int enc_int_threshold : 11;
    } reg;
} SOC_SOCP_ENC_DEST_BUFn_CFG_UNION;
#endif
#define SOC_SOCP_ENC_DEST_BUFn_CFG_enc_dest_bufn_size_START (0)
#define SOC_SOCP_ENC_DEST_BUFn_CFG_enc_dest_bufn_size_END (20)
#define SOC_SOCP_ENC_DEST_BUFn_CFG_enc_int_threshold_START (21)
#define SOC_SOCP_ENC_DEST_BUFn_CFG_enc_int_threshold_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enc_dest_bufn_thrh : 32;
    } reg;
} SOC_SOCP_ENC_DEST_BUFn_THRH_UNION;
#endif
#define SOC_SOCP_ENC_DEST_BUFn_THRH_enc_dest_bufn_thrh_START (0)
#define SOC_SOCP_ENC_DEST_BUFn_THRH_enc_dest_bufn_thrh_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_src_bufx_wptr : 32;
    } reg;
} SOC_SOCP_DEC_SRC_BUFx_WPTR_UNION;
#endif
#define SOC_SOCP_DEC_SRC_BUFx_WPTR_dec_src_bufx_wptr_START (0)
#define SOC_SOCP_DEC_SRC_BUFx_WPTR_dec_src_bufx_wptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_src_bufx_rptr : 32;
    } reg;
} SOC_SOCP_DEC_SRC_BUFx_RPTR_UNION;
#endif
#define SOC_SOCP_DEC_SRC_BUFx_RPTR_dec_src_bufx_rptr_START (0)
#define SOC_SOCP_DEC_SRC_BUFx_RPTR_dec_src_bufx_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_src_bufx_addr : 32;
    } reg;
} SOC_SOCP_DEC_SRC_BUFx_ADDR_UNION;
#endif
#define SOC_SOCP_DEC_SRC_BUFx_ADDR_dec_src_bufx_addr_START (0)
#define SOC_SOCP_DEC_SRC_BUFx_ADDR_dec_src_bufx_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_src_bufx_size : 16;
        unsigned int reserved_0 : 10;
        unsigned int no_data_type_sel : 2;
        unsigned int reserved_1 : 1;
        unsigned int dec_debug : 1;
        unsigned int dec_chx_en : 1;
        unsigned int no_data_type : 1;
    } reg;
} SOC_SOCP_DEC_SRC_BUFx_CFG0_UNION;
#endif
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_src_bufx_size_START (0)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_src_bufx_size_END (15)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_no_data_type_sel_START (26)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_no_data_type_sel_END (27)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_debug_START (29)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_debug_END (29)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_chx_en_START (30)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_dec_chx_en_END (30)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_no_data_type_START (31)
#define SOC_SOCP_DEC_SRC_BUFx_CFG0_no_data_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_crc_err_cnt : 16;
        unsigned int dec_len_err_cnt : 16;
    } reg;
} SOC_SOCP_DEC_BUFx_STATUS0_UNION;
#endif
#define SOC_SOCP_DEC_BUFx_STATUS0_dec_crc_err_cnt_START (0)
#define SOC_SOCP_DEC_BUFx_STATUS0_dec_crc_err_cnt_END (15)
#define SOC_SOCP_DEC_BUFx_STATUS0_dec_len_err_cnt_START (16)
#define SOC_SOCP_DEC_BUFx_STATUS0_dec_len_err_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_start_err_cnt : 16;
        unsigned int data_type_err_cnt : 16;
    } reg;
} SOC_SOCP_DEC_BUFx_STATUS1_UNION;
#endif
#define SOC_SOCP_DEC_BUFx_STATUS1_dec_start_err_cnt_START (0)
#define SOC_SOCP_DEC_BUFx_STATUS1_dec_start_err_cnt_END (15)
#define SOC_SOCP_DEC_BUFx_STATUS1_data_type_err_cnt_START (16)
#define SOC_SOCP_DEC_BUFx_STATUS1_data_type_err_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_dest_bufy_wptr : 32;
    } reg;
} SOC_SOCP_DEC_DEST_BUFy_WPTR_UNION;
#endif
#define SOC_SOCP_DEC_DEST_BUFy_WPTR_dec_dest_bufy_wptr_START (0)
#define SOC_SOCP_DEC_DEST_BUFy_WPTR_dec_dest_bufy_wptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_dest_bufy_rptr : 32;
    } reg;
} SOC_SOCP_DEC_DEST_BUFy_RPTR_UNION;
#endif
#define SOC_SOCP_DEC_DEST_BUFy_RPTR_dec_dest_bufy_rptr_START (0)
#define SOC_SOCP_DEC_DEST_BUFy_RPTR_dec_dest_bufy_rptr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_dest_bufy_addr : 32;
    } reg;
} SOC_SOCP_DEC_DEST_BUFy_ADDR_UNION;
#endif
#define SOC_SOCP_DEC_DEST_BUFy_ADDR_dec_dest_bufy_addr_START (0)
#define SOC_SOCP_DEC_DEST_BUFy_ADDR_dec_dest_bufy_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dec_dest_bufy_size : 16;
        unsigned int dec_int_threshold : 8;
        unsigned int data_type : 8;
    } reg;
} SOC_SOCP_DEC_DEST_BUFy_CFG0_UNION;
#endif
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_dec_dest_bufy_size_START (0)
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_dec_dest_bufy_size_END (15)
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_dec_int_threshold_START (16)
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_dec_int_threshold_END (23)
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_data_type_START (24)
#define SOC_SOCP_DEC_DEST_BUFy_CFG0_data_type_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cd_buf_baddr : 32;
    } reg;
} SOC_SOCP_ENC_CD_DBG0_UNION;
#endif
#define SOC_SOCP_ENC_CD_DBG0_cd_buf_baddr_START (0)
#define SOC_SOCP_ENC_CD_DBG0_cd_buf_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cd_blk_len : 16;
        unsigned int cd_last_flag : 1;
        unsigned int cd_idle : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_SOCP_ENC_CD_DBG1_UNION;
#endif
#define SOC_SOCP_ENC_CD_DBG1_cd_blk_len_START (0)
#define SOC_SOCP_ENC_CD_DBG1_cd_blk_len_END (15)
#define SOC_SOCP_ENC_CD_DBG1_cd_last_flag_START (16)
#define SOC_SOCP_ENC_CD_DBG1_cd_last_flag_END (16)
#define SOC_SOCP_ENC_CD_DBG1_cd_idle_START (17)
#define SOC_SOCP_ENC_CD_DBG1_cd_idle_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fsm_state : 3;
        unsigned int reserved_0 : 1;
        unsigned int eop : 1;
        unsigned int sop : 1;
        unsigned int fifo_full : 1;
        unsigned int fifo_empty : 1;
        unsigned int reserved_1 : 8;
        unsigned int remain_blk_cnt : 16;
    } reg;
} SOC_SOCP_ENC_IBUF_DBG0_UNION;
#endif
#define SOC_SOCP_ENC_IBUF_DBG0_ibuf_fsm_state_START (0)
#define SOC_SOCP_ENC_IBUF_DBG0_ibuf_fsm_state_END (2)
#define SOC_SOCP_ENC_IBUF_DBG0_eop_START (4)
#define SOC_SOCP_ENC_IBUF_DBG0_eop_END (4)
#define SOC_SOCP_ENC_IBUF_DBG0_sop_START (5)
#define SOC_SOCP_ENC_IBUF_DBG0_sop_END (5)
#define SOC_SOCP_ENC_IBUF_DBG0_fifo_full_START (6)
#define SOC_SOCP_ENC_IBUF_DBG0_fifo_full_END (6)
#define SOC_SOCP_ENC_IBUF_DBG0_fifo_empty_START (7)
#define SOC_SOCP_ENC_IBUF_DBG0_fifo_empty_END (7)
#define SOC_SOCP_ENC_IBUF_DBG0_remain_blk_cnt_START (16)
#define SOC_SOCP_ENC_IBUF_DBG0_remain_blk_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dma_addr : 32;
    } reg;
} SOC_SOCP_ENC_IBUF_DBG1_UNION;
#endif
#define SOC_SOCP_ENC_IBUF_DBG1_dma_addr_START (0)
#define SOC_SOCP_ENC_IBUF_DBG1_dma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fifo_dout_lo : 32;
    } reg;
} SOC_SOCP_ENC_IBUF_DBG2_UNION;
#endif
#define SOC_SOCP_ENC_IBUF_DBG2_ibuf_fifo_dout_lo_START (0)
#define SOC_SOCP_ENC_IBUF_DBG2_ibuf_fifo_dout_lo_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fifo_dout_hi : 32;
    } reg;
} SOC_SOCP_ENC_IBUF_DBG3_UNION;
#endif
#define SOC_SOCP_ENC_IBUF_DBG3_ibuf_fifo_dout_hi_START (0)
#define SOC_SOCP_ENC_IBUF_DBG3_ibuf_fifo_dout_hi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_fsm_state : 3;
        unsigned int reserved_0 : 2;
        unsigned int fifo_afull : 1;
        unsigned int fifo_full : 1;
        unsigned int fifo_empty : 1;
        unsigned int eop : 1;
        unsigned int sop : 1;
        unsigned int reserved_1 : 6;
        unsigned int pkt_in_cnt : 16;
    } reg;
} SOC_SOCP_ENC_OBUF_DBG0_UNION;
#endif
#define SOC_SOCP_ENC_OBUF_DBG0_obuf_fsm_state_START (0)
#define SOC_SOCP_ENC_OBUF_DBG0_obuf_fsm_state_END (2)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_afull_START (5)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_afull_END (5)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_full_START (6)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_full_END (6)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_empty_START (7)
#define SOC_SOCP_ENC_OBUF_DBG0_fifo_empty_END (7)
#define SOC_SOCP_ENC_OBUF_DBG0_eop_START (8)
#define SOC_SOCP_ENC_OBUF_DBG0_eop_END (8)
#define SOC_SOCP_ENC_OBUF_DBG0_sop_START (9)
#define SOC_SOCP_ENC_OBUF_DBG0_sop_END (9)
#define SOC_SOCP_ENC_OBUF_DBG0_pkt_in_cnt_START (16)
#define SOC_SOCP_ENC_OBUF_DBG0_pkt_in_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pkt_out_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_ENC_OBUF_DBG1_UNION;
#endif
#define SOC_SOCP_ENC_OBUF_DBG1_pkt_out_cnt_START (0)
#define SOC_SOCP_ENC_OBUF_DBG1_pkt_out_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nxt_dma_addr : 32;
    } reg;
} SOC_SOCP_ENC_OBUF_DBG2_UNION;
#endif
#define SOC_SOCP_ENC_OBUF_DBG2_nxt_dma_addr_START (0)
#define SOC_SOCP_ENC_OBUF_DBG2_nxt_dma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_fifo_dout_lo : 32;
    } reg;
} SOC_SOCP_ENC_OBUF_DBG3_UNION;
#endif
#define SOC_SOCP_ENC_OBUF_DBG3_obuf_fifo_dout_lo_START (0)
#define SOC_SOCP_ENC_OBUF_DBG3_obuf_fifo_dout_lo_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fsm_state : 3;
        unsigned int reserved_0 : 1;
        unsigned int eop : 1;
        unsigned int sop : 1;
        unsigned int fifo_full : 1;
        unsigned int fifo_empty : 1;
        unsigned int reserved_1 : 8;
        unsigned int remain_blk_cnt : 16;
    } reg;
} SOC_SOCP_DEC_IBUF_DBG0_UNION;
#endif
#define SOC_SOCP_DEC_IBUF_DBG0_ibuf_fsm_state_START (0)
#define SOC_SOCP_DEC_IBUF_DBG0_ibuf_fsm_state_END (2)
#define SOC_SOCP_DEC_IBUF_DBG0_eop_START (4)
#define SOC_SOCP_DEC_IBUF_DBG0_eop_END (4)
#define SOC_SOCP_DEC_IBUF_DBG0_sop_START (5)
#define SOC_SOCP_DEC_IBUF_DBG0_sop_END (5)
#define SOC_SOCP_DEC_IBUF_DBG0_fifo_full_START (6)
#define SOC_SOCP_DEC_IBUF_DBG0_fifo_full_END (6)
#define SOC_SOCP_DEC_IBUF_DBG0_fifo_empty_START (7)
#define SOC_SOCP_DEC_IBUF_DBG0_fifo_empty_END (7)
#define SOC_SOCP_DEC_IBUF_DBG0_remain_blk_cnt_START (16)
#define SOC_SOCP_DEC_IBUF_DBG0_remain_blk_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dma_addr : 32;
    } reg;
} SOC_SOCP_DEC_IBUF_DBG1_UNION;
#endif
#define SOC_SOCP_DEC_IBUF_DBG1_dma_addr_START (0)
#define SOC_SOCP_DEC_IBUF_DBG1_dma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fifo_dout_lo : 32;
    } reg;
} SOC_SOCP_DEC_IBUF_DBG2_UNION;
#endif
#define SOC_SOCP_DEC_IBUF_DBG2_ibuf_fifo_dout_lo_START (0)
#define SOC_SOCP_DEC_IBUF_DBG2_ibuf_fifo_dout_lo_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ibuf_fifo_dout_hi : 32;
    } reg;
} SOC_SOCP_DEC_IBUF_DBG3_UNION;
#endif
#define SOC_SOCP_DEC_IBUF_DBG3_ibuf_fifo_dout_hi_START (0)
#define SOC_SOCP_DEC_IBUF_DBG3_ibuf_fifo_dout_hi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_fsm_state : 3;
        unsigned int reserved_0 : 2;
        unsigned int fifo_afull : 1;
        unsigned int fifo_full : 1;
        unsigned int fifo_empty : 1;
        unsigned int eop : 1;
        unsigned int sop : 1;
        unsigned int reserved_1 : 6;
        unsigned int pkt_in_cnt : 16;
    } reg;
} SOC_SOCP_DEC_OBUF_DBG0_UNION;
#endif
#define SOC_SOCP_DEC_OBUF_DBG0_obuf_fsm_state_START (0)
#define SOC_SOCP_DEC_OBUF_DBG0_obuf_fsm_state_END (2)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_afull_START (5)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_afull_END (5)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_full_START (6)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_full_END (6)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_empty_START (7)
#define SOC_SOCP_DEC_OBUF_DBG0_fifo_empty_END (7)
#define SOC_SOCP_DEC_OBUF_DBG0_eop_START (8)
#define SOC_SOCP_DEC_OBUF_DBG0_eop_END (8)
#define SOC_SOCP_DEC_OBUF_DBG0_sop_START (9)
#define SOC_SOCP_DEC_OBUF_DBG0_sop_END (9)
#define SOC_SOCP_DEC_OBUF_DBG0_pkt_in_cnt_START (16)
#define SOC_SOCP_DEC_OBUF_DBG0_pkt_in_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pkt_out_cnt : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_SOCP_DEC_OBUF_DBG1_UNION;
#endif
#define SOC_SOCP_DEC_OBUF_DBG1_pkt_out_cnt_START (0)
#define SOC_SOCP_DEC_OBUF_DBG1_pkt_out_cnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nxt_dma_addr : 32;
    } reg;
} SOC_SOCP_DEC_OBUF_DBG2_UNION;
#endif
#define SOC_SOCP_DEC_OBUF_DBG2_nxt_dma_addr_START (0)
#define SOC_SOCP_DEC_OBUF_DBG2_nxt_dma_addr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int obuf_fifo_dout_lo : 32;
    } reg;
} SOC_SOCP_DEC_OBUF_DBG3_UNION;
#endif
#define SOC_SOCP_DEC_OBUF_DBG3_obuf_fifo_dout_lo_START (0)
#define SOC_SOCP_DEC_OBUF_DBG3_obuf_fifo_dout_lo_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
