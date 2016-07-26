#ifndef LINUX_MM_DEBUG_H
#define LINUX_MM_DEBUG_H 1

#ifdef CONFIG_DEBUG_VM
#define VM_BUG_ON(cond) BUG_ON(cond)
#else
#define VM_BUG_ON(cond) BUILD_BUG_ON_INVALID(cond)
#endif

#ifdef CONFIG_DEBUG_VIRTUAL
#define VIRTUAL_BUG_ON(cond) BUG_ON(cond)
#else
#define VIRTUAL_BUG_ON(cond) do { } while (0)
#endif

#endif
Tue Jul 19 12:42:19 PDT 2016
Fri Jul 22 15:53:46 PDT 2016
Sun, Jul 24, 2016  3:10:45 PM
Mon, Jul 25, 2016  9:48:18 PM
