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
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:32 PDT 2016
Sun, Jul 24, 2016  2:54:37 PM
Mon, Jul 25, 2016  9:30:04 PM
