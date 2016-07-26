#ifndef __ASM_ARM_CPUIDLE_H
#define __ASM_ARM_CPUIDLE_H

#ifdef CONFIG_CPU_IDLE
extern int arm_cpuidle_simple_enter(struct cpuidle_device *dev,
		struct cpuidle_driver *drv, int index);
#else
static inline int arm_cpuidle_simple_enter(struct cpuidle_device *dev,
		struct cpuidle_driver *drv, int index) { return -ENODEV; }
#endif

/* Common ARM WFI state */
#define ARM_CPUIDLE_WFI_STATE_PWR(p) {\
	.enter                  = arm_cpuidle_simple_enter,\
	.exit_latency           = 1,\
	.target_residency       = 1,\
	.power_usage		= p,\
	.flags                  = CPUIDLE_FLAG_TIME_VALID,\
	.name                   = "WFI",\
	.desc                   = "ARM WFI",\
}

/*
 * in case power_specified == 1, give a default WFI power value needed
 * by some governors
 */
#define ARM_CPUIDLE_WFI_STATE ARM_CPUIDLE_WFI_STATE_PWR(UINT_MAX)

#endif
Tue Jul 19 12:44:25 PDT 2016
Fri Jul 22 15:57:35 PDT 2016
Sun, Jul 24, 2016  3:40:29 PM
Mon, Jul 25, 2016 10:21:24 PM
