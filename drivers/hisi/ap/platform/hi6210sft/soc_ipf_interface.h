#ifndef __SOC_IPF_INTERFACE_H__
#define __SOC_IPF_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_IPF_SRST_ADDR(base) ((base) + (0x0000))
#define SOC_IPF_SRST_STATE_ADDR(base) ((base) + (0x0004))
#define SOC_IPF_CH_EN_ADDR(base) ((base) + (0x0008))
#define SOC_IPF_EN_STATE_ADDR(base) ((base) + (0x000C))
#define SOC_IPF_GATE_ADDR(base) ((base) + (0x0010))
#define SOC_IPF_CTRL_ADDR(base) ((base) + (0x0014))
#define SOC_IPF_DMA_CTRL0_ADDR(base) ((base) + (0x0018))
#define SOC_IPF_DMA_CTRL1_ADDR(base) ((base) + (0x001C))
#define SOC_IPF_INT0_ADDR(base) ((base) + (0x0030))
#define SOC_IPF_INT1_ADDR(base) ((base) + (0x0034))
#define SOC_IPF_INT_MASK0_ADDR(base) ((base) + (0x0038))
#define SOC_IPF_INT_MASK1_ADDR(base) ((base) + (0x003C))
#define SOC_IPF_INT_STATE_ADDR(base) ((base) + (0x0040))
#define SOC_IPF_TIME_OUT_ADDR(base) ((base) + (0x0044))
#define SOC_IPF_PKT_LEN_ADDR(base) ((base) + (0x0048))
#define SOC_IPF_FILTER_ZERO_INDEX_ADDR(base) ((base) + (0x0070))
#define SOC_IPF_EF_BADDR_ADDR(base) ((base) + (0x0074))
#define SOC_IPF_BFLT_INDEX_ADDR(base) ((base) + (0x0078))
#define SOC_IPF_FLT_CHAIN_LOOP_ADDR(base) ((base) + (0x007C))
#define SOC_IPF_FLT_LOCAL_ADDR0_ADDR(base) ((base) + (0x0090))
#define SOC_IPF_FLT_LOCAL_ADDR1_ADDR(base) ((base) + (0x0094))
#define SOC_IPF_FLT_LOCAL_ADDR2_ADDR(base) ((base) + (0x0098))
#define SOC_IPF_FLT_LOCAL_ADDR3_ADDR(base) ((base) + (0x009C))
#define SOC_IPF_FLT_REMOTE_ADDR0_ADDR(base) ((base) + (0x00A0))
#define SOC_IPF_FLT_REMOTE_ADDR1_ADDR(base) ((base) + (0x00A4))
#define SOC_IPF_FLT_REMOTE_ADDR2_ADDR(base) ((base) + (0x00A8))
#define SOC_IPF_FLT_REMOTE_ADDR3_ADDR(base) ((base) + (0x00AC))
#define SOC_IPF_FLT_REMOTE_ADDR0_MASK_ADDR(base) ((base) + (0x00B0))
#define SOC_IPF_FLT_REMOTE_ADDR1_MASK_ADDR(base) ((base) + (0x00B4))
#define SOC_IPF_FLT_REMOTE_ADDR2_MASK_ADDR(base) ((base) + (0x00B8))
#define SOC_IPF_FLT_REMOTE_ADDR3_MASK_ADDR(base) ((base) + (0x00BC))
#define SOC_IPF_FLT_LOCAL_PORT_ADDR(base) ((base) + (0x00C0))
#define SOC_IPF_FLT_REMOTE_PORT_ADDR(base) ((base) + (0x00C4))
#define SOC_IPF_FLT_TRAFFIC_CLASS_ADDR(base) ((base) + (0x00C8))
#define SOC_IPF_FLT_LADD_MASK_ADDR(base) ((base) + (0x00CC))
#define SOC_IPF_FLT_NEXT_HEADER_ADDR(base) ((base) + (0x00D0))
#define SOC_IPF_FLT_FLOW_LABEL_ADDR(base) ((base) + (0x00D4))
#define SOC_IPF_FLT_ICMP_ADDR(base) ((base) + (0x00D8))
#define SOC_IPF_FLT_CHAIN_ADDR(base) ((base) + (0x00DC))
#define SOC_IPF_FLT_SPI_ADDR(base) ((base) + (0x00E0))
#define SOC_IPF_FLT_RULE_CTRL_ADDR(base) ((base) + (0x00E4))
#define SOC_IPF_CH0_CTRL_ADDR(base) ((base) + (0x0100))
#define SOC_IPF_CH0_STATE_ADDR(base) ((base) + (0x0104))
#define SOC_IPF_CH0_BDQ_BADDR_ADDR(base) ((base) + (0x0108))
#define SOC_IPF_CH0_BDQ_SIZE_ADDR(base) ((base) + (0x010C))
#define SOC_IPF_CH0_BDQ_WPTR_ADDR(base) ((base) + (0x0110))
#define SOC_IPF_CH0_BDQ_RPTR_ADDR(base) ((base) + (0x0114))
#define SOC_IPF_CH0_BDQ_WADDR_ADDR(base) ((base) + (0x0118))
#define SOC_IPF_CH0_BDQ_RADDR_ADDR(base) ((base) + (0x011C))
#define SOC_IPF_CH0_RDQ_BADDR_ADDR(base) ((base) + (0x0120))
#define SOC_IPF_CH0_RDQ_SIZE_ADDR(base) ((base) + (0x0124))
#define SOC_IPF_CH0_RDQ_WPTR_ADDR(base) ((base) + (0x0128))
#define SOC_IPF_CH0_RDQ_RPTR_ADDR(base) ((base) + (0x012C))
#define SOC_IPF_CH0_RDQ_WADDR_ADDR(base) ((base) + (0x0130))
#define SOC_IPF_CH0_RDQ_RADDR_ADDR(base) ((base) + (0x0134))
#define SOC_IPF_CH0_DQ_DEPTH_ADDR(base) ((base) + (0x0138))
#define SOC_IPF_CH1_CTRL_ADDR(base) ((base) + (0x0150))
#define SOC_IPF_CH1_STATE_ADDR(base) ((base) + (0x0154))
#define SOC_IPF_CH1_BDQ_BADDR_ADDR(base) ((base) + (0x0158))
#define SOC_IPF_CH1_BDQ_SIZE_ADDR(base) ((base) + (0x015C))
#define SOC_IPF_CH1_BDQ_WPTR_ADDR(base) ((base) + (0x0160))
#define SOC_IPF_CH1_BDQ_RPTR_ADDR(base) ((base) + (0x0164))
#define SOC_IPF_CH1_BDQ_WADDR_ADDR(base) ((base) + (0x0168))
#define SOC_IPF_CH1_BDQ_RADDR_ADDR(base) ((base) + (0x016C))
#define SOC_IPF_CH1_RDQ_BADDR_ADDR(base) ((base) + (0x0170))
#define SOC_IPF_CH1_RDQ_SIZE_ADDR(base) ((base) + (0x0174))
#define SOC_IPF_CH1_RDQ_WPTR_ADDR(base) ((base) + (0x0178))
#define SOC_IPF_CH1_RDQ_RPTR_ADDR(base) ((base) + (0x017C))
#define SOC_IPF_CH1_RDQ_WADDR_ADDR(base) ((base) + (0x0180))
#define SOC_IPF_CH1_RDQ_RADDR_ADDR(base) ((base) + (0x0184))
#define SOC_IPF_CH1_DQ_DEPTH_ADDR(base) ((base) + (0x0188))
#define SOC_IPF_CH0_ADQ_CTRL_ADDR(base) ((base) + (0x0204))
#define SOC_IPF_CH0_ADQ0_BASE_ADDR(base) ((base) + (0x0210))
#define SOC_IPF_CH0_ADQ0_STAT_ADDR(base) ((base) + (0x0214))
#define SOC_IPF_CH0_ADQ0_WPTR_ADDR(base) ((base) + (0x0218))
#define SOC_IPF_CH0_ADQ0_RPTR_ADDR(base) ((base) + (0x021C))
#define SOC_IPF_CH0_ADQ1_BASE_ADDR(base) ((base) + (0x0220))
#define SOC_IPF_CH0_ADQ1_STAT_ADDR(base) ((base) + (0x0224))
#define SOC_IPF_CH0_ADQ1_WPTR_ADDR(base) ((base) + (0x0228))
#define SOC_IPF_CH0_ADQ1_RPTR_ADDR(base) ((base) + (0x022C))
#define SOC_IPF_CH1_ADQ_CTRL_ADDR(base) ((base) + (0x0284))
#define SOC_IPF_CH1_ADQ0_BASE_ADDR(base) ((base) + (0x0290))
#define SOC_IPF_CH1_ADQ0_STAT_ADDR(base) ((base) + (0x0294))
#define SOC_IPF_CH1_ADQ0_WPTR_ADDR(base) ((base) + (0x0298))
#define SOC_IPF_CH1_ADQ0_RPTR_ADDR(base) ((base) + (0x029C))
#define SOC_IPF_CH1_ADQ1_BASE_ADDR(base) ((base) + (0x02A0))
#define SOC_IPF_CH1_ADQ1_STAT_ADDR(base) ((base) + (0x02A4))
#define SOC_IPF_CH1_ADQ1_WPTR_ADDR(base) ((base) + (0x02A8))
#define SOC_IPF_CH1_ADQ1_RPTR_ADDR(base) ((base) + (0x02AC))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipf_srst : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IPF_SRST_UNION;
#endif
#define SOC_IPF_SRST_ipf_srst_START (0)
#define SOC_IPF_SRST_ipf_srst_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipf_srst_state : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IPF_SRST_STATE_UNION;
#endif
#define SOC_IPF_SRST_STATE_ipf_srst_state_START (0)
#define SOC_IPF_SRST_STATE_ipf_srst_state_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_en : 1;
        unsigned int dl_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IPF_CH_EN_UNION;
