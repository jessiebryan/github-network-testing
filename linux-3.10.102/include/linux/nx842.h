#ifndef __NX842_H__
#define __NX842_H__

int nx842_get_workmem_size(void);
int nx842_get_workmem_size_aligned(void);
int nx842_compress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);
int nx842_decompress(const unsigned char *in, unsigned int in_len,
		unsigned char *out, unsigned int *out_len, void *wrkmem);

#endif
Tue Jul 19 12:41:31 PDT 2016
Fri Jul 22 15:52:33 PDT 2016
Sun, Jul 24, 2016  3:01:37 PM
Mon, Jul 25, 2016  9:38:00 PM
