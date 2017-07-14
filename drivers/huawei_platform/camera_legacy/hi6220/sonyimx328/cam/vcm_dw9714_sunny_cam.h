/*BEGIN PN: DTS2015120908973 , added by wx290899, 2015/12/09*/
/* BEGIN PN: DTS2015040101015, Modified by jiangtao WX224755, 2015/04/01*/
/* BEGIN PN: DTS2014122600402, Modified by zhangyuan 00216524, 2014/12/26*/
/* BEGIN PN: DTS2014102008488, Modified by zhangyuan 00216524, 2014/10/20*/
/* BEGIN PN: DTS2014093000089, Modified by zhangyuan 00216524, 2014/09/30*/
#ifndef __VCM_DW9714_SUNNY_CAM_H__

#define __VCM_DW9714_SUNNY_CAM_H__

/*vcm_type*/
VCM_DW9714_Sunny,
/*vcm_bits*/
9,
/*vcm_id*/
0x18,
/*moveLensAddr*/
{0,0},             /* moveLensAddr can be ommitted for DW9714 */
/*offsetInit*/
0,                 /* maybe different in each AF mode */
/*fullRange*/
1023,              /* maybe different in each AF mode */
/*infiniteDistance*/
0x50,              /* should be calibrated */
/*normalDistanceEnd*/
0x240,
/*normalStep*/
0x0c,              /* coarse step */
/*normalStrideRatio*/
0x18,
/*videoDistanceEnd*/
0x200,
/*videoStep*/
0x10,
/*videoStrideRatio*/
0x20,
/*strideOffset*/
0xc0,              /* large stride will start at (infiniteDistance+videoStrideOffset), this value must common multiple of videoStep and normalStep*/
/*coarseStep*/
0,                 /*coarseStep will be calculated by other params*/
/*fineStep*/
0,                 /*fineStep will be calculated by other params*/
/*motorResTime*/
10,
/*motorDelayTime*/
12,
/*strideDivideOffset*/
0x60,
/*startCurrentOffset*/
0x90,
/*moveRange*/
RANGE_NORMAL,		/* Added for DTS2012052902948 by j00212990 2012-06-06 */
/*get_vcm_otp*/
NULL,
/*fastShotOffset*/  /*added for fastShot mode focus*/
0x66,
#endif //__VCM_DW9714_SUNNY_CAM_H__
/* END PN: DTS2014093000089, Modified by zhangyuan 00216524, 2014/09/30*/
/* END PN: DTS2014102008488, Modified by zhangyuan 00216524, 2014/10/20*/
/* END PN: DTS2014122600402, Modified by zhangyuan 00216524, 2014/12/26*/
/* END PN: DTS2015040101015, Modified by jiangtao WX224755, 2015/04/01*/
/*END PN: DTS2015120908973 , added by wx290899, 2015/12/09*/