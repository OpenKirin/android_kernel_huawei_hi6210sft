#ifndef __SOC_MMC_INTERFACE_H__
#define __SOC_MMC_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_MMC_CTRL_ADDR(base) ((base) + (0x0000))
#define SOC_MMC_CLKDIV_ADDR(base) ((base) + (0x0008))
#define SOC_MMC_CLKENA_ADDR(base) ((base) + (0x0010))
#define SOC_MMC_TMOUT_ADDR(base) ((base) + (0x0014))
#define SOC_MMC_CTYPE_ADDR(base) ((base) + (0x0018))
#define SOC_MMC_BLKSIZ_ADDR(base) ((base) + (0x001C))
#define SOC_MMC_BYTCNT_ADDR(base) ((base) + (0x0020))
#define SOC_MMC_INTMASK_ADDR(base) ((base) + (0x0024))
#define SOC_MMC_CMDARG_ADDR(base) ((base) + (0x0028))
#define SOC_MMC_CMD_ADDR(base) ((base) + (0x002C))
#define SOC_MMC_RESP0_ADDR(base) ((base) + (0x0030))
#define SOC_MMC_RESP1_ADDR(base) ((base) + (0x0034))
#define SOC_MMC_RESP2_ADDR(base) ((base) + (0x0038))
#define SOC_MMC_RESP3_ADDR(base) ((base) + (0x003C))
#define SOC_MMC_MINTSTS_ADDR(base) ((base) + (0x0040))
#define SOC_MMC_RINTSTS_ADDR(base) ((base) + (0x0044))
#define SOC_MMC_STATUS_ADDR(base) ((base) + (0x0048))
#define SOC_MMC_FIFOTH_ADDR(base) ((base) + (0x004C))
#define SOC_MMC_TCBCNT_ADDR(base) ((base) + (0x005C))
#define SOC_MMC_TBBCNT_ADDR(base) ((base) + (0x0060))
#define SOC_MMC_DEBNCE_ADDR(base) ((base) + (0x0064))
#define SOC_MMC_VERID_ADDR(base) ((base) + (0x006C))
#define SOC_MMC_UHSREG_ADDR(base) ((base) + (0x0074))
#define SOC_MMC_RST_n_ADDR(base) ((base) + (0x0078))
#define SOC_MMC_BMOD_ADDR(base) ((base) + (0x0080))
#define SOC_MMC_PLDMND_ADDR(base) ((base) + (0x0084))
#define SOC_MMC_DBADDR_ADDR(base) ((base) + (0x0088))
#define SOC_MMC_IDSTS_ADDR(base) ((base) + (0x008C))
#define SOC_MMC_IDINTEN_ADDR(base) ((base) + (0x0090))
#define SOC_MMC_DSCADDR_ADDR(base) ((base) + (0x0094))
#define SOC_MMC_BUFADDR_ADDR(base) ((base) + (0x0098))
#define SOC_MMC_CARDTHRCTL_ADDR(base) ((base) + (0x0100))
#define SOC_MMC_UHS_REG_EXT_ADDR(base) ((base) + (0x0108))
#define SOC_MMC_EMMC_DDR_REG_ADDR(base) ((base) + (0x010C))
#define SOC_MMC_ENABLE_SHIFT_ADDR(base) ((base) + (0x0110))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int controller_reset : 1;
        unsigned int fifo_reset : 1;
        unsigned int dma_reset : 1;
        unsigned int reserved_0 : 1;
        unsigned int int_enable : 1;
        unsigned int dma_enable : 1;
        unsigned int read_wait : 1;
        unsigned int send_irq_response : 1;
        unsigned int abort_read_data : 1;
        unsigned int reserved_1 : 16;
        unsigned int use_internal_dmac : 1;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_MMC_CTRL_UNION;
