/*
 * arch/arm/mach-prima2/include/mach/uart.h
 *
 * Copyright (c) 2011 Cambridge Silicon Radio Limited, a CSR plc group company.
 *
 * Licensed under GPLv2 or later.
 */

#ifndef __MACH_PRIMA2_SIRFSOC_UART_H
#define __MACH_PRIMA2_SIRFSOC_UART_H

/* UART-1: used as serial debug port */
#define SIRFSOC_UART1_PA_BASE          0xb0060000
#define SIRFSOC_UART1_VA_BASE          SIRFSOC_VA(0x060000)
#define SIRFSOC_UART1_SIZE		SZ_4K

#define SIRFSOC_UART_TXFIFO_STATUS	0x0114
#define SIRFSOC_UART_TXFIFO_DATA	0x0118

#define SIRFSOC_UART1_TXFIFO_FULL                       (1 << 5)
#define SIRFSOC_UART1_TXFIFO_EMPTY			(1 << 6)

#endif
Tue Jul 19 12:34:43 PDT 2016
Fri Jul 22 15:39:43 PDT 2016
Sun, Jul 24, 2016  1:28:34 PM
Mon, Jul 25, 2016  6:38:27 PM
Mon, Jul 25, 2016  7:51:21 PM
Tue, Jul 26, 2016  2:26:34 PM
