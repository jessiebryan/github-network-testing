#ifndef FS_CEPH_HASH_H
#define FS_CEPH_HASH_H

#define CEPH_STR_HASH_LINUX      0x1  /* linux dcache hash */
#define CEPH_STR_HASH_RJENKINS   0x2  /* robert jenkins' */

extern unsigned ceph_str_hash_linux(const char *s, unsigned len);
extern unsigned ceph_str_hash_rjenkins(const char *s, unsigned len);

extern unsigned ceph_str_hash(int type, const char *s, unsigned len);
extern const char *ceph_str_hash_name(int type);

#endif
Tue Jul 19 12:48:01 PDT 2016
Fri Jul 22 16:04:22 PDT 2016
Sun, Jul 24, 2016  4:33:19 PM
Mon, Jul 25, 2016 11:20:09 PM
