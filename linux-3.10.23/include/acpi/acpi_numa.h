#ifndef __ACPI_NUMA_H
#define __ACPI_NUMA_H

#ifdef CONFIG_ACPI_NUMA
#include <linux/kernel.h>

/* Proximity bitmap length */
#if MAX_NUMNODES > 256
#define MAX_PXM_DOMAINS MAX_NUMNODES
#else
#define MAX_PXM_DOMAINS (256)	/* Old pxm spec is defined 8 bit */
#endif

extern int pxm_to_node(int);
extern int node_to_pxm(int);
extern void __acpi_map_pxm_to_node(int, int);
extern int acpi_map_pxm_to_node(int);
extern unsigned char acpi_srat_revision;

#endif				/* CONFIG_ACPI_NUMA */
#endif				/* __ACP_NUMA_H */
Tue Jul 19 12:49:56 PDT 2016
Fri Jul 22 16:07:58 PDT 2016
Sun, Jul 24, 2016  5:00:48 PM
Mon, Jul 25, 2016 11:50:44 PM
