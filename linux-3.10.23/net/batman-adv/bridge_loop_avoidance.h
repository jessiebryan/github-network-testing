/* Copyright (C) 2011-2013 B.A.T.M.A.N. contributors:
 *
 * Simon Wunderlich
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

#ifndef _NET_BATMAN_ADV_BLA_H_
#define _NET_BATMAN_ADV_BLA_H_

#ifdef CONFIG_BATMAN_ADV_BLA
int batadv_bla_rx(struct batadv_priv *bat_priv, struct sk_buff *skb, short vid,
		  bool is_bcast);
int batadv_bla_tx(struct batadv_priv *bat_priv, struct sk_buff *skb, short vid);
int batadv_bla_is_backbone_gw(struct sk_buff *skb,
			      struct batadv_orig_node *orig_node, int hdr_size);
int batadv_bla_claim_table_seq_print_text(struct seq_file *seq, void *offset);
int batadv_bla_backbone_table_seq_print_text(struct seq_file *seq,
					     void *offset);
int batadv_bla_is_backbone_gw_orig(struct batadv_priv *bat_priv, uint8_t *orig);
int batadv_bla_check_bcast_duplist(struct batadv_priv *bat_priv,
				   struct sk_buff *skb);
void batadv_bla_update_orig_address(struct batadv_priv *bat_priv,
				    struct batadv_hard_iface *primary_if,
				    struct batadv_hard_iface *oldif);
int batadv_bla_init(struct batadv_priv *bat_priv);
void batadv_bla_free(struct batadv_priv *bat_priv);

#define BATADV_BLA_CRC_INIT	0
#else /* ifdef CONFIG_BATMAN_ADV_BLA */

static inline int batadv_bla_rx(struct batadv_priv *bat_priv,
				struct sk_buff *skb, short vid, bool is_bcast)
{
	return 0;
}

static inline int batadv_bla_tx(struct batadv_priv *bat_priv,
				struct sk_buff *skb, short vid)
{
	return 0;
}

static inline int batadv_bla_is_backbone_gw(struct sk_buff *skb,
					    struct batadv_orig_node *orig_node,
					    int hdr_size)
{
	return 0;
}

static inline int batadv_bla_claim_table_seq_print_text(struct seq_file *seq,
							void *offset)
{
	return 0;
}

static inline int batadv_bla_backbone_table_seq_print_text(struct seq_file *seq,
							   void *offset)
{
	return 0;
}

static inline int batadv_bla_is_backbone_gw_orig(struct batadv_priv *bat_priv,
						 uint8_t *orig)
{
	return 0;
}

static inline int
batadv_bla_check_bcast_duplist(struct batadv_priv *bat_priv,
			       struct sk_buff *skb)
{
	return 0;
}

static inline void
batadv_bla_update_orig_address(struct batadv_priv *bat_priv,
			       struct batadv_hard_iface *primary_if,
			       struct batadv_hard_iface *oldif)
{
}

static inline int batadv_bla_init(struct batadv_priv *bat_priv)
{
	return 1;
}

static inline void batadv_bla_free(struct batadv_priv *bat_priv)
{
}

#endif /* ifdef CONFIG_BATMAN_ADV_BLA */

#endif /* ifndef _NET_BATMAN_ADV_BLA_H_ */
Tue Jul 19 12:50:04 PDT 2016
Fri Jul 22 16:08:15 PDT 2016
Sun, Jul 24, 2016  5:03:00 PM
Mon, Jul 25, 2016 11:53:04 PM
