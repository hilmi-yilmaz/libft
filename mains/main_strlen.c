#include <stdio.h>
#include <string.h>

size_t ft_strlen(const char *s);

int		main(void)
{
	const char str[] = "hilmiyi00lmaz";
	size_t c_result;
	size_t own_result;

	c_result = strlen(str);
	own_result = ft_strlen(str);
	printf("C   function: %lu\n", c_result);
	printf("Own function: %lu\n", own_result);
	return (0);
}
