#ifndef PLAT_CLOCK_H
#define PLAT_CLOCK_H

#include <asm/hardware/icst.h>

struct clk_ops {
	long	(*round)(struct clk *, unsigned long);
	int	(*set)(struct clk *, unsigned long);
	void	(*setvco)(struct clk *, struct icst_vco);
};

int icst_clk_set(struct clk *, unsigned long);
long icst_clk_round(struct clk *, unsigned long);

#endif
Tue Jul 19 12:42:31 PDT 2016
Fri Jul 22 15:54:06 PDT 2016
Sun, Jul 24, 2016  3:13:30 PM
Mon, Jul 25, 2016  9:51:24 PM
