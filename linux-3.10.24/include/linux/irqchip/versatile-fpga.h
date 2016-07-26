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
Tue Jul 19 12:50:37 PDT 2016
Fri Jul 22 16:09:15 PDT 2016
Sun, Jul 24, 2016  5:10:38 PM
Tue, Jul 26, 2016 12:01:33 AM
