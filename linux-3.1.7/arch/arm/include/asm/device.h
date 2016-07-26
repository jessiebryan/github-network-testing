/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */
#ifndef ASMARM_DEVICE_H
#define ASMARM_DEVICE_H

struct dev_archdata {
#ifdef CONFIG_DMABOUNCE
	struct dmabounce_device_info *dmabounce;
#endif
};

struct pdev_archdata {
};

#endif
Tue Jul 19 12:36:37 PDT 2016
Fri Jul 22 15:43:02 PDT 2016
Sun, Jul 24, 2016  1:52:46 PM
Mon, Jul 25, 2016  8:19:54 PM
