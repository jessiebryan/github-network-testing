#ifndef __MACH_CT_CA9X4_H
#define __MACH_CT_CA9X4_H

/*
 * Physical base addresses
 */
#define CT_CA9X4_CLCDC		(0x10020000)
#define CT_CA9X4_AXIRAM		(0x10060000)
#define CT_CA9X4_DMC		(0x100e0000)
#define CT_CA9X4_SMC		(0x100e1000)
#define CT_CA9X4_SCC		(0x100e2000)
#define CT_CA9X4_SP804_TIMER	(0x100e4000)
#define CT_CA9X4_SP805_WDT	(0x100e5000)
#define CT_CA9X4_TZPC		(0x100e6000)
#define CT_CA9X4_GPIO		(0x100e8000)
#define CT_CA9X4_FASTAXI	(0x100e9000)
#define CT_CA9X4_SLOWAXI	(0x100ea000)
#define CT_CA9X4_TZASC		(0x100ec000)
#define CT_CA9X4_CORESIGHT	(0x10200000)
#define CT_CA9X4_MPIC		(0x1e000000)
#define CT_CA9X4_SYSTIMER	(0x1e004000)
#define CT_CA9X4_SYSWDT		(0x1e007000)
#define CT_CA9X4_L2CC		(0x1e00a000)

#define A9_MPCORE_SCU		(CT_CA9X4_MPIC + 0x0000)
#define A9_MPCORE_GIC_CPU	(CT_CA9X4_MPIC + 0x0100)
#define A9_MPCORE_GIT		(CT_CA9X4_MPIC + 0x0200)
#define A9_MPCORE_TWD		(CT_CA9X4_MPIC + 0x0600)
#define A9_MPCORE_GIC_DIST	(CT_CA9X4_MPIC + 0x1000)

/*
 * Interrupts.  Those in {} are for AMBA devices
 */
#define IRQ_CT_CA9X4_CLCDC	{ 76 }
#define IRQ_CT_CA9X4_DMC	{ 0 }
#define IRQ_CT_CA9X4_SMC	{ 77, 78 }
#define IRQ_CT_CA9X4_TIMER0	80
#define IRQ_CT_CA9X4_TIMER1	81
#define IRQ_CT_CA9X4_GPIO	{ 82 }
#define IRQ_CT_CA9X4_PMU_CPU0	92
#define IRQ_CT_CA9X4_PMU_CPU1	93
#define IRQ_CT_CA9X4_PMU_CPU2	94
#define IRQ_CT_CA9X4_PMU_CPU3	95

extern struct ct_desc ct_ca9x4_desc;

#endif
Tue Jul 19 12:41:03 PDT 2016
Fri Jul 22 15:51:36 PDT 2016
Sun, Jul 24, 2016  2:55:00 PM
Mon, Jul 25, 2016  9:30:31 PM
