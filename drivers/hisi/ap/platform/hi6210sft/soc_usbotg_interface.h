#ifndef __SOC_USBOTG_INTERFACE_H__
#define __SOC_USBOTG_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_USBOTG_GOTGCTL_ADDR(base) ((base) + (0x0000))
#define SOC_USBOTG_GOTGINT_ADDR(base) ((base) + (0x0004))
#define SOC_USBOTG_GAHBCFG_ADDR(base) ((base) + (0x0008))
#define SOC_USBOTG_GUSBCFG_ADDR(base) ((base) + (0x000C))
#define SOC_USBOTG_GRSTCTL_ADDR(base) ((base) + (0x0010))
#define SOC_USBOTG_GINTSTS_ADDR(base) ((base) + (0x0014))
#define SOC_USBOTG_GINTMSK_ADDR(base) ((base) + (0x0018))
#define SOC_USBOTG_GRXSTSR_ADDR(base) ((base) + (0x001C))
#define SOC_USBOTG_GRXSTSP_ADDR(base) ((base) + (0x0020))
#define SOC_USBOTG_GRXFSIZ_ADDR(base) ((base) + (0x0024))
#define SOC_USBOTG_GNPTXFSIZ_ADDR(base) ((base) + (0x0028))
#define SOC_USBOTG_GNPTXSTS_ADDR(base) ((base) + (0x002C))
#define SOC_USBOTG_GSNPSID_ADDR(base) ((base) + (0x0040))
#define SOC_USBOTG_GHWCFG1_ADDR(base) ((base) + (0x0044))
#define SOC_USBOTG_GHWCFG2_ADDR(base) ((base) + (0x0048))
#define SOC_USBOTG_GHWCFG3_ADDR(base) ((base) + (0x004C))
#define SOC_USBOTG_GHWCFG4_ADDR(base) ((base) + (0x0050))
#define SOC_USBOTG_GLPMCFG_ADDR(base) ((base) + (0x0054))
#define SOC_USBOTG_GPWRDN_ADDR(base) ((base) + (0x0058))
#define SOC_USBOTG_GDFIFOCFG_ADDR(base) ((base) + (0x005C))
#define SOC_USBOTG_GADPCTL_ADDR(base) ((base) + (0x0060))
#define SOC_USBOTG_HPTXFSIZ_ADDR(base) ((base) + (0x0100))
#define SOC_USBOTG_DIEPTXF1_ADDR(base) ((base) + (0x0104))
#define SOC_USBOTG_DIEPTXF2_ADDR(base) ((base) + (0x0108))
#define SOC_USBOTG_DIEPTXF3_ADDR(base) ((base) + (0x010C))
#define SOC_USBOTG_DIEPTXF4_ADDR(base) ((base) + (0x0110))
#define SOC_USBOTG_DIEPTXF5_ADDR(base) ((base) + (0x0114))
#define SOC_USBOTG_DIEPTXF6_ADDR(base) ((base) + (0x0118))
#define SOC_USBOTG_DIEPTXF7_ADDR(base) ((base) + (0x011C))
#define SOC_USBOTG_DIEPTXF8_ADDR(base) ((base) + (0x0120))
#define SOC_USBOTG_DIEPTXF9_ADDR(base) ((base) + (0x0124))
#define SOC_USBOTG_DIEPTXF10_ADDR(base) ((base) + (0x0128))
#define SOC_USBOTG_DIEPTXF11_ADDR(base) ((base) + (0x012C))
#define SOC_USBOTG_DIEPTXF12_ADDR(base) ((base) + (0x0130))
#define SOC_USBOTG_DIEPTXF13_ADDR(base) ((base) + (0x0134))
#define SOC_USBOTG_DIEPTXF14_ADDR(base) ((base) + (0x0138))
#define SOC_USBOTG_DIEPTXF15_ADDR(base) ((base) + (0x013C))
#define SOC_USBOTG_HCFG_ADDR(base) ((base) + (0x0400))
#define SOC_USBOTG_HFIR_ADDR(base) ((base) + (0x0404))
#define SOC_USBOTG_HFNUM_ADDR(base) ((base) + (0x0408))
#define SOC_USBOTG_HPTXSTS_ADDR(base) ((base) + (0x0410))
#define SOC_USBOTG_HAINT_ADDR(base) ((base) + (0x0414))
#define SOC_USBOTG_HAINTMSK_ADDR(base) ((base) + (0x0418))
#define SOC_USBOTG_HFLBADDR_ADDR(base) ((base) + (0x041C))
#define SOC_USBOTG_HPRT_ADDR(base) ((base) + (0x0440))
#define SOC_USBOTG_HCCHARP_ADDR(base) ((base) + (0x0500+(0x20*i)))
#define SOC_USBOTG_HCSPLTP_ADDR(base) ((base) + (0x0504+(0x20*i)))
#define SOC_USBOTG_HCINTP_ADDR(base) ((base) + (0x0508+(0x20*i)))
#define SOC_USBOTG_HCINTMSKP_ADDR(base) ((base) + (0x050C+(0x20*i)))
#define SOC_USBOTG_HCTSIZP_ADDR(base) ((base) + (0x0510+(0x20*i)))
#define SOC_USBOTG_HCTSIZP_NON_SG_ADDR(base) ((base) + (0x0510+(0x20*i)))
#define SOC_USBOTG_HCDMAP_ADDR(base) ((base) + (0x0514+(0x20*i)))
#define SOC_USBOTG_HCDMABP_ADDR(base) ((base) + (0x051C+(0x20*i)))
#define SOC_USBOTG_DCFG_ADDR(base) ((base) + (0x0800))
#define SOC_USBOTG_DCTL_ADDR(base) ((base) + (0x0804))
#define SOC_USBOTG_DSTS_ADDR(base) ((base) + (0x0808))
#define SOC_USBOTG_DIEPMSK_ADDR(base) ((base) + (0x0810))
#define SOC_USBOTG_DOEPMSK_ADDR(base) ((base) + (0x0814))
#define SOC_USBOTG_DAINT_ADDR(base) ((base) + (0x0818))
#define SOC_USBOTG_DAINTMSK_ADDR(base) ((base) + (0x081C))
#define SOC_USBOTG_DVBUSDIS_ADDR(base) ((base) + (0x0828))
#define SOC_USBOTG_DVBUSPULSE_ADDR(base) ((base) + (0x082C))
#define SOC_USBOTG_DTHRCTL_ADDR(base) ((base) + (0x0830))
#define SOC_USBOTG_DIEPEMPMSK_ADDR(base) ((base) + (0x0834))
#define SOC_USBOTG_DIEPCTL0_ADDR(base) ((base) + (0x0900))
#define SOC_USBOTG_DIEPCTLN_ADDR(base,n) ((base) + (0x0900+(0x20*(n))))
#define SOC_USBOTG_DIEPINTM_ADDR(base,m) ((base) + (0x0908+(0x20*(m))))
#define SOC_USBOTG_DIEPTSIZ0_ADDR(base) ((base) + (0x0910))
#define SOC_USBOTG_DIEPTSIZN_ADDR(base,n) ((base) + (0x0910+(0x20*(n))))
#define SOC_USBOTG_DIEPDMAM_ADDR(base,m) ((base) + (0x0914+(0x20*(m))))
#define SOC_USBOTG_DTXFSTSM_ADDR(base) ((base) + (0x0918))
#define SOC_USBOTG_DIEPDMABN_ADDR(base,m) ((base) + (0x091C+(0x20*(m))))
#define SOC_USBOTG_DOEPCTL0_ADDR(base) ((base) + (0x0B00))
#define SOC_USBOTG_DOEPCTLN_ADDR(base,n) ((base) + (0x0B00+(0x20*(n))))
#define SOC_USBOTG_DOEPINTM_ADDR(base,m) ((base) + (0x0B08+(0x20*(m))))
#define SOC_USBOTG_DOEPTSIZ0_ADDR(base) ((base) + (0x0B10))
#define SOC_USBOTG_DOEPTSIZN_ADDR(base,n) ((base) + (0x0B10+(0x20*(n))))
#define SOC_USBOTG_DOEPDMAM_ADDR(base,m) ((base) + (0x0B14+(0x20*(m))))
#define SOC_USBOTG_DOEPDMABM_ADDR(base,m) ((base) + (0x0B1C+(0x20*(m))))
#define SOC_USBOTG_PCGCCTL_ADDR(base) ((base) + (0x0E00))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sesreqscs : 1;
        unsigned int sesreq : 1;
        unsigned int vbvalidoven : 1;
        unsigned int vbvalidovval : 1;
        unsigned int avalidoven : 1;
        unsigned int avalidovval : 1;
        unsigned int bvalidoven : 1;
        unsigned int bvalidovval : 1;
        unsigned int hstnegscs : 1;
        unsigned int hnpreq : 1;
        unsigned int hstsethnpen : 1;
        unsigned int devhnpen : 1;
        unsigned int reserved_0 : 4;
        unsigned int conidsts : 1;
        unsigned int dbnc_time : 1;
        unsigned int asessvld : 1;
        unsigned int bsesvld : 1;
        unsigned int otg_version : 1;
        unsigned int reserved_1 : 1;
        unsigned int multvaldidbc : 5;
        unsigned int chirpen : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_USBOTG_GOTGCTL_UNION;
#endif
#define SOC_USBOTG_GOTGCTL_sesreqscs_START (0)
#define SOC_USBOTG_GOTGCTL_sesreqscs_END (0)
#define SOC_USBOTG_GOTGCTL_sesreq_START (1)
#define SOC_USBOTG_GOTGCTL_sesreq_END (1)
#define SOC_USBOTG_GOTGCTL_vbvalidoven_START (2)
#define SOC_USBOTG_GOTGCTL_vbvalidoven_END (2)
#define SOC_USBOTG_GOTGCTL_vbvalidovval_START (3)
#define SOC_USBOTG_GOTGCTL_vbvalidovval_END (3)
#define SOC_USBOTG_GOTGCTL_avalidoven_START (4)
#define SOC_USBOTG_GOTGCTL_avalidoven_END (4)
#define SOC_USBOTG_GOTGCTL_avalidovval_START (5)
#define SOC_USBOTG_GOTGCTL_avalidovval_END (5)
#define SOC_USBOTG_GOTGCTL_bvalidoven_START (6)
#define SOC_USBOTG_GOTGCTL_bvalidoven_END (6)
#define SOC_USBOTG_GOTGCTL_bvalidovval_START (7)
#define SOC_USBOTG_GOTGCTL_bvalidovval_END (7)
#define SOC_USBOTG_GOTGCTL_hstnegscs_START (8)
#define SOC_USBOTG_GOTGCTL_hstnegscs_END (8)
#define SOC_USBOTG_GOTGCTL_hnpreq_START (9)
#define SOC_USBOTG_GOTGCTL_hnpreq_END (9)
#define SOC_USBOTG_GOTGCTL_hstsethnpen_START (10)
#define SOC_USBOTG_GOTGCTL_hstsethnpen_END (10)
#define SOC_USBOTG_GOTGCTL_devhnpen_START (11)
#define SOC_USBOTG_GOTGCTL_devhnpen_END (11)
#define SOC_USBOTG_GOTGCTL_conidsts_START (16)
#define SOC_USBOTG_GOTGCTL_conidsts_END (16)
#define SOC_USBOTG_GOTGCTL_dbnc_time_START (17)
#define SOC_USBOTG_GOTGCTL_dbnc_time_END (17)
#define SOC_USBOTG_GOTGCTL_asessvld_START (18)
#define SOC_USBOTG_GOTGCTL_asessvld_END (18)
#define SOC_USBOTG_GOTGCTL_bsesvld_START (19)
#define SOC_USBOTG_GOTGCTL_bsesvld_END (19)
#define SOC_USBOTG_GOTGCTL_otg_version_START (20)
#define SOC_USBOTG_GOTGCTL_otg_version_END (20)
#define SOC_USBOTG_GOTGCTL_multvaldidbc_START (22)
#define SOC_USBOTG_GOTGCTL_multvaldidbc_END (26)
#define SOC_USBOTG_GOTGCTL_chirpen_START (27)
#define SOC_USBOTG_GOTGCTL_chirpen_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int sesenddet : 1;
        unsigned int reserved_1 : 5;
        unsigned int sesreqsucstschng : 1;
        unsigned int hstnegsucstschng : 1;
        unsigned int reserved_2 : 7;
        unsigned int hstnegdet : 1;
        unsigned int adevtoutchg : 1;
        unsigned int dbncedone : 1;
        unsigned int multvalidchng : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_USBOTG_GOTGINT_UNION;
