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

Tue Jul 19 12:33:32 PDT 2016
Fri Jul 22 15:38:08 PDT 2016
Sun, Jul 24, 2016  1:16:31 PM
Mon, Jul 25, 2016  6:24:01 PM
Mon, Jul 25, 2016  7:37:13 PM
Tue, Jul 26, 2016  2:13:08 PM