#endif
#define SOC_IPF_CH_EN_ul_en_START (0)
#define SOC_IPF_CH_EN_ul_en_END (0)
#define SOC_IPF_CH_EN_dl_en_START (1)
#define SOC_IPF_CH_EN_dl_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_en_state : 1;
        unsigned int dl_en_state : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IPF_EN_STATE_UNION;
#endif
#define SOC_IPF_EN_STATE_ul_en_state_START (0)
#define SOC_IPF_EN_STATE_ul_en_state_END (0)
#define SOC_IPF_EN_STATE_dl_en_state_START (1)
#define SOC_IPF_EN_STATE_dl_en_state_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipf_sysclk_sel0 : 1;
        unsigned int ipf_sysclk_sel1 : 1;
        unsigned int ipf_busclk_sel : 1;
        unsigned int reserved_0 : 5;
        unsigned int ipf_ram0clk_sel : 1;
        unsigned int ipf_ram1clk_sel : 1;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_IPF_GATE_UNION;
#endif
#define SOC_IPF_GATE_ipf_sysclk_sel0_START (0)
#define SOC_IPF_GATE_ipf_sysclk_sel0_END (0)
#define SOC_IPF_GATE_ipf_sysclk_sel1_START (1)
#define SOC_IPF_GATE_ipf_sysclk_sel1_END (1)
#define SOC_IPF_GATE_ipf_busclk_sel_START (2)
#define SOC_IPF_GATE_ipf_busclk_sel_END (2)
#define SOC_IPF_GATE_ipf_ram0clk_sel_START (8)
#define SOC_IPF_GATE_ipf_ram0clk_sel_END (8)
#define SOC_IPF_GATE_ipf_ram1clk_sel_START (9)
#define SOC_IPF_GATE_ipf_ram1clk_sel_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int filter_seq : 1;
        unsigned int flt_addr_reverse : 1;
        unsigned int sp_cfg : 1;
        unsigned int sp_wrr_sel : 1;
        unsigned int max_burst_len : 2;
        unsigned int ipv6_nh_sel : 1;
        unsigned int ah_esp_sel : 1;
        unsigned int ah_disable : 1;
        unsigned int esp_disable : 1;
        unsigned int mfc_en : 1;
        unsigned int mm_en : 1;
        unsigned int add_rep : 1;
        unsigned int schedule_strategy : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_IPF_CTRL_UNION;
#endif
#define SOC_IPF_CTRL_filter_seq_START (0)
#define SOC_IPF_CTRL_filter_seq_END (0)
#define SOC_IPF_CTRL_flt_addr_reverse_START (1)
#define SOC_IPF_CTRL_flt_addr_reverse_END (1)
#define SOC_IPF_CTRL_sp_cfg_START (2)
#define SOC_IPF_CTRL_sp_cfg_END (2)
#define SOC_IPF_CTRL_sp_wrr_sel_START (3)
#define SOC_IPF_CTRL_sp_wrr_sel_END (3)
#define SOC_IPF_CTRL_max_burst_len_START (4)
#define SOC_IPF_CTRL_max_burst_len_END (5)
#define SOC_IPF_CTRL_ipv6_nh_sel_START (6)
#define SOC_IPF_CTRL_ipv6_nh_sel_END (6)
#define SOC_IPF_CTRL_ah_esp_sel_START (7)
#define SOC_IPF_CTRL_ah_esp_sel_END (7)
#define SOC_IPF_CTRL_ah_disable_START (8)
#define SOC_IPF_CTRL_ah_disable_END (8)
#define SOC_IPF_CTRL_esp_disable_START (9)
#define SOC_IPF_CTRL_esp_disable_END (9)
#define SOC_IPF_CTRL_mfc_en_START (10)
#define SOC_IPF_CTRL_mfc_en_END (10)
#define SOC_IPF_CTRL_mm_en_START (11)
#define SOC_IPF_CTRL_mm_en_END (11)
#define SOC_IPF_CTRL_add_rep_START (12)
#define SOC_IPF_CTRL_add_rep_END (12)
#define SOC_IPF_CTRL_schedule_strategy_START (13)
#define SOC_IPF_CTRL_schedule_strategy_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ipf_wr_ch0_id : 4;
        unsigned int ipf_wr_ch1_id : 4;
        unsigned int ipf_rd_ch0_id : 4;
        unsigned int ipf_rd_ch1_id : 4;
        unsigned int ipf_wr_ch0_pri : 3;
        unsigned int reserved_0 : 1;
        unsigned int ipf_wr_ch1_pri : 3;
        unsigned int reserved_1 : 1;
        unsigned int ipf_rd_ch0_pri : 3;
        unsigned int reserved_2 : 1;
        unsigned int ipf_rd_ch1_pri : 3;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_IPF_DMA_CTRL0_UNION;
#endif
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch0_id_START (0)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch0_id_END (3)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch1_id_START (4)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch1_id_END (7)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch0_id_START (8)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch0_id_END (11)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch1_id_START (12)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch1_id_END (15)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch0_pri_START (16)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch0_pri_END (18)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch1_pri_START (20)
#define SOC_IPF_DMA_CTRL0_ipf_wr_ch1_pri_END (22)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch0_pri_START (24)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch0_pri_END (26)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch1_pri_START (28)
#define SOC_IPF_DMA_CTRL0_ipf_rd_ch1_pri_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int outstanding_w : 1;
        unsigned int outstanding_r : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_IPF_DMA_CTRL1_UNION;
#endif
#define SOC_IPF_DMA_CTRL1_outstanding_w_START (0)
#define SOC_IPF_DMA_CTRL1_outstanding_w_END (0)
#define SOC_IPF_DMA_CTRL1_outstanding_r_START (1)
#define SOC_IPF_DMA_CTRL1_outstanding_r_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rpt_int0 : 1;
        unsigned int ul_timeout_int0 : 1;
        unsigned int ul_disable_end_int0 : 1;
        unsigned int ul_idle_cfg_bd_int0 : 1;
        unsigned int ul_trail_cfg_bd_int0 : 1;
        unsigned int ul_noidle_clrptr_int0 : 1;
        unsigned int ul_rdq_downoverflow_int0 : 1;
        unsigned int ul_bdq_upoverflow_int0 : 1;
        unsigned int ul_rdq_full_int0 : 1;
        unsigned int ul_bdq_epty_int0 : 1;
        unsigned int ul_adq0_epty_int0 : 1;
        unsigned int ul_adq1_epty_int0 : 1;
        unsigned int reserved_0 : 4;
        unsigned int dl_rpt_int0 : 1;
        unsigned int dl_timeout_int0 : 1;
        unsigned int dl_disable_end_int0 : 1;
        unsigned int dl_idle_cfg_bd_int0 : 1;
        unsigned int dl_trail_cfg_bd_int0 : 1;
        unsigned int dl_noidle_clrptr_int0 : 1;
        unsigned int dl_rdq_downoverflow_int0 : 1;
        unsigned int dl_bdq_upoverflow_int0 : 1;
        unsigned int dl_rdq_full_int0 : 1;
        unsigned int dl_bdq_epty_int0 : 1;
        unsigned int dl_adq0_epty_int0 : 1;
        unsigned int dl_adq1_epty_int0 : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_IPF_INT0_UNION;
