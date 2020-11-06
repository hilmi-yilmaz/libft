#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size);
void	print_c_result(const char *src, size_t size);
void	print_own_result(const char *src, size_t size);

int		main(void)
{
	const char src[] = "lorem";
	size_t size = 15;
	//char dest[] = "yo";
	//char dest1[] = "yo";
	
	/*
	printf("Address src   = %p\n", src);
	printf("Address dest  = %p\n", dest);
	printf("Address dest1 = %p\n", dest1);
	*/
	printf("\nInput values:\n");
	printf("src = %s\n", src);
	printf("size = %lu\n", size);
	//printf("dest = %s\n", dest1);


	print_c_result(src, size);
	print_own_result(src, size);

	/*	
	printf("\nOwn result:\n");
	size_t own_result = ft_strlcat(dest1, src, size);
	printf("Return = %lu\n", own_result);
	printf("Dest = %s\n", dest1);

	printf("\nC result:\n");
	size_t c_result = strlcat(dest, src, size);
	printf("Return = %lu\n", c_result);
	printf("Dest = %s\n", dest);
	*/
	return (0);
}

void	print_c_result(const char *src, size_t size)
{

	char dest[15];
	dest[11] = 'a';
	printf("dst = %s\n", dest);

	
	printf("\nC result:\n");
	size_t c_result = strlcat(dest, src, size);
	printf("Return = %lu\n", c_result);
	printf("Dest = %s\n", dest);
}

void	print_own_result(const char *src, size_t size)
{

	char dest[15];
	dest[11] = 'a';
	printf("\nOwn result:\n");
	size_t own_result = ft_strlcat(dest, src, size);
	printf("Return = %lu\n", own_result);
	printf("Dest = %s\n", dest);
}
