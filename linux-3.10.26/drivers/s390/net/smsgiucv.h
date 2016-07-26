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

Tue Jul 19 12:51:48 PDT 2016
Fri Jul 22 16:11:35 PDT 2016
Sun, Jul 24, 2016  5:27:35 PM
Tue, Jul 26, 2016 12:20:15 AM