#endif
#define SOC_IPF_INT0_ul_rpt_int0_START (0)
#define SOC_IPF_INT0_ul_rpt_int0_END (0)
#define SOC_IPF_INT0_ul_timeout_int0_START (1)
#define SOC_IPF_INT0_ul_timeout_int0_END (1)
#define SOC_IPF_INT0_ul_disable_end_int0_START (2)
#define SOC_IPF_INT0_ul_disable_end_int0_END (2)
#define SOC_IPF_INT0_ul_idle_cfg_bd_int0_START (3)
#define SOC_IPF_INT0_ul_idle_cfg_bd_int0_END (3)
#define SOC_IPF_INT0_ul_trail_cfg_bd_int0_START (4)
#define SOC_IPF_INT0_ul_trail_cfg_bd_int0_END (4)
#define SOC_IPF_INT0_ul_noidle_clrptr_int0_START (5)
#define SOC_IPF_INT0_ul_noidle_clrptr_int0_END (5)
#define SOC_IPF_INT0_ul_rdq_downoverflow_int0_START (6)
#define SOC_IPF_INT0_ul_rdq_downoverflow_int0_END (6)
#define SOC_IPF_INT0_ul_bdq_upoverflow_int0_START (7)
#define SOC_IPF_INT0_ul_bdq_upoverflow_int0_END (7)
#define SOC_IPF_INT0_ul_rdq_full_int0_START (8)
#define SOC_IPF_INT0_ul_rdq_full_int0_END (8)
#define SOC_IPF_INT0_ul_bdq_epty_int0_START (9)
#define SOC_IPF_INT0_ul_bdq_epty_int0_END (9)
#define SOC_IPF_INT0_ul_adq0_epty_int0_START (10)
#define SOC_IPF_INT0_ul_adq0_epty_int0_END (10)
#define SOC_IPF_INT0_ul_adq1_epty_int0_START (11)
#define SOC_IPF_INT0_ul_adq1_epty_int0_END (11)
#define SOC_IPF_INT0_dl_rpt_int0_START (16)
#define SOC_IPF_INT0_dl_rpt_int0_END (16)
#define SOC_IPF_INT0_dl_timeout_int0_START (17)
#define SOC_IPF_INT0_dl_timeout_int0_END (17)
#define SOC_IPF_INT0_dl_disable_end_int0_START (18)
#define SOC_IPF_INT0_dl_disable_end_int0_END (18)
#define SOC_IPF_INT0_dl_idle_cfg_bd_int0_START (19)
#define SOC_IPF_INT0_dl_idle_cfg_bd_int0_END (19)
#define SOC_IPF_INT0_dl_trail_cfg_bd_int0_START (20)
#define SOC_IPF_INT0_dl_trail_cfg_bd_int0_END (20)
#define SOC_IPF_INT0_dl_noidle_clrptr_int0_START (21)
#define SOC_IPF_INT0_dl_noidle_clrptr_int0_END (21)
#define SOC_IPF_INT0_dl_rdq_downoverflow_int0_START (22)
#define SOC_IPF_INT0_dl_rdq_downoverflow_int0_END (22)
#define SOC_IPF_INT0_dl_bdq_upoverflow_int0_START (23)
#define SOC_IPF_INT0_dl_bdq_upoverflow_int0_END (23)
#define SOC_IPF_INT0_dl_rdq_full_int0_START (24)
#define SOC_IPF_INT0_dl_rdq_full_int0_END (24)
#define SOC_IPF_INT0_dl_bdq_epty_int0_START (25)
#define SOC_IPF_INT0_dl_bdq_epty_int0_END (25)
#define SOC_IPF_INT0_dl_adq0_epty_int0_START (26)
#define SOC_IPF_INT0_dl_adq0_epty_int0_END (26)
#define SOC_IPF_INT0_dl_adq1_epty_int0_START (27)
#define SOC_IPF_INT0_dl_adq1_epty_int0_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rpt_int1 : 1;
        unsigned int ul_timeout_int1 : 1;
        unsigned int ul_disable_end_int1 : 1;
        unsigned int ul_idle_cfg_bd_int1 : 1;
        unsigned int ul_trail_cfg_bd_int1 : 1;
        unsigned int ul_noidle_clrptr_int1 : 1;
        unsigned int ul_rdq_downoverflow_int1 : 1;
        unsigned int ul_bdq_upoverflow_int1 : 1;
        unsigned int ul_rdq_full_int1 : 1;
        unsigned int ul_bdq_epty_int1 : 1;
        unsigned int ul_adq0_epty_int1 : 1;
        unsigned int ul_adq1_epty_int1 : 1;
        unsigned int reserved_0 : 4;
        unsigned int dl_rpt_int1 : 1;
        unsigned int dl_timeout_int1 : 1;
        unsigned int dl_disable_end_int1 : 1;
        unsigned int dl_idle_cfg_bd_int1 : 1;
        unsigned int dl_trail_cfg_bd_int1 : 1;
        unsigned int dl_noidle_clrptr_int1 : 1;
        unsigned int dl_rdq_downoverflow_int1 : 1;
        unsigned int dl_bdq_upoverflow_int1 : 1;
        unsigned int dl_rdq_full_int1 : 1;
        unsigned int dl_bdq_epty_int1 : 1;
        unsigned int dl_adq0_epty_int1 : 1;
        unsigned int dl_adq1_epty_int1 : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_IPF_INT1_UNION;
#endif
#define SOC_IPF_INT1_ul_rpt_int1_START (0)
#define SOC_IPF_INT1_ul_rpt_int1_END (0)
#define SOC_IPF_INT1_ul_timeout_int1_START (1)
#define SOC_IPF_INT1_ul_timeout_int1_END (1)
#define SOC_IPF_INT1_ul_disable_end_int1_START (2)
#define SOC_IPF_INT1_ul_disable_end_int1_END (2)
#define SOC_IPF_INT1_ul_idle_cfg_bd_int1_START (3)
#define SOC_IPF_INT1_ul_idle_cfg_bd_int1_END (3)
#define SOC_IPF_INT1_ul_trail_cfg_bd_int1_START (4)
#define SOC_IPF_INT1_ul_trail_cfg_bd_int1_END (4)
#define SOC_IPF_INT1_ul_noidle_clrptr_int1_START (5)
#define SOC_IPF_INT1_ul_noidle_clrptr_int1_END (5)
#define SOC_IPF_INT1_ul_rdq_downoverflow_int1_START (6)
#define SOC_IPF_INT1_ul_rdq_downoverflow_int1_END (6)
#define SOC_IPF_INT1_ul_bdq_upoverflow_int1_START (7)
#define SOC_IPF_INT1_ul_bdq_upoverflow_int1_END (7)
#define SOC_IPF_INT1_ul_rdq_full_int1_START (8)
#define SOC_IPF_INT1_ul_rdq_full_int1_END (8)
#define SOC_IPF_INT1_ul_bdq_epty_int1_START (9)
#define SOC_IPF_INT1_ul_bdq_epty_int1_END (9)
#define SOC_IPF_INT1_ul_adq0_epty_int1_START (10)
#define SOC_IPF_INT1_ul_adq0_epty_int1_END (10)
#define SOC_IPF_INT1_ul_adq1_epty_int1_START (11)
#define SOC_IPF_INT1_ul_adq1_epty_int1_END (11)
#define SOC_IPF_INT1_dl_rpt_int1_START (16)
#define SOC_IPF_INT1_dl_rpt_int1_END (16)
#define SOC_IPF_INT1_dl_timeout_int1_START (17)
#define SOC_IPF_INT1_dl_timeout_int1_END (17)
#define SOC_IPF_INT1_dl_disable_end_int1_START (18)
#define SOC_IPF_INT1_dl_disable_end_int1_END (18)
#define SOC_IPF_INT1_dl_idle_cfg_bd_int1_START (19)
#define SOC_IPF_INT1_dl_idle_cfg_bd_int1_END (19)
#define SOC_IPF_INT1_dl_trail_cfg_bd_int1_START (20)
#define SOC_IPF_INT1_dl_trail_cfg_bd_int1_END (20)
#define SOC_IPF_INT1_dl_noidle_clrptr_int1_START (21)
#define SOC_IPF_INT1_dl_noidle_clrptr_int1_END (21)
#define SOC_IPF_INT1_dl_rdq_downoverflow_int1_START (22)
#define SOC_IPF_INT1_dl_rdq_downoverflow_int1_END (22)
#define SOC_IPF_INT1_dl_bdq_upoverflow_int1_START (23)
#define SOC_IPF_INT1_dl_bdq_upoverflow_int1_END (23)
#define SOC_IPF_INT1_dl_rdq_full_int1_START (24)
#define SOC_IPF_INT1_dl_rdq_full_int1_END (24)
#define SOC_IPF_INT1_dl_bdq_epty_int1_START (25)
#define SOC_IPF_INT1_dl_bdq_epty_int1_END (25)
#define SOC_IPF_INT1_dl_adq0_epty_int1_START (26)
#define SOC_IPF_INT1_dl_adq0_epty_int1_END (26)
#define SOC_IPF_INT1_dl_adq1_epty_int1_START (27)
#define SOC_IPF_INT1_dl_adq1_epty_int1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rpt_mask0 : 1;
        unsigned int ul_timeout_mask0 : 1;
        unsigned int ul_disable_end_mask0 : 1;
        unsigned int ul_idle_cfg_bd_mask0 : 1;
        unsigned int ul_trail_cfg_bd_mask0 : 1;
        unsigned int ul_noidle_clrptr_mask0 : 1;
        unsigned int ul_rdq_downoverflow_mask0 : 1;
        unsigned int ul_bdq_upoverflow_mask0 : 1;
        unsigned int ul_rdq_full_mask0 : 1;
        unsigned int ul_bdq_epty_mask0 : 1;
        unsigned int ul_adq0_epty_mask0 : 1;
        unsigned int ul_adq1_epty_mask0 : 1;
        unsigned int reserved_0 : 4;
        unsigned int dl_rpt_mask0 : 1;
        unsigned int dl_timeout_mask0 : 1;
        unsigned int dl_disable_end_mask0 : 1;
        unsigned int dl_idle_cfg_bd_mask0 : 1;
        unsigned int dl_trail_cfg_bd_mask0 : 1;
        unsigned int dl_noidle_clrptr_mask0 : 1;
        unsigned int dl_rdq_downoverflow_mask0 : 1;
        unsigned int dl_bdq_upoverflow_mask0 : 1;
        unsigned int dl_rdq_full_mask0 : 1;
        unsigned int dl_bdq_epty_mask0 : 1;
        unsigned int dl_adq0_epty_mask0 : 1;
        unsigned int dl_adq1_epty_mask0 : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_IPF_INT_MASK0_UNION;
