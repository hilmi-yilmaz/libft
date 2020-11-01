#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n);

int		main(void)
{
	const char str[] = "hilmAyilmazaysegul";
	int c = 'h';
	size_t n = 0;

	printf("c as char = %c\n", c);
	printf("c as int = %d\n", c);
	printf("C   function: %s\n", memchr(str, c, n));
	printf("Own function: %s\n", ft_memchr(str, c, n));
	return (0);
}
