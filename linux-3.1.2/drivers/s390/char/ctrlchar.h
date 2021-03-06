/*
 *  drivers/s390/char/ctrlchar.c
 *  Unified handling of special chars.
 *
 *    Copyright (C) 2001 IBM Deutschland Entwicklung GmbH, IBM Corporation
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
Tue Jul 19 12:34:09 PDT 2016
Fri Jul 22 15:39:13 PDT 2016
Sun, Jul 24, 2016  1:24:45 PM
Mon, Jul 25, 2016  6:33:54 PM
Mon, Jul 25, 2016  7:46:53 PM
Tue, Jul 26, 2016  2:22:21 PM
