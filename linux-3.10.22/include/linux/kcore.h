/*
 * /proc/kcore definitions
 */
#ifndef _LINUX_KCORE_H
#define _LINUX_KCORE_H

enum kcore_type {
	KCORE_TEXT,
	KCORE_VMALLOC,
	KCORE_RAM,
	KCORE_VMEMMAP,
	KCORE_OTHER,
};

struct kcore_list {
	struct list_head list;
	unsigned long addr;
	size_t size;
	int type;
};

struct vmcore {
	struct list_head list;
	unsigned long long paddr;
	unsigned long long size;
	loff_t offset;
};

#ifdef CONFIG_PROC_KCORE
extern void kclist_add(struct kcore_list *, void *, size_t, int type);
#else
static inline
void kclist_add(struct kcore_list *new, void *addr, size_t size, int type)
{
}
#endif

#endif /* _LINUX_KCORE_H */
Tue Jul 19 12:49:20 PDT 2016
Fri Jul 22 16:06:49 PDT 2016
Sun, Jul 24, 2016  4:52:03 PM
Mon, Jul 25, 2016 11:41:03 PM
