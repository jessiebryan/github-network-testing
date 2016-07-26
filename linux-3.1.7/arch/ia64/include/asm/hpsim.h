#ifndef _ASMIA64_HPSIM_H
#define _ASMIA64_HPSIM_H

#ifndef CONFIG_HP_SIMSERIAL_CONSOLE
static inline int simcons_register(void) { return 1; }
#else
int simcons_register(void);
#endif

struct tty_driver;
extern struct tty_driver *hp_simserial_driver;

void ia64_ssc_connect_irq(long intr, long irq);
void ia64_ctl_trace(long on);

#endif
Tue Jul 19 12:36:43 PDT 2016
Fri Jul 22 15:43:15 PDT 2016
Sun, Jul 24, 2016  1:54:21 PM
Mon, Jul 25, 2016  8:21:46 PM
