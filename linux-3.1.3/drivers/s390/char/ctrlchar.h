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
Tue Jul 19 12:35:15 PDT 2016
Fri Jul 22 15:40:21 PDT 2016
Sun, Jul 24, 2016  1:33:00 PM
Mon, Jul 25, 2016  7:56:35 PM
Tue, Jul 26, 2016  2:31:29 PM
