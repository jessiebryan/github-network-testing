#ifndef __NX842_H__
#define __NX842_H__

int nx842_get_workmem_size(void);
int nx842_get_workmem_size_aligned(void);
int nx842_compress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);
int nx842_decompress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);

#endif
Tue Jul 19 12:42:20 PDT 2016
Fri Jul 22 15:53:46 PDT 2016
Sun, Jul 24, 2016  3:10:50 PM
Mon, Jul 25, 2016  9:48:23 PM
