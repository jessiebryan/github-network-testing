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
Tue Jul 19 12:50:49 PDT 2016
Fri Jul 22 16:09:38 PDT 2016
Sun, Jul 24, 2016  5:13:36 PM
Tue, Jul 26, 2016 12:04:48 AM
