#ifndef BCM63XX_CLK_H_
#define BCM63XX_CLK_H_

struct clk {
	void		(*set)(struct clk *, int);
	unsigned int	rate;
	unsigned int	usage;
	int		id;
};

#endif /* ! BCM63XX_CLK_H_ */
Tue Jul 19 12:37:59 PDT 2016
Fri Jul 22 15:45:33 PDT 2016
Sun, Jul 24, 2016  2:11:20 PM
