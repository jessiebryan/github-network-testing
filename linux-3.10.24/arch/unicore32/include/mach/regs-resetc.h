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

Tue Jul 19 12:50:21 PDT 2016
Fri Jul 22 16:08:47 PDT 2016
Sun, Jul 24, 2016  5:07:04 PM
Mon, Jul 25, 2016 11:57:37 PM
