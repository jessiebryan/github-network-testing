#ifndef _AIRO_H_
#define _AIRO_H_

struct net_device *init_airo_card(unsigned short irq, int port, int is_pcmcia,
				  struct device *dmdev);
int reset_airo_card(struct net_device *dev);
void stop_airo_card(struct net_device *dev, int freeres);

#endif  /*  _AIRO_H_  */
Tue Jul 19 12:47:16 PDT 2016
Fri Jul 22 16:02:57 PDT 2016
Sun, Jul 24, 2016  4:22:20 PM
Mon, Jul 25, 2016 11:07:57 PM
