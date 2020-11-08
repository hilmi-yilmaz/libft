#include <stdio.h>
#include <stdlib.h>

char *ft_strtrim(char const *s1, char const *set);

int		main(void)
{
	char *str = "abahhhbab";;
	char const *set = "ab";

	char *result;
	result = ft_strtrim(str, set);
	printf("result = %s\n", result);
	free(result);
	return (0);
}
