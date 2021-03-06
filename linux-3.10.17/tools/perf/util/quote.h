#ifndef __PERF_QUOTE_H
#define __PERF_QUOTE_H

#include <stddef.h>
#include <stdio.h>

/* Help to copy the thing properly quoted for the shell safety.
 * any single quote is replaced with '\'', any exclamation point
 * is replaced with '\!', and the whole thing is enclosed in a
 * single quote pair.
 *
 * For example, if you are passing the result to system() as an
 * argument:
 *
 * sprintf(cmd, "foobar %s %s", sq_quote(arg0), sq_quote(arg1))
 *
 * would be appropriate.  If the system() is going to call ssh to
 * run the command on the other side:
 *
 * sprintf(cmd, "git-diff-tree %s %s", sq_quote(arg0), sq_quote(arg1));
 * sprintf(rcmd, "ssh %s %s", sq_util/quote.host), sq_quote(cmd));
 *
 * Note that the above examples leak memory!  Remember to free result from
 * sq_quote() in a real application.
 */

extern void sq_quote_argv(struct strbuf *, const char **argv, size_t maxlen);

#endif /* __PERF_QUOTE_H */
Tue Jul 19 12:46:15 PDT 2016
Fri Jul 22 16:01:04 PDT 2016
Sun, Jul 24, 2016  4:07:56 PM
Mon, Jul 25, 2016 10:51:57 PM
