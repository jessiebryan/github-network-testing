#ifndef __ASM_TCM_H__
#define __ASM_TCM_H__

#include <linux/ioport.h>
#include <linux/list.h>

struct tcm_allocation {
	struct list_head list;
	unsigned int tag;
	unsigned long addr;
	unsigned long size;
};

/*
 * TCM memory region descriptor.
 */
struct tcm_region {
	unsigned int tag;
	struct resource res;
};

#define TCM_INVALID_TAG	0xffffffff

unsigned long tcm_alloc(unsigned int tag, size_t len);
void tcm_free(unsigned int tag, unsigned long addr, size_t len);
unsigned int tcm_lookup_tag(unsigned long p);

int tcm_add_region(struct tcm_region *reg);

#endif
Tue Jul 19 12:49:36 PDT 2016
Fri Jul 22 16:07:21 PDT 2016
Sun, Jul 24, 2016  4:56:02 PM
Mon, Jul 25, 2016 11:45:29 PM
