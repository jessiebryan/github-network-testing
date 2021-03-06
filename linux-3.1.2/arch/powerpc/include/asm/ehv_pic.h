/*
 * EHV_PIC private definitions and structure.
 *
 * Copyright 2008-2010 Freescale Semiconductor, Inc.
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2.  This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef __EHV_PIC_H__
#define __EHV_PIC_H__

#include <linux/irq.h>

#define NR_EHV_PIC_INTS 1024

#define EHV_PIC_INFO(name) EHV_PIC_##name

#define EHV_PIC_VECPRI_POLARITY_NEGATIVE 0
#define EHV_PIC_VECPRI_POLARITY_POSITIVE 1
#define EHV_PIC_VECPRI_SENSE_EDGE 0
#define EHV_PIC_VECPRI_SENSE_LEVEL 0x2
#define EHV_PIC_VECPRI_POLARITY_MASK 0x1
#define EHV_PIC_VECPRI_SENSE_MASK 0x2

struct ehv_pic {
	/* The remapper for this EHV_PIC */
	struct irq_host	*irqhost;

	/* The "linux" controller struct */
	struct irq_chip	hc_irq;

	/* core int flag */
	int coreint_flag;
};

void ehv_pic_init(void);
unsigned int ehv_pic_get_irq(void);

#endif /* __EHV_PIC_H__ */
Tue Jul 19 12:33:59 PDT 2016
Fri Jul 22 15:38:54 PDT 2016
Sun, Jul 24, 2016  1:22:23 PM
Mon, Jul 25, 2016  6:31:02 PM
Mon, Jul 25, 2016  7:44:06 PM
Tue, Jul 26, 2016  2:19:44 PM
