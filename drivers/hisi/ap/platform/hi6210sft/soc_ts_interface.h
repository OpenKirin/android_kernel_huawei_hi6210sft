#ifndef __SOC_TS_INTERFACE_H__
#define __SOC_TS_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_TS_DMX_INF_ADDR(base) ((base) + (0x000))
#define SOC_TS_COUNT_TSP_ADDR(base) ((base) + (0x004))
#define SOC_TS_COUNT_TSP_CTRL_ADDR(base) ((base) + (0x008))
#define SOC_TS_COUNT_ETSP_ADDR(base) ((base) + (0x00C))
#define SOC_TS_COUNT_ETSP_CTRL_ADDR(base) ((base) + (0x010))
#define SOC_TS_AFIFO_WFULL_ERR_ADDR(base) ((base) + (0x014))
#define SOC_TS_AFIFO_WFULL_STATUS_ADDR(base) ((base) + (0x018))
#define SOC_TS_TSSYNC_DEBUG1_ADDR(base) ((base) + (0x020))
#define SOC_TS_TSSYNC_DEBUG2_ADDR(base) ((base) + (0x024))
#define SOC_TS_TSSYNC_DEBUG3_ADDR(base) ((base) + (0x028))
#define SOC_TS_READ_FIFO_FSM_ADDR(base) ((base) + (0x02C))
#define SOC_TS_SYNC_CHECK_FSM_ADDR(base) ((base) + (0x030))
#define SOC_TS_SYNC_CHECK_FLAG_ADDR(base) ((base) + (0x034))
#define SOC_TS_SWITCH_FB_INFO_ADDR(base) ((base) + (0x038))
#define SOC_TS_DBG_PID_CTRL_ADDR(base) ((base) + (0x040))
#define SOC_TS_DBG_PID0_ADDR(base) ((base) + (0x044))
#define SOC_TS_DBG_PID1_ADDR(base) ((base) + (0x048))
#define SOC_TS_DBG_PID2_ADDR(base) ((base) + (0x04C))
#define SOC_TS_DBG_PID3_ADDR(base) ((base) + (0x050))
#define SOC_TS_DBG_PID4_ADDR(base) ((base) + (0x054))
#define SOC_TS_DBG_PID5_ADDR(base) ((base) + (0x058))
#define SOC_TS_DBG_PID6_ADDR(base) ((base) + (0x05C))
#define SOC_TS_DBG_PID7_ADDR(base) ((base) + (0x060))
#define SOC_TS_SYNC_LEN_ADDR(base) ((base) + (0x064))
#define SOC_TS_SYNC_CLR_TH_ADDR(base) ((base) + (0x068))
#define SOC_TS_DBG_CNT_SEL_ADDR(base) ((base) + (0x06C))
#define SOC_TS_DBG_TIMERCFG_ADDR(base) ((base) + (0x070))
#define SOC_TS_DBG_RD_CNT_ADDR(base) ((base) + (0x074))
#define SOC_TS_DBG_RD_TIMER_ADDR(base) ((base) + (0x078))
#define SOC_TS_DBG_RD_SAMPLE_ADDR(base) ((base) + (0x07C))
#define SOC_TS_DBG_UNIFY_0_ADDR(base) ((base) + (0x080))
#define SOC_TS_DBG_UNIFY_1_ADDR(base) ((base) + (0x084))
#define SOC_TS_INTR_RAW_ADDR(base) ((base) + (0x100))
#define SOC_TS_INTR_MASK_ADDR(base) ((base) + (0x104))
#define SOC_TS_INTR_STATUS_ADDR(base) ((base) + (0x108))
#define SOC_TS_INTR_CLR_ADDR(base) ((base) + (0x10C))
#define SOC_TS_CLK_INV_SEL_ADDR(base) ((base) + (0x110))
#define SOC_TS_DATA_MV_CTRL_ADDR(base) ((base) + (0x114))
#define SOC_TS_MEM_THRESHOLD_ADDR(base) ((base) + (0x118))
#define SOC_TS_MEM_COUNT_ADDR(base) ((base) + (0x11C))
#define SOC_TS_LAST_INVALID_COUNT_ADDR(base) ((base) + (0x120))
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ADDR(base) ((base) + (0x124))
#define SOC_TS_LAST_REQ_CTRL_ADDR(base) ((base) + (0x128))
#define SOC_TS_LAST_INVALID_DATA_ADDR(base) ((base) + (0x12C))
#define SOC_TS_MEM_DISABLE_ADDR(base) ((base) + (0x130))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_build_sync_188_th : 3;
        unsigned int reserved_0 : 1;
        unsigned int sw_lose_sync_188_th : 2;
        unsigned int reserved_1 : 2;
        unsigned int sw_afifo_rd_rate : 3;
        unsigned int sw_afifo_rd_mode : 1;
        unsigned int sw_serial_2bit : 1;
        unsigned int sw_serial_2bit_rev : 1;
        unsigned int sw_serial_nosync : 1;
        unsigned int reserved_2 : 1;
        unsigned int sw_nosync_fixed_204 : 1;
        unsigned int sw_serial_syncbit : 1;
        unsigned int sw_serial_syncbit_mode : 1;
        unsigned int reserved_3 : 1;
        unsigned int sw_sync_mode : 2;
        unsigned int sw_err_bypass : 1;
        unsigned int sw_pol_sync : 1;
        unsigned int sw_pol_vld : 1;
        unsigned int sw_pol_err : 1;
        unsigned int sw_47_replace : 1;
        unsigned int sw_serial_lsb_1st : 1;
        unsigned int sw_noworking : 1;
        unsigned int sw_serial_in : 1;
        unsigned int sw_bit_sel : 1;
        unsigned int sw_port_open : 1;
    } reg;
} SOC_TS_DMX_INF_UNION;
#endif
#define SOC_TS_DMX_INF_sw_build_sync_188_th_START (0)
#define SOC_TS_DMX_INF_sw_build_sync_188_th_END (2)
#define SOC_TS_DMX_INF_sw_lose_sync_188_th_START (4)
#define SOC_TS_DMX_INF_sw_lose_sync_188_th_END (5)
#define SOC_TS_DMX_INF_sw_afifo_rd_rate_START (8)
#define SOC_TS_DMX_INF_sw_afifo_rd_rate_END (10)
#define SOC_TS_DMX_INF_sw_afifo_rd_mode_START (11)
#define SOC_TS_DMX_INF_sw_afifo_rd_mode_END (11)
#define SOC_TS_DMX_INF_sw_serial_2bit_START (12)
#define SOC_TS_DMX_INF_sw_serial_2bit_END (12)
#define SOC_TS_DMX_INF_sw_serial_2bit_rev_START (13)
#define SOC_TS_DMX_INF_sw_serial_2bit_rev_END (13)
#define SOC_TS_DMX_INF_sw_serial_nosync_START (14)
#define SOC_TS_DMX_INF_sw_serial_nosync_END (14)
#define SOC_TS_DMX_INF_sw_nosync_fixed_204_START (16)
#define SOC_TS_DMX_INF_sw_nosync_fixed_204_END (16)
#define SOC_TS_DMX_INF_sw_serial_syncbit_START (17)
#define SOC_TS_DMX_INF_sw_serial_syncbit_END (17)
#define SOC_TS_DMX_INF_sw_serial_syncbit_mode_START (18)
#define SOC_TS_DMX_INF_sw_serial_syncbit_mode_END (18)
#define SOC_TS_DMX_INF_sw_sync_mode_START (20)
#define SOC_TS_DMX_INF_sw_sync_mode_END (21)
#define SOC_TS_DMX_INF_sw_err_bypass_START (22)
#define SOC_TS_DMX_INF_sw_err_bypass_END (22)
#define SOC_TS_DMX_INF_sw_pol_sync_START (23)
#define SOC_TS_DMX_INF_sw_pol_sync_END (23)
#define SOC_TS_DMX_INF_sw_pol_vld_START (24)
#define SOC_TS_DMX_INF_sw_pol_vld_END (24)
#define SOC_TS_DMX_INF_sw_pol_err_START (25)
#define SOC_TS_DMX_INF_sw_pol_err_END (25)
#define SOC_TS_DMX_INF_sw_47_replace_START (26)
#define SOC_TS_DMX_INF_sw_47_replace_END (26)
#define SOC_TS_DMX_INF_sw_serial_lsb_1st_START (27)
#define SOC_TS_DMX_INF_sw_serial_lsb_1st_END (27)
#define SOC_TS_DMX_INF_sw_noworking_START (28)
#define SOC_TS_DMX_INF_sw_noworking_END (28)
#define SOC_TS_DMX_INF_sw_serial_in_START (29)
#define SOC_TS_DMX_INF_sw_serial_in_END (29)
#define SOC_TS_DMX_INF_sw_bit_sel_START (30)
#define SOC_TS_DMX_INF_sw_bit_sel_END (30)
#define SOC_TS_DMX_INF_sw_port_open_START (31)
#define SOC_TS_DMX_INF_sw_port_open_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int count_tsp : 32;
    } reg;
} SOC_TS_COUNT_TSP_UNION;
#endif
#define SOC_TS_COUNT_TSP_count_tsp_START (0)
#define SOC_TS_COUNT_TSP_count_tsp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int count_tsp_ctrl : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_TS_COUNT_TSP_CTRL_UNION;
#endif
#define SOC_TS_COUNT_TSP_CTRL_count_tsp_ctrl_START (0)
#define SOC_TS_COUNT_TSP_CTRL_count_tsp_ctrl_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int count_etsp : 32;
    } reg;
} SOC_TS_COUNT_ETSP_UNION;
#endif
#define SOC_TS_COUNT_ETSP_count_etsp_START (0)
#define SOC_TS_COUNT_ETSP_count_etsp_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int count_etsp_ctrl : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_TS_COUNT_ETSP_CTRL_UNION;
#endif
#define SOC_TS_COUNT_ETSP_CTRL_count_etsp_ctrl_START (0)
#define SOC_TS_COUNT_ETSP_CTRL_count_etsp_ctrl_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wfull_err : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TS_AFIFO_WFULL_ERR_UNION;
#endif
#define SOC_TS_AFIFO_WFULL_ERR_wfull_err_START (0)
#define SOC_TS_AFIFO_WFULL_ERR_wfull_err_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wfull_dmx : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TS_AFIFO_WFULL_STATUS_UNION;
#endif
#define SOC_TS_AFIFO_WFULL_STATUS_wfull_dmx_START (0)
#define SOC_TS_AFIFO_WFULL_STATUS_wfull_dmx_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int select_188 : 1;
        unsigned int select_204 : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_TS_TSSYNC_DEBUG1_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG1_select_188_START (0)
