#ifndef _ASM_X86_PAT_H
#define _ASM_X86_PAT_H

#include <linux/types.h>
#include <asm/pgtable_types.h>

#ifdef CONFIG_X86_PAT
extern int pat_enabled;
#else
static const int pat_enabled;
#endif

extern void pat_init(void);

extern int reserve_memtype(u64 start, u64 end,
		unsigned long req_type, unsigned long *ret_type);
extern int free_memtype(u64 start, u64 end);

extern int kernel_map_sync_memtype(u64 base, unsigned long size,
		unsigned long flag);

int io_reserve_memtype(resource_size_t start, resource_size_t end,
			unsigned long *type);

void io_free_memtype(resource_size_t start, resource_size_t end);

#endif /* _ASM_X86_PAT_H */
Tue Jul 19 12:36:18 PDT 2016
Fri Jul 22 15:42:24 PDT 2016
Sun, Jul 24, 2016  1:48:10 PM
Mon, Jul 25, 2016  8:14:30 PM
