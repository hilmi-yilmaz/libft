#include <stdio.h>
#include <ctype.h>

int		ft_isprint(int c);

int		main(void)
{
	int a = ';';
	int c_result;
	int own_result;

	c_result = isprint(a);
	own_result = ft_isprint(a);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);

}
