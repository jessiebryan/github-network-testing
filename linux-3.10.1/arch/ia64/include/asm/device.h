/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef _ASM_IA64_DEVICE_H
#define _ASM_IA64_DEVICE_H

struct dev_archdata {
#ifdef CONFIG_INTEL_IOMMU
	void *iommu; /* hook for IOMMU specific extension */
#endif
};

struct pdev_archdata {
};

#endif /* _ASM_IA64_DEVICE_H */
Tue Jul 19 12:38:32 PDT 2016
Fri Jul 22 15:46:36 PDT 2016
Sun, Jul 24, 2016  2:18:56 PM
Mon, Jul 25, 2016  8:50:09 PM
