#ifndef _UAPI_NFNL_ACCT_H_
#define _UAPI_NFNL_ACCT_H_

#ifndef NFACCT_NAME_MAX
#define NFACCT_NAME_MAX		32
#endif

enum nfnl_acct_msg_types {
	NFNL_MSG_ACCT_NEW,
	NFNL_MSG_ACCT_GET,
	NFNL_MSG_ACCT_GET_CTRZERO,
	NFNL_MSG_ACCT_DEL,
	NFNL_MSG_ACCT_MAX
};

enum nfnl_acct_type {
	NFACCT_UNSPEC,
	NFACCT_NAME,
	NFACCT_PKTS,
	NFACCT_BYTES,
	NFACCT_USE,
	__NFACCT_MAX
};
#define NFACCT_MAX (__NFACCT_MAX - 1)


#endif /* _UAPI_NFNL_ACCT_H_ */
Tue Jul 19 12:50:42 PDT 2016
Fri Jul 22 16:09:25 PDT 2016
Sun, Jul 24, 2016  5:11:56 PM
Tue, Jul 26, 2016 12:02:59 AM
