/*---------------------------------------------------------------------------+
 |  fpu_asm.h                                                                |
 |                                                                           |
 | Copyright (C) 1992,1995,1997                                              |
 |                       W. Metzenthen, 22 Parker St, Ormond, Vic 3163,      |
 |                       Australia.  E-mail billm@suburbia.net               |
 |                                                                           |
 +---------------------------------------------------------------------------*/

#ifndef _FPU_ASM_H_
#define _FPU_ASM_H_

#include <linux/linkage.h>

#define	EXCEPTION	FPU_exception

#define PARAM1	8(%ebp)
#define	PARAM2	12(%ebp)
#define	PARAM3	16(%ebp)
#define	PARAM4	20(%ebp)
#define	PARAM5	24(%ebp)
#define	PARAM6	28(%ebp)
#define	PARAM7	32(%ebp)

#define SIGL_OFFSET 0
#define	EXP(x)	8(x)
#define SIG(x)	SIGL_OFFSET##(x)
#define	SIGL(x)	SIGL_OFFSET##(x)
#define	SIGH(x)	4(x)

#endif /* _FPU_ASM_H_ */
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:19 PDT 2016
Sun, Jul 24, 2016  5:25:56 PM
Tue, Jul 26, 2016 12:18:26 AM
