/*
 * GPIO (DIO) header for Technologic Systems TS-5500
 *
 * Copyright (c) 2012 Savoir-faire Linux Inc.
 *	Vivien Didelot <vivien.didelot@savoirfairelinux.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef _PDATA_GPIO_TS5500_H
#define _PDATA_GPIO_TS5500_H

/**
 * struct ts5500_dio_platform_data - TS-5500 pin block configuration
 * @base:	The GPIO base number to use.
 * @strap:	The only pin connected to an interrupt in a block is input-only.
 *		If you need a bidirectional line which can trigger an IRQ, you
 *		may strap it with an in/out pin. This flag indicates this case.
 */
struct ts5500_dio_platform_data {
	int base;
	bool strap;
};

#endif /* _PDATA_GPIO_TS5500_H */
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:10 PM
Mon, Jul 25, 2016 11:31:05 PM
