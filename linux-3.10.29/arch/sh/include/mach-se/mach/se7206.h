#ifndef __ASM_SH_SE7206_H
#define __ASM_SH_SE7206_H

#define PA_SMSC		0x30000000
#define PA_MRSHPC	0x34000000
#define PA_LED		0x31400000

void init_se7206_IRQ(void);

#define __IO_PREFIX	se7206
#include <asm/io_generic.h>

#endif /* __ASM_SH_SE7206_H */
Tue Jul 19 12:53:35 PDT 2016
Fri Jul 22 16:15:02 PDT 2016
Sun, Jul 24, 2016  5:53:15 PM
Tue, Jul 26, 2016 12:48:35 AM
