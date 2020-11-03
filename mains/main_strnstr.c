#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		main(void)
{
	char big[] = "hilmi";
	char little[] = "hi";
	size_t len = 1;
	char *c_result;
	char *own_result;

	c_result = strnstr(big, little, len);
	own_result = ft_strnstr(big, little, len);
	printf("C   function: %s\n", c_result);
	printf("Own function: %s\n", own_result);
	return (0);
}

