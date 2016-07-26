#ifndef __HIGHBANK_CORE_H
#define __HIGHBANK_CORE_H

extern void highbank_set_cpu_jump(int cpu, void *jump_addr);
extern void highbank_restart(char, const char *);
extern void __iomem *scu_base_addr;

#ifdef CONFIG_PM_SLEEP
extern void highbank_pm_init(void);
#else
static inline void highbank_pm_init(void) {}
#endif

extern void highbank_smc1(int fn, int arg);
extern void highbank_cpu_die(unsigned int cpu);

extern struct smp_operations highbank_smp_ops;

#endif
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:16 PDT 2016
Sun, Jul 24, 2016  2:45:22 PM
Mon, Jul 25, 2016  9:19:37 PM
