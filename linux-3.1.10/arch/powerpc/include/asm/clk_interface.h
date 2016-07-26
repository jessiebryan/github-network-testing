#ifndef __ASM_POWERPC_CLK_INTERFACE_H
#define __ASM_POWERPC_CLK_INTERFACE_H

#include <linux/clk.h>

struct clk_interface {
	struct clk*	(*clk_get)	(struct device *dev, const char *id);
	int		(*clk_enable)	(struct clk *clk);
	void		(*clk_disable)	(struct clk *clk);
	unsigned long	(*clk_get_rate)	(struct clk *clk);
	void		(*clk_put)	(struct clk *clk);
	long		(*clk_round_rate) (struct clk *clk, unsigned long rate);
	int 		(*clk_set_rate)	(struct clk *clk, unsigned long rate);
	int		(*clk_set_parent) (struct clk *clk, struct clk *parent);
	struct clk*	(*clk_get_parent) (struct clk *clk);
};

extern struct clk_interface clk_functions;

#endif /* __ASM_POWERPC_CLK_INTERFACE_H */
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:49 PDT 2016
Sun, Jul 24, 2016  1:14:07 PM
Mon, Jul 25, 2016  6:21:09 PM
Mon, Jul 25, 2016  7:34:23 PM
Tue, Jul 26, 2016  2:10:28 PM
