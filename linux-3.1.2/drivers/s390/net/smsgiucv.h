/*
 * IUCV special message driver
 *
 * Copyright (C) 2003 IBM Deutschland Entwicklung GmbH, IBM Corporation
 * Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 */

#define SMSGIUCV_DRV_NAME     "SMSGIUCV"

int  smsg_register_callback(const char *,
			    void (*)(const char *, char *));
void smsg_unregister_callback(const char *,
			      void (*)(const char *, char *));

Tue Jul 19 12:34:10 PDT 2016
Fri Jul 22 15:39:13 PDT 2016
Sun, Jul 24, 2016  1:24:47 PM
Mon, Jul 25, 2016  6:33:56 PM
Mon, Jul 25, 2016  7:46:54 PM
Tue, Jul 26, 2016  2:22:23 PM
