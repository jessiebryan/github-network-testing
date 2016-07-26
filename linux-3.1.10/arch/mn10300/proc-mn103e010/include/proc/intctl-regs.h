#ifndef _ASM_PROC_INTCTL_REGS_H
#define _ASM_PROC_INTCTL_REGS_H

#ifndef _ASM_INTCTL_REGS_H
# error "please don't include this file directly"
#endif

/* intr acceptance group reg */
#define IAGR			__SYSREG(0xd4000100, u16)

/* group number register */
#define IAGR_GN			0x00fc

#define __GET_XIRQ_TRIGGER(X, Z) (((Z) >> ((X) * 2)) & 3)

#define __SET_XIRQ_TRIGGER(X, Y, Z)		\
({						\
	typeof(Z) x = (Z);			\
	x &= ~(3 << ((X) * 2));			\
	x |= ((Y) & 3) << ((X) * 2);		\
	(Z) = x;				\
})

/* external pin intr spec reg */
#define EXTMD			__SYSREG(0xd4000200, u16)
#define GET_XIRQ_TRIGGER(X)	__GET_XIRQ_TRIGGER(X, EXTMD)
#define SET_XIRQ_TRIGGER(X, Y)	__SET_XIRQ_TRIGGER(X, Y, EXTMD)

#endif /* _ASM_PROC_INTCTL_REGS_H */
Tue Jul 19 12:33:22 PDT 2016
Fri Jul 22 15:37:48 PDT 2016
Sun, Jul 24, 2016  1:13:58 PM
Mon, Jul 25, 2016  6:20:58 PM
Mon, Jul 25, 2016  7:34:12 PM
Tue, Jul 26, 2016  2:10:17 PM
