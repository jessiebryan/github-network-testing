#ifndef _ASM_POWERPC_GRACKLE_H
#define _ASM_POWERPC_GRACKLE_H
#ifdef __KERNEL__
/*
 * Functions for setting up and using a MPC106 northbridge
 */

#include <asm/pci-bridge.h>

extern void setup_grackle(struct pci_controller *hose);
#endif /* __KERNEL__ */
#endif /* _ASM_POWERPC_GRACKLE_H */
Tue Jul 19 12:36:14 PDT 2016
Fri Jul 22 15:42:16 PDT 2016
Sun, Jul 24, 2016  1:47:09 PM
Mon, Jul 25, 2016  8:13:18 PM
