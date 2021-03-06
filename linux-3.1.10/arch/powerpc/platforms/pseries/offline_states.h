#ifndef _OFFLINE_STATES_H_
#define _OFFLINE_STATES_H_

/* Cpu offline states go here */
enum cpu_state_vals {
	CPU_STATE_OFFLINE,
	CPU_STATE_INACTIVE,
	CPU_STATE_ONLINE,
	CPU_MAX_OFFLINE_STATES
};

#ifdef CONFIG_HOTPLUG_CPU
extern enum cpu_state_vals get_cpu_current_state(int cpu);
extern void set_cpu_current_state(int cpu, enum cpu_state_vals state);
extern void set_preferred_offline_state(int cpu, enum cpu_state_vals state);
extern void set_default_offline_state(int cpu);
#else
static inline enum cpu_state_vals get_cpu_current_state(int cpu)
{
	return CPU_STATE_ONLINE;
}

static inline void set_cpu_current_state(int cpu, enum cpu_state_vals state)
{
}

static inline void set_preferred_offline_state(int cpu, enum cpu_state_vals state)
{
}

static inline void set_default_offline_state(int cpu)
{
}
#endif

extern enum cpu_state_vals get_preferred_offline_state(int cpu);
#endif
Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:20 PM
Mon, Jul 25, 2016  6:21:24 PM
Mon, Jul 25, 2016  7:34:38 PM
Tue, Jul 26, 2016  2:10:41 PM
