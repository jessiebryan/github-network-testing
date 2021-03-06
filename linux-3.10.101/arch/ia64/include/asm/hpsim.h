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
Tue Jul 19 12:40:27 PDT 2016
Fri Jul 22 15:50:26 PDT 2016
Sun, Jul 24, 2016  2:46:34 PM
Mon, Jul 25, 2016  9:20:58 PM
