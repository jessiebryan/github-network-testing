#ifndef _ASM_X86_DEVICE_H
#define _ASM_X86_DEVICE_H

struct dev_archdata {
#ifdef CONFIG_X86_DEV_DMA_OPS
	struct dma_map_ops *dma_ops;
#endif
#if defined(CONFIG_INTEL_IOMMU) || defined(CONFIG_AMD_IOMMU)
	void *iommu; /* hook for IOMMU specific extension */
#endif
};

struct pdev_archdata {
};

#endif /* _ASM_X86_DEVICE_H */
Tue Jul 19 12:45:53 PDT 2016
Fri Jul 22 16:00:22 PDT 2016
Sun, Jul 24, 2016  4:02:24 PM
Mon, Jul 25, 2016 10:45:50 PM