#endif
#define SOC_IPF_INT_MASK0_ul_rpt_mask0_START (0)
#define SOC_IPF_INT_MASK0_ul_rpt_mask0_END (0)
#define SOC_IPF_INT_MASK0_ul_timeout_mask0_START (1)
#define SOC_IPF_INT_MASK0_ul_timeout_mask0_END (1)
#define SOC_IPF_INT_MASK0_ul_disable_end_mask0_START (2)
#define SOC_IPF_INT_MASK0_ul_disable_end_mask0_END (2)
#define SOC_IPF_INT_MASK0_ul_idle_cfg_bd_mask0_START (3)
#define SOC_IPF_INT_MASK0_ul_idle_cfg_bd_mask0_END (3)
#define SOC_IPF_INT_MASK0_ul_trail_cfg_bd_mask0_START (4)
#define SOC_IPF_INT_MASK0_ul_trail_cfg_bd_mask0_END (4)
#define SOC_IPF_INT_MASK0_ul_noidle_clrptr_mask0_START (5)
#define SOC_IPF_INT_MASK0_ul_noidle_clrptr_mask0_END (5)
#define SOC_IPF_INT_MASK0_ul_rdq_downoverflow_mask0_START (6)
#define SOC_IPF_INT_MASK0_ul_rdq_downoverflow_mask0_END (6)
#define SOC_IPF_INT_MASK0_ul_bdq_upoverflow_mask0_START (7)
#define SOC_IPF_INT_MASK0_ul_bdq_upoverflow_mask0_END (7)
#define SOC_IPF_INT_MASK0_ul_rdq_full_mask0_START (8)
#define SOC_IPF_INT_MASK0_ul_rdq_full_mask0_END (8)
#define SOC_IPF_INT_MASK0_ul_bdq_epty_mask0_START (9)
#define SOC_IPF_INT_MASK0_ul_bdq_epty_mask0_END (9)
#define SOC_IPF_INT_MASK0_ul_adq0_epty_mask0_START (10)
#define SOC_IPF_INT_MASK0_ul_adq0_epty_mask0_END (10)
#define SOC_IPF_INT_MASK0_ul_adq1_epty_mask0_START (11)
#define SOC_IPF_INT_MASK0_ul_adq1_epty_mask0_END (11)
#define SOC_IPF_INT_MASK0_dl_rpt_mask0_START (16)
#define SOC_IPF_INT_MASK0_dl_rpt_mask0_END (16)
#define SOC_IPF_INT_MASK0_dl_timeout_mask0_START (17)
#define SOC_IPF_INT_MASK0_dl_timeout_mask0_END (17)
#define SOC_IPF_INT_MASK0_dl_disable_end_mask0_START (18)
#define SOC_IPF_INT_MASK0_dl_disable_end_mask0_END (18)
#define SOC_IPF_INT_MASK0_dl_idle_cfg_bd_mask0_START (19)
#define SOC_IPF_INT_MASK0_dl_idle_cfg_bd_mask0_END (19)
#define SOC_IPF_INT_MASK0_dl_trail_cfg_bd_mask0_START (20)
#define SOC_IPF_INT_MASK0_dl_trail_cfg_bd_mask0_END (20)
#define SOC_IPF_INT_MASK0_dl_noidle_clrptr_mask0_START (21)
#define SOC_IPF_INT_MASK0_dl_noidle_clrptr_mask0_END (21)
#define SOC_IPF_INT_MASK0_dl_rdq_downoverflow_mask0_START (22)
#define SOC_IPF_INT_MASK0_dl_rdq_downoverflow_mask0_END (22)
#define SOC_IPF_INT_MASK0_dl_bdq_upoverflow_mask0_START (23)
#define SOC_IPF_INT_MASK0_dl_bdq_upoverflow_mask0_END (23)
#define SOC_IPF_INT_MASK0_dl_rdq_full_mask0_START (24)
#define SOC_IPF_INT_MASK0_dl_rdq_full_mask0_END (24)
#define SOC_IPF_INT_MASK0_dl_bdq_epty_mask0_START (25)
#define SOC_IPF_INT_MASK0_dl_bdq_epty_mask0_END (25)
#define SOC_IPF_INT_MASK0_dl_adq0_epty_mask0_START (26)
#define SOC_IPF_INT_MASK0_dl_adq0_epty_mask0_END (26)
#define SOC_IPF_INT_MASK0_dl_adq1_epty_mask0_START (27)
#define SOC_IPF_INT_MASK0_dl_adq1_epty_mask0_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rpt_mask1 : 1;
        unsigned int ul_timeout_mask1 : 1;
        unsigned int ul_disable_end_mask1 : 1;
        unsigned int ul_idle_cfg_bd_mask1 : 1;
        unsigned int ul_trail_cfg_bd_mask1 : 1;
        unsigned int ul_noidle_clrptr_mask1 : 1;
        unsigned int ul_rdq_downoverflow_mask1 : 1;
        unsigned int ul_bdq_upoverflow_mask1 : 1;
        unsigned int ul_rdq_full_mask1 : 1;
        unsigned int ul_bdq_epty_mask1 : 1;
        unsigned int ul_adq0_epty_mask1 : 1;
        unsigned int ul_adq1_epty_mask1 : 1;
        unsigned int reserved_0 : 4;
        unsigned int dl_rpt_mask1 : 1;
        unsigned int dl_timeout_mask1 : 1;
        unsigned int dl_disable_end_mask1 : 1;
        unsigned int dl_idle_cfg_bd_mask1 : 1;
        unsigned int dl_trail_cfg_bd_mask1 : 1;
        unsigned int dl_noidle_clrptr_mask1 : 1;
        unsigned int dl_rdq_downoverflow_mask1 : 1;
        unsigned int dl_bdq_upoverflow_mask1 : 1;
        unsigned int dl_rdq_full_mask1 : 1;
        unsigned int dl_bdq_epty_mask1 : 1;
        unsigned int dl_adq0_epty_mask1 : 1;
        unsigned int dl_adq1_epty_mask1 : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_IPF_INT_MASK1_UNION;
