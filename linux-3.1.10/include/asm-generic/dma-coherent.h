#ifndef DMA_COHERENT_H
#define DMA_COHERENT_H

#ifdef CONFIG_HAVE_GENERIC_DMA_COHERENT
/*
 * These two functions are only for dma allocator.
 * Don't use them in device drivers.
 */
int dma_alloc_from_coherent(struct device *dev, ssize_t size,
				       dma_addr_t *dma_handle, void **ret);
int dma_release_from_coherent(struct device *dev, int order, void *vaddr);

/*
 * Standard interface
 */
#define ARCH_HAS_DMA_DECLARE_COHERENT_MEMORY
extern int
dma_declare_coherent_memory(struct device *dev, dma_addr_t bus_addr,
			    dma_addr_t device_addr, size_t size, int flags);

extern void
dma_release_declared_memory(struct device *dev);

extern void *
dma_mark_declared_memory_occupied(struct device *dev,
				  dma_addr_t device_addr, size_t size);
#else
#define dma_alloc_from_coherent(dev, size, handle, ret) (0)
#define dma_release_from_coherent(dev, order, vaddr) (0)
#endif

#endif
Tue Jul 19 12:33:37 PDT 2016
Fri Jul 22 15:38:18 PDT 2016
Sun, Jul 24, 2016  1:17:44 PM
Mon, Jul 25, 2016  6:25:28 PM
Mon, Jul 25, 2016  7:38:38 PM
Tue, Jul 26, 2016  2:14:31 PM
