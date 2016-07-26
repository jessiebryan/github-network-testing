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
Tue Jul 19 12:34:41 PDT 2016
Fri Jul 22 15:39:41 PDT 2016
Sun, Jul 24, 2016  1:28:18 PM
Mon, Jul 25, 2016  6:38:09 PM
Mon, Jul 25, 2016  7:51:03 PM
