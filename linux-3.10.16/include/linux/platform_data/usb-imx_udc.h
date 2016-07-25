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
Tue Jul 19 12:45:32 PDT 2016
Fri Jul 22 15:59:42 PDT 2016
Sun, Jul 24, 2016  3:57:06 PM
