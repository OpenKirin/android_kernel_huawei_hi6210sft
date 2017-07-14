#ifndef __SOC_ASP_INTERFACE_H__
#define __SOC_ASP_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_ASP_TX0_ADDR(base) ((base) + (0x000))
#define SOC_ASP_TX1_ADDR(base) ((base) + (0x004))
#define SOC_ASP_TX2_ADDR(base) ((base) + (0x008))
#define SOC_ASP_TX3_ADDR(base) ((base) + (0x00C))
#define SOC_ASP_RX_ADDR(base) ((base) + (0x010))
#define SOC_ASP_DER_ADDR(base) ((base) + (0x014))
#define SOC_ASP_DSTOP_ADDR(base) ((base) + (0x018))
#define SOC_ASP_ASS_ISR_ADDR(base) ((base) + (0x01C))
#define SOC_ASP_IRSR_ADDR(base) ((base) + (0x020))
#define SOC_ASP_IER_ADDR(base) ((base) + (0x024))
#define SOC_ASP_IMSR_ADDR(base) ((base) + (0x028))
#define SOC_ASP_ICR_ADDR(base) ((base) + (0x02C))
#define SOC_ASP_PCMNSSR_ADDR(base) ((base) + (0x030))
#define SOC_ASP_P0RSRR_ADDR(base) ((base) + (0x034))
#define SOC_ASP_P1RSRR_ADDR(base) ((base) + (0x038))
#define SOC_ASP_P2RSRR_ADDR(base) ((base) + (0x03C))
#define SOC_ASP_P3RSRR_ADDR(base) ((base) + (0x040))
#define SOC_ASP_FADEINEN0_ADDR(base) ((base) + (0x044))
#define SOC_ASP_FADEOUTEN0_ADDR(base) ((base) + (0x048))
#define SOC_ASP_FADERATE0_ADDR(base) ((base) + (0x04C))
#define SOC_ASP_FADEINEN1_ADDR(base) ((base) + (0x050))
#define SOC_ASP_FADEOUTEN1_ADDR(base) ((base) + (0x054))
#define SOC_ASP_FADERATE1_ADDR(base) ((base) + (0x058))
#define SOC_ASP_FADEINEN2_ADDR(base) ((base) + (0x05C))
#define SOC_ASP_FADEOUTEN2_ADDR(base) ((base) + (0x060))
#define SOC_ASP_FADERATE2_ADDR(base) ((base) + (0x064))
#define SOC_ASP_FADEINEN3_ADDR(base) ((base) + (0x068))
#define SOC_ASP_FADEOUTEN3_ADDR(base) ((base) + (0x06C))
#define SOC_ASP_FADERATE3_ADDR(base) ((base) + (0x070))
#define SOC_ASP_P0LCGR_ADDR(base) ((base) + (0x074))
#define SOC_ASP_P0RCGR_ADDR(base) ((base) + (0x078))
#define SOC_ASP_P1LCGR_ADDR(base) ((base) + (0x07C))
#define SOC_ASP_P1RCGR_ADDR(base) ((base) + (0x080))
#define SOC_ASP_P2LCGR_ADDR(base) ((base) + (0x084))
#define SOC_ASP_P2RCGR_ADDR(base) ((base) + (0x088))
#define SOC_ASP_P30CGR_ADDR(base) ((base) + (0x08C))
#define SOC_ASP_P31CGR_ADDR(base) ((base) + (0x090))
#define SOC_ASP_P32CGR_ADDR(base) ((base) + (0x094))
#define SOC_ASP_P33CGR_ADDR(base) ((base) + (0x098))
#define SOC_ASP_P34CGR_ADDR(base) ((base) + (0x09C))
#define SOC_ASP_P35CGR_ADDR(base) ((base) + (0x0A0))
#define SOC_ASP_P36CGR_ADDR(base) ((base) + (0x0A4))
#define SOC_ASP_P37CGR_ADDR(base) ((base) + (0x0A8))
#define SOC_ASP_MIXCTL_ADDR(base) ((base) + (0x0AC))
#define SOC_ASP_PRASAR_ADDR(base) ((base) + (0x0B0))
#define SOC_ASP_PRADLR_ADDR(base) ((base) + (0x0B4))
#define SOC_ASP_PRBSAR_ADDR(base) ((base) + (0x0B8))
#define SOC_ASP_PRBDLR_ADDR(base) ((base) + (0x0BC))
#define SOC_ASP_P0ASAR_ADDR(base) ((base) + (0x0C0))
#define SOC_ASP_P0ADLR_ADDR(base) ((base) + (0x0C4))
#define SOC_ASP_P0BSAR_ADDR(base) ((base) + (0x0C8))
#define SOC_ASP_P0BDLR_ADDR(base) ((base) + (0x0CC))
#define SOC_ASP_P1ASAR_ADDR(base) ((base) + (0x0D0))
#define SOC_ASP_P1ADLR_ADDR(base) ((base) + (0x0D4))
#define SOC_ASP_P1BSAR_ADDR(base) ((base) + (0x0D8))
#define SOC_ASP_P1BDLR_ADDR(base) ((base) + (0x0DC))
#define SOC_ASP_P2ASAR_ADDR(base) ((base) + (0x0E0))
#define SOC_ASP_P2ADLR_ADDR(base) ((base) + (0x0E4))
#define SOC_ASP_P2BSAR_ADDR(base) ((base) + (0x0E8))
#define SOC_ASP_P2BDLR_ADDR(base) ((base) + (0x0EC))
#define SOC_ASP_P3ASAR_ADDR(base) ((base) + (0x0F0))
#define SOC_ASP_P3ADLR_ADDR(base) ((base) + (0x0F4))
#define SOC_ASP_P3BSAR_ADDR(base) ((base) + (0x0F8))
#define SOC_ASP_P3BDLR_ADDR(base) ((base) + (0x0FC))
#define SOC_ASP_SPDIFSEL_ADDR(base) ((base) + (0x100))
#define SOC_ASP_P0ADLS_ADDR(base) ((base) + (0x104))
#define SOC_ASP_P0BDLS_ADDR(base) ((base) + (0x108))
#define SOC_ASP_P1ADLS_ADDR(base) ((base) + (0x10C))
#define SOC_ASP_P1BDLS_ADDR(base) ((base) + (0x110))
#define SOC_ASP_P2ADLS_ADDR(base) ((base) + (0x114))
#define SOC_ASP_P2BDLS_ADDR(base) ((base) + (0x118))
#define SOC_ASP_P3ADLS_ADDR(base) ((base) + (0x11C))
#define SOC_ASP_P3BDLS_ADDR(base) ((base) + (0x120))
#define SOC_ASP_PRADLS_ADDR(base) ((base) + (0x124))
#define SOC_ASP_PRBDLS_ADDR(base) ((base) + (0x128))
#define SOC_ASP_FDS_ADDR(base) ((base) + (0x12C))
#define SOC_ASP_P0ADL_ADDR(base) ((base) + (0x130))
#define SOC_ASP_P0BDL_ADDR(base) ((base) + (0x134))
#define SOC_ASP_P1ADL_ADDR(base) ((base) + (0x138))
#define SOC_ASP_P1BDL_ADDR(base) ((base) + (0x13C))
#define SOC_ASP_P2ADL_ADDR(base) ((base) + (0x140))
#define SOC_ASP_P2BDL_ADDR(base) ((base) + (0x144))
#define SOC_ASP_P3ADL_ADDR(base) ((base) + (0x148))
#define SOC_ASP_P3BDL_ADDR(base) ((base) + (0x14C))
#define SOC_ASP_PRADL_ADDR(base) ((base) + (0x150))
#define SOC_ASP_PRBDL_ADDR(base) ((base) + (0x154))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0dt : 3;
        unsigned int p0rhp : 1;
        unsigned int p0bdian : 1;
        unsigned int p08bit : 1;
        unsigned int pcm0en : 1;
        unsigned int pcm0ge : 1;
        unsigned int odsr : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_ASP_TX0_UNION;
