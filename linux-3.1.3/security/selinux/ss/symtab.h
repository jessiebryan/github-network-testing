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


Tue Jul 19 12:35:27 PDT 2016
Fri Jul 22 15:40:44 PDT 2016
Sun, Jul 24, 2016  1:35:54 PM
Mon, Jul 25, 2016  8:00:00 PM
Tue, Jul 26, 2016  2:34:39 PM
