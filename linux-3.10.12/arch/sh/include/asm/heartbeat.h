#ifndef __ASM_SH_HEARTBEAT_H
#define __ASM_SH_HEARTBEAT_H

#include <linux/timer.h>

#define HEARTBEAT_INVERTED	(1 << 0)

struct heartbeat_data {
	void __iomem *base;
	unsigned char *bit_pos;
	unsigned int nr_bits;
	struct timer_list timer;
	unsigned int regsize;
	unsigned int mask;
	unsigned long flags;
};

#endif /* __ASM_SH_HEARTBEAT_H */
Tue Jul 19 12:42:41 PDT 2016
Fri Jul 22 15:54:24 PDT 2016
Sun, Jul 24, 2016  3:15:44 PM
Mon, Jul 25, 2016  9:53:57 PM
