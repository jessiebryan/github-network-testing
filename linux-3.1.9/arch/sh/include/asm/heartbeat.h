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
Tue Jul 19 12:38:03 PDT 2016
Fri Jul 22 15:45:40 PDT 2016
Sun, Jul 24, 2016  2:12:15 PM
Mon, Jul 25, 2016  8:42:44 PM
