#ifndef _IOP13XX_MSI_H_
#define _IOP13XX_MSI_H_
#ifdef CONFIG_PCI_MSI
void iop13xx_msi_init(void);
#else
static inline void iop13xx_msi_init(void)
{
	return;
}
#endif
#endif
Tue Jul 19 12:48:50 PDT 2016
Fri Jul 22 16:05:55 PDT 2016
Sun, Jul 24, 2016  4:45:18 PM
Mon, Jul 25, 2016 11:33:30 PM
