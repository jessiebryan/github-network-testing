/*
 * Definitions for IDT RC323434 CPU.
 */

#ifndef _ASM_RC32434_RC32434_H_
#define _ASM_RC32434_RC32434_H_

#include <linux/delay.h>
#include <linux/io.h>

#define IDT_CLOCK_MULT		2

/* cpu pipeline flush */
static inline void rc32434_sync(void)
{
	__asm__ volatile ("sync");
}

#endif	/* _ASM_RC32434_RC32434_H_ */
Tue Jul 19 12:51:34 PDT 2016
Fri Jul 22 16:11:06 PDT 2016
Sun, Jul 24, 2016  5:24:17 PM
Tue, Jul 26, 2016 12:16:37 AM
