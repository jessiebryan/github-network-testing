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
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:46 PDT 2016
Sun, Jul 24, 2016  1:43:30 PM
Mon, Jul 25, 2016  8:08:58 PM
Tue, Jul 26, 2016  2:43:04 PM
