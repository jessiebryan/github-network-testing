#ifndef __ASM_SN_HUB_H
#define __ASM_SN_HUB_H

#include <linux/types.h>
#include <linux/cpumask.h>
#include <asm/sn/types.h>
#include <asm/sn/io.h>
#include <asm/sn/klkernvars.h>
#include <asm/xtalk/xtalk.h>

/* ip27-hubio.c */
extern unsigned long hub_pio_map(cnodeid_t cnode, xwidgetnum_t widget,
			  unsigned long xtalk_addr, size_t size);
extern void hub_pio_init(cnodeid_t cnode);

#endif /* __ASM_SN_HUB_H */
Tue Jul 19 12:35:39 PDT 2016
Fri Jul 22 15:41:07 PDT 2016
Sun, Jul 24, 2016  1:38:34 PM
Mon, Jul 25, 2016  8:03:09 PM
Tue, Jul 26, 2016  2:37:38 PM
