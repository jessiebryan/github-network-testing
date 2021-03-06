/*
 * Copyright (C) ST-Ericsson AB 2010
 * Contact: Sjur Brendeland / sjur.brandeland@stericsson.com
 * Author: Amarnath Revanna / amarnath.bangalore.revanna@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CAIF_SHM_H_
#define CAIF_SHM_H_

struct shmdev_layer {
	u32 shm_base_addr;
	u32 shm_total_sz;
	u32 shm_id;
	u32 shm_loopback;
	void *hmbx;
	int (*pshmdev_mbxsend) (u32 shm_id, u32 mbx_msg);
	int (*pshmdev_mbxsetup) (void *pshmdrv_cb,
				struct shmdev_layer *pshm_dev, void *pshm_drv);
	struct net_device *pshm_netdev;
};

extern int caif_shmcore_probe(struct shmdev_layer *pshm_dev);
extern void caif_shmcore_remove(struct net_device *pshm_netdev);

#endif
Tue Jul 19 12:37:46 PDT 2016
Fri Jul 22 15:45:09 PDT 2016
Sun, Jul 24, 2016  2:08:24 PM
Mon, Jul 25, 2016  8:38:27 PM
