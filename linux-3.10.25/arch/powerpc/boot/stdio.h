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
Tue Jul 19 12:50:57 PDT 2016
Fri Jul 22 16:09:54 PDT 2016
Sun, Jul 24, 2016  5:15:25 PM
Tue, Jul 26, 2016 12:06:52 AM
