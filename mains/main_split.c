#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

char **ft_split(char const *s, char c);

int		main(void)
{
	char *str = "------";
	char c = '-';
	char **result;

	result = ft_split(str, c);

	/* Print result */ 
	int i = 0;
	while (i < 1)
	{
		printf("*(result + %d) = %s\n", i, *(result + i));
		i++;
	}

	/* Free allocated memmory */
	int j = 0;
	while (j < 1)
	{
		free(result[j]);
		j++;
	}
	free(result);

	return (0);
}
