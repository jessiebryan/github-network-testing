/*
 * Header for Bestcomm ATA task driver
 *
 *
 * Copyright (C) 2006 Freescale - John Rigby
 * Copyright (C) 2006 Sylvain Munaut <tnt@246tNt.com>
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2. This program is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */

#ifndef __BESTCOMM_ATA_H__
#define __BESTCOMM_ATA_H__


struct bcom_ata_bd {
	u32	status;
	u32	src_pa;
	u32	dst_pa;
};

extern struct bcom_task * bcom_ata_init(int queue_len, int maxbufsize);
extern void bcom_ata_rx_prepare(struct bcom_task *tsk);
extern void bcom_ata_tx_prepare(struct bcom_task *tsk);
extern void bcom_ata_reset_bd(struct bcom_task *tsk);
extern void bcom_ata_release(struct bcom_task *tsk);

#endif /* __BESTCOMM_ATA_H__ */

Tue Jul 19 12:33:23 PDT 2016
Fri Jul 22 15:37:51 PDT 2016
Sun, Jul 24, 2016  1:14:20 PM
Mon, Jul 25, 2016  6:21:24 PM
Mon, Jul 25, 2016  7:34:38 PM
