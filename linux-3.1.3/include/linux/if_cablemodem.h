#ifndef _LINUX_CABLEMODEM_H_
#define _LINUX_CABLEMODEM_H_
/*
 *		Author: Franco Venturi <fventuri@mediaone.net>
 *		Copyright 1998 Franco Venturi
 *
 *		This program is free software; you can redistribute it
 *		and/or  modify it under  the terms of  the GNU General
 *		Public  License as  published  by  the  Free  Software
 *		Foundation;  either  version 2 of the License, or  (at
 *		your option) any later version.
 */

/* some useful defines for sb1000.c e cmconfig.c - fv */
#define SIOCGCMSTATS		SIOCDEVPRIVATE+0	/* get cable modem stats */
#define SIOCGCMFIRMWARE		SIOCDEVPRIVATE+1	/* get cm firmware version */
#define SIOCGCMFREQUENCY	SIOCDEVPRIVATE+2	/* get cable modem frequency */
#define SIOCSCMFREQUENCY	SIOCDEVPRIVATE+3	/* set cable modem frequency */
#define SIOCGCMPIDS			SIOCDEVPRIVATE+4	/* get cable modem PIDs */
#define SIOCSCMPIDS			SIOCDEVPRIVATE+5	/* set cable modem PIDs */

#endif
Tue Jul 19 12:35:22 PDT 2016
Fri Jul 22 15:40:34 PDT 2016
Sun, Jul 24, 2016  1:34:39 PM
Mon, Jul 25, 2016  7:58:31 PM
Tue, Jul 26, 2016  2:33:16 PM
