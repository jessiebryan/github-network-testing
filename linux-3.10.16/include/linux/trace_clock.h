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
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:44 PDT 2016
Sun, Jul 24, 2016  3:57:19 PM
Mon, Jul 25, 2016 10:40:09 PM
