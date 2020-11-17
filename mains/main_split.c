#include <stdio.h>
#include <stdlib.h>
//#include "../libft.h"

char **ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

int		main(void)
{
	char *str = "hilmi";
	char c = '-';
	char **result;
	int splits = 2;

	result = ft_split(str, c);

	/* Print result */
	int i = 0;
	while (i < splits)
	{
		printf("*(result + %d) = %s\n", i, *(result + i));
		i++;
	}

	/* Free allocated memmory */
	int j = 0;
	while (j < splits)
	{
		free(result[j]);
		j++;
	}
	free(result);

	return (0);
}
