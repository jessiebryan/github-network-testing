#include <linux/init.h>
#include <linux/posix_acl.h>

#define REISERFS_ACL_VERSION	0x0001

typedef struct {
	__le16 e_tag;
	__le16 e_perm;
	__le32 e_id;
} reiserfs_acl_entry;

typedef struct {
	__le16 e_tag;
	__le16 e_perm;
} reiserfs_acl_entry_short;

typedef struct {
	__le32 a_version;
} reiserfs_acl_header;

static inline size_t reiserfs_acl_size(int count)
{
	if (count <= 4) {
		return sizeof(reiserfs_acl_header) +
		    count * sizeof(reiserfs_acl_entry_short);
	} else {
		return sizeof(reiserfs_acl_header) +
		    4 * sizeof(reiserfs_acl_entry_short) +
		    (count - 4) * sizeof(reiserfs_acl_entry);
	}
}

static inline int reiserfs_acl_count(size_t size)
{
	ssize_t s;
	size -= sizeof(reiserfs_acl_header);
	s = size - 4 * sizeof(reiserfs_acl_entry_short);
	if (s < 0) {
		if (size % sizeof(reiserfs_acl_entry_short))
			return -1;
		return size / sizeof(reiserfs_acl_entry_short);
	} else {
		if (s % sizeof(reiserfs_acl_entry))
			return -1;
		return s / sizeof(reiserfs_acl_entry) + 4;
	}
}

#ifdef CONFIG_REISERFS_FS_POSIX_ACL
struct posix_acl *reiserfs_get_acl(struct inode *inode, int type);
int reiserfs_acl_chmod(struct inode *inode);
int reiserfs_inherit_default_acl(struct reiserfs_transaction_handle *th,
				 struct inode *dir, struct dentry *dentry,
				 struct inode *inode);
int reiserfs_cache_default_acl(struct inode *dir);
extern const struct xattr_handler reiserfs_posix_acl_default_handler;
extern const struct xattr_handler reiserfs_posix_acl_access_handler;

#else

#define reiserfs_cache_default_acl(inode) 0
#define reiserfs_get_acl NULL

static inline int reiserfs_acl_chmod(struct inode *inode)
{
	return 0;
}

static inline int
reiserfs_inherit_default_acl(struct reiserfs_transaction_handle *th,
			     const struct inode *dir, struct dentry *dentry,
			     struct inode *inode)
{
	return 0;
}
#endif
Tue Jul 19 12:53:10 PDT 2016
Fri Jul 22 16:14:15 PDT 2016
Sun, Jul 24, 2016  5:47:20 PM
Tue, Jul 26, 2016 12:42:00 AM
