#ifndef _RDMA_TRANSPORT_H
#define _RDMA_TRANSPORT_H

#include <rdma/ib_verbs.h>
#include <rdma/rdma_cm.h>
#include "rds.h"

#define RDS_RDMA_RESOLVE_TIMEOUT_MS     5000

int rds_rdma_conn_connect(struct rds_connection *conn);
int rds_rdma_cm_event_handler(struct rdma_cm_id *cm_id,
			      struct rdma_cm_event *event);

/* from ib.c */
extern struct rds_transport rds_ib_transport;
int rds_ib_init(void);
void rds_ib_exit(void);

/* from iw.c */
extern struct rds_transport rds_iw_transport;
int rds_iw_init(void);
void rds_iw_exit(void);

#endif
Tue Jul 19 12:52:41 PDT 2016
Fri Jul 22 16:13:17 PDT 2016
Sun, Jul 24, 2016  5:40:15 PM
Tue, Jul 26, 2016 12:34:14 AM
