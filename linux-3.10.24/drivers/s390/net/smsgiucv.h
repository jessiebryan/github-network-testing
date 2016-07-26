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

Tue Jul 19 12:50:30 PDT 2016
Fri Jul 22 16:09:02 PDT 2016
Sun, Jul 24, 2016  5:08:58 PM
Mon, Jul 25, 2016 11:59:43 PM
