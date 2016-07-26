
#ifndef PERF_LINUX_LINKAGE_H_
#define PERF_LINUX_LINKAGE_H_

/* linkage.h ... for including arch/x86/lib/memcpy_64.S */

#define ENTRY(name)				\
	.globl name;				\
	name:

#define ENDPROC(name)

#endif	/* PERF_LINUX_LINKAGE_H_ */
Tue Jul 19 12:43:45 PDT 2016
Fri Jul 22 15:56:20 PDT 2016
Sun, Jul 24, 2016  3:31:01 PM
Mon, Jul 25, 2016 10:10:55 PM
