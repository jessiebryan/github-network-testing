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
Tue Jul 19 12:43:57 PDT 2016
Fri Jul 22 15:56:42 PDT 2016
Sun, Jul 24, 2016  3:33:47 PM
Mon, Jul 25, 2016 10:13:59 PM
