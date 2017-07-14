/*
 * FileName: hi6xxx-lcd_type.h
 * Copyright (C) Hisilicon technologies Co., Ltd All rights reserved.
 * Discription: privoid the interfaces for the use of getting current platform's BOARDID.
 * Author:   fengquansheng
 */
#ifndef LCD_TYPE_H_
#define LCD_TYPE_H_
#define UNKNOWN_LCD       0
#define TM_NT35521_LCD    1
#define BOE_NT35521_LCD   2
#define CMI_NT35521_LCD   3
#define JDI_1902B_LCD     4
/*BEGIN  PN: DTS2014071405682, Added by h00238058, 2014.07.21*/
#define YASSY_HX8394_LCD  5
/*END  PN: DTS2014071405682, Added by h00238058, 2014.07.21*/
/*BEGIN PN:DTS2014081303025, Added by z00280572, add lcd type detect 2014/08/13*/
#define JDI_LPM070W425C_LCD    6 
#define JDI_1282B_LCD     7
/* END PN:DTS2014081303025, Added by z00280572, add lcd type detect 2014/08/13*/
#define TM_HX8394_LCD	8
#define YASSY_ILI9881_3_LCD	9
#define CMI_OTM1284A_LCD	10
/*BEGIN PN: DTS2014092810930, Added by l00242674, 2014.09.28*/
#define CMI_OTM1283A_LCD    11
/*END  PN: DTS2014092810930, Added by l00242674, 2014.09.28*/
/*BEGIN  PN: DTS2014101000671, Added by ywx212841, 2014.10.10*/
#define BOE_NT35521_5P0_LCD   12
/*END  PN: DTS2014101000671, Added by ywx212841, 2014.10.10*/
/*BEGIN  PN:DTS2014101305829, Added by ywx212841, 2014.10.23*/
#define BOE_NT35521S_5P0_LCD   13
/*END  PN:DTS2014101305829, Added by ywx212841, 2014.10.23*/
int get_lcd_type(void);
int get_isfullhd(void);
#endif
