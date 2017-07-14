#ifndef __SOC_I2C_INTERFACE_H__
#define __SOC_I2C_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_I2C_CON_ADDR(base) ((base) + (0x0000))
#define SOC_I2C_TAR_ADDR(base) ((base) + (0x0004))
#define SOC_I2C_SAR_ADDR(base) ((base) + (0x0008))
#define SOC_I2C_HS_MADDR_ADDR(base) ((base) + (0x000C))
#define SOC_I2C_DATA_CMD_ADDR(base) ((base) + (0x0010))
#define SOC_I2C_SS_SCL_HCNT_ADDR(base) ((base) + (0x0014))
#define SOC_I2C_SS_SCL_LCNT_ADDR(base) ((base) + (0x0018))
#define SOC_I2C_FS_SCL_HCNT_ADDR(base) ((base) + (0x001C))
#define SOC_I2C_FS_SCL_LCNT_ADDR(base) ((base) + (0x0020))
#define SOC_I2C_HS_SCL_HCNT_ADDR(base) ((base) + (0x0024))
#define SOC_I2C_HS_SCL_LCNT_ADDR(base) ((base) + (0x0028))
#define SOC_I2C_INTR_STAT_ADDR(base) ((base) + (0x002C))
#define SOC_I2C_INTR_MASK_ADDR(base) ((base) + (0x0030))
#define SOC_I2C_RAW_INTR_STAT_ADDR(base) ((base) + (0x0034))
#define SOC_I2C_RX_TL_ADDR(base) ((base) + (0x0038))
#define SOC_I2C_TX_TL_ADDR(base) ((base) + (0x003C))
#define SOC_I2C_CLR_INTR_ADDR(base) ((base) + (0x0040))
#define SOC_I2C_CLR_RX_UNDER_ADDR(base) ((base) + (0x0044))
#define SOC_I2C_CLR_RX_OVER_ADDR(base) ((base) + (0x0048))
#define SOC_I2C_CLR_TX_OVER_ADDR(base) ((base) + (0x004C))
#define SOC_I2C_CLR_RD_REQ_ADDR(base) ((base) + (0x0050))
#define SOC_I2C_CLR_TX_ABRT_ADDR(base) ((base) + (0x0054))
#define SOC_I2C_CLR_RX_DONE_ADDR(base) ((base) + (0x0058))
#define SOC_I2C_CLR_ACTIVITY_ADDR(base) ((base) + (0x005C))
#define SOC_I2C_CLR_STOP_DET_ADDR(base) ((base) + (0x0060))
#define SOC_I2C_CLR_START_DET_ADDR(base) ((base) + (0x0064))
#define SOC_I2C_CLR_GEN_CALL_ADDR(base) ((base) + (0x0068))
#define SOC_I2C_ENABLE_ADDR(base) ((base) + (0x006C))
#define SOC_I2C_STATUS_ADDR(base) ((base) + (0x0070))
#define SOC_I2C_TXFLR_ADDR(base) ((base) + (0x0074))
#define SOC_I2C_RXFLR_ADDR(base) ((base) + (0x0078))
#define SOC_I2C_SDA_HOLD_ADDR(base) ((base) + (0x007C))
#define SOC_I2C_TX_ABRT_SOURCE_ADDR(base) ((base) + (0x0080))
#define SOC_I2C_DMA_CR_ADDR(base) ((base) + (0x0088))
#define SOC_I2C_DMA_TDLR_ADDR(base) ((base) + (0x008C))
#define SOC_I2C_DMA_RDLR_ADDR(base) ((base) + (0x0090))
#define SOC_I2C_SDA_SETUP_ADDR(base) ((base) + (0x0094))
#define SOC_I2C_ACK_GENERAL_CALL_ADDR(base) ((base) + (0x0098))
#define SOC_I2C_ENABLE_STATUS_ADDR(base) ((base) + (0x009C))
#define SOC_I2C_FS_SPKLEN_ADDR(base) ((base) + (0x00A0))
#define SOC_I2C_HS_SPKLEN_ADDR(base) ((base) + (0x00A4))
#define SOC_I2C_COMP_PARAM_1_ADDR(base) ((base) + (0x00F4))
#define SOC_I2C_COMP_VERSION_ADDR(base) ((base) + (0x00F8))
#define SOC_I2C_COMP_TYPE_ADDR(base) ((base) + (0x00FC))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short master_mode : 1;
        unsigned short speed : 2;
        unsigned short i2c_10bitaddr_slave : 1;
        unsigned short i2c_10bitaddr_master : 1;
        unsigned short i2c_restart_en : 1;
        unsigned short i2c_slave_disable : 1;
        unsigned short reserved : 9;
    } reg;
} SOC_I2C_CON_UNION;
#endif
#define SOC_I2C_CON_master_mode_START (0)
#define SOC_I2C_CON_master_mode_END (0)
#define SOC_I2C_CON_speed_START (1)
#define SOC_I2C_CON_speed_END (2)
#define SOC_I2C_CON_i2c_10bitaddr_slave_START (3)
#define SOC_I2C_CON_i2c_10bitaddr_slave_END (3)
#define SOC_I2C_CON_i2c_10bitaddr_master_START (4)
#define SOC_I2C_CON_i2c_10bitaddr_master_END (4)
#define SOC_I2C_CON_i2c_restart_en_START (5)
#define SOC_I2C_CON_i2c_restart_en_END (5)
#define SOC_I2C_CON_i2c_slave_disable_START (6)
#define SOC_I2C_CON_i2c_slave_disable_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_tar : 10;
        unsigned short gc_or_start : 1;
        unsigned short special : 1;
        unsigned short i2c_10bit_addr_master : 1;
        unsigned short reserved : 3;
    } reg;
} SOC_I2C_TAR_UNION;
#endif
#define SOC_I2C_TAR_i2c_tar_START (0)
#define SOC_I2C_TAR_i2c_tar_END (9)
#define SOC_I2C_TAR_gc_or_start_START (10)
#define SOC_I2C_TAR_gc_or_start_END (10)
#define SOC_I2C_TAR_special_START (11)
#define SOC_I2C_TAR_special_END (11)
#define SOC_I2C_TAR_i2c_10bit_addr_master_START (12)
#define SOC_I2C_TAR_i2c_10bit_addr_master_END (12)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_sar : 10;
        unsigned short reserved : 6;
    } reg;
} SOC_I2C_SAR_UNION;
#endif
#define SOC_I2C_SAR_i2c_sar_START (0)
#define SOC_I2C_SAR_i2c_sar_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_hs_mar : 3;
        unsigned short reserved : 13;
    } reg;
} SOC_I2C_HS_MADDR_UNION;
#endif
#define SOC_I2C_HS_MADDR_i2c_hs_mar_START (0)
#define SOC_I2C_HS_MADDR_i2c_hs_mar_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dat : 8;
        unsigned short cmd : 1;
        unsigned short stop : 1;
        unsigned short restart : 1;
        unsigned short reserved : 5;
    } reg;
} SOC_I2C_DATA_CMD_UNION;
#endif
#define SOC_I2C_DATA_CMD_dat_START (0)
#define SOC_I2C_DATA_CMD_dat_END (7)
#define SOC_I2C_DATA_CMD_cmd_START (8)
#define SOC_I2C_DATA_CMD_cmd_END (8)
#define SOC_I2C_DATA_CMD_stop_START (9)
#define SOC_I2C_DATA_CMD_stop_END (9)
#define SOC_I2C_DATA_CMD_restart_START (10)
#define SOC_I2C_DATA_CMD_restart_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_ss_scl_hcnt : 16;
    } reg;
} SOC_I2C_SS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_SS_SCL_HCNT_i2c_ss_scl_hcnt_START (0)
#define SOC_I2C_SS_SCL_HCNT_i2c_ss_scl_hcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_ss_scl_lcnt : 16;
    } reg;
} SOC_I2C_SS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_SS_SCL_LCNT_i2c_ss_scl_lcnt_START (0)
#define SOC_I2C_SS_SCL_LCNT_i2c_ss_scl_lcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_fs_scl_hcnt : 16;
    } reg;
} SOC_I2C_FS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_FS_SCL_HCNT_i2c_fs_scl_hcnt_START (0)
#define SOC_I2C_FS_SCL_HCNT_i2c_fs_scl_hcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_fs_scl_lcnt : 16;
    } reg;
} SOC_I2C_FS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_FS_SCL_LCNT_i2c_fs_scl_lcnt_START (0)
#define SOC_I2C_FS_SCL_LCNT_i2c_fs_scl_lcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_hs_scl_hcnt : 16;
    } reg;
} SOC_I2C_HS_SCL_HCNT_UNION;
#endif
#define SOC_I2C_HS_SCL_HCNT_i2c_hs_scl_hcnt_START (0)
#define SOC_I2C_HS_SCL_HCNT_i2c_hs_scl_hcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_hs_scl_lcnt : 16;
    } reg;
} SOC_I2C_HS_SCL_LCNT_UNION;
#endif
#define SOC_I2C_HS_SCL_LCNT_i2c_hs_scl_lcnt_START (0)
#define SOC_I2C_HS_SCL_LCNT_i2c_hs_scl_lcnt_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rx_under : 1;
        unsigned short rx_over : 1;
        unsigned short rx_full : 1;
        unsigned short tx_over : 1;
        unsigned short tx_empty : 1;
        unsigned short rd_req : 1;
        unsigned short tx_abrt : 1;
        unsigned short rx_done : 1;
        unsigned short activity : 1;
        unsigned short stop_det : 1;
        unsigned short start_det : 1;
        unsigned short gen_call : 1;
        unsigned short reserved : 4;
    } reg;
} SOC_I2C_INTR_STAT_UNION;
#endif
#define SOC_I2C_INTR_STAT_rx_under_START (0)
#define SOC_I2C_INTR_STAT_rx_under_END (0)
#define SOC_I2C_INTR_STAT_rx_over_START (1)
#define SOC_I2C_INTR_STAT_rx_over_END (1)
#define SOC_I2C_INTR_STAT_rx_full_START (2)
#define SOC_I2C_INTR_STAT_rx_full_END (2)
#define SOC_I2C_INTR_STAT_tx_over_START (3)
#define SOC_I2C_INTR_STAT_tx_over_END (3)
#define SOC_I2C_INTR_STAT_tx_empty_START (4)
#define SOC_I2C_INTR_STAT_tx_empty_END (4)
#define SOC_I2C_INTR_STAT_rd_req_START (5)
#define SOC_I2C_INTR_STAT_rd_req_END (5)
#define SOC_I2C_INTR_STAT_tx_abrt_START (6)
#define SOC_I2C_INTR_STAT_tx_abrt_END (6)
#define SOC_I2C_INTR_STAT_rx_done_START (7)
#define SOC_I2C_INTR_STAT_rx_done_END (7)
#define SOC_I2C_INTR_STAT_activity_START (8)
#define SOC_I2C_INTR_STAT_activity_END (8)
#define SOC_I2C_INTR_STAT_stop_det_START (9)
#define SOC_I2C_INTR_STAT_stop_det_END (9)
#define SOC_I2C_INTR_STAT_start_det_START (10)
#define SOC_I2C_INTR_STAT_start_det_END (10)
#define SOC_I2C_INTR_STAT_gen_call_START (11)
#define SOC_I2C_INTR_STAT_gen_call_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short m_rx_under : 1;
        unsigned short m_rx_over : 1;
        unsigned short m_rx_full : 1;
        unsigned short m_tx_over : 1;
        unsigned short m_tx_empty : 1;
        unsigned short m_rd_req : 1;
        unsigned short m_tx_abrt : 1;
        unsigned short m_rx_done : 1;
        unsigned short m_activity : 1;
        unsigned short m_stop_det : 1;
        unsigned short m_start_det : 1;
        unsigned short m_gen_call : 1;
        unsigned short reserved : 4;
    } reg;
} SOC_I2C_INTR_MASK_UNION;
#endif
#define SOC_I2C_INTR_MASK_m_rx_under_START (0)
#define SOC_I2C_INTR_MASK_m_rx_under_END (0)
#define SOC_I2C_INTR_MASK_m_rx_over_START (1)
#define SOC_I2C_INTR_MASK_m_rx_over_END (1)
#define SOC_I2C_INTR_MASK_m_rx_full_START (2)
#define SOC_I2C_INTR_MASK_m_rx_full_END (2)
#define SOC_I2C_INTR_MASK_m_tx_over_START (3)
#define SOC_I2C_INTR_MASK_m_tx_over_END (3)
#define SOC_I2C_INTR_MASK_m_tx_empty_START (4)
#define SOC_I2C_INTR_MASK_m_tx_empty_END (4)
#define SOC_I2C_INTR_MASK_m_rd_req_START (5)
#define SOC_I2C_INTR_MASK_m_rd_req_END (5)
#define SOC_I2C_INTR_MASK_m_tx_abrt_START (6)
#define SOC_I2C_INTR_MASK_m_tx_abrt_END (6)
#define SOC_I2C_INTR_MASK_m_rx_done_START (7)
#define SOC_I2C_INTR_MASK_m_rx_done_END (7)
#define SOC_I2C_INTR_MASK_m_activity_START (8)
#define SOC_I2C_INTR_MASK_m_activity_END (8)
#define SOC_I2C_INTR_MASK_m_stop_det_START (9)
#define SOC_I2C_INTR_MASK_m_stop_det_END (9)
#define SOC_I2C_INTR_MASK_m_start_det_START (10)
#define SOC_I2C_INTR_MASK_m_start_det_END (10)
#define SOC_I2C_INTR_MASK_m_gen_call_START (11)
#define SOC_I2C_INTR_MASK_m_gen_call_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short r_rx_under : 1;
        unsigned short r_rx_over : 1;
        unsigned short r_rx_full : 1;
        unsigned short r_tx_over : 1;
        unsigned short r_tx_empty : 1;
        unsigned short r_rd_req : 1;
        unsigned short r_tx_abrt : 1;
        unsigned short r_rx_done : 1;
        unsigned short r_activity : 1;
        unsigned short r_stop_det : 1;
        unsigned short r_start_det : 1;
        unsigned short r_gen_call : 1;
        unsigned short reserved : 4;
    } reg;
} SOC_I2C_RAW_INTR_STAT_UNION;
#endif
#define SOC_I2C_RAW_INTR_STAT_r_rx_under_START (0)
#define SOC_I2C_RAW_INTR_STAT_r_rx_under_END (0)
#define SOC_I2C_RAW_INTR_STAT_r_rx_over_START (1)
#define SOC_I2C_RAW_INTR_STAT_r_rx_over_END (1)
#define SOC_I2C_RAW_INTR_STAT_r_rx_full_START (2)
#define SOC_I2C_RAW_INTR_STAT_r_rx_full_END (2)
#define SOC_I2C_RAW_INTR_STAT_r_tx_over_START (3)
#define SOC_I2C_RAW_INTR_STAT_r_tx_over_END (3)
#define SOC_I2C_RAW_INTR_STAT_r_tx_empty_START (4)
#define SOC_I2C_RAW_INTR_STAT_r_tx_empty_END (4)
#define SOC_I2C_RAW_INTR_STAT_r_rd_req_START (5)
#define SOC_I2C_RAW_INTR_STAT_r_rd_req_END (5)
#define SOC_I2C_RAW_INTR_STAT_r_tx_abrt_START (6)
#define SOC_I2C_RAW_INTR_STAT_r_tx_abrt_END (6)
#define SOC_I2C_RAW_INTR_STAT_r_rx_done_START (7)
#define SOC_I2C_RAW_INTR_STAT_r_rx_done_END (7)
#define SOC_I2C_RAW_INTR_STAT_r_activity_START (8)
#define SOC_I2C_RAW_INTR_STAT_r_activity_END (8)
#define SOC_I2C_RAW_INTR_STAT_r_stop_det_START (9)
#define SOC_I2C_RAW_INTR_STAT_r_stop_det_END (9)
#define SOC_I2C_RAW_INTR_STAT_r_start_det_START (10)
#define SOC_I2C_RAW_INTR_STAT_r_start_det_END (10)
#define SOC_I2C_RAW_INTR_STAT_r_gen_call_START (11)
#define SOC_I2C_RAW_INTR_STAT_r_gen_call_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rx_tl : 8;
        unsigned short reserved : 8;
    } reg;
} SOC_I2C_RX_TL_UNION;
#endif
#define SOC_I2C_RX_TL_rx_tl_START (0)
#define SOC_I2C_RX_TL_rx_tl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short tx_tl : 8;
        unsigned short reserved : 8;
    } reg;
} SOC_I2C_TX_TL_UNION;
#endif
#define SOC_I2C_TX_TL_tx_tl_START (0)
#define SOC_I2C_TX_TL_tx_tl_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_intr : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_INTR_UNION;
#endif
#define SOC_I2C_CLR_INTR_clr_intr_START (0)
#define SOC_I2C_CLR_INTR_clr_intr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_rx_under : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_RX_UNDER_UNION;
#endif
#define SOC_I2C_CLR_RX_UNDER_clr_rx_under_START (0)
#define SOC_I2C_CLR_RX_UNDER_clr_rx_under_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_rx_over : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_RX_OVER_UNION;
#endif
#define SOC_I2C_CLR_RX_OVER_clr_rx_over_START (0)
#define SOC_I2C_CLR_RX_OVER_clr_rx_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_tx_over : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_TX_OVER_UNION;
#endif
#define SOC_I2C_CLR_TX_OVER_clr_tx_over_START (0)
#define SOC_I2C_CLR_TX_OVER_clr_tx_over_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_rd_req : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_RD_REQ_UNION;
#endif
#define SOC_I2C_CLR_RD_REQ_clr_rd_req_START (0)
#define SOC_I2C_CLR_RD_REQ_clr_rd_req_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_tx_abrt : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_TX_ABRT_UNION;
#endif
#define SOC_I2C_CLR_TX_ABRT_clr_tx_abrt_START (0)
#define SOC_I2C_CLR_TX_ABRT_clr_tx_abrt_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_rx_done : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_RX_DONE_UNION;
#endif
#define SOC_I2C_CLR_RX_DONE_clr_rx_done_START (0)
#define SOC_I2C_CLR_RX_DONE_clr_rx_done_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_activity : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_ACTIVITY_UNION;
#endif
#define SOC_I2C_CLR_ACTIVITY_clr_activity_START (0)
#define SOC_I2C_CLR_ACTIVITY_clr_activity_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_stop_det : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_STOP_DET_UNION;
#endif
#define SOC_I2C_CLR_STOP_DET_clr_stop_det_START (0)
#define SOC_I2C_CLR_STOP_DET_clr_stop_det_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_start_det : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_START_DET_UNION;
#endif
#define SOC_I2C_CLR_START_DET_clr_start_det_START (0)
#define SOC_I2C_CLR_START_DET_clr_start_det_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short clr_gen_call : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_CLR_GEN_CALL_UNION;
#endif
#define SOC_I2C_CLR_GEN_CALL_clr_gen_call_START (0)
#define SOC_I2C_CLR_GEN_CALL_clr_gen_call_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short i2c_enable : 1;
        unsigned short reserved : 15;
    } reg;
} SOC_I2C_ENABLE_UNION;
#endif
#define SOC_I2C_ENABLE_i2c_enable_START (0)
#define SOC_I2C_ENABLE_i2c_enable_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short activity : 1;
        unsigned short tfnf : 1;
        unsigned short tfe : 1;
        unsigned short rfne : 1;
        unsigned short rff : 1;
        unsigned short mst_activity : 1;
        unsigned short slv_activity : 1;
        unsigned short reserved : 9;
    } reg;
} SOC_I2C_STATUS_UNION;
#endif
#define SOC_I2C_STATUS_activity_START (0)
#define SOC_I2C_STATUS_activity_END (0)
#define SOC_I2C_STATUS_tfnf_START (1)
#define SOC_I2C_STATUS_tfnf_END (1)
#define SOC_I2C_STATUS_tfe_START (2)
#define SOC_I2C_STATUS_tfe_END (2)
#define SOC_I2C_STATUS_rfne_START (3)
#define SOC_I2C_STATUS_rfne_END (3)
#define SOC_I2C_STATUS_rff_START (4)
#define SOC_I2C_STATUS_rff_END (4)
#define SOC_I2C_STATUS_mst_activity_START (5)
#define SOC_I2C_STATUS_mst_activity_END (5)
#define SOC_I2C_STATUS_slv_activity_START (6)
#define SOC_I2C_STATUS_slv_activity_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short txflr : 7;
        unsigned short reserved : 9;
    } reg;
} SOC_I2C_TXFLR_UNION;
#endif
#define SOC_I2C_TXFLR_txflr_START (0)
#define SOC_I2C_TXFLR_txflr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rxflr : 7;
        unsigned short reserved : 9;
    } reg;
} SOC_I2C_RXFLR_UNION;
#endif
#define SOC_I2C_RXFLR_rxflr_START (0)
#define SOC_I2C_RXFLR_rxflr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_sda_hold : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_I2C_SDA_HOLD_UNION;
#endif
#define SOC_I2C_SDA_HOLD_i2c_sda_hold_START (0)
#define SOC_I2C_SDA_HOLD_i2c_sda_hold_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int abrt_7b_addr_noack : 1;
        unsigned int abrt_10addr1_noack : 1;
        unsigned int abrt_10addr2_noack : 1;
        unsigned int abrt_txdata_noack : 1;
        unsigned int abrt_gcall_noack : 1;
        unsigned int abrt_gcall_read : 1;
        unsigned int abrt_hs_ackdet : 1;
        unsigned int abrt_sbyte_ackdet : 1;
        unsigned int abrt_hs_norstrt : 1;
        unsigned int abrt_sbyte_norstrt : 1;
        unsigned int abrt_10b_rd_norstrt : 1;
        unsigned int abrt_master_dis : 1;
        unsigned int abrt_lost : 1;
        unsigned int abrt_slvflush_txfifo : 1;
        unsigned int abrt_slv_arblost : 1;
        unsigned int abrt_slvrd_intx : 1;
        unsigned int reserved : 16;
    } reg;
} SOC_I2C_TX_ABRT_SOURCE_UNION;
#endif
#define SOC_I2C_TX_ABRT_SOURCE_abrt_7b_addr_noack_START (0)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_7b_addr_noack_END (0)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr1_noack_START (1)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr1_noack_END (1)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr2_noack_START (2)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10addr2_noack_END (2)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_txdata_noack_START (3)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_txdata_noack_END (3)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_noack_START (4)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_noack_END (4)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_read_START (5)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_gcall_read_END (5)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_ackdet_START (6)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_ackdet_END (6)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_ackdet_START (7)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_ackdet_END (7)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_norstrt_START (8)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_hs_norstrt_END (8)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_norstrt_START (9)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_sbyte_norstrt_END (9)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10b_rd_norstrt_START (10)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_10b_rd_norstrt_END (10)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_master_dis_START (11)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_master_dis_END (11)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_lost_START (12)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_lost_END (12)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvflush_txfifo_START (13)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvflush_txfifo_END (13)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slv_arblost_START (14)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slv_arblost_END (14)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvrd_intx_START (15)
#define SOC_I2C_TX_ABRT_SOURCE_abrt_slvrd_intx_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rdmae : 1;
        unsigned short tdmae : 1;
        unsigned short reserved : 14;
    } reg;
} SOC_I2C_DMA_CR_UNION;
#endif
#define SOC_I2C_DMA_CR_rdmae_START (0)
#define SOC_I2C_DMA_CR_rdmae_END (0)
#define SOC_I2C_DMA_CR_tdmae_START (1)
#define SOC_I2C_DMA_CR_tdmae_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dmatdl : 6;
        unsigned short reserved : 10;
    } reg;
} SOC_I2C_DMA_TDLR_UNION;
#endif
#define SOC_I2C_DMA_TDLR_dmatdl_START (0)
#define SOC_I2C_DMA_TDLR_dmatdl_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dmardl : 6;
        unsigned short reserved : 10;
    } reg;
} SOC_I2C_DMA_RDLR_UNION;
#endif
#define SOC_I2C_DMA_RDLR_dmardl_START (0)
#define SOC_I2C_DMA_RDLR_dmardl_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_sda_setup : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_I2C_SDA_SETUP_UNION;
#endif
#define SOC_I2C_SDA_SETUP_i2c_sda_setup_START (0)
#define SOC_I2C_SDA_SETUP_i2c_sda_setup_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ack_gen_call : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_I2C_ACK_GENERAL_CALL_UNION;
#endif
#define SOC_I2C_ACK_GENERAL_CALL_ack_gen_call_START (0)
#define SOC_I2C_ACK_GENERAL_CALL_ack_gen_call_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_en : 1;
        unsigned int slv_disabled_while_busy : 1;
        unsigned int slv_rx_data_lost : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_I2C_ENABLE_STATUS_UNION;
