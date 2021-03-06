/*
 * JFFS2 -- Journalling Flash File System, Version 2.
 *
 * Copyright © 2006  NEC Corporation
 *
 * Created by KaiGai Kohei <kaigai@ak.jp.nec.com>
 *
 * For licensing information, see the file 'LICENCE' in this directory.
 *
 */

struct jffs2_acl_entry {
	jint16_t	e_tag;
	jint16_t	e_perm;
	jint32_t	e_id;
};

struct jffs2_acl_entry_short {
	jint16_t	e_tag;
	jint16_t	e_perm;
};

struct jffs2_acl_header {
	jint32_t	a_version;
};

#ifdef CONFIG_JFFS2_FS_POSIX_ACL

struct posix_acl *jffs2_get_acl(struct inode *inode, int type);
extern int jffs2_acl_chmod(struct inode *);
extern int jffs2_init_acl_pre(struct inode *, struct inode *, umode_t *);
extern int jffs2_init_acl_post(struct inode *);

extern const struct xattr_handler jffs2_acl_access_xattr_handler;
extern const struct xattr_handler jffs2_acl_default_xattr_handler;

#else

#define jffs2_get_acl				(NULL)
#define jffs2_acl_chmod(inode)			(0)
#define jffs2_init_acl_pre(dir_i,inode,mode)	(0)
#define jffs2_init_acl_post(inode)		(0)

#endif	/* CONFIG_JFFS2_FS_POSIX_ACL */
Tue Jul 19 12:53:49 PDT 2016
Fri Jul 22 16:15:29 PDT 2016
Sun, Jul 24, 2016  5:56:31 PM
Tue, Jul 26, 2016 12:52:11 AM
