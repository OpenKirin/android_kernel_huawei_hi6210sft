#ifndef __SOC_ADE_INTERFACE_H__
#define __SOC_ADE_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ADE_VERSION_ADDR(base) ((base) + (0x0000))
#define SOC_ADE_CTRL_ADDR(base) ((base) + (0x0004))
#define SOC_ADE_SCL3_MUX_CFG_ADDR(base) ((base) + (0x0008))
#define SOC_ADE_SCL1_MUX_CFG_ADDR(base) ((base) + (0x000C))
#define SOC_ADE_ROT_SRC_CFG_ADDR(base) ((base) + (0x0010))
#define SOC_ADE_SCL2_SRC_CFG_ADDR(base) ((base) + (0x0014))
#define SOC_ADE_DISP_SRC_CFG_ADDR(base) ((base) + (0x0018))
#define SOC_ADE_WDMA2_SRC_CFG_ADDR(base) ((base) + (0x001C))
#define SOC_ADE_SEC_OVLY_SRC_CFG_ADDR(base) ((base) + (0x0020))
#define SOC_ADE_WDMA3_SRC_CFG_ADDR(base) ((base) + (0x0024))
#define SOC_ADE_OVLY1_TRANS_CFG_ADDR(base) ((base) + (0x002C))
#define SOC_ADE_CTRAN5_TRANS_CFG_ADDR(base) ((base) + (0x0040))
#define SOC_ADE_DMA_AXI_MUX_ADDR(base) ((base) + (0x0050))
#define SOC_ADE_DMA_SEC_CFG_ADDR(base) ((base) + (0x0054))
#define SOC_ADE_DMA_AXI_OSD_ADDR(base) ((base) + (0x0058))
#define SOC_ADE_SOFT_RST0_ADDR(base) ((base) + (0x0070))
#define SOC_ADE_SOFT_RST1_ADDR(base) ((base) + (0x0074))
#define SOC_ADE_SOFT_RST_SEL0_ADDR(base) ((base) + (0x0078))
#define SOC_ADE_SOFT_RST_SEL1_ADDR(base) ((base) + (0x007C))
#define SOC_ADE_STAT0_ADDR(base) ((base) + (0x0080))
#define SOC_ADE_STAT1_ADDR(base) ((base) + (0x0084))
#define SOC_ADE_DMA_ERR_STAT_ADDR(base) ((base) + (0x0088))
#define SOC_ADE_CTRL1_ADDR(base) ((base) + (0x008C))
#define SOC_ADE_SEC_CFG0_ADDR(base) ((base) + (0x0090))
#define SOC_ADE_SEC_CFG1_ADDR(base) ((base) + (0x0094))
#define SOC_ADE_OVLY_CTL_ADDR(base) ((base) + (0x0098))
#define SOC_ADE_AUTO_CLK_GT_EN0_ADDR(base) ((base) + (0x009C))
#define SOC_ADE_AUTO_CLK_GT_EN1_ADDR(base) ((base) + (0x00A0))
#define SOC_ADE_FRM_DISGARD_CTRL_ADDR(base) ((base) + (0x00A4))
#define SOC_ADE_FRM_DISGARD_CNT_ADDR(base) ((base) + (0x00A8))
#define SOC_ADE_RELOAD_DIS0_ADDR(base) ((base) + (0x00AC))
#define SOC_ADE_RELOAD_DIS1_ADDR(base) ((base) + (0x00B0))
#define SOC_ADE_EN_ADDR(base) ((base) + (0x0100))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int version : 32;
    } reg;
} SOC_ADE_VERSION_UNION;
#endif
#define SOC_ADE_VERSION_version_START (0)
#define SOC_ADE_VERSION_version_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frm_end_start : 2;
        unsigned int dfs_buf_cfg : 1;
        unsigned int rot_buf_cfg : 3;
        unsigned int rd_ch5_nv : 1;
        unsigned int rd_ch6_nv : 1;
        unsigned int dfs_buf_unflow_lev1 : 13;
        unsigned int dfs_buf_unflow_lev2 : 11;
    } reg;
} SOC_ADE_CTRL_UNION;
#endif
#define SOC_ADE_CTRL_frm_end_start_START (0)
#define SOC_ADE_CTRL_frm_end_start_END (1)
#define SOC_ADE_CTRL_dfs_buf_cfg_START (2)
#define SOC_ADE_CTRL_dfs_buf_cfg_END (2)
#define SOC_ADE_CTRL_rot_buf_cfg_START (3)
#define SOC_ADE_CTRL_rot_buf_cfg_END (5)
#define SOC_ADE_CTRL_rd_ch5_nv_START (6)
#define SOC_ADE_CTRL_rd_ch5_nv_END (6)
#define SOC_ADE_CTRL_rd_ch6_nv_START (7)
#define SOC_ADE_CTRL_rd_ch6_nv_END (7)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev1_START (8)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev1_END (20)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev2_START (21)
#define SOC_ADE_CTRL_dfs_buf_unflow_lev2_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scl3_mux_cfg : 1;
        unsigned int clip6_wdma3_trans_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ADE_SCL3_MUX_CFG_UNION;
#endif
#define SOC_ADE_SCL3_MUX_CFG_scl3_mux_cfg_START (0)
#define SOC_ADE_SCL3_MUX_CFG_scl3_mux_cfg_END (0)
#define SOC_ADE_SCL3_MUX_CFG_clip6_wdma3_trans_en_START (1)
#define SOC_ADE_SCL3_MUX_CFG_clip6_wdma3_trans_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scl1_mux_cfg : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ADE_SCL1_MUX_CFG_UNION;
#endif
#define SOC_ADE_SCL1_MUX_CFG_scl1_mux_cfg_START (0)
#define SOC_ADE_SCL1_MUX_CFG_scl1_mux_cfg_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rot_src_cfg : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ADE_ROT_SRC_CFG_UNION;
#endif
#define SOC_ADE_ROT_SRC_CFG_rot_src_cfg_START (0)
#define SOC_ADE_ROT_SRC_CFG_rot_src_cfg_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int scl2_src_cfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_ADE_SCL2_SRC_CFG_UNION;
#endif
#define SOC_ADE_SCL2_SRC_CFG_scl2_src_cfg_START (0)
#define SOC_ADE_SCL2_SRC_CFG_scl2_src_cfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int disp_src_cfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_ADE_DISP_SRC_CFG_UNION;
#endif
#define SOC_ADE_DISP_SRC_CFG_disp_src_cfg_START (0)
#define SOC_ADE_DISP_SRC_CFG_disp_src_cfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdma2_src_cfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_ADE_WDMA2_SRC_CFG_UNION;
#endif
#define SOC_ADE_WDMA2_SRC_CFG_wdma2_src_cfg_START (0)
#define SOC_ADE_WDMA2_SRC_CFG_wdma2_src_cfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sec_ovly_src_cfg : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ADE_SEC_OVLY_SRC_CFG_UNION;
#endif
#define SOC_ADE_SEC_OVLY_SRC_CFG_sec_ovly_src_cfg_START (0)
#define SOC_ADE_SEC_OVLY_SRC_CFG_sec_ovly_src_cfg_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdma3_src_cfg : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_ADE_WDMA3_SRC_CFG_UNION;
#endif
#define SOC_ADE_WDMA3_SRC_CFG_wdma3_src_cfg_START (0)
#define SOC_ADE_WDMA3_SRC_CFG_wdma3_src_cfg_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ovly1_wdma1_trans_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ADE_OVLY1_TRANS_CFG_UNION;
#endif
#define SOC_ADE_OVLY1_TRANS_CFG_ovly1_wdma1_trans_en_START (0)
#define SOC_ADE_OVLY1_TRANS_CFG_ovly1_wdma1_trans_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ctran5_ovly_trans_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ADE_CTRAN5_TRANS_CFG_UNION;
#endif
#define SOC_ADE_CTRAN5_TRANS_CFG_ctran5_ovly_trans_en_START (0)
#define SOC_ADE_CTRAN5_TRANS_CFG_ctran5_ovly_trans_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_dma_ch1_axi_cfg : 1;
        unsigned int rd_dma_ch2_axi_cfg : 1;
        unsigned int rd_dma_ch3_axi_cfg : 1;
        unsigned int rd_dma_ch4_axi_cfg : 1;
        unsigned int rd_dma_ch5_axi_cfg : 1;
        unsigned int rd_dma_ch6_axi_cfg : 1;
        unsigned int rd_dma_disp_axi_cfg : 1;
        unsigned int rd_dma_cmdq1_axi_cfg : 1;
        unsigned int rd_dma_cmdq2_axi_cfg : 1;
        unsigned int reserved_0 : 1;
        unsigned int wr_dma_ch1_axi_cfg : 1;
        unsigned int wr_dma_ch2_axi_cfg : 1;
        unsigned int wr_dma_ch3_axi_cfg : 1;
        unsigned int reserved_1 : 1;
        unsigned int wr_dma_cmdq_axi_cfg : 1;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_ADE_DMA_AXI_MUX_UNION;
