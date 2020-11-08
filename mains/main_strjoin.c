#include <stdio.h>

char *ft_strjoin(char const *s1, char const *s2);

int		main(void)
{
	char const *s1 = "hilmi";
	char const *s2 = "yoo";
	char *result;

	result = ft_strjoin(s1, s2);
	printf("Own function: %s\n", result);
	return (0);
}
