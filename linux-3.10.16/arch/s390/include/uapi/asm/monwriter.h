/*
 * Copyright IBM Corp. 2006
 * Character device driver for writing z/VM APPLDATA monitor records
 * Version 1.0
 * Author(s): Melissa Howland <melissah@us.ibm.com>
 *
 */

#ifndef _ASM_390_MONWRITER_H
#define _ASM_390_MONWRITER_H

/* mon_function values */
#define MONWRITE_START_INTERVAL	0x00 /* start interval recording */
#define MONWRITE_STOP_INTERVAL	0x01 /* stop interval or config recording */
#define MONWRITE_GEN_EVENT	0x02 /* generate event record */
#define MONWRITE_START_CONFIG	0x03 /* start configuration recording */

/* the header the app uses in its write() data */
struct monwrite_hdr {
	unsigned char mon_function;
	unsigned short applid;
	unsigned char record_num;
	unsigned short version;
	unsigned short release;
	unsigned short mod_level;
	unsigned short datalen;
	unsigned char hdrlen;

} __attribute__((packed));

#endif /* _ASM_390_MONWRITER_H */
Tue Jul 19 12:45:15 PDT 2016
Fri Jul 22 15:59:07 PDT 2016
Sun, Jul 24, 2016  3:52:32 PM
Mon, Jul 25, 2016 10:34:50 PM
