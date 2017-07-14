#ifndef __SOC_PMCTRL_INTERFACE_H__
#define __SOC_PMCTRL_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_PMCTRL_ACPUPLLCTRL_ADDR(base) ((base) + (0x000))
#define SOC_PMCTRL_ACPUPLLFREQ_ADDR(base) ((base) + (0x004))
#define SOC_PMCTRL_GPUPLLCTRL_ADDR(base) ((base) + (0x008))
#define SOC_PMCTRL_GPUPLLFREQ_ADDR(base) ((base) + (0x00C))
#define SOC_PMCTRL_DDRPLL1CTRL_ADDR(base) ((base) + (0x010))
#define SOC_PMCTRL_DDRPLL1FREQ_ADDR(base) ((base) + (0x014))
#define SOC_PMCTRL_DDRPLL0ALIAS_ADDR(base) ((base) + (0x018))
#define SOC_PMCTRL_SYSPLLCTRL_ADDR(base) ((base) + (0x028))
#define SOC_PMCTRL_SYSPLLFREQ_ADDR(base) ((base) + (0x02C))
#define SOC_PMCTRL_DDRPLL0CTRL_ADDR(base) ((base) + (0x030))
#define SOC_PMCTRL_DDRPLL0FREQ_ADDR(base) ((base) + (0x034))
#define SOC_PMCTRL_MEDPLLCTRL_ADDR(base) ((base) + (0x038))
#define SOC_PMCTRL_MEDPLLFREQ_ADDR(base) ((base) + (0x03C))
#define SOC_PMCTRL_MEDPLLALIAS_ADDR(base) ((base) + (0x040))
#define SOC_PMCTRL_BBPPLLALIAS_ADDR(base) ((base) + (0x048))
#define SOC_PMCTRL_DDRPLL0CFGEN_ADDR(base) ((base) + (0x04C))
#define SOC_PMCTRL_SYSPLLFRAC_ADDR(base) ((base) + (0x050))
#define SOC_PMCTRL_SYSPLLSSC_ADDR(base) ((base) + (0x054))
#define SOC_PMCTRL_DDRPLL0FRAC_ADDR(base) ((base) + (0x058))
#define SOC_PMCTRL_DDRPLL0SSC_ADDR(base) ((base) + (0x05C))
#define SOC_PMCTRL_DDRPLL1FRAC_ADDR(base) ((base) + (0x074))
#define SOC_PMCTRL_DDRPLL1SSC_ADDR(base) ((base) + (0x078))
#define SOC_PMCTRL_CLKCFG4BIT0_ADDR(base) ((base) + (0x080))
#define SOC_PMCTRL_CLKCFG4BIT1_ADDR(base) ((base) + (0x084))
#define SOC_PMCTRL_CLKCFG4BIT2_ADDR(base) ((base) + (0x088))
#define SOC_PMCTRL_TIMER0CTRL_ADDR(base) ((base) + (0x0C0))
#define SOC_PMCTRL_TIMER1CTRL_ADDR(base) ((base) + (0x0C4))
#define SOC_PMCTRL_TIMER2CTRL_ADDR(base) ((base) + (0x0C8))
#define SOC_PMCTRL_TIMER3CTRL_ADDR(base) ((base) + (0x0CC))
#define SOC_PMCTRL_PMUSSICHNEN_ADDR(base) ((base) + (0x0FC))
#define SOC_PMCTRL_ACPUPLLSEL_ADDR(base) ((base) + (0x100))
#define SOC_PMCTRL_ACPUCLKDIV_ADDR(base) ((base) + (0x104))
#define SOC_PMCTRL_ACPUMEMRM_ADDR(base) ((base) + (0x108))
#define SOC_PMCTRL_ACPUVOLDET_ADDR(base) ((base) + (0x10C))
#define SOC_PMCTRL_ACPUSYSPLLCFG_ADDR(base) ((base) + (0x110))
#define SOC_PMCTRL_ACPUCLKOFFCFG_ADDR(base) ((base) + (0x114))
#define SOC_PMCTRL_ACPUDVFSEN_ADDR(base) ((base) + (0x118))
#define SOC_PMCTRL_ACPUCLKPROFILE0_ADDR(base) ((base) + (0x11C))
#define SOC_PMCTRL_ACPUCLKPROFILE1_ADDR(base) ((base) + (0x120))
#define SOC_PMCTRL_ACPUVOLPROFILE_ADDR(base) ((base) + (0x124))
#define SOC_PMCTRL_ACPUPLLSTAT_ADDR(base) ((base) + (0x128))
#define SOC_PMCTRL_ACPUDIVTIMEOUT_ADDR(base) ((base) + (0x12C))
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_ADDR(base) ((base) + (0x130))
#define SOC_PMCTRL_ACPUAVSPARAUPD_ADDR(base) ((base) + (0x180))
#define SOC_PMCTRL_ACPUAVSPARA0_ADDR(base) ((base) + (0x184))
#define SOC_PMCTRL_ACPUAVSPARA1_ADDR(base) ((base) + (0x188))
#define SOC_PMCTRL_ACPUAVSPARA2_ADDR(base) ((base) + (0x18C))
#define SOC_PMCTRL_ACPUAVSPARA3_ADDR(base) ((base) + (0x190))
#define SOC_PMCTRL_ACPUAVSPARA4_ADDR(base) ((base) + (0x194))
#define SOC_PMCTRL_ACPUAVSPARA5_ADDR(base) ((base) + (0x198))
#define SOC_PMCTRL_ACPUAVSPARA6_ADDR(base) ((base) + (0x19C))
#define SOC_PMCTRL_ACPUAVSPARA7_ADDR(base) ((base) + (0x1A0))
#define SOC_PMCTRL_ACPUAVSEN_ADDR(base) ((base) + (0x1E4))
#define SOC_PMCTRL_ACPUAVSPERIOD_ADDR(base) ((base) + (0x1E8))
#define SOC_PMCTRL_AACPUAVSRUNROUND_ADDR(base) ((base) + (0x1EC))
#define SOC_PMCTRL_PDPARAUDP_ADDR(base) ((base) + (0x280))
#define SOC_PMCTRL_PDPARA0_ADDR(base) ((base) + (0x284))
#define SOC_PMCTRL_PDPARA1_ADDR(base) ((base) + (0x288))
#define SOC_PMCTRL_PDAVSPARA2_ADDR(base) ((base) + (0x2A0))
#define SOC_PMCTRL_PDAVSEN_ADDR(base) ((base) + (0x2E0))
#define SOC_PMCTRL_ACPUHPMCTRL_ADDR(base) ((base) + (0x300))
#define SOC_PMCTRL_ACPUHPMOPCVALID_ADDR(base) ((base) + (0x314))
#define SOC_PMCTRL_ACPU01HPMOPC_ADDR(base) ((base) + (0x318))
#define SOC_PMCTRL_ACPU23HPMOPC_ADDR(base) ((base) + (0x31C))
#define SOC_PMCTRL_ACPU01HPMPC_ADDR(base) ((base) + (0x330))
#define SOC_PMCTRL_ACPU23HPMPC_ADDR(base) ((base) + (0x334))
#define SOC_PMCTRL_ACPUHPMBYPASS_ADDR(base) ((base) + (0x33C))
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_ADDR(base) ((base) + (0x360))
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_ADDR(base) ((base) + (0x364))
#define SOC_PMCTRL_ACPUVOLPMUADDR_ADDR(base) ((base) + (0x368))
#define SOC_PMCTRL_ACPUVOLUPSTEP_ADDR(base) ((base) + (0x36C))
#define SOC_PMCTRL_ACPUVOLDNSTEP_ADDR(base) ((base) + (0x370))
#define SOC_PMCTRL_ACPUDFTVOL_ADDR(base) ((base) + (0x374))
#define SOC_PMCTRL_ACPUDESTVOL_ADDR(base) ((base) + (0x378))
#define SOC_PMCTRL_ACPUVOLTIMEOUT_ADDR(base) ((base) + (0x37C))
#define SOC_PMCTRL_PDHPMCTRL_ADDR(base) ((base) + (0x380))
#define SOC_PMCTRL_PDHPMOPCVALID_ADDR(base) ((base) + (0x394))
#define SOC_PMCTRL_PDHPMOPC0_ADDR(base) ((base) + (0x398))
#define SOC_PMCTRL_PDHPMOPC1_ADDR(base) ((base) + (0x39C))
#define SOC_PMCTRL_PDHPMPC0_ADDR(base) ((base) + (0x3A8))
#define SOC_PMCTRL_PDHPMPC1_ADDR(base) ((base) + (0x3AC))
#define SOC_PMCTRL_PDHPMPC_ADDR(base) ((base) + (0x3B0))
#define SOC_PMCTRL_PMCINTRAW_ADDR(base) ((base) + (0x480))
#define SOC_PMCTRL_PMCINTCLR_ADDR(base) ((base) + (0x484))
#define SOC_PMCTRL_PMCINTENMCU_ADDR(base) ((base) + (0x488))
#define SOC_PMCTRL_PMCINTSTATMCU_ADDR(base) ((base) + (0x48C))
#define SOC_PMCTRL_PMCINTENACPU_ADDR(base) ((base) + (0x490))
#define SOC_PMCTRL_PMCINTSTATACPU_ADDR(base) ((base) + (0x494))
#define SOC_PMCTRL_PMCINTENMCPU_ADDR(base) ((base) + (0x498))
#define SOC_PMCTRL_PMCINTSTATMCPU_ADDR(base) ((base) + (0x49C))
#define SOC_PMCTRL_PMCSTATUS_ADDR(base) ((base) + (0x4A0))
#define SOC_PMCTRL_DDRCLKSEL_ADDR(base) ((base) + (0x580))
#define SOC_PMCTRL_DDRLPCTRL_ADDR(base) ((base) + (0x588))
#define SOC_PMCTRL_DDRCCLKOFFCFG_ADDR(base) ((base) + (0x590))
#define SOC_PMCTRL_DDRCLKDIVSTAT_ADDR(base) ((base) + (0x594))
#define SOC_PMCTRL_DDRPLLSWEN_ADDR(base) ((base) + (0x598))
#define SOC_PMCTRL_DDRDFSEN_ADDR(base) ((base) + (0x59C))
#define SOC_PMCTRL_DDRDIVTIMEOUT_ADDR(base) ((base) + (0x5A4))
#define SOC_PMCTRL_DDRCLKDIVCFG_ADDR(base) ((base) + (0x5A8))
#define SOC_PMCTRL_DDRCLKPROFILE_ADDR(base) ((base) + (0x5AC))
#define SOC_PMCTRL_ACPUHPMMASKEN_ADDR(base) ((base) + (0xC00))
#define SOC_PMCTRL_ACPUHPMMASKDIS_ADDR(base) ((base) + (0xC04))
#define SOC_PMCTRL_ACPUHPMMASKSTAT_ADDR(base) ((base) + (0xC08))
#define SOC_PMCTRL_PDHPMMASKEN_ADDR(base) ((base) + (0xC10))
#define SOC_PMCTRL_PDHPMMASKDIS_ADDR(base) ((base) + (0xC14))
#define SOC_PMCTRL_PDHPMMASKSTAT_ADDR(base) ((base) + (0xC18))
#define SOC_PMCTRL_MEDPLLRESERVED1_ADDR(base) ((base) + (0x904))
#define SOC_PMCTRL_ACPUPLLRESERVED1_ADDR(base) ((base) + (0x908))
#define SOC_PMCTRL_GPUPLLRESERVED1_ADDR(base) ((base) + (0x90C))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpupll_en_cfg : 1;
        unsigned int reserved_0 : 1;
        unsigned int acpupll_rst : 1;
        unsigned int reserved_1 : 1;
        unsigned int acpupll_time : 24;
        unsigned int acpupll_timeout : 1;
        unsigned int acpupll_lock : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_PMCTRL_ACPUPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_en_cfg_START (0)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_en_cfg_END (0)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_rst_START (2)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_rst_END (2)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_time_START (4)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_time_END (27)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_timeout_START (28)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_timeout_END (28)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_lock_START (29)
