#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int		main(void)
{
	const char str[] = "hilmiyilmaz";
	unsigned int start = 8;
	size_t len = 5;
	char *result;

	result = ft_substr(str, start, len);
	printf("Own function: %s\n", result);
	
	free(result);
	return (0);
}
