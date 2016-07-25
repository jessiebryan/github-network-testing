/*
 * Header file for STMicroelectronics ConneXt (STA2X11) IOHub
 */
#ifndef __ASM_STA2X11_H
#define __ASM_STA2X11_H

#include <linux/pci.h>

/* This needs to be called from the MFD to configure its sub-devices */
struct sta2x11_instance *sta2x11_get_instance(struct pci_dev *pdev);

#endif /* __ASM_STA2X11_H */
Tue Jul 19 12:43:22 PDT 2016
Fri Jul 22 15:55:39 PDT 2016
Sun, Jul 24, 2016  3:25:37 PM
