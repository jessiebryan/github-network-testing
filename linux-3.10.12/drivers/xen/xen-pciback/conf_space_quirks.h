/*
 * PCI Backend - Data structures for special overlays for broken devices.
 *
 * Ryan Wilson <hap9@epoch.ncsc.mil>
 * Chris Bookholt <hap10@epoch.ncsc.mil>
 */

#ifndef __XEN_PCIBACK_CONF_SPACE_QUIRKS_H__
#define __XEN_PCIBACK_CONF_SPACE_QUIRKS_H__

#include <linux/pci.h>
#include <linux/list.h>

struct xen_pcibk_config_quirk {
	struct list_head quirks_list;
	struct pci_device_id devid;
	struct pci_dev *pdev;
};

int xen_pcibk_config_quirks_add_field(struct pci_dev *dev, struct config_field
				    *field);

int xen_pcibk_config_quirks_remove_field(struct pci_dev *dev, int reg);

int xen_pcibk_config_quirks_init(struct pci_dev *dev);

void xen_pcibk_config_field_free(struct config_field *field);

int xen_pcibk_config_quirk_release(struct pci_dev *dev);

int xen_pcibk_field_is_dup(struct pci_dev *dev, unsigned int reg);

#endif
Tue Jul 19 12:42:55 PDT 2016
Fri Jul 22 15:54:49 PDT 2016
Sun, Jul 24, 2016  3:19:00 PM
Mon, Jul 25, 2016  9:57:33 PM
