#ifndef ___ASM_SPARC_PCI_H
#define ___ASM_SPARC_PCI_H
#if defined(__sparc__) && defined(__arch64__)
#include <asm/pci_64.h>
#else
#include <asm/pci_32.h>
#endif

#include <asm-generic/pci-dma-compat.h>

#endif
Tue Jul 19 12:47:08 PDT 2016
