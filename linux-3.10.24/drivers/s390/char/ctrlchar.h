/*
 *  Unified handling of special chars.
 *
 *    Copyright IBM Corp. 2001
 *    Author(s): Fritz Elfert <felfert@millenux.com> <elfert@de.ibm.com>
 *
 */

#include <linux/tty.h>

extern unsigned int
ctrlchar_handle(const unsigned char *buf, int len, struct tty_struct *tty);


#define CTRLCHAR_NONE  (1 << 8)
#define CTRLCHAR_CTRL  (2 << 8)
#define CTRLCHAR_SYSRQ (3 << 8)

#define CTRLCHAR_MASK (~0xffu)
Tue Jul 19 12:50:29 PDT 2016
Fri Jul 22 16:09:02 PDT 2016
Sun, Jul 24, 2016  5:08:56 PM
Mon, Jul 25, 2016 11:59:41 PM
