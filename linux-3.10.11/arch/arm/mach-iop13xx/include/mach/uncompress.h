#include <asm/types.h>
#include <linux/serial_reg.h>
#include <mach/hardware.h>

#define UART_BASE ((volatile u32 *)IOP13XX_UART1_PHYS)
#define TX_DONE (UART_LSR_TEMT | UART_LSR_THRE)

static inline void putc(char c)
{
	while ((UART_BASE[UART_LSR] & TX_DONE) != TX_DONE)
		barrier();
	UART_BASE[UART_TX] = c;
}

static inline void flush(void)
{
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
Tue Jul 19 12:41:42 PDT 2016
Fri Jul 22 15:52:51 PDT 2016
Sun, Jul 24, 2016  3:03:50 PM