#endif
#define SOC_MMC_CTRL_controller_reset_START (0)
#define SOC_MMC_CTRL_controller_reset_END (0)
#define SOC_MMC_CTRL_fifo_reset_START (1)
#define SOC_MMC_CTRL_fifo_reset_END (1)
#define SOC_MMC_CTRL_dma_reset_START (2)
#define SOC_MMC_CTRL_dma_reset_END (2)
#define SOC_MMC_CTRL_int_enable_START (4)
#define SOC_MMC_CTRL_int_enable_END (4)
#define SOC_MMC_CTRL_dma_enable_START (5)
#define SOC_MMC_CTRL_dma_enable_END (5)
#define SOC_MMC_CTRL_read_wait_START (6)
#define SOC_MMC_CTRL_read_wait_END (6)
#define SOC_MMC_CTRL_send_irq_response_START (7)
#define SOC_MMC_CTRL_send_irq_response_END (7)
#define SOC_MMC_CTRL_abort_read_data_START (8)
#define SOC_MMC_CTRL_abort_read_data_END (8)
#define SOC_MMC_CTRL_use_internal_dmac_START (25)
#define SOC_MMC_CTRL_use_internal_dmac_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_divider : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_MMC_CLKDIV_UNION;
#endif
#define SOC_MMC_CLKDIV_clk_divider_START (0)
#define SOC_MMC_CLKDIV_clk_divider_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cclk_enable : 1;
        unsigned int reserved : 15;
        unsigned int cclk_low_power : 16;
    } reg;
} SOC_MMC_CLKENA_UNION;
#endif
#define SOC_MMC_CLKENA_cclk_enable_START (0)
#define SOC_MMC_CLKENA_cclk_enable_END (0)
#define SOC_MMC_CLKENA_cclk_low_power_START (16)
#define SOC_MMC_CLKENA_cclk_low_power_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int response_timeout : 8;
        unsigned int data_timeout : 24;
    } reg;
} SOC_MMC_TMOUT_UNION;
#endif
#define SOC_MMC_TMOUT_response_timeout_START (0)
#define SOC_MMC_TMOUT_response_timeout_END (7)
#define SOC_MMC_TMOUT_data_timeout_START (8)
#define SOC_MMC_TMOUT_data_timeout_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int card_width_l : 1;
        unsigned int reserved_0 : 15;
        unsigned int card_width : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_MMC_CTYPE_UNION;
#endif
#define SOC_MMC_CTYPE_card_width_l_START (0)
#define SOC_MMC_CTYPE_card_width_l_END (0)
#define SOC_MMC_CTYPE_card_width_START (16)
#define SOC_MMC_CTYPE_card_width_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int block_size : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_MMC_BLKSIZ_UNION;
#endif
#define SOC_MMC_BLKSIZ_block_size_START (0)
#define SOC_MMC_BLKSIZ_block_size_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int byte_count : 32;
    } reg;
} SOC_MMC_BYTCNT_UNION;
#endif
#define SOC_MMC_BYTCNT_byte_count_START (0)
#define SOC_MMC_BYTCNT_byte_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int re_int_mask : 1;
        unsigned int dd_int_mask : 1;
        unsigned int dto_int_mask : 1;
        unsigned int txdr_int_mask : 1;
        unsigned int rxdr_int_mask : 1;
        unsigned int rcrc_int_mask : 1;
        unsigned int dcrc_int_mask : 1;
        unsigned int rto_int_mask : 1;
        unsigned int drto_int_mask : 1;
        unsigned int hto_int_mask : 1;
        unsigned int frun_int_mask : 1;
        unsigned int hle_int_mask : 1;
        unsigned int sbe_int_mask : 1;
        unsigned int acd_int_mask : 1;
        unsigned int ebe_int_mask : 1;
        unsigned int sdio_int_mask : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_MMC_INTMASK_UNION;
