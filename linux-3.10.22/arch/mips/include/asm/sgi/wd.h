/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 by Ralf Baechle
 */
#ifndef __ASM_SGI_WD_H
#define __ASM_SGI_WD_H

#include <asm/sgi/hpc3.h>

struct sgiwd93_platform_data {
	unsigned int unit;
	unsigned int irq;
	struct hpc3_scsiregs *hregs;
	unsigned char *wdregs;
};

#endif /* __ASM_SGI_WD_H */
Tue Jul 19 12:48:59 PDT 2016
Fri Jul 22 16:06:11 PDT 2016
Sun, Jul 24, 2016  4:47:14 PM
Mon, Jul 25, 2016 11:35:39 PM
