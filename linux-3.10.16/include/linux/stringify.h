#ifndef __LINUX_STRINGIFY_H
#define __LINUX_STRINGIFY_H

/* Indirect stringification.  Doing two levels allows the parameter to be a
 * macro itself.  For example, compile with -DFOO=bar, __stringify(FOO)
 * converts to "bar".
 */

#define __stringify_1(x...)	#x
#define __stringify(x...)	__stringify_1(x)

#endif	/* !__LINUX_STRINGIFY_H */
Tue Jul 19 12:45:33 PDT 2016
Fri Jul 22 15:59:44 PDT 2016
Sun, Jul 24, 2016  3:57:16 PM
Mon, Jul 25, 2016 10:40:05 PM
