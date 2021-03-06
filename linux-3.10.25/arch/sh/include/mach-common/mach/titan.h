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
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:58 PDT 2016
Sun, Jul 24, 2016  5:15:59 PM
Tue, Jul 26, 2016 12:07:28 AM
