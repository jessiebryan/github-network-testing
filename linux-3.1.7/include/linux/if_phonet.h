/*
 * File: if_phonet.h
 *
 * Phonet interface kernel definitions
 *
 * Copyright (C) 2008 Nokia Corporation. All rights reserved.
 */
#ifndef LINUX_IF_PHONET_H
#define LINUX_IF_PHONET_H

#define PHONET_MIN_MTU		6	/* pn_length = 0 */
#define PHONET_MAX_MTU		65541	/* pn_length = 0xffff */
#define PHONET_DEV_MTU		PHONET_MAX_MTU

#ifdef __KERNEL__
extern struct header_ops phonet_header_ops;
#endif

#endif
Tue Jul 19 12:37:04 PDT 2016
Fri Jul 22 15:43:55 PDT 2016
Sun, Jul 24, 2016  1:59:23 PM
Mon, Jul 25, 2016  8:27:45 PM
