#ifndef _AIRO_H_
#define _AIRO_H_

struct net_device *init_airo_card(unsigned short irq, int port, int is_pcmcia,
				  struct device *dmdev);
int reset_airo_card(struct net_device *dev);
void stop_airo_card(struct net_device *dev, int freeres);

#endif  /*  _AIRO_H_  */
Tue Jul 19 12:43:28 PDT 2016
Fri Jul 22 15:55:50 PDT 2016
Sun, Jul 24, 2016  3:26:59 PM
Mon, Jul 25, 2016 10:06:25 PM
