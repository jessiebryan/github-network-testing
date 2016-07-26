#ifndef __NX842_H__
#define __NX842_H__

int nx842_get_workmem_size(void);
int nx842_get_workmem_size_aligned(void);
int nx842_compress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);
int nx842_decompress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);

#endif
Tue Jul 19 12:49:21 PDT 2016
Fri Jul 22 16:06:51 PDT 2016
Sun, Jul 24, 2016  4:52:17 PM
Mon, Jul 25, 2016 11:41:19 PM
