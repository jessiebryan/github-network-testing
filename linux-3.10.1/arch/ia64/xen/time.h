/******************************************************************************
 * arch/ia64/xen/time.h
 *
 * Copyright (c) 2008 Isaku Yamahata <yamahata at valinux co jp>
 *                    VA Linux Systems Japan K.K.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

extern struct pv_time_ops xen_time_ops __initdata;
void xen_timer_resume_on_aps(void);
Tue Jul 19 12:38:32 PDT 2016
Fri Jul 22 15:46:37 PDT 2016
Sun, Jul 24, 2016  2:19:05 PM
Mon, Jul 25, 2016  8:50:18 PM
