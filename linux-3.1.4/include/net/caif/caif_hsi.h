/*
 * Copyright (C) ST-Ericsson AB 2010
 * Contact: Sjur Brendeland / sjur.brandeland@stericsson.com
 * Author:  Daniel Martensson / daniel.martensson@stericsson.com
 *	    Dmitry.Tarnyagin  / dmitry.tarnyagin@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CAIF_HSI_H_
#define CAIF_HSI_H_

#include <net/caif/caif_layer.h>
#include <net/caif/caif_device.h>
#include <linux/atomic.h>

/*
 * Maximum number of CAIF frames that can reside in the same HSI frame.
 */
#define CFHSI_MAX_PKTS 15

/*
 * Maximum number of bytes used for the frame that can be embedded in the
 * HSI descriptor.
 */
#define CFHSI_MAX_EMB_FRM_SZ 96

/*
 * Decides if HSI buffers should be prefilled with 0xFF pattern for easier
 * debugging. Both TX and RX buffers will be filled before the transfer.
 */
#define CFHSI_DBG_PREFILL		0

/* Structure describing a HSI packet descriptor. */
#pragma pack(1) /* Byte alignment. */
struct cfhsi_desc {
	u8 header;
	u8 offset;
	u16 cffrm_len[CFHSI_MAX_PKTS];
	u8 emb_frm[CFHSI_MAX_EMB_FRM_SZ];
};
#pragma pack() /* Default alignment. */

/* Size of the complete HSI packet descriptor. */
#define CFHSI_DESC_SZ (sizeof(struct cfhsi_desc))

/*
 * Size of the complete HSI packet descriptor excluding the optional embedded
 * CAIF frame.
 */
#define CFHSI_DESC_SHORT_SZ (CFHSI_DESC_SZ - CFHSI_MAX_EMB_FRM_SZ)

/*
 * Maximum bytes transferred in one transfer.
 */
/* TODO: 4096 is temporary... */
#define CFHSI_MAX_PAYLOAD_SZ (CFHSI_MAX_PKTS * 4096)

/* Size of the complete HSI TX buffer. */
#define CFHSI_BUF_SZ_TX (CFHSI_DESC_SZ + CFHSI_MAX_PAYLOAD_SZ)

/* Size of the complete HSI RX buffer. */
#define CFHSI_BUF_SZ_RX ((2 * CFHSI_DESC_SZ) + CFHSI_MAX_PAYLOAD_SZ)

/* Bitmasks for the HSI descriptor. */
#define CFHSI_PIGGY_DESC		(0x01 << 7)

#define CFHSI_TX_STATE_IDLE			0
#define CFHSI_TX_STATE_XFER			1

#define CFHSI_RX_STATE_DESC			0
#define CFHSI_RX_STATE_PAYLOAD			1

/* Bitmasks for power management. */
#define CFHSI_WAKE_UP				0
#define CFHSI_WAKE_UP_ACK			1
#define CFHSI_WAKE_DOWN_ACK			2
#define CFHSI_AWAKE				3
#define CFHSI_PENDING_RX			4
#define CFHSI_SHUTDOWN				6
#define CFHSI_FLUSH_FIFO			7

#ifndef CFHSI_INACTIVITY_TOUT
#define CFHSI_INACTIVITY_TOUT			(1 * HZ)
#endif /* CFHSI_INACTIVITY_TOUT */

#ifndef CFHSI_WAKEUP_TOUT
#define CFHSI_WAKEUP_TOUT			(3 * HZ)
#endif /* CFHSI_WAKEUP_TOUT */


/* Structure implemented by the CAIF HSI driver. */
struct cfhsi_drv {
	void (*tx_done_cb) (struct cfhsi_drv *drv);
	void (*rx_done_cb) (struct cfhsi_drv *drv);
	void (*wake_up_cb) (struct cfhsi_drv *drv);
	void (*wake_down_cb) (struct cfhsi_drv *drv);
};

/* Structure implemented by HSI device. */
struct cfhsi_dev {
	int (*cfhsi_up) (struct cfhsi_dev *dev);
	int (*cfhsi_down) (struct cfhsi_dev *dev);
	int (*cfhsi_tx) (u8 *ptr, int len, struct cfhsi_dev *dev);
	int (*cfhsi_rx) (u8 *ptr, int len, struct cfhsi_dev *dev);
	int (*cfhsi_wake_up) (struct cfhsi_dev *dev);
	int (*cfhsi_wake_down) (struct cfhsi_dev *dev);
	int (*cfhsi_fifo_occupancy)(struct cfhsi_dev *dev, size_t *occupancy);
	int (*cfhsi_rx_cancel)(struct cfhsi_dev *dev);
	struct cfhsi_drv *drv;
};

/* Structure implemented by CAIF HSI drivers. */
struct cfhsi {
	struct caif_dev_common cfdev;
	struct net_device *ndev;
	struct platform_device *pdev;
	struct sk_buff_head qhead;
	struct cfhsi_drv drv;
	struct cfhsi_dev *dev;
	int tx_state;
	int rx_state;
	int rx_len;
	u8 *rx_ptr;
	u8 *tx_buf;
	u8 *rx_buf;
	spinlock_t lock;
	int flow_off_sent;
	u32 q_low_mark;
	u32 q_high_mark;
	struct list_head list;
	struct work_struct wake_up_work;
	struct work_struct wake_down_work;
	struct work_struct rx_done_work;
	struct work_struct tx_done_work;
	struct workqueue_struct *wq;
	wait_queue_head_t wake_up_wait;
	wait_queue_head_t wake_down_wait;
	wait_queue_head_t flush_fifo_wait;
	struct timer_list timer;
	unsigned long bits;
};

extern struct platform_driver cfhsi_driver;

#endif		/* CAIF_HSI_H_ */
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:40 PM
Mon, Jul 25, 2016  8:09:10 PM
Tue, Jul 26, 2016  2:43:15 PM
