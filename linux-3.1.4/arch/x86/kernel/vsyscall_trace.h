#undef TRACE_SYSTEM
#define TRACE_SYSTEM vsyscall

#if !defined(__VSYSCALL_TRACE_H) || defined(TRACE_HEADER_MULTI_READ)
#define __VSYSCALL_TRACE_H

#include <linux/tracepoint.h>

TRACE_EVENT(emulate_vsyscall,

	    TP_PROTO(int nr),

	    TP_ARGS(nr),

	    TP_STRUCT__entry(__field(int, nr)),

	    TP_fast_assign(
			   __entry->nr = nr;
			   ),

	    TP_printk("nr = %d", __entry->nr)
);

#endif

#undef TRACE_INCLUDE_PATH
#define TRACE_INCLUDE_PATH ../../arch/x86/kernel
#define TRACE_INCLUDE_FILE vsyscall_trace
#include <trace/define_trace.h>
Tue Jul 19 12:35:44 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:00 PM
Mon, Jul 25, 2016  8:04:52 PM
Tue, Jul 26, 2016  2:39:14 PM
