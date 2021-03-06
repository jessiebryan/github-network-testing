/*
 * Definitions for the "Baboon" custom IC on the PowerBook 190.
 */

#define BABOON_BASE (0x50F1A000)	/* same as IDE controller base */

#ifndef __ASSEMBLY__

struct baboon {
	char	pad1[208];	/* generic IDE registers, not used here */
	short	mb_control;	/* Control register:
				 * bit 5 : slot 2 power control
				 * bit 6 : slot 1 power control
				 */
	char	pad2[2];
	short	mb_status;	/* (0xD4) media bay status register:
				 *
				 * bit 0: ????
				 * bit 1: IDE interrupt active?
				 * bit 2: bay status, 0 = full, 1 = empty
				 * bit 3: ????
				 */
	char	pad3[2];	/* (0xD6) not used */
	short	mb_ifr;		/* (0xD8) media bay interrupt flags register:
				 *
				 * bit 0: ????
				 * bit 1: IDE controller interrupt
				 * bit 2: media bay status change interrupt
				 */
};

#endif /* __ASSEMBLY **/
Tue Jul 19 12:36:44 PDT 2016
Fri Jul 22 15:43:17 PDT 2016
Sun, Jul 24, 2016  1:54:36 PM
Mon, Jul 25, 2016  8:22:04 PM
