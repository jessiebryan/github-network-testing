#ifndef __PERF_REGS_H
#define __PERF_REGS_H

#ifdef HAVE_PERF_REGS
#include <perf_regs.h>
#else
#define PERF_REGS_MASK	0

static inline const char *perf_reg_name(int id __maybe_unused)
{
	return NULL;
}
#endif /* HAVE_PERF_REGS */
#endif /* __PERF_REGS_H */
Tue Jul 19 12:41:00 PDT 2016
Fri Jul 22 15:51:28 PDT 2016
Sun, Jul 24, 2016  2:54:10 PM
Mon, Jul 25, 2016  9:29:34 PM
