#ifndef _INCLUDE_GUARD_PD6729_H_
#define _INCLUDE_GUARD_PD6729_H_

/* Flags for I365_GENCTL */
#define I365_DF_VS1		0x40	/* DF-step Voltage Sense */
#define I365_DF_VS2		0x80

/* Fields in PD67_EXTERN_DATA */
#define PD67_EXD_VS1(s)		(0x01 << ((s) << 1))
#define PD67_EXD_VS2(s)		(0x02 << ((s) << 1))

/* Default ISA interrupt mask */
#define PD67_MASK	0x0eb8	/* irq 11,10,9,7,5,4,3 */

struct pd6729_socket {
	int	number;
	int	card_irq;
	unsigned long io_base;	/* base io address of the socket */
	struct pcmcia_socket socket;
	struct timer_list poll_timer;
};

#endif
Tue Jul 19 12:35:50 PDT 2016
Fri Jul 22 15:41:29 PDT 2016
Sun, Jul 24, 2016  1:41:14 PM
Mon, Jul 25, 2016  8:06:17 PM
Tue, Jul 26, 2016  2:40:35 PM
