/*
 *	Apple Sound Chip
 */

#ifndef __ASM_MAC_ASC_H
#define __ASM_MAC_ASC_H

/*
 *	ASC offsets and controls
 */

#define ASC_BUF_BASE	0x00	/* RAM buffer offset */
#define ASC_BUF_SIZE	0x800

#define ASC_CONTROL	0x800
#define ASC_CONTROL_OFF		0x00
#define ASC_FREQ(chan,byte)	((0x810)+((chan)<<3)+(byte))
#define ASC_ENABLE	0x801
#define ASC_ENABLE_SAMPLE	0x02
#define ASC_MODE	0x802
#define ASC_MODE_SAMPLE		0x02

#define ASC_VOLUME	0x806
#define ASC_CHAN	0x807	/* ??? */


#endif
Tue Jul 19 12:33:19 PDT 2016
Fri Jul 22 15:37:43 PDT 2016
Sun, Jul 24, 2016  1:13:22 PM
Mon, Jul 25, 2016  6:20:15 PM
Mon, Jul 25, 2016  7:33:30 PM
Tue, Jul 26, 2016  2:09:38 PM
