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

Tue Jul 19 12:46:38 PDT 2016
Fri Jul 22 16:01:49 PDT 2016
Sun, Jul 24, 2016  4:13:28 PM
Mon, Jul 25, 2016 10:58:07 PM
