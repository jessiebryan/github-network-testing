#ifndef _ASM_POWERPC_MSGBUF_H
#define _ASM_POWERPC_MSGBUF_H

/*
 * The msqid64_ds structure for the PowerPC architecture.
 * Note extra padding because this structure is passed back and forth
 * between kernel and user space.
 */

struct msqid64_ds {
	struct ipc64_perm msg_perm;
#ifndef __powerpc64__
	unsigned int	__unused1;
#endif
	__kernel_time_t msg_stime;	/* last msgsnd time */
#ifndef __powerpc64__
	unsigned int	__unused2;
#endif
	__kernel_time_t msg_rtime;	/* last msgrcv time */
#ifndef __powerpc64__
	unsigned int	__unused3;
#endif
	__kernel_time_t msg_ctime;	/* last change time */
	unsigned long  msg_cbytes;	/* current number of bytes on queue */
	unsigned long  msg_qnum;	/* number of messages in queue */
	unsigned long  msg_qbytes;	/* max number of bytes on queue */
	__kernel_pid_t msg_lspid;	/* pid of last msgsnd */
	__kernel_pid_t msg_lrpid;	/* last receive pid */
	unsigned long  __unused4;
	unsigned long  __unused5;
};

#endif	/* _ASM_POWERPC_MSGBUF_H */
Tue Jul 19 12:47:06 PDT 2016
Fri Jul 22 16:02:39 PDT 2016
Sun, Jul 24, 2016  4:20:01 PM
Mon, Jul 25, 2016 11:05:25 PM
