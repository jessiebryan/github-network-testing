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
Tue Jul 19 12:49:44 PDT 2016
Fri Jul 22 16:07:36 PDT 2016
Sun, Jul 24, 2016  4:58:01 PM
