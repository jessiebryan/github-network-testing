#ifndef FS_CEPH_HASH_H
#define FS_CEPH_HASH_H

#define CEPH_STR_HASH_LINUX      0x1  /* linux dcache hash */
#define CEPH_STR_HASH_RJENKINS   0x2  /* robert jenkins' */

extern unsigned ceph_str_hash_linux(const char *s, unsigned len);
extern unsigned ceph_str_hash_rjenkins(const char *s, unsigned len);

extern unsigned ceph_str_hash(int type, const char *s, unsigned len);
extern const char *ceph_str_hash_name(int type);

#endif
Tue Jul 19 12:35:55 PDT 2016
Fri Jul 22 15:41:40 PDT 2016
Sun, Jul 24, 2016  1:42:41 PM
Mon, Jul 25, 2016  8:08:00 PM
Tue, Jul 26, 2016  2:42:10 PM
