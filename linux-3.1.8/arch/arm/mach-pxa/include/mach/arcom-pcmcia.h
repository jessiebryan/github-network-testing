#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:37:14 PDT 2016
Fri Jul 22 15:44:13 PDT 2016
Sun, Jul 24, 2016  2:01:34 PM
Mon, Jul 25, 2016  8:30:20 PM
