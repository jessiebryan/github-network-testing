#ifndef __HISAX_ISAC_H__
#define __HISAX_ISAC_H__

#include <linux/kernel.h>
#include "fsm.h"
#include "hisax_if.h"

#define TIMER3_VALUE 7000
#define MAX_DFRAME_LEN_L1 300

#define ISAC_IOM1	0

struct isac {
	void *priv;

	u_long flags;
	struct hisax_d_if hisax_d_if;
	struct FsmInst l1m;
	struct FsmTimer timer;
	u_char mocr;
	u_char adf2;
	int    type;

	u_char rcvbuf[MAX_DFRAME_LEN_L1];
	int rcvidx;

	struct sk_buff *tx_skb;
	int tx_cnt;

	u_char (*read_isac)      (struct isac *, u_char);
	void   (*write_isac)     (struct isac *, u_char, u_char);
	void   (*read_isac_fifo) (struct isac *, u_char *, int);
	void   (*write_isac_fifo)(struct isac *, u_char *, int);
};

void isac_init(struct isac *isac);
void isac_d_l2l1(struct hisax_if *hisax_d_if, int pr, void *arg);

void isac_setup(struct isac *isac);
void isac_irq(struct isac *isac);

void isacsx_setup(struct isac *isac);
void isacsx_irq(struct isac *isac);

#endif
Tue Jul 19 12:49:46 PDT 2016
Fri Jul 22 16:07:40 PDT 2016
Sun, Jul 24, 2016  4:58:33 PM
Mon, Jul 25, 2016 11:48:17 PM
