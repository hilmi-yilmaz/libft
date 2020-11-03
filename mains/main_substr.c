#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int		main(void)
{
	const char str[] = "hilmiyilmaz";
	const char *str1 = NULL;
	unsigned int start = 5;
	size_t len = 5;
	char *result;
	char *result1;

	result = ft_substr(str, start, len);
	printf("Own function: %s\n", result);
	result1 = ft_substr(str1, start, len);
	printf("Own function: %s\n", result1);

	return (0);
}
