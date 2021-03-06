/* linux/arch/arm/plat-samsung/include/plat/adc-core.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * Samsung ADC Controller core functions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_PLAT_ADC_CORE_H
#define __ASM_PLAT_ADC_CORE_H __FILE__

/* These functions are only for use with the core support code, such as
 * the cpu specific initialisation code
 */

/* re-define device name depending on support. */
static inline void s3c_adc_setname(char *name)
{
#ifdef CONFIG_SAMSUNG_DEV_ADC
	s3c_device_adc.name = name;
#endif
}

#endif /* __ASM_PLAT_ADC_CORE_H */
Tue Jul 19 12:33:16 PDT 2016
Fri Jul 22 15:37:36 PDT 2016
Sun, Jul 24, 2016  1:12:30 PM
Mon, Jul 25, 2016  6:19:13 PM
Mon, Jul 25, 2016  7:32:30 PM
Tue, Jul 26, 2016  2:08:42 PM
