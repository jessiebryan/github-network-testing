#ifndef _ASM_X86_IDLE_H
#define _ASM_X86_IDLE_H

#define IDLE_START 1
#define IDLE_END 2

struct notifier_block;
void idle_notifier_register(struct notifier_block *n);
void idle_notifier_unregister(struct notifier_block *n);

#ifdef CONFIG_X86_64
void enter_idle(void);
void exit_idle(void);
#else /* !CONFIG_X86_64 */
static inline void enter_idle(void) { }
static inline void exit_idle(void) { }
static inline void __exit_idle(void) { }
#endif /* CONFIG_X86_64 */

void amd_e400_remove_cpu(int cpu);

#endif /* _ASM_X86_IDLE_H */
Tue Jul 19 12:45:17 PDT 2016
Fri Jul 22 15:59:12 PDT 2016
Sun, Jul 24, 2016  3:53:13 PM
Mon, Jul 25, 2016 10:35:36 PM
