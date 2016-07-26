/*
 *  linux/include/linux/nmi.h
 */
#ifndef LINUX_NMI_H
#define LINUX_NMI_H

#include <linux/sched.h>
#include <asm/irq.h>

/**
 * touch_nmi_watchdog - restart NMI watchdog timeout.
 * 
 * If the architecture supports the NMI watchdog, touch_nmi_watchdog()
 * may be used to reset the timeout - for code which intentionally
 * disables interrupts for a long time. This call is stateless.
 */
#if defined(ARCH_HAS_NMI_WATCHDOG) || defined(CONFIG_HARDLOCKUP_DETECTOR)
#include <asm/nmi.h>
extern void touch_nmi_watchdog(void);
#else
static inline void touch_nmi_watchdog(void)
{
	touch_softlockup_watchdog();
}
#endif

/*
 * Create trigger_all_cpu_backtrace() out of the arch-provided
 * base function. Return whether such support was available,
 * to allow calling code to fall back to some other mechanism:
 */
#ifdef arch_trigger_all_cpu_backtrace
static inline bool trigger_all_cpu_backtrace(void)
{
	arch_trigger_all_cpu_backtrace();

	return true;
}
#else
static inline bool trigger_all_cpu_backtrace(void)
{
	return false;
}
#endif

#ifdef CONFIG_LOCKUP_DETECTOR
int hw_nmi_is_cpu_stuck(struct pt_regs *);
u64 hw_nmi_get_sample_period(int watchdog_thresh);
extern int watchdog_enabled;
extern int watchdog_thresh;
struct ctl_table;
extern int proc_dowatchdog(struct ctl_table *, int ,
			   void __user *, size_t *, loff_t *);
#endif

#endif
Tue Jul 19 12:35:58 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:14 PM
Mon, Jul 25, 2016  8:08:39 PM
Tue, Jul 26, 2016  2:42:47 PM
