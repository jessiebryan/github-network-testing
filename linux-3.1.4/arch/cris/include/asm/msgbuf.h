#ifndef _CRIS_MSGBUF_H
#define _CRIS_MSGBUF_H

/* verbatim copy of asm-i386 version */

/* 
 * The msqid64_ds structure for CRIS architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 *
 * Pad space is left for:
 * - 64-bit time_t to solve y2038 problem
 * - 2 miscellaneous 32-bit values
 */

struct msqid64_ds {
	struct ipc64_perm msg_perm;
	__kernel_time_t msg_stime;	/* last msgsnd time */
	unsigned long	__unused1;
	__kernel_time_t msg_rtime;	/* last msgrcv time */
	unsigned long	__unused2;
	__kernel_time_t msg_ctime;	/* last change time */
	unsigned long	__unused3;
	unsigned long  msg_cbytes;	/* current number of bytes on queue */
	unsigned long  msg_qnum;	/* number of messages in queue */
	unsigned long  msg_qbytes;	/* max number of bytes on queue */
	__kernel_pid_t msg_lspid;	/* pid of last msgsnd */
	__kernel_pid_t msg_lrpid;	/* last receive pid */
	unsigned long  __unused4;
	unsigned long  __unused5;
};

#endif /* _CRIS_MSGBUF_H */
Tue Jul 19 12:35:35 PDT 2016
Fri Jul 22 15:41:00 PDT 2016
Sun, Jul 24, 2016  1:37:41 PM
Mon, Jul 25, 2016  8:02:06 PM
Tue, Jul 26, 2016  2:36:38 PM
