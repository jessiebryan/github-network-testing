/* Copyright (C) 2010-2013 B.A.T.M.A.N. contributors:
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
 */

#ifndef _NET_BATMAN_ADV_DEBUGFS_H_
#define _NET_BATMAN_ADV_DEBUGFS_H_

#define BATADV_DEBUGFS_SUBDIR "batman_adv"

void batadv_debugfs_init(void);
void batadv_debugfs_destroy(void);
int batadv_debugfs_add_meshif(struct net_device *dev);
void batadv_debugfs_del_meshif(struct net_device *dev);

#endif /* _NET_BATMAN_ADV_DEBUGFS_H_ */
Tue Jul 19 12:42:26 PDT 2016
Fri Jul 22 15:53:56 PDT 2016
Sun, Jul 24, 2016  3:12:10 PM
Mon, Jul 25, 2016  9:49:54 PM
