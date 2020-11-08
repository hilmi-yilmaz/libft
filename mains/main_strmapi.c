#include <stdio.h>
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	map_func(unsigned int i, char c);
char	map_func_1(unsigned int i, char c);

int		main(void)
{

	char str[] = "ABC";
	char *result;
	
	result = ft_strmapi(str, map_func_1);
	printf("result = %s\n", result);
	free(result);
	return (0);
}

char	map_func(unsigned int i, char c)
{
	return (c + i);
}


char	map_func_1(unsigned int i, char c)
{
	return (c - i);
}