#endif
#define SOC_MMC_INTMASK_re_int_mask_START (1)
#define SOC_MMC_INTMASK_re_int_mask_END (1)
#define SOC_MMC_INTMASK_dd_int_mask_START (2)
#define SOC_MMC_INTMASK_dd_int_mask_END (2)
#define SOC_MMC_INTMASK_dto_int_mask_START (3)
#define SOC_MMC_INTMASK_dto_int_mask_END (3)
#define SOC_MMC_INTMASK_txdr_int_mask_START (4)
#define SOC_MMC_INTMASK_txdr_int_mask_END (4)
#define SOC_MMC_INTMASK_rxdr_int_mask_START (5)
#define SOC_MMC_INTMASK_rxdr_int_mask_END (5)
#define SOC_MMC_INTMASK_rcrc_int_mask_START (6)
#define SOC_MMC_INTMASK_rcrc_int_mask_END (6)
#define SOC_MMC_INTMASK_dcrc_int_mask_START (7)
#define SOC_MMC_INTMASK_dcrc_int_mask_END (7)
#define SOC_MMC_INTMASK_rto_int_mask_START (8)
#define SOC_MMC_INTMASK_rto_int_mask_END (8)
#define SOC_MMC_INTMASK_drto_int_mask_START (9)
#define SOC_MMC_INTMASK_drto_int_mask_END (9)
#define SOC_MMC_INTMASK_hto_int_mask_START (10)
#define SOC_MMC_INTMASK_hto_int_mask_END (10)
#define SOC_MMC_INTMASK_frun_int_mask_START (11)
#define SOC_MMC_INTMASK_frun_int_mask_END (11)
#define SOC_MMC_INTMASK_hle_int_mask_START (12)
#define SOC_MMC_INTMASK_hle_int_mask_END (12)
#define SOC_MMC_INTMASK_sbe_int_mask_START (13)
#define SOC_MMC_INTMASK_sbe_int_mask_END (13)
#define SOC_MMC_INTMASK_acd_int_mask_START (14)
#define SOC_MMC_INTMASK_acd_int_mask_END (14)
#define SOC_MMC_INTMASK_ebe_int_mask_START (15)
#define SOC_MMC_INTMASK_ebe_int_mask_END (15)
#define SOC_MMC_INTMASK_sdio_int_mask_START (16)
#define SOC_MMC_INTMASK_sdio_int_mask_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_arg : 32;
    } reg;
} SOC_MMC_CMDARG_UNION;
#endif
#define SOC_MMC_CMDARG_cmd_arg_START (0)
#define SOC_MMC_CMDARG_cmd_arg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmd_index : 6;
        unsigned int response_expect : 1;
        unsigned int response_length : 1;
        unsigned int check_repsonse_crc : 1;
        unsigned int data_transfer_expected : 1;
        unsigned int read_write : 1;
        unsigned int transfer_mode : 1;
        unsigned int send_auto_stop : 1;
        unsigned int wait_prvdata_complete : 1;
        unsigned int stop_abort_cmd : 1;
        unsigned int send_initialization : 1;
        unsigned int card_number : 5;
        unsigned int update_clock_registes_only_ : 1;
        unsigned int reserved_0 : 2;
        unsigned int enable_boot : 1;
        unsigned int expect_boot_ack : 1;
        unsigned int disable_boot : 1;
        unsigned int boot_mode : 1;
        unsigned int volt_switch : 1;
        unsigned int use_hold_reg : 1;
        unsigned int reserved_1 : 1;
        unsigned int start_cmd : 1;
    } reg;
} SOC_MMC_CMD_UNION;
#endif
#define SOC_MMC_CMD_cmd_index_START (0)
#define SOC_MMC_CMD_cmd_index_END (5)
#define SOC_MMC_CMD_response_expect_START (6)
#define SOC_MMC_CMD_response_expect_END (6)
#define SOC_MMC_CMD_response_length_START (7)
#define SOC_MMC_CMD_response_length_END (7)
#define SOC_MMC_CMD_check_repsonse_crc_START (8)
#define SOC_MMC_CMD_check_repsonse_crc_END (8)
#define SOC_MMC_CMD_data_transfer_expected_START (9)
#define SOC_MMC_CMD_data_transfer_expected_END (9)
#define SOC_MMC_CMD_read_write_START (10)
#define SOC_MMC_CMD_read_write_END (10)
#define SOC_MMC_CMD_transfer_mode_START (11)
#define SOC_MMC_CMD_transfer_mode_END (11)
#define SOC_MMC_CMD_send_auto_stop_START (12)
#define SOC_MMC_CMD_send_auto_stop_END (12)
#define SOC_MMC_CMD_wait_prvdata_complete_START (13)
#define SOC_MMC_CMD_wait_prvdata_complete_END (13)
#define SOC_MMC_CMD_stop_abort_cmd_START (14)
#define SOC_MMC_CMD_stop_abort_cmd_END (14)
#define SOC_MMC_CMD_send_initialization_START (15)
#define SOC_MMC_CMD_send_initialization_END (15)
#define SOC_MMC_CMD_card_number_START (16)
#define SOC_MMC_CMD_card_number_END (20)
#define SOC_MMC_CMD_update_clock_registes_only__START (21)
#define SOC_MMC_CMD_update_clock_registes_only__END (21)
#define SOC_MMC_CMD_enable_boot_START (24)
#define SOC_MMC_CMD_enable_boot_END (24)
#define SOC_MMC_CMD_expect_boot_ack_START (25)
#define SOC_MMC_CMD_expect_boot_ack_END (25)
#define SOC_MMC_CMD_disable_boot_START (26)
#define SOC_MMC_CMD_disable_boot_END (26)
#define SOC_MMC_CMD_boot_mode_START (27)
#define SOC_MMC_CMD_boot_mode_END (27)
#define SOC_MMC_CMD_volt_switch_START (28)
#define SOC_MMC_CMD_volt_switch_END (28)
#define SOC_MMC_CMD_use_hold_reg_START (29)
#define SOC_MMC_CMD_use_hold_reg_END (29)
#define SOC_MMC_CMD_start_cmd_START (31)
#define SOC_MMC_CMD_start_cmd_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int response0 : 32;
    } reg;
} SOC_MMC_RESP0_UNION;
#endif
#define SOC_MMC_RESP0_response0_START (0)
#define SOC_MMC_RESP0_response0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int response1 : 32;
    } reg;
} SOC_MMC_RESP1_UNION;
#endif
#define SOC_MMC_RESP1_response1_START (0)
#define SOC_MMC_RESP1_response1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int response2 : 32;
    } reg;
} SOC_MMC_RESP2_UNION;
#endif
#define SOC_MMC_RESP2_response2_START (0)
#define SOC_MMC_RESP2_response2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int response3 : 32;
    } reg;
} SOC_MMC_RESP3_UNION;
#endif
#define SOC_MMC_RESP3_response3_START (0)
#define SOC_MMC_RESP3_response3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0: 1;
        unsigned int re_int : 1;
        unsigned int dd_int : 1;
        unsigned int dto_int : 1;
        unsigned int txdr_int : 1;
        unsigned int rxdr_int : 1;
        unsigned int rcrc_int : 1;
        unsigned int dcrc_int : 1;
        unsigned int rto_int : 1;
        unsigned int drto_int : 1;
        unsigned int hto_int : 1;
        unsigned int frun_int : 1;
        unsigned int hle_int : 1;
        unsigned int sbe_int : 1;
        unsigned int acd_int : 1;
        unsigned int ebe_int : 1;
        unsigned int sdio_int : 1;
        unsigned int reserved_1: 15;
    } reg;
} SOC_MMC_MINTSTS_UNION;
#endif
#define SOC_MMC_MINTSTS_re_int_START (1)
#define SOC_MMC_MINTSTS_re_int_END (1)
#define SOC_MMC_MINTSTS_dd_int_START (2)
#define SOC_MMC_MINTSTS_dd_int_END (2)
#define SOC_MMC_MINTSTS_dto_int_START (3)
#define SOC_MMC_MINTSTS_dto_int_END (3)
#define SOC_MMC_MINTSTS_txdr_int_START (4)
#define SOC_MMC_MINTSTS_txdr_int_END (4)
#define SOC_MMC_MINTSTS_rxdr_int_START (5)
#define SOC_MMC_MINTSTS_rxdr_int_END (5)
#define SOC_MMC_MINTSTS_rcrc_int_START (6)
#define SOC_MMC_MINTSTS_rcrc_int_END (6)
#define SOC_MMC_MINTSTS_dcrc_int_START (7)
#define SOC_MMC_MINTSTS_dcrc_int_END (7)
#define SOC_MMC_MINTSTS_rto_int_START (8)
#define SOC_MMC_MINTSTS_rto_int_END (8)
#define SOC_MMC_MINTSTS_drto_int_START (9)
#define SOC_MMC_MINTSTS_drto_int_END (9)
#define SOC_MMC_MINTSTS_hto_int_START (10)
#define SOC_MMC_MINTSTS_hto_int_END (10)
#define SOC_MMC_MINTSTS_frun_int_START (11)
#define SOC_MMC_MINTSTS_frun_int_END (11)
#define SOC_MMC_MINTSTS_hle_int_START (12)
#define SOC_MMC_MINTSTS_hle_int_END (12)
#define SOC_MMC_MINTSTS_sbe_int_START (13)
#define SOC_MMC_MINTSTS_sbe_int_END (13)
#define SOC_MMC_MINTSTS_acd_int_START (14)
#define SOC_MMC_MINTSTS_acd_int_END (14)
#define SOC_MMC_MINTSTS_ebe_int_START (15)
#define SOC_MMC_MINTSTS_ebe_int_END (15)
#define SOC_MMC_MINTSTS_sdio_int_START (16)
#define SOC_MMC_MINTSTS_sdio_int_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 1;
        unsigned int re_int_status : 1;
        unsigned int dd_int_status : 1;
        unsigned int dto_int_status : 1;
        unsigned int txdr_int_status : 1;
        unsigned int rxdr_int_status : 1;
        unsigned int rcrc_int_status : 1;
        unsigned int dcrc_int_status : 1;
        unsigned int rto_int_status : 1;
        unsigned int drto_int_status : 1;
        unsigned int hto_int_status : 1;
        unsigned int frun_int_status : 1;
        unsigned int hle_int_status : 1;
        unsigned int sbe_int_status : 1;
        unsigned int acd_int_status : 1;
        unsigned int ebe_int_status : 1;
        unsigned int sdio_int_status : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_MMC_RINTSTS_UNION;
