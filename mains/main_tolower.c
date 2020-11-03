#include <stdio.h>
#include <ctype.h>

int		ft_tolower(int c);

int		main(void)
{
	int a = '-';
	int c_result;
	int own_result;

	c_result = tolower(a);
	own_result = ft_tolower(a);
	printf("C   function: %c\n", c_result);
	printf("Own function: %c\n", own_result);
	return (0);
}
