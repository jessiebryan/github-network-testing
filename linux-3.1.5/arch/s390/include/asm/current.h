/*
 *  include/asm-s390/current.h
 *
 *  S390 version
 *    Copyright (C) 1999 IBM Deutschland Entwicklung GmbH, IBM Corporation
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 *
 *  Derived from "include/asm-i386/current.h"
 */

#ifndef _S390_CURRENT_H
#define _S390_CURRENT_H

#ifdef __KERNEL__
#include <asm/lowcore.h>

struct task_struct;

#define current ((struct task_struct *const)S390_lowcore.current_task)

#endif

#endif /* !(_S390_CURRENT_H) */
Tue Jul 19 12:36:15 PDT 2016
Fri Jul 22 15:42:18 PDT 2016
Sun, Jul 24, 2016  1:47:22 PM
Mon, Jul 25, 2016  8:13:33 PM
