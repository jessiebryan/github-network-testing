/* AFS Cache Manager definitions
 *
 * Copyright (C) 2007 Red Hat, Inc. All Rights Reserved.
 * Written by David Howells (dhowells@redhat.com)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version
 * 2 of the License, or (at your option) any later version.
 */

#ifndef AFS_CM_H
#define AFS_CM_H

#define AFS_CM_PORT		7001	/* AFS file server port */
#define CM_SERVICE		1	/* AFS File Service ID */

enum AFS_CM_Operations {
	CBCallBack		= 204,	/* break callback promises */
	CBInitCallBackState	= 205,	/* initialise callback state */
	CBProbe			= 206,	/* probe client */
	CBGetLock		= 207,	/* get contents of CM lock table */
	CBGetCE			= 208,	/* get cache file description */
	CBGetXStatsVersion	= 209,	/* get version of extended statistics */
	CBGetXStats		= 210,	/* get contents of extended statistics data */
	CBInitCallBackState3	= 213,	/* initialise callback state, version 3 */
	CBProbeUuid		= 214,	/* check the client hasn't rebooted */
	CBTellMeAboutYourself	= 65538, /* get client capabilities */
};

#define AFS_CAP_ERROR_TRANSLATION	0x1

#endif /* AFS_FS_H */
Tue Jul 19 12:49:16 PDT 2016
Fri Jul 22 16:06:43 PDT 2016
Sun, Jul 24, 2016  4:51:15 PM
Mon, Jul 25, 2016 11:40:11 PM