#endif
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch1_axi_cfg_START (0)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch1_axi_cfg_END (0)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch2_axi_cfg_START (1)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch2_axi_cfg_END (1)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch3_axi_cfg_START (2)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch3_axi_cfg_END (2)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch4_axi_cfg_START (3)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch4_axi_cfg_END (3)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch5_axi_cfg_START (4)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch5_axi_cfg_END (4)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch6_axi_cfg_START (5)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_ch6_axi_cfg_END (5)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_disp_axi_cfg_START (6)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_disp_axi_cfg_END (6)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq1_axi_cfg_START (7)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq1_axi_cfg_END (7)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq2_axi_cfg_START (8)
#define SOC_ADE_DMA_AXI_MUX_rd_dma_cmdq2_axi_cfg_END (8)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch1_axi_cfg_START (10)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch1_axi_cfg_END (10)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch2_axi_cfg_START (11)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch2_axi_cfg_END (11)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch3_axi_cfg_START (12)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_ch3_axi_cfg_END (12)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_cmdq_axi_cfg_START (14)
#define SOC_ADE_DMA_AXI_MUX_wr_dma_cmdq_axi_cfg_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rd_dma_ch1_sec : 1;
        unsigned int rd_dma_ch2_sec : 1;
        unsigned int rd_dma_ch3_sec : 1;
        unsigned int rd_dma_ch4_sec : 1;
        unsigned int rd_dma_ch5_sec : 1;
        unsigned int rd_dma_ch6_sec : 1;
        unsigned int rd_dma_disp_sec : 1;
        unsigned int rd_dma_cmdq1_sec : 1;
        unsigned int rd_dma_cmdq2_sec : 1;
        unsigned int reserved_0 : 1;
        unsigned int wr_dma_ch1_sec : 1;
        unsigned int wr_dma_ch2_sec : 1;
        unsigned int wr_dma_ch3_sec : 1;
        unsigned int reserved_1 : 1;
        unsigned int wr_dma_cmdq_sec : 1;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_ADE_DMA_SEC_CFG_UNION;
#endif
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch1_sec_START (0)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch1_sec_END (0)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch2_sec_START (1)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch2_sec_END (1)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch3_sec_START (2)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch3_sec_END (2)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch4_sec_START (3)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch4_sec_END (3)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch5_sec_START (4)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch5_sec_END (4)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch6_sec_START (5)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_ch6_sec_END (5)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_disp_sec_START (6)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_disp_sec_END (6)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq1_sec_START (7)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq1_sec_END (7)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq2_sec_START (8)
#define SOC_ADE_DMA_SEC_CFG_rd_dma_cmdq2_sec_END (8)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch1_sec_START (10)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch1_sec_END (10)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch2_sec_START (11)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch2_sec_END (11)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch3_sec_START (12)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_ch3_sec_END (12)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_cmdq_sec_START (14)
#define SOC_ADE_DMA_SEC_CFG_wr_dma_cmdq_sec_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ade_axi0_rd_os : 4;
        unsigned int ade_axi0_wr_os : 4;
        unsigned int reserved_0 : 8;
        unsigned int ade_axi1_rd_os : 4;
        unsigned int ade_axi1_wr_os : 4;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_ADE_DMA_AXI_OSD_UNION;
#endif
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_rd_os_START (0)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_rd_os_END (3)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_wr_os_START (4)
#define SOC_ADE_DMA_AXI_OSD_ade_axi0_wr_os_END (7)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_rd_os_START (16)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_rd_os_END (19)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_wr_os_START (20)
#define SOC_ADE_DMA_AXI_OSD_ade_axi1_wr_os_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_srst : 1;
        unsigned int ch2_rdma_srst : 1;
        unsigned int ch3_rdma_srst : 1;
        unsigned int ch4_rdma_srst : 1;
        unsigned int ch5_rdma_srst : 1;
        unsigned int ch6_rdma_srst : 1;
        unsigned int disp_rdma_srst : 1;
        unsigned int cmdq1_rdma_srst : 1;
        unsigned int cmdq2_rdma_srst : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_srst : 1;
        unsigned int ch2_wdma_srst : 1;
        unsigned int ch3_wdma_srst : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_srst : 1;
        unsigned int clip1_srst : 1;
        unsigned int clip2_srst : 1;
        unsigned int clip3_srst : 1;
        unsigned int clip4_srst : 1;
        unsigned int clip5_srst : 1;
        unsigned int clip6_srst : 1;
        unsigned int scl1_srst : 1;
        unsigned int scl2_srst : 1;
        unsigned int scl3_srst : 1;
        unsigned int ctran1_srst : 1;
        unsigned int ctran2_srst : 1;
        unsigned int ctran3_srst : 1;
        unsigned int ctran4_srst : 1;
        unsigned int ctran5_srst : 1;
        unsigned int ctran6_srst : 1;
        unsigned int rot_srst : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_SOFT_RST0_UNION;
#endif
#define SOC_ADE_SOFT_RST0_ch1_rdma_srst_START (0)
#define SOC_ADE_SOFT_RST0_ch1_rdma_srst_END (0)
#define SOC_ADE_SOFT_RST0_ch2_rdma_srst_START (1)
#define SOC_ADE_SOFT_RST0_ch2_rdma_srst_END (1)
#define SOC_ADE_SOFT_RST0_ch3_rdma_srst_START (2)
#define SOC_ADE_SOFT_RST0_ch3_rdma_srst_END (2)
#define SOC_ADE_SOFT_RST0_ch4_rdma_srst_START (3)
#define SOC_ADE_SOFT_RST0_ch4_rdma_srst_END (3)
#define SOC_ADE_SOFT_RST0_ch5_rdma_srst_START (4)
#define SOC_ADE_SOFT_RST0_ch5_rdma_srst_END (4)
#define SOC_ADE_SOFT_RST0_ch6_rdma_srst_START (5)
#define SOC_ADE_SOFT_RST0_ch6_rdma_srst_END (5)
#define SOC_ADE_SOFT_RST0_disp_rdma_srst_START (6)
#define SOC_ADE_SOFT_RST0_disp_rdma_srst_END (6)
#define SOC_ADE_SOFT_RST0_cmdq1_rdma_srst_START (7)
#define SOC_ADE_SOFT_RST0_cmdq1_rdma_srst_END (7)
#define SOC_ADE_SOFT_RST0_cmdq2_rdma_srst_START (8)
#define SOC_ADE_SOFT_RST0_cmdq2_rdma_srst_END (8)
#define SOC_ADE_SOFT_RST0_ch1_wdma_srst_START (10)
#define SOC_ADE_SOFT_RST0_ch1_wdma_srst_END (10)
#define SOC_ADE_SOFT_RST0_ch2_wdma_srst_START (11)
#define SOC_ADE_SOFT_RST0_ch2_wdma_srst_END (11)
#define SOC_ADE_SOFT_RST0_ch3_wdma_srst_START (12)
#define SOC_ADE_SOFT_RST0_ch3_wdma_srst_END (12)
#define SOC_ADE_SOFT_RST0_cmdq_wdma_srst_START (14)
#define SOC_ADE_SOFT_RST0_cmdq_wdma_srst_END (14)
#define SOC_ADE_SOFT_RST0_clip1_srst_START (15)
#define SOC_ADE_SOFT_RST0_clip1_srst_END (15)
#define SOC_ADE_SOFT_RST0_clip2_srst_START (16)
#define SOC_ADE_SOFT_RST0_clip2_srst_END (16)
#define SOC_ADE_SOFT_RST0_clip3_srst_START (17)
#define SOC_ADE_SOFT_RST0_clip3_srst_END (17)
#define SOC_ADE_SOFT_RST0_clip4_srst_START (18)
#define SOC_ADE_SOFT_RST0_clip4_srst_END (18)
#define SOC_ADE_SOFT_RST0_clip5_srst_START (19)
#define SOC_ADE_SOFT_RST0_clip5_srst_END (19)
#define SOC_ADE_SOFT_RST0_clip6_srst_START (20)
#define SOC_ADE_SOFT_RST0_clip6_srst_END (20)
#define SOC_ADE_SOFT_RST0_scl1_srst_START (21)
#define SOC_ADE_SOFT_RST0_scl1_srst_END (21)
#define SOC_ADE_SOFT_RST0_scl2_srst_START (22)
#define SOC_ADE_SOFT_RST0_scl2_srst_END (22)
#define SOC_ADE_SOFT_RST0_scl3_srst_START (23)
#define SOC_ADE_SOFT_RST0_scl3_srst_END (23)
#define SOC_ADE_SOFT_RST0_ctran1_srst_START (24)
#define SOC_ADE_SOFT_RST0_ctran1_srst_END (24)
#define SOC_ADE_SOFT_RST0_ctran2_srst_START (25)
#define SOC_ADE_SOFT_RST0_ctran2_srst_END (25)
#define SOC_ADE_SOFT_RST0_ctran3_srst_START (26)
#define SOC_ADE_SOFT_RST0_ctran3_srst_END (26)
#define SOC_ADE_SOFT_RST0_ctran4_srst_START (27)
#define SOC_ADE_SOFT_RST0_ctran4_srst_END (27)
#define SOC_ADE_SOFT_RST0_ctran5_srst_START (28)
#define SOC_ADE_SOFT_RST0_ctran5_srst_END (28)
#define SOC_ADE_SOFT_RST0_ctran6_srst_START (29)
#define SOC_ADE_SOFT_RST0_ctran6_srst_END (29)
#define SOC_ADE_SOFT_RST0_rot_srst_START (30)
#define SOC_ADE_SOFT_RST0_rot_srst_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_srst : 1;
        unsigned int cmdq2_srst : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_srst : 1;
        unsigned int dither_srst : 1;
        unsigned int ovly1_srst : 1;
        unsigned int ovly2_srst : 1;
        unsigned int ovly3_srst : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ADE_SOFT_RST1_UNION;
