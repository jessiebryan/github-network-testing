#ifndef __LINUX_STRINGIFY_H
#define __LINUX_STRINGIFY_H

/* Indirect stringification.  Doing two levels allows the parameter to be a
 * macro itself.  For example, compile with -DFOO=bar, __stringify(FOO)
 * converts to "bar".
 */

#define __stringify_1(x...)	#x
#define __stringify(x...)	__stringify_1(x)

#endif	/* !__LINUX_STRINGIFY_H */
Tue Jul 19 12:38:58 PDT 2016
Fri Jul 22 15:47:27 PDT 2016
Sun, Jul 24, 2016  2:25:06 PM
Mon, Jul 25, 2016  8:57:01 PM
