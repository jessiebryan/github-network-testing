#ifndef _UAPI_NF_CONNTRACK_FTP_H
#define _UAPI_NF_CONNTRACK_FTP_H
/* FTP tracking. */

/* This enum is exposed to userspace */
enum nf_ct_ftp_type {
	/* PORT command from client */
	NF_CT_FTP_PORT,
	/* PASV response from server */
	NF_CT_FTP_PASV,
	/* EPRT command from client */
	NF_CT_FTP_EPRT,
	/* EPSV response from server */
	NF_CT_FTP_EPSV,
};


#endif /* _UAPI_NF_CONNTRACK_FTP_H */
Tue Jul 19 12:46:51 PDT 2016
Fri Jul 22 16:02:11 PDT 2016
Sun, Jul 24, 2016  4:16:24 PM
Mon, Jul 25, 2016 11:01:24 PM
