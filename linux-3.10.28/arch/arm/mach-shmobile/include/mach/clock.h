#ifndef CLOCK_H
#define CLOCK_H

unsigned long shmobile_fixed_ratio_clk_recalc(struct clk *clk);
extern struct sh_clk_ops shmobile_fixed_ratio_clk_ops;

/* clock ratio */
struct clk_ratio {
	int mul;
	int div;
};

#define SH_CLK_RATIO(name, m, d)		\
static struct clk_ratio name ##_ratio = {	\
	.mul = m,				\
	.div = d,				\
}

#define SH_FIXED_RATIO_CLKg(name, p, r)	\
struct clk name = {			\
	.parent	= &p,				\
	.ops	= &shmobile_fixed_ratio_clk_ops,\
	.priv	= &r ## _ratio,			\
}

#define SH_FIXED_RATIO_CLK(name, p, r)		\
static SH_FIXED_RATIO_CLKg(name, p, r);

#define SH_FIXED_RATIO_CLK_SET(name, p, m, d)	\
	SH_CLK_RATIO(name, m, d);		\
	SH_FIXED_RATIO_CLK(name, p, name);

#define SH_CLK_SET_RATIO(p, m, d)	\
{			\
	(p)->mul = m;	\
	(p)->div = d;	\
}

#endif
Tue Jul 19 12:52:45 PDT 2016
Fri Jul 22 16:13:27 PDT 2016
Sun, Jul 24, 2016  5:41:24 PM
Tue, Jul 26, 2016 12:35:30 AM
