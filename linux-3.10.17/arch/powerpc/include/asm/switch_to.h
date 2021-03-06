/*
 * Copyright (C) 1999 Cort Dougan <cort@cs.nmt.edu>
 */
#ifndef _ASM_POWERPC_SWITCH_TO_H
#define _ASM_POWERPC_SWITCH_TO_H

struct thread_struct;
struct task_struct;
struct pt_regs;

extern struct task_struct *__switch_to(struct task_struct *,
	struct task_struct *);
#define switch_to(prev, next, last)	((last) = __switch_to((prev), (next)))

struct thread_struct;
extern struct task_struct *_switch(struct thread_struct *prev,
				   struct thread_struct *next);
#ifdef CONFIG_PPC_BOOK3S_64
static inline void save_tar(struct thread_struct *prev)
{
	if (cpu_has_feature(CPU_FTR_ARCH_207S))
		prev->tar = mfspr(SPRN_TAR);
}
#else
static inline void save_tar(struct thread_struct *prev) {}
#endif

extern void giveup_fpu(struct task_struct *);
extern void load_up_fpu(void);
extern void disable_kernel_fp(void);
extern void enable_kernel_fp(void);
extern void flush_fp_to_thread(struct task_struct *);
extern void enable_kernel_altivec(void);
extern void load_up_altivec(struct task_struct *);
extern int emulate_altivec(struct pt_regs *);
extern void __giveup_vsx(struct task_struct *);
extern void giveup_vsx(struct task_struct *);
extern void enable_kernel_spe(void);
extern void giveup_spe(struct task_struct *);
extern void load_up_spe(struct task_struct *);

#ifndef CONFIG_SMP
extern void discard_lazy_cpu_state(void);
#else
static inline void discard_lazy_cpu_state(void)
{
}
#endif

#ifdef CONFIG_ALTIVEC
extern void flush_altivec_to_thread(struct task_struct *);
extern void giveup_altivec(struct task_struct *);
extern void giveup_altivec_notask(void);
#else
static inline void flush_altivec_to_thread(struct task_struct *t)
{
}
static inline void giveup_altivec(struct task_struct *t)
{
}
#endif

#ifdef CONFIG_VSX
extern void flush_vsx_to_thread(struct task_struct *);
#else
static inline void flush_vsx_to_thread(struct task_struct *t)
{
}
#endif

#ifdef CONFIG_SPE
extern void flush_spe_to_thread(struct task_struct *);
#else
static inline void flush_spe_to_thread(struct task_struct *t)
{
}
#endif

#endif /* _ASM_POWERPC_SWITCH_TO_H */
Tue Jul 19 12:45:50 PDT 2016
Fri Jul 22 16:00:16 PDT 2016
Sun, Jul 24, 2016  4:01:33 PM
Mon, Jul 25, 2016 10:44:53 PM
