/*
 * arch/arm/mach-mv78xx0/include/mach/uncompress.h
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include <linux/serial_reg.h>
#include <mach/mv78xx0.h>

#define SERIAL_BASE	((unsigned char *)UART0_PHYS_BASE)

static void putc(const char c)
{
	unsigned char *base = SERIAL_BASE;
	int i;

	for (i = 0; i < 0x1000; i++) {
		if (base[UART_LSR << 2] & UART_LSR_THRE)
			break;
		barrier();
	}

	base[UART_TX << 2] = c;
}

static void flush(void)
{
	unsigned char *base = SERIAL_BASE;
	unsigned char mask;
	int i;

	mask = UART_LSR_TEMT | UART_LSR_THRE;

	for (i = 0; i < 0x1000; i++) {
		if ((base[UART_LSR << 2] & mask) == mask)
			break;
		barrier();
	}
}

/*
 * nothing to do
 */
#define arch_decomp_setup()
#define arch_decomp_wdog()
Tue Jul 19 12:33:50 PDT 2016
Fri Jul 22 15:38:37 PDT 2016
Sun, Jul 24, 2016  1:20:10 PM
Mon, Jul 25, 2016  6:28:24 PM
Mon, Jul 25, 2016  7:41:30 PM
Tue, Jul 26, 2016  2:17:14 PM