#define SOC_TS_TSSYNC_DEBUG1_select_188_END (0)
#define SOC_TS_TSSYNC_DEBUG1_select_204_START (1)
#define SOC_TS_TSSYNC_DEBUG1_select_204_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_sync_off_ins : 1;
        unsigned int out_sync_on_ins : 1;
        unsigned int out_valid_ins : 1;
        unsigned int out_sync_ins : 1;
        unsigned int case_cnt0_tsp188_end : 1;
        unsigned int case_cnt0_tsp_end : 1;
        unsigned int state_cur_valid : 1;
        unsigned int state_cur_sync : 1;
        unsigned int reserved : 8;
        unsigned int byte_count_0 : 8;
        unsigned int state_cur_data : 8;
    } reg;
} SOC_TS_TSSYNC_DEBUG2_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG2_out_sync_off_ins_START (0)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_off_ins_END (0)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_on_ins_START (1)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_on_ins_END (1)
#define SOC_TS_TSSYNC_DEBUG2_out_valid_ins_START (2)
#define SOC_TS_TSSYNC_DEBUG2_out_valid_ins_END (2)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_ins_START (3)
#define SOC_TS_TSSYNC_DEBUG2_out_sync_ins_END (3)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp188_end_START (4)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp188_end_END (4)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp_end_START (5)
#define SOC_TS_TSSYNC_DEBUG2_case_cnt0_tsp_end_END (5)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_valid_START (6)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_valid_END (6)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_sync_START (7)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_sync_END (7)
#define SOC_TS_TSSYNC_DEBUG2_byte_count_0_START (16)
#define SOC_TS_TSSYNC_DEBUG2_byte_count_0_END (23)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_data_START (24)
#define SOC_TS_TSSYNC_DEBUG2_state_cur_data_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int out_sync_off_ins : 1;
        unsigned int out_sync_on_ins : 1;
        unsigned int out_valid_ins : 1;
        unsigned int out_sync_ins : 1;
        unsigned int case_cnt0_tsp188_end : 1;
        unsigned int case_cnt0_tsp_end : 1;
        unsigned int state_cur_valid : 1;
        unsigned int state_cur_sync : 1;
        unsigned int reserved : 8;
        unsigned int byte_count_0 : 8;
        unsigned int state_cur_data : 8;
    } reg;
} SOC_TS_TSSYNC_DEBUG3_UNION;
#endif
#define SOC_TS_TSSYNC_DEBUG3_out_sync_off_ins_START (0)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_off_ins_END (0)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_on_ins_START (1)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_on_ins_END (1)
#define SOC_TS_TSSYNC_DEBUG3_out_valid_ins_START (2)
#define SOC_TS_TSSYNC_DEBUG3_out_valid_ins_END (2)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_ins_START (3)
#define SOC_TS_TSSYNC_DEBUG3_out_sync_ins_END (3)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp188_end_START (4)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp188_end_END (4)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp_end_START (5)
#define SOC_TS_TSSYNC_DEBUG3_case_cnt0_tsp_end_END (5)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_valid_START (6)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_valid_END (6)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_sync_START (7)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_sync_END (7)
#define SOC_TS_TSSYNC_DEBUG3_byte_count_0_START (16)
#define SOC_TS_TSSYNC_DEBUG3_byte_count_0_END (23)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_data_START (24)
#define SOC_TS_TSSYNC_DEBUG3_state_cur_data_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int read_fifo_curr_state : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_TS_READ_FIFO_FSM_UNION;
#endif
#define SOC_TS_READ_FIFO_FSM_read_fifo_curr_state_START (0)
#define SOC_TS_READ_FIFO_FSM_read_fifo_curr_state_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sync_204_curr_state : 4;
        unsigned int reserved_0 : 4;
        unsigned int sync_188_curr_state : 4;
        unsigned int reserved_1 : 4;
        unsigned int switch2inf_info : 3;
        unsigned int reserved_2 : 5;
        unsigned int period_sync_on : 1;
        unsigned int reserved_3 : 3;
        unsigned int period_sync_off : 1;
        unsigned int reserved_4 : 3;
    } reg;
} SOC_TS_SYNC_CHECK_FSM_UNION;
#endif
#define SOC_TS_SYNC_CHECK_FSM_sync_204_curr_state_START (0)
#define SOC_TS_SYNC_CHECK_FSM_sync_204_curr_state_END (3)
#define SOC_TS_SYNC_CHECK_FSM_sync_188_curr_state_START (8)
#define SOC_TS_SYNC_CHECK_FSM_sync_188_curr_state_END (11)
#define SOC_TS_SYNC_CHECK_FSM_switch2inf_info_START (16)
#define SOC_TS_SYNC_CHECK_FSM_switch2inf_info_END (18)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_on_START (24)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_on_END (24)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_off_START (28)
#define SOC_TS_SYNC_CHECK_FSM_period_sync_off_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int check_204_success : 1;
        unsigned int check_188_success : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_TS_SYNC_CHECK_FLAG_UNION;
