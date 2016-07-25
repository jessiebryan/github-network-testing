#ifndef CIO_DEBUG_H
#define CIO_DEBUG_H

#include <asm/debug.h>

/* for use of debug feature */
extern debug_info_t *cio_debug_msg_id;
extern debug_info_t *cio_debug_trace_id;
extern debug_info_t *cio_debug_crw_id;

#define CIO_TRACE_EVENT(imp, txt) do {				\
		debug_text_event(cio_debug_trace_id, imp, txt); \
	} while (0)

#define CIO_MSG_EVENT(imp, args...) do {				\
		debug_sprintf_event(cio_debug_msg_id, imp , ##args);	\
	} while (0)

#define CIO_CRW_EVENT(imp, args...) do {				\
		debug_sprintf_event(cio_debug_crw_id, imp , ##args);	\
	} while (0)

static inline void CIO_HEX_EVENT(int level, void *data, int length)
{
	if (unlikely(!cio_debug_trace_id))
		return;
	while (length > 0) {
		debug_event(cio_debug_trace_id, level, data, length);
		length -= cio_debug_trace_id->buf_size;
		data += cio_debug_trace_id->buf_size;
	}
}

#endif
Tue Jul 19 12:51:48 PDT 2016
Fri Jul 22 16:11:35 PDT 2016
Sun, Jul 24, 2016  5:27:34 PM
