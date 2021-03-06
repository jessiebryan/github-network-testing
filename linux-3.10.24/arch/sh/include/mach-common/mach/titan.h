/*
 * Platform definitions for Titan
 */
#ifndef _ASM_SH_TITAN_H
#define _ASM_SH_TITAN_H

#include <linux/sh_intc.h>

#define __IO_PREFIX titan
#include <asm/io_generic.h>

/* IRQ assignments */
#define TITAN_IRQ_WAN		evt2irq(0x240)	/* eth0 (WAN) */
#define TITAN_IRQ_LAN		evt2irq(0x2a0)	/* eth1 (LAN) */
#define TITAN_IRQ_MPCIA		evt2irq(0x300)	/* mPCI A */
#define TITAN_IRQ_MPCIB		evt2irq(0x360)	/* mPCI B */
#define TITAN_IRQ_USB		evt2irq(0x360)	/* USB */

#endif /* __ASM_SH_TITAN_H */
Tue Jul 19 12:50:20 PDT 2016
Fri Jul 22 16:08:44 PDT 2016
Sun, Jul 24, 2016  5:06:40 PM
Mon, Jul 25, 2016 11:57:10 PM
