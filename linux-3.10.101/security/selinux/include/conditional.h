/*
 * Interface to booleans in the security server. This is exported
 * for the selinuxfs.
 *
 * Author: Karl MacMillan <kmacmillan@tresys.com>
 *
 * Copyright (C) 2003 - 2004 Tresys Technology, LLC
 *	This program is free software; you can redistribute it and/or modify
 *  	it under the terms of the GNU General Public License as published by
 *	the Free Software Foundation, version 2.
 */

#ifndef _SELINUX_CONDITIONAL_H_
#define _SELINUX_CONDITIONAL_H_

int security_get_bools(int *len, char ***names, int **values);

int security_set_bools(int len, int *values);

int security_get_bool_value(int bool);

#endif
Tue Jul 19 12:40:58 PDT 2016
Fri Jul 22 15:51:26 PDT 2016
Sun, Jul 24, 2016  2:53:51 PM
Mon, Jul 25, 2016  9:29:13 PM
