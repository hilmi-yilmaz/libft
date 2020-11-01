#include <stdio.h>
#include <ctype.h>

int		ft_isalnum(int c);

int		main(void)
{
	int a = 'A';
	int c_result;
	int own_result;

	c_result = isalnum(a);
	own_result = ft_isalnum(a);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);

}
