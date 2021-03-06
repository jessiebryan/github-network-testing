/*
 * Copyright (C) ST-Ericsson AB 2012
 * Author: Sjur Brændeland <sjur.brandeland@stericsson.com>
 *
 * This header is BSD licensed so
 * anyone can use the definitions to implement compatible remote processors
 */

#ifndef VIRTIO_CAIF_H
#define VIRTIO_CAIF_H

#include <linux/types.h>
struct virtio_caif_transf_config {
	u16 headroom;
	u16 tailroom;
	u32 mtu;
	u8 reserved[4];
};

struct virtio_caif_config {
	struct virtio_caif_transf_config uplink, downlink;
	u8 reserved[8];
};
#endif
Tue Jul 19 12:51:19 PDT 2016
Fri Jul 22 16:10:36 PDT 2016
Sun, Jul 24, 2016  5:20:40 PM
Tue, Jul 26, 2016 12:12:37 AM
