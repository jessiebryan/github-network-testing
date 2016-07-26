#ifndef _CRIS_ARCH_CHECKSUM_H
#define _CRIS_ARCH_CHECKSUM_H

/* Checksum some values used in TCP/UDP headers.
 *
 * The gain by doing this in asm is that C will not generate carry-additions
 * for the 32-bit components of the checksum, so otherwise we would have had
 * to split all of those into 16-bit components, then add.
 */

static inline __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr, unsigned short len,
		   unsigned short proto, __wsum sum)
{
	__wsum res;
	__asm__ ("add.d %2, %0\n\t"
		 "ax\n\t"
		 "add.d %3, %0\n\t"
		 "ax\n\t"
		 "add.d %4, %0\n\t"
		 "ax\n\t"
		 "addq 0, %0\n"
	: "=r" (res)
	: "0" (sum), "r" (daddr), "r" (saddr), "r" ((len + proto) << 8));

	return res;
}	

#endif
Tue Jul 19 12:38:30 PDT 2016
Fri Jul 22 15:46:33 PDT 2016
Sun, Jul 24, 2016  2:18:34 PM
Mon, Jul 25, 2016  8:49:43 PM
