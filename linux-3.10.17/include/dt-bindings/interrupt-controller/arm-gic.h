/*
 * This header provides constants for the ARM GIC.
 */

#ifndef _DT_BINDINGS_INTERRUPT_CONTROLLER_ARM_GIC_H
#define _DT_BINDINGS_INTERRUPT_CONTROLLER_ARM_GIC_H

#include <dt-bindings/interrupt-controller/irq.h>

/* interrupt specific cell 0 */

#define GIC_SPI 0
#define GIC_PPI 1

/*
 * Interrupt specifier cell 2.
 * The flaggs in irq.h are valid, plus those below.
 */
#define GIC_CPU_MASK_RAW(x) ((x) << 8)
#define GIC_CPU_MASK_SIMPLE(num) GIC_CPU_MASK_RAW((1 << (num)) - 1)

#endif
Tue Jul 19 12:46:05 PDT 2016
Fri Jul 22 16:00:46 PDT 2016
Sun, Jul 24, 2016  4:05:32 PM
Mon, Jul 25, 2016 10:49:18 PM
