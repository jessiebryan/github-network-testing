/*
 * A symbol table (symtab) maintains associations between symbol
 * strings and datum values.  The type of the datum values
 * is arbitrary.  The symbol table type is implemented
 * using the hash table type (hashtab).
 *
 * Author : Stephen Smalley, <sds@epoch.ncsc.mil>
 */
#ifndef _SS_SYMTAB_H_
#define _SS_SYMTAB_H_

#include "hashtab.h"

struct symtab {
	struct hashtab *table;	/* hash table (keyed on a string) */
	u32 nprim;		/* number of primary names in table */
};

int symtab_init(struct symtab *s, unsigned int size);

#endif	/* _SS_SYMTAB_H_ */


Tue Jul 19 12:42:26 PDT 2016
Fri Jul 22 15:53:57 PDT 2016
Sun, Jul 24, 2016  3:12:18 PM
Mon, Jul 25, 2016  9:50:03 PM
