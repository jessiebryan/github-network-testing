#ifndef __ARCOM_PCMCIA_H
#define __ARCOM_PCMCIA_H

struct arcom_pcmcia_pdata {
	int	cd_gpio;
	int	rdy_gpio;
	int	pwr_gpio;
	void	(*reset)(int state);
};

#endif
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:38 PDT 2016
Sun, Jul 24, 2016  1:20:19 PM
Mon, Jul 25, 2016  6:28:34 PM
Mon, Jul 25, 2016  7:41:40 PM
Tue, Jul 26, 2016  2:17:24 PM
