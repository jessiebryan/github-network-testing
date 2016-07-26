#ifndef PLAT_FPGA_IRQ_H
#define PLAT_FPGA_IRQ_H

struct fpga_irq_data {
	void __iomem *base;
	unsigned int irq_start;
	struct irq_chip chip;
};

void fpga_irq_init(int, u32, struct fpga_irq_data *);

#endif
Tue Jul 19 12:35:33 PDT 2016
Fri Jul 22 15:40:57 PDT 2016
Sun, Jul 24, 2016  1:37:19 PM
Mon, Jul 25, 2016  8:01:40 PM
Tue, Jul 26, 2016  2:36:13 PM
