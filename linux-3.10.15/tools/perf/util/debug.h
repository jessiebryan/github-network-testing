/* For debugging general purposes */
#ifndef __PERF_DEBUG_H
#define __PERF_DEBUG_H

#include <stdbool.h>
#include "event.h"
#include "../ui/helpline.h"
#include "../ui/progress.h"
#include "../ui/util.h"

extern int verbose;
extern bool quiet, dump_trace;

int dump_printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
void trace_event(union perf_event *event);

int ui__error(const char *format, ...) __attribute__((format(printf, 1, 2)));
int ui__warning(const char *format, ...) __attribute__((format(printf, 1, 2)));

#endif	/* __PERF_DEBUG_H */
Tue Jul 19 12:45:02 PDT 2016
Fri Jul 22 15:58:44 PDT 2016
Sun, Jul 24, 2016  3:49:28 PM
Mon, Jul 25, 2016 10:31:26 PM
