#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);

int		main(void)
{
	char *str = "ababhilbbaayab";
	char const *set = "abc";

	char *result;
	result = ft_strtrim(str, set);
	printf("result = %s\n", result);
	return (0);
}