#define SOC_PMCTRL_ACPUPLLCTRL_acpupll_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpupll_freq_cfg : 32;
    } reg;
} SOC_PMCTRL_ACPUPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLFREQ_acpupll_freq_cfg_START (0)
#define SOC_PMCTRL_ACPUPLLFREQ_acpupll_freq_cfg_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gpupll_en : 1;
        unsigned int reserved_0 : 1;
        unsigned int gpupll_rst : 1;
        unsigned int reserved_1 : 1;
        unsigned int gpupll_time : 24;
        unsigned int gpupll_timeout : 1;
        unsigned int gpupll_lock : 1;
        unsigned int reserved_2 : 2;
    } reg;
} SOC_PMCTRL_GPUPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_en_START (0)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_en_END (0)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_rst_START (2)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_rst_END (2)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_time_START (4)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_time_END (27)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_timeout_START (28)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_timeout_END (28)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_lock_START (29)
#define SOC_PMCTRL_GPUPLLCTRL_gpupll_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int gpupll_freq : 32;
    } reg;
} SOC_PMCTRL_GPUPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_GPUPLLFREQ_gpupll_freq_START (0)
#define SOC_PMCTRL_GPUPLLFREQ_gpupll_freq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll1_en_cfg : 1;
        unsigned int reserved_0 : 2;
        unsigned int ddrpll1_en : 1;
        unsigned int ddrpll1_time : 24;
        unsigned int ddrpll1_timeout : 1;
        unsigned int ddrpll1_lock : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PMCTRL_DDRPLL1CTRL_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_cfg_START (0)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_cfg_END (0)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_START (3)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_en_END (3)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_time_START (4)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_time_END (27)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_timeout_START (28)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_timeout_END (28)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_lock_START (29)
#define SOC_PMCTRL_DDRPLL1CTRL_ddrpll1_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll1_freq : 32;
    } reg;
} SOC_PMCTRL_DDRPLL1FREQ_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1FREQ_ddrpll1_freq_START (0)
#define SOC_PMCTRL_DDRPLL1FREQ_ddrpll1_freq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_en_alias : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_DDRPLL0ALIAS_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0ALIAS_ddrpll0_en_alias_START (0)
#define SOC_PMCTRL_DDRPLL0ALIAS_ddrpll0_en_alias_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int syspll_en_cfg : 1;
        unsigned int syspll_en_mod : 1;
        unsigned int reserved_0 : 1;
        unsigned int syspll_en : 1;
        unsigned int syspll_time : 24;
        unsigned int syspll_timeout : 1;
        unsigned int syspll_lock : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PMCTRL_SYSPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_cfg_START (0)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_cfg_END (0)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_mod_START (1)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_mod_END (1)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_START (3)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_en_END (3)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_time_START (4)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_time_END (27)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_timeout_START (28)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_timeout_END (28)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_lock_START (29)
#define SOC_PMCTRL_SYSPLLCTRL_syspll_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int syspll_freq : 32;
    } reg;
} SOC_PMCTRL_SYSPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_SYSPLLFREQ_syspll_freq_START (0)
#define SOC_PMCTRL_SYSPLLFREQ_syspll_freq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_en_cfg : 1;
        unsigned int reserved_0 : 2;
        unsigned int ddrpll0_en : 1;
        unsigned int ddrpll0_time : 24;
        unsigned int ddrpll0_timeout : 1;
        unsigned int ddrpll0_lock : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PMCTRL_DDRPLL0CTRL_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_cfg_START (0)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_cfg_END (0)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_START (3)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_en_END (3)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_time_START (4)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_time_END (27)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_timeout_START (28)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_timeout_END (28)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_lock_START (29)
