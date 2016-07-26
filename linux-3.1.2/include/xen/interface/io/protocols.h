#ifndef __XEN_PROTOCOLS_H__
#define __XEN_PROTOCOLS_H__

#define XEN_IO_PROTO_ABI_X86_32     "x86_32-abi"
#define XEN_IO_PROTO_ABI_X86_64     "x86_64-abi"
#define XEN_IO_PROTO_ABI_IA64       "ia64-abi"
#define XEN_IO_PROTO_ABI_POWERPC64  "powerpc64-abi"

#if defined(__i386__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_X86_32
#elif defined(__x86_64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_X86_64
#elif defined(__ia64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_IA64
#elif defined(__powerpc64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_POWERPC64
#else
# error arch fixup needed here
#endif

#endif
Tue Jul 19 12:34:38 PDT 2016
Fri Jul 22 15:39:34 PDT 2016
Sun, Jul 24, 2016  1:27:29 PM
Mon, Jul 25, 2016  6:37:10 PM
Mon, Jul 25, 2016  7:50:04 PM
Tue, Jul 26, 2016  2:25:21 PM
