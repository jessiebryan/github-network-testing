/*
 *   Copyright IBM Corp. 2011
 *   Author(s): Andreas Krebbel (krebbel@linux.vnet.ibm.com)
 *
 * @remark Copyright 2011 OProfile authors
 */

#ifndef OP_COUNTER_H
#define OP_COUNTER_H

struct op_counter_config {
	/* `enabled' maps to the hwsampler_file variable.  */
	/* `count' maps to the oprofile_hw_interval variable.  */
	/* `event' and `unit_mask' are unused. */
	unsigned long kernel;
	unsigned long user;
};

extern struct op_counter_config counter_config;

#endif /* OP_COUNTER_H */
Tue Jul 19 12:47:07 PDT 2016
Fri Jul 22 16:02:41 PDT 2016
Sun, Jul 24, 2016  4:20:12 PM
Mon, Jul 25, 2016 11:05:37 PM
