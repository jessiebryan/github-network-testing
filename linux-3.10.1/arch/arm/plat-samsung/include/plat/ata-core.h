/* linux/arch/arm/plat-samsung/include/plat/ata-core.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com
 *
 * Samsung CF-ATA Controller core functions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_PLAT_ATA_CORE_H
#define __ASM_PLAT_ATA_CORE_H __FILE__

/* These functions are only for use with the core support code, such as
 * the cpu specific initialisation code
*/

/* re-define device name depending on support. */
static inline void s3c_cfcon_setname(char *name)
{
#ifdef CONFIG_SAMSUNG_DEV_IDE
	s3c_device_cfcon.name = name;
#endif
}

#endif /* __ASM_PLAT_ATA_CORE_H */
Tue Jul 19 12:38:29 PDT 2016
Fri Jul 22 15:46:30 PDT 2016
Sun, Jul 24, 2016  2:18:13 PM
Mon, Jul 25, 2016  8:49:20 PM
