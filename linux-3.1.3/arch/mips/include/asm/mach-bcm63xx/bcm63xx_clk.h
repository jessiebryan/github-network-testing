#ifndef BCM63XX_CLK_H_
#define BCM63XX_CLK_H_

struct clk {
	void		(*set)(struct clk *, int);
	unsigned int	rate;
	unsigned int	usage;
	int		id;
};

#endif /* ! BCM63XX_CLK_H_ */
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:57 PDT 2016
Sun, Jul 24, 2016  1:30:07 PM
Mon, Jul 25, 2016  6:40:18 PM
Mon, Jul 25, 2016  7:53:09 PM
