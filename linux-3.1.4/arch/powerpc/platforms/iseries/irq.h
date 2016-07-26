#ifndef	_ISERIES_IRQ_H
#define	_ISERIES_IRQ_H

#ifdef CONFIG_PCI
extern void iSeries_init_IRQ(void);
extern int  iSeries_allocate_IRQ(HvBusNumber, HvSubBusNumber, u32);
extern void iSeries_activate_IRQs(void);
#else
#define iSeries_init_IRQ	NULL
#endif
extern unsigned int iSeries_get_irq(void);

#endif /* _ISERIES_IRQ_H */
Tue Jul 19 12:35:41 PDT 2016
Fri Jul 22 15:41:11 PDT 2016
Sun, Jul 24, 2016  1:39:04 PM
Mon, Jul 25, 2016  8:03:45 PM
