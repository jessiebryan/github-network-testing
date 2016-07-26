
#ifndef PERF_LINUX_LINKAGE_H_
#define PERF_LINUX_LINKAGE_H_

/* linkage.h ... for including arch/x86/lib/memcpy_64.S */

#define ENTRY(name)				\
	.globl name;				\
	name:

#define ENDPROC(name)

#endif	/* PERF_LINUX_LINKAGE_H_ */
Tue Jul 19 12:53:21 PDT 2016
Fri Jul 22 16:14:36 PDT 2016
Sun, Jul 24, 2016  5:49:56 PM
Tue, Jul 26, 2016 12:44:52 AM
