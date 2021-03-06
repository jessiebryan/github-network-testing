/*
 * Miscellaneous SoC-specific hooks.
 *
 * Copyright (C) 2011 Texas Instruments Incorporated
 *
 * Author: Mark Salter <msalter@redhat.com>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#ifndef _ASM_C6X_SOC_H
#define _ASM_C6X_SOC_H

struct soc_ops {
	/* Return active exception event or -1 if none */
	int		(*get_exception)(void);

	/* Assert an event */
	void		(*assert_event)(unsigned int evt);
};

extern struct soc_ops soc_ops;

extern int soc_get_exception(void);
extern void soc_assert_event(unsigned int event);
extern int soc_mac_addr(unsigned int index, u8 *addr);

/*
 * for mmio on SoC devices. regs are always same byte order as cpu.
 */
#define soc_readl(addr)    __raw_readl(addr)
#define soc_writel(b, addr) __raw_writel((b), (addr))

#endif /* _ASM_C6X_SOC_H */
Tue Jul 19 12:53:26 PDT 2016
Fri Jul 22 16:14:45 PDT 2016
Sun, Jul 24, 2016  5:51:10 PM
Tue, Jul 26, 2016 12:46:15 AM
