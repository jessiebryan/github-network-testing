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
Tue Jul 19 12:38:23 PDT 2016
Fri Jul 22 15:46:19 PDT 2016
Sun, Jul 24, 2016  2:16:57 PM
Mon, Jul 25, 2016  8:47:55 PM
