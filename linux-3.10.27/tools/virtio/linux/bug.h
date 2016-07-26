#ifndef BUG_H
#define BUG_H

#define BUG_ON(__BUG_ON_cond) assert(!(__BUG_ON_cond))

#define BUILD_BUG_ON(x)

#define BUG() abort()

#endif /* BUG_H */
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:39 PM
Tue, Jul 26, 2016 12:34:40 AM
