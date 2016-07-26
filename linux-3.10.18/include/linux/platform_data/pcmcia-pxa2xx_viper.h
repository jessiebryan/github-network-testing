#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:46:47 PDT 2016
Fri Jul 22 16:02:04 PDT 2016
Sun, Jul 24, 2016  4:15:30 PM
Mon, Jul 25, 2016 11:00:23 PM