#define SOC_PMCTRL_DDRPLL0CTRL_ddrpll0_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_freq : 32;
    } reg;
} SOC_PMCTRL_DDRPLL0FREQ_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0FREQ_ddrpll0_freq_START (0)
#define SOC_PMCTRL_DDRPLL0FREQ_ddrpll0_freq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int medpll_en_cfg : 1;
        unsigned int reserved_0 : 1;
        unsigned int medpll_rst : 1;
        unsigned int medpll_en : 1;
        unsigned int medpll_time : 24;
        unsigned int medpll_timeout : 1;
        unsigned int medpll_lock : 1;
        unsigned int reserved_1 : 2;
    } reg;
} SOC_PMCTRL_MEDPLLCTRL_UNION;
#endif
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_cfg_START (0)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_cfg_END (0)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_rst_START (2)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_rst_END (2)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_START (3)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_en_END (3)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_time_START (4)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_time_END (27)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_timeout_START (28)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_timeout_END (28)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_lock_START (29)
#define SOC_PMCTRL_MEDPLLCTRL_medpll_lock_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int medpll_freq : 32;
    } reg;
} SOC_PMCTRL_MEDPLLFREQ_UNION;
#endif
#define SOC_PMCTRL_MEDPLLFREQ_medpll_freq_START (0)
#define SOC_PMCTRL_MEDPLLFREQ_medpll_freq_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int medpll_en_alias : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_MEDPLLALIAS_UNION;
#endif
#define SOC_PMCTRL_MEDPLLALIAS_medpll_en_alias_START (0)
#define SOC_PMCTRL_MEDPLLALIAS_medpll_en_alias_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int bbppll_en_alias : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_BBPPLLALIAS_UNION;
#endif
#define SOC_PMCTRL_BBPPLLALIAS_bbppll_en_alias_START (0)
#define SOC_PMCTRL_BBPPLLALIAS_bbppll_en_alias_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_cfg_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_DDRPLL0CFGEN_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0CFGEN_ddrpll0_cfg_en_START (0)
#define SOC_PMCTRL_DDRPLL0CFGEN_ddrpll0_cfg_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sys_frac : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_PMCTRL_SYSPLLFRAC_UNION;
#endif
#define SOC_PMCTRL_SYSPLLFRAC_sys_frac_START (0)
#define SOC_PMCTRL_SYSPLLFRAC_sys_frac_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int sys_ssc : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_PMCTRL_SYSPLLSSC_UNION;
#endif
#define SOC_PMCTRL_SYSPLLSSC_sys_ssc_START (0)
#define SOC_PMCTRL_SYSPLLSSC_sys_ssc_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_frac : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_PMCTRL_DDRPLL0FRAC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0FRAC_ddrpll0_frac_START (0)
#define SOC_PMCTRL_DDRPLL0FRAC_ddrpll0_frac_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll0_ssc : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_PMCTRL_DDRPLL0SSC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL0SSC_ddrpll0_ssc_START (0)
#define SOC_PMCTRL_DDRPLL0SSC_ddrpll0_ssc_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll1_frac : 29;
        unsigned int reserved : 3;
    } reg;
} SOC_PMCTRL_DDRPLL1FRAC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1FRAC_ddrpll1_frac_START (0)
#define SOC_PMCTRL_DDRPLL1FRAC_ddrpll1_frac_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll1_ssc : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_PMCTRL_DDRPLL1SSC_UNION;
#endif
#define SOC_PMCTRL_DDRPLL1SSC_ddrpll1_ssc_START (0)
#define SOC_PMCTRL_DDRPLL1SSC_ddrpll1_ssc_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_4bit_cfg0_value0 : 3;
        unsigned int clk_4bit_cfg0_vld0 : 1;
        unsigned int clk_4bit_cfg0_value1 : 3;
        unsigned int clk_4bit_cfg0_vld1 : 1;
        unsigned int clk_4bit_cfg0_value2 : 3;
        unsigned int clk_4bit_cfg0_vld2 : 1;
        unsigned int clk_4bit_cfg0_value3 : 3;
        unsigned int clk_4bit_cfg0_vld3 : 1;
        unsigned int clk_4bit_cfg0_value4 : 3;
        unsigned int clk_4bit_cfg0_vld4 : 1;
        unsigned int clk_4bit_cfg0_value5 : 3;
        unsigned int clk_4bit_cfg0_vld5 : 1;
        unsigned int clk_4bit_cfg0_value6 : 3;
        unsigned int clk_4bit_cfg0_vld6 : 1;
        unsigned int clk_4bit_cfg0_value7 : 3;
        unsigned int clk_4bit_cfg0_vld7 : 1;
    } reg;
} SOC_PMCTRL_CLKCFG4BIT0_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value0_START (0)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value0_END (2)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld0_START (3)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld0_END (3)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value1_START (4)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value1_END (6)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld1_START (7)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld1_END (7)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value2_START (8)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value2_END (10)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld2_START (11)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld2_END (11)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value3_START (12)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value3_END (14)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld3_START (15)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld3_END (15)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value4_START (16)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value4_END (18)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld4_START (19)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld4_END (19)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value5_START (20)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value5_END (22)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld5_START (23)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld5_END (23)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value6_START (24)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value6_END (26)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld6_START (27)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld6_END (27)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value7_START (28)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_value7_END (30)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld7_START (31)
#define SOC_PMCTRL_CLKCFG4BIT0_clk_4bit_cfg0_vld7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_4bit_cfg1_value0 : 3;
        unsigned int clk_4bit_cfg1_vld0 : 1;
        unsigned int clk_4bit_cfg1_value1 : 3;
        unsigned int clk_4bit_cfg1_vld1 : 1;
        unsigned int clk_4bit_cfg1_value2 : 3;
        unsigned int clk_4bit_cfg1_vld2 : 1;
        unsigned int clk_4bit_cfg1_value3 : 3;
        unsigned int clk_4bit_cfg1_vld3 : 1;
        unsigned int clk_4bit_cfg1_value4 : 3;
        unsigned int clk_4bit_cfg1_vld4 : 1;
        unsigned int clk_4bit_cfg1_value5 : 3;
        unsigned int clk_4bit_cfg1_vld5 : 1;
        unsigned int clk_4bit_cfg1_value6 : 3;
        unsigned int clk_4bit_cfg1_vld6 : 1;
        unsigned int clk_4bit_cfg1_value7 : 3;
        unsigned int clk_4bit_cfg1_vld7 : 1;
    } reg;
} SOC_PMCTRL_CLKCFG4BIT1_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value0_START (0)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value0_END (2)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld0_START (3)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld0_END (3)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value1_START (4)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value1_END (6)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld1_START (7)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld1_END (7)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value2_START (8)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value2_END (10)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld2_START (11)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld2_END (11)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value3_START (12)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value3_END (14)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld3_START (15)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld3_END (15)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value4_START (16)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value4_END (18)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld4_START (19)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld4_END (19)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value5_START (20)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value5_END (22)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld5_START (23)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld5_END (23)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value6_START (24)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value6_END (26)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld6_START (27)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld6_END (27)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value7_START (28)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_value7_END (30)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld7_START (31)
#define SOC_PMCTRL_CLKCFG4BIT1_clk_4bit_cfg1_vld7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int clk_4bit_cfg2_value0 : 3;
        unsigned int clk_4bit_cfg2_vld0 : 1;
        unsigned int clk_4bit_cfg2_value1 : 3;
        unsigned int clk_4bit_cfg2_vld1 : 1;
        unsigned int clk_4bit_cfg2_value2 : 3;
        unsigned int clk_4bit_cfg2_vld2 : 1;
        unsigned int clk_4bit_cfg2_value3 : 3;
        unsigned int clk_4bit_cfg2_vld3 : 1;
        unsigned int clk_4bit_cfg2_value4 : 3;
        unsigned int clk_4bit_cfg2_vld4 : 1;
        unsigned int clk_4bit_cfg2_value5 : 3;
        unsigned int clk_4bit_cfg2_vld5 : 1;
        unsigned int clk_4bit_cfg2_value6 : 3;
        unsigned int clk_4bit_cfg2_vld6 : 1;
        unsigned int clk_4bit_cfg2_value7 : 3;
        unsigned int clk_4bit_cfg2_vld7 : 1;
    } reg;
} SOC_PMCTRL_CLKCFG4BIT2_UNION;
#endif
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value0_START (0)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value0_END (2)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld0_START (3)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld0_END (3)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value1_START (4)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value1_END (6)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld1_START (7)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld1_END (7)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value2_START (8)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value2_END (10)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld2_START (11)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld2_END (11)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value3_START (12)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value3_END (14)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld3_START (15)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld3_END (15)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value4_START (16)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value4_END (18)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld4_START (19)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld4_END (19)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value5_START (20)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value5_END (22)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld5_START (23)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld5_END (23)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value6_START (24)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value6_END (26)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld6_START (27)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld6_END (27)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value7_START (28)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_value7_END (30)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld7_START (31)
#define SOC_PMCTRL_CLKCFG4BIT2_clk_4bit_cfg2_vld7_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer0_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int timer0_val : 24;
        unsigned int timer0_timeout : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_TIMER0CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER0CTRL_timer0_en_START (0)
