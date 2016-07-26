#ifndef __ASM_MACH_REGS_RTC_H
#define __ASM_MACH_REGS_RTC_H

#include <mach/hardware.h>

/*
 * Real Time Clock
 */

#define RCNR		__REG(0x40900000)  /* RTC Count Register */
#define RTAR		__REG(0x40900004)  /* RTC Alarm Register */
#define RTSR		__REG(0x40900008)  /* RTC Status Register */
#define RTTR		__REG(0x4090000C)  /* RTC Timer Trim Register */
#define PIAR		__REG(0x40900038)  /* Periodic Interrupt Alarm Register */

#define RTSR_PICE	(1 << 15)	/* Periodic interrupt count enable */
#define RTSR_PIALE	(1 << 14)	/* Periodic interrupt Alarm enable */
#define RTSR_HZE	(1 << 3)	/* HZ interrupt enable */
#define RTSR_ALE	(1 << 2)	/* RTC alarm interrupt enable */
#define RTSR_HZ		(1 << 1)	/* HZ rising-edge detected */
#define RTSR_AL		(1 << 0)	/* RTC alarm detected */

#endif /* __ASM_MACH_REGS_RTC_H */
Tue Jul 19 12:40:23 PDT 2016
Fri Jul 22 15:50:18 PDT 2016
Sun, Jul 24, 2016  2:45:38 PM
Mon, Jul 25, 2016  9:19:55 PM
