#include <stdio.h>
#include <string.h>
#include <stddef.h>

void *ft_memccpy(void *dest, const void *src, int c, size_t n);

int		main(void)
{
	const char src[] = "hilmiyilmaz";
	char dest[] = "123456789";
	const char src1[] = "hilmiyilmaz";
	char dest1[] = "123456789";
	int c = 'm';
	size_t n = 10;

	char *result;
	char *own_result;
	result = memccpy(dest, src, c, n);
	own_result = ft_memccpy(dest1, src1, c, n);
	printf("C   function returns: %s\n", result);
	printf("Own function returns: %s\n\n", own_result);
	printf("C   function dest: %s\n", dest);
	printf("Own function dest: %s\n", dest1);
	return (0);

}
