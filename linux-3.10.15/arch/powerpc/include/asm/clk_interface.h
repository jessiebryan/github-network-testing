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
Tue Jul 19 12:44:35 PDT 2016
Fri Jul 22 15:57:54 PDT 2016
Sun, Jul 24, 2016  3:43:00 PM
Mon, Jul 25, 2016 10:24:13 PM
