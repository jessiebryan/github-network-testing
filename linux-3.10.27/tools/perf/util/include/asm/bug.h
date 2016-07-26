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
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:36 PM
Tue, Jul 26, 2016 12:34:37 AM
