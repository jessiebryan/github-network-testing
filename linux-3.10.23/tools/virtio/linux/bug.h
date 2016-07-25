#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:50:06 PDT 2016
Fri Jul 22 16:08:18 PDT 2016
Sun, Jul 24, 2016  5:03:27 PM
