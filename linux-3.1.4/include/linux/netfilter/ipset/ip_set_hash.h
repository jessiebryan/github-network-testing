#ifndef __IP_SET_HASH_H
#define __IP_SET_HASH_H

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

#ifdef __KERNEL__

#define IPSET_DEFAULT_HASHSIZE		1024
#define IPSET_MIMINAL_HASHSIZE		64
#define IPSET_DEFAULT_MAXELEM		65536
#define IPSET_DEFAULT_PROBES		4
#define IPSET_DEFAULT_RESIZE		100

#endif /* __KERNEL__ */

#endif /* __IP_SET_HASH_H */
Tue Jul 19 12:35:57 PDT 2016
Fri Jul 22 15:41:44 PDT 2016
Sun, Jul 24, 2016  1:43:09 PM
Mon, Jul 25, 2016  8:08:33 PM
Tue, Jul 26, 2016  2:42:40 PM