#endif
#define SOC_IPF_INT_MASK1_ul_rpt_mask1_START (0)
#define SOC_IPF_INT_MASK1_ul_rpt_mask1_END (0)
#define SOC_IPF_INT_MASK1_ul_timeout_mask1_START (1)
#define SOC_IPF_INT_MASK1_ul_timeout_mask1_END (1)
#define SOC_IPF_INT_MASK1_ul_disable_end_mask1_START (2)
#define SOC_IPF_INT_MASK1_ul_disable_end_mask1_END (2)
#define SOC_IPF_INT_MASK1_ul_idle_cfg_bd_mask1_START (3)
#define SOC_IPF_INT_MASK1_ul_idle_cfg_bd_mask1_END (3)
#define SOC_IPF_INT_MASK1_ul_trail_cfg_bd_mask1_START (4)
#define SOC_IPF_INT_MASK1_ul_trail_cfg_bd_mask1_END (4)
#define SOC_IPF_INT_MASK1_ul_noidle_clrptr_mask1_START (5)
#define SOC_IPF_INT_MASK1_ul_noidle_clrptr_mask1_END (5)
#define SOC_IPF_INT_MASK1_ul_rdq_downoverflow_mask1_START (6)
#define SOC_IPF_INT_MASK1_ul_rdq_downoverflow_mask1_END (6)
#define SOC_IPF_INT_MASK1_ul_bdq_upoverflow_mask1_START (7)
#define SOC_IPF_INT_MASK1_ul_bdq_upoverflow_mask1_END (7)
#define SOC_IPF_INT_MASK1_ul_rdq_full_mask1_START (8)
#define SOC_IPF_INT_MASK1_ul_rdq_full_mask1_END (8)
#define SOC_IPF_INT_MASK1_ul_bdq_epty_mask1_START (9)
#define SOC_IPF_INT_MASK1_ul_bdq_epty_mask1_END (9)
#define SOC_IPF_INT_MASK1_ul_adq0_epty_mask1_START (10)
#define SOC_IPF_INT_MASK1_ul_adq0_epty_mask1_END (10)
#define SOC_IPF_INT_MASK1_ul_adq1_epty_mask1_START (11)
#define SOC_IPF_INT_MASK1_ul_adq1_epty_mask1_END (11)
#define SOC_IPF_INT_MASK1_dl_rpt_mask1_START (16)
#define SOC_IPF_INT_MASK1_dl_rpt_mask1_END (16)
#define SOC_IPF_INT_MASK1_dl_timeout_mask1_START (17)
#define SOC_IPF_INT_MASK1_dl_timeout_mask1_END (17)
#define SOC_IPF_INT_MASK1_dl_disable_end_mask1_START (18)
#define SOC_IPF_INT_MASK1_dl_disable_end_mask1_END (18)
#define SOC_IPF_INT_MASK1_dl_idle_cfg_bd_mask1_START (19)
#define SOC_IPF_INT_MASK1_dl_idle_cfg_bd_mask1_END (19)
#define SOC_IPF_INT_MASK1_dl_trail_cfg_bd_mask1_START (20)
#define SOC_IPF_INT_MASK1_dl_trail_cfg_bd_mask1_END (20)
#define SOC_IPF_INT_MASK1_dl_noidle_clrptr_mask1_START (21)
#define SOC_IPF_INT_MASK1_dl_noidle_clrptr_mask1_END (21)
#define SOC_IPF_INT_MASK1_dl_rdq_downoverflow_mask1_START (22)
#define SOC_IPF_INT_MASK1_dl_rdq_downoverflow_mask1_END (22)
#define SOC_IPF_INT_MASK1_dl_bdq_upoverflow_mask1_START (23)
#define SOC_IPF_INT_MASK1_dl_bdq_upoverflow_mask1_END (23)
#define SOC_IPF_INT_MASK1_dl_rdq_full_mask1_START (24)
#define SOC_IPF_INT_MASK1_dl_rdq_full_mask1_END (24)
#define SOC_IPF_INT_MASK1_dl_bdq_epty_mask1_START (25)
#define SOC_IPF_INT_MASK1_dl_bdq_epty_mask1_END (25)
#define SOC_IPF_INT_MASK1_dl_adq0_epty_mask1_START (26)
#define SOC_IPF_INT_MASK1_dl_adq0_epty_mask1_END (26)
#define SOC_IPF_INT_MASK1_dl_adq1_epty_mask1_START (27)
#define SOC_IPF_INT_MASK1_dl_adq1_epty_mask1_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rpt : 1;
        unsigned int ul_timeout : 1;
        unsigned int ul_disable_end : 1;
        unsigned int ul_idle_cfg_bd : 1;
        unsigned int ul_trail_cfg_bd : 1;
        unsigned int ul_noidle_clrptr : 1;
        unsigned int ul_rdq_downoverflow : 1;
        unsigned int ul_bdq_upoverflow : 1;
        unsigned int ul_rdq_full : 1;
        unsigned int ul_bdq_epty : 1;
        unsigned int ul_adq0_epty : 1;
        unsigned int ul_adq1_epty : 1;
        unsigned int reserved_0 : 4;
        unsigned int dl_rpt : 1;
        unsigned int dl_timeout : 1;
        unsigned int dl_disable_end : 1;
        unsigned int dl_idle_cfg_bd : 1;
        unsigned int dl_trail_cfg_bd : 1;
        unsigned int dl_noidle_clrptr : 1;
        unsigned int dl_rdq_downoverflow : 1;
        unsigned int dl_bdq_upoverflow : 1;
        unsigned int dl_rdq_full : 1;
        unsigned int dl_bdq_epty : 1;
        unsigned int dl_adq0_epty : 1;
        unsigned int dl_adq1_epty : 1;
        unsigned int reserved_1 : 4;
    } reg;
} SOC_IPF_INT_STATE_UNION;
#endif
#define SOC_IPF_INT_STATE_ul_rpt_START (0)
#define SOC_IPF_INT_STATE_ul_rpt_END (0)
#define SOC_IPF_INT_STATE_ul_timeout_START (1)
#define SOC_IPF_INT_STATE_ul_timeout_END (1)
#define SOC_IPF_INT_STATE_ul_disable_end_START (2)
#define SOC_IPF_INT_STATE_ul_disable_end_END (2)
#define SOC_IPF_INT_STATE_ul_idle_cfg_bd_START (3)
#define SOC_IPF_INT_STATE_ul_idle_cfg_bd_END (3)
#define SOC_IPF_INT_STATE_ul_trail_cfg_bd_START (4)
#define SOC_IPF_INT_STATE_ul_trail_cfg_bd_END (4)
#define SOC_IPF_INT_STATE_ul_noidle_clrptr_START (5)
#define SOC_IPF_INT_STATE_ul_noidle_clrptr_END (5)
#define SOC_IPF_INT_STATE_ul_rdq_downoverflow_START (6)
#define SOC_IPF_INT_STATE_ul_rdq_downoverflow_END (6)
#define SOC_IPF_INT_STATE_ul_bdq_upoverflow_START (7)
#define SOC_IPF_INT_STATE_ul_bdq_upoverflow_END (7)
#define SOC_IPF_INT_STATE_ul_rdq_full_START (8)
#define SOC_IPF_INT_STATE_ul_rdq_full_END (8)
#define SOC_IPF_INT_STATE_ul_bdq_epty_START (9)
#define SOC_IPF_INT_STATE_ul_bdq_epty_END (9)
#define SOC_IPF_INT_STATE_ul_adq0_epty_START (10)
#define SOC_IPF_INT_STATE_ul_adq0_epty_END (10)
#define SOC_IPF_INT_STATE_ul_adq1_epty_START (11)
#define SOC_IPF_INT_STATE_ul_adq1_epty_END (11)
#define SOC_IPF_INT_STATE_dl_rpt_START (16)
#define SOC_IPF_INT_STATE_dl_rpt_END (16)
#define SOC_IPF_INT_STATE_dl_timeout_START (17)
#define SOC_IPF_INT_STATE_dl_timeout_END (17)
#define SOC_IPF_INT_STATE_dl_disable_end_START (18)
#define SOC_IPF_INT_STATE_dl_disable_end_END (18)
#define SOC_IPF_INT_STATE_dl_idle_cfg_bd_START (19)
#define SOC_IPF_INT_STATE_dl_idle_cfg_bd_END (19)
#define SOC_IPF_INT_STATE_dl_trail_cfg_bd_START (20)
#define SOC_IPF_INT_STATE_dl_trail_cfg_bd_END (20)
#define SOC_IPF_INT_STATE_dl_noidle_clrptr_START (21)
#define SOC_IPF_INT_STATE_dl_noidle_clrptr_END (21)
#define SOC_IPF_INT_STATE_dl_rdq_downoverflow_START (22)
#define SOC_IPF_INT_STATE_dl_rdq_downoverflow_END (22)
#define SOC_IPF_INT_STATE_dl_bdq_upoverflow_START (23)
#define SOC_IPF_INT_STATE_dl_bdq_upoverflow_END (23)
#define SOC_IPF_INT_STATE_dl_rdq_full_START (24)
#define SOC_IPF_INT_STATE_dl_rdq_full_END (24)
#define SOC_IPF_INT_STATE_dl_bdq_epty_START (25)
#define SOC_IPF_INT_STATE_dl_bdq_epty_END (25)
#define SOC_IPF_INT_STATE_dl_adq0_epty_START (26)
#define SOC_IPF_INT_STATE_dl_adq0_epty_END (26)
#define SOC_IPF_INT_STATE_dl_adq1_epty_START (27)
#define SOC_IPF_INT_STATE_dl_adq1_epty_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int time_out_cfg : 16;
        unsigned int time_out_valid : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_IPF_TIME_OUT_UNION;
#endif
#define SOC_IPF_TIME_OUT_time_out_cfg_START (0)
#define SOC_IPF_TIME_OUT_time_out_cfg_END (15)
#define SOC_IPF_TIME_OUT_time_out_valid_START (16)
#define SOC_IPF_TIME_OUT_time_out_valid_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int min_pkt_len : 14;
        unsigned int reserved_0 : 2;
        unsigned int max_pkt_len : 14;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_IPF_PKT_LEN_UNION;
#endif
#define SOC_IPF_PKT_LEN_min_pkt_len_START (0)
#define SOC_IPF_PKT_LEN_min_pkt_len_END (13)
#define SOC_IPF_PKT_LEN_max_pkt_len_START (16)
#define SOC_IPF_PKT_LEN_max_pkt_len_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_filter_zero_index : 9;
        unsigned int reserved_0 : 7;
        unsigned int dl_filter_zero_index : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_IPF_FILTER_ZERO_INDEX_UNION;
