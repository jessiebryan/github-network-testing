#ifndef _UAPI__IP_SET_LIST_H
#define _UAPI__IP_SET_LIST_H

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


#endif /* _UAPI__IP_SET_LIST_H */
Tue Jul 19 12:41:35 PDT 2016
Fri Jul 22 15:52:42 PDT 2016
Sun, Jul 24, 2016  3:02:39 PM
Mon, Jul 25, 2016  9:39:09 PM