#endif
#define SOC_TS_SYNC_CHECK_FLAG_check_204_success_START (0)
#define SOC_TS_SYNC_CHECK_FLAG_check_204_success_END (0)
#define SOC_TS_SYNC_CHECK_FLAG_check_188_success_START (1)
#define SOC_TS_SYNC_CHECK_FLAG_check_188_success_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmx_buf_afull : 1;
        unsigned int dmx_buf_full : 1;
        unsigned int dmx_buf_clr : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_TS_SWITCH_FB_INFO_UNION;
#endif
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_afull_START (0)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_afull_END (0)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_full_START (1)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_full_END (1)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_clr_START (2)
#define SOC_TS_SWITCH_FB_INFO_dmx_buf_clr_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_pid_detect_clr : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TS_DBG_PID_CTRL_UNION;
#endif
#define SOC_TS_DBG_PID_CTRL_sw_pid_detect_clr_START (0)
#define SOC_TS_DBG_PID_CTRL_sw_pid_detect_clr_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid0_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid0_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid0_cnt : 8;
    } reg;
} SOC_TS_DBG_PID0_UNION;
#endif
#define SOC_TS_DBG_PID0_dbg_pid0_value_START (0)
#define SOC_TS_DBG_PID0_dbg_pid0_value_END (12)
#define SOC_TS_DBG_PID0_dbg_pid0_vld_START (16)
#define SOC_TS_DBG_PID0_dbg_pid0_vld_END (16)
#define SOC_TS_DBG_PID0_dbg_pid0_cnt_START (24)
#define SOC_TS_DBG_PID0_dbg_pid0_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid1_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid1_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid1_cnt : 8;
    } reg;
} SOC_TS_DBG_PID1_UNION;
#endif
#define SOC_TS_DBG_PID1_dbg_pid1_value_START (0)
#define SOC_TS_DBG_PID1_dbg_pid1_value_END (12)
#define SOC_TS_DBG_PID1_dbg_pid1_vld_START (16)
#define SOC_TS_DBG_PID1_dbg_pid1_vld_END (16)
#define SOC_TS_DBG_PID1_dbg_pid1_cnt_START (24)
#define SOC_TS_DBG_PID1_dbg_pid1_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid2_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid2_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid2_cnt : 8;
    } reg;
} SOC_TS_DBG_PID2_UNION;
#endif
#define SOC_TS_DBG_PID2_dbg_pid2_value_START (0)
#define SOC_TS_DBG_PID2_dbg_pid2_value_END (12)
#define SOC_TS_DBG_PID2_dbg_pid2_vld_START (16)
#define SOC_TS_DBG_PID2_dbg_pid2_vld_END (16)
#define SOC_TS_DBG_PID2_dbg_pid2_cnt_START (24)
#define SOC_TS_DBG_PID2_dbg_pid2_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid3_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid3_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid3_cnt : 8;
    } reg;
} SOC_TS_DBG_PID3_UNION;
#endif
#define SOC_TS_DBG_PID3_dbg_pid3_value_START (0)
#define SOC_TS_DBG_PID3_dbg_pid3_value_END (12)
#define SOC_TS_DBG_PID3_dbg_pid3_vld_START (16)
#define SOC_TS_DBG_PID3_dbg_pid3_vld_END (16)
#define SOC_TS_DBG_PID3_dbg_pid3_cnt_START (24)
#define SOC_TS_DBG_PID3_dbg_pid3_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid4_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid4_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid4_cnt : 8;
    } reg;
} SOC_TS_DBG_PID4_UNION;
#endif
#define SOC_TS_DBG_PID4_dbg_pid4_value_START (0)
#define SOC_TS_DBG_PID4_dbg_pid4_value_END (12)
#define SOC_TS_DBG_PID4_dbg_pid4_vld_START (16)
#define SOC_TS_DBG_PID4_dbg_pid4_vld_END (16)
#define SOC_TS_DBG_PID4_dbg_pid4_cnt_START (24)
#define SOC_TS_DBG_PID4_dbg_pid4_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid5_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid5_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid5_cnt : 8;
    } reg;
} SOC_TS_DBG_PID5_UNION;
#endif
#define SOC_TS_DBG_PID5_dbg_pid5_value_START (0)
#define SOC_TS_DBG_PID5_dbg_pid5_value_END (12)
#define SOC_TS_DBG_PID5_dbg_pid5_vld_START (16)
#define SOC_TS_DBG_PID5_dbg_pid5_vld_END (16)
#define SOC_TS_DBG_PID5_dbg_pid5_cnt_START (24)
#define SOC_TS_DBG_PID5_dbg_pid5_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid6_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid6_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid6_cnt : 8;
    } reg;
} SOC_TS_DBG_PID6_UNION;
#endif
#define SOC_TS_DBG_PID6_dbg_pid6_value_START (0)
#define SOC_TS_DBG_PID6_dbg_pid6_value_END (12)
#define SOC_TS_DBG_PID6_dbg_pid6_vld_START (16)
#define SOC_TS_DBG_PID6_dbg_pid6_vld_END (16)
#define SOC_TS_DBG_PID6_dbg_pid6_cnt_START (24)
#define SOC_TS_DBG_PID6_dbg_pid6_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dbg_pid7_value : 13;
        unsigned int reserved_0 : 3;
        unsigned int dbg_pid7_vld : 1;
        unsigned int reserved_1 : 7;
        unsigned int dbg_pid7_cnt : 8;
    } reg;
} SOC_TS_DBG_PID7_UNION;
#endif
#define SOC_TS_DBG_PID7_dbg_pid7_value_START (0)
#define SOC_TS_DBG_PID7_dbg_pid7_value_END (12)
#define SOC_TS_DBG_PID7_dbg_pid7_vld_START (16)
#define SOC_TS_DBG_PID7_dbg_pid7_vld_END (16)
#define SOC_TS_DBG_PID7_dbg_pid7_cnt_START (24)
#define SOC_TS_DBG_PID7_dbg_pid7_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_188_tsp_len : 8;
        unsigned int sw_204_tsp_len : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_TS_SYNC_LEN_UNION;
