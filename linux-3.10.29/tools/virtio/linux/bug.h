#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:54:00 PDT 2016
Fri Jul 22 16:15:52 PDT 2016
Sun, Jul 24, 2016  5:59:17 PM
