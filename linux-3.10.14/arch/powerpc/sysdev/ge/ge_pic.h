#ifndef __GEF_PIC_H__
#define __GEF_PIC_H__

#include <linux/init.h>

void gef_pic_cascade(unsigned int, struct irq_desc *);
unsigned int gef_pic_get_irq(void);
void gef_pic_init(struct device_node *);

#endif /* __GEF_PIC_H__ */

Tue Jul 19 12:43:58 PDT 2016
Fri Jul 22 15:56:44 PDT 2016
Sun, Jul 24, 2016  3:33:58 PM
Mon, Jul 25, 2016 10:14:12 PM
