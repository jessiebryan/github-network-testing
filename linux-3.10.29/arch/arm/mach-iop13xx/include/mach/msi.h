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
Tue Jul 19 12:53:23 PDT 2016
Fri Jul 22 16:14:39 PDT 2016
Sun, Jul 24, 2016  5:50:24 PM
Tue, Jul 26, 2016 12:45:25 AM
