/*
 * Since there are many different boards and no standard configuration,
 * we have a unique include file for each.  Rather than change every
 * file that has to include MPC8260 configuration, they all include
 * this one and the configuration switching is done here.
 */
#ifdef __KERNEL__
#ifndef __ASM_POWERPC_MPC8260_H__
#define __ASM_POWERPC_MPC8260_H__

#define MPC82XX_BCR_PLDP 0x00800000 /* Pipeline Maximum Depth */

#ifdef CONFIG_8260

#if defined(CONFIG_PQ2ADS) || defined (CONFIG_PQ2FADS)
#include <platforms/82xx/pq2ads.h>
#endif

#ifdef CONFIG_PCI_8260
#include <platforms/82xx/m82xx_pci.h>
#endif

#endif /* CONFIG_8260 */
#endif /* !__ASM_POWERPC_MPC8260_H__ */
#endif /* __KERNEL__ */
Tue Jul 19 12:36:48 PDT 2016
Fri Jul 22 15:43:24 PDT 2016
Sun, Jul 24, 2016  1:55:27 PM
Mon, Jul 25, 2016  8:23:03 PM
