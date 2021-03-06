#ifndef __NX842_H__
#define __NX842_H__

int nx842_get_workmem_size(void);
int nx842_get_workmem_size_aligned(void);
int nx842_compress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);
int nx842_decompress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);

#endif
Tue Jul 19 12:49:59 PDT 2016
Fri Jul 22 16:08:04 PDT 2016
Sun, Jul 24, 2016  5:01:34 PM
Mon, Jul 25, 2016 11:51:35 PM
