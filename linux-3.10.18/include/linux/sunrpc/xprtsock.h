/*
 *  linux/include/linux/sunrpc/xprtsock.h
 *
 *  Declarations for the RPC transport socket provider.
 */

#ifndef _LINUX_SUNRPC_XPRTSOCK_H
#define _LINUX_SUNRPC_XPRTSOCK_H

#ifdef __KERNEL__

int		init_socket_xprt(void);
void		cleanup_socket_xprt(void);

#define RPC_MIN_RESVPORT	(1U)
#define RPC_MAX_RESVPORT	(65535U)
#define RPC_DEF_MIN_RESVPORT	(665U)
#define RPC_DEF_MAX_RESVPORT	(1023U)

#endif /* __KERNEL__ */

#endif /* _LINUX_SUNRPC_XPRTSOCK_H */
Tue Jul 19 12:46:48 PDT 2016
Fri Jul 22 16:02:06 PDT 2016
Sun, Jul 24, 2016  4:15:43 PM
Mon, Jul 25, 2016 11:00:37 PM
