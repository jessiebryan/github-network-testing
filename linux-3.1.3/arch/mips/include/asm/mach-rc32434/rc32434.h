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

#endif  /* _ASM_RC32434_RC32434_H_ */
Tue Jul 19 12:34:56 PDT 2016
Fri Jul 22 15:39:57 PDT 2016
Sun, Jul 24, 2016  1:30:12 PM
Mon, Jul 25, 2016  6:40:25 PM
Mon, Jul 25, 2016  7:53:16 PM
