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
Tue Jul 19 12:52:52 PDT 2016
Fri Jul 22 16:13:40 PDT 2016
Sun, Jul 24, 2016  5:43:01 PM
Tue, Jul 26, 2016 12:37:17 AM
