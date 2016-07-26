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
Tue Jul 19 12:48:39 PDT 2016
Fri Jul 22 16:05:35 PDT 2016
Sun, Jul 24, 2016  4:42:36 PM
Mon, Jul 25, 2016 11:30:28 PM
