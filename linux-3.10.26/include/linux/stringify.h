#ifndef __LINUX_STRINGIFY_H
#define __LINUX_STRINGIFY_H

/* Indirect stringification.  Doing two levels allows the parameter to be a
 * macro itself.  For example, compile with -DFOO=bar, __stringify(FOO)
 * converts to "bar".
 */

#define __stringify_1(x...)	#x
#define __stringify(x...)	__stringify_1(x)

#endif	/* !__LINUX_STRINGIFY_H */
Tue Jul 19 12:51:57 PDT 2016
Fri Jul 22 16:11:53 PDT 2016
Sun, Jul 24, 2016  5:29:51 PM
Tue, Jul 26, 2016 12:22:45 AM