#endif
#define SOC_TS_SYNC_LEN_sw_188_tsp_len_START (0)
#define SOC_TS_SYNC_LEN_sw_188_tsp_len_END (7)
#define SOC_TS_SYNC_LEN_sw_204_tsp_len_START (8)
#define SOC_TS_SYNC_LEN_sw_204_tsp_len_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_nosync_clrth : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_TS_SYNC_CLR_TH_UNION;
#endif
#define SOC_TS_SYNC_CLR_TH_sw_nosync_clrth_START (0)
#define SOC_TS_SYNC_CLR_TH_sw_nosync_clrth_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_cnt_sel0 : 8;
        unsigned int sw_cnt_sel1 : 8;
        unsigned int sw_cnt_sel2 : 8;
        unsigned int sw_cnt_sel3 : 8;
    } reg;
} SOC_TS_DBG_CNT_SEL_UNION;
#endif
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel0_START (0)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel0_END (7)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel1_START (8)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel1_END (15)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel2_START (16)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel2_END (23)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel3_START (24)
#define SOC_TS_DBG_CNT_SEL_sw_cnt_sel3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sw_timer_cfg : 32;
    } reg;
} SOC_TS_DBG_TIMERCFG_UNION;
#endif
#define SOC_TS_DBG_TIMERCFG_sw_timer_cfg_START (0)
#define SOC_TS_DBG_TIMERCFG_sw_timer_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt_o_value : 32;
    } reg;
} SOC_TS_DBG_RD_CNT_UNION;
#endif
#define SOC_TS_DBG_RD_CNT_cnt_o_value_START (0)
#define SOC_TS_DBG_RD_CNT_cnt_o_value_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt_o_timer : 32;
    } reg;
} SOC_TS_DBG_RD_TIMER_UNION;
#endif
#define SOC_TS_DBG_RD_TIMER_cnt_o_timer_START (0)
#define SOC_TS_DBG_RD_TIMER_cnt_o_timer_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cnt_o_sample : 32;
    } reg;
} SOC_TS_DBG_RD_SAMPLE_UNION;
#endif
#define SOC_TS_DBG_RD_SAMPLE_cnt_o_sample_START (0)
#define SOC_TS_DBG_RD_SAMPLE_cnt_o_sample_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int c_s_cntb : 8;
        unsigned int c_s_cntp : 4;
        unsigned int dbg_cnt_clr : 4;
        unsigned int dbg_cnt_serial_in_valid : 5;
        unsigned int reserved_0 : 3;
        unsigned int dbg_serial_nosync_failure : 1;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_TS_DBG_UNIFY_0_UNION;
