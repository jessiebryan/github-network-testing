#ifndef _HW_IRQ_H
#define _HW_IRQ_H

#include <linux/msi.h>
#include <linux/pci.h>

static inline struct msi_desc *irq_get_msi_desc(unsigned int irq)
{
	return __irq_get_msi_desc(irq);
}

/* Must be called with msi map lock held */
static inline int irq_set_msi_desc(unsigned int irq, struct msi_desc *msi)
{
	if (!msi)
		return -EINVAL;

	msi->irq = irq;
	return 0;
}

#endif
Tue Jul 19 12:49:40 PDT 2016
Fri Jul 22 16:07:28 PDT 2016
Sun, Jul 24, 2016  4:57:04 PM
Mon, Jul 25, 2016 11:46:37 PM
