#ifndef _ASM_SOCKET_H
#define _ASM_SOCKET_H

#include <uapi/asm/socket.h>

/* O_NONBLOCK clashes with the bits used for socket types.  Therefore we
 * have to define SOCK_NONBLOCK to a different value here.
 */
#define SOCK_NONBLOCK	0x40000000

#endif /* _ASM_SOCKET_H */
Tue Jul 19 12:53:32 PDT 2016
Fri Jul 22 16:14:58 PDT 2016
Sun, Jul 24, 2016  5:52:38 PM
Tue, Jul 26, 2016 12:47:54 AM
