#ifndef _ASM_CRIS_ARCH_CHECKSUM_H
#define _ASM_CRIS_ARCH_CHECKSUM_H

/*
 * Check values used in TCP/UDP headers.
 *
 * The gain of doing this in assembler instead of C, is that C doesn't
 * generate carry-additions for the 32-bit components of the
 * checksum. Which means it would be necessary to split all those into
 * 16-bit components and then add.
 */
static inline __wsum
csum_tcpudp_nofold(__be32 saddr, __be32 daddr,
		   unsigned short len, unsigned short proto, __wsum sum)
{
	__wsum res;

	__asm__ __volatile__ ("add.d %2, %0\n\t"
			      "addc %3, %0\n\t"
			      "addc %4, %0\n\t"
			      "addc 0, %0\n\t"
			      : "=r" (res)
			      : "0" (sum), "r" (daddr), "r" (saddr), \
			      "r" ((len + proto) << 8));

	return res;
}

#endif /* _ASM_CRIS_ARCH_CHECKSUM_H */
Tue Jul 19 12:34:45 PDT 2016
Fri Jul 22 15:39:50 PDT 2016
Sun, Jul 24, 2016  1:29:18 PM
Mon, Jul 25, 2016  6:39:19 PM
Mon, Jul 25, 2016  7:52:12 PM
Tue, Jul 26, 2016  2:27:22 PM
