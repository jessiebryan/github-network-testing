/*
 * serial.h
 *
 * Copyright (C) 2003 Develer S.r.l. (http://www.develer.com/)
 * Author: Bernardo Innocenti <bernie@codewiz.org>
 *
 * Based on linux/include/asm-i386/serial.h
 */
#include <asm/serial-regs.h>

/*
 * the base baud is derived from the clock speed and so is variable
 */
#define BASE_BAUD 0

#define STD_COM_FLAGS		ASYNC_BOOT_AUTOCONF

#define SERIAL_PORT_DFNS
Tue Jul 19 12:40:26 PDT 2016
Fri Jul 22 15:50:25 PDT 2016
