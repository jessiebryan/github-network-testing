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
Tue Jul 19 12:51:15 PDT 2016
Fri Jul 22 16:10:29 PDT 2016
Sun, Jul 24, 2016  5:19:44 PM
Tue, Jul 26, 2016 12:11:36 AM
