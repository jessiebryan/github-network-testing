#ifndef _UAPI__CODA_PSDEV_H
#define _UAPI__CODA_PSDEV_H

#include <linux/magic.h>

#define CODA_PSDEV_MAJOR 67
#define MAX_CODADEVS  5	   /* how many do we allow */


/* messages between coda filesystem in kernel and Venus */
struct upc_req {
	struct list_head    uc_chain;
	caddr_t	            uc_data;
	u_short	            uc_flags;
	u_short             uc_inSize;  /* Size is at most 5000 bytes */
	u_short	            uc_outSize;
	u_short	            uc_opcode;  /* copied from data to save lookup */
	int		    uc_unique;
	wait_queue_head_t   uc_sleep;   /* process' wait queue */
};

#define CODA_REQ_ASYNC  0x1
#define CODA_REQ_READ   0x2
#define CODA_REQ_WRITE  0x4
#define CODA_REQ_ABORT  0x8

#endif /* _UAPI__CODA_PSDEV_H */
Tue Jul 19 12:50:03 PDT 2016
Fri Jul 22 16:08:11 PDT 2016
Sun, Jul 24, 2016  5:02:31 PM
Mon, Jul 25, 2016 11:52:36 PM
