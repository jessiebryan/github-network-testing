#ifndef __IP_SET_LIST_H
#define __IP_SET_LIST_H

/* List type specific error codes */
enum {
	/* Set name to be added/deleted/tested does not exist. */
	IPSET_ERR_NAME = IPSET_ERR_TYPE_SPECIFIC,
	/* list:set type is not permitted to add */
	IPSET_ERR_LOOP,
	/* Missing reference set */
	IPSET_ERR_BEFORE,
	/* Reference set does not exist */
	IPSET_ERR_NAMEREF,
	/* Set is full */
	IPSET_ERR_LIST_FULL,
	/* Reference set is not added to the set */
	IPSET_ERR_REF_EXIST,
};

#ifdef __KERNEL__

#define IP_SET_LIST_DEFAULT_SIZE	8
#define IP_SET_LIST_MIN_SIZE		4

#endif /* __KERNEL__ */

#endif /* __IP_SET_LIST_H */
Tue Jul 19 12:35:23 PDT 2016
Fri Jul 22 15:40:36 PDT 2016
Sun, Jul 24, 2016  1:34:54 PM
Mon, Jul 25, 2016  7:58:49 PM
Tue, Jul 26, 2016  2:33:33 PM
