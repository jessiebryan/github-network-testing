#ifndef __ASM_SH_SMP_OPS_H
#define __ASM_SH_SMP_OPS_H

struct plat_smp_ops {
	void (*smp_setup)(void);
	unsigned int (*smp_processor_id)(void);
	void (*prepare_cpus)(unsigned int max_cpus);
	void (*start_cpu)(unsigned int cpu, unsigned long entry_point);
	void (*send_ipi)(unsigned int cpu, unsigned int message);
	int (*cpu_disable)(unsigned int cpu);
	void (*cpu_die)(unsigned int cpu);
	void (*play_dead)(void);
};

extern struct plat_smp_ops *mp_ops;
extern struct plat_smp_ops shx3_smp_ops;

#ifdef CONFIG_SMP

static inline void plat_smp_setup(void)
{
	BUG_ON(!mp_ops);
	mp_ops->smp_setup();
}

static inline void play_dead(void)
{
	mp_ops->play_dead();
}

extern void register_smp_ops(struct plat_smp_ops *ops);

#else

static inline void plat_smp_setup(void)
{
	/* UP, nothing to do ... */
}

static inline void register_smp_ops(struct plat_smp_ops *ops)
{
}

static inline void play_dead(void)
{
	BUG();
}

#endif /* CONFIG_SMP */

#endif /* __ASM_SH_SMP_OPS_H */
Tue Jul 19 12:34:59 PDT 2016
Fri Jul 22 15:40:05 PDT 2016
Sun, Jul 24, 2016  1:31:05 PM
Mon, Jul 25, 2016  7:54:17 PM
Tue, Jul 26, 2016  2:29:21 PM
