/*
 * Interface for Dynamic Logical Partitioning of I/O Slots on
 * RPA-compliant PPC64 platform.
 *
 * John Rose <johnrose@austin.ibm.com>
 * October 2003
 *
 * Copyright (C) 2003 IBM.
 *
 *      This program is free software; you can redistribute it and/or
 *      modify it under the terms of the GNU General Public License
 *      as published by the Free Software Foundation; either version
 *      2 of the License, or (at your option) any later version.
 */
#ifndef _RPADLPAR_IO_H_
#define _RPADLPAR_IO_H_

int dlpar_sysfs_init(void);
void dlpar_sysfs_exit(void);

int dlpar_add_slot(char *drc_name);
int dlpar_remove_slot(char *drc_name);

#endif
Tue Jul 19 12:40:05 PDT 2016
Fri Jul 22 15:49:42 PDT 2016
Sun, Jul 24, 2016  2:41:12 PM
Mon, Jul 25, 2016  9:14:56 PM
