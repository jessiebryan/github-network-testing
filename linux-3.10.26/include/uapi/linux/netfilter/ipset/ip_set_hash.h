#ifndef _UAPI__IP_SET_HASH_H
#define _UAPI__IP_SET_HASH_H

/* Hash type specific error codes */
enum {
	/* Hash is full */
	IPSET_ERR_HASH_FULL = IPSET_ERR_TYPE_SPECIFIC,
	/* Null-valued element */
	IPSET_ERR_HASH_ELEM,
	/* Invalid protocol */
	IPSET_ERR_INVALID_PROTO,
	/* Protocol missing but must be specified */
	IPSET_ERR_MISSING_PROTO,
	/* Range not supported */
	IPSET_ERR_HASH_RANGE_UNSUPPORTED,
	/* Invalid range */
	IPSET_ERR_HASH_RANGE,
};


#endif /* _UAPI__IP_SET_HASH_H */
Tue Jul 19 12:52:00 PDT 2016
Fri Jul 22 16:11:58 PDT 2016
Sun, Jul 24, 2016  5:30:34 PM
Tue, Jul 26, 2016 12:23:33 AM
