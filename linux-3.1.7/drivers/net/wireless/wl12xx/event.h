/*
 * This file is part of wl1271
 *
 * Copyright (C) 1998-2009 Texas Instruments. All rights reserved.
 * Copyright (C) 2008-2009 Nokia Corporation
 *
 * Contact: Luciano Coelho <luciano.coelho@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __EVENT_H__
#define __EVENT_H__

/*
 * Mbox events
 *
 * The event mechanism is based on a pair of event buffers (buffers A and
 * B) at fixed locations in the target's memory. The host processes one
 * buffer while the other buffer continues to collect events. If the host
 * is not processing events, an interrupt is issued to signal that a buffer
 * is ready. Once the host is done with processing events from one buffer,
 * it signals the target (with an ACK interrupt) that the event buffer is
 * free.
 */

enum {
	RSSI_SNR_TRIGGER_0_EVENT_ID              = BIT(0),
	RSSI_SNR_TRIGGER_1_EVENT_ID              = BIT(1),
	RSSI_SNR_TRIGGER_2_EVENT_ID              = BIT(2),
	RSSI_SNR_TRIGGER_3_EVENT_ID              = BIT(3),
	RSSI_SNR_TRIGGER_4_EVENT_ID              = BIT(4),
	RSSI_SNR_TRIGGER_5_EVENT_ID              = BIT(5),
	RSSI_SNR_TRIGGER_6_EVENT_ID              = BIT(6),
	RSSI_SNR_TRIGGER_7_EVENT_ID              = BIT(7),
	MEASUREMENT_START_EVENT_ID		 = BIT(8),
	MEASUREMENT_COMPLETE_EVENT_ID		 = BIT(9),
	SCAN_COMPLETE_EVENT_ID			 = BIT(10),
	SCHEDULED_SCAN_COMPLETE_EVENT_ID	 = BIT(11),
	AP_DISCOVERY_COMPLETE_EVENT_ID		 = BIT(12),
	PS_REPORT_EVENT_ID			 = BIT(13),
	PSPOLL_DELIVERY_FAILURE_EVENT_ID	 = BIT(14),
	DISCONNECT_EVENT_COMPLETE_ID		 = BIT(15),
	JOIN_EVENT_COMPLETE_ID			 = BIT(16),
	CHANNEL_SWITCH_COMPLETE_EVENT_ID	 = BIT(17),
	BSS_LOSE_EVENT_ID			 = BIT(18),
	REGAINED_BSS_EVENT_ID			 = BIT(19),
	MAX_TX_RETRY_EVENT_ID			 = BIT(20),
	/* STA: dummy paket for dynamic mem blocks */
	DUMMY_PACKET_EVENT_ID                    = BIT(21),
	/* AP: STA remove complete */
	STA_REMOVE_COMPLETE_EVENT_ID             = BIT(21),
	SOFT_GEMINI_SENSE_EVENT_ID		 = BIT(22),
	/* STA: SG prediction */
	SOFT_GEMINI_PREDICTION_EVENT_ID		 = BIT(23),
	/* AP: Inactive STA */
	INACTIVE_STA_EVENT_ID			 = BIT(23),
	SOFT_GEMINI_AVALANCHE_EVENT_ID		 = BIT(24),
	PLT_RX_CALIBRATION_COMPLETE_EVENT_ID	 = BIT(25),
	DBG_EVENT_ID				 = BIT(26),
	HEALTH_CHECK_REPLY_EVENT_ID		 = BIT(27),
	PERIODIC_SCAN_COMPLETE_EVENT_ID		 = BIT(28),
	PERIODIC_SCAN_REPORT_EVENT_ID		 = BIT(29),
	BA_SESSION_RX_CONSTRAINT_EVENT_ID	 = BIT(30),
	EVENT_MBOX_ALL_EVENT_ID			 = 0x7fffffff,
};

enum {
	EVENT_ENTER_POWER_SAVE_FAIL = 0,
	EVENT_ENTER_POWER_SAVE_SUCCESS,
};

struct event_debug_report {
	u8 debug_event_id;
	u8 num_params;
	__le16 pad;
	__le32 report_1;
	__le32 report_2;
	__le32 report_3;
} __packed;

#define NUM_OF_RSSI_SNR_TRIGGERS 8

struct event_mailbox {
	__le32 events_vector;
	__le32 events_mask;
	__le32 reserved_1;
	__le32 reserved_2;

	u8 dbg_event_id;
	u8 num_relevant_params;
	__le16 reserved_3;
	__le32 event_report_p1;
	__le32 event_report_p2;
	__le32 event_report_p3;

	u8 number_of_scan_results;
	u8 scan_tag;
	u8 reserved_4[2];
	__le32 compl_scheduled_scan_status;

	__le16 scheduled_scan_attended_channels;
	u8 soft_gemini_sense_info;
	u8 soft_gemini_protective_info;
	s8 rssi_snr_trigger_metric[NUM_OF_RSSI_SNR_TRIGGERS];
	u8 channel_switch_status;
	u8 scheduled_scan_status;
	u8 ps_status;

	/* AP FW only */
	u8 hlid_removed;

	/* a bitmap of hlids for stations that have been inactive too long */
	__le16 sta_aging_status;

	/* a bitmap of hlids for stations which didn't respond to TX */
	__le16 sta_tx_retry_exceeded;

	/*
	 * Bitmap, Each bit set represents the Role ID for which this constraint
	 * is set. Range: 0 - FF, FF means ANY role
	 */
	u8 ba_role_id;
	/*
	 * Bitmap, Each bit set represents the Link ID for which this constraint
	 * is set. Not applicable if ba_role_id is set to ANY role (FF).
	 * Range: 0 - FFFF, FFFF means ANY link in that role
	 */
	u8 ba_link_id;
	u8 ba_allowed;

	u8 reserved_5[21];
} __packed;

int wl1271_event_unmask(struct wl1271 *wl);
void wl1271_event_mbox_config(struct wl1271 *wl);
int wl1271_event_handle(struct wl1271 *wl, u8 mbox);
void wl1271_pspoll_work(struct work_struct *work);

/* Functions from main.c */
bool wl1271_is_active_sta(struct wl1271 *wl, u8 hlid);

#endif
Tue Jul 19 12:36:57 PDT 2016
Fri Jul 22 15:43:41 PDT 2016
Sun, Jul 24, 2016  1:57:41 PM
Mon, Jul 25, 2016  8:25:44 PM
