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
Tue Jul 19 12:50:47 PDT 2016
Fri Jul 22 16:09:35 PDT 2016
Sun, Jul 24, 2016  5:13:08 PM