#endif
#define SOC_MMC_RINTSTS_re_int_status_START (1)
#define SOC_MMC_RINTSTS_re_int_status_END (1)
#define SOC_MMC_RINTSTS_dd_int_status_START (2)
#define SOC_MMC_RINTSTS_dd_int_status_END (2)
#define SOC_MMC_RINTSTS_dto_int_status_START (3)
#define SOC_MMC_RINTSTS_dto_int_status_END (3)
#define SOC_MMC_RINTSTS_txdr_int_status_START (4)
#define SOC_MMC_RINTSTS_txdr_int_status_END (4)
#define SOC_MMC_RINTSTS_rxdr_int_status_START (5)
#define SOC_MMC_RINTSTS_rxdr_int_status_END (5)
#define SOC_MMC_RINTSTS_rcrc_int_status_START (6)
#define SOC_MMC_RINTSTS_rcrc_int_status_END (6)
#define SOC_MMC_RINTSTS_dcrc_int_status_START (7)
#define SOC_MMC_RINTSTS_dcrc_int_status_END (7)
#define SOC_MMC_RINTSTS_rto_int_status_START (8)
#define SOC_MMC_RINTSTS_rto_int_status_END (8)
#define SOC_MMC_RINTSTS_drto_int_status_START (9)
#define SOC_MMC_RINTSTS_drto_int_status_END (9)
#define SOC_MMC_RINTSTS_hto_int_status_START (10)
#define SOC_MMC_RINTSTS_hto_int_status_END (10)
#define SOC_MMC_RINTSTS_frun_int_status_START (11)
#define SOC_MMC_RINTSTS_frun_int_status_END (11)
#define SOC_MMC_RINTSTS_hle_int_status_START (12)
#define SOC_MMC_RINTSTS_hle_int_status_END (12)
#define SOC_MMC_RINTSTS_sbe_int_status_START (13)
#define SOC_MMC_RINTSTS_sbe_int_status_END (13)
#define SOC_MMC_RINTSTS_acd_int_status_START (14)
#define SOC_MMC_RINTSTS_acd_int_status_END (14)
#define SOC_MMC_RINTSTS_ebe_int_status_START (15)
#define SOC_MMC_RINTSTS_ebe_int_status_END (15)
#define SOC_MMC_RINTSTS_sdio_int_status_START (16)
#define SOC_MMC_RINTSTS_sdio_int_status_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fifo_rx_watermark : 1;
        unsigned int fifo_tx_watermark : 1;
        unsigned int fifo_empty : 1;
        unsigned int fifo_full : 1;
        unsigned int command_fsm_states : 4;
        unsigned int data_3_status : 1;
        unsigned int data_busy : 1;
        unsigned int data_state_mc_busy : 1;
        unsigned int response_index : 6;
        unsigned int fifo_count : 13;
        unsigned int dma_ack : 1;
        unsigned int dma_req : 1;
    } reg;
} SOC_MMC_STATUS_UNION;
#endif
#define SOC_MMC_STATUS_fifo_rx_watermark_START (0)
#define SOC_MMC_STATUS_fifo_rx_watermark_END (0)
#define SOC_MMC_STATUS_fifo_tx_watermark_START (1)
#define SOC_MMC_STATUS_fifo_tx_watermark_END (1)
#define SOC_MMC_STATUS_fifo_empty_START (2)
#define SOC_MMC_STATUS_fifo_empty_END (2)
#define SOC_MMC_STATUS_fifo_full_START (3)
#define SOC_MMC_STATUS_fifo_full_END (3)
#define SOC_MMC_STATUS_command_fsm_states_START (4)
#define SOC_MMC_STATUS_command_fsm_states_END (7)
#define SOC_MMC_STATUS_data_3_status_START (8)
#define SOC_MMC_STATUS_data_3_status_END (8)
#define SOC_MMC_STATUS_data_busy_START (9)
#define SOC_MMC_STATUS_data_busy_END (9)
#define SOC_MMC_STATUS_data_state_mc_busy_START (10)
#define SOC_MMC_STATUS_data_state_mc_busy_END (10)
#define SOC_MMC_STATUS_response_index_START (11)
#define SOC_MMC_STATUS_response_index_END (16)
#define SOC_MMC_STATUS_fifo_count_START (17)
#define SOC_MMC_STATUS_fifo_count_END (29)
#define SOC_MMC_STATUS_dma_ack_START (30)
#define SOC_MMC_STATUS_dma_ack_END (30)
#define SOC_MMC_STATUS_dma_req_START (31)
#define SOC_MMC_STATUS_dma_req_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx_wmark : 12;
        unsigned int resevered : 4;
        unsigned int rx_wmark : 9;
        unsigned int reserved_0 : 3;
        unsigned int burst_size : 3;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_MMC_FIFOTH_UNION;
