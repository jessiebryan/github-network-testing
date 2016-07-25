/*
 * Licensed under the GPL
 */

#ifndef __UM_SYSDEP_CHECKSUM_H
#define __UM_SYSDEP_CHECKSUM_H

static inline unsigned add32_with_carry(unsigned a, unsigned b)
{
        asm("addl %2,%0\n\t"
            "adcl $0,%0"
            : "=r" (a)
            : "0" (a), "r" (b));
        return a;
}

extern __sum16 ip_compute_csum(const void *buff, int len);

#endif
Tue Jul 19 12:45:18 PDT 2016
Fri Jul 22 15:59:14 PDT 2016
Sun, Jul 24, 2016  3:53:24 PM
