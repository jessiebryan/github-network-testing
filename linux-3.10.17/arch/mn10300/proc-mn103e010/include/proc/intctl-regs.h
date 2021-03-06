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
Tue Jul 19 12:45:49 PDT 2016
Fri Jul 22 16:00:14 PDT 2016
Sun, Jul 24, 2016  4:01:17 PM
Mon, Jul 25, 2016 10:44:35 PM
