#include <asm/unistd.h>
#include <sys/mman.h>
#include <signal.h>
#include <as-layout.h>
#include <stub-data.h>

#ifdef __i386__
#include "stub_32.h"
#else
#include "stub_64.h"
#endif

extern void stub_segv_handler(int, siginfo_t *, void *);
extern void stub_clone_handler(void);
Tue Jul 19 12:49:05 PDT 2016
Fri Jul 22 16:06:24 PDT 2016
Sun, Jul 24, 2016  4:48:47 PM
Mon, Jul 25, 2016 11:37:23 PM
