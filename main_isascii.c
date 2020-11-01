#include <stdio.h>
#include <ctype.h>

int		ft_isascii(int c);

int		main(void)
{
	int a = ';';
	int c_result;
	int own_result;

	c_result = isascii(a);
	own_result = ft_isascii(a);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);

}
