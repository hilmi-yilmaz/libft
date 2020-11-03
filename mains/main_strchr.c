#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c);

int		main(void)
{
	const char str[] = "hilmiyilmaz";
	int c = '\0';
	char *c_result;
	char *own_result;

	c_result = strchr(str, c);
	own_result = ft_strchr(str, c);
	printf("C   function: %s\n", c_result);
	printf("Own function: %s\n", own_result);
	return (0);
}
