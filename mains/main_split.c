#include <stdio.h>

int **ft_split(char const *s, char c);

int		main(void)
{
	char *str = "-hooo----i-l-m-i---ooo---";
	char c = '-';

	ft_split(str, c);
	//printf("Amount of delimiters = %d\n", count);
	return (0);
}
