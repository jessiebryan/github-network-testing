#ifndef _ASM_X86_DEVICE_H
#define _ASM_X86_DEVICE_H

struct dev_archdata {
#ifdef CONFIG_ACPI
	void	*acpi_handle;
#endif
#ifdef CONFIG_X86_64
struct dma_map_ops *dma_ops;
#endif
#if defined(CONFIG_DMAR) || defined(CONFIG_AMD_IOMMU)
	void *iommu; /* hook for IOMMU specific extension */
#endif
};

struct pdev_archdata {
};

#endif /* _ASM_X86_DEVICE_H */
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:57 PDT 2016
Sun, Jul 24, 2016  1:15:05 PM
Mon, Jul 25, 2016  6:22:18 PM
Mon, Jul 25, 2016  7:35:32 PM
Tue, Jul 26, 2016  2:11:32 PM