#endif
#define SOC_ASP_TX0_p0dt_START (0)
#define SOC_ASP_TX0_p0dt_END (2)
#define SOC_ASP_TX0_p0rhp_START (3)
#define SOC_ASP_TX0_p0rhp_END (3)
#define SOC_ASP_TX0_p0bdian_START (4)
#define SOC_ASP_TX0_p0bdian_END (4)
#define SOC_ASP_TX0_p08bit_START (5)
#define SOC_ASP_TX0_p08bit_END (5)
#define SOC_ASP_TX0_pcm0en_START (6)
#define SOC_ASP_TX0_pcm0en_END (6)
#define SOC_ASP_TX0_pcm0ge_START (7)
#define SOC_ASP_TX0_pcm0ge_END (7)
#define SOC_ASP_TX0_odsr_START (8)
#define SOC_ASP_TX0_odsr_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1dt : 3;
        unsigned int p1rhp : 1;
        unsigned int p1bdian : 1;
        unsigned int p18bit : 1;
        unsigned int pcm1en : 1;
        unsigned int pcm1ge : 1;
        unsigned int mixrate : 2;
        unsigned int reserved : 22;
    } reg;
} SOC_ASP_TX1_UNION;
#endif
#define SOC_ASP_TX1_p1dt_START (0)
#define SOC_ASP_TX1_p1dt_END (2)
#define SOC_ASP_TX1_p1rhp_START (3)
#define SOC_ASP_TX1_p1rhp_END (3)
#define SOC_ASP_TX1_p1bdian_START (4)
#define SOC_ASP_TX1_p1bdian_END (4)
#define SOC_ASP_TX1_p18bit_START (5)
#define SOC_ASP_TX1_p18bit_END (5)
#define SOC_ASP_TX1_pcm1en_START (6)
#define SOC_ASP_TX1_pcm1en_END (6)
#define SOC_ASP_TX1_pcm1ge_START (7)
#define SOC_ASP_TX1_pcm1ge_END (7)
#define SOC_ASP_TX1_mixrate_START (8)
#define SOC_ASP_TX1_mixrate_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2dt : 3;
        unsigned int p2rhp : 1;
        unsigned int p2bdian : 1;
        unsigned int p28bit : 1;
        unsigned int pcm2en : 1;
        unsigned int pcm2ge : 1;
        unsigned int pcm2tsen : 1;
        unsigned int reserved : 23;
    } reg;
} SOC_ASP_TX2_UNION;
#endif
#define SOC_ASP_TX2_p2dt_START (0)
#define SOC_ASP_TX2_p2dt_END (2)
#define SOC_ASP_TX2_p2rhp_START (3)
#define SOC_ASP_TX2_p2rhp_END (3)
#define SOC_ASP_TX2_p2bdian_START (4)
#define SOC_ASP_TX2_p2bdian_END (4)
#define SOC_ASP_TX2_p28bit_START (5)
#define SOC_ASP_TX2_p28bit_END (5)
#define SOC_ASP_TX2_pcm2en_START (6)
#define SOC_ASP_TX2_pcm2en_END (6)
#define SOC_ASP_TX2_pcm2ge_START (7)
#define SOC_ASP_TX2_pcm2ge_END (7)
#define SOC_ASP_TX2_pcm2tsen_START (8)
#define SOC_ASP_TX2_pcm2tsen_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3dt : 2;
        unsigned int pcm3en : 1;
        unsigned int pcm3ge : 1;
        unsigned int pcm3tsen : 1;
        unsigned int reserved : 27;
    } reg;
} SOC_ASP_TX3_UNION;
#endif
#define SOC_ASP_TX3_p3dt_START (0)
#define SOC_ASP_TX3_p3dt_END (1)
#define SOC_ASP_TX3_pcm3en_START (2)
#define SOC_ASP_TX3_pcm3en_END (2)
#define SOC_ASP_TX3_pcm3ge_START (3)
#define SOC_ASP_TX3_pcm3ge_END (3)
#define SOC_ASP_TX3_pcm3tsen_START (4)
#define SOC_ASP_TX3_pcm3tsen_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxen : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_RX_UNION;
#endif
#define SOC_ASP_RX_rxen_START (0)
#define SOC_ASP_RX_rxen_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcmrxade : 1;
        unsigned int pcmrxbde : 1;
        unsigned int pcm0ade : 1;
        unsigned int pcm0bde : 1;
        unsigned int pcm1ade : 1;
        unsigned int pcm1bde : 1;
        unsigned int pcm2ade : 1;
        unsigned int pcm2bde : 1;
        unsigned int pcm3ade : 1;
        unsigned int pcm3bde : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_ASP_DER_UNION;
