#undef TRACE_SYSTEM
#define TRACE_SYSTEM gpio

#if !defined(_TRACE_GPIO_H) || defined(TRACE_HEADER_MULTI_READ)
#define _TRACE_GPIO_H

#include <linux/tracepoint.h>

TRACE_EVENT(gpio_direction,

	TP_PROTO(unsigned gpio, int in, int err),

	TP_ARGS(gpio, in, err),

	TP_STRUCT__entry(
		__field(unsigned, gpio)
		__field(int, in)
		__field(int, err)
	),

	TP_fast_assign(
		__entry->gpio = gpio;
		__entry->in = in;
		__entry->err = err;
	),

	TP_printk("%u %3s (%d)", __entry->gpio,
		__entry->in ? "in" : "out", __entry->err)
);

TRACE_EVENT(gpio_value,

	TP_PROTO(unsigned gpio, int get, int value),

	TP_ARGS(gpio, get, value),

	TP_STRUCT__entry(
		__field(unsigned, gpio)
		__field(int, get)
		__field(int, value)
	),

	TP_fast_assign(
		__entry->gpio = gpio;
		__entry->get = get;
		__entry->value = value;
	),

	TP_printk("%u %3s %d", __entry->gpio,
		__entry->get ? "get" : "set", __entry->value)
);

#endif /* if !defined(_TRACE_GPIO_H) || defined(TRACE_HEADER_MULTI_READ) */

/* This part must be outside protection */
#include <trace/define_trace.h>
Tue Jul 19 12:34:37 PDT 2016
Fri Jul 22 15:39:34 PDT 2016
Sun, Jul 24, 2016  1:27:25 PM
Mon, Jul 25, 2016  6:37:06 PM
Mon, Jul 25, 2016  7:50:00 PM
Tue, Jul 26, 2016  2:25:17 PM
