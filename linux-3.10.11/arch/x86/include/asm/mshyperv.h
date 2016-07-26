#ifndef _ASM_X86_MSHYPER_H
#define _ASM_X86_MSHYPER_H

#include <linux/types.h>
#include <asm/hyperv.h>

struct ms_hyperv_info {
	u32 features;
	u32 hints;
};

extern struct ms_hyperv_info ms_hyperv;

void hyperv_callback_vector(void);
void hyperv_vector_handler(struct pt_regs *regs);
void hv_register_vmbus_handler(int irq, irq_handler_t handler);

#endif
Tue Jul 19 12:41:59 PDT 2016
Fri Jul 22 15:53:17 PDT 2016
Sun, Jul 24, 2016  3:07:08 PM
Mon, Jul 25, 2016  9:44:13 PM
