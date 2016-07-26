/*
 * arch/arm/mach-iop33x/include/mach/uncompress.h
 */

#include <asm/types.h>
#include <asm/mach-types.h>
#include <linux/serial_reg.h>
#include <mach/hardware.h>

volatile u32 *uart_base;

#define TX_DONE		(UART_LSR_TEMT | UART_LSR_THRE)

static inline void putc(char c)
{
	while ((uart_base[UART_LSR] & TX_DONE) != TX_DONE)
		barrier();
	uart_base[UART_TX] = c;
}

static inline void flush(void)
{
}

static __inline__ void __arch_decomp_setup(unsigned long arch_id)
{
	if (machine_is_iq80331() || machine_is_iq80332())
		uart_base = (volatile u32 *)IOP33X_UART0_PHYS;
	else
		uart_base = (volatile u32 *)0xfe800000;
}

/*
 * nothing to do
 */
#define arch_decomp_setup()	__arch_decomp_setup(arch_id)
#define arch_decomp_wdog()
Tue Jul 19 12:33:49 PDT 2016
Fri Jul 22 15:38:36 PDT 2016
Sun, Jul 24, 2016  1:20:04 PM
Mon, Jul 25, 2016  6:28:16 PM
