#ifndef __ASM_SH_PERF_EVENT_H
#define __ASM_SH_PERF_EVENT_H

struct hw_perf_event;

#define MAX_HWEVENTS	2

struct sh_pmu {
	const char	*name;
	unsigned int	num_events;
	void		(*disable_all)(void);
	void		(*enable_all)(void);
	void		(*enable)(struct hw_perf_event *, int);
	void		(*disable)(struct hw_perf_event *, int);
	u64		(*read)(int);
	int		(*event_map)(int);
	unsigned int	max_events;
	unsigned long	raw_event_mask;
	const int	(*cache_events)[PERF_COUNT_HW_CACHE_MAX]
				       [PERF_COUNT_HW_CACHE_OP_MAX]
				       [PERF_COUNT_HW_CACHE_RESULT_MAX];
};

/* arch/sh/kernel/perf_event.c */
extern int register_sh_pmu(struct sh_pmu *);
extern int reserve_pmc_hardware(void);
extern void release_pmc_hardware(void);

#endif /* __ASM_SH_PERF_EVENT_H */
Tue Jul 19 12:43:19 PDT 2016
Fri Jul 22 15:55:35 PDT 2016
Sun, Jul 24, 2016  3:24:59 PM
Mon, Jul 25, 2016 10:04:11 PM
