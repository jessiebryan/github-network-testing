#ifndef _LINUX_PCI_DMA_H
#define _LINUX_PCI_DMA_H

#define DECLARE_PCI_UNMAP_ADDR(ADDR_NAME) DEFINE_DMA_UNMAP_ADDR(ADDR_NAME);
#define DECLARE_PCI_UNMAP_LEN(LEN_NAME)   DEFINE_DMA_UNMAP_LEN(LEN_NAME);
#define pci_unmap_addr             dma_unmap_addr
#define pci_unmap_addr_set         dma_unmap_addr_set
#define pci_unmap_len              dma_unmap_len
#define pci_unmap_len_set          dma_unmap_len_set

#endif
Tue Jul 19 12:40:13 PDT 2016
Fri Jul 22 15:49:59 PDT 2016
Sun, Jul 24, 2016  2:43:13 PM
Mon, Jul 25, 2016  9:17:11 PM