#endif
#define SOC_ADE_SOFT_RST1_cmdq1_srst_START (0)
#define SOC_ADE_SOFT_RST1_cmdq1_srst_END (0)
#define SOC_ADE_SOFT_RST1_cmdq2_srst_START (1)
#define SOC_ADE_SOFT_RST1_cmdq2_srst_END (1)
#define SOC_ADE_SOFT_RST1_gamma_srst_START (3)
#define SOC_ADE_SOFT_RST1_gamma_srst_END (3)
#define SOC_ADE_SOFT_RST1_dither_srst_START (4)
#define SOC_ADE_SOFT_RST1_dither_srst_END (4)
#define SOC_ADE_SOFT_RST1_ovly1_srst_START (5)
#define SOC_ADE_SOFT_RST1_ovly1_srst_END (5)
#define SOC_ADE_SOFT_RST1_ovly2_srst_START (6)
#define SOC_ADE_SOFT_RST1_ovly2_srst_END (6)
#define SOC_ADE_SOFT_RST1_ovly3_srst_START (7)
#define SOC_ADE_SOFT_RST1_ovly3_srst_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_srst_sel : 1;
        unsigned int ch2_rdma_srst_sel : 1;
        unsigned int ch3_rdma_srst_sel : 1;
        unsigned int ch4_rdma_srst_sel : 1;
        unsigned int ch5_rdma_srst_sel : 1;
        unsigned int ch6_rdma_srst_sel : 1;
        unsigned int disp_rdma_srst_sel : 1;
        unsigned int cmdq1_rdma_srst_sel : 1;
        unsigned int cmdq2_rdma_srst_sel : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_srst_sel : 1;
        unsigned int ch2_wdma_srst_sel : 1;
        unsigned int ch3_wdma_srst_sel : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_srst_sel : 1;
        unsigned int clip1_srst_sel : 1;
        unsigned int clip2_srst_sel : 1;
        unsigned int clip3_srst_sel : 1;
        unsigned int clip4_srst_sel : 1;
        unsigned int clip5_srst_sel : 1;
        unsigned int clip6_srst_sel : 1;
        unsigned int scl1_srst_sel : 1;
        unsigned int scl2_srst_sel : 1;
        unsigned int scl3_srst_sel : 1;
        unsigned int ctran1_srst_sel : 1;
        unsigned int ctran2_srst_sel : 1;
        unsigned int ctran3_srst_sel : 1;
        unsigned int ctran4_srst_sel : 1;
        unsigned int ctran5_srst_sel : 1;
        unsigned int ctran6_srst_sel : 1;
        unsigned int rot_srst_sel : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_SOFT_RST_SEL0_UNION;
#endif
#define SOC_ADE_SOFT_RST_SEL0_ch1_rdma_srst_sel_START (0)
#define SOC_ADE_SOFT_RST_SEL0_ch1_rdma_srst_sel_END (0)
#define SOC_ADE_SOFT_RST_SEL0_ch2_rdma_srst_sel_START (1)
#define SOC_ADE_SOFT_RST_SEL0_ch2_rdma_srst_sel_END (1)
#define SOC_ADE_SOFT_RST_SEL0_ch3_rdma_srst_sel_START (2)
#define SOC_ADE_SOFT_RST_SEL0_ch3_rdma_srst_sel_END (2)
#define SOC_ADE_SOFT_RST_SEL0_ch4_rdma_srst_sel_START (3)
#define SOC_ADE_SOFT_RST_SEL0_ch4_rdma_srst_sel_END (3)
#define SOC_ADE_SOFT_RST_SEL0_ch5_rdma_srst_sel_START (4)
#define SOC_ADE_SOFT_RST_SEL0_ch5_rdma_srst_sel_END (4)
#define SOC_ADE_SOFT_RST_SEL0_ch6_rdma_srst_sel_START (5)
#define SOC_ADE_SOFT_RST_SEL0_ch6_rdma_srst_sel_END (5)
#define SOC_ADE_SOFT_RST_SEL0_disp_rdma_srst_sel_START (6)
#define SOC_ADE_SOFT_RST_SEL0_disp_rdma_srst_sel_END (6)
#define SOC_ADE_SOFT_RST_SEL0_cmdq1_rdma_srst_sel_START (7)
#define SOC_ADE_SOFT_RST_SEL0_cmdq1_rdma_srst_sel_END (7)
#define SOC_ADE_SOFT_RST_SEL0_cmdq2_rdma_srst_sel_START (8)
#define SOC_ADE_SOFT_RST_SEL0_cmdq2_rdma_srst_sel_END (8)
#define SOC_ADE_SOFT_RST_SEL0_ch1_wdma_srst_sel_START (10)
#define SOC_ADE_SOFT_RST_SEL0_ch1_wdma_srst_sel_END (10)
#define SOC_ADE_SOFT_RST_SEL0_ch2_wdma_srst_sel_START (11)
#define SOC_ADE_SOFT_RST_SEL0_ch2_wdma_srst_sel_END (11)
#define SOC_ADE_SOFT_RST_SEL0_ch3_wdma_srst_sel_START (12)
#define SOC_ADE_SOFT_RST_SEL0_ch3_wdma_srst_sel_END (12)
#define SOC_ADE_SOFT_RST_SEL0_cmdq_wdma_srst_sel_START (14)
#define SOC_ADE_SOFT_RST_SEL0_cmdq_wdma_srst_sel_END (14)
#define SOC_ADE_SOFT_RST_SEL0_clip1_srst_sel_START (15)
#define SOC_ADE_SOFT_RST_SEL0_clip1_srst_sel_END (15)
#define SOC_ADE_SOFT_RST_SEL0_clip2_srst_sel_START (16)
#define SOC_ADE_SOFT_RST_SEL0_clip2_srst_sel_END (16)
#define SOC_ADE_SOFT_RST_SEL0_clip3_srst_sel_START (17)
#define SOC_ADE_SOFT_RST_SEL0_clip3_srst_sel_END (17)
#define SOC_ADE_SOFT_RST_SEL0_clip4_srst_sel_START (18)
#define SOC_ADE_SOFT_RST_SEL0_clip4_srst_sel_END (18)
#define SOC_ADE_SOFT_RST_SEL0_clip5_srst_sel_START (19)
#define SOC_ADE_SOFT_RST_SEL0_clip5_srst_sel_END (19)
#define SOC_ADE_SOFT_RST_SEL0_clip6_srst_sel_START (20)
#define SOC_ADE_SOFT_RST_SEL0_clip6_srst_sel_END (20)
#define SOC_ADE_SOFT_RST_SEL0_scl1_srst_sel_START (21)
#define SOC_ADE_SOFT_RST_SEL0_scl1_srst_sel_END (21)
#define SOC_ADE_SOFT_RST_SEL0_scl2_srst_sel_START (22)
#define SOC_ADE_SOFT_RST_SEL0_scl2_srst_sel_END (22)
#define SOC_ADE_SOFT_RST_SEL0_scl3_srst_sel_START (23)
#define SOC_ADE_SOFT_RST_SEL0_scl3_srst_sel_END (23)
#define SOC_ADE_SOFT_RST_SEL0_ctran1_srst_sel_START (24)
#define SOC_ADE_SOFT_RST_SEL0_ctran1_srst_sel_END (24)
#define SOC_ADE_SOFT_RST_SEL0_ctran2_srst_sel_START (25)
#define SOC_ADE_SOFT_RST_SEL0_ctran2_srst_sel_END (25)
#define SOC_ADE_SOFT_RST_SEL0_ctran3_srst_sel_START (26)
#define SOC_ADE_SOFT_RST_SEL0_ctran3_srst_sel_END (26)
#define SOC_ADE_SOFT_RST_SEL0_ctran4_srst_sel_START (27)
#define SOC_ADE_SOFT_RST_SEL0_ctran4_srst_sel_END (27)
#define SOC_ADE_SOFT_RST_SEL0_ctran5_srst_sel_START (28)
#define SOC_ADE_SOFT_RST_SEL0_ctran5_srst_sel_END (28)
#define SOC_ADE_SOFT_RST_SEL0_ctran6_srst_sel_START (29)
#define SOC_ADE_SOFT_RST_SEL0_ctran6_srst_sel_END (29)
#define SOC_ADE_SOFT_RST_SEL0_rot_srst_sel_START (30)
#define SOC_ADE_SOFT_RST_SEL0_rot_srst_sel_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_srst_sel : 1;
        unsigned int cmdq2_srst_sel : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_srst_sel : 1;
        unsigned int dither_srst_sel : 1;
        unsigned int ovly1_srst_sel : 1;
        unsigned int ovly2_srst_sel : 1;
        unsigned int ovly3_srst_sel : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ADE_SOFT_RST_SEL1_UNION;
