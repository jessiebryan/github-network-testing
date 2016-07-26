#ifndef _ASMIA64_HPSIM_H
#define _ASMIA64_HPSIM_H

#ifndef CONFIG_HP_SIMSERIAL_CONSOLE
static inline int simcons_register(void) { return 1; }
#else
int simcons_register(void);
#endif

struct tty_driver;
extern struct tty_driver *hp_simserial_driver;

extern int hpsim_get_irq(int intr);
void ia64_ctl_trace(long on);

#endif
Tue Jul 19 12:50:52 PDT 2016
Fri Jul 22 16:09:45 PDT 2016
Sun, Jul 24, 2016  5:14:19 PM
Tue, Jul 26, 2016 12:05:36 AM
