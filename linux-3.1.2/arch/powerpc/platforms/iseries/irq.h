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
Tue Jul 19 12:34:00 PDT 2016
Fri Jul 22 15:38:55 PDT 2016
Sun, Jul 24, 2016  1:22:34 PM
Mon, Jul 25, 2016  6:31:16 PM
