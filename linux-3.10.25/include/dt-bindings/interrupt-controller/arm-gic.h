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
Tue Jul 19 12:51:14 PDT 2016
Fri Jul 22 16:10:28 PDT 2016
Sun, Jul 24, 2016  5:19:35 PM
Tue, Jul 26, 2016 12:11:26 AM
