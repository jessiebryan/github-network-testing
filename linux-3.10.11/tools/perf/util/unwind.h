#ifndef __UNWIND_H
#define __UNWIND_H

#include "types.h"
#include "event.h"
#include "symbol.h"

struct unwind_entry {
	struct map	*map;
	struct symbol	*sym;
	u64		ip;
};

typedef int (*unwind_entry_cb_t)(struct unwind_entry *entry, void *arg);

#ifdef LIBUNWIND_SUPPORT
int unwind__get_entries(unwind_entry_cb_t cb, void *arg,
			struct machine *machine,
			struct thread *thread,
			u64 sample_uregs,
			struct perf_sample *data);
int unwind__arch_reg_id(int regnum);
#else
static inline int
unwind__get_entries(unwind_entry_cb_t cb __maybe_unused,
		    void *arg __maybe_unused,
		    struct machine *machine __maybe_unused,
		    struct thread *thread __maybe_unused,
		    u64 sample_uregs __maybe_unused,
		    struct perf_sample *data __maybe_unused)
{
	return 0;
}
#endif /* LIBUNWIND_SUPPORT */
#endif /* __UNWIND_H */
Tue Jul 19 12:42:28 PDT 2016
Fri Jul 22 15:54:00 PDT 2016
Sun, Jul 24, 2016  3:12:37 PM
Mon, Jul 25, 2016  9:50:24 PM