#endif
#define SOC_MMC_FIFOTH_tx_wmark_START (0)
#define SOC_MMC_FIFOTH_tx_wmark_END (11)
#define SOC_MMC_FIFOTH_resevered_START (12)
#define SOC_MMC_FIFOTH_resevered_END (15)
#define SOC_MMC_FIFOTH_rx_wmark_START (16)
#define SOC_MMC_FIFOTH_rx_wmark_END (24)
#define SOC_MMC_FIFOTH_burst_size_START (28)
#define SOC_MMC_FIFOTH_burst_size_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_card_byte_count : 32;
    } reg;
} SOC_MMC_TCBCNT_UNION;
#endif
#define SOC_MMC_TCBCNT_trans_card_byte_count_START (0)
#define SOC_MMC_TCBCNT_trans_card_byte_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int trans_fifo_byte_count : 32;
    } reg;
} SOC_MMC_TBBCNT_UNION;
#endif
#define SOC_MMC_TBBCNT_trans_fifo_byte_count_START (0)
#define SOC_MMC_TBBCNT_trans_fifo_byte_count_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int debounce_count : 24;
        unsigned int reserved : 8;
    } reg;
} SOC_MMC_DEBNCE_UNION;
#endif
#define SOC_MMC_DEBNCE_debounce_count_START (0)
#define SOC_MMC_DEBNCE_debounce_count_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int version : 32;
    } reg;
} SOC_MMC_VERID_UNION;
#endif
#define SOC_MMC_VERID_version_START (0)
#define SOC_MMC_VERID_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int VOLT_REG : 1;
        unsigned int reserved_0: 15;
        unsigned int DDR_REG : 1;
        unsigned int reserved_1: 15;
    } reg;
} SOC_MMC_UHSREG_UNION;
#endif
#define SOC_MMC_UHSREG_VOLT_REG_START (0)
#define SOC_MMC_UHSREG_VOLT_REG_END (0)
#define SOC_MMC_UHSREG_DDR_REG_START (16)
#define SOC_MMC_UHSREG_DDR_REG_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int card_reset : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MMC_RST_n_UNION;
#endif
#define SOC_MMC_RST_n_card_reset_START (0)
#define SOC_MMC_RST_n_card_reset_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int SWR : 1;
        unsigned int FB : 1;
        unsigned int DSL : 5;
        unsigned int DE : 1;
        unsigned int PBL : 3;
        unsigned int reserved : 21;
    } reg;
} SOC_MMC_BMOD_UNION;
#endif
#define SOC_MMC_BMOD_SWR_START (0)
#define SOC_MMC_BMOD_SWR_END (0)
#define SOC_MMC_BMOD_FB_START (1)
#define SOC_MMC_BMOD_FB_END (1)
#define SOC_MMC_BMOD_DSL_START (2)
#define SOC_MMC_BMOD_DSL_END (6)
#define SOC_MMC_BMOD_DE_START (7)
#define SOC_MMC_BMOD_DE_END (7)
#define SOC_MMC_BMOD_PBL_START (8)
#define SOC_MMC_BMOD_PBL_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int poll_demand : 32;
    } reg;
} SOC_MMC_PLDMND_UNION;
#endif
#define SOC_MMC_PLDMND_poll_demand_START (0)
#define SOC_MMC_PLDMND_poll_demand_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int SDL : 32;
    } reg;
} SOC_MMC_DBADDR_UNION;
#endif
#define SOC_MMC_DBADDR_SDL_START (0)
#define SOC_MMC_DBADDR_SDL_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int TI : 1;
        unsigned int RI : 1;
        unsigned int FBE : 1;
        unsigned int reserved_0: 1;
        unsigned int DU : 1;
        unsigned int CES : 1;
        unsigned int reserved_1: 2;
        unsigned int NIS : 1;
        unsigned int AIS : 1;
        unsigned int EB : 3;
        unsigned int FSM : 4;
        unsigned int reserved_2: 15;
    } reg;
} SOC_MMC_IDSTS_UNION;
#endif
#define SOC_MMC_IDSTS_TI_START (0)
#define SOC_MMC_IDSTS_TI_END (0)
#define SOC_MMC_IDSTS_RI_START (1)
#define SOC_MMC_IDSTS_RI_END (1)
#define SOC_MMC_IDSTS_FBE_START (2)
#define SOC_MMC_IDSTS_FBE_END (2)
#define SOC_MMC_IDSTS_DU_START (4)
#define SOC_MMC_IDSTS_DU_END (4)
#define SOC_MMC_IDSTS_CES_START (5)
#define SOC_MMC_IDSTS_CES_END (5)
#define SOC_MMC_IDSTS_NIS_START (8)
#define SOC_MMC_IDSTS_NIS_END (8)
#define SOC_MMC_IDSTS_AIS_START (9)
#define SOC_MMC_IDSTS_AIS_END (9)
#define SOC_MMC_IDSTS_EB_START (10)
#define SOC_MMC_IDSTS_EB_END (12)
#define SOC_MMC_IDSTS_FSM_START (13)
#define SOC_MMC_IDSTS_FSM_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int TI : 1;
        unsigned int RI : 1;
        unsigned int FBE : 1;
        unsigned int reserved_0: 1;
        unsigned int DU : 1;
        unsigned int CES : 1;
        unsigned int reserved_1: 2;
        unsigned int NI : 1;
        unsigned int AI : 1;
        unsigned int reserved_2: 22;
    } reg;
} SOC_MMC_IDINTEN_UNION;
#endif
#define SOC_MMC_IDINTEN_TI_START (0)
#define SOC_MMC_IDINTEN_TI_END (0)
#define SOC_MMC_IDINTEN_RI_START (1)
#define SOC_MMC_IDINTEN_RI_END (1)
#define SOC_MMC_IDINTEN_FBE_START (2)
#define SOC_MMC_IDINTEN_FBE_END (2)
#define SOC_MMC_IDINTEN_DU_START (4)
#define SOC_MMC_IDINTEN_DU_END (4)
#define SOC_MMC_IDINTEN_CES_START (5)
#define SOC_MMC_IDINTEN_CES_END (5)
#define SOC_MMC_IDINTEN_NI_START (8)
#define SOC_MMC_IDINTEN_NI_END (8)
#define SOC_MMC_IDINTEN_AI_START (9)
#define SOC_MMC_IDINTEN_AI_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int HAD : 32;
    } reg;
} SOC_MMC_DSCADDR_UNION;
#endif
#define SOC_MMC_DSCADDR_HAD_START (0)
#define SOC_MMC_DSCADDR_HAD_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int HBA : 32;
    } reg;
} SOC_MMC_BUFADDR_UNION;
#endif
#define SOC_MMC_BUFADDR_HBA_START (0)
#define SOC_MMC_BUFADDR_HBA_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int card_rd_thr_en : 1;
        unsigned int bsy_clr_int_en : 1;
        unsigned int reserved_0 : 14;
        unsigned int card_rd_threshold : 12;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_MMC_CARDTHRCTL_UNION;
