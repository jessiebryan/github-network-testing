#ifndef ASMARM_ARCH_OHCI_H
#define ASMARM_ARCH_OHCI_H

struct device;

struct pxaohci_platform_data {
	int (*init)(struct device *);
	void (*exit)(struct device *);

	unsigned long flags;
#define ENABLE_PORT1		(1 << 0)
#define ENABLE_PORT2		(1 << 1)
#define ENABLE_PORT3		(1 << 2)
#define ENABLE_PORT_ALL		(ENABLE_PORT1 | ENABLE_PORT2 | ENABLE_PORT3)

#define POWER_SENSE_LOW		(1 << 3)
#define POWER_CONTROL_LOW	(1 << 4)
#define NO_OC_PROTECTION	(1 << 5)
#define OC_MODE_GLOBAL		(0 << 6)
#define OC_MODE_PERPORT		(1 << 6)

	int power_on_delay;	/* Power On to Power Good time - in ms
				 * HCD must wait for this duration before
				 * accessing a powered on port
				 */
	int port_mode;
#define PMM_NPS_MODE           1
#define PMM_GLOBAL_MODE        2
#define PMM_PERPORT_MODE       3

	int power_budget;
};

extern void pxa_set_ohci_info(struct pxaohci_platform_data *info);

#endif
Tue Jul 19 12:43:00 PDT 2016
Fri Jul 22 15:54:58 PDT 2016
Sun, Jul 24, 2016  3:20:11 PM
Mon, Jul 25, 2016  9:58:52 PM