#define SOC_PMCTRL_TIMER0CTRL_timer0_en_END (0)
#define SOC_PMCTRL_TIMER0CTRL_timer0_val_START (4)
#define SOC_PMCTRL_TIMER0CTRL_timer0_val_END (27)
#define SOC_PMCTRL_TIMER0CTRL_timer0_timeout_START (28)
#define SOC_PMCTRL_TIMER0CTRL_timer0_timeout_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer1_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int timer1_val : 24;
        unsigned int timer1_timeout : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_TIMER1CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER1CTRL_timer1_en_START (0)
#define SOC_PMCTRL_TIMER1CTRL_timer1_en_END (0)
#define SOC_PMCTRL_TIMER1CTRL_timer1_val_START (4)
#define SOC_PMCTRL_TIMER1CTRL_timer1_val_END (27)
#define SOC_PMCTRL_TIMER1CTRL_timer1_timeout_START (28)
#define SOC_PMCTRL_TIMER1CTRL_timer1_timeout_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer2_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int timer2_val : 24;
        unsigned int timer2_timeout : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_TIMER2CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER2CTRL_timer2_en_START (0)
#define SOC_PMCTRL_TIMER2CTRL_timer2_en_END (0)
#define SOC_PMCTRL_TIMER2CTRL_timer2_val_START (4)
#define SOC_PMCTRL_TIMER2CTRL_timer2_val_END (27)
#define SOC_PMCTRL_TIMER2CTRL_timer2_timeout_START (28)
#define SOC_PMCTRL_TIMER2CTRL_timer2_timeout_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int timer3_en : 1;
        unsigned int reserved_0 : 3;
        unsigned int timer3_val : 24;
        unsigned int timer3_timeout : 1;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_TIMER3CTRL_UNION;
#endif
#define SOC_PMCTRL_TIMER3CTRL_timer3_en_START (0)
#define SOC_PMCTRL_TIMER3CTRL_timer3_en_END (0)
#define SOC_PMCTRL_TIMER3CTRL_timer3_val_START (4)
#define SOC_PMCTRL_TIMER3CTRL_timer3_val_END (27)
#define SOC_PMCTRL_TIMER3CTRL_timer3_timeout_START (28)
#define SOC_PMCTRL_TIMER3CTRL_timer3_timeout_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pmussi_chn_en : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_PMUSSICHNEN_UNION;
#endif
#define SOC_PMCTRL_PMUSSICHNEN_pmussi_chn_en_START (0)
#define SOC_PMCTRL_PMUSSICHNEN_pmussi_chn_en_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_pllsw_cfg : 1;
        unsigned int acpu_pllsw_stat : 1;
        unsigned int syspll_sw_stat : 1;
        unsigned int reserved : 29;
    } reg;
} SOC_PMCTRL_ACPUPLLSEL_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_cfg_START (0)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_cfg_END (0)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_stat_START (1)
#define SOC_PMCTRL_ACPUPLLSEL_acpu_pllsw_stat_END (1)
#define SOC_PMCTRL_ACPUPLLSEL_syspll_sw_stat_START (2)
#define SOC_PMCTRL_ACPUPLLSEL_syspll_sw_stat_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int cpuext_clk_div_cfg : 2;
        unsigned int reserved_0 : 6;
        unsigned int acpu_ddr_clk_div_cfg : 2;
        unsigned int reserved_1 : 6;
        unsigned int cpuext_clk_div_stat : 2;
        unsigned int reserved_2 : 6;
        unsigned int acpu_ddr_clk_div_stat : 2;
        unsigned int reserved_3 : 6;
    } reg;
} SOC_PMCTRL_ACPUCLKDIV_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_cfg_START (0)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_cfg_END (1)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_cfg_START (8)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_cfg_END (9)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_stat_START (16)
#define SOC_PMCTRL_ACPUCLKDIV_cpuext_clk_div_stat_END (17)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_stat_START (24)
#define SOC_PMCTRL_ACPUCLKDIV_acpu_ddr_clk_div_stat_END (25)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_memrm_cfg : 8;
        unsigned int reserved_0 : 8;
        unsigned int acpu_memrm_stat : 8;
        unsigned int reserved_1 : 8;
    } reg;
} SOC_PMCTRL_ACPUMEMRM_UNION;
#endif
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_cfg_START (0)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_cfg_END (7)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_stat_START (16)
#define SOC_PMCTRL_ACPUMEMRM_acpu_memrm_stat_END (23)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_tune_cfg : 5;
        unsigned int reserved_0 : 3;
        unsigned int acpu_tune_en_cfg : 1;
        unsigned int reserved_1 : 23;
    } reg;
} SOC_PMCTRL_ACPUVOLDET_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_cfg_START (0)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_cfg_END (4)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_en_cfg_START (8)
#define SOC_PMCTRL_ACPUVOLDET_acpu_tune_en_cfg_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_syspll_div_cfg : 3;
        unsigned int reserved_0 : 1;
        unsigned int acpu_syspll_clken_cfg : 1;
        unsigned int reserved_1 : 3;
        unsigned int acpu_subsys_clk_div_cfg : 2;
        unsigned int reserved_2 : 6;
        unsigned int acpu_syspll_div_stat : 4;
        unsigned int acpu_syspll_clken_stat : 1;
        unsigned int reserved_3 : 11;
    } reg;
} SOC_PMCTRL_ACPUSYSPLLCFG_UNION;
#endif
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_cfg_START (0)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_cfg_END (2)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_cfg_START (4)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_cfg_END (4)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_subsys_clk_div_cfg_START (8)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_subsys_clk_div_cfg_END (9)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_stat_START (16)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_div_stat_END (19)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_stat_START (20)
#define SOC_PMCTRL_ACPUSYSPLLCFG_acpu_syspll_clken_stat_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_clkoff_vol : 1;
        unsigned int acpu_clkoff_memrm : 1;
        unsigned int reserved_0 : 2;
        unsigned int acpu_memrm_time : 5;
        unsigned int reserved_1 : 3;
        unsigned int acpu_dvfs_pwrctrl_en : 1;
        unsigned int reserved_2 : 3;
        unsigned int acpu_dvfs_ko_avs_dis : 1;
        unsigned int reserved_3 : 15;
    } reg;
} SOC_PMCTRL_ACPUCLKOFFCFG_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_vol_START (0)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_vol_END (0)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_memrm_START (1)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_clkoff_memrm_END (1)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_memrm_time_START (4)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_memrm_time_END (8)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_pwrctrl_en_START (12)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_pwrctrl_en_END (12)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_ko_avs_dis_START (16)
#define SOC_PMCTRL_ACPUCLKOFFCFG_acpu_dvfs_ko_avs_dis_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_dvfs_start : 1;
        unsigned int acpu_profile_updn : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PMCTRL_ACPUDVFSEN_UNION;