#endif
#define SOC_USBOTG_GOTGINT_sesenddet_START (2)
#define SOC_USBOTG_GOTGINT_sesenddet_END (2)
#define SOC_USBOTG_GOTGINT_sesreqsucstschng_START (8)
#define SOC_USBOTG_GOTGINT_sesreqsucstschng_END (8)
#define SOC_USBOTG_GOTGINT_hstnegsucstschng_START (9)
#define SOC_USBOTG_GOTGINT_hstnegsucstschng_END (9)
#define SOC_USBOTG_GOTGINT_hstnegdet_START (17)
#define SOC_USBOTG_GOTGINT_hstnegdet_END (17)
#define SOC_USBOTG_GOTGINT_adevtoutchg_START (18)
#define SOC_USBOTG_GOTGINT_adevtoutchg_END (18)
#define SOC_USBOTG_GOTGINT_dbncedone_START (19)
#define SOC_USBOTG_GOTGINT_dbncedone_END (19)
#define SOC_USBOTG_GOTGINT_multvalidchng_START (20)
#define SOC_USBOTG_GOTGINT_multvalidchng_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int glblintrmsk : 1;
        unsigned int hbstlen : 4;
        unsigned int dmaen : 1;
        unsigned int reserved_0 : 1;
        unsigned int nptxfemplvl : 1;
        unsigned int reserved_1 : 13;
        unsigned int remmemsupp : 1;
        unsigned int notialldmawrit : 1;
        unsigned int ahbsingle : 1;
        unsigned int invdescendianness : 1;
        unsigned int reserved_2 : 7;
    } reg;
} SOC_USBOTG_GAHBCFG_UNION;
#endif
#define SOC_USBOTG_GAHBCFG_glblintrmsk_START (0)
#define SOC_USBOTG_GAHBCFG_glblintrmsk_END (0)
#define SOC_USBOTG_GAHBCFG_hbstlen_START (1)
#define SOC_USBOTG_GAHBCFG_hbstlen_END (4)
#define SOC_USBOTG_GAHBCFG_dmaen_START (5)
#define SOC_USBOTG_GAHBCFG_dmaen_END (5)
#define SOC_USBOTG_GAHBCFG_nptxfemplvl_START (7)
#define SOC_USBOTG_GAHBCFG_nptxfemplvl_END (7)
#define SOC_USBOTG_GAHBCFG_remmemsupp_START (21)
#define SOC_USBOTG_GAHBCFG_remmemsupp_END (21)
#define SOC_USBOTG_GAHBCFG_notialldmawrit_START (22)
#define SOC_USBOTG_GAHBCFG_notialldmawrit_END (22)
#define SOC_USBOTG_GAHBCFG_ahbsingle_START (23)
#define SOC_USBOTG_GAHBCFG_ahbsingle_END (23)
#define SOC_USBOTG_GAHBCFG_invdescendianness_START (24)
#define SOC_USBOTG_GAHBCFG_invdescendianness_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int toutcal : 3;
        unsigned int phyif : 1;
        unsigned int reserved_0 : 4;
        unsigned int srpcap : 1;
        unsigned int hnpcap : 1;
        unsigned int usbtrdtim : 4;
        unsigned int reserved_1 : 1;
        unsigned int phypwrclksel : 1;
        unsigned int reserved_2 : 12;
        unsigned int txenddelay : 1;
        unsigned int forcehstmode : 1;
        unsigned int forcedevmode : 1;
        unsigned int ctpttxpkt : 1;
    } reg;
} SOC_USBOTG_GUSBCFG_UNION;
#endif
#define SOC_USBOTG_GUSBCFG_toutcal_START (0)
#define SOC_USBOTG_GUSBCFG_toutcal_END (2)
#define SOC_USBOTG_GUSBCFG_phyif_START (3)
#define SOC_USBOTG_GUSBCFG_phyif_END (3)
#define SOC_USBOTG_GUSBCFG_srpcap_START (8)
#define SOC_USBOTG_GUSBCFG_srpcap_END (8)
#define SOC_USBOTG_GUSBCFG_hnpcap_START (9)
#define SOC_USBOTG_GUSBCFG_hnpcap_END (9)
#define SOC_USBOTG_GUSBCFG_usbtrdtim_START (10)
#define SOC_USBOTG_GUSBCFG_usbtrdtim_END (13)
#define SOC_USBOTG_GUSBCFG_phypwrclksel_START (15)
#define SOC_USBOTG_GUSBCFG_phypwrclksel_END (15)
#define SOC_USBOTG_GUSBCFG_txenddelay_START (28)
#define SOC_USBOTG_GUSBCFG_txenddelay_END (28)
#define SOC_USBOTG_GUSBCFG_forcehstmode_START (29)
#define SOC_USBOTG_GUSBCFG_forcehstmode_END (29)
#define SOC_USBOTG_GUSBCFG_forcedevmode_START (30)
#define SOC_USBOTG_GUSBCFG_forcedevmode_END (30)
#define SOC_USBOTG_GUSBCFG_ctpttxpkt_START (31)
#define SOC_USBOTG_GUSBCFG_ctpttxpkt_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int csftrst : 1;
        unsigned int reserved_0 : 1;
        unsigned int frmcntrrst : 1;
        unsigned int reserved_1 : 1;
        unsigned int rxfflsh : 1;
        unsigned int txfflsh : 1;
        unsigned int txfnum : 5;
        unsigned int reserved_2 : 19;
        unsigned int dmareq : 1;
        unsigned int ahbidle : 1;
    } reg;
} SOC_USBOTG_GRSTCTL_UNION;
#endif
#define SOC_USBOTG_GRSTCTL_csftrst_START (0)
#define SOC_USBOTG_GRSTCTL_csftrst_END (0)
#define SOC_USBOTG_GRSTCTL_frmcntrrst_START (2)
#define SOC_USBOTG_GRSTCTL_frmcntrrst_END (2)
#define SOC_USBOTG_GRSTCTL_rxfflsh_START (4)
#define SOC_USBOTG_GRSTCTL_rxfflsh_END (4)
#define SOC_USBOTG_GRSTCTL_txfflsh_START (5)
#define SOC_USBOTG_GRSTCTL_txfflsh_END (5)
#define SOC_USBOTG_GRSTCTL_txfnum_START (6)
#define SOC_USBOTG_GRSTCTL_txfnum_END (10)
#define SOC_USBOTG_GRSTCTL_dmareq_START (30)
#define SOC_USBOTG_GRSTCTL_dmareq_END (30)
#define SOC_USBOTG_GRSTCTL_ahbidle_START (31)
#define SOC_USBOTG_GRSTCTL_ahbidle_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int curmode : 1;
        unsigned int modemis : 1;
        unsigned int otgint : 1;
        unsigned int sof : 1;
        unsigned int rxflvl : 1;
        unsigned int nptxfemp : 1;
        unsigned int ginnakeff : 1;
        unsigned int goutnakeff : 1;
        unsigned int reserved_0 : 2;
        unsigned int erlysusp : 1;
        unsigned int usbsusp : 1;
        unsigned int usbrst : 1;
        unsigned int enumdone : 1;
        unsigned int isooutdrop : 1;
        unsigned int eopf : 1;
        unsigned int rstrdoneint : 1;
        unsigned int reserved_1 : 1;
        unsigned int iepint : 1;
        unsigned int oepint : 1;
        unsigned int incompisoin : 1;
        unsigned int incompisoout : 1;
        unsigned int fetsusp : 1;
        unsigned int resetdet : 1;
        unsigned int hprtint : 1;
        unsigned int hchint : 1;
        unsigned int ptxfemp : 1;
        unsigned int lpm_int : 1;
        unsigned int conidstschg : 1;
        unsigned int disconnint : 1;
        unsigned int sessreqint : 1;
        unsigned int wkupint : 1;
    } reg;
} SOC_USBOTG_GINTSTS_UNION;
#endif
#define SOC_USBOTG_GINTSTS_curmode_START (0)
#define SOC_USBOTG_GINTSTS_curmode_END (0)
#define SOC_USBOTG_GINTSTS_modemis_START (1)
#define SOC_USBOTG_GINTSTS_modemis_END (1)
#define SOC_USBOTG_GINTSTS_otgint_START (2)
#define SOC_USBOTG_GINTSTS_otgint_END (2)
#define SOC_USBOTG_GINTSTS_sof_START (3)
#define SOC_USBOTG_GINTSTS_sof_END (3)
#define SOC_USBOTG_GINTSTS_rxflvl_START (4)
#define SOC_USBOTG_GINTSTS_rxflvl_END (4)
#define SOC_USBOTG_GINTSTS_nptxfemp_START (5)
#define SOC_USBOTG_GINTSTS_nptxfemp_END (5)
#define SOC_USBOTG_GINTSTS_ginnakeff_START (6)
#define SOC_USBOTG_GINTSTS_ginnakeff_END (6)
#define SOC_USBOTG_GINTSTS_goutnakeff_START (7)
#define SOC_USBOTG_GINTSTS_goutnakeff_END (7)
#define SOC_USBOTG_GINTSTS_erlysusp_START (10)
#define SOC_USBOTG_GINTSTS_erlysusp_END (10)
#define SOC_USBOTG_GINTSTS_usbsusp_START (11)
#define SOC_USBOTG_GINTSTS_usbsusp_END (11)
#define SOC_USBOTG_GINTSTS_usbrst_START (12)
#define SOC_USBOTG_GINTSTS_usbrst_END (12)
#define SOC_USBOTG_GINTSTS_enumdone_START (13)
#define SOC_USBOTG_GINTSTS_enumdone_END (13)
#define SOC_USBOTG_GINTSTS_isooutdrop_START (14)
#define SOC_USBOTG_GINTSTS_isooutdrop_END (14)
#define SOC_USBOTG_GINTSTS_eopf_START (15)
#define SOC_USBOTG_GINTSTS_eopf_END (15)
#define SOC_USBOTG_GINTSTS_rstrdoneint_START (16)
#define SOC_USBOTG_GINTSTS_rstrdoneint_END (16)
#define SOC_USBOTG_GINTSTS_iepint_START (18)
#define SOC_USBOTG_GINTSTS_iepint_END (18)
#define SOC_USBOTG_GINTSTS_oepint_START (19)
#define SOC_USBOTG_GINTSTS_oepint_END (19)
#define SOC_USBOTG_GINTSTS_incompisoin_START (20)
#define SOC_USBOTG_GINTSTS_incompisoin_END (20)
#define SOC_USBOTG_GINTSTS_incompisoout_START (21)
#define SOC_USBOTG_GINTSTS_incompisoout_END (21)
#define SOC_USBOTG_GINTSTS_fetsusp_START (22)
#define SOC_USBOTG_GINTSTS_fetsusp_END (22)
#define SOC_USBOTG_GINTSTS_resetdet_START (23)
#define SOC_USBOTG_GINTSTS_resetdet_END (23)
#define SOC_USBOTG_GINTSTS_hprtint_START (24)
#define SOC_USBOTG_GINTSTS_hprtint_END (24)
#define SOC_USBOTG_GINTSTS_hchint_START (25)
#define SOC_USBOTG_GINTSTS_hchint_END (25)
#define SOC_USBOTG_GINTSTS_ptxfemp_START (26)
#define SOC_USBOTG_GINTSTS_ptxfemp_END (26)
#define SOC_USBOTG_GINTSTS_lpm_int_START (27)
#define SOC_USBOTG_GINTSTS_lpm_int_END (27)
#define SOC_USBOTG_GINTSTS_conidstschg_START (28)
#define SOC_USBOTG_GINTSTS_conidstschg_END (28)
#define SOC_USBOTG_GINTSTS_disconnint_START (29)
#define SOC_USBOTG_GINTSTS_disconnint_END (29)
#define SOC_USBOTG_GINTSTS_sessreqint_START (30)
#define SOC_USBOTG_GINTSTS_sessreqint_END (30)
#define SOC_USBOTG_GINTSTS_wkupint_START (31)
#define SOC_USBOTG_GINTSTS_wkupint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved_0 : 2;
        unsigned int otgintmsk : 1;
        unsigned int sofmsk : 1;
        unsigned int rxflvlmsk : 1;
        unsigned int nptxfempmsk : 1;
        unsigned int ginnakeffmsk : 1;
        unsigned int goutnakeffmsk : 1;
        unsigned int reserved_1 : 2;
        unsigned int erlysuspmsk : 1;
        unsigned int usbsuspmsk : 1;
        unsigned int usbrstmsk : 1;
        unsigned int enumdonemsk : 1;
        unsigned int isooutdropmsk : 1;
        unsigned int eopfmsk : 1;
        unsigned int rstrdonemsk : 1;
        unsigned int reserved_2 : 1;
        unsigned int iepintmsk : 1;
        unsigned int oepintmsk : 1;
        unsigned int incompisoinmsk : 1;
        unsigned int incompisooutmsk : 1;
        unsigned int fetsuspmsk : 1;
        unsigned int resetdetmsk : 1;
        unsigned int hprtintmsk : 1;
        unsigned int hchintmsk : 1;
        unsigned int ptxfempmsk : 1;
        unsigned int lpm_intmsk : 1;
        unsigned int conidstschngmsk : 1;
        unsigned int disconnintmsk : 1;
        unsigned int sessreqintmsk : 1;
        unsigned int wkupintmsk : 1;
    } reg;
} SOC_USBOTG_GINTMSK_UNION;
#endif
#define SOC_USBOTG_GINTMSK_otgintmsk_START (2)
#define SOC_USBOTG_GINTMSK_otgintmsk_END (2)
#define SOC_USBOTG_GINTMSK_sofmsk_START (3)
#define SOC_USBOTG_GINTMSK_sofmsk_END (3)
#define SOC_USBOTG_GINTMSK_rxflvlmsk_START (4)
#define SOC_USBOTG_GINTMSK_rxflvlmsk_END (4)
#define SOC_USBOTG_GINTMSK_nptxfempmsk_START (5)
#define SOC_USBOTG_GINTMSK_nptxfempmsk_END (5)
#define SOC_USBOTG_GINTMSK_ginnakeffmsk_START (6)
#define SOC_USBOTG_GINTMSK_ginnakeffmsk_END (6)
#define SOC_USBOTG_GINTMSK_goutnakeffmsk_START (7)
#define SOC_USBOTG_GINTMSK_goutnakeffmsk_END (7)
#define SOC_USBOTG_GINTMSK_erlysuspmsk_START (10)
#define SOC_USBOTG_GINTMSK_erlysuspmsk_END (10)
#define SOC_USBOTG_GINTMSK_usbsuspmsk_START (11)
#define SOC_USBOTG_GINTMSK_usbsuspmsk_END (11)
#define SOC_USBOTG_GINTMSK_usbrstmsk_START (12)
#define SOC_USBOTG_GINTMSK_usbrstmsk_END (12)
#define SOC_USBOTG_GINTMSK_enumdonemsk_START (13)
#define SOC_USBOTG_GINTMSK_enumdonemsk_END (13)
#define SOC_USBOTG_GINTMSK_isooutdropmsk_START (14)
#define SOC_USBOTG_GINTMSK_isooutdropmsk_END (14)
#define SOC_USBOTG_GINTMSK_eopfmsk_START (15)
#define SOC_USBOTG_GINTMSK_eopfmsk_END (15)
#define SOC_USBOTG_GINTMSK_rstrdonemsk_START (16)
#define SOC_USBOTG_GINTMSK_rstrdonemsk_END (16)
#define SOC_USBOTG_GINTMSK_iepintmsk_START (18)
#define SOC_USBOTG_GINTMSK_iepintmsk_END (18)
#define SOC_USBOTG_GINTMSK_oepintmsk_START (19)
#define SOC_USBOTG_GINTMSK_oepintmsk_END (19)
#define SOC_USBOTG_GINTMSK_incompisoinmsk_START (20)
#define SOC_USBOTG_GINTMSK_incompisoinmsk_END (20)
#define SOC_USBOTG_GINTMSK_incompisooutmsk_START (21)
#define SOC_USBOTG_GINTMSK_incompisooutmsk_END (21)
#define SOC_USBOTG_GINTMSK_fetsuspmsk_START (22)
#define SOC_USBOTG_GINTMSK_fetsuspmsk_END (22)
#define SOC_USBOTG_GINTMSK_resetdetmsk_START (23)
#define SOC_USBOTG_GINTMSK_resetdetmsk_END (23)
#define SOC_USBOTG_GINTMSK_hprtintmsk_START (24)
#define SOC_USBOTG_GINTMSK_hprtintmsk_END (24)
#define SOC_USBOTG_GINTMSK_hchintmsk_START (25)
#define SOC_USBOTG_GINTMSK_hchintmsk_END (25)
#define SOC_USBOTG_GINTMSK_ptxfempmsk_START (26)
#define SOC_USBOTG_GINTMSK_ptxfempmsk_END (26)
#define SOC_USBOTG_GINTMSK_lpm_intmsk_START (27)
#define SOC_USBOTG_GINTMSK_lpm_intmsk_END (27)
#define SOC_USBOTG_GINTMSK_conidstschngmsk_START (28)
#define SOC_USBOTG_GINTMSK_conidstschngmsk_END (28)
#define SOC_USBOTG_GINTMSK_disconnintmsk_START (29)
#define SOC_USBOTG_GINTMSK_disconnintmsk_END (29)
#define SOC_USBOTG_GINTMSK_sessreqintmsk_START (30)
#define SOC_USBOTG_GINTMSK_sessreqintmsk_END (30)
#define SOC_USBOTG_GINTMSK_wkupintmsk_START (31)
#define SOC_USBOTG_GINTMSK_wkupintmsk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int epnum : 4;
        unsigned int bcnt : 11;
        unsigned int dpid : 2;
        unsigned int pktsts : 4;
        unsigned int fn : 4;
        unsigned int reserved : 7;
    } reg;
} SOC_USBOTG_GRXSTSR_UNION;
#endif
#define SOC_USBOTG_GRXSTSR_epnum_START (0)
#define SOC_USBOTG_GRXSTSR_epnum_END (3)
#define SOC_USBOTG_GRXSTSR_bcnt_START (4)
#define SOC_USBOTG_GRXSTSR_bcnt_END (14)
#define SOC_USBOTG_GRXSTSR_dpid_START (15)
#define SOC_USBOTG_GRXSTSR_dpid_END (16)
#define SOC_USBOTG_GRXSTSR_pktsts_START (17)
#define SOC_USBOTG_GRXSTSR_pktsts_END (20)
#define SOC_USBOTG_GRXSTSR_fn_START (21)
#define SOC_USBOTG_GRXSTSR_fn_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int epnum : 4;
        unsigned int bcnt : 11;
        unsigned int dpid : 2;
        unsigned int pktsts : 4;
        unsigned int fn : 4;
        unsigned int reserved : 7;
    } reg;
} SOC_USBOTG_GRXSTSP_UNION;
#endif
#define SOC_USBOTG_GRXSTSP_epnum_START (0)
#define SOC_USBOTG_GRXSTSP_epnum_END (3)
#define SOC_USBOTG_GRXSTSP_bcnt_START (4)
#define SOC_USBOTG_GRXSTSP_bcnt_END (14)
#define SOC_USBOTG_GRXSTSP_dpid_START (15)
#define SOC_USBOTG_GRXSTSP_dpid_END (16)
#define SOC_USBOTG_GRXSTSP_pktsts_START (17)
#define SOC_USBOTG_GRXSTSP_pktsts_END (20)
#define SOC_USBOTG_GRXSTSP_fn_START (21)
#define SOC_USBOTG_GRXSTSP_fn_END (24)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rxfdep : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_GRXFSIZ_UNION;
#endif
#define SOC_USBOTG_GRXFSIZ_rxfdep_START (0)
#define SOC_USBOTG_GRXFSIZ_rxfdep_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nptxfstaddr : 16;
        unsigned int gnptxfsiz : 16;
    } reg;
} SOC_USBOTG_GNPTXFSIZ_UNION;
#endif
#define SOC_USBOTG_GNPTXFSIZ_nptxfstaddr_START (0)
#define SOC_USBOTG_GNPTXFSIZ_nptxfstaddr_END (15)
#define SOC_USBOTG_GNPTXFSIZ_gnptxfsiz_START (16)
#define SOC_USBOTG_GNPTXFSIZ_gnptxfsiz_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nptxfspcavail : 16;
        unsigned int nptxqspcavail : 8;
        unsigned int nptxqtop : 7;
        unsigned int reserved : 1;
    } reg;
} SOC_USBOTG_GNPTXSTS_UNION;
#endif
#define SOC_USBOTG_GNPTXSTS_nptxfspcavail_START (0)
#define SOC_USBOTG_GNPTXSTS_nptxfspcavail_END (15)
#define SOC_USBOTG_GNPTXSTS_nptxqspcavail_START (16)
#define SOC_USBOTG_GNPTXSTS_nptxqspcavail_END (23)
#define SOC_USBOTG_GNPTXSTS_nptxqtop_START (24)
#define SOC_USBOTG_GNPTXSTS_nptxqtop_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int userid : 32;
    } reg;
} SOC_USBOTG_GSNPSID_UNION;
#endif
#define SOC_USBOTG_GSNPSID_userid_START (0)
#define SOC_USBOTG_GSNPSID_userid_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int epdir : 32;
    } reg;
} SOC_USBOTG_GHWCFG1_UNION;
#endif
#define SOC_USBOTG_GHWCFG1_epdir_START (0)
#define SOC_USBOTG_GHWCFG1_epdir_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int otgmode : 3;
        unsigned int otgarch : 2;
        unsigned int singpnt : 1;
        unsigned int hsphytype : 2;
        unsigned int fsphytype : 2;
        unsigned int numdeveps : 4;
        unsigned int numhstchnl : 4;
        unsigned int periosupport : 1;
        unsigned int dynfifosizing : 1;
        unsigned int multiprocintrpt : 1;
        unsigned int reserved : 1;
        unsigned int nptxqdepth : 2;
        unsigned int ptxqdepth : 2;
        unsigned int tknqdepth : 5;
        unsigned int otg_ic_usb : 1;
    } reg;
} SOC_USBOTG_GHWCFG2_UNION;
#endif
#define SOC_USBOTG_GHWCFG2_otgmode_START (0)
#define SOC_USBOTG_GHWCFG2_otgmode_END (2)
#define SOC_USBOTG_GHWCFG2_otgarch_START (3)
#define SOC_USBOTG_GHWCFG2_otgarch_END (4)
#define SOC_USBOTG_GHWCFG2_singpnt_START (5)
#define SOC_USBOTG_GHWCFG2_singpnt_END (5)
#define SOC_USBOTG_GHWCFG2_hsphytype_START (6)
#define SOC_USBOTG_GHWCFG2_hsphytype_END (7)
#define SOC_USBOTG_GHWCFG2_fsphytype_START (8)
#define SOC_USBOTG_GHWCFG2_fsphytype_END (9)
#define SOC_USBOTG_GHWCFG2_numdeveps_START (10)
#define SOC_USBOTG_GHWCFG2_numdeveps_END (13)
#define SOC_USBOTG_GHWCFG2_numhstchnl_START (14)
#define SOC_USBOTG_GHWCFG2_numhstchnl_END (17)
#define SOC_USBOTG_GHWCFG2_periosupport_START (18)
#define SOC_USBOTG_GHWCFG2_periosupport_END (18)
#define SOC_USBOTG_GHWCFG2_dynfifosizing_START (19)
#define SOC_USBOTG_GHWCFG2_dynfifosizing_END (19)
#define SOC_USBOTG_GHWCFG2_multiprocintrpt_START (20)
#define SOC_USBOTG_GHWCFG2_multiprocintrpt_END (20)
#define SOC_USBOTG_GHWCFG2_nptxqdepth_START (22)
#define SOC_USBOTG_GHWCFG2_nptxqdepth_END (23)
#define SOC_USBOTG_GHWCFG2_ptxqdepth_START (24)
#define SOC_USBOTG_GHWCFG2_ptxqdepth_END (25)
#define SOC_USBOTG_GHWCFG2_tknqdepth_START (26)
#define SOC_USBOTG_GHWCFG2_tknqdepth_END (30)
#define SOC_USBOTG_GHWCFG2_otg_ic_usb_START (31)
#define SOC_USBOTG_GHWCFG2_otg_ic_usb_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersizewidth : 4;
        unsigned int pktsizewidth : 3;
        unsigned int otgen : 1;
        unsigned int i2cintsel : 1;
        unsigned int vndctlsupt : 1;
        unsigned int optfeature : 1;
        unsigned int rsttype : 1;
        unsigned int otg_adp_support : 1;
        unsigned int otg_enable_hsic : 1;
        unsigned int otg_bc_support : 1;
        unsigned int otg_enable_lpm : 1;
        unsigned int dfifodepth : 16;
    } reg;
} SOC_USBOTG_GHWCFG3_UNION;
#endif
#define SOC_USBOTG_GHWCFG3_xfersizewidth_START (0)
#define SOC_USBOTG_GHWCFG3_xfersizewidth_END (3)
#define SOC_USBOTG_GHWCFG3_pktsizewidth_START (4)
#define SOC_USBOTG_GHWCFG3_pktsizewidth_END (6)
#define SOC_USBOTG_GHWCFG3_otgen_START (7)
#define SOC_USBOTG_GHWCFG3_otgen_END (7)
#define SOC_USBOTG_GHWCFG3_i2cintsel_START (8)
#define SOC_USBOTG_GHWCFG3_i2cintsel_END (8)
#define SOC_USBOTG_GHWCFG3_vndctlsupt_START (9)
#define SOC_USBOTG_GHWCFG3_vndctlsupt_END (9)
#define SOC_USBOTG_GHWCFG3_optfeature_START (10)
#define SOC_USBOTG_GHWCFG3_optfeature_END (10)
#define SOC_USBOTG_GHWCFG3_rsttype_START (11)
#define SOC_USBOTG_GHWCFG3_rsttype_END (11)
#define SOC_USBOTG_GHWCFG3_otg_adp_support_START (12)
#define SOC_USBOTG_GHWCFG3_otg_adp_support_END (12)
#define SOC_USBOTG_GHWCFG3_otg_enable_hsic_START (13)
#define SOC_USBOTG_GHWCFG3_otg_enable_hsic_END (13)
#define SOC_USBOTG_GHWCFG3_otg_bc_support_START (14)
#define SOC_USBOTG_GHWCFG3_otg_bc_support_END (14)
#define SOC_USBOTG_GHWCFG3_otg_enable_lpm_START (15)
#define SOC_USBOTG_GHWCFG3_otg_enable_lpm_END (15)
#define SOC_USBOTG_GHWCFG3_dfifodepth_START (16)
#define SOC_USBOTG_GHWCFG3_dfifodepth_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int numdeveps : 4;
        unsigned int enablepwropt : 1;
        unsigned int ahbfreq : 1;
        unsigned int enbhiber : 1;
        unsigned int reserved_0 : 7;
        unsigned int phydatawidth : 2;
        unsigned int numctleps : 4;
        unsigned int iddigfltr : 1;
        unsigned int vbusvalidfltr : 1;
        unsigned int avalidfltr : 1;
        unsigned int bvalidfltr : 1;
        unsigned int sessendfltr : 1;
        unsigned int dedfifomode : 1;
        unsigned int ineps : 4;
        unsigned int sgdma : 1;
        unsigned int reserved_1 : 1;
    } reg;
} SOC_USBOTG_GHWCFG4_UNION;
#endif
#define SOC_USBOTG_GHWCFG4_numdeveps_START (0)
#define SOC_USBOTG_GHWCFG4_numdeveps_END (3)
#define SOC_USBOTG_GHWCFG4_enablepwropt_START (4)
#define SOC_USBOTG_GHWCFG4_enablepwropt_END (4)
#define SOC_USBOTG_GHWCFG4_ahbfreq_START (5)
#define SOC_USBOTG_GHWCFG4_ahbfreq_END (5)
#define SOC_USBOTG_GHWCFG4_enbhiber_START (6)
#define SOC_USBOTG_GHWCFG4_enbhiber_END (6)
#define SOC_USBOTG_GHWCFG4_phydatawidth_START (14)
#define SOC_USBOTG_GHWCFG4_phydatawidth_END (15)
#define SOC_USBOTG_GHWCFG4_numctleps_START (16)
#define SOC_USBOTG_GHWCFG4_numctleps_END (19)
#define SOC_USBOTG_GHWCFG4_iddigfltr_START (20)
#define SOC_USBOTG_GHWCFG4_iddigfltr_END (20)
#define SOC_USBOTG_GHWCFG4_vbusvalidfltr_START (21)
#define SOC_USBOTG_GHWCFG4_vbusvalidfltr_END (21)
#define SOC_USBOTG_GHWCFG4_avalidfltr_START (22)
#define SOC_USBOTG_GHWCFG4_avalidfltr_END (22)
#define SOC_USBOTG_GHWCFG4_bvalidfltr_START (23)
#define SOC_USBOTG_GHWCFG4_bvalidfltr_END (23)
#define SOC_USBOTG_GHWCFG4_sessendfltr_START (24)
#define SOC_USBOTG_GHWCFG4_sessendfltr_END (24)
#define SOC_USBOTG_GHWCFG4_dedfifomode_START (25)
#define SOC_USBOTG_GHWCFG4_dedfifomode_END (25)
#define SOC_USBOTG_GHWCFG4_ineps_START (26)
#define SOC_USBOTG_GHWCFG4_ineps_END (29)
#define SOC_USBOTG_GHWCFG4_sgdma_START (30)
#define SOC_USBOTG_GHWCFG4_sgdma_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int lpmcap : 1;
        unsigned int appl1res : 1;
        unsigned int hird : 4;
        unsigned int bremotewake : 1;
        unsigned int enblslpm : 1;
        unsigned int hird_thres : 5;
        unsigned int corel1res : 2;
        unsigned int slpsts : 1;
        unsigned int l1resumeok : 1;
        unsigned int lpm_chnl_index : 4;
        unsigned int lpm_retry_cnt : 3;
        unsigned int sndlpm : 1;
        unsigned int lpm_retrycnt_sts : 3;
        unsigned int enbesl : 1;
        unsigned int rstrslpsts : 1;
        unsigned int hsiccon : 1;
        unsigned int invselhsic : 1;
    } reg;
} SOC_USBOTG_GLPMCFG_UNION;
#endif
#define SOC_USBOTG_GLPMCFG_lpmcap_START (0)
#define SOC_USBOTG_GLPMCFG_lpmcap_END (0)
#define SOC_USBOTG_GLPMCFG_appl1res_START (1)
#define SOC_USBOTG_GLPMCFG_appl1res_END (1)
#define SOC_USBOTG_GLPMCFG_hird_START (2)
#define SOC_USBOTG_GLPMCFG_hird_END (5)
#define SOC_USBOTG_GLPMCFG_bremotewake_START (6)
#define SOC_USBOTG_GLPMCFG_bremotewake_END (6)
#define SOC_USBOTG_GLPMCFG_enblslpm_START (7)
#define SOC_USBOTG_GLPMCFG_enblslpm_END (7)
#define SOC_USBOTG_GLPMCFG_hird_thres_START (8)
#define SOC_USBOTG_GLPMCFG_hird_thres_END (12)
#define SOC_USBOTG_GLPMCFG_corel1res_START (13)
#define SOC_USBOTG_GLPMCFG_corel1res_END (14)
#define SOC_USBOTG_GLPMCFG_slpsts_START (15)
#define SOC_USBOTG_GLPMCFG_slpsts_END (15)
#define SOC_USBOTG_GLPMCFG_l1resumeok_START (16)
#define SOC_USBOTG_GLPMCFG_l1resumeok_END (16)
#define SOC_USBOTG_GLPMCFG_lpm_chnl_index_START (17)
#define SOC_USBOTG_GLPMCFG_lpm_chnl_index_END (20)
#define SOC_USBOTG_GLPMCFG_lpm_retry_cnt_START (21)
#define SOC_USBOTG_GLPMCFG_lpm_retry_cnt_END (23)
#define SOC_USBOTG_GLPMCFG_sndlpm_START (24)
#define SOC_USBOTG_GLPMCFG_sndlpm_END (24)
#define SOC_USBOTG_GLPMCFG_lpm_retrycnt_sts_START (25)
#define SOC_USBOTG_GLPMCFG_lpm_retrycnt_sts_END (27)
#define SOC_USBOTG_GLPMCFG_enbesl_START (28)
#define SOC_USBOTG_GLPMCFG_enbesl_END (28)
#define SOC_USBOTG_GLPMCFG_rstrslpsts_START (29)
#define SOC_USBOTG_GLPMCFG_rstrslpsts_END (29)
#define SOC_USBOTG_GLPMCFG_hsiccon_START (30)
#define SOC_USBOTG_GLPMCFG_hsiccon_END (30)
#define SOC_USBOTG_GLPMCFG_invselhsic_START (31)
#define SOC_USBOTG_GLPMCFG_invselhsic_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmuintsel : 1;
        unsigned int pmuactv : 1;
        unsigned int restore : 1;
        unsigned int pwrdnclmp : 1;
        unsigned int pwrdnrst_n : 1;
        unsigned int pwrdnswtch : 1;
        unsigned int vbusoff : 1;
        unsigned int lnstschng : 1;
        unsigned int lnstschngmsk : 1;
        unsigned int resetdetected : 1;
        unsigned int resetdetmsk : 1;
        unsigned int disconnectdetect : 1;
        unsigned int disconnectdetectmsk : 1;
        unsigned int connectdet : 1;
        unsigned int conndetmsk : 1;
        unsigned int srpdetect : 1;
        unsigned int srpdetectmsk : 1;
        unsigned int stschngint : 1;
        unsigned int stschngmsk : 1;
        unsigned int linestate : 2;
        unsigned int iddig : 1;
        unsigned int bsessvld : 1;
        unsigned int adpint : 1;
        unsigned int multvalidbc : 5;
        unsigned int reserved : 3;
    } reg;
} SOC_USBOTG_GPWRDN_UNION;
#endif
#define SOC_USBOTG_GPWRDN_pmuintsel_START (0)
#define SOC_USBOTG_GPWRDN_pmuintsel_END (0)
#define SOC_USBOTG_GPWRDN_pmuactv_START (1)
#define SOC_USBOTG_GPWRDN_pmuactv_END (1)
#define SOC_USBOTG_GPWRDN_restore_START (2)
#define SOC_USBOTG_GPWRDN_restore_END (2)
#define SOC_USBOTG_GPWRDN_pwrdnclmp_START (3)
#define SOC_USBOTG_GPWRDN_pwrdnclmp_END (3)
#define SOC_USBOTG_GPWRDN_pwrdnrst_n_START (4)
#define SOC_USBOTG_GPWRDN_pwrdnrst_n_END (4)
#define SOC_USBOTG_GPWRDN_pwrdnswtch_START (5)
#define SOC_USBOTG_GPWRDN_pwrdnswtch_END (5)
#define SOC_USBOTG_GPWRDN_vbusoff_START (6)
#define SOC_USBOTG_GPWRDN_vbusoff_END (6)
#define SOC_USBOTG_GPWRDN_lnstschng_START (7)
#define SOC_USBOTG_GPWRDN_lnstschng_END (7)
#define SOC_USBOTG_GPWRDN_lnstschngmsk_START (8)
#define SOC_USBOTG_GPWRDN_lnstschngmsk_END (8)
#define SOC_USBOTG_GPWRDN_resetdetected_START (9)
#define SOC_USBOTG_GPWRDN_resetdetected_END (9)
#define SOC_USBOTG_GPWRDN_resetdetmsk_START (10)
#define SOC_USBOTG_GPWRDN_resetdetmsk_END (10)
#define SOC_USBOTG_GPWRDN_disconnectdetect_START (11)
#define SOC_USBOTG_GPWRDN_disconnectdetect_END (11)
#define SOC_USBOTG_GPWRDN_disconnectdetectmsk_START (12)
#define SOC_USBOTG_GPWRDN_disconnectdetectmsk_END (12)
#define SOC_USBOTG_GPWRDN_connectdet_START (13)
#define SOC_USBOTG_GPWRDN_connectdet_END (13)
#define SOC_USBOTG_GPWRDN_conndetmsk_START (14)
#define SOC_USBOTG_GPWRDN_conndetmsk_END (14)
#define SOC_USBOTG_GPWRDN_srpdetect_START (15)
#define SOC_USBOTG_GPWRDN_srpdetect_END (15)
#define SOC_USBOTG_GPWRDN_srpdetectmsk_START (16)
#define SOC_USBOTG_GPWRDN_srpdetectmsk_END (16)
#define SOC_USBOTG_GPWRDN_stschngint_START (17)
#define SOC_USBOTG_GPWRDN_stschngint_END (17)
#define SOC_USBOTG_GPWRDN_stschngmsk_START (18)
#define SOC_USBOTG_GPWRDN_stschngmsk_END (18)
#define SOC_USBOTG_GPWRDN_linestate_START (19)
#define SOC_USBOTG_GPWRDN_linestate_END (20)
#define SOC_USBOTG_GPWRDN_iddig_START (21)
#define SOC_USBOTG_GPWRDN_iddig_END (21)
#define SOC_USBOTG_GPWRDN_bsessvld_START (22)
#define SOC_USBOTG_GPWRDN_bsessvld_END (22)
#define SOC_USBOTG_GPWRDN_adpint_START (23)
#define SOC_USBOTG_GPWRDN_adpint_END (23)
#define SOC_USBOTG_GPWRDN_multvalidbc_START (24)
#define SOC_USBOTG_GPWRDN_multvalidbc_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gdfifocfg : 16;
        unsigned int epinfobaseaddr : 16;
    } reg;
} SOC_USBOTG_GDFIFOCFG_UNION;
#endif
#define SOC_USBOTG_GDFIFOCFG_gdfifocfg_START (0)
#define SOC_USBOTG_GDFIFOCFG_gdfifocfg_END (15)
#define SOC_USBOTG_GDFIFOCFG_epinfobaseaddr_START (16)
#define SOC_USBOTG_GDFIFOCFG_epinfobaseaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prbdschng : 2;
        unsigned int prbdelta : 2;
        unsigned int prbper : 2;
        unsigned int rtim : 11;
        unsigned int enaprb : 1;
        unsigned int enasns : 1;
        unsigned int adpres : 1;
        unsigned int adpen : 1;
        unsigned int adpprbint : 1;
        unsigned int adpsnsint : 1;
        unsigned int adptmoutint : 1;
        unsigned int adpprbintmsk : 1;
        unsigned int adpsnsintmsk : 1;
        unsigned int adptmoutmsk : 1;
        unsigned int ar : 2;
        unsigned int reserved : 3;
    } reg;
} SOC_USBOTG_GADPCTL_UNION;
#endif
#define SOC_USBOTG_GADPCTL_prbdschng_START (0)
#define SOC_USBOTG_GADPCTL_prbdschng_END (1)
#define SOC_USBOTG_GADPCTL_prbdelta_START (2)
#define SOC_USBOTG_GADPCTL_prbdelta_END (3)
#define SOC_USBOTG_GADPCTL_prbper_START (4)
#define SOC_USBOTG_GADPCTL_prbper_END (5)
#define SOC_USBOTG_GADPCTL_rtim_START (6)
#define SOC_USBOTG_GADPCTL_rtim_END (16)
#define SOC_USBOTG_GADPCTL_enaprb_START (17)
#define SOC_USBOTG_GADPCTL_enaprb_END (17)
#define SOC_USBOTG_GADPCTL_enasns_START (18)
#define SOC_USBOTG_GADPCTL_enasns_END (18)
#define SOC_USBOTG_GADPCTL_adpres_START (19)
#define SOC_USBOTG_GADPCTL_adpres_END (19)
#define SOC_USBOTG_GADPCTL_adpen_START (20)
#define SOC_USBOTG_GADPCTL_adpen_END (20)
#define SOC_USBOTG_GADPCTL_adpprbint_START (21)
#define SOC_USBOTG_GADPCTL_adpprbint_END (21)
#define SOC_USBOTG_GADPCTL_adpsnsint_START (22)
#define SOC_USBOTG_GADPCTL_adpsnsint_END (22)
#define SOC_USBOTG_GADPCTL_adptmoutint_START (23)
#define SOC_USBOTG_GADPCTL_adptmoutint_END (23)
#define SOC_USBOTG_GADPCTL_adpprbintmsk_START (24)
#define SOC_USBOTG_GADPCTL_adpprbintmsk_END (24)
#define SOC_USBOTG_GADPCTL_adpsnsintmsk_START (25)
#define SOC_USBOTG_GADPCTL_adpsnsintmsk_END (25)
#define SOC_USBOTG_GADPCTL_adptmoutmsk_START (26)
#define SOC_USBOTG_GADPCTL_adptmoutmsk_END (26)
#define SOC_USBOTG_GADPCTL_ar_START (27)
#define SOC_USBOTG_GADPCTL_ar_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ptxfstaddr : 16;
        unsigned int ptxfsize : 16;
    } reg;
} SOC_USBOTG_HPTXFSIZ_UNION;
#endif
#define SOC_USBOTG_HPTXFSIZ_ptxfstaddr_START (0)
#define SOC_USBOTG_HPTXFSIZ_ptxfstaddr_END (15)
#define SOC_USBOTG_HPTXFSIZ_ptxfsize_START (16)
#define SOC_USBOTG_HPTXFSIZ_ptxfsize_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF1_UNION;
#endif
#define SOC_USBOTG_DIEPTXF1_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF1_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF1_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF1_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF2_UNION;
#endif
#define SOC_USBOTG_DIEPTXF2_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF2_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF2_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF2_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF3_UNION;
#endif
#define SOC_USBOTG_DIEPTXF3_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF3_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF3_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF3_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF4_UNION;
#endif
#define SOC_USBOTG_DIEPTXF4_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF4_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF4_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF4_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF5_UNION;
#endif
#define SOC_USBOTG_DIEPTXF5_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF5_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF5_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF5_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF6_UNION;
#endif
#define SOC_USBOTG_DIEPTXF6_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF6_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF6_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF6_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF7_UNION;
#endif
#define SOC_USBOTG_DIEPTXF7_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF7_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF7_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF7_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF8_UNION;
#endif
#define SOC_USBOTG_DIEPTXF8_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF8_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF8_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF8_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF9_UNION;
#endif
#define SOC_USBOTG_DIEPTXF9_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF9_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF9_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF9_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF10_UNION;
#endif
#define SOC_USBOTG_DIEPTXF10_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF10_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF10_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF10_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF11_UNION;
#endif
#define SOC_USBOTG_DIEPTXF11_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF11_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF11_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF11_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF12_UNION;
#endif
#define SOC_USBOTG_DIEPTXF12_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF12_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF12_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF12_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF13_UNION;
#endif
#define SOC_USBOTG_DIEPTXF13_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF13_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF13_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF13_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF14_UNION;
#endif
#define SOC_USBOTG_DIEPTXF14_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF14_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF14_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF14_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepntxfstaddr : 16;
        unsigned int inepntxfdep : 16;
    } reg;
} SOC_USBOTG_DIEPTXF15_UNION;
#endif
#define SOC_USBOTG_DIEPTXF15_inepntxfstaddr_START (0)
#define SOC_USBOTG_DIEPTXF15_inepntxfstaddr_END (15)
#define SOC_USBOTG_DIEPTXF15_inepntxfdep_START (16)
#define SOC_USBOTG_DIEPTXF15_inepntxfdep_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int fslspclksel : 2;
        unsigned int fslssupp : 1;
        unsigned int reserved_0 : 4;
        unsigned int ena32khzs : 1;
        unsigned int resvalid : 8;
        unsigned int reserved_1 : 7;
        unsigned int descdma : 1;
        unsigned int frlisten : 2;
        unsigned int perschedena : 1;
        unsigned int resered : 4;
        unsigned int modechtimen : 1;
    } reg;
} SOC_USBOTG_HCFG_UNION;
#endif
#define SOC_USBOTG_HCFG_fslspclksel_START (0)
#define SOC_USBOTG_HCFG_fslspclksel_END (1)
#define SOC_USBOTG_HCFG_fslssupp_START (2)
#define SOC_USBOTG_HCFG_fslssupp_END (2)
#define SOC_USBOTG_HCFG_ena32khzs_START (7)
#define SOC_USBOTG_HCFG_ena32khzs_END (7)
#define SOC_USBOTG_HCFG_resvalid_START (8)
#define SOC_USBOTG_HCFG_resvalid_END (15)
#define SOC_USBOTG_HCFG_descdma_START (23)
#define SOC_USBOTG_HCFG_descdma_END (23)
#define SOC_USBOTG_HCFG_frlisten_START (24)
#define SOC_USBOTG_HCFG_frlisten_END (25)
#define SOC_USBOTG_HCFG_perschedena_START (26)
#define SOC_USBOTG_HCFG_perschedena_END (26)
#define SOC_USBOTG_HCFG_resered_START (27)
#define SOC_USBOTG_HCFG_resered_END (30)
#define SOC_USBOTG_HCFG_modechtimen_START (31)
#define SOC_USBOTG_HCFG_modechtimen_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frint : 16;
        unsigned int hfirrldctrl : 1;
        unsigned int reserved : 15;
    } reg;
} SOC_USBOTG_HFIR_UNION;
#endif
#define SOC_USBOTG_HFIR_frint_START (0)
#define SOC_USBOTG_HFIR_frint_END (15)
#define SOC_USBOTG_HFIR_hfirrldctrl_START (16)
#define SOC_USBOTG_HFIR_hfirrldctrl_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int frnum : 16;
        unsigned int frrem : 16;
    } reg;
} SOC_USBOTG_HFNUM_UNION;
#endif
#define SOC_USBOTG_HFNUM_frnum_START (0)
#define SOC_USBOTG_HFNUM_frnum_END (15)
#define SOC_USBOTG_HFNUM_frrem_START (16)
#define SOC_USBOTG_HFNUM_frrem_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ptxspcavail : 16;
        unsigned int ptxqspcavail : 8;
        unsigned int ptxqtop : 8;
    } reg;
} SOC_USBOTG_HPTXSTS_UNION;
#endif
#define SOC_USBOTG_HPTXSTS_ptxspcavail_START (0)
#define SOC_USBOTG_HPTXSTS_ptxspcavail_END (15)
#define SOC_USBOTG_HPTXSTS_ptxqspcavail_START (16)
#define SOC_USBOTG_HPTXSTS_ptxqspcavail_END (23)
#define SOC_USBOTG_HPTXSTS_ptxqtop_START (24)
#define SOC_USBOTG_HPTXSTS_ptxqtop_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int haint : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_HAINT_UNION;
#endif
#define SOC_USBOTG_HAINT_haint_START (0)
#define SOC_USBOTG_HAINT_haint_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int haintmsk : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_HAINTMSK_UNION;
#endif
#define SOC_USBOTG_HAINTMSK_haintmsk_START (0)
#define SOC_USBOTG_HAINTMSK_haintmsk_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hflbaddr : 32;
    } reg;
} SOC_USBOTG_HFLBADDR_UNION;
#endif
#define SOC_USBOTG_HFLBADDR_hflbaddr_START (0)
#define SOC_USBOTG_HFLBADDR_hflbaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prtconnsts : 1;
        unsigned int prtconndet : 1;
        unsigned int prtena : 1;
        unsigned int prtenchng : 1;
        unsigned int prtovrcurract : 1;
        unsigned int prtovrcurrchng : 1;
        unsigned int prtres : 1;
        unsigned int prtsusp : 1;
        unsigned int prtrst : 1;
        unsigned int reserved_0 : 1;
        unsigned int prtlnsts : 2;
        unsigned int prtpwr : 1;
        unsigned int prttstctl : 4;
        unsigned int prtspd : 2;
        unsigned int reserved_1 : 13;
    } reg;
} SOC_USBOTG_HPRT_UNION;
#endif
#define SOC_USBOTG_HPRT_prtconnsts_START (0)
#define SOC_USBOTG_HPRT_prtconnsts_END (0)
#define SOC_USBOTG_HPRT_prtconndet_START (1)
#define SOC_USBOTG_HPRT_prtconndet_END (1)
#define SOC_USBOTG_HPRT_prtena_START (2)
#define SOC_USBOTG_HPRT_prtena_END (2)
#define SOC_USBOTG_HPRT_prtenchng_START (3)
#define SOC_USBOTG_HPRT_prtenchng_END (3)
#define SOC_USBOTG_HPRT_prtovrcurract_START (4)
#define SOC_USBOTG_HPRT_prtovrcurract_END (4)
#define SOC_USBOTG_HPRT_prtovrcurrchng_START (5)
#define SOC_USBOTG_HPRT_prtovrcurrchng_END (5)
#define SOC_USBOTG_HPRT_prtres_START (6)
#define SOC_USBOTG_HPRT_prtres_END (6)
#define SOC_USBOTG_HPRT_prtsusp_START (7)
#define SOC_USBOTG_HPRT_prtsusp_END (7)
#define SOC_USBOTG_HPRT_prtrst_START (8)
#define SOC_USBOTG_HPRT_prtrst_END (8)
#define SOC_USBOTG_HPRT_prtlnsts_START (10)
#define SOC_USBOTG_HPRT_prtlnsts_END (11)
#define SOC_USBOTG_HPRT_prtpwr_START (12)
#define SOC_USBOTG_HPRT_prtpwr_END (12)
#define SOC_USBOTG_HPRT_prttstctl_START (13)
#define SOC_USBOTG_HPRT_prttstctl_END (16)
#define SOC_USBOTG_HPRT_prtspd_START (17)
#define SOC_USBOTG_HPRT_prtspd_END (18)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mps : 11;
        unsigned int epnum : 4;
        unsigned int epdir : 1;
        unsigned int reserved : 1;
        unsigned int lspddev : 1;
        unsigned int eptype : 2;
        unsigned int mc_ec : 2;
        unsigned int devaddr : 7;
        unsigned int oddfrm : 1;
        unsigned int chdis : 1;
        unsigned int chena : 1;
    } reg;
} SOC_USBOTG_HCCHARP_UNION;
#endif
#define SOC_USBOTG_HCCHARP_mps_START (0)
#define SOC_USBOTG_HCCHARP_mps_END (10)
#define SOC_USBOTG_HCCHARP_epnum_START (11)
#define SOC_USBOTG_HCCHARP_epnum_END (14)
#define SOC_USBOTG_HCCHARP_epdir_START (15)
#define SOC_USBOTG_HCCHARP_epdir_END (15)
#define SOC_USBOTG_HCCHARP_lspddev_START (17)
#define SOC_USBOTG_HCCHARP_lspddev_END (17)
#define SOC_USBOTG_HCCHARP_eptype_START (18)
#define SOC_USBOTG_HCCHARP_eptype_END (19)
#define SOC_USBOTG_HCCHARP_mc_ec_START (20)
#define SOC_USBOTG_HCCHARP_mc_ec_END (21)
#define SOC_USBOTG_HCCHARP_devaddr_START (22)
#define SOC_USBOTG_HCCHARP_devaddr_END (28)
#define SOC_USBOTG_HCCHARP_oddfrm_START (29)
#define SOC_USBOTG_HCCHARP_oddfrm_END (29)
#define SOC_USBOTG_HCCHARP_chdis_START (30)
#define SOC_USBOTG_HCCHARP_chdis_END (30)
#define SOC_USBOTG_HCCHARP_chena_START (31)
#define SOC_USBOTG_HCCHARP_chena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int prtaddr : 7;
        unsigned int hubaddr : 7;
        unsigned int xactpos : 2;
        unsigned int compsplt : 1;
        unsigned int reserved : 14;
        unsigned int spltena : 1;
    } reg;
} SOC_USBOTG_HCSPLTP_UNION;
#endif
#define SOC_USBOTG_HCSPLTP_prtaddr_START (0)
#define SOC_USBOTG_HCSPLTP_prtaddr_END (6)
#define SOC_USBOTG_HCSPLTP_hubaddr_START (7)
#define SOC_USBOTG_HCSPLTP_hubaddr_END (13)
#define SOC_USBOTG_HCSPLTP_xactpos_START (14)
#define SOC_USBOTG_HCSPLTP_xactpos_END (15)
#define SOC_USBOTG_HCSPLTP_compsplt_START (16)
#define SOC_USBOTG_HCSPLTP_compsplt_END (16)
#define SOC_USBOTG_HCSPLTP_spltena_START (31)
#define SOC_USBOTG_HCSPLTP_spltena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercompl : 1;
        unsigned int chhlted : 1;
        unsigned int ahberr : 1;
        unsigned int stall : 1;
        unsigned int nak : 1;
        unsigned int ack : 1;
        unsigned int nyet : 1;
        unsigned int xacterr : 1;
        unsigned int bblerr : 1;
        unsigned int frmovrun : 1;
        unsigned int datatglerr : 1;
        unsigned int bnaintr : 1;
        unsigned int xcs_xact_err : 1;
        unsigned int desc_lst_rollintr : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_USBOTG_HCINTP_UNION;
