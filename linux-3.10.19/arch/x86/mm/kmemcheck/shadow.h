#ifndef ARCH__X86__MM__KMEMCHECK__SHADOW_H
#define ARCH__X86__MM__KMEMCHECK__SHADOW_H

enum kmemcheck_shadow {
	KMEMCHECK_SHADOW_UNALLOCATED,
	KMEMCHECK_SHADOW_UNINITIALIZED,
	KMEMCHECK_SHADOW_INITIALIZED,
	KMEMCHECK_SHADOW_FREED,
};

void *kmemcheck_shadow_lookup(unsigned long address);

enum kmemcheck_shadow kmemcheck_shadow_test(void *shadow, unsigned int size);
enum kmemcheck_shadow kmemcheck_shadow_test_all(void *shadow,
						unsigned int size);
void kmemcheck_shadow_set(void *shadow, unsigned int size);

#endif
Tue Jul 19 12:47:10 PDT 2016
Fri Jul 22 16:02:47 PDT 2016
Sun, Jul 24, 2016  4:21:02 PM
Mon, Jul 25, 2016 11:06:33 PM
