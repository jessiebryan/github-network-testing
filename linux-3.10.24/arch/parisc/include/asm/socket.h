#ifndef _ASM_SOCKET_H
#define _ASM_SOCKET_H

#include <uapi/asm/socket.h>

/* O_NONBLOCK clashes with the bits used for socket types.  Therefore we
 * have to define SOCK_NONBLOCK to a different value here.
 */
#define SOCK_NONBLOCK	0x40000000

#endif /* _ASM_SOCKET_H */
Tue Jul 19 12:50:17 PDT 2016
Fri Jul 22 16:08:39 PDT 2016
Sun, Jul 24, 2016  5:06:05 PM
