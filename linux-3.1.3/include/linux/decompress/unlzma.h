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
Tue Jul 19 12:35:21 PDT 2016
Fri Jul 22 15:40:33 PDT 2016
Sun, Jul 24, 2016  1:34:30 PM
Mon, Jul 25, 2016  7:58:20 PM
Tue, Jul 26, 2016  2:33:07 PM
