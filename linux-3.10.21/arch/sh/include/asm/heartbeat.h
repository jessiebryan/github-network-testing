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
Tue Jul 19 12:48:24 PDT 2016
Fri Jul 22 16:05:05 PDT 2016
Sun, Jul 24, 2016  4:38:46 PM
Mon, Jul 25, 2016 11:26:13 PM
