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
Tue Jul 19 12:42:39 PDT 2016
Fri Jul 22 15:54:20 PDT 2016
Sun, Jul 24, 2016  3:15:18 PM
Mon, Jul 25, 2016  9:53:27 PM
