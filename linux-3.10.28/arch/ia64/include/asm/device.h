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
Tue Jul 19 12:52:49 PDT 2016
Fri Jul 22 16:13:34 PDT 2016
Sun, Jul 24, 2016  5:42:14 PM
Tue, Jul 26, 2016 12:36:25 AM
