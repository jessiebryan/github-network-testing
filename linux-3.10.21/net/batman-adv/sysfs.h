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

#ifndef _NET_BATMAN_ADV_SYSFS_H_
#define _NET_BATMAN_ADV_SYSFS_H_

#define BATADV_SYSFS_IF_MESH_SUBDIR "mesh"
#define BATADV_SYSFS_IF_BAT_SUBDIR "batman_adv"

struct batadv_attribute {
	struct attribute attr;
	ssize_t (*show)(struct kobject *kobj, struct attribute *attr,
			char *buf);
	ssize_t (*store)(struct kobject *kobj, struct attribute *attr,
			 char *buf, size_t count);
};

int batadv_sysfs_add_meshif(struct net_device *dev);
void batadv_sysfs_del_meshif(struct net_device *dev);
int batadv_sysfs_add_hardif(struct kobject **hardif_obj,
			    struct net_device *dev);
void batadv_sysfs_del_hardif(struct kobject **hardif_obj);
int batadv_throw_uevent(struct batadv_priv *bat_priv, enum batadv_uev_type type,
			enum batadv_uev_action action, const char *data);

#endif /* _NET_BATMAN_ADV_SYSFS_H_ */
Tue Jul 19 12:48:47 PDT 2016
Fri Jul 22 16:05:49 PDT 2016
Sun, Jul 24, 2016  4:44:27 PM
Mon, Jul 25, 2016 11:32:30 PM
