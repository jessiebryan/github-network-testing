
MEMCPY_FN(__memcpy,
	"x86-64-unrolled",
	"unrolled memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c,
	"x86-64-movsq",
	"movsq-based memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c_e,
	"x86-64-movsb",
	"movsb-based memcpy() in arch/x86/lib/memcpy_64.S")
Tue Jul 19 12:47:32 PDT 2016
Fri Jul 22 16:03:28 PDT 2016
Sun, Jul 24, 2016  4:26:21 PM
