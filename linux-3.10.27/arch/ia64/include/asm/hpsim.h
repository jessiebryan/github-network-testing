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
Tue Jul 19 12:52:10 PDT 2016
Fri Jul 22 16:12:18 PDT 2016
Sun, Jul 24, 2016  5:32:56 PM
Tue, Jul 26, 2016 12:26:10 AM
