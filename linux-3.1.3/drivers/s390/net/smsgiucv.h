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

Tue Jul 19 12:35:15 PDT 2016
Fri Jul 22 15:40:21 PDT 2016
Sun, Jul 24, 2016  1:33:02 PM
Mon, Jul 25, 2016  7:56:37 PM
Tue, Jul 26, 2016  2:31:30 PM