#endif
#define SOC_ADE_SOFT_RST_SEL1_cmdq1_srst_sel_START (0)
#define SOC_ADE_SOFT_RST_SEL1_cmdq1_srst_sel_END (0)
#define SOC_ADE_SOFT_RST_SEL1_cmdq2_srst_sel_START (1)
#define SOC_ADE_SOFT_RST_SEL1_cmdq2_srst_sel_END (1)
#define SOC_ADE_SOFT_RST_SEL1_gamma_srst_sel_START (3)
#define SOC_ADE_SOFT_RST_SEL1_gamma_srst_sel_END (3)
#define SOC_ADE_SOFT_RST_SEL1_dither_srst_sel_START (4)
#define SOC_ADE_SOFT_RST_SEL1_dither_srst_sel_END (4)
#define SOC_ADE_SOFT_RST_SEL1_ovly1_srst_sel_START (5)
#define SOC_ADE_SOFT_RST_SEL1_ovly1_srst_sel_END (5)
#define SOC_ADE_SOFT_RST_SEL1_ovly2_srst_sel_START (6)
#define SOC_ADE_SOFT_RST_SEL1_ovly2_srst_sel_END (6)
#define SOC_ADE_SOFT_RST_SEL1_ovly3_srst_sel_START (7)
#define SOC_ADE_SOFT_RST_SEL1_ovly3_srst_sel_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_status : 1;
        unsigned int ch2_rdma_status : 1;
        unsigned int ch3_rdma_status : 1;
        unsigned int ch4_rdma_status : 1;
        unsigned int ch5_rdma_status : 1;
        unsigned int ch6_rdma_status : 1;
        unsigned int disp_rdma_status : 1;
        unsigned int cmdq1_rdma_status : 1;
        unsigned int cmdq2_rdma_status : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_status : 1;
        unsigned int ch2_wdma_status : 1;
        unsigned int ch3_wdma_status : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_status : 1;
        unsigned int clip1_status : 1;
        unsigned int clip2_status : 1;
        unsigned int clip3_status : 1;
        unsigned int clip4_status : 1;
        unsigned int clip5_status : 1;
        unsigned int clip6_status : 1;
        unsigned int scl1_status : 1;
        unsigned int scl2_status : 1;
        unsigned int scl3_status : 1;
        unsigned int ctran1_status : 1;
        unsigned int ctran2_status : 1;
        unsigned int ctran3_status : 1;
        unsigned int ctran4_status : 1;
        unsigned int ctran5_status : 1;
        unsigned int ctran6_status : 1;
        unsigned int rot_status : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_STAT0_UNION;
#endif
#define SOC_ADE_STAT0_ch1_rdma_status_START (0)
#define SOC_ADE_STAT0_ch1_rdma_status_END (0)
#define SOC_ADE_STAT0_ch2_rdma_status_START (1)
#define SOC_ADE_STAT0_ch2_rdma_status_END (1)
#define SOC_ADE_STAT0_ch3_rdma_status_START (2)
#define SOC_ADE_STAT0_ch3_rdma_status_END (2)
#define SOC_ADE_STAT0_ch4_rdma_status_START (3)
#define SOC_ADE_STAT0_ch4_rdma_status_END (3)
#define SOC_ADE_STAT0_ch5_rdma_status_START (4)
#define SOC_ADE_STAT0_ch5_rdma_status_END (4)
#define SOC_ADE_STAT0_ch6_rdma_status_START (5)
#define SOC_ADE_STAT0_ch6_rdma_status_END (5)
#define SOC_ADE_STAT0_disp_rdma_status_START (6)
#define SOC_ADE_STAT0_disp_rdma_status_END (6)
#define SOC_ADE_STAT0_cmdq1_rdma_status_START (7)
#define SOC_ADE_STAT0_cmdq1_rdma_status_END (7)
#define SOC_ADE_STAT0_cmdq2_rdma_status_START (8)
#define SOC_ADE_STAT0_cmdq2_rdma_status_END (8)
#define SOC_ADE_STAT0_ch1_wdma_status_START (10)
#define SOC_ADE_STAT0_ch1_wdma_status_END (10)
#define SOC_ADE_STAT0_ch2_wdma_status_START (11)
#define SOC_ADE_STAT0_ch2_wdma_status_END (11)
#define SOC_ADE_STAT0_ch3_wdma_status_START (12)
#define SOC_ADE_STAT0_ch3_wdma_status_END (12)
#define SOC_ADE_STAT0_cmdq_wdma_status_START (14)
#define SOC_ADE_STAT0_cmdq_wdma_status_END (14)
#define SOC_ADE_STAT0_clip1_status_START (15)
#define SOC_ADE_STAT0_clip1_status_END (15)
#define SOC_ADE_STAT0_clip2_status_START (16)
#define SOC_ADE_STAT0_clip2_status_END (16)
#define SOC_ADE_STAT0_clip3_status_START (17)
#define SOC_ADE_STAT0_clip3_status_END (17)
#define SOC_ADE_STAT0_clip4_status_START (18)
#define SOC_ADE_STAT0_clip4_status_END (18)
#define SOC_ADE_STAT0_clip5_status_START (19)
#define SOC_ADE_STAT0_clip5_status_END (19)
#define SOC_ADE_STAT0_clip6_status_START (20)
#define SOC_ADE_STAT0_clip6_status_END (20)
#define SOC_ADE_STAT0_scl1_status_START (21)
#define SOC_ADE_STAT0_scl1_status_END (21)
#define SOC_ADE_STAT0_scl2_status_START (22)
#define SOC_ADE_STAT0_scl2_status_END (22)
#define SOC_ADE_STAT0_scl3_status_START (23)
#define SOC_ADE_STAT0_scl3_status_END (23)
#define SOC_ADE_STAT0_ctran1_status_START (24)
#define SOC_ADE_STAT0_ctran1_status_END (24)
#define SOC_ADE_STAT0_ctran2_status_START (25)
#define SOC_ADE_STAT0_ctran2_status_END (25)
#define SOC_ADE_STAT0_ctran3_status_START (26)
#define SOC_ADE_STAT0_ctran3_status_END (26)
#define SOC_ADE_STAT0_ctran4_status_START (27)
#define SOC_ADE_STAT0_ctran4_status_END (27)
#define SOC_ADE_STAT0_ctran5_status_START (28)
#define SOC_ADE_STAT0_ctran5_status_END (28)
#define SOC_ADE_STAT0_ctran6_status_START (29)
#define SOC_ADE_STAT0_ctran6_status_END (29)
#define SOC_ADE_STAT0_rot_status_START (30)
#define SOC_ADE_STAT0_rot_status_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_status : 1;
        unsigned int cmdq2_status : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_status : 1;
        unsigned int dither_status : 1;
        unsigned int ovly1_status : 1;
        unsigned int ovly2_status : 1;
        unsigned int ovly3_status : 1;
        unsigned int reserved_1 : 8;
        unsigned int dfs_buf_fill_lev : 13;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_ADE_STAT1_UNION;
