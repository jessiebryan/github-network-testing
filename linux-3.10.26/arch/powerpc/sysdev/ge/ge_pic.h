#ifndef __GEF_PIC_H__
#define __GEF_PIC_H__

#include <linux/init.h>

void gef_pic_cascade(unsigned int, struct irq_desc *);
unsigned int gef_pic_get_irq(void);
void gef_pic_init(struct device_node *);

#endif /* __GEF_PIC_H__ */

Tue Jul 19 12:51:37 PDT 2016
Fri Jul 22 16:11:11 PDT 2016
Sun, Jul 24, 2016  5:24:58 PM
Tue, Jul 26, 2016 12:17:22 AM
