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
Tue Jul 19 12:41:11 PDT 2016
Fri Jul 22 15:51:52 PDT 2016
Sun, Jul 24, 2016  2:56:52 PM
Mon, Jul 25, 2016  9:32:38 PM
