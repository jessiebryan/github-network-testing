#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:48:49 PDT 2016
Fri Jul 22 16:05:52 PDT 2016
Sun, Jul 24, 2016  4:44:53 PM
Mon, Jul 25, 2016 11:33:00 PM
