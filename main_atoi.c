#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(const char *nptr);

int		main(void)
{
	char str[] = " -671a12";
	int c_result;
	int own_result;

	c_result = atoi(str);
	own_result = ft_atoi(str);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);
}
