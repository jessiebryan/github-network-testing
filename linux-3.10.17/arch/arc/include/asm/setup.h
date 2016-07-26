/*
 * Copyright (C) 2004, 2007-2010, 2011-2012 Synopsys, Inc. (www.synopsys.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef __ASMARC_SETUP_H
#define __ASMARC_SETUP_H


#include <linux/types.h>
#include <uapi/asm/setup.h>

#define COMMAND_LINE_SIZE 256

/*
 * Data structure to map a ID to string
 * Used a lot for bootup reporting of hardware diversity
 */
struct id_to_str {
	int id;
	const char *str;
};

struct cpuinfo_data {
	struct id_to_str info;
	int up_range;
};

extern int root_mountflags, end_mem;
extern int running_on_hw;

void __init setup_processor(void);
void __init setup_arch_memory(void);

#endif /* __ASMARC_SETUP_H */
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:56 PDT 2016
Sun, Jul 24, 2016  3:58:53 PM
Mon, Jul 25, 2016 10:41:53 PM