#endif
#define SOC_TS_DBG_UNIFY_0_c_s_cntb_START (0)
#define SOC_TS_DBG_UNIFY_0_c_s_cntb_END (7)
#define SOC_TS_DBG_UNIFY_0_c_s_cntp_START (8)
#define SOC_TS_DBG_UNIFY_0_c_s_cntp_END (11)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_clr_START (12)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_clr_END (15)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_serial_in_valid_START (16)
#define SOC_TS_DBG_UNIFY_0_dbg_cnt_serial_in_valid_END (20)
#define SOC_TS_DBG_UNIFY_0_dbg_serial_nosync_failure_START (24)
#define SOC_TS_DBG_UNIFY_0_dbg_serial_nosync_failure_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int c_port_mode : 16;
        unsigned int port_datapassed_flag : 1;
        unsigned int cerr_n : 1;
        unsigned int reserved : 14;
    } reg;
} SOC_TS_DBG_UNIFY_1_UNION;
#endif
#define SOC_TS_DBG_UNIFY_1_c_port_mode_START (0)
#define SOC_TS_DBG_UNIFY_1_c_port_mode_END (15)
#define SOC_TS_DBG_UNIFY_1_port_datapassed_flag_START (16)
#define SOC_TS_DBG_UNIFY_1_port_datapassed_flag_END (16)
#define SOC_TS_DBG_UNIFY_1_cerr_n_START (17)
#define SOC_TS_DBG_UNIFY_1_cerr_n_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_sync_on_raw : 1;
        unsigned int ts_sync_off_raw : 1;
        unsigned int ts_rx_intr_raw : 1;
        unsigned int ts_mem_over_raw : 1;
        unsigned int p_close_cnt_ceil_raw : 1;
        unsigned int m_no_wr_cnt_ceil_raw : 1;
        unsigned int ts_inf2mem_err_raw : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_TS_INTR_RAW_UNION;