#endif
#define SOC_IPF_FILTER_ZERO_INDEX_ul_filter_zero_index_START (0)
#define SOC_IPF_FILTER_ZERO_INDEX_ul_filter_zero_index_END (8)
#define SOC_IPF_FILTER_ZERO_INDEX_dl_filter_zero_index_START (16)
#define SOC_IPF_FILTER_ZERO_INDEX_dl_filter_zero_index_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ef_baddr : 32;
    } reg;
} SOC_IPF_EF_BADDR_UNION;
#endif
#define SOC_IPF_EF_BADDR_ef_baddr_START (0)
#define SOC_IPF_EF_BADDR_ef_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bf_index : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_BFLT_INDEX_UNION;
#endif
#define SOC_IPF_BFLT_INDEX_bf_index_START (0)
#define SOC_IPF_BFLT_INDEX_bf_index_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_chain_loop : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_IPF_FLT_CHAIN_LOOP_UNION;
#endif
#define SOC_IPF_FLT_CHAIN_LOOP_flt_chain_loop_START (0)
#define SOC_IPF_FLT_CHAIN_LOOP_flt_chain_loop_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_laddr0 : 32;
    } reg;
} SOC_IPF_FLT_LOCAL_ADDR0_UNION;
#endif
#define SOC_IPF_FLT_LOCAL_ADDR0_flt_laddr0_START (0)
#define SOC_IPF_FLT_LOCAL_ADDR0_flt_laddr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_laddr1 : 32;
    } reg;
} SOC_IPF_FLT_LOCAL_ADDR1_UNION;
#endif
#define SOC_IPF_FLT_LOCAL_ADDR1_flt_laddr1_START (0)
#define SOC_IPF_FLT_LOCAL_ADDR1_flt_laddr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_laddr2 : 32;
    } reg;
} SOC_IPF_FLT_LOCAL_ADDR2_UNION;
#endif
#define SOC_IPF_FLT_LOCAL_ADDR2_flt_laddr2_START (0)
#define SOC_IPF_FLT_LOCAL_ADDR2_flt_laddr2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_laddr3 : 32;
    } reg;
} SOC_IPF_FLT_LOCAL_ADDR3_UNION;
#endif
#define SOC_IPF_FLT_LOCAL_ADDR3_flt_laddr3_START (0)
#define SOC_IPF_FLT_LOCAL_ADDR3_flt_laddr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr0 : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR0_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR0_flt_raddr0_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR0_flt_raddr0_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr1 : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR1_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR1_flt_raddr1_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR1_flt_raddr1_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr2 : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR2_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR2_flt_raddr2_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR2_flt_raddr2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr3 : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR3_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR3_flt_raddr3_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR3_flt_raddr3_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr0_mask : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR0_MASK_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR0_MASK_flt_raddr0_mask_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR0_MASK_flt_raddr0_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr1_mask : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR1_MASK_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR1_MASK_flt_raddr1_mask_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR1_MASK_flt_raddr1_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr2_mask : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR2_MASK_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR2_MASK_flt_raddr2_mask_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR2_MASK_flt_raddr2_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_raddr3_mask : 32;
    } reg;
} SOC_IPF_FLT_REMOTE_ADDR3_MASK_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_ADDR3_MASK_flt_raddr3_mask_START (0)
#define SOC_IPF_FLT_REMOTE_ADDR3_MASK_flt_raddr3_mask_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_local_port_low : 16;
        unsigned int flt_local_port_high : 16;
    } reg;
} SOC_IPF_FLT_LOCAL_PORT_UNION;
#endif
#define SOC_IPF_FLT_LOCAL_PORT_flt_local_port_low_START (0)
#define SOC_IPF_FLT_LOCAL_PORT_flt_local_port_low_END (15)
#define SOC_IPF_FLT_LOCAL_PORT_flt_local_port_high_START (16)
#define SOC_IPF_FLT_LOCAL_PORT_flt_local_port_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_remote_port_low : 16;
        unsigned int flt_remote_port_high : 16;
    } reg;
} SOC_IPF_FLT_REMOTE_PORT_UNION;
#endif
#define SOC_IPF_FLT_REMOTE_PORT_flt_remote_port_low_START (0)
#define SOC_IPF_FLT_REMOTE_PORT_flt_remote_port_low_END (15)
#define SOC_IPF_FLT_REMOTE_PORT_flt_remote_port_high_START (16)
#define SOC_IPF_FLT_REMOTE_PORT_flt_remote_port_high_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_traffic_class : 8;
        unsigned int flt_traffic_class_mask : 8;
        unsigned int reserved : 16;
    } reg;
} SOC_IPF_FLT_TRAFFIC_CLASS_UNION;
#endif
#define SOC_IPF_FLT_TRAFFIC_CLASS_flt_traffic_class_START (0)
#define SOC_IPF_FLT_TRAFFIC_CLASS_flt_traffic_class_END (7)
#define SOC_IPF_FLT_TRAFFIC_CLASS_flt_traffic_class_mask_START (8)
#define SOC_IPF_FLT_TRAFFIC_CLASS_flt_traffic_class_mask_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_local_addr_mask : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_IPF_FLT_LADD_MASK_UNION;
#endif
#define SOC_IPF_FLT_LADD_MASK_flt_local_addr_mask_START (0)
#define SOC_IPF_FLT_LADD_MASK_flt_local_addr_mask_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_next_header : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_FLT_NEXT_HEADER_UNION;
#endif
#define SOC_IPF_FLT_NEXT_HEADER_flt_next_header_START (0)
#define SOC_IPF_FLT_NEXT_HEADER_flt_next_header_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_fow_lable : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_IPF_FLT_FLOW_LABEL_UNION;
#endif
#define SOC_IPF_FLT_FLOW_LABEL_flt_fow_lable_START (0)
#define SOC_IPF_FLT_FLOW_LABEL_flt_fow_lable_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_type : 8;
        unsigned int reserved_0: 8;
        unsigned int flt_code : 8;
        unsigned int reserved_1: 8;
    } reg;
} SOC_IPF_FLT_ICMP_UNION;
#endif
#define SOC_IPF_FLT_ICMP_flt_type_START (0)
#define SOC_IPF_FLT_ICMP_flt_type_END (7)
#define SOC_IPF_FLT_ICMP_flt_code_START (16)
#define SOC_IPF_FLT_ICMP_flt_code_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_next_index : 9;
        unsigned int reserved_0 : 7;
        unsigned int flt_pri : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_IPF_FLT_CHAIN_UNION;
#endif
#define SOC_IPF_FLT_CHAIN_flt_next_index_START (0)
#define SOC_IPF_FLT_CHAIN_flt_next_index_END (8)
#define SOC_IPF_FLT_CHAIN_flt_pri_START (16)
#define SOC_IPF_FLT_CHAIN_flt_pri_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_spi : 32;
    } reg;
} SOC_IPF_FLT_SPI_UNION;
#endif
#define SOC_IPF_FLT_SPI_flt_spi_START (0)
#define SOC_IPF_FLT_SPI_flt_spi_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int flt_en : 1;
        unsigned int flt_type : 1;
        unsigned int reserved_0 : 2;
        unsigned int flt_spi_en : 1;
        unsigned int flt_code_en : 1;
        unsigned int flt_type_en : 1;
        unsigned int flt_fl_en : 1;
        unsigned int flt_nh_en : 1;
        unsigned int flt_tos_en : 1;
        unsigned int flt_rport_en : 1;
        unsigned int flt_lport_en : 1;
        unsigned int flt_raddr_en : 1;
        unsigned int flt_laddr_en : 1;
        unsigned int reserved_1 : 2;
        unsigned int flt_bear_id : 6;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_IPF_FLT_RULE_CTRL_UNION;
#endif
#define SOC_IPF_FLT_RULE_CTRL_flt_en_START (0)
#define SOC_IPF_FLT_RULE_CTRL_flt_en_END (0)
#define SOC_IPF_FLT_RULE_CTRL_flt_type_START (1)
#define SOC_IPF_FLT_RULE_CTRL_flt_type_END (1)
#define SOC_IPF_FLT_RULE_CTRL_flt_spi_en_START (4)
#define SOC_IPF_FLT_RULE_CTRL_flt_spi_en_END (4)
#define SOC_IPF_FLT_RULE_CTRL_flt_code_en_START (5)
#define SOC_IPF_FLT_RULE_CTRL_flt_code_en_END (5)
#define SOC_IPF_FLT_RULE_CTRL_flt_type_en_START (6)
#define SOC_IPF_FLT_RULE_CTRL_flt_type_en_END (6)
#define SOC_IPF_FLT_RULE_CTRL_flt_fl_en_START (7)
#define SOC_IPF_FLT_RULE_CTRL_flt_fl_en_END (7)
#define SOC_IPF_FLT_RULE_CTRL_flt_nh_en_START (8)
#define SOC_IPF_FLT_RULE_CTRL_flt_nh_en_END (8)
#define SOC_IPF_FLT_RULE_CTRL_flt_tos_en_START (9)
#define SOC_IPF_FLT_RULE_CTRL_flt_tos_en_END (9)
#define SOC_IPF_FLT_RULE_CTRL_flt_rport_en_START (10)
#define SOC_IPF_FLT_RULE_CTRL_flt_rport_en_END (10)
#define SOC_IPF_FLT_RULE_CTRL_flt_lport_en_START (11)
#define SOC_IPF_FLT_RULE_CTRL_flt_lport_en_END (11)
#define SOC_IPF_FLT_RULE_CTRL_flt_raddr_en_START (12)
#define SOC_IPF_FLT_RULE_CTRL_flt_raddr_en_END (12)
#define SOC_IPF_FLT_RULE_CTRL_flt_laddr_en_START (13)
#define SOC_IPF_FLT_RULE_CTRL_flt_laddr_en_END (13)
#define SOC_IPF_FLT_RULE_CTRL_flt_bear_id_START (16)
#define SOC_IPF_FLT_RULE_CTRL_flt_bear_id_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_mod : 2;
        unsigned int ul_endian : 1;
        unsigned int ul_data_chain : 1;
        unsigned int ul_bdq_clr : 1;
        unsigned int ul_rdq_clr : 1;
        unsigned int reserved : 10;
        unsigned int ul_wrr_value : 16;
    } reg;
} SOC_IPF_CH0_CTRL_UNION;
#endif
#define SOC_IPF_CH0_CTRL_ul_mod_START (0)
#define SOC_IPF_CH0_CTRL_ul_mod_END (1)
#define SOC_IPF_CH0_CTRL_ul_endian_START (2)
#define SOC_IPF_CH0_CTRL_ul_endian_END (2)
#define SOC_IPF_CH0_CTRL_ul_data_chain_START (3)
#define SOC_IPF_CH0_CTRL_ul_data_chain_END (3)
#define SOC_IPF_CH0_CTRL_ul_bdq_clr_START (4)
#define SOC_IPF_CH0_CTRL_ul_bdq_clr_END (4)
#define SOC_IPF_CH0_CTRL_ul_rdq_clr_START (5)
#define SOC_IPF_CH0_CTRL_ul_rdq_clr_END (5)
#define SOC_IPF_CH0_CTRL_ul_wrr_value_START (16)
#define SOC_IPF_CH0_CTRL_ul_wrr_value_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_busy : 1;
        unsigned int ul_rdq_full : 1;
        unsigned int ul_rdq_empty : 1;
        unsigned int ul_bdq_full : 1;
        unsigned int ul_bdq_empty : 1;
        unsigned int reserved_0 : 3;
        unsigned int ul_rdq_rptr_invalid : 1;
        unsigned int ul_bdq_wptr_invalid : 1;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_IPF_CH0_STATE_UNION;
