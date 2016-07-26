/*
 * arch/arm/mach-orion5x/include/mach/uncompress.h
 *
 * Tzachi Perelstein <tzachi@marvell.com>
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */

#include <linux/serial_reg.h>
#include <mach/orion5x.h>

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
Tue Jul 19 12:50:48 PDT 2016
Fri Jul 22 16:09:36 PDT 2016
Sun, Jul 24, 2016  5:13:20 PM
Tue, Jul 26, 2016 12:04:30 AM
