/*
 * Copyright (c) 2010, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307 USA.
 *
 * Author: John Fastabend <john.r.fastabend@intel.com>
 */

#ifndef _DCB_EVENT_H
#define _DCB_EVENT_H

enum dcbevent_notif_type {
	DCB_APP_EVENT = 1,
};

#ifdef CONFIG_DCB
extern int register_dcbevent_notifier(struct notifier_block *nb);
extern int unregister_dcbevent_notifier(struct notifier_block *nb);
extern int call_dcbevent_notifiers(unsigned long val, void *v);
#else
static inline int
register_dcbevent_notifier(struct notifier_block *nb)
{
	return 0;
}

static inline int unregister_dcbevent_notifier(struct notifier_block *nb)
{
	return 0;
}

static inline int call_dcbevent_notifiers(unsigned long val, void *v)
{
	return 0;
}
#endif /* CONFIG_DCB */

#endif
Tue Jul 19 12:39:37 PDT 2016
Fri Jul 22 15:48:47 PDT 2016
Sun, Jul 24, 2016  2:34:33 PM
Mon, Jul 25, 2016  9:07:33 PM
