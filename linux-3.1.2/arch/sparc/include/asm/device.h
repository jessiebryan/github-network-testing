/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef _ASM_SPARC_DEVICE_H
#define _ASM_SPARC_DEVICE_H

#include <asm/openprom.h>

struct device_node;
struct platform_device;

struct dev_archdata {
	void			*iommu;
	void			*stc;
	void			*host_controller;
	struct platform_device	*op;
	int			numa_node;
};

extern void of_propagate_archdata(struct platform_device *bus);

struct pdev_archdata {
	struct resource		resource[PROMREG_MAX];
	unsigned int		irqs[PROMINTR_MAX];
	int			num_irqs;
};

#endif /* _ASM_SPARC_DEVICE_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:58 PDT 2016
Sun, Jul 24, 2016  1:22:57 PM
Mon, Jul 25, 2016  6:31:43 PM
Mon, Jul 25, 2016  7:44:46 PM
Tue, Jul 26, 2016  2:20:22 PM
