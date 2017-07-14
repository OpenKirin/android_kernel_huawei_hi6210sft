#ifndef __SOC_SSP_INTERFACE_H__
#define __SOC_SSP_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_SSP_SPICR0_ADDR(base) ((base) + (0x000))
#define SOC_SSP_SPICR1_ADDR(base) ((base) + (0x004))
#define SOC_SSP_SPIDR_ADDR(base) ((base) + (0x008))
#define SOC_SSP_SPISR_ADDR(base) ((base) + (0x00C))
#define SOC_SSP_SPICPSR_ADDR(base) ((base) + (0x010))
#define SOC_SSP_SPIMISC_ADDR(base) ((base) + (0x014))
#define SOC_SSP_SPIRIS_ADDR(base) ((base) + (0x018))
#define SOC_SSP_SPIICR_ADDR(base) ((base) + (0x020))
#define SOC_SSP_SPIDMACR_ADDR(base) ((base) + (0x024))
#define SOC_SSP_SPITXFIFOCR_ADDR(base) ((base) + (0x028))
#define SOC_SSP_SPIRXFIFOCR_ADDR(base) ((base) + (0x02C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dss : 4;
        unsigned short frf : 2;
        unsigned short spo : 1;
        unsigned short sph : 1;
        unsigned short scr : 8;
    } reg;
} SOC_SSP_SPICR0_UNION;
#endif
#define SOC_SSP_SPICR0_dss_START (0)
#define SOC_SSP_SPICR0_dss_END (3)
#define SOC_SSP_SPICR0_frf_START (4)
#define SOC_SSP_SPICR0_frf_END (5)
#define SOC_SSP_SPICR0_spo_START (6)
#define SOC_SSP_SPICR0_spo_END (6)
#define SOC_SSP_SPICR0_sph_START (7)
#define SOC_SSP_SPICR0_sph_END (7)
#define SOC_SSP_SPICR0_scr_START (8)
#define SOC_SSP_SPICR0_scr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short lbm : 1;
        unsigned short sse : 1;
        unsigned short ms : 1;
        unsigned short reserved : 13;
    } reg;
} SOC_SSP_SPICR1_UNION;
#endif
#define SOC_SSP_SPICR1_lbm_START (0)
#define SOC_SSP_SPICR1_lbm_END (0)
#define SOC_SSP_SPICR1_sse_START (1)
#define SOC_SSP_SPICR1_sse_END (1)
#define SOC_SSP_SPICR1_ms_START (2)
#define SOC_SSP_SPICR1_ms_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short data : 16;
    } reg;
} SOC_SSP_SPIDR_UNION;
#endif
#define SOC_SSP_SPIDR_data_START (0)
#define SOC_SSP_SPIDR_data_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short tfe : 1;
        unsigned short tnf : 1;
        unsigned short rne : 1;
        unsigned short rff : 1;
        unsigned short bsy : 1;
        unsigned short reserved : 11;
    } reg;
} SOC_SSP_SPISR_UNION;
#endif
#define SOC_SSP_SPISR_tfe_START (0)
#define SOC_SSP_SPISR_tfe_END (0)
#define SOC_SSP_SPISR_tnf_START (1)
#define SOC_SSP_SPISR_tnf_END (1)
#define SOC_SSP_SPISR_rne_START (2)
#define SOC_SSP_SPISR_rne_END (2)
#define SOC_SSP_SPISR_rff_START (3)
#define SOC_SSP_SPISR_rff_END (3)
#define SOC_SSP_SPISR_bsy_START (4)
#define SOC_SSP_SPISR_bsy_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short cpsdvsr : 8;
        unsigned short reserved : 8;
    } reg;
} SOC_SSP_SPICPSR_UNION;
#endif
#define SOC_SSP_SPICPSR_cpsdvsr_START (0)
#define SOC_SSP_SPICPSR_cpsdvsr_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rorim : 1;
        unsigned short rtim : 1;
        unsigned short rxim : 1;
        unsigned short txim : 1;
        unsigned short reserved : 12;
    } reg;
} SOC_SSP_SPIMISC_UNION;
#endif
#define SOC_SSP_SPIMISC_rorim_START (0)
#define SOC_SSP_SPIMISC_rorim_END (0)
#define SOC_SSP_SPIMISC_rtim_START (1)
#define SOC_SSP_SPIMISC_rtim_END (1)
#define SOC_SSP_SPIMISC_rxim_START (2)
#define SOC_SSP_SPIMISC_rxim_END (2)
#define SOC_SSP_SPIMISC_txim_START (3)
#define SOC_SSP_SPIMISC_txim_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rorros : 1;
        unsigned short rttis : 1;
        unsigned short rxris : 1;
        unsigned short txris : 1;
        unsigned short reserved : 12;
    } reg;
} SOC_SSP_SPIRIS_UNION;
#endif
#define SOC_SSP_SPIRIS_rorros_START (0)
#define SOC_SSP_SPIRIS_rorros_END (0)
#define SOC_SSP_SPIRIS_rttis_START (1)
#define SOC_SSP_SPIRIS_rttis_END (1)
#define SOC_SSP_SPIRIS_rxris_START (2)
#define SOC_SSP_SPIRIS_rxris_END (2)
#define SOC_SSP_SPIRIS_txris_START (3)
#define SOC_SSP_SPIRIS_txris_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short roric : 1;
        unsigned short rtic : 1;
        unsigned short reserved : 14;
    } reg;
} SOC_SSP_SPIICR_UNION;
#endif
#define SOC_SSP_SPIICR_roric_START (0)
#define SOC_SSP_SPIICR_roric_END (0)
#define SOC_SSP_SPIICR_rtic_START (1)
#define SOC_SSP_SPIICR_rtic_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short rxdmae : 1;
        unsigned short txdmae : 1;
        unsigned short reserved : 14;
    } reg;
} SOC_SSP_SPIDMACR_UNION;
#endif
#define SOC_SSP_SPIDMACR_rxdmae_START (0)
#define SOC_SSP_SPIDMACR_rxdmae_END (0)
#define SOC_SSP_SPIDMACR_txdmae_START (1)
#define SOC_SSP_SPIDMACR_txdmae_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dmatxbrsize : 3;
        unsigned short txintsize : 3;
        unsigned short reserved : 10;
    } reg;
} SOC_SSP_SPITXFIFOCR_UNION;
#endif
#define SOC_SSP_SPITXFIFOCR_dmatxbrsize_START (0)
#define SOC_SSP_SPITXFIFOCR_dmatxbrsize_END (2)
#define SOC_SSP_SPITXFIFOCR_txintsize_START (3)
#define SOC_SSP_SPITXFIFOCR_txintsize_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned short value;
    struct
    {
        unsigned short dmarxbrsize : 3;
        unsigned short rxintsize : 3;
        unsigned short reserved : 10;
    } reg;
} SOC_SSP_SPIRXFIFOCR_UNION;
#endif
#define SOC_SSP_SPIRXFIFOCR_dmarxbrsize_START (0)
#define SOC_SSP_SPIRXFIFOCR_dmarxbrsize_END (2)
#define SOC_SSP_SPIRXFIFOCR_rxintsize_START (3)
#define SOC_SSP_SPIRXFIFOCR_rxintsize_END (5)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
