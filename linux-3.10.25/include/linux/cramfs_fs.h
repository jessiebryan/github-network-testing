#ifndef __CRAMFS_H
#define __CRAMFS_H

#include <uapi/linux/cramfs_fs.h>

/* Uncompression interfaces to the underlying zlib */
int cramfs_uncompress_block(void *dst, int dstlen, void *src, int srclen);
int cramfs_uncompress_init(void);
void cramfs_uncompress_exit(void);
#endif
Tue Jul 19 12:51:15 PDT 2016
Fri Jul 22 16:10:29 PDT 2016
Sun, Jul 24, 2016  5:19:43 PM
Tue, Jul 26, 2016 12:11:35 AM
