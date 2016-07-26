#ifdef __KERNEL__
# ifdef CONFIG_SUPERH32
#  include "unistd_32.h"
# else
#  include "unistd_64.h"
# endif
#else
# ifdef __SH5__
#  include "unistd_64.h"
# else
#  include "unistd_32.h"
# endif
#endif
Tue Jul 19 12:35:42 PDT 2016
Fri Jul 22 15:41:14 PDT 2016
Sun, Jul 24, 2016  1:39:21 PM
Mon, Jul 25, 2016  8:04:05 PM
Tue, Jul 26, 2016  2:38:30 PM
