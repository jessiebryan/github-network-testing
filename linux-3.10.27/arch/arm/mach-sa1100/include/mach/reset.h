#ifndef __ASM_ARCH_RESET_H
#define __ASM_ARCH_RESET_H

#include "hardware.h"

#define RESET_STATUS_HARDWARE	(1 << 0)	/* Hardware Reset */
#define RESET_STATUS_WATCHDOG	(1 << 1)	/* Watchdog Reset */
#define RESET_STATUS_LOWPOWER	(1 << 2)	/* Exit from Low Power/Sleep */
#define RESET_STATUS_GPIO	(1 << 3)	/* GPIO Reset */
#define RESET_STATUS_ALL	(0xf)

extern unsigned int reset_status;
static inline void clear_reset_status(unsigned int mask)
{
	RCSR = mask;
}

#endif /* __ASM_ARCH_RESET_H */
Tue Jul 19 12:52:06 PDT 2016
Fri Jul 22 16:12:11 PDT 2016
Sun, Jul 24, 2016  5:32:05 PM
Tue, Jul 26, 2016 12:25:13 AM
