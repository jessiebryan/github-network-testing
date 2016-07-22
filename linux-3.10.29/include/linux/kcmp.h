#ifndef _LINUX_KCMP_H
#define _LINUX_KCMP_H

/* Comparison type */
enum kcmp_type {
	KCMP_FILE,
	KCMP_VM,
	KCMP_FILES,
	KCMP_FS,
	KCMP_SIGHAND,
	KCMP_IO,
	KCMP_SYSVSEM,

	KCMP_TYPES,
};

#endif /* _LINUX_KCMP_H */
Tue Jul 19 12:53:52 PDT 2016
Fri Jul 22 16:15:35 PDT 2016
