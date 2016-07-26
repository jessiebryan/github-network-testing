/* $Id: diva_pci.h,v 1.6 2003/01/04 15:29:45 schindler Exp $ */

#ifndef __DIVA_PCI_INTERFACE_H__
#define __DIVA_PCI_INTERFACE_H__

void __iomem *divasa_remap_pci_bar(diva_os_xdi_adapter_t *a,
			   int id,
			   unsigned long bar,
			   unsigned long area_length);
void divasa_unmap_pci_bar(void __iomem *bar);
unsigned long divasa_get_pci_irq(unsigned char bus,
				 unsigned char func, void *pci_dev_handle);
unsigned long divasa_get_pci_bar(unsigned char bus,
				 unsigned char func,
				 int bar, void *pci_dev_handle);
byte diva_os_get_pci_bus(void *pci_dev_handle);
byte diva_os_get_pci_func(void *pci_dev_handle);

#endif
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:05 PDT 2016
Sun, Jul 24, 2016  1:23:51 PM
Mon, Jul 25, 2016  6:32:50 PM
Mon, Jul 25, 2016  7:45:49 PM
Tue, Jul 26, 2016  2:21:22 PM
