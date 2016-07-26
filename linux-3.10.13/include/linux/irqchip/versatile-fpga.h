#ifndef PLAT_FPGA_IRQ_H
#define PLAT_FPGA_IRQ_H

struct device_node;
struct pt_regs;

void fpga_handle_irq(struct pt_regs *regs);
void fpga_irq_init(void __iomem *, const char *, int, int, u32,
		struct device_node *node);
int fpga_irq_of_init(struct device_node *node,
		     struct device_node *parent);

#endif
Tue Jul 19 12:43:36 PDT 2016
Fri Jul 22 15:56:05 PDT 2016
Sun, Jul 24, 2016  3:28:59 PM
Mon, Jul 25, 2016 10:08:39 PM