#endif
#define SOC_ADE_STAT1_cmdq1_status_START (0)
#define SOC_ADE_STAT1_cmdq1_status_END (0)
#define SOC_ADE_STAT1_cmdq2_status_START (1)
#define SOC_ADE_STAT1_cmdq2_status_END (1)
#define SOC_ADE_STAT1_gamma_status_START (3)
#define SOC_ADE_STAT1_gamma_status_END (3)
#define SOC_ADE_STAT1_dither_status_START (4)
#define SOC_ADE_STAT1_dither_status_END (4)
#define SOC_ADE_STAT1_ovly1_status_START (5)
#define SOC_ADE_STAT1_ovly1_status_END (5)
#define SOC_ADE_STAT1_ovly2_status_START (6)
#define SOC_ADE_STAT1_ovly2_status_END (6)
#define SOC_ADE_STAT1_ovly3_status_START (7)
#define SOC_ADE_STAT1_ovly3_status_END (7)
#define SOC_ADE_STAT1_dfs_buf_fill_lev_START (16)
#define SOC_ADE_STAT1_dfs_buf_fill_lev_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_err_status : 1;
        unsigned int ch2_rdma_err_status : 1;
        unsigned int ch3_rdma_err_status : 1;
        unsigned int ch4_rdma_err_status : 1;
        unsigned int ch5_rdma_err_status : 1;
        unsigned int ch6_rdma_err_status : 1;
        unsigned int disp_rdma_err_status : 1;
        unsigned int cmdq1_rdma_err_status : 1;
        unsigned int cmdq2_rdma_err_status : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_err_status : 1;
        unsigned int ch2_wdma_err_status : 1;
        unsigned int ch3_wdma_err_status : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_err_status : 1;
        unsigned int reserved_2 : 17;
    } reg;
} SOC_ADE_DMA_ERR_STAT_UNION;
#endif
#define SOC_ADE_DMA_ERR_STAT_ch1_rdma_err_status_START (0)
#define SOC_ADE_DMA_ERR_STAT_ch1_rdma_err_status_END (0)
#define SOC_ADE_DMA_ERR_STAT_ch2_rdma_err_status_START (1)
#define SOC_ADE_DMA_ERR_STAT_ch2_rdma_err_status_END (1)
#define SOC_ADE_DMA_ERR_STAT_ch3_rdma_err_status_START (2)
#define SOC_ADE_DMA_ERR_STAT_ch3_rdma_err_status_END (2)
#define SOC_ADE_DMA_ERR_STAT_ch4_rdma_err_status_START (3)
#define SOC_ADE_DMA_ERR_STAT_ch4_rdma_err_status_END (3)
#define SOC_ADE_DMA_ERR_STAT_ch5_rdma_err_status_START (4)
#define SOC_ADE_DMA_ERR_STAT_ch5_rdma_err_status_END (4)
#define SOC_ADE_DMA_ERR_STAT_ch6_rdma_err_status_START (5)
#define SOC_ADE_DMA_ERR_STAT_ch6_rdma_err_status_END (5)
#define SOC_ADE_DMA_ERR_STAT_disp_rdma_err_status_START (6)
#define SOC_ADE_DMA_ERR_STAT_disp_rdma_err_status_END (6)
#define SOC_ADE_DMA_ERR_STAT_cmdq1_rdma_err_status_START (7)
#define SOC_ADE_DMA_ERR_STAT_cmdq1_rdma_err_status_END (7)
#define SOC_ADE_DMA_ERR_STAT_cmdq2_rdma_err_status_START (8)
#define SOC_ADE_DMA_ERR_STAT_cmdq2_rdma_err_status_END (8)
#define SOC_ADE_DMA_ERR_STAT_ch1_wdma_err_status_START (10)
#define SOC_ADE_DMA_ERR_STAT_ch1_wdma_err_status_END (10)
#define SOC_ADE_DMA_ERR_STAT_ch2_wdma_err_status_START (11)
#define SOC_ADE_DMA_ERR_STAT_ch2_wdma_err_status_END (11)
#define SOC_ADE_DMA_ERR_STAT_ch3_wdma_err_status_START (12)
#define SOC_ADE_DMA_ERR_STAT_ch3_wdma_err_status_END (12)
#define SOC_ADE_DMA_ERR_STAT_cmdq_wdma_err_status_START (14)
#define SOC_ADE_DMA_ERR_STAT_cmdq_wdma_err_status_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int auto_clk_gate_en : 1;
        unsigned int rot_buf_shr_out : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_ADE_CTRL1_UNION;
#endif
#define SOC_ADE_CTRL1_auto_clk_gate_en_START (0)
#define SOC_ADE_CTRL1_auto_clk_gate_en_END (0)
#define SOC_ADE_CTRL1_rot_buf_shr_out_START (1)
#define SOC_ADE_CTRL1_rot_buf_shr_out_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_sec : 1;
        unsigned int ch2_rdma_sec : 1;
        unsigned int ch3_rdma_sec : 1;
        unsigned int ch4_rdma_sec : 1;
        unsigned int ch5_rdma_sec : 1;
        unsigned int ch6_rdma_sec : 1;
        unsigned int disp_rdma_sec : 1;
        unsigned int cmdq1_rdma_sec : 1;
        unsigned int cmdq2_rdma_sec : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_sec : 1;
        unsigned int ch2_wdma_sec : 1;
        unsigned int ch3_wdma_sec : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_sec : 1;
        unsigned int clip1_sec : 1;
        unsigned int clip2_sec : 1;
        unsigned int clip3_sec : 1;
        unsigned int clip4_sec : 1;
        unsigned int clip5_sec : 1;
        unsigned int clip6_sec : 1;
        unsigned int scl1_sec : 1;
        unsigned int scl2_sec : 1;
        unsigned int scl3_sec : 1;
        unsigned int ctran1_sec : 1;
        unsigned int ctran2_sec : 1;
        unsigned int ctran3_sec : 1;
        unsigned int ctran4_sec : 1;
        unsigned int ctran5_sec : 1;
        unsigned int ctran6_sec : 1;
        unsigned int rot_sec : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_SEC_CFG0_UNION;