#endif
#define SOC_USBOTG_HCINTP_xfercompl_START (0)
#define SOC_USBOTG_HCINTP_xfercompl_END (0)
#define SOC_USBOTG_HCINTP_chhlted_START (1)
#define SOC_USBOTG_HCINTP_chhlted_END (1)
#define SOC_USBOTG_HCINTP_ahberr_START (2)
#define SOC_USBOTG_HCINTP_ahberr_END (2)
#define SOC_USBOTG_HCINTP_stall_START (3)
#define SOC_USBOTG_HCINTP_stall_END (3)
#define SOC_USBOTG_HCINTP_nak_START (4)
#define SOC_USBOTG_HCINTP_nak_END (4)
#define SOC_USBOTG_HCINTP_ack_START (5)
#define SOC_USBOTG_HCINTP_ack_END (5)
#define SOC_USBOTG_HCINTP_nyet_START (6)
#define SOC_USBOTG_HCINTP_nyet_END (6)
#define SOC_USBOTG_HCINTP_xacterr_START (7)
#define SOC_USBOTG_HCINTP_xacterr_END (7)
#define SOC_USBOTG_HCINTP_bblerr_START (8)
#define SOC_USBOTG_HCINTP_bblerr_END (8)
#define SOC_USBOTG_HCINTP_frmovrun_START (9)
#define SOC_USBOTG_HCINTP_frmovrun_END (9)
#define SOC_USBOTG_HCINTP_datatglerr_START (10)
#define SOC_USBOTG_HCINTP_datatglerr_END (10)
#define SOC_USBOTG_HCINTP_bnaintr_START (11)
#define SOC_USBOTG_HCINTP_bnaintr_END (11)
#define SOC_USBOTG_HCINTP_xcs_xact_err_START (12)
#define SOC_USBOTG_HCINTP_xcs_xact_err_END (12)
#define SOC_USBOTG_HCINTP_desc_lst_rollintr_START (13)
#define SOC_USBOTG_HCINTP_desc_lst_rollintr_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercompl : 1;
        unsigned int chhlted : 1;
        unsigned int ahberr : 1;
        unsigned int stall : 1;
        unsigned int nak : 1;
        unsigned int ack : 1;
        unsigned int nyet : 1;
        unsigned int xacterr : 1;
        unsigned int bblerr : 1;
        unsigned int frmovrun : 1;
        unsigned int datatglerr : 1;
        unsigned int bnaintr : 1;
        unsigned int xcs_xact_err : 1;
        unsigned int desc_lst_rollintr : 1;
        unsigned int reserved : 18;
    } reg;
} SOC_USBOTG_HCINTMSKP_UNION;
#endif
#define SOC_USBOTG_HCINTMSKP_xfercompl_START (0)
#define SOC_USBOTG_HCINTMSKP_xfercompl_END (0)
#define SOC_USBOTG_HCINTMSKP_chhlted_START (1)
#define SOC_USBOTG_HCINTMSKP_chhlted_END (1)
#define SOC_USBOTG_HCINTMSKP_ahberr_START (2)
#define SOC_USBOTG_HCINTMSKP_ahberr_END (2)
#define SOC_USBOTG_HCINTMSKP_stall_START (3)
#define SOC_USBOTG_HCINTMSKP_stall_END (3)
#define SOC_USBOTG_HCINTMSKP_nak_START (4)
#define SOC_USBOTG_HCINTMSKP_nak_END (4)
#define SOC_USBOTG_HCINTMSKP_ack_START (5)
#define SOC_USBOTG_HCINTMSKP_ack_END (5)
#define SOC_USBOTG_HCINTMSKP_nyet_START (6)
#define SOC_USBOTG_HCINTMSKP_nyet_END (6)
#define SOC_USBOTG_HCINTMSKP_xacterr_START (7)
#define SOC_USBOTG_HCINTMSKP_xacterr_END (7)
#define SOC_USBOTG_HCINTMSKP_bblerr_START (8)
#define SOC_USBOTG_HCINTMSKP_bblerr_END (8)
#define SOC_USBOTG_HCINTMSKP_frmovrun_START (9)
#define SOC_USBOTG_HCINTMSKP_frmovrun_END (9)
#define SOC_USBOTG_HCINTMSKP_datatglerr_START (10)
#define SOC_USBOTG_HCINTMSKP_datatglerr_END (10)
#define SOC_USBOTG_HCINTMSKP_bnaintr_START (11)
#define SOC_USBOTG_HCINTMSKP_bnaintr_END (11)
#define SOC_USBOTG_HCINTMSKP_xcs_xact_err_START (12)
#define SOC_USBOTG_HCINTMSKP_xcs_xact_err_END (12)
#define SOC_USBOTG_HCINTMSKP_desc_lst_rollintr_START (13)
#define SOC_USBOTG_HCINTMSKP_desc_lst_rollintr_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sched_info : 8;
        unsigned int ntd : 8;
        unsigned int reserved : 13;
        unsigned int pid : 2;
        unsigned int dopng : 1;
    } reg;
} SOC_USBOTG_HCTSIZP_UNION;
#endif
#define SOC_USBOTG_HCTSIZP_sched_info_START (0)
#define SOC_USBOTG_HCTSIZP_sched_info_END (7)
#define SOC_USBOTG_HCTSIZP_ntd_START (8)
#define SOC_USBOTG_HCTSIZP_ntd_END (15)
#define SOC_USBOTG_HCTSIZP_pid_START (29)
#define SOC_USBOTG_HCTSIZP_pid_END (30)
#define SOC_USBOTG_HCTSIZP_dopng_START (31)
#define SOC_USBOTG_HCTSIZP_dopng_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersize : 19;
        unsigned int pktcnt : 10;
        unsigned int pid : 2;
        unsigned int dopng : 1;
    } reg;
} SOC_USBOTG_HCTSIZP_NON_SG_UNION;
#endif
#define SOC_USBOTG_HCTSIZP_NON_SG_xfersize_START (0)
#define SOC_USBOTG_HCTSIZP_NON_SG_xfersize_END (18)
#define SOC_USBOTG_HCTSIZP_NON_SG_pktcnt_START (19)
#define SOC_USBOTG_HCTSIZP_NON_SG_pktcnt_END (28)
#define SOC_USBOTG_HCTSIZP_NON_SG_pid_START (29)
#define SOC_USBOTG_HCTSIZP_NON_SG_pid_END (30)
#define SOC_USBOTG_HCTSIZP_NON_SG_dopng_START (31)
#define SOC_USBOTG_HCTSIZP_NON_SG_dopng_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmaaddr : 32;
    } reg;
} SOC_USBOTG_HCDMAP_UNION;
#endif
#define SOC_USBOTG_HCDMAP_dmaaddr_START (0)
#define SOC_USBOTG_HCDMAP_dmaaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hcdma : 32;
    } reg;
} SOC_USBOTG_HCDMABP_UNION;
#endif
#define SOC_USBOTG_HCDMABP_hcdma_START (0)
#define SOC_USBOTG_HCDMABP_hcdma_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int devspd : 2;
        unsigned int nzstsouthshk : 1;
        unsigned int reserved_0 : 1;
        unsigned int devaddr : 7;
        unsigned int perfrint : 2;
        unsigned int reserved_1 : 10;
        unsigned int descdma : 1;
        unsigned int perschintvl : 2;
        unsigned int reserved_2 : 6;
    } reg;
} SOC_USBOTG_DCFG_UNION;
#endif
#define SOC_USBOTG_DCFG_devspd_START (0)
#define SOC_USBOTG_DCFG_devspd_END (1)
#define SOC_USBOTG_DCFG_nzstsouthshk_START (2)
#define SOC_USBOTG_DCFG_nzstsouthshk_END (2)
#define SOC_USBOTG_DCFG_devaddr_START (4)
#define SOC_USBOTG_DCFG_devaddr_END (10)
#define SOC_USBOTG_DCFG_perfrint_START (11)
#define SOC_USBOTG_DCFG_perfrint_END (12)
#define SOC_USBOTG_DCFG_descdma_START (23)
#define SOC_USBOTG_DCFG_descdma_END (23)
#define SOC_USBOTG_DCFG_perschintvl_START (24)
#define SOC_USBOTG_DCFG_perschintvl_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int rmtwkupsig : 1;
        unsigned int sftdiscon : 1;
        unsigned int gnpinnaksts : 1;
        unsigned int goutnaksts : 1;
        unsigned int tstctl : 3;
        unsigned int sgnpinnak : 1;
        unsigned int cgnpinnak : 1;
        unsigned int sgoutnak : 1;
        unsigned int cgoutnak : 1;
        unsigned int pwronprgdone : 1;
        unsigned int reserved_0 : 1;
        unsigned int gmc : 2;
        unsigned int ignrfrmnum : 1;
        unsigned int nakonbble : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_USBOTG_DCTL_UNION;
