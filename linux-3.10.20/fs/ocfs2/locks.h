/* -*- mode: c; c-basic-offset: 8; -*-
 * vim: noexpandtab sw=8 ts=8 sts=0:
 *
 * locks.h
 *
 * Function prototypes for Userspace file locking support
 *
 * Copyright (C) 2002, 2004 Oracle.  All rights reserved.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this program; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 021110-1307, USA.
 */

#ifndef OCFS2_LOCKS_H
#define OCFS2_LOCKS_H

int ocfs2_flock(struct file *file, int cmd, struct file_lock *fl);
int ocfs2_lock(struct file *file, int cmd, struct file_lock *fl);

#endif /* OCFS2_LOCKS_H */
Tue Jul 19 12:48:00 PDT 2016
Fri Jul 22 16:04:20 PDT 2016
Sun, Jul 24, 2016  4:33:00 PM
Mon, Jul 25, 2016 11:19:48 PM
