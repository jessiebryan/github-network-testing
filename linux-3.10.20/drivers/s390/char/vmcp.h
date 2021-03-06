/*
 * Copyright IBM Corp. 2004, 2005
 * Interface implementation for communication with the z/VM control program
 * Version 1.0
 * Author(s): Christian Borntraeger <cborntra@de.ibm.com>
 *
 *
 * z/VMs CP offers the possibility to issue commands via the diagnose code 8
 * this driver implements a character device that issues these commands and
 * returns the answer of CP.
 *
 * The idea of this driver is based on cpint from Neale Ferguson
 */

#include <linux/ioctl.h>
#include <linux/mutex.h>

#define VMCP_GETCODE _IOR(0x10, 1, int)
#define VMCP_SETBUF _IOW(0x10, 2, int)
#define VMCP_GETSIZE _IOR(0x10, 3, int)

struct vmcp_session {
	unsigned int bufsize;
	char *response;
	int resp_size;
	int resp_code;
	/* As we use copy_from/to_user, which might     *
	 * sleep and cannot use a spinlock              */
	struct mutex mutex;
};
Tue Jul 19 12:47:55 PDT 2016
Fri Jul 22 16:04:11 PDT 2016
Sun, Jul 24, 2016  4:31:54 PM
Mon, Jul 25, 2016 11:18:36 PM
