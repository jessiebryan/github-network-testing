#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:43:07 PDT 2016
Fri Jul 22 15:55:10 PDT 2016
Sun, Jul 24, 2016  3:21:50 PM
Mon, Jul 25, 2016 10:00:42 PM
