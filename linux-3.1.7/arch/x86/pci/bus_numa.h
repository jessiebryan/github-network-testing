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
Tue Jul 19 12:36:52 PDT 2016
Fri Jul 22 15:43:32 PDT 2016
Sun, Jul 24, 2016  1:56:31 PM
Mon, Jul 25, 2016  8:24:20 PM