#endif
#define SOC_ADE_SEC_CFG0_ch1_rdma_sec_START (0)
#define SOC_ADE_SEC_CFG0_ch1_rdma_sec_END (0)
#define SOC_ADE_SEC_CFG0_ch2_rdma_sec_START (1)
#define SOC_ADE_SEC_CFG0_ch2_rdma_sec_END (1)
#define SOC_ADE_SEC_CFG0_ch3_rdma_sec_START (2)
#define SOC_ADE_SEC_CFG0_ch3_rdma_sec_END (2)
#define SOC_ADE_SEC_CFG0_ch4_rdma_sec_START (3)
#define SOC_ADE_SEC_CFG0_ch4_rdma_sec_END (3)
#define SOC_ADE_SEC_CFG0_ch5_rdma_sec_START (4)
#define SOC_ADE_SEC_CFG0_ch5_rdma_sec_END (4)
#define SOC_ADE_SEC_CFG0_ch6_rdma_sec_START (5)
#define SOC_ADE_SEC_CFG0_ch6_rdma_sec_END (5)
#define SOC_ADE_SEC_CFG0_disp_rdma_sec_START (6)
#define SOC_ADE_SEC_CFG0_disp_rdma_sec_END (6)
#define SOC_ADE_SEC_CFG0_cmdq1_rdma_sec_START (7)
#define SOC_ADE_SEC_CFG0_cmdq1_rdma_sec_END (7)
#define SOC_ADE_SEC_CFG0_cmdq2_rdma_sec_START (8)
#define SOC_ADE_SEC_CFG0_cmdq2_rdma_sec_END (8)
#define SOC_ADE_SEC_CFG0_ch1_wdma_sec_START (10)
#define SOC_ADE_SEC_CFG0_ch1_wdma_sec_END (10)
#define SOC_ADE_SEC_CFG0_ch2_wdma_sec_START (11)
#define SOC_ADE_SEC_CFG0_ch2_wdma_sec_END (11)
#define SOC_ADE_SEC_CFG0_ch3_wdma_sec_START (12)
#define SOC_ADE_SEC_CFG0_ch3_wdma_sec_END (12)
#define SOC_ADE_SEC_CFG0_cmdq_wdma_sec_START (14)
#define SOC_ADE_SEC_CFG0_cmdq_wdma_sec_END (14)
#define SOC_ADE_SEC_CFG0_clip1_sec_START (15)
#define SOC_ADE_SEC_CFG0_clip1_sec_END (15)
#define SOC_ADE_SEC_CFG0_clip2_sec_START (16)
#define SOC_ADE_SEC_CFG0_clip2_sec_END (16)
#define SOC_ADE_SEC_CFG0_clip3_sec_START (17)
#define SOC_ADE_SEC_CFG0_clip3_sec_END (17)
#define SOC_ADE_SEC_CFG0_clip4_sec_START (18)
#define SOC_ADE_SEC_CFG0_clip4_sec_END (18)
#define SOC_ADE_SEC_CFG0_clip5_sec_START (19)
#define SOC_ADE_SEC_CFG0_clip5_sec_END (19)
#define SOC_ADE_SEC_CFG0_clip6_sec_START (20)
#define SOC_ADE_SEC_CFG0_clip6_sec_END (20)
#define SOC_ADE_SEC_CFG0_scl1_sec_START (21)
#define SOC_ADE_SEC_CFG0_scl1_sec_END (21)
#define SOC_ADE_SEC_CFG0_scl2_sec_START (22)
#define SOC_ADE_SEC_CFG0_scl2_sec_END (22)
#define SOC_ADE_SEC_CFG0_scl3_sec_START (23)
#define SOC_ADE_SEC_CFG0_scl3_sec_END (23)
#define SOC_ADE_SEC_CFG0_ctran1_sec_START (24)
#define SOC_ADE_SEC_CFG0_ctran1_sec_END (24)
#define SOC_ADE_SEC_CFG0_ctran2_sec_START (25)
#define SOC_ADE_SEC_CFG0_ctran2_sec_END (25)
#define SOC_ADE_SEC_CFG0_ctran3_sec_START (26)
#define SOC_ADE_SEC_CFG0_ctran3_sec_END (26)
#define SOC_ADE_SEC_CFG0_ctran4_sec_START (27)
#define SOC_ADE_SEC_CFG0_ctran4_sec_END (27)
#define SOC_ADE_SEC_CFG0_ctran5_sec_START (28)
#define SOC_ADE_SEC_CFG0_ctran5_sec_END (28)
#define SOC_ADE_SEC_CFG0_ctran6_sec_START (29)
#define SOC_ADE_SEC_CFG0_ctran6_sec_END (29)
#define SOC_ADE_SEC_CFG0_rot_sec_START (30)
#define SOC_ADE_SEC_CFG0_rot_sec_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_sec : 1;
        unsigned int cmdq2_sec : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_sec : 1;
        unsigned int dither_sec : 1;
        unsigned int ovly1_sec : 1;
        unsigned int ovly2_sec : 1;
        unsigned int ovly3_sec : 1;
        unsigned int top_sec : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_ADE_SEC_CFG1_UNION;
#endif
#define SOC_ADE_SEC_CFG1_cmdq1_sec_START (0)
#define SOC_ADE_SEC_CFG1_cmdq1_sec_END (0)
#define SOC_ADE_SEC_CFG1_cmdq2_sec_START (1)
#define SOC_ADE_SEC_CFG1_cmdq2_sec_END (1)
#define SOC_ADE_SEC_CFG1_gamma_sec_START (3)
#define SOC_ADE_SEC_CFG1_gamma_sec_END (3)
#define SOC_ADE_SEC_CFG1_dither_sec_START (4)
#define SOC_ADE_SEC_CFG1_dither_sec_END (4)
#define SOC_ADE_SEC_CFG1_ovly1_sec_START (5)
#define SOC_ADE_SEC_CFG1_ovly1_sec_END (5)
#define SOC_ADE_SEC_CFG1_ovly2_sec_START (6)
#define SOC_ADE_SEC_CFG1_ovly2_sec_END (6)
#define SOC_ADE_SEC_CFG1_ovly3_sec_START (7)
#define SOC_ADE_SEC_CFG1_ovly3_sec_END (7)
#define SOC_ADE_SEC_CFG1_top_sec_START (8)
#define SOC_ADE_SEC_CFG1_top_sec_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_ovly_sel : 2;
        unsigned int reserved_0 : 2;
        unsigned int ch2_ovly_sel : 2;
        unsigned int reserved_1 : 2;
        unsigned int ch3_ovly_sel : 2;
        unsigned int reserved_2 : 2;
        unsigned int ch4_ovly_sel : 2;
        unsigned int reserved_3 : 2;
        unsigned int ch5_ovly_sel : 2;
        unsigned int reserved_4 : 2;
        unsigned int ch6_ovly_sel : 2;
        unsigned int reserved_5 : 2;
        unsigned int ch7_ovly_sel : 2;
        unsigned int reserved_6 : 2;
        unsigned int ch8_ovly_sel : 2;
        unsigned int reserved_7 : 2;
    } reg;
} SOC_ADE_OVLY_CTL_UNION;
#endif
#define SOC_ADE_OVLY_CTL_ch1_ovly_sel_START (0)
#define SOC_ADE_OVLY_CTL_ch1_ovly_sel_END (1)
#define SOC_ADE_OVLY_CTL_ch2_ovly_sel_START (4)
#define SOC_ADE_OVLY_CTL_ch2_ovly_sel_END (5)
#define SOC_ADE_OVLY_CTL_ch3_ovly_sel_START (8)
#define SOC_ADE_OVLY_CTL_ch3_ovly_sel_END (9)
#define SOC_ADE_OVLY_CTL_ch4_ovly_sel_START (12)
#define SOC_ADE_OVLY_CTL_ch4_ovly_sel_END (13)
#define SOC_ADE_OVLY_CTL_ch5_ovly_sel_START (16)
#define SOC_ADE_OVLY_CTL_ch5_ovly_sel_END (17)
#define SOC_ADE_OVLY_CTL_ch6_ovly_sel_START (20)
#define SOC_ADE_OVLY_CTL_ch6_ovly_sel_END (21)
#define SOC_ADE_OVLY_CTL_ch7_ovly_sel_START (24)
#define SOC_ADE_OVLY_CTL_ch7_ovly_sel_END (25)
#define SOC_ADE_OVLY_CTL_ch8_ovly_sel_START (28)
#define SOC_ADE_OVLY_CTL_ch8_ovly_sel_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_auto_clk_gt_en : 1;
        unsigned int ch2_rdma_auto_clk_gt_en : 1;
        unsigned int ch3_rdma_auto_clk_gt_en : 1;
        unsigned int ch4_rdma_auto_clk_gt_en : 1;
        unsigned int ch5_rdma_auto_clk_gt_en : 1;
        unsigned int ch6_rdma_auto_clk_gt_en : 1;
        unsigned int disp_rdma_auto_clk_gt_en : 1;
        unsigned int cmdq1_rdma_auto_clk_gt_en : 1;
        unsigned int cmdq2_rdma_auto_clk_gt_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_auto_clk_gt_en : 1;
        unsigned int ch2_wdma_auto_clk_gt_en : 1;
        unsigned int ch3_wdma_auto_clk_gt_en : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_auto_clk_gt_en : 1;
        unsigned int clip1_auto_clk_gt_en : 1;
        unsigned int clip2_auto_clk_gt_en : 1;
        unsigned int clip3_auto_clk_gt_en : 1;
        unsigned int clip4_auto_clk_gt_en : 1;
        unsigned int clip5_auto_clk_gt_en : 1;
        unsigned int clip6_auto_clk_gt_en : 1;
        unsigned int scl1_auto_clk_gt_en : 1;
        unsigned int scl2_auto_clk_gt_en : 1;
        unsigned int scl3_auto_clk_gt_en : 1;
        unsigned int ctran1_auto_clk_gt_en : 1;
        unsigned int ctran2_auto_clk_gt_en : 1;
        unsigned int ctran3_auto_clk_gt_en : 1;
        unsigned int ctran4_auto_clk_gt_en : 1;
        unsigned int ctran5_auto_clk_gt_en : 1;
        unsigned int ctran6_auto_clk_gt_en : 1;
        unsigned int rot_auto_clk_gt_en : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_AUTO_CLK_GT_EN0_UNION;
