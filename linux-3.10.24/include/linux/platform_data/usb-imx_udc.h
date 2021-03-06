/*
 *	Copyright (C) 2008 Darius Augulis <augulis.darius@gmail.com>
 *
 *	This program is free software; you can redistribute it and/or modify
 *	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation; either version 2 of the License, or
 *	(at your option) any later version.
 *
 *	This program is distributed in the hope that it will be useful,
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *	GNU General Public License for more details.
 */

#ifndef __ASM_ARCH_MXC_USB
#define __ASM_ARCH_MXC_USB

struct imxusb_platform_data {
	int (*init)(struct device *);
	void (*exit)(struct device *);
};

#endif /* __ASM_ARCH_MXC_USB */
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:19 PDT 2016
Sun, Jul 24, 2016  5:11:03 PM
Tue, Jul 26, 2016 12:02:00 AM
