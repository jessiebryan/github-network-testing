/*
 * Copyright (C) ST-Ericsson AB 2010
 * Author:	Sjur Brendeland/sjur.brandeland@stericsson.com
 * License terms: GNU General Public License (GPL) version 2
 */

#ifndef CFSERL_H_
#define CFSERL_H_
#include <net/caif/caif_layer.h>

struct cflayer *cfserl_create(int type, int instance, bool use_stx);
#endif				/* CFSERL_H_ */
Tue Jul 19 12:35:59 PDT 2016
