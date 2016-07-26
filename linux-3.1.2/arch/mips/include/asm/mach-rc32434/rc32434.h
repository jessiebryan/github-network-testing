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
Tue Jul 19 12:33:57 PDT 2016
Fri Jul 22 15:38:51 PDT 2016
Sun, Jul 24, 2016  1:21:57 PM
Mon, Jul 25, 2016  6:30:31 PM
Mon, Jul 25, 2016  7:43:35 PM
Tue, Jul 26, 2016  2:19:15 PM
