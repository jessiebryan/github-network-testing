#ifndef __UM_IRQ_H
#define __UM_IRQ_H

#define TIMER_IRQ		0
#define UMN_IRQ			1
#define CONSOLE_IRQ		2
#define CONSOLE_WRITE_IRQ	3
#define UBD_IRQ			4
#define UM_ETH_IRQ		5
#define SSL_IRQ			6
#define SSL_WRITE_IRQ		7
#define ACCEPT_IRQ		8
#define MCONSOLE_IRQ		9
#define WINCH_IRQ		10
#define SIGIO_WRITE_IRQ 	11
#define TELNETD_IRQ 		12
#define XTERM_IRQ 		13
#define RANDOM_IRQ 		14

#define LAST_IRQ RANDOM_IRQ
#define NR_IRQS (LAST_IRQ + 1)

#endif
Tue Jul 19 12:33:26 PDT 2016
Fri Jul 22 15:37:56 PDT 2016
Sun, Jul 24, 2016  1:14:56 PM
Mon, Jul 25, 2016  6:22:07 PM
Mon, Jul 25, 2016  7:35:21 PM
Tue, Jul 26, 2016  2:11:21 PM