#endif
#define SOC_ASP_DER_pcmrxade_START (0)
#define SOC_ASP_DER_pcmrxade_END (0)
#define SOC_ASP_DER_pcmrxbde_START (1)
#define SOC_ASP_DER_pcmrxbde_END (1)
#define SOC_ASP_DER_pcm0ade_START (2)
#define SOC_ASP_DER_pcm0ade_END (2)
#define SOC_ASP_DER_pcm0bde_START (3)
#define SOC_ASP_DER_pcm0bde_END (3)
#define SOC_ASP_DER_pcm1ade_START (4)
#define SOC_ASP_DER_pcm1ade_END (4)
#define SOC_ASP_DER_pcm1bde_START (5)
#define SOC_ASP_DER_pcm1bde_END (5)
#define SOC_ASP_DER_pcm2ade_START (6)
#define SOC_ASP_DER_pcm2ade_END (6)
#define SOC_ASP_DER_pcm2bde_START (7)
#define SOC_ASP_DER_pcm2bde_END (7)
#define SOC_ASP_DER_pcm3ade_START (8)
#define SOC_ASP_DER_pcm3ade_END (8)
#define SOC_ASP_DER_pcm3bde_START (9)
#define SOC_ASP_DER_pcm3bde_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcmrxads : 1;
        unsigned int pcmrxbds : 1;
        unsigned int pcm0ads : 1;
        unsigned int pcm0bds : 1;
        unsigned int pcm1ads : 1;
        unsigned int pcm1bds : 1;
        unsigned int pcm2ads : 1;
        unsigned int pcm2bds : 1;
        unsigned int pcm3ads : 1;
        unsigned int pcm3bds : 1;
        unsigned int reserved : 22;
    } reg;
} SOC_ASP_DSTOP_UNION;
#endif
#define SOC_ASP_DSTOP_pcmrxads_START (0)
#define SOC_ASP_DSTOP_pcmrxads_END (0)
#define SOC_ASP_DSTOP_pcmrxbds_START (1)
#define SOC_ASP_DSTOP_pcmrxbds_END (1)
#define SOC_ASP_DSTOP_pcm0ads_START (2)
#define SOC_ASP_DSTOP_pcm0ads_END (2)
#define SOC_ASP_DSTOP_pcm0bds_START (3)
#define SOC_ASP_DSTOP_pcm0bds_END (3)
#define SOC_ASP_DSTOP_pcm1ads_START (4)
#define SOC_ASP_DSTOP_pcm1ads_END (4)
#define SOC_ASP_DSTOP_pcm1bds_START (5)
#define SOC_ASP_DSTOP_pcm1bds_END (5)
#define SOC_ASP_DSTOP_pcm2ads_START (6)
#define SOC_ASP_DSTOP_pcm2ads_END (6)
#define SOC_ASP_DSTOP_pcm2bds_START (7)
#define SOC_ASP_DSTOP_pcm2bds_END (7)
#define SOC_ASP_DSTOP_pcm3ads_START (8)
#define SOC_ASP_DSTOP_pcm3ads_END (8)
#define SOC_ASP_DSTOP_pcm3bds_START (9)
#define SOC_ASP_DSTOP_pcm3bds_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sio0is : 1;
        unsigned int sio1is : 1;
        unsigned int spdifis : 1;
        unsigned int aspis : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_ASS_ISR_UNION;
#endif
#define SOC_ASP_ASS_ISR_sio0is_START (0)
#define SOC_ASP_ASS_ISR_sio0is_END (0)
#define SOC_ASP_ASS_ISR_sio1is_START (1)
#define SOC_ASP_ASS_ISR_sio1is_END (1)
#define SOC_ASP_ASS_ISR_spdifis_START (2)
#define SOC_ASP_ASS_ISR_spdifis_END (2)
#define SOC_ASP_ASS_ISR_aspis_START (3)
#define SOC_ASP_ASS_ISR_aspis_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradfirs : 1;
        unsigned int prbdfirs : 1;
        unsigned int p0adfirs : 1;
        unsigned int p0bdfirs : 1;
        unsigned int p1adfirs : 1;
        unsigned int p1bdfirs : 1;
        unsigned int p2adfirs : 1;
        unsigned int p2bdfirs : 1;
        unsigned int p3adfirs : 1;
        unsigned int p3bdfirs : 1;
        unsigned int p0fadeins : 1;
        unsigned int p1fadeins : 1;
        unsigned int p2fadeins : 1;
        unsigned int p3fadeins : 1;
        unsigned int p0fadeouts : 1;
        unsigned int p1fadeouts : 1;
        unsigned int p2fadeouts : 1;
        unsigned int p3fadeouts : 1;
        unsigned int aberirs : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_ASP_IRSR_UNION;