#endif
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_rdma_auto_clk_gt_en_START (0)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_rdma_auto_clk_gt_en_END (0)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_rdma_auto_clk_gt_en_START (1)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_rdma_auto_clk_gt_en_END (1)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_rdma_auto_clk_gt_en_START (2)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_rdma_auto_clk_gt_en_END (2)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch4_rdma_auto_clk_gt_en_START (3)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch4_rdma_auto_clk_gt_en_END (3)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch5_rdma_auto_clk_gt_en_START (4)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch5_rdma_auto_clk_gt_en_END (4)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch6_rdma_auto_clk_gt_en_START (5)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch6_rdma_auto_clk_gt_en_END (5)
#define SOC_ADE_AUTO_CLK_GT_EN0_disp_rdma_auto_clk_gt_en_START (6)
#define SOC_ADE_AUTO_CLK_GT_EN0_disp_rdma_auto_clk_gt_en_END (6)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq1_rdma_auto_clk_gt_en_START (7)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq1_rdma_auto_clk_gt_en_END (7)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq2_rdma_auto_clk_gt_en_START (8)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq2_rdma_auto_clk_gt_en_END (8)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_wdma_auto_clk_gt_en_START (10)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch1_wdma_auto_clk_gt_en_END (10)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_wdma_auto_clk_gt_en_START (11)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch2_wdma_auto_clk_gt_en_END (11)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_wdma_auto_clk_gt_en_START (12)
#define SOC_ADE_AUTO_CLK_GT_EN0_ch3_wdma_auto_clk_gt_en_END (12)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq_wdma_auto_clk_gt_en_START (14)
#define SOC_ADE_AUTO_CLK_GT_EN0_cmdq_wdma_auto_clk_gt_en_END (14)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip1_auto_clk_gt_en_START (15)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip1_auto_clk_gt_en_END (15)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip2_auto_clk_gt_en_START (16)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip2_auto_clk_gt_en_END (16)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip3_auto_clk_gt_en_START (17)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip3_auto_clk_gt_en_END (17)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip4_auto_clk_gt_en_START (18)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip4_auto_clk_gt_en_END (18)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip5_auto_clk_gt_en_START (19)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip5_auto_clk_gt_en_END (19)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip6_auto_clk_gt_en_START (20)
#define SOC_ADE_AUTO_CLK_GT_EN0_clip6_auto_clk_gt_en_END (20)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl1_auto_clk_gt_en_START (21)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl1_auto_clk_gt_en_END (21)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl2_auto_clk_gt_en_START (22)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl2_auto_clk_gt_en_END (22)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl3_auto_clk_gt_en_START (23)
#define SOC_ADE_AUTO_CLK_GT_EN0_scl3_auto_clk_gt_en_END (23)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran1_auto_clk_gt_en_START (24)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran1_auto_clk_gt_en_END (24)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran2_auto_clk_gt_en_START (25)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran2_auto_clk_gt_en_END (25)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran3_auto_clk_gt_en_START (26)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran3_auto_clk_gt_en_END (26)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran4_auto_clk_gt_en_START (27)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran4_auto_clk_gt_en_END (27)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran5_auto_clk_gt_en_START (28)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran5_auto_clk_gt_en_END (28)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran6_auto_clk_gt_en_START (29)
#define SOC_ADE_AUTO_CLK_GT_EN0_ctran6_auto_clk_gt_en_END (29)
#define SOC_ADE_AUTO_CLK_GT_EN0_rot_auto_clk_gt_en_START (30)
#define SOC_ADE_AUTO_CLK_GT_EN0_rot_auto_clk_gt_en_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_auto_clk_gt_en : 1;
        unsigned int cmdq2_auto_clk_gt_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_auto_clk_gt_en : 1;
        unsigned int dither_auto_clk_gt_en : 1;
        unsigned int ovly1_auto_clk_gt_en : 1;
        unsigned int ovly2_auto_clk_gt_en : 1;
        unsigned int ovly3_auto_clk_gt_en : 1;
        unsigned int top_auto_clk_gt_en : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_ADE_AUTO_CLK_GT_EN1_UNION;
