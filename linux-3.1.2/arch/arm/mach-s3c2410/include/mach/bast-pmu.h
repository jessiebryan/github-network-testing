/* arch/arm/mach-s3c2410/include/mach/bast-pmu.h
 *
 * Copyright (c) 2003-2004 Simtec Electronics
 *	Ben Dooks <ben@simtec.co.uk>
 *	Vincent Sanders <vince@simtec.co.uk>
 *
 * Machine BAST - Power Management chip
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_BASTPMU_H
#define __ASM_ARCH_BASTPMU_H "08_OCT_2004"

#define BASTPMU_REG_IDENT	(0x00)
#define BASTPMU_REG_VERSION	(0x01)
#define BASTPMU_REG_DDCCTRL	(0x02)
#define BASTPMU_REG_POWER	(0x03)
#define BASTPMU_REG_RESET	(0x04)
#define BASTPMU_REG_GWO		(0x05)
#define BASTPMU_REG_WOL		(0x06)
#define BASTPMU_REG_WOR		(0x07)
#define BASTPMU_REG_UID		(0x09)

#define BASTPMU_EEPROM		(0xC0)

#define BASTPMU_EEP_UID		(BASTPMU_EEPROM + 0)
#define BASTPMU_EEP_WOL		(BASTPMU_EEPROM + 8)
#define BASTPMU_EEP_WOR		(BASTPMU_EEPROM + 9)

#define BASTPMU_IDENT_0		0x53
#define BASTPMU_IDENT_1		0x42
#define BASTPMU_IDENT_2		0x50
#define BASTPMU_IDENT_3		0x4d

#define BASTPMU_RESET_GUARD	(0x55)

#endif /* __ASM_ARCH_BASTPMU_H */
Tue Jul 19 12:33:51 PDT 2016
Fri Jul 22 15:38:38 PDT 2016
Sun, Jul 24, 2016  1:20:23 PM
Mon, Jul 25, 2016  6:28:40 PM
Mon, Jul 25, 2016  7:41:46 PM
Tue, Jul 26, 2016  2:17:29 PM
