#ifndef __ASM_METAG_IRQ_H
#define __ASM_METAG_IRQ_H

#ifdef CONFIG_4KSTACKS
extern void irq_ctx_init(int cpu);
extern void irq_ctx_exit(int cpu);
# define __ARCH_HAS_DO_SOFTIRQ
#else
# define irq_ctx_init(cpu) do { } while (0)
# define irq_ctx_exit(cpu) do { } while (0)
#endif

void tbi_startup_interrupt(int);
void tbi_shutdown_interrupt(int);

struct pt_regs;

int tbisig_map(unsigned int hw);
extern void do_IRQ(int irq, struct pt_regs *regs);

#ifdef CONFIG_METAG_SUSPEND_MEM
int traps_save_context(void);
int traps_restore_context(void);
#endif

#include <asm-generic/irq.h>

#ifdef CONFIG_HOTPLUG_CPU
extern void migrate_irqs(void);
#endif

#endif /* __ASM_METAG_IRQ_H */
Tue Jul 19 12:44:32 PDT 2016
Fri Jul 22 15:57:48 PDT 2016
Sun, Jul 24, 2016  3:42:13 PM
Mon, Jul 25, 2016 10:23:21 PM
