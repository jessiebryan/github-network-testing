/*
 * Copyright 2003, 04 PMC-Sierra
 * Author: Manish Lachwani (lachwani@pmc-sierra.com)
 * Copyright 2004 Ralf Baechle <ralf@linux-mips.org>
 *
 * Board specific definititions for the PMC-Sierra Yosemite
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */
#ifndef __SETUP_H__
#define __SETUP_H__

/* M48T37 RTC + NVRAM */
#define	YOSEMITE_RTC_BASE		0xfc800000
#define	YOSEMITE_RTC_SIZE		0x00800000

#define HYPERTRANSPORT_BAR0_ADDR        0x00000006
#define HYPERTRANSPORT_SIZE0            0x0fffffff
#define HYPERTRANSPORT_BAR0_ATTR        0x00002000

#define HYPERTRANSPORT_ENABLE           0x6

/*
 * EEPROM Size
 */
#define	TITAN_ATMEL_24C32_SIZE		32768
#define	TITAN_ATMEL_24C64_SIZE		65536

#endif /* __SETUP_H__ */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:53 PM
Mon, Jul 25, 2016  6:20:52 PM
Mon, Jul 25, 2016  7:34:07 PM
