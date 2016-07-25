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
Tue Jul 19 12:53:33 PDT 2016
Fri Jul 22 16:15:00 PDT 2016
Sun, Jul 24, 2016  5:52:57 PM
