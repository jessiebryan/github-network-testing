/* -*- mode: c; c-basic-offset: 8; -*-
 * vim: noexpandtab sw=8 ts=8 sts=0:
 *
 * Copyright (C) 2005 Oracle.  All rights reserved.
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
 *
 */

#ifndef O2CLUSTER_QUORUM_H
#define O2CLUSTER_QUORUM_H

void o2quo_init(void);
void o2quo_exit(void);

void o2quo_hb_up(u8 node);
void o2quo_hb_down(u8 node);
void o2quo_hb_still_up(u8 node);
void o2quo_conn_up(u8 node);
void o2quo_conn_err(u8 node);
void o2quo_disk_timeout(void);

#endif /* O2CLUSTER_QUORUM_H */
Tue Jul 19 12:53:10 PDT 2016
Fri Jul 22 16:14:15 PDT 2016
Sun, Jul 24, 2016  5:47:17 PM
Tue, Jul 26, 2016 12:41:58 AM
