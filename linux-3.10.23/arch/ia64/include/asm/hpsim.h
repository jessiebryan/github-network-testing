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
Tue Jul 19 12:49:35 PDT 2016
Fri Jul 22 16:07:18 PDT 2016
Sun, Jul 24, 2016  4:55:40 PM
Mon, Jul 25, 2016 11:45:05 PM
