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
Tue Jul 19 12:38:02 PDT 2016
Fri Jul 22 15:45:38 PDT 2016
