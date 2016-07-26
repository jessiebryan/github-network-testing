#ifndef _X86_MEMBLOCK_H
#define _X86_MEMBLOCK_H

#define ARCH_DISCARD_MEMBLOCK

u64 memblock_x86_find_in_range_size(u64 start, u64 *sizep, u64 align);

void memblock_x86_reserve_range(u64 start, u64 end, char *name);
void memblock_x86_free_range(u64 start, u64 end);
struct range;
int __get_free_all_memory_range(struct range **range, int nodeid,
			 unsigned long start_pfn, unsigned long end_pfn);
int get_free_all_memory_range(struct range **rangep, int nodeid);

void memblock_x86_register_active_regions(int nid, unsigned long start_pfn,
					 unsigned long last_pfn);
u64 memblock_x86_hole_size(u64 start, u64 end);
u64 memblock_x86_find_in_range_node(int nid, u64 start, u64 end, u64 size, u64 align);
u64 memblock_x86_free_memory_in_range(u64 addr, u64 limit);
u64 memblock_x86_memory_in_range(u64 addr, u64 limit);
bool memblock_x86_check_reserved_size(u64 *addrp, u64 *sizep, u64 align);

#endif
Tue Jul 19 12:33:27 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:08 PM
Mon, Jul 25, 2016  6:22:22 PM
Mon, Jul 25, 2016  7:35:35 PM
Tue, Jul 26, 2016  2:11:35 PM
