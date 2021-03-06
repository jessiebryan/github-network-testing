/*
 * Copyright (C) ST-Ericsson AB 2010
 * Author:	Sjur Brendeland
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
Tue Jul 19 12:44:58 PDT 2016
Fri Jul 22 15:58:34 PDT 2016
Sun, Jul 24, 2016  3:48:17 PM
Mon, Jul 25, 2016 10:30:08 PM
