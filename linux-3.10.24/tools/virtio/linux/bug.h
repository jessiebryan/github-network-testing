#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:50:45 PDT 2016
Fri Jul 22 16:09:31 PDT 2016
Sun, Jul 24, 2016  5:12:43 PM
Tue, Jul 26, 2016 12:03:50 AM
