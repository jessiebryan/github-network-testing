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
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:10 PDT 2016
Sun, Jul 24, 2016  1:31:40 PM
Mon, Jul 25, 2016  7:54:59 PM
Tue, Jul 26, 2016  2:30:01 PM
