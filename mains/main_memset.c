#include <stddef.h>
#include <stdio.h>
#include <string.h>

void *ft_memset(void *s, int c, size_t n);

int		main(void)
{
	char str[] = "HilmiYilmaz";
	char str1[] = "HilmiYilmaz";
	int c = 'o';
	size_t n = 7;
	
	//printf("Address of str before: %p\n", str);
	//printf("Address of str before: %p\n", str1);

	ft_memset(str, c, n);
	printf("Own function: %s\n", str);	
	//printf("Address of str after : %p\n", str);

	memset(str1, c, n);
	printf("C   function: %s\n", str1);
	//printf("Address of str1 after : %p\n", str1);

	int arr[] = {256, 258};
	int arr1[] = {256, 258};

	ft_memset(arr, 1, 2 * sizeof(int));
	//printf("Own function: %d %d\n", arr[0], arr[1]);

	memset(arr1, 1, 2 * sizeof(int));
	//printf("C   function: %d %d\n", arr1[0], arr1[1]);

	//printf("sizeof(char) = %lu bytes\n", sizeof(char));
	//printf("sizeof(unsigned char) = %lu bytes\n", sizeof(unsigned char));
	//printf("sizeof(int) = %lu bytes\n", sizeof(int));
	//printf("sizeof(long) = %lu bytes\n", sizeof(long));


	/* CHECK OUTPUT WITH NULL AS INPUT */
	char *str2;
	str2 = NULL;

	memset(str2, c, n);
	printf("NULL as input: %s\n", str2);

	return (0);
}
