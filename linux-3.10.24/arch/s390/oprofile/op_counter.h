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
Tue Jul 19 12:50:19 PDT 2016
Fri Jul 22 16:08:43 PDT 2016
Sun, Jul 24, 2016  5:06:29 PM
Mon, Jul 25, 2016 11:56:57 PM
