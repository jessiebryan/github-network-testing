#ifndef __OF_PCI_H
#define __OF_PCI_H

#include <linux/pci.h>

struct pci_dev;
struct of_irq;
int of_irq_map_pci(const struct pci_dev *pdev, struct of_irq *out_irq);

struct device_node;
struct device_node *of_pci_find_child_device(struct device_node *parent,
					     unsigned int devfn);

#endif
Tue Jul 19 12:51:56 PDT 2016
Fri Jul 22 16:11:50 PDT 2016
Sun, Jul 24, 2016  5:29:32 PM
Tue, Jul 26, 2016 12:22:23 AM
