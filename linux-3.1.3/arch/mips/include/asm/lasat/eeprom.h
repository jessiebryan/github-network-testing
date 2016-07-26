#include <asm/addrspace.h>

/* lasat 100 */
#define AT93C_REG_100               KSEG1ADDR(0x1c810000)
#define AT93C_RDATA_REG_100         AT93C_REG_100
#define AT93C_RDATA_SHIFT_100       4
#define AT93C_WDATA_SHIFT_100       4
#define AT93C_CS_M_100              (1 << 5)
#define AT93C_CLK_M_100             (1 << 3)

/* lasat 200 */
#define AT93C_REG_200		KSEG1ADDR(0x11000000)
#define AT93C_RDATA_REG_200	(AT93C_REG_200+0x10000)
#define AT93C_RDATA_SHIFT_200	8
#define AT93C_WDATA_SHIFT_200	2
#define AT93C_CS_M_200		(1 << 0)
#define AT93C_CLK_M_200		(1 << 1)
Tue Jul 19 12:34:55 PDT 2016
Fri Jul 22 15:39:56 PDT 2016
Sun, Jul 24, 2016  1:30:05 PM
Mon, Jul 25, 2016  6:40:16 PM
Mon, Jul 25, 2016  7:53:07 PM
Tue, Jul 26, 2016  2:28:15 PM