#endif
#define SOC_IPF_CH0_STATE_ul_busy_START (0)
#define SOC_IPF_CH0_STATE_ul_busy_END (0)
#define SOC_IPF_CH0_STATE_ul_rdq_full_START (1)
#define SOC_IPF_CH0_STATE_ul_rdq_full_END (1)
#define SOC_IPF_CH0_STATE_ul_rdq_empty_START (2)
#define SOC_IPF_CH0_STATE_ul_rdq_empty_END (2)
#define SOC_IPF_CH0_STATE_ul_bdq_full_START (3)
#define SOC_IPF_CH0_STATE_ul_bdq_full_END (3)
#define SOC_IPF_CH0_STATE_ul_bdq_empty_START (4)
#define SOC_IPF_CH0_STATE_ul_bdq_empty_END (4)
#define SOC_IPF_CH0_STATE_ul_rdq_rptr_invalid_START (8)
#define SOC_IPF_CH0_STATE_ul_rdq_rptr_invalid_END (8)
#define SOC_IPF_CH0_STATE_ul_bdq_wptr_invalid_START (9)
#define SOC_IPF_CH0_STATE_ul_bdq_wptr_invalid_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_baddr : 32;
    } reg;
} SOC_IPF_CH0_BDQ_BADDR_UNION;
#endif
#define SOC_IPF_CH0_BDQ_BADDR_ul_bdq_baddr_START (0)
#define SOC_IPF_CH0_BDQ_BADDR_ul_bdq_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_BDQ_SIZE_UNION;
#endif
#define SOC_IPF_CH0_BDQ_SIZE_ul_bdq_size_START (0)
#define SOC_IPF_CH0_BDQ_SIZE_ul_bdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_BDQ_WPTR_UNION;
#endif
#define SOC_IPF_CH0_BDQ_WPTR_ul_bdq_wptr_START (0)
#define SOC_IPF_CH0_BDQ_WPTR_ul_bdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_BDQ_RPTR_UNION;
#endif
#define SOC_IPF_CH0_BDQ_RPTR_ul_bdq_rptr_START (0)
#define SOC_IPF_CH0_BDQ_RPTR_ul_bdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_waddr : 32;
    } reg;
} SOC_IPF_CH0_BDQ_WADDR_UNION;
#endif
#define SOC_IPF_CH0_BDQ_WADDR_ul_bdq_waddr_START (0)
#define SOC_IPF_CH0_BDQ_WADDR_ul_bdq_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_raddr : 32;
    } reg;
} SOC_IPF_CH0_BDQ_RADDR_UNION;
#endif
#define SOC_IPF_CH0_BDQ_RADDR_ul_bdq_raddr_START (0)
#define SOC_IPF_CH0_BDQ_RADDR_ul_bdq_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_baddr : 32;
    } reg;
} SOC_IPF_CH0_RDQ_BADDR_UNION;
#endif
#define SOC_IPF_CH0_RDQ_BADDR_ul_rdq_baddr_START (0)
#define SOC_IPF_CH0_RDQ_BADDR_ul_rdq_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_RDQ_SIZE_UNION;
#endif
#define SOC_IPF_CH0_RDQ_SIZE_ul_rdq_size_START (0)
#define SOC_IPF_CH0_RDQ_SIZE_ul_rdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_RDQ_WPTR_UNION;
#endif
#define SOC_IPF_CH0_RDQ_WPTR_ul_rdq_wptr_START (0)
#define SOC_IPF_CH0_RDQ_WPTR_ul_rdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_RDQ_RPTR_UNION;
#endif
#define SOC_IPF_CH0_RDQ_RPTR_ul_rdq_rptr_START (0)
#define SOC_IPF_CH0_RDQ_RPTR_ul_rdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_waddr : 32;
    } reg;
} SOC_IPF_CH0_RDQ_WADDR_UNION;
#endif
#define SOC_IPF_CH0_RDQ_WADDR_ul_rdq_waddr_START (0)
#define SOC_IPF_CH0_RDQ_WADDR_ul_rdq_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_rdq_raddr : 32;
    } reg;
} SOC_IPF_CH0_RDQ_RADDR_UNION;
#endif
#define SOC_IPF_CH0_RDQ_RADDR_ul_rdq_raddr_START (0)
#define SOC_IPF_CH0_RDQ_RADDR_ul_rdq_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_bdq_depth : 9;
        unsigned int reserved_0 : 7;
        unsigned int ul_rdq_depth : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_IPF_CH0_DQ_DEPTH_UNION;
#endif
#define SOC_IPF_CH0_DQ_DEPTH_ul_bdq_depth_START (0)
#define SOC_IPF_CH0_DQ_DEPTH_ul_bdq_depth_END (8)
#define SOC_IPF_CH0_DQ_DEPTH_ul_rdq_depth_START (16)
#define SOC_IPF_CH0_DQ_DEPTH_ul_rdq_depth_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_mod : 2;
        unsigned int dl_endian : 1;
        unsigned int dl_data_chain : 1;
        unsigned int dl_bdq_clr : 1;
        unsigned int dl_rdq_clr : 1;
        unsigned int reserved : 10;
        unsigned int dl_wrr_value : 16;
    } reg;
} SOC_IPF_CH1_CTRL_UNION;
#endif
#define SOC_IPF_CH1_CTRL_dl_mod_START (0)
#define SOC_IPF_CH1_CTRL_dl_mod_END (1)
#define SOC_IPF_CH1_CTRL_dl_endian_START (2)
#define SOC_IPF_CH1_CTRL_dl_endian_END (2)
#define SOC_IPF_CH1_CTRL_dl_data_chain_START (3)
#define SOC_IPF_CH1_CTRL_dl_data_chain_END (3)
#define SOC_IPF_CH1_CTRL_dl_bdq_clr_START (4)
#define SOC_IPF_CH1_CTRL_dl_bdq_clr_END (4)
#define SOC_IPF_CH1_CTRL_dl_rdq_clr_START (5)
#define SOC_IPF_CH1_CTRL_dl_rdq_clr_END (5)
#define SOC_IPF_CH1_CTRL_dl_wrr_value_START (16)
#define SOC_IPF_CH1_CTRL_dl_wrr_value_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_busy : 1;
        unsigned int dl_rdq_full : 1;
        unsigned int dl_rdq_empty : 1;
        unsigned int dl_bdq_full : 1;
        unsigned int dl_bdq_empty : 1;
        unsigned int reserved_0 : 3;
        unsigned int dl_rdq_rptr_invalid : 1;
        unsigned int dl_bdq_wptr_invalid : 1;
        unsigned int reserved_1 : 22;
    } reg;
} SOC_IPF_CH1_STATE_UNION;
#endif
#define SOC_IPF_CH1_STATE_dl_busy_START (0)
#define SOC_IPF_CH1_STATE_dl_busy_END (0)
#define SOC_IPF_CH1_STATE_dl_rdq_full_START (1)
#define SOC_IPF_CH1_STATE_dl_rdq_full_END (1)
#define SOC_IPF_CH1_STATE_dl_rdq_empty_START (2)
#define SOC_IPF_CH1_STATE_dl_rdq_empty_END (2)
#define SOC_IPF_CH1_STATE_dl_bdq_full_START (3)
#define SOC_IPF_CH1_STATE_dl_bdq_full_END (3)
#define SOC_IPF_CH1_STATE_dl_bdq_empty_START (4)
#define SOC_IPF_CH1_STATE_dl_bdq_empty_END (4)
#define SOC_IPF_CH1_STATE_dl_rdq_rptr_invalid_START (8)
#define SOC_IPF_CH1_STATE_dl_rdq_rptr_invalid_END (8)
#define SOC_IPF_CH1_STATE_dl_bdq_wptr_invalid_START (9)
#define SOC_IPF_CH1_STATE_dl_bdq_wptr_invalid_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_baddr : 32;
    } reg;
} SOC_IPF_CH1_BDQ_BADDR_UNION;
#endif
#define SOC_IPF_CH1_BDQ_BADDR_dl_bdq_baddr_START (0)
#define SOC_IPF_CH1_BDQ_BADDR_dl_bdq_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_BDQ_SIZE_UNION;
#endif
#define SOC_IPF_CH1_BDQ_SIZE_dl_bdq_size_START (0)
#define SOC_IPF_CH1_BDQ_SIZE_dl_bdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_BDQ_WPTR_UNION;
#endif
#define SOC_IPF_CH1_BDQ_WPTR_dl_bdq_wptr_START (0)
#define SOC_IPF_CH1_BDQ_WPTR_dl_bdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_BDQ_RPTR_UNION;
#endif
#define SOC_IPF_CH1_BDQ_RPTR_dl_bdq_rptr_START (0)
#define SOC_IPF_CH1_BDQ_RPTR_dl_bdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_waddr : 32;
    } reg;
} SOC_IPF_CH1_BDQ_WADDR_UNION;
#endif
#define SOC_IPF_CH1_BDQ_WADDR_dl_bdq_waddr_START (0)
#define SOC_IPF_CH1_BDQ_WADDR_dl_bdq_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_raddr : 32;
    } reg;
} SOC_IPF_CH1_BDQ_RADDR_UNION;
#endif
#define SOC_IPF_CH1_BDQ_RADDR_dl_bdq_raddr_START (0)
#define SOC_IPF_CH1_BDQ_RADDR_dl_bdq_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_baddr : 32;
    } reg;
} SOC_IPF_CH1_RDQ_BADDR_UNION;
#endif
#define SOC_IPF_CH1_RDQ_BADDR_dl_rdq_baddr_START (0)
#define SOC_IPF_CH1_RDQ_BADDR_dl_rdq_baddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_size : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_RDQ_SIZE_UNION;
#endif
#define SOC_IPF_CH1_RDQ_SIZE_dl_rdq_size_START (0)
#define SOC_IPF_CH1_RDQ_SIZE_dl_rdq_size_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_RDQ_WPTR_UNION;
#endif
#define SOC_IPF_CH1_RDQ_WPTR_dl_rdq_wptr_START (0)
#define SOC_IPF_CH1_RDQ_WPTR_dl_rdq_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_RDQ_RPTR_UNION;
#endif
#define SOC_IPF_CH1_RDQ_RPTR_dl_rdq_rptr_START (0)
#define SOC_IPF_CH1_RDQ_RPTR_dl_rdq_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_waddr : 32;
    } reg;
} SOC_IPF_CH1_RDQ_WADDR_UNION;
#endif
#define SOC_IPF_CH1_RDQ_WADDR_dl_rdq_waddr_START (0)
#define SOC_IPF_CH1_RDQ_WADDR_dl_rdq_waddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_rdq_raddr : 32;
    } reg;
} SOC_IPF_CH1_RDQ_RADDR_UNION;
#endif
#define SOC_IPF_CH1_RDQ_RADDR_dl_rdq_raddr_START (0)
#define SOC_IPF_CH1_RDQ_RADDR_dl_rdq_raddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_bdq_depth : 9;
        unsigned int reserved_0 : 7;
        unsigned int dl_rdq_depth : 9;
        unsigned int reserved_1 : 7;
    } reg;
} SOC_IPF_CH1_DQ_DEPTH_UNION;
#endif
#define SOC_IPF_CH1_DQ_DEPTH_dl_bdq_depth_START (0)
#define SOC_IPF_CH1_DQ_DEPTH_dl_bdq_depth_END (8)
#define SOC_IPF_CH1_DQ_DEPTH_dl_rdq_depth_START (16)
#define SOC_IPF_CH1_DQ_DEPTH_dl_rdq_depth_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq_en : 2;
        unsigned int ul_adq0_size_sel : 2;
        unsigned int ul_adq1_size_sel : 2;
        unsigned int reserved : 10;
        unsigned int ul_adq_plen_th : 16;
    } reg;
} SOC_IPF_CH0_ADQ_CTRL_UNION;
#endif
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq_en_START (0)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq_en_END (1)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq0_size_sel_START (2)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq0_size_sel_END (3)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq1_size_sel_START (4)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq1_size_sel_END (5)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq_plen_th_START (16)
#define SOC_IPF_CH0_ADQ_CTRL_ul_adq_plen_th_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq0_base : 32;
    } reg;
} SOC_IPF_CH0_ADQ0_BASE_UNION;
#endif
#define SOC_IPF_CH0_ADQ0_BASE_ul_adq0_base_START (0)
#define SOC_IPF_CH0_ADQ0_BASE_ul_adq0_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq0_empty : 1;
        unsigned int reserved_0 : 1;
        unsigned int ul_adq0_buf_epty : 1;
        unsigned int ul_adq0_buf_full : 1;
        unsigned int ul_adq0_rptr_invalid : 1;
        unsigned int ul_adq0_wptr_invalid : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_IPF_CH0_ADQ0_STAT_UNION;
