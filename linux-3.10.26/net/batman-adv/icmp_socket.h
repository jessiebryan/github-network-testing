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

#ifndef _NET_BATMAN_ADV_ICMP_SOCKET_H_
#define _NET_BATMAN_ADV_ICMP_SOCKET_H_

#define BATADV_ICMP_SOCKET "socket"

void batadv_socket_init(void);
int batadv_socket_setup(struct batadv_priv *bat_priv);
void batadv_socket_receive_packet(struct batadv_icmp_packet_rr *icmp_packet,
				  size_t icmp_len);

#endif /* _NET_BATMAN_ADV_ICMP_SOCKET_H_ */
Tue Jul 19 12:52:01 PDT 2016
Fri Jul 22 16:12:01 PDT 2016
Sun, Jul 24, 2016  5:30:53 PM
Tue, Jul 26, 2016 12:23:54 AM
