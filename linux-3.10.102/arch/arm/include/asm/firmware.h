/*
 * Copyright (C) 2012 Samsung Electronics.
 * Kyungmin Park <kyungmin.park@samsung.com>
 * Tomasz Figa <t.figa@samsung.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef __ASM_ARM_FIRMWARE_H
#define __ASM_ARM_FIRMWARE_H

#include <linux/bug.h>

/*
 * struct firmware_ops
 *
 * A structure to specify available firmware operations.
 *
 * A filled up structure can be registered with register_firmware_ops().
 */
struct firmware_ops {
	/*
	 * Enters CPU idle mode
	 */
	int (*do_idle)(void);
	/*
	 * Sets boot address of specified physical CPU
	 */
	int (*set_cpu_boot_addr)(int cpu, unsigned long boot_addr);
	/*
	 * Boots specified physical CPU
	 */
	int (*cpu_boot)(int cpu);
	/*
	 * Initializes L2 cache
	 */
	int (*l2x0_init)(void);
};

/* Global pointer for current firmware_ops structure, can't be NULL. */
extern const struct firmware_ops *firmware_ops;

/*
 * call_firmware_op(op, ...)
 *
 * Checks if firmware operation is present and calls it,
 * otherwise returns -ENOSYS
 */
#define call_firmware_op(op, ...)					\
	((firmware_ops->op) ? firmware_ops->op(__VA_ARGS__) : (-ENOSYS))

/*
 * register_firmware_ops(ops)
 *
 * A function to register platform firmware_ops struct.
 */
static inline void register_firmware_ops(const struct firmware_ops *ops)
{
	BUG_ON(!ops);

	firmware_ops = ops;
}

#endif
Tue Jul 19 12:41:01 PDT 2016
Fri Jul 22 15:51:30 PDT 2016
Sun, Jul 24, 2016  2:54:22 PM
Mon, Jul 25, 2016  9:29:48 PM
