#ifndef __OF_IOMMU_H
#define __OF_IOMMU_H

#ifdef CONFIG_OF_IOMMU

extern int of_get_dma_window(struct device_node *dn, const char *prefix,
			     int index, unsigned long *busno, dma_addr_t *addr,
			     size_t *size);

#else

static inline int of_get_dma_window(struct device_node *dn, const char *prefix,
			    int index, unsigned long *busno, dma_addr_t *addr,
			    size_t *size)
{
	return -EINVAL;
}

#endif	/* CONFIG_OF_IOMMU */

#endif /* __OF_IOMMU_H */
Tue Jul 19 12:42:20 PDT 2016
Fri Jul 22 15:53:46 PDT 2016
Sun, Jul 24, 2016  3:10:50 PM
