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
Tue Jul 19 12:33:58 PDT 2016
Fri Jul 22 15:38:52 PDT 2016
Sun, Jul 24, 2016  1:22:04 PM
Mon, Jul 25, 2016  6:30:40 PM
Mon, Jul 25, 2016  7:43:43 PM
Tue, Jul 26, 2016  2:19:23 PM
