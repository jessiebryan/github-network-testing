/*
 * arch/arm/plat-spear/include/plat/io.h
 *
 * IO definitions for SPEAr platform
 *
 * Copyright (C) 2009 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_IO_H
#define __PLAT_IO_H

#define IO_SPACE_LIMIT		0xFFFFFFFF

#define __io(a)			__typesafe_io(a)
#define __mem_pci(a)		(a)

#endif /* __PLAT_IO_H */
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:56 PDT 2016
Sun, Jul 24, 2016  1:37:18 PM
