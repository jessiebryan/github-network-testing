#ifndef _PPC_BOOT_STDIO_H_
#define _PPC_BOOT_STDIO_H_

#include <stdarg.h>

#define	ENOMEM		12	/* Out of Memory */
#define	EINVAL		22	/* Invalid argument */
#define ENOSPC		28	/* No space left on device */

extern int printf(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

#define fprintf(fmt, args...)	printf(args)

extern int sprintf(char *buf, const char *fmt, ...)
	__attribute__((format(printf, 2, 3)));

extern int vsprintf(char *buf, const char *fmt, va_list args);

#endif				/* _PPC_BOOT_STDIO_H_ */
Tue Jul 19 12:39:53 PDT 2016
Fri Jul 22 15:49:19 PDT 2016
Sun, Jul 24, 2016  2:38:27 PM
