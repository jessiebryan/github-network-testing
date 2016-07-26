#ifndef PLAT_FPGA_IRQ_H
#define PLAT_FPGA_IRQ_H

struct fpga_irq_data {
	void __iomem *base;
	unsigned int irq_start;
	struct irq_chip chip;
};

void fpga_irq_init(int, u32, struct fpga_irq_data *);

#endif
Tue Jul 19 12:36:41 PDT 2016
Fri Jul 22 15:43:11 PDT 2016
Sun, Jul 24, 2016  1:53:48 PM
Mon, Jul 25, 2016  8:21:07 PM
