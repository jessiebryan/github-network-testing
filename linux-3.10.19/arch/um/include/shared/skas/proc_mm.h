/*
 * Copyright (C) 2002 Jeff Dike (jdike@karaya.com)
 * Licensed under the GPL
 */

#ifndef __SKAS_PROC_MM_H
#define __SKAS_PROC_MM_H

#define MM_MMAP 54
#define MM_MUNMAP 55
#define MM_MPROTECT 56
#define MM_COPY_SEGMENTS 57

struct mm_mmap {
	unsigned long addr;
	unsigned long len;
	unsigned long prot;
	unsigned long flags;
	unsigned long fd;
	unsigned long offset;
};

struct mm_munmap {
	unsigned long addr;
	unsigned long len;
};

struct mm_mprotect {
	unsigned long addr;
	unsigned long len;
	unsigned int prot;
};

struct proc_mm_op {
	int op;
	union {
		struct mm_mmap mmap;
		struct mm_munmap munmap;
	        struct mm_mprotect mprotect;
		int copy_segments;
	} u;
};

#endif
Tue Jul 19 12:47:09 PDT 2016
Fri Jul 22 16:02:45 PDT 2016
Sun, Jul 24, 2016  4:20:44 PM
Mon, Jul 25, 2016 11:06:13 PM
