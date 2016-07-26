#ifndef __X86_MM_NUMA_INTERNAL_H
#define __X86_MM_NUMA_INTERNAL_H

#include <linux/types.h>
#include <asm/numa.h>

struct numa_memblk {
	u64			start;
	u64			end;
	int			nid;
};

struct numa_meminfo {
	int			nr_blks;
	struct numa_memblk	blk[NR_NODE_MEMBLKS];
};

void __init numa_remove_memblk_from(int idx, struct numa_meminfo *mi);
int __init numa_cleanup_meminfo(struct numa_meminfo *mi);
void __init numa_reset_distance(void);

void __init x86_numa_init(void);

#ifdef CONFIG_X86_64
static inline void init_alloc_remap(int nid, u64 start, u64 end)	{ }
#else
void __init init_alloc_remap(int nid, u64 start, u64 end);
#endif

#ifdef CONFIG_NUMA_EMU
void __init numa_emulation(struct numa_meminfo *numa_meminfo,
			   int numa_dist_cnt);
#else
static inline void numa_emulation(struct numa_meminfo *numa_meminfo,
				  int numa_dist_cnt)
{ }
#endif

#endif	/* __X86_MM_NUMA_INTERNAL_H */
Tue Jul 19 12:35:45 PDT 2016
Fri Jul 22 15:41:19 PDT 2016
Sun, Jul 24, 2016  1:40:01 PM
Mon, Jul 25, 2016  8:04:53 PM
Tue, Jul 26, 2016  2:39:15 PM
