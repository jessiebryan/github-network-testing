#ifndef LINUX_BCMA_PRIVATE_H_
#define LINUX_BCMA_PRIVATE_H_

#ifndef pr_fmt
#define pr_fmt(fmt)		KBUILD_MODNAME ": " fmt
#endif

#include <linux/bcma/bcma.h>
#include <linux/delay.h>

#define BCMA_CORE_SIZE		0x1000

struct bcma_bus;

/* main.c */
int bcma_bus_register(struct bcma_bus *bus);
void bcma_bus_unregister(struct bcma_bus *bus);

/* scan.c */
int bcma_bus_scan(struct bcma_bus *bus);

/* sprom.c */
int bcma_sprom_get(struct bcma_bus *bus);

#ifdef CONFIG_BCMA_HOST_PCI
/* host_pci.c */
extern int __init bcma_host_pci_init(void);
extern void __exit bcma_host_pci_exit(void);
#endif /* CONFIG_BCMA_HOST_PCI */

#ifdef CONFIG_BCMA_DRIVER_PCI_HOSTMODE
void bcma_core_pci_hostmode_init(struct bcma_drv_pci *pc);
#endif /* CONFIG_BCMA_DRIVER_PCI_HOSTMODE */

#endif
Tue Jul 19 12:38:07 PDT 2016
Fri Jul 22 15:45:47 PDT 2016
Sun, Jul 24, 2016  2:13:07 PM
Mon, Jul 25, 2016  8:43:42 PM
