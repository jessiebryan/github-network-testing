#ifndef __ARCH_MACH_COMMON_H
#define __ARCH_MACH_COMMON_H

extern void shmobile_earlytimer_init(void);
extern void shmobile_timer_init(void);
extern void shmobile_setup_delay(unsigned int max_cpu_core_mhz,
			 unsigned int mult, unsigned int div);
struct twd_local_timer;
extern void shmobile_setup_console(void);
extern void shmobile_secondary_vector(void);
extern void shmobile_secondary_vector_scu(void);
struct clk;
extern int shmobile_clk_init(void);
extern void shmobile_handle_irq_intc(struct pt_regs *);
extern struct platform_suspend_ops shmobile_suspend_ops;
struct cpuidle_driver;
extern void shmobile_cpuidle_set_driver(struct cpuidle_driver *drv);

#ifdef CONFIG_SUSPEND
int shmobile_suspend_init(void);
#else
static inline int shmobile_suspend_init(void) { return 0; }
#endif

#ifdef CONFIG_CPU_IDLE
int shmobile_cpuidle_init(void);
#else
static inline int shmobile_cpuidle_init(void) { return 0; }
#endif

extern void __iomem *shmobile_scu_base;
extern void shmobile_smp_init_cpus(unsigned int ncores);

static inline void __init shmobile_init_late(void)
{
	shmobile_suspend_init();
	shmobile_cpuidle_init();
}

#endif /* __ARCH_MACH_COMMON_H */
Tue Jul 19 12:39:07 PDT 2016
Fri Jul 22 15:47:45 PDT 2016
Sun, Jul 24, 2016  2:27:19 PM
Mon, Jul 25, 2016  8:59:30 PM