#endif
#define SOC_TS_INTR_RAW_ts_sync_on_raw_START (0)
#define SOC_TS_INTR_RAW_ts_sync_on_raw_END (0)
#define SOC_TS_INTR_RAW_ts_sync_off_raw_START (1)
#define SOC_TS_INTR_RAW_ts_sync_off_raw_END (1)
#define SOC_TS_INTR_RAW_ts_rx_intr_raw_START (2)
#define SOC_TS_INTR_RAW_ts_rx_intr_raw_END (2)
#define SOC_TS_INTR_RAW_ts_mem_over_raw_START (3)
#define SOC_TS_INTR_RAW_ts_mem_over_raw_END (3)
#define SOC_TS_INTR_RAW_p_close_cnt_ceil_raw_START (4)
#define SOC_TS_INTR_RAW_p_close_cnt_ceil_raw_END (4)
#define SOC_TS_INTR_RAW_m_no_wr_cnt_ceil_raw_START (5)
#define SOC_TS_INTR_RAW_m_no_wr_cnt_ceil_raw_END (5)
#define SOC_TS_INTR_RAW_ts_inf2mem_err_raw_START (6)
#define SOC_TS_INTR_RAW_ts_inf2mem_err_raw_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_sync_on_mask : 1;
        unsigned int ts_sync_off_mask : 1;
        unsigned int ts_rx_intr_mask : 1;
        unsigned int ts_mem_over_mask : 1;
        unsigned int p_close_cnt_ceil_mask : 1;
        unsigned int m_no_wr_cnt_ceil_mask : 1;
        unsigned int ts_inf2mem_err_mask : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_TS_INTR_MASK_UNION;
