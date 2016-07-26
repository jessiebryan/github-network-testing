#ifndef ERR_H
#define ERR_H
#define MAX_ERRNO	4095

#define IS_ERR_VALUE(x) unlikely((x) >= (unsigned long)-MAX_ERRNO)

static inline void * __must_check ERR_PTR(long error)
{
	return (void *) error;
}

static inline long __must_check PTR_ERR(const void *ptr)
{
	return (long) ptr;
}

static inline long __must_check IS_ERR(const void *ptr)
{
	return IS_ERR_VALUE((unsigned long)ptr);
}

static inline long __must_check IS_ERR_OR_NULL(const void *ptr)
{
	return !ptr || IS_ERR_VALUE((unsigned long)ptr);
}
#endif /* ERR_H */
Tue Jul 19 12:51:25 PDT 2016
Fri Jul 22 16:10:47 PDT 2016
Sun, Jul 24, 2016  5:22:02 PM
Tue, Jul 26, 2016 12:14:08 AM
