/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef _ASM_IA64_DEVICE_H
#define _ASM_IA64_DEVICE_H

struct dev_archdata {
#ifdef CONFIG_ACPI
	void	*acpi_handle;
#endif
#ifdef CONFIG_DMAR
	void *iommu; /* hook for IOMMU specific extension */
#endif
};

struct pdev_archdata {
};

#endif /* _ASM_IA64_DEVICE_H */
Tue Jul 19 12:36:09 PDT 2016
Fri Jul 22 15:42:07 PDT 2016
Sun, Jul 24, 2016  1:46:06 PM
Mon, Jul 25, 2016  8:12:03 PM
Tue, Jul 26, 2016  2:45:57 PM
