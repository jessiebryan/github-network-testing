/*
 * TI DaVinci AEMIF support
 *
 * Copyright 2010 (C) Texas Instruments, Inc. http://www.ti.com/
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef _MACH_DAVINCI_AEMIF_H
#define _MACH_DAVINCI_AEMIF_H

#define NRCSR_OFFSET		0x00
#define AWCCR_OFFSET		0x04
#define A1CR_OFFSET		0x10

#define ACR_ASIZE_MASK		0x3
#define ACR_EW_MASK		BIT(30)
#define ACR_SS_MASK		BIT(31)

/* All timings in nanoseconds */
struct davinci_aemif_timing {
	u8	wsetup;
	u8	wstrobe;
	u8	whold;

	u8	rsetup;
	u8	rstrobe;
	u8	rhold;

	u8	ta;
};

int davinci_aemif_setup_timing(struct davinci_aemif_timing *t,
					void __iomem *base, unsigned cs);
#endif
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:35 PDT 2016
Sun, Jul 24, 2016  1:19:57 PM
Mon, Jul 25, 2016  6:28:08 PM
Mon, Jul 25, 2016  7:41:14 PM
Tue, Jul 26, 2016  2:16:59 PM
