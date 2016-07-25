#ifndef _LINUX_UCS2_STRING_H_
#define _LINUX_UCS2_STRING_H_

#include <linux/types.h>	/* for size_t */
#include <linux/stddef.h>	/* for NULL */

typedef u16 ucs2_char_t;

unsigned long ucs2_strnlen(const ucs2_char_t *s, size_t maxlength);
unsigned long ucs2_strlen(const ucs2_char_t *s);
unsigned long ucs2_strsize(const ucs2_char_t *data, unsigned long maxlength);
int ucs2_strncmp(const ucs2_char_t *a, const ucs2_char_t *b, size_t len);

#endif /* _LINUX_UCS2_STRING_H_ */
Tue Jul 19 12:53:15 PDT 2016
Fri Jul 22 16:14:24 PDT 2016
Sun, Jul 24, 2016  5:48:33 PM