#endif
#define SOC_ASP_IRSR_pradfirs_START (0)
#define SOC_ASP_IRSR_pradfirs_END (0)
#define SOC_ASP_IRSR_prbdfirs_START (1)
#define SOC_ASP_IRSR_prbdfirs_END (1)
#define SOC_ASP_IRSR_p0adfirs_START (2)
#define SOC_ASP_IRSR_p0adfirs_END (2)
#define SOC_ASP_IRSR_p0bdfirs_START (3)
#define SOC_ASP_IRSR_p0bdfirs_END (3)
#define SOC_ASP_IRSR_p1adfirs_START (4)
#define SOC_ASP_IRSR_p1adfirs_END (4)
#define SOC_ASP_IRSR_p1bdfirs_START (5)
#define SOC_ASP_IRSR_p1bdfirs_END (5)
#define SOC_ASP_IRSR_p2adfirs_START (6)
#define SOC_ASP_IRSR_p2adfirs_END (6)
#define SOC_ASP_IRSR_p2bdfirs_START (7)
#define SOC_ASP_IRSR_p2bdfirs_END (7)
#define SOC_ASP_IRSR_p3adfirs_START (8)
#define SOC_ASP_IRSR_p3adfirs_END (8)
#define SOC_ASP_IRSR_p3bdfirs_START (9)
#define SOC_ASP_IRSR_p3bdfirs_END (9)
#define SOC_ASP_IRSR_p0fadeins_START (10)
#define SOC_ASP_IRSR_p0fadeins_END (10)
#define SOC_ASP_IRSR_p1fadeins_START (11)
#define SOC_ASP_IRSR_p1fadeins_END (11)
#define SOC_ASP_IRSR_p2fadeins_START (12)
#define SOC_ASP_IRSR_p2fadeins_END (12)
#define SOC_ASP_IRSR_p3fadeins_START (13)
#define SOC_ASP_IRSR_p3fadeins_END (13)
#define SOC_ASP_IRSR_p0fadeouts_START (14)
#define SOC_ASP_IRSR_p0fadeouts_END (14)
#define SOC_ASP_IRSR_p1fadeouts_START (15)
#define SOC_ASP_IRSR_p1fadeouts_END (15)
#define SOC_ASP_IRSR_p2fadeouts_START (16)
#define SOC_ASP_IRSR_p2fadeouts_END (16)
#define SOC_ASP_IRSR_p3fadeouts_START (17)
#define SOC_ASP_IRSR_p3fadeouts_END (17)
#define SOC_ASP_IRSR_aberirs_START (18)
#define SOC_ASP_IRSR_aberirs_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradfie : 1;
        unsigned int prbdfie : 1;
        unsigned int p0adfie : 1;
        unsigned int p0bdfie : 1;
        unsigned int p1adfie : 1;
        unsigned int p1bdfie : 1;
        unsigned int p2adfie : 1;
        unsigned int p2bdfie : 1;
        unsigned int p3adfie : 1;
        unsigned int p3bdfie : 1;
        unsigned int p0fadeinie : 1;
        unsigned int p1fadeinie : 1;
        unsigned int p2fadeinie : 1;
        unsigned int p3fadeinie : 1;
        unsigned int p0fadeoutie : 1;
        unsigned int p1fadeoutie : 1;
        unsigned int p2fadeoutie : 1;
        unsigned int p3fadeoutie : 1;
        unsigned int aberie : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_ASP_IER_UNION;
#endif
#define SOC_ASP_IER_pradfie_START (0)
#define SOC_ASP_IER_pradfie_END (0)
#define SOC_ASP_IER_prbdfie_START (1)
#define SOC_ASP_IER_prbdfie_END (1)
#define SOC_ASP_IER_p0adfie_START (2)
#define SOC_ASP_IER_p0adfie_END (2)
#define SOC_ASP_IER_p0bdfie_START (3)
#define SOC_ASP_IER_p0bdfie_END (3)
#define SOC_ASP_IER_p1adfie_START (4)
#define SOC_ASP_IER_p1adfie_END (4)
#define SOC_ASP_IER_p1bdfie_START (5)
#define SOC_ASP_IER_p1bdfie_END (5)
#define SOC_ASP_IER_p2adfie_START (6)
#define SOC_ASP_IER_p2adfie_END (6)
#define SOC_ASP_IER_p2bdfie_START (7)
#define SOC_ASP_IER_p2bdfie_END (7)
#define SOC_ASP_IER_p3adfie_START (8)
#define SOC_ASP_IER_p3adfie_END (8)
#define SOC_ASP_IER_p3bdfie_START (9)
#define SOC_ASP_IER_p3bdfie_END (9)
#define SOC_ASP_IER_p0fadeinie_START (10)
#define SOC_ASP_IER_p0fadeinie_END (10)
#define SOC_ASP_IER_p1fadeinie_START (11)
#define SOC_ASP_IER_p1fadeinie_END (11)
#define SOC_ASP_IER_p2fadeinie_START (12)
#define SOC_ASP_IER_p2fadeinie_END (12)
#define SOC_ASP_IER_p3fadeinie_START (13)
#define SOC_ASP_IER_p3fadeinie_END (13)
#define SOC_ASP_IER_p0fadeoutie_START (14)
#define SOC_ASP_IER_p0fadeoutie_END (14)
#define SOC_ASP_IER_p1fadeoutie_START (15)
#define SOC_ASP_IER_p1fadeoutie_END (15)
#define SOC_ASP_IER_p2fadeoutie_START (16)
#define SOC_ASP_IER_p2fadeoutie_END (16)
#define SOC_ASP_IER_p3fadeoutie_START (17)
#define SOC_ASP_IER_p3fadeoutie_END (17)
#define SOC_ASP_IER_aberie_START (18)
#define SOC_ASP_IER_aberie_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradfims : 1;
        unsigned int prbdfims : 1;
        unsigned int p0adfims : 1;
        unsigned int p0bdfims : 1;
        unsigned int p1adfims : 1;
        unsigned int p1bdfims : 1;
        unsigned int p2adfims : 1;
        unsigned int p2bdfims : 1;
        unsigned int p3adfims : 1;
        unsigned int p3bdfims : 1;
        unsigned int p0fadeinims : 1;
        unsigned int p1fadeinims : 1;
        unsigned int p2fadeinims : 1;
        unsigned int p3fadeinims : 1;
        unsigned int p0fadeoutims : 1;
        unsigned int p1fadeoutims : 1;
        unsigned int p2fadeoutims : 1;
        unsigned int p3fadeoutims : 1;
        unsigned int aberims : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_ASP_IMSR_UNION;
