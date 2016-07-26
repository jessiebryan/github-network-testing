/* const.h: Macros for dealing with constants.  */

#ifndef _LINUX_CONST_H
#define _LINUX_CONST_H

/* Some constant macros are used in both assembler and
 * C code.  Therefore we cannot annotate them always with
 * 'UL' and other type specifiers unilaterally.  We
 * use the following macros to deal with this.
 *
 * Similarly, _AT() will cast an expression with a type in C, but
 * leave it unchanged in asm.
 */

#ifdef __ASSEMBLY__
#define _AC(X,Y)	X
#define _AT(T,X)	X
#else
#define __AC(X,Y)	(X##Y)
#define _AC(X,Y)	__AC(X,Y)
#define _AT(T,X)	((T)(X))
#endif

#endif /* !(_LINUX_CONST_H) */
Tue Jul 19 12:33:38 PDT 2016
Fri Jul 22 15:38:20 PDT 2016
Sun, Jul 24, 2016  1:17:57 PM
Mon, Jul 25, 2016  6:25:44 PM
Mon, Jul 25, 2016  7:38:54 PM
