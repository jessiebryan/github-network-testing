/*
 * Copyright (c) 2000-2003,2005 Silicon Graphics, Inc.
 * All Rights Reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it would be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write the Free Software Foundation,
 * Inc.,  51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
 */
#ifndef __XFS_SUPPORT_UUID_H__
#define __XFS_SUPPORT_UUID_H__

typedef struct {
	unsigned char	__u_bits[16];
} uuid_t;

extern int uuid_is_nil(uuid_t *uuid);
extern int uuid_equal(uuid_t *uuid1, uuid_t *uuid2);
extern void uuid_getnodeuniq(uuid_t *uuid, int fsid [2]);

#endif	/* __XFS_SUPPORT_UUID_H__ */
Tue Jul 19 12:35:20 PDT 2016
Fri Jul 22 15:40:30 PDT 2016
Sun, Jul 24, 2016  1:34:10 PM
Mon, Jul 25, 2016  7:57:57 PM
Tue, Jul 26, 2016  2:32:45 PM
