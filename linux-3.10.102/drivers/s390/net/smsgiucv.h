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

Tue Jul 19 12:41:23 PDT 2016
Fri Jul 22 15:52:18 PDT 2016
Sun, Jul 24, 2016  2:59:42 PM
Mon, Jul 25, 2016  9:35:51 PM
