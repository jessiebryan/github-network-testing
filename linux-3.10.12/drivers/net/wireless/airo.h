#ifndef _AIRO_H_
#define _AIRO_H_

struct net_device *init_airo_card(unsigned short irq, int port, int is_pcmcia,
				  struct device *dmdev);
int reset_airo_card(struct net_device *dev);
void stop_airo_card(struct net_device *dev, int freeres);

#endif  /*  _AIRO_H_  */
Tue Jul 19 12:42:50 PDT 2016
Fri Jul 22 15:54:39 PDT 2016
Sun, Jul 24, 2016  3:17:45 PM
Mon, Jul 25, 2016  9:56:11 PM
