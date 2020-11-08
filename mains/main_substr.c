#include <stdio.h>
#include <stdlib.h>

char *ft_substr(char const *s, unsigned int start, size_t len);

int		main(void)
{
	const char str[] = "hilmiyilmaz";
	unsigned int start = 40;
	size_t len = 20;
	char *result;

	result = ft_substr(str, start, len);
	printf("Own function: %s\n", result);
	
	free(result);
	return (0);
}

/*Tests (s, start, len)
 * "hilmiyilmaz", 8, 10
 * "codam", 20, 1 (return empty string)
 * "codam", 3, 0
 */
