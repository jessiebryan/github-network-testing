#ifndef __LINUX_USB_PCI_QUIRKS_H
#define __LINUX_USB_PCI_QUIRKS_H

#ifdef CONFIG_PCI
void uhci_reset_hc(struct pci_dev *pdev, unsigned long base);
int uhci_check_and_reset_hc(struct pci_dev *pdev, unsigned long base);
int usb_amd_find_chipset_info(void);
void usb_amd_dev_put(void);
void usb_amd_quirk_pll_disable(void);
void usb_amd_quirk_pll_enable(void);
bool usb_is_intel_switchable_xhci(struct pci_dev *pdev);
void usb_enable_xhci_ports(struct pci_dev *xhci_pdev);
#else
static inline void usb_amd_quirk_pll_disable(void) {}
static inline void usb_amd_quirk_pll_enable(void) {}
static inline void usb_amd_dev_put(void) {}
#endif  /* CONFIG_PCI */

#endif  /*  __LINUX_USB_PCI_QUIRKS_H  */
Tue Jul 19 12:34:20 PDT 2016
Fri Jul 22 15:39:19 PDT 2016
Sun, Jul 24, 2016  1:25:33 PM
Mon, Jul 25, 2016  6:34:51 PM
Mon, Jul 25, 2016  7:47:49 PM
Tue, Jul 26, 2016  2:23:14 PM
