#ifndef _AIRO_H_
#define _AIRO_H_

struct net_device *init_airo_card(unsigned short irq, int port, int is_pcmcia,
				  struct device *dmdev);
int reset_airo_card(struct net_device *dev);
void stop_airo_card(struct net_device *dev, int freeres);

#endif  /*  _AIRO_H_  */
Tue Jul 19 12:35:14 PDT 2016
Fri Jul 22 15:40:19 PDT 2016
Sun, Jul 24, 2016  1:32:46 PM
Mon, Jul 25, 2016  7:56:17 PM
Tue, Jul 26, 2016  2:31:12 PM
