#ifndef __SOC_CM3CACHE_INTERFACE_H__
#define __SOC_CM3CACHE_INTERFACE_H__ 
#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif
#define SOC_CM3CACHE_CACHE_CTRL_ADDR(base) ((base) + (0x0))
#define SOC_CM3CACHE_CACHE_STAT_ADDR(base) ((base) + (0x4))
#define SOC_CM3CACHE_CACHE_CLR_ADDR(base) ((base) + (0x8))
#define SOC_CM3CACHE_PU_CTRL_ADDR(base) ((base) + (0xC))
#define SOC_CM3CACHE_PU_CACHEABLE_ADDR(base) ((base) + (0x10))
#define SOC_CM3CACHE_PU_BUFFERABLE_ADDR(base) ((base) + (0x14))
#define SOC_CM3CACHE_PU_PROTECTION_ADDR(base) ((base) + (0x18))
#define SOC_CM3CACHE_PU_AREA0_ADDR(base) ((base) + (0x1C))
#define SOC_CM3CACHE_PU_AREA1_ADDR(base) ((base) + (0x20))
#define SOC_CM3CACHE_PU_AREA2_ADDR(base) ((base) + (0x24))
#define SOC_CM3CACHE_PU_AREA3_ADDR(base) ((base) + (0x28))
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int CACHEEN : 1;
        unsigned int CACHEFLUSH : 1;
        unsigned int LOCKABORTDIS : 1;
        unsigned int CACHEABORT : 1;
        unsigned int LOCKABORT : 1;
        unsigned int USERABORT : 1;
        unsigned int AHBABORT : 1;
        unsigned int reserved : 25;
    } reg;
} SOC_CM3CACHE_CACHE_CTRL_UNION;
#endif
#define SOC_CM3CACHE_CACHE_CTRL_CACHEEN_START (0)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEEN_END (0)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEFLUSH_START (1)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEFLUSH_END (1)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORTDIS_START (2)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORTDIS_END (2)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEABORT_START (3)
#define SOC_CM3CACHE_CACHE_CTRL_CACHEABORT_END (3)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORT_START (4)
#define SOC_CM3CACHE_CACHE_CTRL_LOCKABORT_END (4)
#define SOC_CM3CACHE_CACHE_CTRL_USERABORT_START (5)
#define SOC_CM3CACHE_CACHE_CTRL_USERABORT_END (5)
#define SOC_CM3CACHE_CACHE_CTRL_AHBABORT_START (6)
#define SOC_CM3CACHE_CACHE_CTRL_AHBABORT_END (6)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int CACHESIZE : 3;
        unsigned int reserved : 29;
    } reg;
} SOC_CM3CACHE_CACHE_STAT_UNION;
#endif
#define SOC_CM3CACHE_CACHE_STAT_CACHESIZE_START (0)
#define SOC_CM3CACHE_CACHE_STAT_CACHESIZE_END (2)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int FLUSHEDWAY : 2;
        unsigned int FLUSHEDLINE : 7;
        unsigned int reserved : 23;
    } reg;
} SOC_CM3CACHE_CACHE_CLR_UNION;
#endif
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDWAY_START (0)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDWAY_END (1)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDLINE_START (2)
#define SOC_CM3CACHE_CACHE_CLR_FLUSHEDLINE_END (8)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int PUENABLE : 1;
        unsigned int PUAMBUF : 1;
        unsigned int PUAMCAC : 1;
        unsigned int PUAMPRO : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CM3CACHE_PU_CTRL_UNION;
#endif
#define SOC_CM3CACHE_PU_CTRL_PUENABLE_START (0)
#define SOC_CM3CACHE_PU_CTRL_PUENABLE_END (0)
#define SOC_CM3CACHE_PU_CTRL_PUAMBUF_START (1)
#define SOC_CM3CACHE_PU_CTRL_PUAMBUF_END (1)
#define SOC_CM3CACHE_PU_CTRL_PUAMCAC_START (2)
#define SOC_CM3CACHE_PU_CTRL_PUAMCAC_END (2)
#define SOC_CM3CACHE_PU_CTRL_PUAMPRO_START (3)
#define SOC_CM3CACHE_PU_CTRL_PUAMPRO_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int CACHEABLE0 : 1;
        unsigned int CACHEABLE1 : 1;
        unsigned int CACHEABLE2 : 1;
        unsigned int CACHEABLE3 : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CM3CACHE_PU_CACHEABLE_UNION;
