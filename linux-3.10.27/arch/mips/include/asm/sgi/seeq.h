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
Tue Jul 19 12:52:13 PDT 2016
Fri Jul 22 16:12:24 PDT 2016
Sun, Jul 24, 2016  5:33:43 PM
Tue, Jul 26, 2016 12:27:01 AM
