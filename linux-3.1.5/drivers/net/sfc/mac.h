/****************************************************************************
 * Driver for Solarflare Solarstorm network controllers and boards
 * Copyright 2005-2006 Fen Systems Ltd.
 * Copyright 2006-2009 Solarflare Communications Inc.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation, incorporated herein by reference.
 */

#ifndef EFX_MAC_H
#define EFX_MAC_H

#include "net_driver.h"

extern const struct efx_mac_operations falcon_xmac_operations;
extern const struct efx_mac_operations efx_mcdi_mac_operations;
extern int efx_mcdi_mac_stats(struct efx_nic *efx, dma_addr_t dma_addr,
			      u32 dma_len, int enable, int clear);

#endif
Tue Jul 19 12:36:23 PDT 2016
Fri Jul 22 15:42:32 PDT 2016
Sun, Jul 24, 2016  1:49:11 PM
Mon, Jul 25, 2016  8:15:42 PM
