#ifndef _AIRO_H_
#define _AIRO_H_

struct net_device *init_airo_card(unsigned short irq, int port, int is_pcmcia,
				  struct device *dmdev);
int reset_airo_card(struct net_device *dev);
void stop_airo_card(struct net_device *dev, int freeres);

#endif  /*  _AIRO_H_  */
Tue Jul 19 12:38:47 PDT 2016
Fri Jul 22 15:47:06 PDT 2016
Sun, Jul 24, 2016  2:22:30 PM
Mon, Jul 25, 2016  8:54:08 PM
