
MEMCPY_FN(__memcpy,
	"x86-64-unrolled",
	"unrolled memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c,
	"x86-64-movsq",
	"movsq-based memcpy() in arch/x86/lib/memcpy_64.S")

MEMCPY_FN(memcpy_c_e,
	"x86-64-movsb",
	"movsb-based memcpy() in arch/x86/lib/memcpy_64.S")
Tue Jul 19 12:42:27 PDT 2016
Fri Jul 22 15:53:59 PDT 2016
Sun, Jul 24, 2016  3:12:34 PM
Mon, Jul 25, 2016  9:50:21 PM
