/* Copyright (C) 2007-2013 B.A.T.M.A.N. contributors:
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

#ifndef _NET_BATMAN_ADV_RING_BUFFER_H_
#define _NET_BATMAN_ADV_RING_BUFFER_H_

void batadv_ring_buffer_set(uint8_t lq_recv[], uint8_t *lq_index,
			    uint8_t value);
uint8_t batadv_ring_buffer_avg(const uint8_t lq_recv[]);

#endif /* _NET_BATMAN_ADV_RING_BUFFER_H_ */
Tue Jul 19 12:53:19 PDT 2016
Fri Jul 22 16:14:32 PDT 2016
Sun, Jul 24, 2016  5:49:31 PM
Tue, Jul 26, 2016 12:44:25 AM