#endif
#define SOC_PMCTRL_ACPUDVFSEN_acpu_dvfs_start_START (0)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_dvfs_start_END (0)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_profile_updn_START (1)
#define SOC_PMCTRL_ACPUDVFSEN_acpu_profile_updn_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpupll_freq_prof : 28;
        unsigned int reserved : 4;
    } reg;
} SOC_PMCTRL_ACPUCLKPROFILE0_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKPROFILE0_acpupll_freq_prof_START (0)
#define SOC_PMCTRL_ACPUCLKPROFILE0_acpupll_freq_prof_END (27)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_sys_div_prof : 3;
        unsigned int reserved_0 : 1;
        unsigned int acpu_ddr_clk_div_prof : 2;
        unsigned int reserved_1 : 2;
        unsigned int cpuext_clk_div_prof : 2;
        unsigned int reserved_2 : 22;
    } reg;
} SOC_PMCTRL_ACPUCLKPROFILE1_UNION;
#endif
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_sys_div_prof_START (0)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_sys_div_prof_END (2)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_ddr_clk_div_prof_START (4)
#define SOC_PMCTRL_ACPUCLKPROFILE1_acpu_ddr_clk_div_prof_END (5)
#define SOC_PMCTRL_ACPUCLKPROFILE1_cpuext_clk_div_prof_START (8)
#define SOC_PMCTRL_ACPUCLKPROFILE1_cpuext_clk_div_prof_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_idx_prof : 7;
        unsigned int reserved_0 : 1;
        unsigned int acpu_memrm_prof : 8;
        unsigned int reserved_1 : 4;
        unsigned int acpu_tune_en_prof : 1;
        unsigned int reserved_2 : 11;
    } reg;
} SOC_PMCTRL_ACPUVOLPROFILE_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_vol_idx_prof_START (0)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_vol_idx_prof_END (6)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_memrm_prof_START (8)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_memrm_prof_END (15)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_tune_en_prof_START (20)
#define SOC_PMCTRL_ACPUVOLPROFILE_acpu_tune_en_prof_END (20)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpupll_freq : 28;
        unsigned int acpupll_en : 1;
        unsigned int reserved : 3;
    } reg;
} SOC_PMCTRL_ACPUPLLSTAT_UNION;
#endif
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_freq_START (0)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_freq_END (27)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_en_START (28)
#define SOC_PMCTRL_ACPUPLLSTAT_acpupll_en_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_clkdiv_time : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_PMCTRL_ACPUDIVTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUDIVTIMEOUT_acpu_clkdiv_time_START (0)
#define SOC_PMCTRL_ACPUDIVTIMEOUT_acpu_clkdiv_time_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int avs_on_wait_time : 32;
    } reg;
} SOC_PMCTRL_ACPUAVSONTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_avs_on_wait_time_START (0)
#define SOC_PMCTRL_ACPUAVSONTIMEOUT_avs_on_wait_time_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avspara_update : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_ACPUAVSPARAUPD_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARAUPD_acpu_avspara_update_START (0)
#define SOC_PMCTRL_ACPUAVSPARAUPD_acpu_avspara_update_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_clk_div : 6;
        unsigned int reserved_0 : 10;
        unsigned int acpu_avs_opc_mod : 2;
        unsigned int reserved_1 : 2;
        unsigned int acpu_avs_hpm_sel : 3;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA0_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_hpm_clk_div_START (0)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_hpm_clk_div_END (5)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_opc_mod_START (16)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_opc_mod_END (17)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_hpm_sel_START (20)
#define SOC_PMCTRL_ACPUAVSPARA0_acpu_avs_hpm_sel_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_opc_offset : 10;
        unsigned int reserved_0 : 2;
        unsigned int acpu_avs_rcc : 5;
        unsigned int reserved_1 : 3;
        unsigned int acpu_avs_irgap : 5;
        unsigned int reserved_2 : 3;
        unsigned int acpu_avs_opc_shift : 3;
        unsigned int reserved_3 : 1;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA1_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_offset_START (0)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_offset_END (9)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_rcc_START (12)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_rcc_END (16)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_irgap_START (20)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_irgap_END (24)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_shift_START (28)
#define SOC_PMCTRL_ACPUAVSPARA1_acpu_avs_opc_shift_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_vol_up_gain1 : 4;
        unsigned int acpu_avs_vol_up_gain2 : 4;
        unsigned int acpu_avs_vol_up_gain3 : 4;
        unsigned int acpu_avs_vol_up_gain4 : 4;
        unsigned int acpu_avs_vol_up_gain5 : 4;
        unsigned int acpu_avs_vol_up_gain6 : 4;
        unsigned int acpu_avs_vol_up_gain7 : 4;
        unsigned int acpu_avs_vol_up_gain8 : 4;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA2_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain1_START (0)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain1_END (3)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain2_START (4)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain2_END (7)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain3_START (8)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain3_END (11)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain4_START (12)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain4_END (15)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain5_START (16)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain5_END (19)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain6_START (20)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain6_END (23)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain7_START (24)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain7_END (27)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain8_START (28)
#define SOC_PMCTRL_ACPUAVSPARA2_acpu_avs_vol_up_gain8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_vol_up_gain9 : 4;
        unsigned int acpu_avs_vol_up_gain10 : 4;
        unsigned int acpu_avs_vol_up_gain11 : 4;
        unsigned int acpu_avs_vol_up_gain12 : 4;
        unsigned int acpu_avs_vol_up_gain13 : 4;
        unsigned int acpu_avs_vol_up_gain14 : 4;
        unsigned int acpu_avs_vol_up_gain15 : 7;
        unsigned int reserved : 1;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA3_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain9_START (0)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain9_END (3)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain10_START (4)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain10_END (7)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain11_START (8)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain11_END (11)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain12_START (12)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain12_END (15)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain13_START (16)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain13_END (19)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain14_START (20)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain14_END (23)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain15_START (24)
#define SOC_PMCTRL_ACPUAVSPARA3_acpu_avs_vol_up_gain15_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_vol_dn_gain1 : 4;
        unsigned int acpu_avs_vol_dn_gain2 : 4;
        unsigned int acpu_avs_vol_dn_gain3 : 4;
        unsigned int acpu_avs_vol_dn_gain4 : 4;
        unsigned int acpu_avs_vol_dn_gain5 : 4;
        unsigned int acpu_avs_vol_dn_gain6 : 4;
        unsigned int acpu_avs_vol_dn_gain7 : 4;
        unsigned int acpu_avs_vol_dn_gain8 : 4;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA4_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain1_START (0)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain1_END (3)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain2_START (4)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain2_END (7)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain3_START (8)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain3_END (11)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain4_START (12)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain4_END (15)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain5_START (16)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain5_END (19)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain6_START (20)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain6_END (23)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain7_START (24)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain7_END (27)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain8_START (28)
#define SOC_PMCTRL_ACPUAVSPARA4_acpu_avs_vol_dn_gain8_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_vol_dn_gain9 : 4;
        unsigned int acpu_avs_vol_dn_gain10 : 4;
        unsigned int acpu_avs_vol_dn_gain11 : 4;
        unsigned int acpu_avs_vol_dn_gain12 : 4;
        unsigned int acpu_avs_vol_dn_gain13 : 4;
        unsigned int acpu_avs_vol_dn_gain14 : 4;
        unsigned int acpu_avs_vol_dn_gain15 : 7;
        unsigned int reserved : 1;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA5_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain9_START (0)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain9_END (3)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain10_START (4)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain10_END (7)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain11_START (8)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain11_END (11)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain12_START (12)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain12_END (15)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain13_START (16)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain13_END (19)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain14_START (20)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain14_END (23)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain15_START (24)
#define SOC_PMCTRL_ACPUAVSPARA5_acpu_avs_vol_dn_gain15_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_max_vol : 7;
        unsigned int reserved_0 : 1;
        unsigned int acpu_avs_min_vol : 7;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA6_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_max_vol_START (0)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_max_vol_END (6)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_min_vol_START (8)
#define SOC_PMCTRL_ACPUAVSPARA6_acpu_avs_min_vol_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_sample_num : 22;
        unsigned int reserved_0 : 2;
        unsigned int acpu_avs_sample_shift : 5;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_ACPUAVSPARA7_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_num_START (0)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_num_END (21)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_shift_START (24)
#define SOC_PMCTRL_ACPUAVSPARA7_acpu_avs_sample_shift_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_en : 1;
        unsigned int acpu_avs_pwctrl_en : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PMCTRL_ACPUAVSEN_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_en_START (0)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_en_END (0)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_pwctrl_en_START (1)
