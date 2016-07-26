#ifndef __LINUX_STRINGIFY_H
#define __LINUX_STRINGIFY_H

/* Indirect stringification.  Doing two levels allows the parameter to be a
 * macro itself.  For example, compile with -DFOO=bar, __stringify(FOO)
 * converts to "bar".
 */

#define __stringify_1(x...)	#x
#define __stringify(x...)	__stringify_1(x)

#endif	/* !__LINUX_STRINGIFY_H */
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:06 PDT 2016
Sun, Jul 24, 2016  4:15:41 PM
Mon, Jul 25, 2016 11:00:36 PM
