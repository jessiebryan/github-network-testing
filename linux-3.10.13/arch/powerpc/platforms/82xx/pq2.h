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
Tue Jul 19 12:43:18 PDT 2016
Fri Jul 22 15:55:33 PDT 2016
Sun, Jul 24, 2016  3:24:44 PM
Mon, Jul 25, 2016 10:03:54 PM
