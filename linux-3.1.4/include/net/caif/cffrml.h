/*
 * Copyright (C) ST-Ericsson AB 2010
 * Author:	Sjur Brendeland/sjur.brandeland@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CFFRML_H_
#define CFFRML_H_
#include <net/caif/caif_layer.h>
#include <linux/netdevice.h>

struct cffrml;
struct cflayer *cffrml_create(u16 phyid, bool use_fcs);
void cffrml_free(struct cflayer *layr);
void cffrml_set_uplayer(struct cflayer *this, struct cflayer *up);
void cffrml_set_dnlayer(struct cflayer *this, struct cflayer *dn);
void cffrml_put(struct cflayer *layr);
void cffrml_hold(struct cflayer *layr);
int cffrml_refcnt_read(struct cflayer *layr);

#endif /* CFFRML_H_ */
Tue Jul 19 12:35:59 PDT 2016
Fri Jul 22 15:41:48 PDT 2016
Sun, Jul 24, 2016  1:43:40 PM
Mon, Jul 25, 2016  8:09:10 PM
Tue, Jul 26, 2016  2:43:15 PM
