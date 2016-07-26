#ifndef BCM63XX_CLK_H_
#define BCM63XX_CLK_H_

struct clk {
	void		(*set)(struct clk *, int);
	unsigned int	rate;
	unsigned int	usage;
	int		id;
};

#endif /* ! BCM63XX_CLK_H_ */
Tue Jul 19 12:33:57 PDT 2016
Fri Jul 22 15:38:50 PDT 2016
Sun, Jul 24, 2016  1:21:51 PM
Mon, Jul 25, 2016  6:30:24 PM
Mon, Jul 25, 2016  7:43:28 PM
Tue, Jul 26, 2016  2:19:09 PM
