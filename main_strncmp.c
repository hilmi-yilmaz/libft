#include <stdio.h>
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n);

int		main(void)
{
	char s1[] = "hil";
	char s2[] = "";
	size_t n = 1;
	int c_result;
	int own_result;

	c_result = strncmp(s1, s2, n);
	own_result = ft_strncmp(s1, s2, n);
	printf("C   function: %d\n", c_result);
	printf("Own function: %d\n", own_result);
	return (0);
}	
