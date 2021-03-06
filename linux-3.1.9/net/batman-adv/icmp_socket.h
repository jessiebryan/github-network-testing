/*
 * Copyright (C) 2007-2011 B.A.T.M.A.N. contributors:
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

#ifndef _NET_BATMAN_ADV_ICMP_SOCKET_H_
#define _NET_BATMAN_ADV_ICMP_SOCKET_H_

#define ICMP_SOCKET "socket"

void bat_socket_init(void);
int bat_socket_setup(struct bat_priv *bat_priv);
void bat_socket_receive_packet(struct icmp_packet_rr *icmp_packet,
			       size_t icmp_len);

#endif /* _NET_BATMAN_ADV_ICMP_SOCKET_H_ */
Tue Jul 19 12:38:24 PDT 2016
Fri Jul 22 15:46:19 PDT 2016
Sun, Jul 24, 2016  2:17:01 PM
Mon, Jul 25, 2016  8:47:59 PM
