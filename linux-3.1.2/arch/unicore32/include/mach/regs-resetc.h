/*
 * PKUnity Reset Controller (RC) Registers
 */
/*
 * Software Reset Register
 */
#define RESETC_SWRR	(PKUNITY_RESETC_BASE + 0x0000)
/*
 * Reset Status Register
 */
#define RESETC_RSSR	(PKUNITY_RESETC_BASE + 0x0004)

/*
 * Software Reset Bit
 */
#define RESETC_SWRR_SRB		FIELD(1, 1, 0)

/*
 * Hardware Reset
 */
#define RESETC_RSSR_HWR		FIELD(1, 1, 0)
/*
 * Software Reset
 */
#define RESETC_RSSR_SWR		FIELD(1, 1, 1)
/*
 * Watchdog Reset
 */
#define RESETC_RSSR_WDR		FIELD(1, 1, 2)
/*
 * Sleep Mode Reset
 */
#define RESETC_RSSR_SMR		FIELD(1, 1, 3)

Tue Jul 19 12:34:03 PDT 2016
Fri Jul 22 15:39:01 PDT 2016
Sun, Jul 24, 2016  1:23:18 PM
Mon, Jul 25, 2016  6:32:09 PM
Mon, Jul 25, 2016  7:45:11 PM
Tue, Jul 26, 2016  2:20:45 PM
