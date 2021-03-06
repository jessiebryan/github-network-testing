/*
 * Copyright(c) 2004 - 2006 Intel Corporation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59
 * Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * The full GNU General Public License is included in this distribution in the
 * file called COPYING.
 */
#ifndef NETDMA_H
#define NETDMA_H
#ifdef CONFIG_NET_DMA
#include <linux/dmaengine.h>
#include <linux/skbuff.h>

int dma_skb_copy_datagram_iovec(struct dma_chan* chan,
		struct sk_buff *skb, int offset, struct iovec *to,
		size_t len, struct dma_pinned_list *pinned_list);

#endif /* CONFIG_NET_DMA */
#endif /* NETDMA_H */
Tue Jul 19 12:40:16 PDT 2016
Fri Jul 22 15:50:04 PDT 2016
Sun, Jul 24, 2016  2:43:49 PM
Mon, Jul 25, 2016  9:17:52 PM
