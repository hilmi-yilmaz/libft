#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>

size_t ft_strlcat(char *dst, const char *src, size_t size);

int		main(void)
{
	//char dest[5] = "yo";
	char dest1[4];
	const char src[] = "hilmi";
	size_t size = 2;
	size_t c_result;
	//size_t own_result;
	
	//own_result = ft_strlcat(dest, src, size);
	c_result = strlcat(dest1, src, size);
	//printf("Own function return value: %lu\n", own_result);
	printf("C   function return value: %lu\n\n", c_result);
	//printf("Own function dest: %s\n", dest);
	printf("C   function dest: %s\n", dest1);
	
	return (0);
}
