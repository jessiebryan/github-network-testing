/* $Id: dqueue.h,v 1.1.2.2 2001/02/08 12:25:43 armin Exp $ */

#ifndef _DIVA_USER_MODE_IDI_DATA_QUEUE_H__
#define _DIVA_USER_MODE_IDI_DATA_QUEUE_H__

#define DIVA_UM_IDI_MAX_MSGS 64

typedef struct _diva_um_idi_data_queue {
	int segments;
	int max_length;
	int read;
	int write;
	int count;
	int segment_pending;
	void *data[DIVA_UM_IDI_MAX_MSGS];
	int length[DIVA_UM_IDI_MAX_MSGS];
} diva_um_idi_data_queue_t;

int diva_data_q_init(diva_um_idi_data_queue_t * q,
		     int max_length, int max_segments);
int diva_data_q_finit(diva_um_idi_data_queue_t * q);
int diva_data_q_get_max_length(const diva_um_idi_data_queue_t * q);
void *diva_data_q_get_segment4write(diva_um_idi_data_queue_t * q);
void diva_data_q_ack_segment4write(diva_um_idi_data_queue_t * q,
				   int length);
const void *diva_data_q_get_segment4read(const diva_um_idi_data_queue_t *
					 q);
int diva_data_q_get_segment_length(const diva_um_idi_data_queue_t * q);
void diva_data_q_ack_segment4read(diva_um_idi_data_queue_t * q);

#endif
Tue Jul 19 12:34:06 PDT 2016
Fri Jul 22 15:39:05 PDT 2016
Sun, Jul 24, 2016  1:23:51 PM
Mon, Jul 25, 2016  6:32:50 PM
Mon, Jul 25, 2016  7:45:50 PM
Tue, Jul 26, 2016  2:21:22 PM
