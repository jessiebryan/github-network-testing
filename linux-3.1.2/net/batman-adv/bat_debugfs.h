/*
 * Copyright (C) 2010-2011 B.A.T.M.A.N. contributors:
 *
 * Marek Lindner
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */


#ifndef _NET_BATMAN_ADV_DEBUGFS_H_
#define _NET_BATMAN_ADV_DEBUGFS_H_

#define DEBUGFS_BAT_SUBDIR "batman_adv"

void debugfs_init(void);
void debugfs_destroy(void);
int debugfs_add_meshif(struct net_device *dev);
void debugfs_del_meshif(struct net_device *dev);

#endif /* _NET_BATMAN_ADV_DEBUGFS_H_ */
Tue Jul 19 12:34:38 PDT 2016
Fri Jul 22 15:39:35 PDT 2016
Sun, Jul 24, 2016  1:27:32 PM
Mon, Jul 25, 2016  6:37:14 PM
Mon, Jul 25, 2016  7:50:08 PM
Tue, Jul 26, 2016  2:25:25 PM
