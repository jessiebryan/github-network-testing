#ifndef PCI_BCM63XX_H_
#define PCI_BCM63XX_H_

#include <bcm63xx_cpu.h>
#include <bcm63xx_io.h>
#include <bcm63xx_regs.h>
#include <bcm63xx_dev_pci.h>

/*
 * Cardbus shares  the PCI bus, but has  no IDSEL, so a  special id is
 * reserved for it.  If you have a standard PCI device at this id, you
 * need to change the following definition.
 */
#define CARDBUS_PCI_IDSEL	0x8

/*
 * defined in ops-bcm63xx.c
 */
extern struct pci_ops bcm63xx_pci_ops;
extern struct pci_ops bcm63xx_cb_ops;

/*
 * defined in pci-bcm63xx.c
 */
extern void __iomem *pci_iospace_start;

#endif /* ! PCI_BCM63XX_H_ */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:47 PDT 2016
Sun, Jul 24, 2016  1:13:53 PM
Mon, Jul 25, 2016  6:20:52 PM
Mon, Jul 25, 2016  7:34:07 PM
