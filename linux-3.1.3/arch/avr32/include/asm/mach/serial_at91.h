/*
 *  linux/include/asm-arm/mach/serial_at91.h
 *
 *  Based on serial_sa1100.h  by Nicolas Pitre
 *
 *  Copyright (C) 2002 ATMEL Rousset
 *
 *  Low level machine dependent UART functions.
 */

struct uart_port;

/*
 * This is a temporary structure for registering these
 * functions; it is intended to be discarded after boot.
 */
struct atmel_port_fns {
	void	(*set_mctrl)(struct uart_port *, u_int);
	u_int	(*get_mctrl)(struct uart_port *);
	void	(*enable_ms)(struct uart_port *);
	void	(*pm)(struct uart_port *, u_int, u_int);
	int	(*set_wake)(struct uart_port *, u_int);
	int	(*open)(struct uart_port *);
	void	(*close)(struct uart_port *);
};

#if defined(CONFIG_SERIAL_ATMEL)
void atmel_register_uart_fns(struct atmel_port_fns *fns);
#else
#define atmel_register_uart_fns(fns) do { } while (0)
#endif


Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:48 PDT 2016
Sun, Jul 24, 2016  1:29:05 PM
Mon, Jul 25, 2016  6:39:05 PM
Mon, Jul 25, 2016  7:51:57 PM
Tue, Jul 26, 2016  2:27:08 PM
