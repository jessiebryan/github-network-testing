#ifndef __LINUX_ATA_PLATFORM_H
#define __LINUX_ATA_PLATFORM_H

struct pata_platform_info {
	/*
	 * I/O port shift, for platforms with ports that are
	 * constantly spaced and need larger than the 1-byte
	 * spacing used by ata_std_ports().
	 */
	unsigned int ioport_shift;
	/* 
	 * Indicate platform specific irq types and initial
	 * IRQ flags when call request_irq()
	 */
	unsigned int irq_flags;
};

extern int __devinit __pata_platform_probe(struct device *dev,
					   struct resource *io_res,
					   struct resource *ctl_res,
					   struct resource *irq_res,
					   unsigned int ioport_shift,
					   int __pio_mask);

extern int __devexit __pata_platform_remove(struct device *dev);

/*
 * Marvell SATA private data
 */
struct mbus_dram_target_info;

struct mv_sata_platform_data {
	struct mbus_dram_target_info	*dram;
	int	n_ports; /* number of sata ports */
};

#endif /* __LINUX_ATA_PLATFORM_H */
Tue Jul 19 12:37:40 PDT 2016
Fri Jul 22 15:45:01 PDT 2016
Sun, Jul 24, 2016  2:07:22 PM
Mon, Jul 25, 2016  8:37:16 PM
