/*
 * IUCV special message driver
 *
 * Copyright IBM Corp. 2003
 * Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 */

#define SMSGIUCV_DRV_NAME     "SMSGIUCV"

int  smsg_register_callback(const char *,
			    void (*)(const char *, char *));
void smsg_unregister_callback(const char *,
			      void (*)(const char *, char *));

Tue Jul 19 12:43:29 PDT 2016
Fri Jul 22 15:55:53 PDT 2016
Sun, Jul 24, 2016  3:27:21 PM
Mon, Jul 25, 2016 10:06:49 PM
