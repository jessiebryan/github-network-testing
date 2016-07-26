#ifndef __NX842_H__
#define __NX842_H__

int nx842_get_workmem_size(void);
int nx842_get_workmem_size_aligned(void);
int nx842_compress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);
int nx842_decompress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);

#endif
Tue Jul 19 12:50:38 PDT 2016
Fri Jul 22 16:09:17 PDT 2016
Sun, Jul 24, 2016  5:10:54 PM
Tue, Jul 26, 2016 12:01:50 AM