#endif
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE0_START (0)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE0_END (0)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE1_START (1)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE1_END (1)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE2_START (2)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE2_END (2)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE3_START (3)
#define SOC_CM3CACHE_PU_CACHEABLE_CACHEABLE3_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int BUFFERABLE0 : 1;
        unsigned int BUFFERABLE1 : 1;
        unsigned int BUFFERABLE2 : 1;
        unsigned int BUFFERABLE3 : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CM3CACHE_PU_BUFFERABLE_UNION;
#endif
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE0_START (0)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE0_END (0)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE1_START (1)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE1_END (1)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE2_START (2)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE2_END (2)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE3_START (3)
#define SOC_CM3CACHE_PU_BUFFERABLE_BUFFERABLE3_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int PERMISSION0 : 1;
        unsigned int PERMISSION1 : 1;
        unsigned int PERMISSION2 : 1;
        unsigned int PERMISSION3 : 1;
        unsigned int reserved : 28;
    } reg;
} SOC_CM3CACHE_PU_PROTECTION_UNION;
#endif
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION0_START (0)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION0_END (0)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION1_START (1)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION1_END (1)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION2_START (2)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION2_END (2)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION3_START (3)
#define SOC_CM3CACHE_PU_PROTECTION_PERMISSION3_END (3)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int AREAENABLE : 1;
        unsigned int AREASIZE : 5;
        unsigned int reserved : 6;
        unsigned int BASE : 20;
    } reg;
} SOC_CM3CACHE_PU_AREA0_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA0_AREAENABLE_START (0)
#define SOC_CM3CACHE_PU_AREA0_AREAENABLE_END (0)
#define SOC_CM3CACHE_PU_AREA0_AREASIZE_START (1)
#define SOC_CM3CACHE_PU_AREA0_AREASIZE_END (5)
#define SOC_CM3CACHE_PU_AREA0_BASE_START (12)
#define SOC_CM3CACHE_PU_AREA0_BASE_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int AREAENABLE : 1;
        unsigned int AREASIZE : 5;
        unsigned int reserved : 6;
        unsigned int BASE : 20;
    } reg;
} SOC_CM3CACHE_PU_AREA1_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA1_AREAENABLE_START (0)
#define SOC_CM3CACHE_PU_AREA1_AREAENABLE_END (0)
#define SOC_CM3CACHE_PU_AREA1_AREASIZE_START (1)
#define SOC_CM3CACHE_PU_AREA1_AREASIZE_END (5)
#define SOC_CM3CACHE_PU_AREA1_BASE_START (12)
#define SOC_CM3CACHE_PU_AREA1_BASE_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int AREAENABLE : 1;
        unsigned int AREASIZE : 5;
        unsigned int reserved : 6;
        unsigned int BASE : 20;
    } reg;
} SOC_CM3CACHE_PU_AREA2_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA2_AREAENABLE_START (0)
#define SOC_CM3CACHE_PU_AREA2_AREAENABLE_END (0)
#define SOC_CM3CACHE_PU_AREA2_AREASIZE_START (1)
#define SOC_CM3CACHE_PU_AREA2_AREASIZE_END (5)
#define SOC_CM3CACHE_PU_AREA2_BASE_START (12)
#define SOC_CM3CACHE_PU_AREA2_BASE_END (31)
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int value;
    struct
    {
        unsigned int AREAENABLE : 1;
        unsigned int AREASIZE : 5;
        unsigned int reserved : 6;
        unsigned int BASE : 20;
    } reg;
} SOC_CM3CACHE_PU_AREA3_UNION;
#endif
#define SOC_CM3CACHE_PU_AREA3_AREAENABLE_START (0)
#define SOC_CM3CACHE_PU_AREA3_AREAENABLE_END (0)
#define SOC_CM3CACHE_PU_AREA3_AREASIZE_START (1)
#define SOC_CM3CACHE_PU_AREA3_AREASIZE_END (5)
#define SOC_CM3CACHE_PU_AREA3_BASE_START (12)
#define SOC_CM3CACHE_PU_AREA3_BASE_END (31)
#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif
#endif
