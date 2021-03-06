#ifndef SMPBOOT_H
#define SMPBOOT_H

struct task_struct;

#ifdef CONFIG_GENERIC_SMP_IDLE_THREAD
struct task_struct *idle_thread_get(unsigned int cpu);
void idle_thread_set_boot_cpu(void);
void idle_threads_init(void);
#else
static inline struct task_struct *idle_thread_get(unsigned int cpu) { return NULL; }
static inline void idle_thread_set_boot_cpu(void) { }
static inline void idle_threads_init(void) { }
#endif

int smpboot_create_threads(unsigned int cpu);
void smpboot_park_threads(unsigned int cpu);
void smpboot_unpark_threads(unsigned int cpu);

#endif
Tue Jul 19 12:51:23 PDT 2016
Fri Jul 22 16:10:44 PDT 2016
Sun, Jul 24, 2016  5:21:32 PM
Tue, Jul 26, 2016 12:13:35 AM
