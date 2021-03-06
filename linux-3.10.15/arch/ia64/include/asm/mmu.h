#ifndef __MMU_H
#define __MMU_H

/*
 * Type for a context number.  We declare it volatile to ensure proper
 * ordering when it's accessed outside of spinlock'd critical sections
 * (e.g., as done in activate_mm() and init_new_context()).
 */
typedef volatile unsigned long mm_context_t;

typedef unsigned long nv_mm_context_t;

#endif
Tue Jul 19 12:44:30 PDT 2016
Fri Jul 22 15:57:46 PDT 2016
Sun, Jul 24, 2016  3:41:54 PM
Mon, Jul 25, 2016 10:23:00 PM
