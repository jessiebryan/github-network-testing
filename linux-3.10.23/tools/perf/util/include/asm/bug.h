#ifndef _PERF_ASM_GENERIC_BUG_H
#define _PERF_ASM_GENERIC_BUG_H

#define __WARN_printf(arg...)	do { fprintf(stderr, arg); } while (0)

#define WARN(condition, format...) ({		\
	int __ret_warn_on = !!(condition);	\
	if (unlikely(__ret_warn_on))		\
		__WARN_printf(format);		\
	unlikely(__ret_warn_on);		\
})

#define WARN_ONCE(condition, format...)	({	\
	static int __warned;			\
	int __ret_warn_once = !!(condition);	\
						\
	if (unlikely(__ret_warn_once))		\
		if (WARN(!__warned, format)) 	\
			__warned = 1;		\
	unlikely(__ret_warn_once);		\
})
#endif
Tue Jul 19 12:50:06 PDT 2016
Fri Jul 22 16:08:18 PDT 2016
Sun, Jul 24, 2016  5:03:25 PM
Mon, Jul 25, 2016 11:53:31 PM
