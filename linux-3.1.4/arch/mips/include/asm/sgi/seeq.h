/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2007 by Ralf Baechle
 */
#ifndef __ASM_SGI_SEEQ_H
#define __ASM_SGI_SEEQ_H

#include <linux/if_ether.h>

#include <asm/sgi/hpc3.h>

struct sgiseeq_platform_data {
	struct hpc3_regs *hpc;
	unsigned int irq;
	unsigned char mac[ETH_ALEN];
};

#endif /* __ASM_SGI_SEEQ_H */
Tue Jul 19 12:35:38 PDT 2016
Fri Jul 22 15:41:07 PDT 2016
Sun, Jul 24, 2016  1:38:33 PM
Mon, Jul 25, 2016  8:03:07 PM
Tue, Jul 26, 2016  2:37:36 PM
