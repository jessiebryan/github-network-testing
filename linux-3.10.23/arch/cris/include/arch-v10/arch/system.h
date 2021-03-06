#ifndef __ASM_CRIS_ARCH_SYSTEM_H
#define __ASM_CRIS_ARCH_SYSTEM_H


/* read the CPU version register */

static inline unsigned long rdvr(void) {
	unsigned char vr;
	__asm__ volatile ("move $vr,%0" : "=rm" (vr));
	return vr;
}

#define cris_machine_name "cris"

/* read/write the user-mode stackpointer */

static inline unsigned long rdusp(void) {
	unsigned long usp;
	__asm__ __volatile__("move $usp,%0" : "=rm" (usp));
	return usp;
}

#define wrusp(usp) \
	__asm__ __volatile__("move %0,$usp" : /* no outputs */ : "rm" (usp))

/* read the current stackpointer */

static inline unsigned long rdsp(void) {
	unsigned long sp;
	__asm__ __volatile__("move.d $sp,%0" : "=rm" (sp));
	return sp;
}

static inline unsigned long _get_base(char * addr)
{
  return 0;
}

#define nop() __asm__ __volatile__ ("nop");

#define xchg(ptr,x) ((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
#define tas(ptr) (xchg((ptr),1))

struct __xchg_dummy { unsigned long a[100]; };
#define __xg(x) ((struct __xchg_dummy *)(x))

#endif
Tue Jul 19 12:49:33 PDT 2016
Fri Jul 22 16:07:15 PDT 2016
Sun, Jul 24, 2016  4:55:18 PM
Mon, Jul 25, 2016 11:44:39 PM