#endif
#define SOC_USBOTG_DCTL_rmtwkupsig_START (0)
#define SOC_USBOTG_DCTL_rmtwkupsig_END (0)
#define SOC_USBOTG_DCTL_sftdiscon_START (1)
#define SOC_USBOTG_DCTL_sftdiscon_END (1)
#define SOC_USBOTG_DCTL_gnpinnaksts_START (2)
#define SOC_USBOTG_DCTL_gnpinnaksts_END (2)
#define SOC_USBOTG_DCTL_goutnaksts_START (3)
#define SOC_USBOTG_DCTL_goutnaksts_END (3)
#define SOC_USBOTG_DCTL_tstctl_START (4)
#define SOC_USBOTG_DCTL_tstctl_END (6)
#define SOC_USBOTG_DCTL_sgnpinnak_START (7)
#define SOC_USBOTG_DCTL_sgnpinnak_END (7)
#define SOC_USBOTG_DCTL_cgnpinnak_START (8)
#define SOC_USBOTG_DCTL_cgnpinnak_END (8)
#define SOC_USBOTG_DCTL_sgoutnak_START (9)
#define SOC_USBOTG_DCTL_sgoutnak_END (9)
#define SOC_USBOTG_DCTL_cgoutnak_START (10)
#define SOC_USBOTG_DCTL_cgoutnak_END (10)
#define SOC_USBOTG_DCTL_pwronprgdone_START (11)
#define SOC_USBOTG_DCTL_pwronprgdone_END (11)
#define SOC_USBOTG_DCTL_gmc_START (13)
#define SOC_USBOTG_DCTL_gmc_END (14)
#define SOC_USBOTG_DCTL_ignrfrmnum_START (15)
#define SOC_USBOTG_DCTL_ignrfrmnum_END (15)
#define SOC_USBOTG_DCTL_nakonbble_START (16)
#define SOC_USBOTG_DCTL_nakonbble_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int suspsts : 1;
        unsigned int enumspd : 2;
        unsigned int errticerr : 1;
        unsigned int reserved_0: 4;
        unsigned int soffn : 14;
        unsigned int devlnsts : 2;
        unsigned int reserved_1: 8;
    } reg;
} SOC_USBOTG_DSTS_UNION;
#endif
#define SOC_USBOTG_DSTS_suspsts_START (0)
#define SOC_USBOTG_DSTS_suspsts_END (0)
#define SOC_USBOTG_DSTS_enumspd_START (1)
#define SOC_USBOTG_DSTS_enumspd_END (2)
#define SOC_USBOTG_DSTS_errticerr_START (3)
#define SOC_USBOTG_DSTS_errticerr_END (3)
#define SOC_USBOTG_DSTS_soffn_START (8)
#define SOC_USBOTG_DSTS_soffn_END (21)
#define SOC_USBOTG_DSTS_devlnsts_START (22)
#define SOC_USBOTG_DSTS_devlnsts_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercomplmsk : 1;
        unsigned int epdisbldmsk : 1;
        unsigned int ahberrmsk : 1;
        unsigned int timeoutmsk : 1;
        unsigned int intkntxfempmsk : 1;
        unsigned int reserved_0 : 1;
        unsigned int inepnakeffmsk : 1;
        unsigned int reserved_1 : 1;
        unsigned int txfifoundrnmsk : 1;
        unsigned int bnainintrmsk : 1;
        unsigned int reserved_2 : 3;
        unsigned int nakmsk : 1;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_USBOTG_DIEPMSK_UNION;
