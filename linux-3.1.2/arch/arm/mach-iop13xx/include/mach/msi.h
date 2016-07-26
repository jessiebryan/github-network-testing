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
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:03 PM
Mon, Jul 25, 2016  6:28:15 PM
Mon, Jul 25, 2016  7:41:21 PM