#endif
#define SOC_ASP_IMSR_pradfims_START (0)
#define SOC_ASP_IMSR_pradfims_END (0)
#define SOC_ASP_IMSR_prbdfims_START (1)
#define SOC_ASP_IMSR_prbdfims_END (1)
#define SOC_ASP_IMSR_p0adfims_START (2)
#define SOC_ASP_IMSR_p0adfims_END (2)
#define SOC_ASP_IMSR_p0bdfims_START (3)
#define SOC_ASP_IMSR_p0bdfims_END (3)
#define SOC_ASP_IMSR_p1adfims_START (4)
#define SOC_ASP_IMSR_p1adfims_END (4)
#define SOC_ASP_IMSR_p1bdfims_START (5)
#define SOC_ASP_IMSR_p1bdfims_END (5)
#define SOC_ASP_IMSR_p2adfims_START (6)
#define SOC_ASP_IMSR_p2adfims_END (6)
#define SOC_ASP_IMSR_p2bdfims_START (7)
#define SOC_ASP_IMSR_p2bdfims_END (7)
#define SOC_ASP_IMSR_p3adfims_START (8)
#define SOC_ASP_IMSR_p3adfims_END (8)
#define SOC_ASP_IMSR_p3bdfims_START (9)
#define SOC_ASP_IMSR_p3bdfims_END (9)
#define SOC_ASP_IMSR_p0fadeinims_START (10)
#define SOC_ASP_IMSR_p0fadeinims_END (10)
#define SOC_ASP_IMSR_p1fadeinims_START (11)
#define SOC_ASP_IMSR_p1fadeinims_END (11)
#define SOC_ASP_IMSR_p2fadeinims_START (12)
#define SOC_ASP_IMSR_p2fadeinims_END (12)
#define SOC_ASP_IMSR_p3fadeinims_START (13)
#define SOC_ASP_IMSR_p3fadeinims_END (13)
#define SOC_ASP_IMSR_p0fadeoutims_START (14)
#define SOC_ASP_IMSR_p0fadeoutims_END (14)
#define SOC_ASP_IMSR_p1fadeoutims_START (15)
#define SOC_ASP_IMSR_p1fadeoutims_END (15)
#define SOC_ASP_IMSR_p2fadeoutims_START (16)
#define SOC_ASP_IMSR_p2fadeoutims_END (16)
#define SOC_ASP_IMSR_p3fadeoutims_START (17)
#define SOC_ASP_IMSR_p3fadeoutims_END (17)
#define SOC_ASP_IMSR_aberims_START (18)
#define SOC_ASP_IMSR_aberims_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradficr : 1;
        unsigned int prbdficr : 1;
        unsigned int p0adficr : 1;
        unsigned int p0bdficr : 1;
        unsigned int p1adficr : 1;
        unsigned int p1bdficr : 1;
        unsigned int p2adficr : 1;
        unsigned int p2bdficr : 1;
        unsigned int p3adficr : 1;
        unsigned int p3bdficr : 1;
        unsigned int p0fadeinicr : 1;
        unsigned int p1fadeinicr : 1;
        unsigned int p2fadeinicr : 1;
        unsigned int p3fadeinicr : 1;
        unsigned int p0fadeouticr : 1;
        unsigned int p1fadeouticr : 1;
        unsigned int p2fadeouticr : 1;
        unsigned int p3fadeouticr : 1;
        unsigned int abericr : 1;
        unsigned int reserved : 13;
    } reg;
} SOC_ASP_ICR_UNION;
#endif
#define SOC_ASP_ICR_pradficr_START (0)
#define SOC_ASP_ICR_pradficr_END (0)
#define SOC_ASP_ICR_prbdficr_START (1)
#define SOC_ASP_ICR_prbdficr_END (1)
#define SOC_ASP_ICR_p0adficr_START (2)
#define SOC_ASP_ICR_p0adficr_END (2)
#define SOC_ASP_ICR_p0bdficr_START (3)
#define SOC_ASP_ICR_p0bdficr_END (3)
#define SOC_ASP_ICR_p1adficr_START (4)
#define SOC_ASP_ICR_p1adficr_END (4)
#define SOC_ASP_ICR_p1bdficr_START (5)
#define SOC_ASP_ICR_p1bdficr_END (5)
#define SOC_ASP_ICR_p2adficr_START (6)
#define SOC_ASP_ICR_p2adficr_END (6)
#define SOC_ASP_ICR_p2bdficr_START (7)
#define SOC_ASP_ICR_p2bdficr_END (7)
#define SOC_ASP_ICR_p3adficr_START (8)
#define SOC_ASP_ICR_p3adficr_END (8)
#define SOC_ASP_ICR_p3bdficr_START (9)
#define SOC_ASP_ICR_p3bdficr_END (9)
#define SOC_ASP_ICR_p0fadeinicr_START (10)
#define SOC_ASP_ICR_p0fadeinicr_END (10)
#define SOC_ASP_ICR_p1fadeinicr_START (11)
#define SOC_ASP_ICR_p1fadeinicr_END (11)
#define SOC_ASP_ICR_p2fadeinicr_START (12)
#define SOC_ASP_ICR_p2fadeinicr_END (12)
#define SOC_ASP_ICR_p3fadeinicr_START (13)
#define SOC_ASP_ICR_p3fadeinicr_END (13)
#define SOC_ASP_ICR_p0fadeouticr_START (14)
#define SOC_ASP_ICR_p0fadeouticr_END (14)
#define SOC_ASP_ICR_p1fadeouticr_START (15)
#define SOC_ASP_ICR_p1fadeouticr_END (15)
#define SOC_ASP_ICR_p2fadeouticr_START (16)
#define SOC_ASP_ICR_p2fadeouticr_END (16)
#define SOC_ASP_ICR_p3fadeouticr_START (17)
#define SOC_ASP_ICR_p3fadeouticr_END (17)
#define SOC_ASP_ICR_abericr_START (18)
#define SOC_ASP_ICR_abericr_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0dsr : 1;
        unsigned int p1dsr : 1;
        unsigned int p2dsr : 1;
        unsigned int p3dsr : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_PCMNSSR_UNION;
