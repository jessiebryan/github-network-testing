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
Tue Jul 19 12:40:11 PDT 2016
Fri Jul 22 15:49:55 PDT 2016
Sun, Jul 24, 2016  2:42:43 PM
Mon, Jul 25, 2016  9:16:36 PM