#define SOC_PMCTRL_ACPUAVSEN_acpu_avs_pwctrl_en_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_period : 32;
    } reg;
} SOC_PMCTRL_ACPUAVSPERIOD_UNION;
#endif
#define SOC_PMCTRL_ACPUAVSPERIOD_acpu_avs_period_START (0)
#define SOC_PMCTRL_ACPUAVSPERIOD_acpu_avs_period_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_avs_round : 8;
        unsigned int reserved : 24;
    } reg;
} SOC_PMCTRL_AACPUAVSRUNROUND_UNION;
#endif
#define SOC_PMCTRL_AACPUAVSRUNROUND_acpu_avs_round_START (0)
#define SOC_PMCTRL_AACPUAVSRUNROUND_acpu_avs_round_END (7)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_avspara_update : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_PDPARAUDP_UNION;
#endif
#define SOC_PMCTRL_PDPARAUDP_pd_avspara_update_START (0)
#define SOC_PMCTRL_PDPARAUDP_pd_avspara_update_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm0_clk_div : 6;
        unsigned int reserved_0 : 10;
        unsigned int pd_avs_opc_mod : 2;
        unsigned int reserved_1 : 2;
        unsigned int pd_avs_hpm_sel : 3;
        unsigned int reserved_2 : 9;
    } reg;
} SOC_PMCTRL_PDPARA0_UNION;
#endif
#define SOC_PMCTRL_PDPARA0_pd_hpm0_clk_div_START (0)
#define SOC_PMCTRL_PDPARA0_pd_hpm0_clk_div_END (5)
#define SOC_PMCTRL_PDPARA0_pd_avs_opc_mod_START (16)
#define SOC_PMCTRL_PDPARA0_pd_avs_opc_mod_END (17)
#define SOC_PMCTRL_PDPARA0_pd_avs_hpm_sel_START (20)
#define SOC_PMCTRL_PDPARA0_pd_avs_hpm_sel_END (22)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm3_clk_div : 6;
        unsigned int reserved_0 : 2;
        unsigned int pd_hpm2_clk_div : 6;
        unsigned int reserved_1 : 2;
        unsigned int pd_hpm1_clk_div : 6;
        unsigned int reserved_2 : 10;
    } reg;
} SOC_PMCTRL_PDPARA1_UNION;
#endif
#define SOC_PMCTRL_PDPARA1_pd_hpm3_clk_div_START (0)
#define SOC_PMCTRL_PDPARA1_pd_hpm3_clk_div_END (5)
#define SOC_PMCTRL_PDPARA1_pd_hpm2_clk_div_START (8)
#define SOC_PMCTRL_PDPARA1_pd_hpm2_clk_div_END (13)
#define SOC_PMCTRL_PDPARA1_pd_hpm1_clk_div_START (16)
#define SOC_PMCTRL_PDPARA1_pd_hpm1_clk_div_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_avs_sample_num : 22;
        unsigned int reserved_0 : 2;
        unsigned int pd_avs_sample_shift : 5;
        unsigned int reserved_1 : 3;
    } reg;
} SOC_PMCTRL_PDAVSPARA2_UNION;
#endif
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_num_START (0)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_num_END (21)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_shift_START (24)
#define SOC_PMCTRL_PDAVSPARA2_pd_avs_sample_shift_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_avs_en : 1;
        unsigned int pd_avs_trig : 1;
        unsigned int reserved : 30;
    } reg;
} SOC_PMCTRL_PDAVSEN_UNION;
#endif
#define SOC_PMCTRL_PDAVSEN_pd_avs_en_START (0)
#define SOC_PMCTRL_PDAVSEN_pd_avs_en_END (0)
#define SOC_PMCTRL_PDAVSEN_pd_avs_trig_START (1)
#define SOC_PMCTRL_PDAVSEN_pd_avs_trig_END (1)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_en : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_ACPUHPMCTRL_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMCTRL_acpu_hpm_en_START (0)
#define SOC_PMCTRL_ACPUHPMCTRL_acpu_hpm_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_opc_vld : 5;
        unsigned int reserved_0 : 3;
        unsigned int acpu_hpmx_opc_vld : 5;
        unsigned int reserved_1 : 15;
        unsigned int acpu_hpm_discard : 1;
        unsigned int reserved_2 : 3;
    } reg;
} SOC_PMCTRL_ACPUHPMOPCVALID_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_opc_vld_START (0)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_opc_vld_END (4)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpmx_opc_vld_START (8)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpmx_opc_vld_END (12)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_discard_START (28)
#define SOC_PMCTRL_ACPUHPMOPCVALID_acpu_hpm_discard_END (28)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu0_hpm_opc : 10;
        unsigned int acpu1_hpm_opc : 10;
        unsigned int acpu_cluster_hpm_opc : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_PMCTRL_ACPU01HPMOPC_UNION;
#endif
#define SOC_PMCTRL_ACPU01HPMOPC_acpu0_hpm_opc_START (0)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu0_hpm_opc_END (9)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu1_hpm_opc_START (10)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu1_hpm_opc_END (19)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu_cluster_hpm_opc_START (20)
#define SOC_PMCTRL_ACPU01HPMOPC_acpu_cluster_hpm_opc_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu2_hpm_opc : 10;
        unsigned int acpu3_hpm_opc : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_ACPU23HPMOPC_UNION;
#endif
#define SOC_PMCTRL_ACPU23HPMOPC_acpu2_hpm_opc_START (0)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu2_hpm_opc_END (9)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu3_hpm_opc_START (10)
#define SOC_PMCTRL_ACPU23HPMOPC_acpu3_hpm_opc_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu0_hpm_pc_avs : 10;
        unsigned int acpu1_hpm_pc_avs : 10;
        unsigned int acpu_cluster_hpm_pc_avs : 10;
        unsigned int reserved : 2;
    } reg;
} SOC_PMCTRL_ACPU01HPMPC_UNION;
#endif
#define SOC_PMCTRL_ACPU01HPMPC_acpu0_hpm_pc_avs_START (0)
#define SOC_PMCTRL_ACPU01HPMPC_acpu0_hpm_pc_avs_END (9)
#define SOC_PMCTRL_ACPU01HPMPC_acpu1_hpm_pc_avs_START (10)
#define SOC_PMCTRL_ACPU01HPMPC_acpu1_hpm_pc_avs_END (19)
#define SOC_PMCTRL_ACPU01HPMPC_acpu_cluster_hpm_pc_avs_START (20)
#define SOC_PMCTRL_ACPU01HPMPC_acpu_cluster_hpm_pc_avs_END (29)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu2_hpm_pc_avs : 10;
        unsigned int acpu3_hpm_pc_avs : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_ACPU23HPMPC_UNION;
