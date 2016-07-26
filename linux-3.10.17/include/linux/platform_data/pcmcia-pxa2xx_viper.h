#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:46:08 PDT 2016
Fri Jul 22 16:00:52 PDT 2016
Sun, Jul 24, 2016  4:06:17 PM
Mon, Jul 25, 2016 10:50:08 PM
