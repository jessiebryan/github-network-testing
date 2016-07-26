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
Tue Jul 19 12:45:53 PDT 2016
Fri Jul 22 16:00:23 PDT 2016
Sun, Jul 24, 2016  4:02:28 PM
Mon, Jul 25, 2016 10:45:54 PM
