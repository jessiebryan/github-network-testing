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
Tue Jul 19 12:46:15 PDT 2016
Fri Jul 22 16:01:04 PDT 2016
Sun, Jul 24, 2016  4:07:56 PM
Mon, Jul 25, 2016 10:51:57 PM
