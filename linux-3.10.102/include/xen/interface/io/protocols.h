#ifndef __XEN_PROTOCOLS_H__
#define __XEN_PROTOCOLS_H__

#define XEN_IO_PROTO_ABI_X86_32     "x86_32-abi"
#define XEN_IO_PROTO_ABI_X86_64     "x86_64-abi"
#define XEN_IO_PROTO_ABI_IA64       "ia64-abi"
#define XEN_IO_PROTO_ABI_POWERPC64  "powerpc64-abi"
#define XEN_IO_PROTO_ABI_ARM        "arm-abi"

#if defined(__i386__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_X86_32
#elif defined(__x86_64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_X86_64
#elif defined(__ia64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_IA64
#elif defined(__powerpc64__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_POWERPC64
#elif defined(__arm__)
# define XEN_IO_PROTO_ABI_NATIVE XEN_IO_PROTO_ABI_ARM
#else
# error arch fixup needed here
#endif

#endif
Tue Jul 19 12:41:37 PDT 2016
Fri Jul 22 15:52:44 PDT 2016
Sun, Jul 24, 2016  3:02:54 PM
Mon, Jul 25, 2016  9:39:26 PM
