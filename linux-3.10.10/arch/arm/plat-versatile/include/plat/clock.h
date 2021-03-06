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
Tue Jul 19 12:39:07 PDT 2016
Fri Jul 22 15:47:46 PDT 2016
Sun, Jul 24, 2016  2:27:27 PM
Mon, Jul 25, 2016  8:59:38 PM
