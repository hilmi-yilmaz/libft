#include <stdio.h>
#include <ctype.h>

int		ft_toupper(int c);

int		main(void)
{
	int a = 't';
	int c_result;
	int own_result;

	c_result = toupper(a);
	own_result = ft_toupper(a);
	printf("C   function: %c\n", c_result);
	printf("Own function: %c\n", own_result);
	return (0);
}
