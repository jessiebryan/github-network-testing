#include <asm/lasat/lasat.h>

/* Lasat 100 boards serial configuration */
#define LASAT_BASE_BAUD_100 		(7372800 / 16)
#define LASAT_UART_REGS_BASE_100	0x1c8b0000
#define LASAT_UART_REGS_SHIFT_100	2
#define LASATINT_UART_100		16

/* * LASAT 200 boards serial configuration */
#define LASAT_BASE_BAUD_200		(100000000 / 16 / 12)
#define LASAT_UART_REGS_BASE_200	(Vrc5074_PHYS_BASE + 0x0300)
#define LASAT_UART_REGS_SHIFT_200	3
#define LASATINT_UART_200		21
Tue Jul 19 12:37:20 PDT 2016
Fri Jul 22 15:44:26 PDT 2016
Sun, Jul 24, 2016  2:03:04 PM
Mon, Jul 25, 2016  8:32:07 PM
