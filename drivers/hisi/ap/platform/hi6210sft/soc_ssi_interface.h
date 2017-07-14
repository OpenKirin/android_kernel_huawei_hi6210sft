#ifndef __SOC_SSI_INTERFACE_H__
#define __SOC_SSI_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SSI_SSICR0_ADDR(base) ((base) + (0x0000))
#define SOC_SSI_SSICR1_ADDR(base) ((base) + (0x0004))
#define SOC_SSI_SSICR2_ADDR(base) ((base) + (0x0008))
#define SOC_SSI_SSICR3_ADDR(base) ((base) + (0x000C))
#define SOC_SSI_SSICR4_ADDR(base) ((base) + (0x0010))
#define SOC_SSI_SSIDR_ADDR(base) ((base) + (0x0014))
#define SOC_SSI_SSISR_ADDR(base) ((base) + (0x0018))
#define SOC_SSI_SSIIMSC_ADDR(base) ((base) + (0x001C))
#define SOC_SSI_SSIRIS_ADDR(base) ((base) + (0x0020))
#define SOC_SSI_SSIMIS_ADDR(base) ((base) + (0x0024))
#define SOC_SSI_SSIICR_ADDR(base) ((base) + (0x0028))
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ass : 3;
        unsigned int dss : 5;
        unsigned int reserved : 24;
    } reg;
} SOC_SSI_SSICR0_UNION;
#define SOC_SSI_SSICR0_ass_START (0)
#define SOC_SSI_SSICR0_ass_END (2)
#define SOC_SSI_SSICR0_dss_START (3)
#define SOC_SSI_SSICR0_dss_END (7)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ssi_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SSI_SSICR1_UNION;
#define SOC_SSI_SSICR1_ssi_en_START (0)
#define SOC_SSI_SSICR1_ssi_en_END (0)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ssi_rw : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_SSI_SSICR2_UNION;
#define SOC_SSI_SSICR2_ssi_rw_START (0)
#define SOC_SSI_SSICR2_ssi_rw_END (0)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int txfifo_wl : 3;
        unsigned int rxfifo_wl : 3;
        unsigned int reserved : 26;
    } reg;
} SOC_SSI_SSICR3_UNION;
#define SOC_SSI_SSICR3_txfifo_wl_START (0)
#define SOC_SSI_SSICR3_txfifo_wl_END (2)
#define SOC_SSI_SSICR3_rxfifo_wl_START (3)
#define SOC_SSI_SSICR3_rxfifo_wl_END (5)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int wait_time : 4;
        unsigned int mst_ck_cfg : 3;
        unsigned int reserved : 25;
    } reg;
} SOC_SSI_SSICR4_UNION;
#define SOC_SSI_SSICR4_wait_time_START (0)
#define SOC_SSI_SSICR4_wait_time_END (3)
#define SOC_SSI_SSICR4_mst_ck_cfg_START (4)
#define SOC_SSI_SSICR4_mst_ck_cfg_END (6)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tfe : 1;
        unsigned int tnf : 1;
        unsigned int rne : 1;
        unsigned int rff : 1;
        unsigned int bsy : 1;
        unsigned int rxfifl_lv : 3;
        unsigned int txfifo_lv : 3;
        unsigned int reserved : 21;
    } reg;
} SOC_SSI_SSISR_UNION;
#define SOC_SSI_SSISR_tfe_START (0)
#define SOC_SSI_SSISR_tfe_END (0)
#define SOC_SSI_SSISR_tnf_START (1)
#define SOC_SSI_SSISR_tnf_END (1)
#define SOC_SSI_SSISR_rne_START (2)
#define SOC_SSI_SSISR_rne_END (2)
#define SOC_SSI_SSISR_rff_START (3)
#define SOC_SSI_SSISR_rff_END (3)
#define SOC_SSI_SSISR_bsy_START (4)
#define SOC_SSI_SSISR_bsy_END (4)
#define SOC_SSI_SSISR_rxfifl_lv_START (5)
#define SOC_SSI_SSISR_rxfifl_lv_END (7)
#define SOC_SSI_SSISR_txfifo_lv_START (8)
#define SOC_SSI_SSISR_txfifo_lv_END (10)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rorim : 1;
        unsigned int rtim : 1;
        unsigned int rxim : 1;
        unsigned int txim : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_SSI_SSIIMSC_UNION;
#define SOC_SSI_SSIIMSC_rorim_START (0)
#define SOC_SSI_SSIIMSC_rorim_END (0)
#define SOC_SSI_SSIIMSC_rtim_START (1)
#define SOC_SSI_SSIIMSC_rtim_END (1)
#define SOC_SSI_SSIIMSC_rxim_START (2)
#define SOC_SSI_SSIIMSC_rxim_END (2)
#define SOC_SSI_SSIIMSC_txim_START (3)
#define SOC_SSI_SSIIMSC_txim_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rorris : 1;
        unsigned int rtris : 1;
        unsigned int rxris : 1;
        unsigned int txris : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_SSI_SSIRIS_UNION;
#define SOC_SSI_SSIRIS_rorris_START (0)
#define SOC_SSI_SSIRIS_rorris_END (0)
#define SOC_SSI_SSIRIS_rtris_START (1)
#define SOC_SSI_SSIRIS_rtris_END (1)
#define SOC_SSI_SSIRIS_rxris_START (2)
#define SOC_SSI_SSIRIS_rxris_END (2)
#define SOC_SSI_SSIRIS_txris_START (3)
#define SOC_SSI_SSIRIS_txris_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rormis : 1;
        unsigned int rtmis : 1;
        unsigned int rxmis : 1;
        unsigned int txmis : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_SSI_SSIMIS_UNION;
#define SOC_SSI_SSIMIS_rormis_START (0)
#define SOC_SSI_SSIMIS_rormis_END (0)
#define SOC_SSI_SSIMIS_rtmis_START (1)
#define SOC_SSI_SSIMIS_rtmis_END (1)
#define SOC_SSI_SSIMIS_rxmis_START (2)
#define SOC_SSI_SSIMIS_rxmis_END (2)
#define SOC_SSI_SSIMIS_txmis_START (3)
#define SOC_SSI_SSIMIS_txmis_END (3)
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rorim : 1;
        unsigned int rtim : 1;
        unsigned int rxim : 1;
        unsigned int txim : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_SSI_SSIICR_UNION;
#define SOC_SSI_SSIICR_rorim_START (0)
#define SOC_SSI_SSIICR_rorim_END (0)
#define SOC_SSI_SSIICR_rtim_START (1)
#define SOC_SSI_SSIICR_rtim_END (1)
#define SOC_SSI_SSIICR_rxim_START (2)
#define SOC_SSI_SSIICR_rxim_END (2)
#define SOC_SSI_SSIICR_txim_START (3)
#define SOC_SSI_SSIICR_txim_END (3)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