#endif
#define SOC_TS_INTR_MASK_ts_sync_on_mask_START (0)
#define SOC_TS_INTR_MASK_ts_sync_on_mask_END (0)
#define SOC_TS_INTR_MASK_ts_sync_off_mask_START (1)
#define SOC_TS_INTR_MASK_ts_sync_off_mask_END (1)
#define SOC_TS_INTR_MASK_ts_rx_intr_mask_START (2)
#define SOC_TS_INTR_MASK_ts_rx_intr_mask_END (2)
#define SOC_TS_INTR_MASK_ts_mem_over_mask_START (3)
#define SOC_TS_INTR_MASK_ts_mem_over_mask_END (3)
#define SOC_TS_INTR_MASK_p_close_cnt_ceil_mask_START (4)
#define SOC_TS_INTR_MASK_p_close_cnt_ceil_mask_END (4)
#define SOC_TS_INTR_MASK_m_no_wr_cnt_ceil_mask_START (5)
#define SOC_TS_INTR_MASK_m_no_wr_cnt_ceil_mask_END (5)
#define SOC_TS_INTR_MASK_ts_inf2mem_err_mask_START (6)
#define SOC_TS_INTR_MASK_ts_inf2mem_err_mask_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_sync_on_status : 1;
        unsigned int ts_sync_off_status : 1;
        unsigned int ts_rx_intr_status : 1;
        unsigned int ts_mem_over_status : 1;
        unsigned int p_close_cnt_ceil_status : 1;
        unsigned int m_no_wr_cnt_ceil_status : 1;
        unsigned int ts_inf2mem_err_status : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_TS_INTR_STATUS_UNION;
#endif
#define SOC_TS_INTR_STATUS_ts_sync_on_status_START (0)
#define SOC_TS_INTR_STATUS_ts_sync_on_status_END (0)
#define SOC_TS_INTR_STATUS_ts_sync_off_status_START (1)
#define SOC_TS_INTR_STATUS_ts_sync_off_status_END (1)
#define SOC_TS_INTR_STATUS_ts_rx_intr_status_START (2)
#define SOC_TS_INTR_STATUS_ts_rx_intr_status_END (2)
#define SOC_TS_INTR_STATUS_ts_mem_over_status_START (3)
#define SOC_TS_INTR_STATUS_ts_mem_over_status_END (3)
#define SOC_TS_INTR_STATUS_p_close_cnt_ceil_status_START (4)
#define SOC_TS_INTR_STATUS_p_close_cnt_ceil_status_END (4)
#define SOC_TS_INTR_STATUS_m_no_wr_cnt_ceil_status_START (5)
#define SOC_TS_INTR_STATUS_m_no_wr_cnt_ceil_status_END (5)
#define SOC_TS_INTR_STATUS_ts_inf2mem_err_status_START (6)
#define SOC_TS_INTR_STATUS_ts_inf2mem_err_status_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_sync_on_clr : 1;
        unsigned int ts_sync_off_clr : 1;
        unsigned int ts_rx_intr_clr : 1;
        unsigned int ts_mem_over_clr : 1;
        unsigned int p_close_cnt_ceil_clr : 1;
        unsigned int m_no_wr_cnt_ceil_clr : 1;
        unsigned int ts_inf2mem_err_clr : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_TS_INTR_CLR_UNION;
