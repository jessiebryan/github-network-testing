#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:51:57 PDT 2016
Fri Jul 22 16:11:51 PDT 2016
Sun, Jul 24, 2016  5:29:39 PM
