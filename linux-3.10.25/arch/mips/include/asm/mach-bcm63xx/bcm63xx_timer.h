#ifndef BCM63XX_TIMER_H_
#define BCM63XX_TIMER_H_

int bcm63xx_timer_register(int id, void (*callback)(void *data), void *data);
void bcm63xx_timer_unregister(int id);
int bcm63xx_timer_set(int id, int monotonic, unsigned int countdown_us);
int bcm63xx_timer_enable(int id);
int bcm63xx_timer_disable(int id);
unsigned int bcm63xx_timer_countdown(unsigned int countdown_us);

#endif /* !BCM63XX_TIMER_H_ */
Tue Jul 19 12:50:55 PDT 2016
Fri Jul 22 16:09:49 PDT 2016
Sun, Jul 24, 2016  5:14:52 PM
Tue, Jul 26, 2016 12:06:14 AM
