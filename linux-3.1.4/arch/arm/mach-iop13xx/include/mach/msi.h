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
Tue Jul 19 12:35:30 PDT 2016
Fri Jul 22 15:40:49 PDT 2016
Sun, Jul 24, 2016  1:36:34 PM
Mon, Jul 25, 2016  8:00:47 PM
Tue, Jul 26, 2016  2:35:23 PM