#endif
#define SOC_ASP_PCMNSSR_p0dsr_START (0)
#define SOC_ASP_PCMNSSR_p0dsr_END (0)
#define SOC_ASP_PCMNSSR_p1dsr_START (1)
#define SOC_ASP_PCMNSSR_p1dsr_END (1)
#define SOC_ASP_PCMNSSR_p2dsr_START (2)
#define SOC_ASP_PCMNSSR_p2dsr_END (2)
#define SOC_ASP_PCMNSSR_p3dsr_START (3)
#define SOC_ASP_PCMNSSR_p3dsr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0rsr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_P0RSRR_UNION;
#endif
#define SOC_ASP_P0RSRR_p0rsr_START (0)
#define SOC_ASP_P0RSRR_p0rsr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1rsr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_P1RSRR_UNION;
#endif
#define SOC_ASP_P1RSRR_p1rsr_START (0)
#define SOC_ASP_P1RSRR_p1rsr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2rsr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_P2RSRR_UNION;
#endif
#define SOC_ASP_P2RSRR_p2rsr_START (0)
#define SOC_ASP_P2RSRR_p2rsr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3rsr : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_ASP_P3RSRR_UNION;
#endif
#define SOC_ASP_P3RSRR_p3rsr_START (0)
#define SOC_ASP_P3RSRR_p3rsr_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx0_fadeien : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEINEN0_UNION;
#endif
#define SOC_ASP_FADEINEN0_tx0_fadeien_START (0)
#define SOC_ASP_FADEINEN0_tx0_fadeien_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx0_fadeoen : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEOUTEN0_UNION;
#endif
#define SOC_ASP_FADEOUTEN0_tx0_fadeoen_START (0)
#define SOC_ASP_FADEOUTEN0_tx0_fadeoen_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx0_faderate : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_FADERATE0_UNION;
#endif
#define SOC_ASP_FADERATE0_tx0_faderate_START (0)
#define SOC_ASP_FADERATE0_tx0_faderate_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx1_fadeien : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEINEN1_UNION;
#endif
#define SOC_ASP_FADEINEN1_tx1_fadeien_START (0)
#define SOC_ASP_FADEINEN1_tx1_fadeien_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx1_fadeoen : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEOUTEN1_UNION;
#endif
#define SOC_ASP_FADEOUTEN1_tx1_fadeoen_START (0)
#define SOC_ASP_FADEOUTEN1_tx1_fadeoen_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx1_faderate : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_FADERATE1_UNION;
#endif
#define SOC_ASP_FADERATE1_tx1_faderate_START (0)
#define SOC_ASP_FADERATE1_tx1_faderate_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx2_fadeien : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEINEN2_UNION;
#endif
#define SOC_ASP_FADEINEN2_tx2_fadeien_START (0)
#define SOC_ASP_FADEINEN2_tx2_fadeien_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx2_fadeoen : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEOUTEN2_UNION;
#endif
#define SOC_ASP_FADEOUTEN2_tx2_fadeoen_START (0)
#define SOC_ASP_FADEOUTEN2_tx2_fadeoen_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx2_faderate : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_FADERATE2_UNION;
#endif
#define SOC_ASP_FADERATE2_tx2_faderate_START (0)
#define SOC_ASP_FADERATE2_tx2_faderate_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx3_fadeien : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEINEN3_UNION;
#endif
#define SOC_ASP_FADEINEN3_tx3_fadeien_START (0)
#define SOC_ASP_FADEINEN3_tx3_fadeien_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx3_fadeoen : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_FADEOUTEN3_UNION;
#endif
#define SOC_ASP_FADEOUTEN3_tx3_fadeoen_START (0)
#define SOC_ASP_FADEOUTEN3_tx3_fadeoen_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int tx3_faderate : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_FADERATE3_UNION;
#endif
#define SOC_ASP_FADERATE3_tx3_faderate_START (0)
#define SOC_ASP_FADERATE3_tx3_faderate_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0lcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P0LCGR_UNION;
#endif
#define SOC_ASP_P0LCGR_p0lcgr_START (0)
#define SOC_ASP_P0LCGR_p0lcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0rcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P0RCGR_UNION;
#endif
#define SOC_ASP_P0RCGR_p0rcgr_START (0)
#define SOC_ASP_P0RCGR_p0rcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1lcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P1LCGR_UNION;
#endif
#define SOC_ASP_P1LCGR_p1lcgr_START (0)
#define SOC_ASP_P1LCGR_p1lcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1rcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P1RCGR_UNION;
#endif
#define SOC_ASP_P1RCGR_p1rcgr_START (0)
#define SOC_ASP_P1RCGR_p1rcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2lcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P2LCGR_UNION;
#endif
#define SOC_ASP_P2LCGR_p2lcgr_START (0)
#define SOC_ASP_P2LCGR_p2lcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2rcgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P2RCGR_UNION;
#endif
#define SOC_ASP_P2RCGR_p2rcgr_START (0)
#define SOC_ASP_P2RCGR_p2rcgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p30cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P30CGR_UNION;
#endif
#define SOC_ASP_P30CGR_p30cgr_START (0)
#define SOC_ASP_P30CGR_p30cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p31cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P31CGR_UNION;
#endif
#define SOC_ASP_P31CGR_p31cgr_START (0)
#define SOC_ASP_P31CGR_p31cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p32cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P32CGR_UNION;
#endif
#define SOC_ASP_P32CGR_p32cgr_START (0)
#define SOC_ASP_P32CGR_p32cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p33cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P33CGR_UNION;
#endif
#define SOC_ASP_P33CGR_p33cgr_START (0)
#define SOC_ASP_P33CGR_p33cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p34cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P34CGR_UNION;
#endif
#define SOC_ASP_P34CGR_p34cgr_START (0)
#define SOC_ASP_P34CGR_p34cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p35cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P35CGR_UNION;
#endif
#define SOC_ASP_P35CGR_p35cgr_START (0)
#define SOC_ASP_P35CGR_p35cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p36cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P36CGR_UNION;
#endif
#define SOC_ASP_P36CGR_p36cgr_START (0)
#define SOC_ASP_P36CGR_p36cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p37cgr : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_ASP_P37CGR_UNION;
#endif
#define SOC_ASP_P37CGR_p37cgr_START (0)
#define SOC_ASP_P37CGR_p37cgr_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mix_ctrl : 2;
        unsigned int reserved : 30;
    } reg;
} SOC_ASP_MIXCTL_UNION;
#endif
#define SOC_ASP_MIXCTL_mix_ctrl_START (0)
#define SOC_ASP_MIXCTL_mix_ctrl_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prasar : 32;
    } reg;
} SOC_ASP_PRASAR_UNION;
#endif
#define SOC_ASP_PRASAR_prasar_START (0)
#define SOC_ASP_PRASAR_prasar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRADLR_UNION;
#endif
#define SOC_ASP_PRADLR_pradlr_START (0)
#define SOC_ASP_PRADLR_pradlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prbsar : 32;
    } reg;
} SOC_ASP_PRBSAR_UNION;
#endif
#define SOC_ASP_PRBSAR_prbsar_START (0)
#define SOC_ASP_PRBSAR_prbsar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prbdlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRBDLR_UNION;
#endif
#define SOC_ASP_PRBDLR_prbdlr_START (0)
#define SOC_ASP_PRBDLR_prbdlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0asar : 32;
    } reg;
} SOC_ASP_P0ASAR_UNION;
#endif
#define SOC_ASP_P0ASAR_p0asar_START (0)
#define SOC_ASP_P0ASAR_p0asar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0adlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0ADLR_UNION;
#endif
#define SOC_ASP_P0ADLR_p0adlr_START (0)
#define SOC_ASP_P0ADLR_p0adlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0bsar : 32;
    } reg;
} SOC_ASP_P0BSAR_UNION;
#endif
#define SOC_ASP_P0BSAR_p0bsar_START (0)
#define SOC_ASP_P0BSAR_p0bsar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0bdlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0BDLR_UNION;
#endif
#define SOC_ASP_P0BDLR_p0bdlr_START (0)
#define SOC_ASP_P0BDLR_p0bdlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1asar : 32;
    } reg;
} SOC_ASP_P1ASAR_UNION;
#endif
#define SOC_ASP_P1ASAR_p1asar_START (0)
#define SOC_ASP_P1ASAR_p1asar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1adlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1ADLR_UNION;
#endif
#define SOC_ASP_P1ADLR_p1adlr_START (0)
#define SOC_ASP_P1ADLR_p1adlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1bsar : 32;
    } reg;
} SOC_ASP_P1BSAR_UNION;
#endif
#define SOC_ASP_P1BSAR_p1bsar_START (0)
#define SOC_ASP_P1BSAR_p1bsar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1bdlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1BDLR_UNION;
#endif
#define SOC_ASP_P1BDLR_p1bdlr_START (0)
#define SOC_ASP_P1BDLR_p1bdlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2asar : 32;
    } reg;
} SOC_ASP_P2ASAR_UNION;
#endif
#define SOC_ASP_P2ASAR_p2asar_START (0)
#define SOC_ASP_P2ASAR_p2asar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2adlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2ADLR_UNION;
#endif
#define SOC_ASP_P2ADLR_p2adlr_START (0)
#define SOC_ASP_P2ADLR_p2adlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2bsar : 32;
    } reg;
} SOC_ASP_P2BSAR_UNION;
#endif
#define SOC_ASP_P2BSAR_p2bsar_START (0)
#define SOC_ASP_P2BSAR_p2bsar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2bdlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2BDLR_UNION;
#endif
#define SOC_ASP_P2BDLR_p2bdlr_START (0)
#define SOC_ASP_P2BDLR_p2bdlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3asar : 32;
    } reg;
} SOC_ASP_P3ASAR_UNION;
#endif
#define SOC_ASP_P3ASAR_p3asar_START (0)
#define SOC_ASP_P3ASAR_p3asar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3adlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3ADLR_UNION;
#endif
#define SOC_ASP_P3ADLR_p3adlr_START (0)
#define SOC_ASP_P3ADLR_p3adlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3bsar : 32;
    } reg;
} SOC_ASP_P3BSAR_UNION;
#endif
#define SOC_ASP_P3BSAR_p3bsar_START (0)
#define SOC_ASP_P3BSAR_p3bsar_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3bdlr : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3BDLR_UNION;
#endif
#define SOC_ASP_P3BDLR_p3bdlr_START (0)
#define SOC_ASP_P3BDLR_p3bdlr_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int spdifsel : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_ASP_SPDIFSEL_UNION;
#endif
#define SOC_ASP_SPDIFSEL_spdifsel_START (0)
#define SOC_ASP_SPDIFSEL_spdifsel_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0adls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0ADLS_UNION;
#endif
#define SOC_ASP_P0ADLS_p0adls_START (0)
#define SOC_ASP_P0ADLS_p0adls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0bdls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0BDLS_UNION;
#endif
#define SOC_ASP_P0BDLS_p0bdls_START (0)
#define SOC_ASP_P0BDLS_p0bdls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1adls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1ADLS_UNION;
#endif
#define SOC_ASP_P1ADLS_p1adls_START (0)
#define SOC_ASP_P1ADLS_p1adls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1bdls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1BDLS_UNION;
#endif
#define SOC_ASP_P1BDLS_p1bdls_START (0)
#define SOC_ASP_P1BDLS_p1bdls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2adls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2ADLS_UNION;
#endif
#define SOC_ASP_P2ADLS_p2adls_START (0)
#define SOC_ASP_P2ADLS_p2adls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2bdls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2BDLS_UNION;
#endif
#define SOC_ASP_P2BDLS_p2bdls_START (0)
#define SOC_ASP_P2BDLS_p2bdls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3adls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3ADLS_UNION;
#endif
#define SOC_ASP_P3ADLS_p3adls_START (0)
#define SOC_ASP_P3ADLS_p3adls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3bdls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3BDLS_UNION;
#endif
#define SOC_ASP_P3BDLS_p3bdls_START (0)
#define SOC_ASP_P3BDLS_p3bdls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRADLS_UNION;
#endif
#define SOC_ASP_PRADLS_pradls_START (0)
#define SOC_ASP_PRADLS_pradls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prbdls : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRBDLS_UNION;
#endif
#define SOC_ASP_PRBDLS_prbdls_START (0)
#define SOC_ASP_PRBDLS_prbdls_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pcm0_fds : 5;
        unsigned int reserved_0: 3;
        unsigned int pcm1_fds : 6;
        unsigned int reserved_1: 2;
        unsigned int pcm2_fds : 6;
        unsigned int reserved_2: 2;
        unsigned int pcm3_fds : 6;
        unsigned int reserved_3: 2;
    } reg;
} SOC_ASP_FDS_UNION;
#endif
#define SOC_ASP_FDS_pcm0_fds_START (0)
#define SOC_ASP_FDS_pcm0_fds_END (4)
#define SOC_ASP_FDS_pcm1_fds_START (8)
#define SOC_ASP_FDS_pcm1_fds_END (13)
#define SOC_ASP_FDS_pcm2_fds_START (16)
#define SOC_ASP_FDS_pcm2_fds_END (21)
#define SOC_ASP_FDS_pcm3_fds_START (24)
#define SOC_ASP_FDS_pcm3_fds_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0adl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0ADL_UNION;
#endif
#define SOC_ASP_P0ADL_p0adl_START (0)
#define SOC_ASP_P0ADL_p0adl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p0bdl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P0BDL_UNION;
#endif
#define SOC_ASP_P0BDL_p0bdl_START (0)
#define SOC_ASP_P0BDL_p0bdl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1adl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1ADL_UNION;
#endif
#define SOC_ASP_P1ADL_p1adl_START (0)
#define SOC_ASP_P1ADL_p1adl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p1bdl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P1BDL_UNION;
#endif
#define SOC_ASP_P1BDL_p1bdl_START (0)
#define SOC_ASP_P1BDL_p1bdl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2adl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2ADL_UNION;
#endif
#define SOC_ASP_P2ADL_p2adl_START (0)
#define SOC_ASP_P2ADL_p2adl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p2bdl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P2BDL_UNION;
#endif
#define SOC_ASP_P2BDL_p2bdl_START (0)
#define SOC_ASP_P2BDL_p2bdl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3adl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3ADL_UNION;
#endif
#define SOC_ASP_P3ADL_p3adl_START (0)
#define SOC_ASP_P3ADL_p3adl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int p3bdl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_P3BDL_UNION;
#endif
#define SOC_ASP_P3BDL_p3bdl_START (0)
#define SOC_ASP_P3BDL_p3bdl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pradl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRADL_UNION;
#endif
#define SOC_ASP_PRADL_pradl_START (0)
#define SOC_ASP_PRADL_pradl_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prbdl : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_ASP_PRBDL_UNION;
#endif
#define SOC_ASP_PRBDL_prbdl_START (0)
#define SOC_ASP_PRBDL_prbdl_END (19)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
