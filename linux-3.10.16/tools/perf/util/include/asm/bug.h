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
Tue Jul 19 12:45:39 PDT 2016
Fri Jul 22 15:59:54 PDT 2016
Sun, Jul 24, 2016  3:58:42 PM
Mon, Jul 25, 2016 10:41:41 PM
