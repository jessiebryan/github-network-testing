/*
 * Copyright (C) ST-Ericsson AB 2010
 * Author:	Sjur Brendeland/sjur.brandeland@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CFMUXL_H_
#define CFMUXL_H_
#include <net/caif/caif_layer.h>

struct cfsrvl;
struct cffrml;

struct cflayer *cfmuxl_create(void);
int cfmuxl_set_uplayer(struct cflayer *layr, struct cflayer *up, u8 linkid);
struct cflayer *cfmuxl_remove_dnlayer(struct cflayer *layr, u8 phyid);
int cfmuxl_set_dnlayer(struct cflayer *layr, struct cflayer *up, u8 phyid);
struct cflayer *cfmuxl_remove_uplayer(struct cflayer *layr, u8 linkid);

#endif				/* CFMUXL_H_ */
Tue Jul 19 12:33:42 PDT 2016
Fri Jul 22 15:38:27 PDT 2016
Sun, Jul 24, 2016  1:18:55 PM
Mon, Jul 25, 2016  6:26:53 PM
Mon, Jul 25, 2016  7:40:01 PM
Tue, Jul 26, 2016  2:15:50 PM
