/*
 * Copyright (C) 2010 ST-Ericsson SA
 * Licensed under GPLv2.
 *
 * Author: Arun R Murthy <arun.murthy@stericsson.com>
 * Author: Daniel Willerud <daniel.willerud@stericsson.com>
 */

#ifndef	_AB8500_GPADC_H
#define _AB8500_GPADC_H

/* GPADC source: From datasheet(ADCSwSel[4:0] in GPADCCtrl2) */
#define BAT_CTRL	0x01
#define BTEMP_BALL	0x02
#define MAIN_CHARGER_V	0x03
#define ACC_DETECT1	0x04
#define ACC_DETECT2	0x05
#define ADC_AUX1	0x06
#define ADC_AUX2	0x07
#define MAIN_BAT_V	0x08
#define VBUS_V		0x09
#define MAIN_CHARGER_C	0x0A
#define USB_CHARGER_C	0x0B
#define BK_BAT_V	0x0C
#define DIE_TEMP	0x0D

struct ab8500_gpadc;

struct ab8500_gpadc *ab8500_gpadc_get(char *name);
int ab8500_gpadc_convert(struct ab8500_gpadc *gpadc, u8 input);

#endif /* _AB8500_GPADC_H */
Tue Jul 19 12:34:25 PDT 2016
Fri Jul 22 15:39:27 PDT 2016
Sun, Jul 24, 2016  1:26:32 PM
Mon, Jul 25, 2016  6:36:02 PM
Mon, Jul 25, 2016  7:48:58 PM
Tue, Jul 26, 2016  2:24:18 PM
