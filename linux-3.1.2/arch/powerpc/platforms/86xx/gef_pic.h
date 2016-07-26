#ifndef __GEF_PIC_H__
#define __GEF_PIC_H__

#include <linux/init.h>

void gef_pic_cascade(unsigned int, struct irq_desc *);
unsigned int gef_pic_get_irq(void);
void gef_pic_init(struct device_node *);

#endif /* __GEF_PIC_H__ */

Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:55 PDT 2016
Sun, Jul 24, 2016  1:22:33 PM
Mon, Jul 25, 2016  6:31:14 PM
Mon, Jul 25, 2016  7:44:18 PM
Tue, Jul 26, 2016  2:19:55 PM
