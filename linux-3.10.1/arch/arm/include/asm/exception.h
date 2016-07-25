/*
 * Annotations for marking C functions as exception handlers.
 *
 * These should only be used for C functions that are called from the low
 * level exception entry code and not any intervening C code.
 */
#ifndef __ASM_ARM_EXCEPTION_H
#define __ASM_ARM_EXCEPTION_H

#include <linux/ftrace.h>

#define __exception	__attribute__((section(".exception.text")))
#ifdef CONFIG_FUNCTION_GRAPH_TRACER
#define __exception_irq_entry	__irq_entry
#else
#define __exception_irq_entry	__exception
#endif

#endif /* __ASM_ARM_EXCEPTION_H */
Tue Jul 19 12:38:26 PDT 2016
Fri Jul 22 15:46:24 PDT 2016
Sun, Jul 24, 2016  2:17:33 PM
