#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:48:42 PDT 2016
Fri Jul 22 16:05:39 PDT 2016
Sun, Jul 24, 2016  4:43:12 PM
Mon, Jul 25, 2016 11:31:08 PM
