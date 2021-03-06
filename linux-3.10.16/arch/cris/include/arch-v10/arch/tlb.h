#ifndef _CRIS_ARCH_TLB_H
#define _CRIS_ARCH_TLB_H

/* The TLB can host up to 64 different mm contexts at the same time.
 * The last page_id is never running - it is used as an invalid page_id
 * so we can make TLB entries that will never match. 
 */
#define NUM_TLB_ENTRIES 64
#define NUM_PAGEID 64
#define INVALID_PAGEID 63
#define NO_CONTEXT -1

#endif
Tue Jul 19 12:45:07 PDT 2016
Fri Jul 22 15:58:53 PDT 2016
Sun, Jul 24, 2016  3:50:43 PM
Mon, Jul 25, 2016 10:32:50 PM
