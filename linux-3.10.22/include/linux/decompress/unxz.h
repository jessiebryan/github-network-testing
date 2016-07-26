/*
 * Wrapper for decompressing XZ-compressed kernel, initramfs, and initrd
 *
 * Author: Lasse Collin <lasse.collin@tukaani.org>
 *
 * This file has been put into the public domain.
 * You can do whatever you want with this file.
 */

#ifndef DECOMPRESS_UNXZ_H
#define DECOMPRESS_UNXZ_H

int unxz(unsigned char *in, int in_size,
	 int (*fill)(void *dest, unsigned int size),
	 int (*flush)(void *src, unsigned int size),
	 unsigned char *out, int *in_used,
	 void (*error)(char *x));

#endif
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:47 PDT 2016
Sun, Jul 24, 2016  4:51:49 PM
Mon, Jul 25, 2016 11:40:48 PM
