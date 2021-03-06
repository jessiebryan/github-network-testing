/*
 *  Author: Nicolas Pitre
 *
 * Moved and changed lots, Russell King
 *
 * Low level machine dependent UART functions.
 */
#ifndef SA11X0_SERIAL_H
#define SA11X0_SERIAL_H

struct uart_port;
struct uart_info;

/*
 * This is a temporary structure for registering these
 * functions; it is intended to be discarded after boot.
 */
struct sa1100_port_fns {
	void	(*set_mctrl)(struct uart_port *, u_int);
	u_int	(*get_mctrl)(struct uart_port *);
	void	(*pm)(struct uart_port *, u_int, u_int);
	int	(*set_wake)(struct uart_port *, u_int);
};

#ifdef CONFIG_SERIAL_SA1100
void sa1100_register_uart_fns(struct sa1100_port_fns *fns);
void sa1100_register_uart(int idx, int port);
#else
#define sa1100_register_uart_fns(fns) do { } while (0)
#define sa1100_register_uart(idx,port) do { } while (0)
#endif

#endif
Tue Jul 19 12:49:21 PDT 2016
Fri Jul 22 16:06:52 PDT 2016
Sun, Jul 24, 2016  4:52:25 PM
Mon, Jul 25, 2016 11:41:28 PM
