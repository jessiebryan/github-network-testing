#ifndef _PQ2_H
#define _PQ2_H

void pq2_restart(char *cmd);

#ifdef CONFIG_PCI
int pq2ads_pci_init_irq(void);
void pq2_init_pci(void);
#else
static inline int pq2ads_pci_init_irq(void)
{
	return 0;
}

static inline void pq2_init_pci(void)
{
}
#endif

#endif
Tue Jul 19 12:50:18 PDT 2016
Fri Jul 22 16:08:41 PDT 2016
Sun, Jul 24, 2016  5:06:20 PM
Mon, Jul 25, 2016 11:56:47 PM
