#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:52:35 PDT 2016
Fri Jul 22 16:13:06 PDT 2016
Sun, Jul 24, 2016  5:38:58 PM
Tue, Jul 26, 2016 12:32:48 AM