#endif
#define SOC_TS_INTR_CLR_ts_sync_on_clr_START (0)
#define SOC_TS_INTR_CLR_ts_sync_on_clr_END (0)
#define SOC_TS_INTR_CLR_ts_sync_off_clr_START (1)
#define SOC_TS_INTR_CLR_ts_sync_off_clr_END (1)
#define SOC_TS_INTR_CLR_ts_rx_intr_clr_START (2)
#define SOC_TS_INTR_CLR_ts_rx_intr_clr_END (2)
#define SOC_TS_INTR_CLR_ts_mem_over_clr_START (3)
#define SOC_TS_INTR_CLR_ts_mem_over_clr_END (3)
#define SOC_TS_INTR_CLR_p_close_cnt_ceil_clr_START (4)
#define SOC_TS_INTR_CLR_p_close_cnt_ceil_clr_END (4)
#define SOC_TS_INTR_CLR_m_no_wr_cnt_ceil_clr_START (5)
#define SOC_TS_INTR_CLR_m_no_wr_cnt_ceil_clr_END (5)
#define SOC_TS_INTR_CLR_ts_inf2mem_err_clr_START (6)
#define SOC_TS_INTR_CLR_ts_inf2mem_err_clr_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_clk_inv_sel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TS_CLK_INV_SEL_UNION;
#endif
#define SOC_TS_CLK_INV_SEL_ts_clk_inv_sel_START (0)
#define SOC_TS_CLK_INV_SEL_ts_clk_inv_sel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int data_with_sync_err : 1;
        unsigned int data_mv_by_dma : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_TS_DATA_MV_CTRL_UNION;
#endif
#define SOC_TS_DATA_MV_CTRL_data_with_sync_err_START (0)
#define SOC_TS_DATA_MV_CTRL_data_with_sync_err_END (0)
#define SOC_TS_DATA_MV_CTRL_data_mv_by_dma_START (1)
#define SOC_TS_DATA_MV_CTRL_data_mv_by_dma_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_mem_threshold : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_TS_MEM_THRESHOLD_UNION;
#endif
#define SOC_TS_MEM_THRESHOLD_ts_mem_threshold_START (0)
#define SOC_TS_MEM_THRESHOLD_ts_mem_threshold_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_mem_count : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_TS_MEM_COUNT_UNION;
#endif
#define SOC_TS_MEM_COUNT_ts_mem_count_START (0)
#define SOC_TS_MEM_COUNT_ts_mem_count_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_last_invalid_count : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_TS_LAST_INVALID_COUNT_UNION;
#endif
#define SOC_TS_LAST_INVALID_COUNT_ts_last_invalid_count_START (0)
#define SOC_TS_LAST_INVALID_COUNT_ts_last_invalid_count_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_clk_gt_timeout_value : 12;
        unsigned int reserved : 20;
    } reg;
} SOC_TS_CLK_GT_TIMEOUT_VALUE_UNION;
#endif
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ts_clk_gt_timeout_value_START (0)
#define SOC_TS_CLK_GT_TIMEOUT_VALUE_ts_clk_gt_timeout_value_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int req_ref_memwr_value : 12;
        unsigned int reserved_0 : 4;
        unsigned int req_ref_port_value : 12;
        unsigned int req_ref_port_close : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_TS_LAST_REQ_CTRL_UNION;
#endif
#define SOC_TS_LAST_REQ_CTRL_req_ref_memwr_value_START (0)
#define SOC_TS_LAST_REQ_CTRL_req_ref_memwr_value_END (11)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_value_START (16)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_value_END (27)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_close_START (28)
#define SOC_TS_LAST_REQ_CTRL_req_ref_port_close_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_last_invalid_data : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_TS_LAST_INVALID_DATA_UNION;
#endif
#define SOC_TS_LAST_INVALID_DATA_ts_last_invalid_data_START (0)
#define SOC_TS_LAST_INVALID_DATA_ts_last_invalid_data_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ts_mem_disable : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_TS_MEM_DISABLE_UNION;
#endif
#define SOC_TS_MEM_DISABLE_ts_mem_disable_START (0)
#define SOC_TS_MEM_DISABLE_ts_mem_disable_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
