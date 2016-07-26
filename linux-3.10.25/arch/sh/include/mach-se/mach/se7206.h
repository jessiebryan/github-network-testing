#ifndef __ASM_SH_SE7206_H
#define __ASM_SH_SE7206_H

#define PA_SMSC		0x30000000
#define PA_MRSHPC	0x34000000
#define PA_LED		0x31400000

void init_se7206_IRQ(void);

#define __IO_PREFIX	se7206
#include <asm/io_generic.h>

#endif /* __ASM_SH_SE7206_H */
Tue Jul 19 12:50:59 PDT 2016
Fri Jul 22 16:09:58 PDT 2016
Sun, Jul 24, 2016  5:15:59 PM
Tue, Jul 26, 2016 12:07:29 AM
