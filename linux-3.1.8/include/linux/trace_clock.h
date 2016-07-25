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

extern u64 notrace trace_clock_local(void);
extern u64 notrace trace_clock(void);
extern u64 notrace trace_clock_global(void);

#endif /* _LINUX_TRACE_CLOCK_H */
Tue Jul 19 12:37:45 PDT 2016
Fri Jul 22 15:45:08 PDT 2016
Sun, Jul 24, 2016  2:08:14 PM
