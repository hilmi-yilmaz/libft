#include <stdio.h>
#include <stdlib.h>

char **ft_split(char const *s, char c);

int		main(void)
{
	char *str = "---yoo-i-k-b-hilmi-yilm-yo-";
	char c = '-';
	char **result;

	result = ft_split(str, c);
	

	int i = 0;
	while (i < 8)
	{
		printf("*(result + %d) = %s\n", i, *(result + i));
		i++;
	}

	int j = 0;
	while (j < 8)
	{
		free(result[j]);
		j++;
	}
	free(result);
	return (0);
}
