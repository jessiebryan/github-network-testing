#ifndef __CRAMFS_H
#define __CRAMFS_H

#include <uapi/linux/cramfs_fs.h>

/* Uncompression interfaces to the underlying zlib */
int cramfs_uncompress_block(void *dst, int dstlen, void *src, int srclen);
int cramfs_uncompress_init(void);
void cramfs_uncompress_exit(void);
#endif
Tue Jul 19 12:43:35 PDT 2016
Fri Jul 22 15:56:04 PDT 2016
