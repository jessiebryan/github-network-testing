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
Tue Jul 19 12:52:16 PDT 2016
Fri Jul 22 16:12:29 PDT 2016
Sun, Jul 24, 2016  5:34:19 PM
