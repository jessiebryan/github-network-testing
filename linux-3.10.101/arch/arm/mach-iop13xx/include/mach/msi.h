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
Tue Jul 19 12:40:22 PDT 2016
Fri Jul 22 15:50:16 PDT 2016
Sun, Jul 24, 2016  2:45:24 PM
Mon, Jul 25, 2016  9:19:39 PM
