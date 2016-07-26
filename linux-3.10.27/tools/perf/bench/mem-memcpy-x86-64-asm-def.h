
MEMCPY_FN(__memcpy,
	"x86-64-unrolled",
	"unrolled memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c,
	"x86-64-movsq",
	"movsq-based memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c_e,
	"x86-64-movsb",
	"movsb-based memcpy() in arch/x86/lib/memcpy_64.S")
Tue Jul 19 12:52:42 PDT 2016
Fri Jul 22 16:13:20 PDT 2016
Sun, Jul 24, 2016  5:40:35 PM
Tue, Jul 26, 2016 12:34:35 AM
