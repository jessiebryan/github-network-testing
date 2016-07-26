#undef TRACE_SYSTEM
#define TRACE_SYSTEM printk

#if !defined(_TRACE_PRINTK_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_PRINTK_H

#include <linux/tracepoint.h>

TRACE_EVENT(console,
	TP_PROTO(const char *text, size_t len),

	TP_ARGS(text, len),

	TP_STRUCT__entry(
		__dynamic_array(char, msg, len + 1)
	),

	TP_fast_assign(
		memcpy(__get_dynamic_array(msg), text, len);
		((char *)__get_dynamic_array(msg))[len] = 0;
	),

	TP_printk("%s", __get_str(msg))
);
#endif /* _TRACE_PRINTK_H */

/* This part must be outside protection */
#include <trace/define_trace.h>
Tue Jul 19 12:51:59 PDT 2016
Fri Jul 22 16:11:56 PDT 2016
Sun, Jul 24, 2016  5:30:22 PM
Tue, Jul 26, 2016 12:23:20 AM