#endif
#define SOC_PMCTRL_ACPU23HPMPC_acpu2_hpm_pc_avs_START (0)
#define SOC_PMCTRL_ACPU23HPMPC_acpu2_hpm_pc_avs_END (9)
#define SOC_PMCTRL_ACPU23HPMPC_acpu3_hpm_pc_avs_START (10)
#define SOC_PMCTRL_ACPU23HPMPC_acpu3_hpm_pc_avs_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpmclk_bypass : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_ACPUHPMBYPASS_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMBYPASS_acpu_hpmclk_bypass_START (0)
#define SOC_PMCTRL_ACPUHPMBYPASS_acpu_hpmclk_bypass_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_up_time : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_ACPUPMUVOLUPTIME_UNION;
#endif
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_acpu_vol_up_time_START (0)
#define SOC_PMCTRL_ACPUPMUVOLUPTIME_acpu_vol_up_time_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_dw_time : 20;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_ACPUPMUVOLDNTIME_UNION;
#endif
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_acpu_vol_dw_time_START (0)
#define SOC_PMCTRL_ACPUPMUVOLDNTIME_acpu_vol_dw_time_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_addr : 9;
        unsigned int reserved_0 : 7;
        unsigned int acpu_force_pmussi_en : 1;
        unsigned int reserved_1 : 15;
    } reg;
} SOC_PMCTRL_ACPUVOLPMUADDR_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_vol_addr_START (0)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_vol_addr_END (8)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_force_pmussi_en_START (16)
#define SOC_PMCTRL_ACPUVOLPMUADDR_acpu_force_pmussi_en_END (16)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_up_step : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PMCTRL_ACPUVOLUPSTEP_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLUPSTEP_acpu_vol_up_step_START (0)
#define SOC_PMCTRL_ACPUVOLUPSTEP_acpu_vol_up_step_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_dn_step : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PMCTRL_ACPUVOLDNSTEP_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLDNSTEP_acpu_vol_dn_step_START (0)
#define SOC_PMCTRL_ACPUVOLDNSTEP_acpu_vol_dn_step_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_dft_vol : 7;
        unsigned int reserved : 25;
    } reg;
} SOC_PMCTRL_ACPUDFTVOL_UNION;
#endif
#define SOC_PMCTRL_ACPUDFTVOL_acpu_dft_vol_START (0)
#define SOC_PMCTRL_ACPUDFTVOL_acpu_dft_vol_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_dest_vol : 7;
        unsigned int reserved_0 : 1;
        unsigned int acpu_vol_using : 7;
        unsigned int reserved_1 : 17;
    } reg;
} SOC_PMCTRL_ACPUDESTVOL_UNION;
#endif
#define SOC_PMCTRL_ACPUDESTVOL_acpu_dest_vol_START (0)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_dest_vol_END (6)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_vol_using_START (8)
#define SOC_PMCTRL_ACPUDESTVOL_acpu_vol_using_END (14)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_vol_timeout : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_ACPUVOLTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_ACPUVOLTIMEOUT_acpu_vol_timeout_START (0)
#define SOC_PMCTRL_ACPUVOLTIMEOUT_acpu_vol_timeout_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm_en : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_PMCTRL_PDHPMCTRL_UNION;
#endif
#define SOC_PMCTRL_PDHPMCTRL_pd_hpm_en_START (0)
#define SOC_PMCTRL_PDHPMCTRL_pd_hpm_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm0_opc_vld : 1;
        unsigned int pd_hpm1_opc_vld : 1;
        unsigned int pd_hpm2_opc_vld : 1;
        unsigned int pd_hpm3_opc_vld : 1;
        unsigned int reserved_0 : 4;
        unsigned int pd_hpmx0_opc_vld : 1;
        unsigned int pd_hpmx1_opc_vld : 1;
        unsigned int pd_hpmx2_opc_vld : 1;
        unsigned int pd_hpmx3_opc_vld : 1;
        unsigned int reserved_1 : 20;
    } reg;
} SOC_PMCTRL_PDHPMOPCVALID_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm0_opc_vld_START (0)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm0_opc_vld_END (0)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm1_opc_vld_START (1)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm1_opc_vld_END (1)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm2_opc_vld_START (2)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm2_opc_vld_END (2)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm3_opc_vld_START (3)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpm3_opc_vld_END (3)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx0_opc_vld_START (8)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx0_opc_vld_END (8)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx1_opc_vld_START (9)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx1_opc_vld_END (9)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx2_opc_vld_START (10)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx2_opc_vld_END (10)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx3_opc_vld_START (11)
#define SOC_PMCTRL_PDHPMOPCVALID_pd_hpmx3_opc_vld_END (11)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm0_opc : 10;
        unsigned int pd_hpm1_opc : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PDHPMOPC0_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm0_opc_START (0)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm0_opc_END (9)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm1_opc_START (10)
#define SOC_PMCTRL_PDHPMOPC0_pd_hpm1_opc_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm2_opc : 10;
        unsigned int pd_hpm3_opc : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PDHPMOPC1_UNION;
#endif
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm2_opc_START (0)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm2_opc_END (9)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm3_opc_START (10)
#define SOC_PMCTRL_PDHPMOPC1_pd_hpm3_opc_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm0_pc_avs : 10;
        unsigned int pd_hpm1_pc_avs : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PDHPMPC0_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC0_pd_hpm0_pc_avs_START (0)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm0_pc_avs_END (9)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm1_pc_avs_START (10)
