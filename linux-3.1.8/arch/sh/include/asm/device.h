/*
 * Arch specific extensions to struct device
 *
 * This file is released under the GPLv2
 */

struct dev_archdata {
};

struct platform_device;
/* allocate contiguous memory chunk and fill in struct resource */
int platform_resource_setup_memory(struct platform_device *pdev,
				   char *name, unsigned long memsize);

void plat_early_device_setup(void);

#define PDEV_ARCHDATA_FLAG_INIT 0
#define PDEV_ARCHDATA_FLAG_IDLE 1
#define PDEV_ARCHDATA_FLAG_SUSP 2

struct pdev_archdata {
	int hwblk_id;
#ifdef CONFIG_PM_RUNTIME
	unsigned long flags;
	struct list_head entry;
	struct mutex mutex;
#endif
};
Tue Jul 19 12:37:24 PDT 2016
Fri Jul 22 15:44:33 PDT 2016
Sun, Jul 24, 2016  2:04:00 PM
Mon, Jul 25, 2016  8:33:14 PM
