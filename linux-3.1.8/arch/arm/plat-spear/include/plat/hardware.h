/*
 * arch/arm/plat-spear/include/plat/hardware.h
 *
 * Hardware definitions for SPEAr
 *
 * Copyright (C) 2010 ST Microelectronics
 * Viresh Kumar<viresh.kumar@st.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2. This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#ifndef __PLAT_HARDWARE_H
#define __PLAT_HARDWARE_H

#ifndef __ASSEMBLY__
#define IOMEM(x)	((void __iomem __force *)(x))
#else
#define IOMEM(x)	(x)
#endif

#endif /* __PLAT_HARDWARE_H */
Tue Jul 19 12:37:16 PDT 2016
Fri Jul 22 15:44:17 PDT 2016
Sun, Jul 24, 2016  2:02:02 PM
Mon, Jul 25, 2016  8:30:53 PM
