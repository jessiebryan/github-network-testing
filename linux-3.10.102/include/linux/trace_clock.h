#ifndef _LINUX_TRACE_CLOCK_H
#define _LINUX_TRACE_CLOCK_H

/*
 * 3 trace clock variants, with differing scalability/precision
 * tradeoffs:
 *
 *  -   local: CPU-local trace clock
 *  -  medium: scalable global clock with some jitter
 *  -  global: globally monotonic, serialized clock
 */
#include <linux/compiler.h>
#include <linux/types.h>

#include <asm/trace_clock.h>

extern u64 notrace trace_clock_local(void);
extern u64 notrace trace_clock(void);
extern u64 notrace trace_clock_jiffies(void);
extern u64 notrace trace_clock_global(void);
extern u64 notrace trace_clock_counter(void);

#endif /* _LINUX_TRACE_CLOCK_H */
Tue Jul 19 12:41:32 PDT 2016
Fri Jul 22 15:52:36 PDT 2016
Sun, Jul 24, 2016  3:01:59 PM
Mon, Jul 25, 2016  9:38:25 PM
