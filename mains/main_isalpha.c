#include <stdio.h>
#include <ctype.h>

int		ft_isalpha(int c);

int		main(void)
{
	int a = ';';
	int c_result;
	int own_result;

	c_result = isalpha(a);
	own_result = ft_isalpha(a);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);

}