#endif
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq1_auto_clk_gt_en_START (0)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq1_auto_clk_gt_en_END (0)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq2_auto_clk_gt_en_START (1)
#define SOC_ADE_AUTO_CLK_GT_EN1_cmdq2_auto_clk_gt_en_END (1)
#define SOC_ADE_AUTO_CLK_GT_EN1_gamma_auto_clk_gt_en_START (3)
#define SOC_ADE_AUTO_CLK_GT_EN1_gamma_auto_clk_gt_en_END (3)
#define SOC_ADE_AUTO_CLK_GT_EN1_dither_auto_clk_gt_en_START (4)
#define SOC_ADE_AUTO_CLK_GT_EN1_dither_auto_clk_gt_en_END (4)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly1_auto_clk_gt_en_START (5)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly1_auto_clk_gt_en_END (5)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly2_auto_clk_gt_en_START (6)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly2_auto_clk_gt_en_END (6)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly3_auto_clk_gt_en_START (7)
#define SOC_ADE_AUTO_CLK_GT_EN1_ovly3_auto_clk_gt_en_END (7)
#define SOC_ADE_AUTO_CLK_GT_EN1_top_auto_clk_gt_en_START (8)
#define SOC_ADE_AUTO_CLK_GT_EN1_top_auto_clk_gt_en_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dfs_buf_unflow_lev0 : 12;
        unsigned int reserved_0 : 4;
        unsigned int wdma2_disgard_en : 1;
        unsigned int wdma3_disgard_en : 1;
        unsigned int reserved_1 : 14;
    } reg;
} SOC_ADE_FRM_DISGARD_CTRL_UNION;
#endif
#define SOC_ADE_FRM_DISGARD_CTRL_dfs_buf_unflow_lev0_START (0)
#define SOC_ADE_FRM_DISGARD_CTRL_dfs_buf_unflow_lev0_END (11)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma2_disgard_en_START (16)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma2_disgard_en_END (16)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma3_disgard_en_START (17)
#define SOC_ADE_FRM_DISGARD_CTRL_wdma3_disgard_en_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wdma2_disgard_cnt : 16;
        unsigned int wdma3_disgard_cnt : 16;
    } reg;
} SOC_ADE_FRM_DISGARD_CNT_UNION;
#endif
#define SOC_ADE_FRM_DISGARD_CNT_wdma2_disgard_cnt_START (0)
#define SOC_ADE_FRM_DISGARD_CNT_wdma2_disgard_cnt_END (15)
#define SOC_ADE_FRM_DISGARD_CNT_wdma3_disgard_cnt_START (16)
#define SOC_ADE_FRM_DISGARD_CNT_wdma3_disgard_cnt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ch1_rdma_reload_dis : 1;
        unsigned int ch2_rdma_reload_dis : 1;
        unsigned int ch3_rdma_reload_dis : 1;
        unsigned int ch4_rdma_reload_dis : 1;
        unsigned int ch5_rdma_reload_dis : 1;
        unsigned int ch6_rdma_reload_dis : 1;
        unsigned int disp_rdma_reload_dis : 1;
        unsigned int cmdq1_rdma_reload_dis : 1;
        unsigned int cmdq2_rdma_reload_dis : 1;
        unsigned int reserved_0 : 1;
        unsigned int ch1_wdma_reload_dis : 1;
        unsigned int ch2_wdma_reload_dis : 1;
        unsigned int ch3_wdma_reload_dis : 1;
        unsigned int reserved_1 : 1;
        unsigned int cmdq_wdma_reload_dis : 1;
        unsigned int clip1_reload_dis : 1;
        unsigned int clip2_reload_dis : 1;
        unsigned int clip3_reload_dis : 1;
        unsigned int clip4_reload_dis : 1;
        unsigned int clip5_reload_dis : 1;
        unsigned int clip6_reload_dis : 1;
        unsigned int scl1_reload_dis : 1;
        unsigned int scl2_reload_dis : 1;
        unsigned int scl3_reload_dis : 1;
        unsigned int ctran1_reload_dis : 1;
        unsigned int ctran2_reload_dis : 1;
        unsigned int ctran3_reload_dis : 1;
        unsigned int ctran4_reload_dis : 1;
        unsigned int ctran5_reload_dis : 1;
        unsigned int ctran6_reload_dis : 1;
        unsigned int rot_reload_dis : 1;
        unsigned int reserved_2 : 1;
    } reg;
} SOC_ADE_RELOAD_DIS0_UNION;
#endif
#define SOC_ADE_RELOAD_DIS0_ch1_rdma_reload_dis_START (0)
#define SOC_ADE_RELOAD_DIS0_ch1_rdma_reload_dis_END (0)
#define SOC_ADE_RELOAD_DIS0_ch2_rdma_reload_dis_START (1)
#define SOC_ADE_RELOAD_DIS0_ch2_rdma_reload_dis_END (1)
#define SOC_ADE_RELOAD_DIS0_ch3_rdma_reload_dis_START (2)
#define SOC_ADE_RELOAD_DIS0_ch3_rdma_reload_dis_END (2)
#define SOC_ADE_RELOAD_DIS0_ch4_rdma_reload_dis_START (3)
#define SOC_ADE_RELOAD_DIS0_ch4_rdma_reload_dis_END (3)
#define SOC_ADE_RELOAD_DIS0_ch5_rdma_reload_dis_START (4)
#define SOC_ADE_RELOAD_DIS0_ch5_rdma_reload_dis_END (4)
#define SOC_ADE_RELOAD_DIS0_ch6_rdma_reload_dis_START (5)
#define SOC_ADE_RELOAD_DIS0_ch6_rdma_reload_dis_END (5)
#define SOC_ADE_RELOAD_DIS0_disp_rdma_reload_dis_START (6)
#define SOC_ADE_RELOAD_DIS0_disp_rdma_reload_dis_END (6)
#define SOC_ADE_RELOAD_DIS0_cmdq1_rdma_reload_dis_START (7)
#define SOC_ADE_RELOAD_DIS0_cmdq1_rdma_reload_dis_END (7)
#define SOC_ADE_RELOAD_DIS0_cmdq2_rdma_reload_dis_START (8)
#define SOC_ADE_RELOAD_DIS0_cmdq2_rdma_reload_dis_END (8)
#define SOC_ADE_RELOAD_DIS0_ch1_wdma_reload_dis_START (10)
#define SOC_ADE_RELOAD_DIS0_ch1_wdma_reload_dis_END (10)
#define SOC_ADE_RELOAD_DIS0_ch2_wdma_reload_dis_START (11)
#define SOC_ADE_RELOAD_DIS0_ch2_wdma_reload_dis_END (11)
#define SOC_ADE_RELOAD_DIS0_ch3_wdma_reload_dis_START (12)
#define SOC_ADE_RELOAD_DIS0_ch3_wdma_reload_dis_END (12)
#define SOC_ADE_RELOAD_DIS0_cmdq_wdma_reload_dis_START (14)
#define SOC_ADE_RELOAD_DIS0_cmdq_wdma_reload_dis_END (14)
#define SOC_ADE_RELOAD_DIS0_clip1_reload_dis_START (15)
#define SOC_ADE_RELOAD_DIS0_clip1_reload_dis_END (15)
#define SOC_ADE_RELOAD_DIS0_clip2_reload_dis_START (16)
#define SOC_ADE_RELOAD_DIS0_clip2_reload_dis_END (16)
#define SOC_ADE_RELOAD_DIS0_clip3_reload_dis_START (17)
#define SOC_ADE_RELOAD_DIS0_clip3_reload_dis_END (17)
#define SOC_ADE_RELOAD_DIS0_clip4_reload_dis_START (18)
#define SOC_ADE_RELOAD_DIS0_clip4_reload_dis_END (18)
#define SOC_ADE_RELOAD_DIS0_clip5_reload_dis_START (19)
#define SOC_ADE_RELOAD_DIS0_clip5_reload_dis_END (19)
#define SOC_ADE_RELOAD_DIS0_clip6_reload_dis_START (20)
#define SOC_ADE_RELOAD_DIS0_clip6_reload_dis_END (20)
#define SOC_ADE_RELOAD_DIS0_scl1_reload_dis_START (21)
#define SOC_ADE_RELOAD_DIS0_scl1_reload_dis_END (21)
#define SOC_ADE_RELOAD_DIS0_scl2_reload_dis_START (22)
#define SOC_ADE_RELOAD_DIS0_scl2_reload_dis_END (22)
#define SOC_ADE_RELOAD_DIS0_scl3_reload_dis_START (23)
#define SOC_ADE_RELOAD_DIS0_scl3_reload_dis_END (23)
#define SOC_ADE_RELOAD_DIS0_ctran1_reload_dis_START (24)
#define SOC_ADE_RELOAD_DIS0_ctran1_reload_dis_END (24)
#define SOC_ADE_RELOAD_DIS0_ctran2_reload_dis_START (25)
#define SOC_ADE_RELOAD_DIS0_ctran2_reload_dis_END (25)
#define SOC_ADE_RELOAD_DIS0_ctran3_reload_dis_START (26)
#define SOC_ADE_RELOAD_DIS0_ctran3_reload_dis_END (26)
#define SOC_ADE_RELOAD_DIS0_ctran4_reload_dis_START (27)
#define SOC_ADE_RELOAD_DIS0_ctran4_reload_dis_END (27)
#define SOC_ADE_RELOAD_DIS0_ctran5_reload_dis_START (28)
#define SOC_ADE_RELOAD_DIS0_ctran5_reload_dis_END (28)
#define SOC_ADE_RELOAD_DIS0_ctran6_reload_dis_START (29)
#define SOC_ADE_RELOAD_DIS0_ctran6_reload_dis_END (29)
#define SOC_ADE_RELOAD_DIS0_rot_reload_dis_START (30)
#define SOC_ADE_RELOAD_DIS0_rot_reload_dis_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cmdq1_reload_dis : 1;
        unsigned int cmdq2_reload_dis : 1;
        unsigned int reserved_0 : 1;
        unsigned int gamma_reload_dis : 1;
        unsigned int dither_reload_dis : 1;
        unsigned int ovly1_reload_dis : 1;
        unsigned int ovly2_reload_dis : 1;
        unsigned int ovly3_reload_dis : 1;
        unsigned int reserved_1 : 24;
    } reg;
} SOC_ADE_RELOAD_DIS1_UNION;
#endif
#define SOC_ADE_RELOAD_DIS1_cmdq1_reload_dis_START (0)
#define SOC_ADE_RELOAD_DIS1_cmdq1_reload_dis_END (0)
#define SOC_ADE_RELOAD_DIS1_cmdq2_reload_dis_START (1)
#define SOC_ADE_RELOAD_DIS1_cmdq2_reload_dis_END (1)
#define SOC_ADE_RELOAD_DIS1_gamma_reload_dis_START (3)
#define SOC_ADE_RELOAD_DIS1_gamma_reload_dis_END (3)
#define SOC_ADE_RELOAD_DIS1_dither_reload_dis_START (4)
#define SOC_ADE_RELOAD_DIS1_dither_reload_dis_END (4)
#define SOC_ADE_RELOAD_DIS1_ovly1_reload_dis_START (5)
#define SOC_ADE_RELOAD_DIS1_ovly1_reload_dis_END (5)
#define SOC_ADE_RELOAD_DIS1_ovly2_reload_dis_START (6)
#define SOC_ADE_RELOAD_DIS1_ovly2_reload_dis_END (6)
#define SOC_ADE_RELOAD_DIS1_ovly3_reload_dis_START (7)
#define SOC_ADE_RELOAD_DIS1_ovly3_reload_dis_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ade_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ADE_EN_UNION;
#endif
#define SOC_ADE_EN_ade_en_START (0)
#define SOC_ADE_EN_ade_en_END (0)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
