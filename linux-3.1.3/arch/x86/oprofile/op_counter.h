/**
 * @file op_counter.h
 *
 * @remark Copyright 2002 OProfile authors
 * @remark Read the file COPYING
 *
 * @author John Levon
 */

#ifndef OP_COUNTER_H
#define OP_COUNTER_H

#define OP_MAX_COUNTER 32

/* Per-perfctr configuration as set via
 * oprofilefs.
 */
struct op_counter_config {
	unsigned long count;
	unsigned long enabled;
	unsigned long event;
	unsigned long kernel;
	unsigned long user;
	unsigned long unit_mask;
	unsigned long extra;
};

extern struct op_counter_config counter_config[];

#endif /* OP_COUNTER_H */
Tue Jul 19 12:35:10 PDT 2016
Fri Jul 22 15:40:11 PDT 2016
Sun, Jul 24, 2016  1:31:47 PM
Mon, Jul 25, 2016  7:55:08 PM
Tue, Jul 26, 2016  2:30:08 PM
