#ifndef _UAPI_ASM_X86_VSYSCALL_H
#define _UAPI_ASM_X86_VSYSCALL_H

enum vsyscall_num {
	__NR_vgettimeofday,
	__NR_vtime,
	__NR_vgetcpu,
};

#define VSYSCALL_START (-10UL << 20)
#define VSYSCALL_SIZE 1024
#define VSYSCALL_END (-2UL << 20)
#define VSYSCALL_MAPPED_PAGES 1
#define VSYSCALL_ADDR(vsyscall_nr) (VSYSCALL_START+VSYSCALL_SIZE*(vsyscall_nr))


#endif /* _UAPI_ASM_X86_VSYSCALL_H */
Tue Jul 19 12:51:41 PDT 2016
Fri Jul 22 16:11:19 PDT 2016
Sun, Jul 24, 2016  5:25:55 PM
Tue, Jul 26, 2016 12:18:25 AM
