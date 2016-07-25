#ifndef LINUX_BCMA_SOC_H_
#define LINUX_BCMA_SOC_H_

#include <linux/bcma/bcma.h>

struct bcma_soc {
	struct bcma_bus bus;
	struct bcma_device core_cc;
	struct bcma_device core_mips;
};

int __init bcma_host_soc_register(struct bcma_soc *soc);

int bcma_bus_register(struct bcma_bus *bus);

#endif /* LINUX_BCMA_SOC_H_ */
Tue Jul 19 12:53:11 PDT 2016
Fri Jul 22 16:14:17 PDT 2016
Sun, Jul 24, 2016  5:47:35 PM
