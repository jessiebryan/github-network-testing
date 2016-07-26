#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:39:35 PDT 2016
Fri Jul 22 15:48:43 PDT 2016
Sun, Jul 24, 2016  2:34:06 PM
Mon, Jul 25, 2016  9:07:03 PM
