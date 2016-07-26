#ifndef _ASM_X86_PCI_DIRECT_H
#define _ASM_X86_PCI_DIRECT_H

#include <linux/types.h>

/* Direct PCI access. This is used for PCI accesses in early boot before
   the PCI subsystem works. */

extern u32 read_pci_config(u8 bus, u8 slot, u8 func, u8 offset);
extern u8 read_pci_config_byte(u8 bus, u8 slot, u8 func, u8 offset);
extern u16 read_pci_config_16(u8 bus, u8 slot, u8 func, u8 offset);
extern void write_pci_config(u8 bus, u8 slot, u8 func, u8 offset, u32 val);
extern void write_pci_config_byte(u8 bus, u8 slot, u8 func, u8 offset, u8 val);
extern void write_pci_config_16(u8 bus, u8 slot, u8 func, u8 offset, u16 val);

extern int early_pci_allowed(void);

extern unsigned int pci_early_dump_regs;
extern void early_dump_pci_device(u8 bus, u8 slot, u8 func);
extern void early_dump_pci_devices(void);
#endif /* _ASM_X86_PCI_DIRECT_H */
Tue Jul 19 12:34:04 PDT 2016
Fri Jul 22 15:39:02 PDT 2016
Sun, Jul 24, 2016  1:23:25 PM
Mon, Jul 25, 2016  6:32:18 PM
Mon, Jul 25, 2016  7:45:19 PM
