#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1);

int		main(void)
{
	char *c_result;
	char *own_result;
	char string[] = "yoo";

	c_result = strdup(string);
	own_result = ft_strdup(string);
	printf("C   function:  %s\n", c_result);
	printf("Own function:  %s\n", own_result);
	free(c_result);
	free(own_result);
	return (0);
}
