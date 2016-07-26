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
Tue Jul 19 12:46:08 PDT 2016
Fri Jul 22 16:00:51 PDT 2016
Sun, Jul 24, 2016  4:06:10 PM
Mon, Jul 25, 2016 10:50:00 PM