#endif
#define SOC_MMC_CARDTHRCTL_card_rd_thr_en_START (0)
#define SOC_MMC_CARDTHRCTL_card_rd_thr_en_END (0)
#define SOC_MMC_CARDTHRCTL_bsy_clr_int_en_START (1)
#define SOC_MMC_CARDTHRCTL_bsy_clr_int_en_END (1)
#define SOC_MMC_CARDTHRCTL_card_rd_threshold_START (16)
#define SOC_MMC_CARDTHRCTL_card_rd_threshold_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 16;
        unsigned int clk_smpl_phase_ctrl : 7;
        unsigned int clk_drv_phase_ctrl : 7;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_MMC_UHS_REG_EXT_UNION;
#endif
#define SOC_MMC_UHS_REG_EXT_clk_smpl_phase_ctrl_START (16)
#define SOC_MMC_UHS_REG_EXT_clk_smpl_phase_ctrl_END (22)
#define SOC_MMC_UHS_REG_EXT_clk_drv_phase_ctrl_START (23)
#define SOC_MMC_UHS_REG_EXT_clk_drv_phase_ctrl_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int half_start_bit : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_MMC_EMMC_DDR_REG_UNION;
#endif
#define SOC_MMC_EMMC_DDR_REG_half_start_bit_START (0)
#define SOC_MMC_EMMC_DDR_REG_half_start_bit_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int enable_shift : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_MMC_ENABLE_SHIFT_UNION;
#endif
#define SOC_MMC_ENABLE_SHIFT_enable_shift_START (0)
#define SOC_MMC_ENABLE_SHIFT_enable_shift_END (1)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