#endif
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_empty_START (0)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_empty_END (0)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_buf_epty_START (2)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_buf_epty_END (2)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_buf_full_START (3)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_buf_full_END (3)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_rptr_invalid_START (4)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_rptr_invalid_END (4)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_wptr_invalid_START (5)
#define SOC_IPF_CH0_ADQ0_STAT_ul_adq0_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq0_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_ADQ0_WPTR_UNION;
#endif
#define SOC_IPF_CH0_ADQ0_WPTR_ul_adq0_wptr_START (0)
#define SOC_IPF_CH0_ADQ0_WPTR_ul_adq0_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq0_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_ADQ0_RPTR_UNION;
#endif
#define SOC_IPF_CH0_ADQ0_RPTR_ul_adq0_rptr_START (0)
#define SOC_IPF_CH0_ADQ0_RPTR_ul_adq0_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq1_base : 32;
    } reg;
} SOC_IPF_CH0_ADQ1_BASE_UNION;
#endif
#define SOC_IPF_CH0_ADQ1_BASE_ul_adq1_base_START (0)
#define SOC_IPF_CH0_ADQ1_BASE_ul_adq1_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq1_empty : 1;
        unsigned int reserved_0 : 1;
        unsigned int ul_adq1_buf_epty : 1;
        unsigned int ul_adq1_buf_full : 1;
        unsigned int ul_adq1_rptr_invalid : 1;
        unsigned int ul_adq1_wptr_invalid : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_IPF_CH0_ADQ1_STAT_UNION;
#endif
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_empty_START (0)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_empty_END (0)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_buf_epty_START (2)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_buf_epty_END (2)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_buf_full_START (3)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_buf_full_END (3)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_rptr_invalid_START (4)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_rptr_invalid_END (4)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_wptr_invalid_START (5)
#define SOC_IPF_CH0_ADQ1_STAT_ul_adq1_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq1_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_ADQ1_WPTR_UNION;
#endif
#define SOC_IPF_CH0_ADQ1_WPTR_ul_adq1_wptr_START (0)
#define SOC_IPF_CH0_ADQ1_WPTR_ul_adq1_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ul_adq1_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH0_ADQ1_RPTR_UNION;
#endif
#define SOC_IPF_CH0_ADQ1_RPTR_ul_adq1_rptr_START (0)
#define SOC_IPF_CH0_ADQ1_RPTR_ul_adq1_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq_en : 2;
        unsigned int dl_adq0_size_sel : 2;
        unsigned int dl_adq1_size_sel : 2;
        unsigned int reserved : 10;
        unsigned int dl_adq_plen_th : 16;
    } reg;
} SOC_IPF_CH1_ADQ_CTRL_UNION;
#endif
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq_en_START (0)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq_en_END (1)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq0_size_sel_START (2)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq0_size_sel_END (3)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq1_size_sel_START (4)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq1_size_sel_END (5)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq_plen_th_START (16)
#define SOC_IPF_CH1_ADQ_CTRL_dl_adq_plen_th_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq0_base : 32;
    } reg;
} SOC_IPF_CH1_ADQ0_BASE_UNION;
#endif
#define SOC_IPF_CH1_ADQ0_BASE_dl_adq0_base_START (0)
#define SOC_IPF_CH1_ADQ0_BASE_dl_adq0_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq0_empty : 1;
        unsigned int reserved_0 : 1;
        unsigned int dl_adq0_buf_epty : 1;
        unsigned int dl_adq0_buf_full : 1;
        unsigned int dl_adq0_rptr_invalid : 1;
        unsigned int dl_adq0_wptr_invalid : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_IPF_CH1_ADQ0_STAT_UNION;
#endif
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_empty_START (0)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_empty_END (0)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_buf_epty_START (2)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_buf_epty_END (2)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_buf_full_START (3)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_buf_full_END (3)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_rptr_invalid_START (4)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_rptr_invalid_END (4)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_wptr_invalid_START (5)
#define SOC_IPF_CH1_ADQ0_STAT_dl_adq0_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq0_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_ADQ0_WPTR_UNION;
#endif
#define SOC_IPF_CH1_ADQ0_WPTR_dl_adq0_wptr_START (0)
#define SOC_IPF_CH1_ADQ0_WPTR_dl_adq0_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq0_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_ADQ0_RPTR_UNION;
#endif
#define SOC_IPF_CH1_ADQ0_RPTR_dl_adq0_rptr_START (0)
#define SOC_IPF_CH1_ADQ0_RPTR_dl_adq0_rptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq1_base : 32;
    } reg;
} SOC_IPF_CH1_ADQ1_BASE_UNION;
#endif
#define SOC_IPF_CH1_ADQ1_BASE_dl_adq1_base_START (0)
#define SOC_IPF_CH1_ADQ1_BASE_dl_adq1_base_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq1_empty : 1;
        unsigned int reserved_0 : 1;
        unsigned int dl_adq1_buf_epty : 1;
        unsigned int dl_adq1_buf_full : 1;
        unsigned int dl_adq1_rptr_invalid : 1;
        unsigned int dl_adq1_wptr_invalid : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_IPF_CH1_ADQ1_STAT_UNION;
#endif
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_empty_START (0)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_empty_END (0)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_buf_epty_START (2)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_buf_epty_END (2)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_buf_full_START (3)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_buf_full_END (3)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_rptr_invalid_START (4)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_rptr_invalid_END (4)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_wptr_invalid_START (5)
#define SOC_IPF_CH1_ADQ1_STAT_dl_adq1_wptr_invalid_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq1_wptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_ADQ1_WPTR_UNION;
#endif
#define SOC_IPF_CH1_ADQ1_WPTR_dl_adq1_wptr_START (0)
#define SOC_IPF_CH1_ADQ1_WPTR_dl_adq1_wptr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dl_adq1_rptr : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_IPF_CH1_ADQ1_RPTR_UNION;
#endif
#define SOC_IPF_CH1_ADQ1_RPTR_dl_adq1_rptr_START (0)
#define SOC_IPF_CH1_ADQ1_RPTR_dl_adq1_rptr_END (7)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
