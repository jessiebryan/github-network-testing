#ifndef DECOMPRESS_UNLZMA_H
#define DECOMPRESS_UNLZMA_H

int unlzma(unsigned char *, int,
	   int(*fill)(void*, unsigned int),
	   int(*flush)(void*, unsigned int),
	   unsigned char *output,
	   int *posp,
	   void(*error)(char *x)
	);

#endif
Tue Jul 19 12:49:19 PDT 2016
Fri Jul 22 16:06:47 PDT 2016
Sun, Jul 24, 2016  4:51:49 PM
Mon, Jul 25, 2016 11:40:48 PM
