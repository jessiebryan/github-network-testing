#ifndef LINUX_BCMA_PRIVATE_H_
#define LINUX_BCMA_PRIVATE_H_

#ifndef pr_fmt
#define pr_fmt(fmt)		KBUILD_MODNAME ": " fmt
#endif

#include <linux/bcma/bcma.h>
#include <linux/delay.h>

#define BCMA_CORE_SIZE		0x1000

#define bcma_err(bus, fmt, ...) \
	pr_err("bus%d: " fmt, (bus)->num, ##__VA_ARGS__)
#define bcma_warn(bus, fmt, ...) \
	pr_warn("bus%d: " fmt, (bus)->num, ##__VA_ARGS__)
#define bcma_info(bus, fmt, ...) \
	pr_info("bus%d: " fmt, (bus)->num, ##__VA_ARGS__)
#define bcma_debug(bus, fmt, ...) \
	pr_debug("bus%d: " fmt, (bus)->num, ##__VA_ARGS__)

struct bcma_bus;

/* main.c */
int bcma_bus_register(struct bcma_bus *bus);
void bcma_bus_unregister(struct bcma_bus *bus);
int __init bcma_bus_early_register(struct bcma_bus *bus,
				   struct bcma_device *core_cc,
				   struct bcma_device *core_mips);
#ifdef CONFIG_PM
int bcma_bus_suspend(struct bcma_bus *bus);
int bcma_bus_resume(struct bcma_bus *bus);
#endif
struct bcma_device *bcma_find_core_unit(struct bcma_bus *bus, u16 coreid,
					u8 unit);

/* scan.c */
int bcma_bus_scan(struct bcma_bus *bus);
int __init bcma_bus_scan_early(struct bcma_bus *bus,
			       struct bcma_device_id *match,
			       struct bcma_device *core);
void bcma_init_bus(struct bcma_bus *bus);

/* sprom.c */
int bcma_sprom_get(struct bcma_bus *bus);

/* driver_chipcommon.c */
#ifdef CONFIG_BCMA_DRIVER_MIPS
void bcma_chipco_serial_init(struct bcma_drv_cc *cc);
extern struct platform_device bcma_pflash_dev;
#endif /* CONFIG_BCMA_DRIVER_MIPS */

/* driver_chipcommon_pmu.c */
u32 bcma_pmu_get_alp_clock(struct bcma_drv_cc *cc);
u32 bcma_pmu_get_cpu_clock(struct bcma_drv_cc *cc);

#ifdef CONFIG_BCMA_SFLASH
/* driver_chipcommon_sflash.c */
int bcma_sflash_init(struct bcma_drv_cc *cc);
extern struct platform_device bcma_sflash_dev;
#else
static inline int bcma_sflash_init(struct bcma_drv_cc *cc)
{
	bcma_err(cc->core->bus, "Serial flash not supported\n");
	return 0;
}
#endif /* CONFIG_BCMA_SFLASH */

#ifdef CONFIG_BCMA_NFLASH
/* driver_chipcommon_nflash.c */
int bcma_nflash_init(struct bcma_drv_cc *cc);
extern struct platform_device bcma_nflash_dev;
#else
static inline int bcma_nflash_init(struct bcma_drv_cc *cc)
{
	bcma_err(cc->core->bus, "NAND flash not supported\n");
	return 0;
}
#endif /* CONFIG_BCMA_NFLASH */

#ifdef CONFIG_BCMA_HOST_PCI
/* host_pci.c */
extern int __init bcma_host_pci_init(void);
extern void __exit bcma_host_pci_exit(void);
#endif /* CONFIG_BCMA_HOST_PCI */

/* driver_pci.c */
u32 bcma_pcie_read(struct bcma_drv_pci *pc, u32 address);

extern int bcma_chipco_watchdog_register(struct bcma_drv_cc *cc);

#ifdef CONFIG_BCMA_DRIVER_PCI_HOSTMODE
bool bcma_core_pci_is_in_hostmode(struct bcma_drv_pci *pc);
void bcma_core_pci_hostmode_init(struct bcma_drv_pci *pc);
#endif /* CONFIG_BCMA_DRIVER_PCI_HOSTMODE */

#ifdef CONFIG_BCMA_DRIVER_GPIO
/* driver_gpio.c */
int bcma_gpio_init(struct bcma_drv_cc *cc);
int bcma_gpio_unregister(struct bcma_drv_cc *cc);
#else
static inline int bcma_gpio_init(struct bcma_drv_cc *cc)
{
	return -ENOTSUPP;
}
static inline int bcma_gpio_unregister(struct bcma_drv_cc *cc)
{
	return 0;
}
#endif /* CONFIG_BCMA_DRIVER_GPIO */

#endif
Tue Jul 19 12:49:45 PDT 2016
Fri Jul 22 16:07:37 PDT 2016
Sun, Jul 24, 2016  4:58:09 PM
Mon, Jul 25, 2016 11:47:49 PM
