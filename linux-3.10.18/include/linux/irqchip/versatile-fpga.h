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
Tue Jul 19 12:46:46 PDT 2016
Fri Jul 22 16:02:01 PDT 2016
Sun, Jul 24, 2016  4:15:07 PM
Mon, Jul 25, 2016 10:59:57 PM
