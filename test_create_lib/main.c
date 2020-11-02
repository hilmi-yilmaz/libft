#include "libtest.h"
#include <stdio.h>

int		main(void)
{
	int a;
	int b;

	a = 6;
	b = 2;

	printf("%d + %d = %d\n", a, b, add(a, b));
	printf("%d - %d = %d\n", a, b, sub(a, b));
	printf("%d * %d = %d\n", a, b, mul(a, b));

	return (0);
}
