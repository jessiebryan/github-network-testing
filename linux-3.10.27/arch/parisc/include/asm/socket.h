#ifndef _ASM_SOCKET_H
#define _ASM_SOCKET_H

#include <uapi/asm/socket.h>

/* O_NONBLOCK clashes with the bits used for socket types.  Therefore we
 * have to define SOCK_NONBLOCK to a different value here.
 */
#define SOCK_NONBLOCK	0x40000000

#endif /* _ASM_SOCKET_H */
Tue Jul 19 12:52:14 PDT 2016
Fri Jul 22 16:12:27 PDT 2016
Sun, Jul 24, 2016  5:34:00 PM
Tue, Jul 26, 2016 12:27:20 AM
