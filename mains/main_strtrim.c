#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set);

int		main(void)
{
	char *str = NULL;
	char const *set = "hilmi";

	char *result;
	result = ft_strtrim(str, set);
	printf("result = %s\n", result);
	return (0);
}
