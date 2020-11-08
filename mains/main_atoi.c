#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_atoi(const char *nptr);

int		main(void)
{
	//char str[] = "";
	int c_result;
	int own_result;

	c_result = atoi("");
	own_result = ft_atoi("");
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);
}
