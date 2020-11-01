#include <stdio.h>
#include <string.h>

char *ft_strrchr(const char *s, int c);

int		main(void)
{
	const char str[] = "hilmiyilmaz";
	int c = 'x';
	char *c_result;
	char *own_result;

	c_result = strrchr(str, c);
	own_result = ft_strrchr(str, c);
	printf("C   function: %s\n", c_result);
	printf("Own function: %s\n", own_result);
	return (0);
}