#endif
#define SOC_USBOTG_DIEPMSK_xfercomplmsk_START (0)
#define SOC_USBOTG_DIEPMSK_xfercomplmsk_END (0)
#define SOC_USBOTG_DIEPMSK_epdisbldmsk_START (1)
#define SOC_USBOTG_DIEPMSK_epdisbldmsk_END (1)
#define SOC_USBOTG_DIEPMSK_ahberrmsk_START (2)
#define SOC_USBOTG_DIEPMSK_ahberrmsk_END (2)
#define SOC_USBOTG_DIEPMSK_timeoutmsk_START (3)
#define SOC_USBOTG_DIEPMSK_timeoutmsk_END (3)
#define SOC_USBOTG_DIEPMSK_intkntxfempmsk_START (4)
#define SOC_USBOTG_DIEPMSK_intkntxfempmsk_END (4)
#define SOC_USBOTG_DIEPMSK_inepnakeffmsk_START (6)
#define SOC_USBOTG_DIEPMSK_inepnakeffmsk_END (6)
#define SOC_USBOTG_DIEPMSK_txfifoundrnmsk_START (8)
#define SOC_USBOTG_DIEPMSK_txfifoundrnmsk_END (8)
#define SOC_USBOTG_DIEPMSK_bnainintrmsk_START (9)
#define SOC_USBOTG_DIEPMSK_bnainintrmsk_END (9)
#define SOC_USBOTG_DIEPMSK_nakmsk_START (13)
#define SOC_USBOTG_DIEPMSK_nakmsk_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercomplmsk : 1;
        unsigned int epdisbldmsk : 1;
        unsigned int ahberrmsk : 1;
        unsigned int setupmsk : 1;
        unsigned int outtknepdismsk : 1;
        unsigned int reserved_0 : 1;
        unsigned int back2backsetup : 1;
        unsigned int reserved_1 : 1;
        unsigned int outpkterrmsk : 1;
        unsigned int bnaoutintrmsk : 1;
        unsigned int reserved_2 : 2;
        unsigned int bbleerrmsk : 1;
        unsigned int nakmsk : 1;
        unsigned int nyetmsk : 1;
        unsigned int reserved_3 : 17;
    } reg;
} SOC_USBOTG_DOEPMSK_UNION;
#endif
#define SOC_USBOTG_DOEPMSK_xfercomplmsk_START (0)
#define SOC_USBOTG_DOEPMSK_xfercomplmsk_END (0)
#define SOC_USBOTG_DOEPMSK_epdisbldmsk_START (1)
#define SOC_USBOTG_DOEPMSK_epdisbldmsk_END (1)
#define SOC_USBOTG_DOEPMSK_ahberrmsk_START (2)
#define SOC_USBOTG_DOEPMSK_ahberrmsk_END (2)
#define SOC_USBOTG_DOEPMSK_setupmsk_START (3)
#define SOC_USBOTG_DOEPMSK_setupmsk_END (3)
#define SOC_USBOTG_DOEPMSK_outtknepdismsk_START (4)
#define SOC_USBOTG_DOEPMSK_outtknepdismsk_END (4)
#define SOC_USBOTG_DOEPMSK_back2backsetup_START (6)
#define SOC_USBOTG_DOEPMSK_back2backsetup_END (6)
#define SOC_USBOTG_DOEPMSK_outpkterrmsk_START (8)
#define SOC_USBOTG_DOEPMSK_outpkterrmsk_END (8)
#define SOC_USBOTG_DOEPMSK_bnaoutintrmsk_START (9)
#define SOC_USBOTG_DOEPMSK_bnaoutintrmsk_END (9)
#define SOC_USBOTG_DOEPMSK_bbleerrmsk_START (12)
#define SOC_USBOTG_DOEPMSK_bbleerrmsk_END (12)
#define SOC_USBOTG_DOEPMSK_nakmsk_START (13)
#define SOC_USBOTG_DOEPMSK_nakmsk_END (13)
#define SOC_USBOTG_DOEPMSK_nyetmsk_START (14)
#define SOC_USBOTG_DOEPMSK_nyetmsk_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepint : 16;
        unsigned int outepint : 16;
    } reg;
} SOC_USBOTG_DAINT_UNION;
#endif
#define SOC_USBOTG_DAINT_inepint_START (0)
#define SOC_USBOTG_DAINT_inepint_END (15)
#define SOC_USBOTG_DAINT_outepint_START (16)
#define SOC_USBOTG_DAINT_outepint_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int inepmsk : 16;
        unsigned int outepmsk : 16;
    } reg;
} SOC_USBOTG_DAINTMSK_UNION;
#endif
#define SOC_USBOTG_DAINTMSK_inepmsk_START (0)
#define SOC_USBOTG_DAINTMSK_inepmsk_END (15)
#define SOC_USBOTG_DAINTMSK_outepmsk_START (16)
#define SOC_USBOTG_DAINTMSK_outepmsk_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dvbusdis : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_DVBUSDIS_UNION;
#endif
#define SOC_USBOTG_DVBUSDIS_dvbusdis_START (0)
#define SOC_USBOTG_DVBUSDIS_dvbusdis_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dvbuspulse : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_DVBUSPULSE_UNION;
#endif
#define SOC_USBOTG_DVBUSPULSE_dvbuspulse_START (0)
#define SOC_USBOTG_DVBUSPULSE_dvbuspulse_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int nonisothren : 1;
        unsigned int isothren : 1;
        unsigned int txthrlen : 9;
        unsigned int ahbthrratio : 2;
        unsigned int reserved_0 : 3;
        unsigned int rxthren : 1;
        unsigned int rxthrlen : 9;
        unsigned int reserved_1 : 1;
        unsigned int arbpken : 1;
        unsigned int reserved_2 : 4;
    } reg;
} SOC_USBOTG_DTHRCTL_UNION;
#endif
#define SOC_USBOTG_DTHRCTL_nonisothren_START (0)
#define SOC_USBOTG_DTHRCTL_nonisothren_END (0)
#define SOC_USBOTG_DTHRCTL_isothren_START (1)
#define SOC_USBOTG_DTHRCTL_isothren_END (1)
#define SOC_USBOTG_DTHRCTL_txthrlen_START (2)
#define SOC_USBOTG_DTHRCTL_txthrlen_END (10)
#define SOC_USBOTG_DTHRCTL_ahbthrratio_START (11)
#define SOC_USBOTG_DTHRCTL_ahbthrratio_END (12)
#define SOC_USBOTG_DTHRCTL_rxthren_START (16)
#define SOC_USBOTG_DTHRCTL_rxthren_END (16)
#define SOC_USBOTG_DTHRCTL_rxthrlen_START (17)
#define SOC_USBOTG_DTHRCTL_rxthrlen_END (25)
#define SOC_USBOTG_DTHRCTL_arbpken_START (27)
#define SOC_USBOTG_DTHRCTL_arbpken_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ineptxfempmsk : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_DIEPEMPMSK_UNION;
#endif
#define SOC_USBOTG_DIEPEMPMSK_ineptxfempmsk_START (0)
#define SOC_USBOTG_DIEPEMPMSK_ineptxfempmsk_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mps : 2;
        unsigned int reserved_0: 13;
        unsigned int usbactep : 1;
        unsigned int reserved_1: 1;
        unsigned int naksts : 1;
        unsigned int eptype : 2;
        unsigned int reserved_2: 1;
        unsigned int stall : 1;
        unsigned int txfnum : 4;
        unsigned int cnak : 1;
        unsigned int snak : 1;
        unsigned int reserved_3: 2;
        unsigned int epdis : 1;
        unsigned int epena : 1;
    } reg;
} SOC_USBOTG_DIEPCTL0_UNION;
#endif
#define SOC_USBOTG_DIEPCTL0_mps_START (0)
#define SOC_USBOTG_DIEPCTL0_mps_END (1)
#define SOC_USBOTG_DIEPCTL0_usbactep_START (15)
#define SOC_USBOTG_DIEPCTL0_usbactep_END (15)
#define SOC_USBOTG_DIEPCTL0_naksts_START (17)
#define SOC_USBOTG_DIEPCTL0_naksts_END (17)
#define SOC_USBOTG_DIEPCTL0_eptype_START (18)
#define SOC_USBOTG_DIEPCTL0_eptype_END (19)
#define SOC_USBOTG_DIEPCTL0_stall_START (21)
#define SOC_USBOTG_DIEPCTL0_stall_END (21)
#define SOC_USBOTG_DIEPCTL0_txfnum_START (22)
#define SOC_USBOTG_DIEPCTL0_txfnum_END (25)
#define SOC_USBOTG_DIEPCTL0_cnak_START (26)
#define SOC_USBOTG_DIEPCTL0_cnak_END (26)
#define SOC_USBOTG_DIEPCTL0_snak_START (27)
#define SOC_USBOTG_DIEPCTL0_snak_END (27)
#define SOC_USBOTG_DIEPCTL0_epdis_START (30)
#define SOC_USBOTG_DIEPCTL0_epdis_END (30)
#define SOC_USBOTG_DIEPCTL0_epena_START (31)
#define SOC_USBOTG_DIEPCTL0_epena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mps : 11;
        unsigned int reserved_0: 4;
        unsigned int usbactep : 1;
        unsigned int dpid : 1;
        unsigned int naksts : 1;
        unsigned int eptype : 2;
        unsigned int reserved_1: 1;
        unsigned int stall : 1;
        unsigned int txfnum : 4;
        unsigned int cnak : 1;
        unsigned int snak : 1;
        unsigned int setd0pid : 1;
        unsigned int setd1pid : 1;
        unsigned int epdis : 1;
        unsigned int epena : 1;
    } reg;
} SOC_USBOTG_DIEPCTLN_UNION;
#endif
#define SOC_USBOTG_DIEPCTLN_mps_START (0)
#define SOC_USBOTG_DIEPCTLN_mps_END (10)
#define SOC_USBOTG_DIEPCTLN_usbactep_START (15)
#define SOC_USBOTG_DIEPCTLN_usbactep_END (15)
#define SOC_USBOTG_DIEPCTLN_dpid_START (16)
#define SOC_USBOTG_DIEPCTLN_dpid_END (16)
#define SOC_USBOTG_DIEPCTLN_naksts_START (17)
#define SOC_USBOTG_DIEPCTLN_naksts_END (17)
#define SOC_USBOTG_DIEPCTLN_eptype_START (18)
#define SOC_USBOTG_DIEPCTLN_eptype_END (19)
#define SOC_USBOTG_DIEPCTLN_stall_START (21)
#define SOC_USBOTG_DIEPCTLN_stall_END (21)
#define SOC_USBOTG_DIEPCTLN_txfnum_START (22)
#define SOC_USBOTG_DIEPCTLN_txfnum_END (25)
#define SOC_USBOTG_DIEPCTLN_cnak_START (26)
#define SOC_USBOTG_DIEPCTLN_cnak_END (26)
#define SOC_USBOTG_DIEPCTLN_snak_START (27)
#define SOC_USBOTG_DIEPCTLN_snak_END (27)
#define SOC_USBOTG_DIEPCTLN_setd0pid_START (28)
#define SOC_USBOTG_DIEPCTLN_setd0pid_END (28)
#define SOC_USBOTG_DIEPCTLN_setd1pid_START (29)
#define SOC_USBOTG_DIEPCTLN_setd1pid_END (29)
#define SOC_USBOTG_DIEPCTLN_epdis_START (30)
#define SOC_USBOTG_DIEPCTLN_epdis_END (30)
#define SOC_USBOTG_DIEPCTLN_epena_START (31)
#define SOC_USBOTG_DIEPCTLN_epena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercompl : 1;
        unsigned int epdisbld : 1;
        unsigned int ahberr : 1;
        unsigned int reserved_0 : 1;
        unsigned int intkntxfemp : 1;
        unsigned int reserved_1 : 1;
        unsigned int inepnakeff : 1;
        unsigned int txfemp : 1;
        unsigned int txfifoundrn : 1;
        unsigned int bnaintr : 1;
        unsigned int reserved_2 : 2;
        unsigned int bbleerr : 1;
        unsigned int nakintrpt : 1;
        unsigned int reserved_3 : 18;
    } reg;
} SOC_USBOTG_DIEPINTM_UNION;
#endif
#define SOC_USBOTG_DIEPINTM_xfercompl_START (0)
#define SOC_USBOTG_DIEPINTM_xfercompl_END (0)
#define SOC_USBOTG_DIEPINTM_epdisbld_START (1)
#define SOC_USBOTG_DIEPINTM_epdisbld_END (1)
#define SOC_USBOTG_DIEPINTM_ahberr_START (2)
#define SOC_USBOTG_DIEPINTM_ahberr_END (2)
#define SOC_USBOTG_DIEPINTM_intkntxfemp_START (4)
#define SOC_USBOTG_DIEPINTM_intkntxfemp_END (4)
#define SOC_USBOTG_DIEPINTM_inepnakeff_START (6)
#define SOC_USBOTG_DIEPINTM_inepnakeff_END (6)
#define SOC_USBOTG_DIEPINTM_txfemp_START (7)
#define SOC_USBOTG_DIEPINTM_txfemp_END (7)
#define SOC_USBOTG_DIEPINTM_txfifoundrn_START (8)
#define SOC_USBOTG_DIEPINTM_txfifoundrn_END (8)
#define SOC_USBOTG_DIEPINTM_bnaintr_START (9)
#define SOC_USBOTG_DIEPINTM_bnaintr_END (9)
#define SOC_USBOTG_DIEPINTM_bbleerr_START (12)
#define SOC_USBOTG_DIEPINTM_bbleerr_END (12)
#define SOC_USBOTG_DIEPINTM_nakintrpt_START (13)
#define SOC_USBOTG_DIEPINTM_nakintrpt_END (13)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersize : 7;
        unsigned int reserved_0: 12;
        unsigned int pktcnt : 2;
        unsigned int reserved_1: 11;
    } reg;
} SOC_USBOTG_DIEPTSIZ0_UNION;
#endif
#define SOC_USBOTG_DIEPTSIZ0_xfersize_START (0)
#define SOC_USBOTG_DIEPTSIZ0_xfersize_END (6)
#define SOC_USBOTG_DIEPTSIZ0_pktcnt_START (19)
#define SOC_USBOTG_DIEPTSIZ0_pktcnt_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersize : 19;
        unsigned int pktcnt : 10;
        unsigned int mc : 2;
        unsigned int reserved : 1;
    } reg;
} SOC_USBOTG_DIEPTSIZN_UNION;
#endif
#define SOC_USBOTG_DIEPTSIZN_xfersize_START (0)
#define SOC_USBOTG_DIEPTSIZN_xfersize_END (18)
#define SOC_USBOTG_DIEPTSIZN_pktcnt_START (19)
#define SOC_USBOTG_DIEPTSIZN_pktcnt_END (28)
#define SOC_USBOTG_DIEPTSIZN_mc_START (29)
#define SOC_USBOTG_DIEPTSIZN_mc_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmaaddr : 32;
    } reg;
} SOC_USBOTG_DIEPDMAM_UNION;
#endif
#define SOC_USBOTG_DIEPDMAM_dmaaddr_START (0)
#define SOC_USBOTG_DIEPDMAM_dmaaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ineptxfspcavail : 16;
        unsigned int reserved : 16;
    } reg;
} SOC_USBOTG_DTXFSTSM_UNION;
#endif
#define SOC_USBOTG_DTXFSTSM_ineptxfspcavail_START (0)
#define SOC_USBOTG_DTXFSTSM_ineptxfspcavail_END (15)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmabufferaddr : 32;
    } reg;
} SOC_USBOTG_DIEPDMABN_UNION;
#endif
#define SOC_USBOTG_DIEPDMABN_dmabufferaddr_START (0)
#define SOC_USBOTG_DIEPDMABN_dmabufferaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mps : 2;
        unsigned int reserved_0: 13;
        unsigned int usbactep : 1;
        unsigned int reserved_1: 1;
        unsigned int naksts : 1;
        unsigned int eptype : 2;
        unsigned int snp : 1;
        unsigned int stall : 1;
        unsigned int txfnum : 4;
        unsigned int cnak : 1;
        unsigned int snak : 1;
        unsigned int reserved_2: 2;
        unsigned int epdis : 1;
        unsigned int epena : 1;
    } reg;
} SOC_USBOTG_DOEPCTL0_UNION;
#endif
#define SOC_USBOTG_DOEPCTL0_mps_START (0)
#define SOC_USBOTG_DOEPCTL0_mps_END (1)
#define SOC_USBOTG_DOEPCTL0_usbactep_START (15)
#define SOC_USBOTG_DOEPCTL0_usbactep_END (15)
#define SOC_USBOTG_DOEPCTL0_naksts_START (17)
#define SOC_USBOTG_DOEPCTL0_naksts_END (17)
#define SOC_USBOTG_DOEPCTL0_eptype_START (18)
#define SOC_USBOTG_DOEPCTL0_eptype_END (19)
#define SOC_USBOTG_DOEPCTL0_snp_START (20)
#define SOC_USBOTG_DOEPCTL0_snp_END (20)
#define SOC_USBOTG_DOEPCTL0_stall_START (21)
#define SOC_USBOTG_DOEPCTL0_stall_END (21)
#define SOC_USBOTG_DOEPCTL0_txfnum_START (22)
#define SOC_USBOTG_DOEPCTL0_txfnum_END (25)
#define SOC_USBOTG_DOEPCTL0_cnak_START (26)
#define SOC_USBOTG_DOEPCTL0_cnak_END (26)
#define SOC_USBOTG_DOEPCTL0_snak_START (27)
#define SOC_USBOTG_DOEPCTL0_snak_END (27)
#define SOC_USBOTG_DOEPCTL0_epdis_START (30)
#define SOC_USBOTG_DOEPCTL0_epdis_END (30)
#define SOC_USBOTG_DOEPCTL0_epena_START (31)
#define SOC_USBOTG_DOEPCTL0_epena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int mps : 11;
        unsigned int reserved : 4;
        unsigned int usbactep : 1;
        unsigned int dpid : 1;
        unsigned int naksts : 1;
        unsigned int eptype : 2;
        unsigned int snp : 1;
        unsigned int stall : 1;
        unsigned int txfnum : 4;
        unsigned int cnak : 1;
        unsigned int snak : 1;
        unsigned int setd0pid : 1;
        unsigned int setd1pid : 1;
        unsigned int epdis : 1;
        unsigned int epena : 1;
    } reg;
} SOC_USBOTG_DOEPCTLN_UNION;
#endif
#define SOC_USBOTG_DOEPCTLN_mps_START (0)
#define SOC_USBOTG_DOEPCTLN_mps_END (10)
#define SOC_USBOTG_DOEPCTLN_usbactep_START (15)
#define SOC_USBOTG_DOEPCTLN_usbactep_END (15)
#define SOC_USBOTG_DOEPCTLN_dpid_START (16)
#define SOC_USBOTG_DOEPCTLN_dpid_END (16)
#define SOC_USBOTG_DOEPCTLN_naksts_START (17)
#define SOC_USBOTG_DOEPCTLN_naksts_END (17)
#define SOC_USBOTG_DOEPCTLN_eptype_START (18)
#define SOC_USBOTG_DOEPCTLN_eptype_END (19)
#define SOC_USBOTG_DOEPCTLN_snp_START (20)
#define SOC_USBOTG_DOEPCTLN_snp_END (20)
#define SOC_USBOTG_DOEPCTLN_stall_START (21)
#define SOC_USBOTG_DOEPCTLN_stall_END (21)
#define SOC_USBOTG_DOEPCTLN_txfnum_START (22)
#define SOC_USBOTG_DOEPCTLN_txfnum_END (25)
#define SOC_USBOTG_DOEPCTLN_cnak_START (26)
#define SOC_USBOTG_DOEPCTLN_cnak_END (26)
#define SOC_USBOTG_DOEPCTLN_snak_START (27)
#define SOC_USBOTG_DOEPCTLN_snak_END (27)
#define SOC_USBOTG_DOEPCTLN_setd0pid_START (28)
#define SOC_USBOTG_DOEPCTLN_setd0pid_END (28)
#define SOC_USBOTG_DOEPCTLN_setd1pid_START (29)
#define SOC_USBOTG_DOEPCTLN_setd1pid_END (29)
#define SOC_USBOTG_DOEPCTLN_epdis_START (30)
#define SOC_USBOTG_DOEPCTLN_epdis_END (30)
#define SOC_USBOTG_DOEPCTLN_epena_START (31)
#define SOC_USBOTG_DOEPCTLN_epena_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfercompl : 1;
        unsigned int epdisbld : 1;
        unsigned int ahberr : 1;
        unsigned int reserved_0 : 1;
        unsigned int intkntxfemp : 1;
        unsigned int reserved_1 : 1;
        unsigned int inepnakeff : 1;
        unsigned int reserved_2 : 1;
        unsigned int outpkterr : 1;
        unsigned int bnaintr : 1;
        unsigned int reserved_3 : 1;
        unsigned int pktdrpsts : 1;
        unsigned int bbleerr : 1;
        unsigned int nakintrpt : 1;
        unsigned int nyet : 1;
        unsigned int reserved_4 : 17;
    } reg;
} SOC_USBOTG_DOEPINTM_UNION;
#endif
#define SOC_USBOTG_DOEPINTM_xfercompl_START (0)
#define SOC_USBOTG_DOEPINTM_xfercompl_END (0)
#define SOC_USBOTG_DOEPINTM_epdisbld_START (1)
#define SOC_USBOTG_DOEPINTM_epdisbld_END (1)
#define SOC_USBOTG_DOEPINTM_ahberr_START (2)
#define SOC_USBOTG_DOEPINTM_ahberr_END (2)
#define SOC_USBOTG_DOEPINTM_intkntxfemp_START (4)
#define SOC_USBOTG_DOEPINTM_intkntxfemp_END (4)
#define SOC_USBOTG_DOEPINTM_inepnakeff_START (6)
#define SOC_USBOTG_DOEPINTM_inepnakeff_END (6)
#define SOC_USBOTG_DOEPINTM_outpkterr_START (8)
#define SOC_USBOTG_DOEPINTM_outpkterr_END (8)
#define SOC_USBOTG_DOEPINTM_bnaintr_START (9)
#define SOC_USBOTG_DOEPINTM_bnaintr_END (9)
#define SOC_USBOTG_DOEPINTM_pktdrpsts_START (11)
#define SOC_USBOTG_DOEPINTM_pktdrpsts_END (11)
#define SOC_USBOTG_DOEPINTM_bbleerr_START (12)
#define SOC_USBOTG_DOEPINTM_bbleerr_END (12)
#define SOC_USBOTG_DOEPINTM_nakintrpt_START (13)
#define SOC_USBOTG_DOEPINTM_nakintrpt_END (13)
#define SOC_USBOTG_DOEPINTM_nyet_START (14)
#define SOC_USBOTG_DOEPINTM_nyet_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersize : 7;
        unsigned int reserved_0: 12;
        unsigned int pktcnt : 2;
        unsigned int reserved_1: 8;
        unsigned int supcnt : 2;
        unsigned int reserved_2: 1;
    } reg;
} SOC_USBOTG_DOEPTSIZ0_UNION;
#endif
#define SOC_USBOTG_DOEPTSIZ0_xfersize_START (0)
#define SOC_USBOTG_DOEPTSIZ0_xfersize_END (6)
#define SOC_USBOTG_DOEPTSIZ0_pktcnt_START (19)
#define SOC_USBOTG_DOEPTSIZ0_pktcnt_END (20)
#define SOC_USBOTG_DOEPTSIZ0_supcnt_START (29)
#define SOC_USBOTG_DOEPTSIZ0_supcnt_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int xfersize : 19;
        unsigned int pktcnt : 10;
        unsigned int rxdpid : 2;
        unsigned int reserved : 1;
    } reg;
} SOC_USBOTG_DOEPTSIZN_UNION;
#endif
#define SOC_USBOTG_DOEPTSIZN_xfersize_START (0)
#define SOC_USBOTG_DOEPTSIZN_xfersize_END (18)
#define SOC_USBOTG_DOEPTSIZN_pktcnt_START (19)
#define SOC_USBOTG_DOEPTSIZN_pktcnt_END (28)
#define SOC_USBOTG_DOEPTSIZN_rxdpid_START (29)
#define SOC_USBOTG_DOEPTSIZN_rxdpid_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmaaddr : 32;
    } reg;
} SOC_USBOTG_DOEPDMAM_UNION;
#endif
#define SOC_USBOTG_DOEPDMAM_dmaaddr_START (0)
#define SOC_USBOTG_DOEPDMAM_dmaaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int dmabufferaddr : 32;
    } reg;
} SOC_USBOTG_DOEPDMABM_UNION;
#endif
#define SOC_USBOTG_DOEPDMABM_dmabufferaddr_START (0)
#define SOC_USBOTG_DOEPDMABM_dmabufferaddr_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 14;
        unsigned int restorevalue : 18;
    } reg;
} SOC_USBOTG_PCGCCTL_UNION;
#endif
#define SOC_USBOTG_PCGCCTL_restorevalue_START (14)
#define SOC_USBOTG_PCGCCTL_restorevalue_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
