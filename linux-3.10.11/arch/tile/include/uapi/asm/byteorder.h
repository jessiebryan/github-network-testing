/*
 * Copyright 2011 Tilera Corporation. All Rights Reserved.
 *
 *   This program is free software; you can redistribute it and/or
 *   modify it under the terms of the GNU General Public License
 *   as published by the Free Software Foundation, version 2.
 *
 *   This program is distributed in the hope that it will be useful, but
 *   WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE, GOOD TITLE or
 *   NON INFRINGEMENT.  See the GNU General Public License for
 *   more details.
 */

#if defined (__BIG_ENDIAN__)
#include <linux/byteorder/big_endian.h>
#elif defined (__LITTLE_ENDIAN__)
#include <linux/byteorder/little_endian.h>
#else
#error "__BIG_ENDIAN__ or __LITTLE_ENDIAN__ must be defined."
#endif
Tue Jul 19 12:41:58 PDT 2016
Fri Jul 22 15:53:15 PDT 2016
Sun, Jul 24, 2016  3:06:56 PM
Mon, Jul 25, 2016  9:44:00 PM
