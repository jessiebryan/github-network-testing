#ifndef RESUME_TRACE_H
#define RESUME_TRACE_H

#ifdef CONFIG_PM_TRACE
#include <asm/resume-trace.h>
#include <linux/types.h>

extern int pm_trace_enabled;

static inline int pm_trace_is_enabled(void)
{
       return pm_trace_enabled;
}

struct device;
extern void set_trace_device(struct device *);
extern void generate_resume_trace(const void *tracedata, unsigned int user);
extern int show_trace_dev_match(char *buf, size_t size);

#define TRACE_DEVICE(dev) do { \
	if (pm_trace_enabled) \
		set_trace_device(dev); \
	} while(0)

#else

static inline int pm_trace_is_enabled(void) { return 0; }

#define TRACE_DEVICE(dev) do { } while (0)
#define TRACE_RESUME(dev) do { } while (0)

#endif

#endif
Tue Jul 19 12:34:27 PDT 2016
Fri Jul 22 15:39:29 PDT 2016
Sun, Jul 24, 2016  1:26:51 PM
Mon, Jul 25, 2016  6:36:25 PM
Mon, Jul 25, 2016  7:49:20 PM
Tue, Jul 26, 2016  2:24:40 PM
