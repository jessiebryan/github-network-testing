#ifndef _SPARC64_BACKOFF_H
#define _SPARC64_BACKOFF_H

#define BACKOFF_LIMIT	(4 * 1024)

#ifdef CONFIG_SMP

#define BACKOFF_SETUP(reg)	\
	mov	1, reg

#define BACKOFF_LABEL(spin_label, continue_label) \
	spin_label

#define BACKOFF_SPIN(reg, tmp, label)	\
	mov	reg, tmp; \
88:	brnz,pt	tmp, 88b; \
	 sub	tmp, 1, tmp; \
	set	BACKOFF_LIMIT, tmp; \
	cmp	reg, tmp; \
	bg,pn	%xcc, label; \
	 nop; \
	ba,pt	%xcc, label; \
	 sllx	reg, 1, reg;

#else

#define BACKOFF_SETUP(reg)

#define BACKOFF_LABEL(spin_label, continue_label) \
	continue_label

#define BACKOFF_SPIN(reg, tmp, label)

#endif

#endif /* _SPARC64_BACKOFF_H */
Tue Jul 19 12:34:02 PDT 2016
Fri Jul 22 15:38:58 PDT 2016
Sun, Jul 24, 2016  1:22:56 PM
Mon, Jul 25, 2016  6:31:41 PM
Mon, Jul 25, 2016  7:44:44 PM
Tue, Jul 26, 2016  2:20:20 PM
