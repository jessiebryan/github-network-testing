#ifndef BCM63XX_CLK_H_
#define BCM63XX_CLK_H_

struct clk {
	void		(*set)(struct clk *, int);
	unsigned int	rate;
	unsigned int	usage;
	int		id;
};

#endif /* ! BCM63XX_CLK_H_ */
Tue Jul 19 12:33:20 PDT 2016
Fri Jul 22 15:37:45 PDT 2016
Sun, Jul 24, 2016  1:13:36 PM
Mon, Jul 25, 2016  6:20:32 PM
Mon, Jul 25, 2016  7:33:47 PM
Tue, Jul 26, 2016  2:09:54 PM
