#ifndef _SPARC64_INTR_QUEUE_H
#define _SPARC64_INTR_QUEUE_H

/* Sun4v interrupt queue registers, accessed via ASI_QUEUE.  */

#define INTRQ_CPU_MONDO_HEAD	  0x3c0 /* CPU mondo head	          */
#define INTRQ_CPU_MONDO_TAIL	  0x3c8 /* CPU mondo tail	          */
#define INTRQ_DEVICE_MONDO_HEAD	  0x3d0 /* Device mondo head	          */
#define INTRQ_DEVICE_MONDO_TAIL	  0x3d8 /* Device mondo tail	          */
#define INTRQ_RESUM_MONDO_HEAD	  0x3e0 /* Resumable error mondo head     */
#define INTRQ_RESUM_MONDO_TAIL	  0x3e8 /* Resumable error mondo tail     */
#define INTRQ_NONRESUM_MONDO_HEAD 0x3f0 /* Non-resumable error mondo head */
#define INTRQ_NONRESUM_MONDO_TAIL 0x3f8 /* Non-resumable error mondo head */

#endif /* !(_SPARC64_INTR_QUEUE_H) */
Tue Jul 19 12:37:25 PDT 2016
Fri Jul 22 15:44:35 PDT 2016
Sun, Jul 24, 2016  2:04:13 PM
Mon, Jul 25, 2016  8:33:30 PM
