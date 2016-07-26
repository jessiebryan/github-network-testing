/*
 *  S390 version
 *    Copyright IBM Corp. 1999
 *    Author(s): Martin Schwidefsky (schwidefsky@de.ibm.com)
 *
 *  Derived from "include/asm-i386/current.h"
 */

#ifndef _S390_CURRENT_H
#define _S390_CURRENT_H

#include <asm/lowcore.h>

struct task_struct;

#define current ((struct task_struct *const)S390_lowcore.current_task)

#endif /* !(_S390_CURRENT_H) */
Tue Jul 19 12:43:58 PDT 2016
Fri Jul 22 15:56:44 PDT 2016
Sun, Jul 24, 2016  3:34:00 PM
Mon, Jul 25, 2016 10:14:14 PM
