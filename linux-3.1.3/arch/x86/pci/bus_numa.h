#ifndef __BUS_NUMA_H
#define __BUS_NUMA_H
/*
 * sub bus (transparent) will use entres from 3 to store extra from
 * root, so need to make sure we have enough slot there.
 */
#define RES_NUM 16
struct pci_root_info {
	char name[12];
	unsigned int res_num;
	struct resource res[RES_NUM];
	int bus_min;
	int bus_max;
	int node;
	int link;
};

/* 4 at this time, it may become to 32 */
#define PCI_ROOT_NR 4
extern int pci_root_num;
extern struct pci_root_info pci_root_info[PCI_ROOT_NR];

extern void update_res(struct pci_root_info *info, resource_size_t start,
		      resource_size_t end, unsigned long flags, int merge);
#endif
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:11 PDT 2016
Sun, Jul 24, 2016  1:31:47 PM
Mon, Jul 25, 2016  7:55:08 PM
Tue, Jul 26, 2016  2:30:08 PM
