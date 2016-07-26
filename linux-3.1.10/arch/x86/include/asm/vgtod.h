#ifndef _ASM_X86_VGTOD_H
#define _ASM_X86_VGTOD_H

#include <asm/vsyscall.h>
#include <linux/clocksource.h>

struct vsyscall_gtod_data {
	seqlock_t	lock;

	/* open coded 'struct timespec' */
	time_t		wall_time_sec;
	u32		wall_time_nsec;

	struct timezone sys_tz;
	struct { /* extract of a clocksource struct */
		int vclock_mode;
		cycle_t	cycle_last;
		cycle_t	mask;
		u32	mult;
		u32	shift;
	} clock;
	struct timespec wall_to_monotonic;
	struct timespec wall_time_coarse;
};
extern struct vsyscall_gtod_data vsyscall_gtod_data;

#endif /* _ASM_X86_VGTOD_H */
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:58 PDT 2016
Sun, Jul 24, 2016  1:15:14 PM
Mon, Jul 25, 2016  6:22:29 PM
Mon, Jul 25, 2016  7:35:42 PM
