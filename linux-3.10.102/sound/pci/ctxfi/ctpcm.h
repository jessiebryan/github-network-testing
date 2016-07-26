/**
 * Copyright (C) 2008, Creative Technology Ltd. All Rights Reserved.
 *
 * This source file is released under GPL v2 license (no other versions).
 * See the COPYING file included in the main directory of this source
 * distribution for the license terms and conditions.
 *
 * @File	ctpcm.h
 *
 * @Brief
 * This file contains the definition of the pcm device functions.
 *
 * @Author	Liu Chun
 * @Date 	Mar 28 2008
 *
 */

#ifndef CTPCM_H
#define CTPCM_H

#include "ctatc.h"

int ct_alsa_pcm_create(struct ct_atc *atc,
		       enum CTALSADEVS device,
		       const char *device_name);

#endif /* CTPCM_H */
Tue Jul 19 12:41:38 PDT 2016
Fri Jul 22 15:52:46 PDT 2016
Sun, Jul 24, 2016  3:03:10 PM
Mon, Jul 25, 2016  9:39:45 PM