#endif
#define SOC_I2C_ENABLE_STATUS_i2c_en_START (0)
#define SOC_I2C_ENABLE_STATUS_i2c_en_END (0)
#define SOC_I2C_ENABLE_STATUS_slv_disabled_while_busy_START (1)
#define SOC_I2C_ENABLE_STATUS_slv_disabled_while_busy_END (1)
#define SOC_I2C_ENABLE_STATUS_slv_rx_data_lost_START (2)
#define SOC_I2C_ENABLE_STATUS_slv_rx_data_lost_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_fs_spklen : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_I2C_FS_SPKLEN_UNION;
#endif
#define SOC_I2C_FS_SPKLEN_i2c_fs_spklen_START (0)
#define SOC_I2C_FS_SPKLEN_i2c_fs_spklen_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_hs_spklen : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_I2C_HS_SPKLEN_UNION;
#endif
#define SOC_I2C_HS_SPKLEN_i2c_hs_spklen_START (0)
#define SOC_I2C_HS_SPKLEN_i2c_hs_spklen_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int apb_data_width : 2;
        unsigned int max_speed_mode : 2;
        unsigned int hc_count_values : 1;
        unsigned int intr_io : 1;
        unsigned int has_dma : 1;
        unsigned int add_encoded_params : 1;
        unsigned int rx_buffer_depth : 8;
        unsigned int tx_buffer_depth : 8;
        unsigned int reserved : 8;
    } reg;
} SOC_I2C_COMP_PARAM_1_UNION;
#endif
#define SOC_I2C_COMP_PARAM_1_apb_data_width_START (0)
#define SOC_I2C_COMP_PARAM_1_apb_data_width_END (1)
#define SOC_I2C_COMP_PARAM_1_max_speed_mode_START (2)
#define SOC_I2C_COMP_PARAM_1_max_speed_mode_END (3)
#define SOC_I2C_COMP_PARAM_1_hc_count_values_START (4)
#define SOC_I2C_COMP_PARAM_1_hc_count_values_END (4)
#define SOC_I2C_COMP_PARAM_1_intr_io_START (5)
#define SOC_I2C_COMP_PARAM_1_intr_io_END (5)
#define SOC_I2C_COMP_PARAM_1_has_dma_START (6)
#define SOC_I2C_COMP_PARAM_1_has_dma_END (6)
#define SOC_I2C_COMP_PARAM_1_add_encoded_params_START (7)
#define SOC_I2C_COMP_PARAM_1_add_encoded_params_END (7)
#define SOC_I2C_COMP_PARAM_1_rx_buffer_depth_START (8)
#define SOC_I2C_COMP_PARAM_1_rx_buffer_depth_END (15)
#define SOC_I2C_COMP_PARAM_1_tx_buffer_depth_START (16)
#define SOC_I2C_COMP_PARAM_1_tx_buffer_depth_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_comp_version : 32;
    } reg;
} SOC_I2C_COMP_VERSION_UNION;
#endif
#define SOC_I2C_COMP_VERSION_i2c_comp_version_START (0)
#define SOC_I2C_COMP_VERSION_i2c_comp_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int i2c_comp_type : 32;
    } reg;
} SOC_I2C_COMP_TYPE_UNION;
#endif
#define SOC_I2C_COMP_TYPE_i2c_comp_type_START (0)
#define SOC_I2C_COMP_TYPE_i2c_comp_type_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
