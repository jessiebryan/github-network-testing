#ifndef _ASM_ALPHA_FUTEX_H
#define _ASM_ALPHA_FUTEX_H

#ifdef __KERNEL__

#include <linux/futex.h>
#include <linux/uaccess.h>
#include <asm/errno.h>
#include <asm/barrier.h>

#define __futex_atomic_op(insn, ret, oldval, uaddr, oparg)	\
	__asm__ __volatile__(					\
		__ASM_SMP_MB					\
	"1:	ldl_l	%0,0(%2)\n"				\
		insn						\
	"2:	stl_c	%1,0(%2)\n"				\
	"	beq	%1,4f\n"				\
	"	mov	$31,%1\n"				\
	"3:	.subsection 2\n"				\
	"4:	br	1b\n"					\
	"	.previous\n"					\
	"	.section __ex_table,\"a\"\n"			\
	"	.long	1b-.\n"					\
	"	lda	$31,3b-1b(%1)\n"			\
	"	.long	2b-.\n"					\
	"	lda	$31,3b-2b(%1)\n"			\
	"	.previous\n"					\
	:	"=&r" (oldval), "=&r"(ret)			\
	:	"r" (uaddr), "r"(oparg)				\
	:	"memory")

static inline int futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
{
	int op = (encoded_op >> 28) & 7;
	int cmp = (encoded_op >> 24) & 15;
	int oparg = (encoded_op << 8) >> 20;
	int cmparg = (encoded_op << 20) >> 20;
	int oldval = 0, ret;
	if (encoded_op & (FUTEX_OP_OPARG_SHIFT << 28))
		oparg = 1 << oparg;

	if (!access_ok(VERIFY_WRITE, uaddr, sizeof(u32)))
		return -EFAULT;

	pagefault_disable();

	switch (op) {
	case FUTEX_OP_SET:
		__futex_atomic_op("mov %3,%1\n", ret, oldval, uaddr, oparg);
		break;
	case FUTEX_OP_ADD:
		__futex_atomic_op("addl %0,%3,%1\n", ret, oldval, uaddr, oparg);
		break;
	case FUTEX_OP_OR:
		__futex_atomic_op("or %0,%3,%1\n", ret, oldval, uaddr, oparg);
		break;
	case FUTEX_OP_ANDN:
		__futex_atomic_op("andnot %0,%3,%1\n", ret, oldval, uaddr, oparg);
		break;
	case FUTEX_OP_XOR:
		__futex_atomic_op("xor %0,%3,%1\n", ret, oldval, uaddr, oparg);
		break;
	default:
		ret = -ENOSYS;
	}

	pagefault_enable();

	if (!ret) {
		switch (cmp) {
		case FUTEX_OP_CMP_EQ: ret = (oldval == cmparg); break;
		case FUTEX_OP_CMP_NE: ret = (oldval != cmparg); break;
		case FUTEX_OP_CMP_LT: ret = (oldval < cmparg); break;
		case FUTEX_OP_CMP_GE: ret = (oldval >= cmparg); break;
		case FUTEX_OP_CMP_LE: ret = (oldval <= cmparg); break;
		case FUTEX_OP_CMP_GT: ret = (oldval > cmparg); break;
		default: ret = -ENOSYS;
		}
	}
	return ret;
}

static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
			      u32 oldval, u32 newval)
{
	int ret = 0, cmp;
	u32 prev;

	if (!access_ok(VERIFY_WRITE, uaddr, sizeof(u32)))
		return -EFAULT;

	__asm__ __volatile__ (
		__ASM_SMP_MB
	"1:	ldl_l	%1,0(%3)\n"
	"	cmpeq	%1,%4,%2\n"
	"	beq	%2,3f\n"
	"	mov	%5,%2\n"
	"2:	stl_c	%2,0(%3)\n"
	"	beq	%2,4f\n"
	"3:	.subsection 2\n"
	"4:	br	1b\n"
	"	.previous\n"
	"	.section __ex_table,\"a\"\n"
	"	.long	1b-.\n"
	"	lda	$31,3b-1b(%0)\n"
	"	.long	2b-.\n"
	"	lda	$31,3b-2b(%0)\n"
	"	.previous\n"
	:	"+r"(ret), "=&r"(prev), "=&r"(cmp)
	:	"r"(uaddr), "r"((long)(int)oldval), "r"(newval)
	:	"memory");

	*uval = prev;
	return ret;
}

#endif /* __KERNEL__ */
#endif /* _ASM_ALPHA_FUTEX_H */
Tue Jul 19 12:38:25 PDT 2016
Fri Jul 22 15:46:23 PDT 2016
Sun, Jul 24, 2016  2:17:25 PM
Mon, Jul 25, 2016  8:48:26 PM
