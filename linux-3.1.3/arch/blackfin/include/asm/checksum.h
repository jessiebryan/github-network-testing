/*
 * Copyright 2004-2009 Analog Devices Inc.
 *                     akbar.hussain@lineo.com
 *
 * Licensed under the GPL-2 or later.
 */

#ifndef _BFIN_CHECKSUM_H
#define _BFIN_CHECKSUM_H

/*
 * computes the checksum of the TCP/UDP pseudo-header
 * returns a 16-bit checksum, already complemented
 */

static inline __wsum
__csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
		   unsigned short proto, __wsum sum)
{
	unsigned int carry;

	__asm__ ("%0 = %0 + %2;\n\t"
		"CC = AC0;\n\t"
		"%1 = CC;\n\t"
		"%0 = %0 + %1;\n\t"
		"%0 = %0 + %3;\n\t"
		"CC = AC0;\n\t"
		"%1 = CC;\n\t"
		"%0 = %0 + %1;\n\t"
		"%0 = %0 + %4;\n\t"
		"CC = AC0;\n\t"
		"%1 = CC;\n\t"
		"%0 = %0 + %1;\n\t"
		: "=d" (sum), "=&d" (carry)
		: "d" (daddr), "d" (saddr), "d" ((len + proto) << 8), "0"(sum)
		: "CC");

	return (sum);
}
#define csum_tcpudp_nofold __csum_tcpudp_nofold

#include <asm-generic/checksum.h>

#endif
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:49 PDT 2016
Sun, Jul 24, 2016  1:29:09 PM
Mon, Jul 25, 2016  6:39:09 PM
Mon, Jul 25, 2016  7:52:02 PM
Tue, Jul 26, 2016  2:27:12 PM