#define SOC_PMCTRL_PDHPMPC0_pd_hpm1_pc_avs_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm2_pc_avs : 10;
        unsigned int pd_hpm3_pc_avs : 10;
        unsigned int reserved : 12;
    } reg;
} SOC_PMCTRL_PDHPMPC1_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC1_pd_hpm2_pc_avs_START (0)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm2_pc_avs_END (9)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm3_pc_avs_START (10)
#define SOC_PMCTRL_PDHPMPC1_pd_hpm3_pc_avs_END (19)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int hpm_opc_cmp : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PDHPMPC_UNION;
#endif
#define SOC_PMCTRL_PDHPMPC_hpm_opc_cmp_START (0)
#define SOC_PMCTRL_PDHPMPC_hpm_opc_cmp_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_raw : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTRAW_UNION;
#endif
#define SOC_PMCTRL_PMCINTRAW_int_raw_START (0)
#define SOC_PMCTRL_PMCINTRAW_int_raw_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_clr : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTCLR_UNION;
#endif
#define SOC_PMCTRL_PMCINTCLR_int_clr_START (0)
#define SOC_PMCTRL_PMCINTCLR_int_clr_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_mcu_en : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTENMCU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENMCU_int_mcu_en_START (0)
#define SOC_PMCTRL_PMCINTENMCU_int_mcu_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_mcu_stat : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTSTATMCU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATMCU_int_mcu_stat_START (0)
#define SOC_PMCTRL_PMCINTSTATMCU_int_mcu_stat_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_acpu_en : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTENACPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENACPU_int_acpu_en_START (0)
#define SOC_PMCTRL_PMCINTENACPU_int_acpu_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_acpu_stat : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTSTATACPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATACPU_int_acpu_stat_START (0)
#define SOC_PMCTRL_PMCINTSTATACPU_int_acpu_stat_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_mcpu_en : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTENMCPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTENMCPU_int_mcpu_en_START (0)
#define SOC_PMCTRL_PMCINTENMCPU_int_mcpu_en_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int int_mcpu_stat : 10;
        unsigned int reserved : 22;
    } reg;
} SOC_PMCTRL_PMCINTSTATMCPU_UNION;
#endif
#define SOC_PMCTRL_PMCINTSTATMCPU_int_mcpu_stat_START (0)
#define SOC_PMCTRL_PMCINTSTATMCPU_int_mcpu_stat_END (9)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_dvfs_stat : 4;
        unsigned int reserved_0 : 4;
        unsigned int acpu_avs_stat : 3;
        unsigned int reserved_1 : 1;
        unsigned int ddr_pllsw_stat : 3;
        unsigned int reserved_2 : 1;
        unsigned int process_detect_stat : 3;
        unsigned int reserved_3 : 9;
        unsigned int ddr_dfs_stat : 3;
        unsigned int reserved_4 : 1;
    } reg;
} SOC_PMCTRL_PMCSTATUS_UNION;
#endif
#define SOC_PMCTRL_PMCSTATUS_acpu_dvfs_stat_START (0)
#define SOC_PMCTRL_PMCSTATUS_acpu_dvfs_stat_END (3)
#define SOC_PMCTRL_PMCSTATUS_acpu_avs_stat_START (8)
#define SOC_PMCTRL_PMCSTATUS_acpu_avs_stat_END (10)
#define SOC_PMCTRL_PMCSTATUS_ddr_pllsw_stat_START (12)
#define SOC_PMCTRL_PMCSTATUS_ddr_pllsw_stat_END (14)
#define SOC_PMCTRL_PMCSTATUS_process_detect_stat_START (16)
#define SOC_PMCTRL_PMCSTATUS_process_detect_stat_END (18)
#define SOC_PMCTRL_PMCSTATUS_ddr_dfs_stat_START (28)
#define SOC_PMCTRL_PMCSTATUS_ddr_dfs_stat_END (30)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_pllsw_cfg : 2;
        unsigned int reserved_0 : 6;
        unsigned int ddr_syspll_sw_ack : 1;
        unsigned int ddr_ddrpll0_sw_ack : 1;
        unsigned int ddr_ddrpll1_sw_ack : 1;
        unsigned int reserved_1 : 21;
    } reg;
} SOC_PMCTRL_DDRCLKSEL_UNION;
#endif
#define SOC_PMCTRL_DDRCLKSEL_ddr_pllsw_cfg_START (0)
#define SOC_PMCTRL_DDRCLKSEL_ddr_pllsw_cfg_END (1)
#define SOC_PMCTRL_DDRCLKSEL_ddr_syspll_sw_ack_START (8)
#define SOC_PMCTRL_DDRCLKSEL_ddr_syspll_sw_ack_END (8)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll0_sw_ack_START (9)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll0_sw_ack_END (9)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll1_sw_ack_START (10)
#define SOC_PMCTRL_DDRCLKSEL_ddr_ddrpll1_sw_ack_END (10)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrc_csysreq : 1;
        unsigned int reserved_0 : 3;
        unsigned int ddrc_csysreq_stat : 1;
        unsigned int ddrc_csysack : 1;
        unsigned int reserved_1 : 26;
    } reg;
} SOC_PMCTRL_DDRLPCTRL_UNION;
#endif
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_START (0)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_END (0)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_stat_START (4)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysreq_stat_END (4)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysack_START (5)
#define SOC_PMCTRL_DDRLPCTRL_ddrc_csysack_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll_on_idle : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_DDRCCLKOFFCFG_UNION;
#endif
#define SOC_PMCTRL_DDRCCLKOFFCFG_ddrpll_on_idle_START (0)
#define SOC_PMCTRL_DDRCCLKOFFCFG_ddrpll_on_idle_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll_clk_div_stat : 4;
        unsigned int ddrc_axi_clk_div_stat : 2;
        unsigned int reserved_0 : 2;
        unsigned int ddr_mmu_clk_div_stat : 2;
        unsigned int reserved_1 : 2;
        unsigned int ddr_harq_clk_div_stat : 2;
        unsigned int reserved_2 : 2;
        unsigned int ddrphy_ref_clk_div_stat : 2;
        unsigned int reserved_3 : 14;
    } reg;
} SOC_PMCTRL_DDRCLKDIVSTAT_UNION;
#endif
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrpll_clk_div_stat_START (0)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrpll_clk_div_stat_END (3)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrc_axi_clk_div_stat_START (4)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrc_axi_clk_div_stat_END (5)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_mmu_clk_div_stat_START (8)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_mmu_clk_div_stat_END (9)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_harq_clk_div_stat_START (12)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddr_harq_clk_div_stat_END (13)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrphy_ref_clk_div_stat_START (16)
#define SOC_PMCTRL_DDRCLKDIVSTAT_ddrphy_ref_clk_div_stat_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_pllsw_start : 1;
        unsigned int reserved_0 : 3;
        unsigned int ddr_fs_done : 1;
        unsigned int reserved_1 : 27;
    } reg;
} SOC_PMCTRL_DDRPLLSWEN_UNION;
#endif
#define SOC_PMCTRL_DDRPLLSWEN_ddr_pllsw_start_START (0)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_pllsw_start_END (0)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_fs_done_START (4)
#define SOC_PMCTRL_DDRPLLSWEN_ddr_fs_done_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_dfs_start : 1;
        unsigned int reserved : 31;
    } reg;
} SOC_PMCTRL_DDRDFSEN_UNION;
#endif
#define SOC_PMCTRL_DDRDFSEN_ddr_dfs_start_START (0)
#define SOC_PMCTRL_DDRDFSEN_ddr_dfs_start_END (0)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddr_clkdiv_time : 6;
        unsigned int reserved : 26;
    } reg;
} SOC_PMCTRL_DDRDIVTIMEOUT_UNION;
#endif
#define SOC_PMCTRL_DDRDIVTIMEOUT_ddr_clkdiv_time_START (0)
#define SOC_PMCTRL_DDRDIVTIMEOUT_ddr_clkdiv_time_END (5)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll_clk_div_cfg : 4;
        unsigned int ddrc_axi_clk_div_cfg : 2;
        unsigned int reserved_0 : 2;
        unsigned int ddr_mmu_clk_div_cfg : 2;
        unsigned int reserved_1 : 2;
        unsigned int ddr_harq_clk_div_cfg : 2;
        unsigned int reserved_2 : 2;
        unsigned int ddrphy_ref_clk_div_cfg : 2;
        unsigned int reserved_3 : 14;
    } reg;
} SOC_PMCTRL_DDRCLKDIVCFG_UNION;
#endif
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrpll_clk_div_cfg_START (0)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrpll_clk_div_cfg_END (3)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrc_axi_clk_div_cfg_START (4)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrc_axi_clk_div_cfg_END (5)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_mmu_clk_div_cfg_START (8)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_mmu_clk_div_cfg_END (9)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_harq_clk_div_cfg_START (12)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddr_harq_clk_div_cfg_END (13)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrphy_ref_clk_div_cfg_START (16)
#define SOC_PMCTRL_DDRCLKDIVCFG_ddrphy_ref_clk_div_cfg_END (17)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int ddrpll_clk_div_prof : 4;
        unsigned int ddrc_axi_clk_div_prof : 2;
        unsigned int reserved_0 : 2;
        unsigned int ddr_mmu_clk_div_prof : 2;
        unsigned int reserved_1 : 2;
        unsigned int ddr_harq_clk_div_prof : 2;
        unsigned int reserved_2 : 2;
        unsigned int ddrphy_ref_clk_div_prof : 2;
        unsigned int reserved_3 : 2;
        unsigned int ddr_pllsw_prof : 2;
        unsigned int reserved_4 : 10;
    } reg;
} SOC_PMCTRL_DDRCLKPROFILE_UNION;
#endif
#define SOC_PMCTRL_DDRCLKPROFILE_ddrpll_clk_div_prof_START (0)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrpll_clk_div_prof_END (3)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrc_axi_clk_div_prof_START (4)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrc_axi_clk_div_prof_END (5)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_mmu_clk_div_prof_START (8)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_mmu_clk_div_prof_END (9)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_harq_clk_div_prof_START (12)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_harq_clk_div_prof_END (13)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrphy_ref_clk_div_prof_START (16)
#define SOC_PMCTRL_DDRCLKPROFILE_ddrphy_ref_clk_div_prof_END (17)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_pllsw_prof_START (20)
#define SOC_PMCTRL_DDRCLKPROFILE_ddr_pllsw_prof_END (21)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_mask_en : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_ACPUHPMMASKEN_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKEN_acpu_hpm_mask_en_START (0)
#define SOC_PMCTRL_ACPUHPMMASKEN_acpu_hpm_mask_en_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_mask_dis : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_ACPUHPMMASKDIS_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKDIS_acpu_hpm_mask_dis_START (0)
#define SOC_PMCTRL_ACPUHPMMASKDIS_acpu_hpm_mask_dis_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int acpu_hpm_mask : 5;
        unsigned int reserved : 27;
    } reg;
} SOC_PMCTRL_ACPUHPMMASKSTAT_UNION;
#endif
#define SOC_PMCTRL_ACPUHPMMASKSTAT_acpu_hpm_mask_START (0)
#define SOC_PMCTRL_ACPUHPMMASKSTAT_acpu_hpm_mask_END (4)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm_mask_en : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_PMCTRL_PDHPMMASKEN_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKEN_pd_hpm_mask_en_START (0)
#define SOC_PMCTRL_PDHPMMASKEN_pd_hpm_mask_en_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm_mask_dis : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_PMCTRL_PDHPMMASKDIS_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKDIS_pd_hpm_mask_dis_START (0)
#define SOC_PMCTRL_PDHPMMASKDIS_pd_hpm_mask_dis_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int pd_hpm_mask : 4;
        unsigned int reserved : 28;
    } reg;
} SOC_PMCTRL_PDHPMMASKSTAT_UNION;
#endif
#define SOC_PMCTRL_PDHPMMASKSTAT_pd_hpm_mask_START (0)
#define SOC_PMCTRL_PDHPMMASKSTAT_pd_hpm_mask_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_MEDPLLRESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_ACPUPLLRESERVED1_UNION;
#endif
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int reserved : 32;
    } reg;
} SOC_PMCTRL_GPUPLLRESERVED1_UNION;
#endif
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
