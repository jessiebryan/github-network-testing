#ifndef PLAT_FPGA_IRQ_H
#define PLAT_FPGA_IRQ_H

struct fpga_irq_data {
	void __iomem *base;
	unsigned int irq_start;
	struct irq_chip chip;
};

void fpga_irq_init(int, u32, struct fpga_irq_data *);

#endif
Tue Jul 19 12:37:16 PDT 2016
Fri Jul 22 15:44:17 PDT 2016
Sun, Jul 24, 2016  2:02:03 PM
Mon, Jul 25, 2016  8:30:54 PM
