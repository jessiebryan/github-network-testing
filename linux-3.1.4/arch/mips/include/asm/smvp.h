#ifndef _ASM_SMVP_H
#define _ASM_SMVP_H

/*
 * Definitions for SMVP multitasking on MIPS MT cores
 */
struct task_struct;

extern void smvp_smp_setup(void);
extern void smvp_smp_finish(void);
extern void smvp_boot_secondary(int cpu, struct task_struct *t);
extern void smvp_init_secondary(void);
extern void smvp_smp_finish(void);
extern void smvp_cpus_done(void);
extern void smvp_prepare_cpus(unsigned int max_cpus);

/* This is platform specific */
extern void smvp_send_ipi(int cpu, unsigned int action);
#endif /*  _ASM_SMVP_H */
Tue Jul 19 12:35:39 PDT 2016
Fri Jul 22 15:41:07 PDT 2016
Sun, Jul 24, 2016  1:38:34 PM
Mon, Jul 25, 2016  8:03:09 PM
