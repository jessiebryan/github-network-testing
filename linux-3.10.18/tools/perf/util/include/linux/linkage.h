
#ifndef PERF_LINUX_LINKAGE_H_
#define PERF_LINUX_LINKAGE_H_

/* linkage.h ... for including arch/x86/lib/memcpy_64.S */

#define ENTRY(name)				\
	.globl name;				\
	name:

#define ENDPROC(name)

#endif	/* PERF_LINUX_LINKAGE_H_ */
Tue Jul 19 12:46:54 PDT 2016
Fri Jul 22 16:02:17 PDT 2016
Sun, Jul 24, 2016  4:17:08 PM
Mon, Jul 25, 2016 11:02:12 PM
