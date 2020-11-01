#include <stdio.h>
#include <string.h>

void	ft_bzero(void *s, size_t n);

int		main(void)
{
	/* TEST ORIGINAL FUNCTION */
	printf("-----TEST 1-----\n");

	char str[] = "hilmiyilmaz";
	size_t n = 9;
	printf("str before: %s\n", str);
	bzero(str, n);
	printf("str after : %s\n", str);
	printf("str + %lu : %s\n", n, str + n);

	/* TEST OWN FUNCTION AGAINT ORIGINAL */
	printf("\n-----TEST 2-----\n");

	char str1[] = "hilmiyilmaz";
	char str2[] = "hilmiyilmaz";
	printf("str1 before: %s\n", str1);
	bzero(str1, n);
	ft_bzero(str2, n);
	printf("C   function: %s\n", str1 + n);
	printf("Own function: %s\n", str2 + n);

	/* TEST WITH INTEGER ARRAY */
	printf("\n-----TEST3-----\n");
	int arr[] = {1, 2, 3};
	int arr1[] = {1, 2, 3};
	
	bzero(arr, n);
	ft_bzero(arr1, n);
	printf("C   function: %d %d %d\n", arr[0], arr[1], arr[2]);
	printf("Own function: %d %d %d\n", arr1[0], arr1[1], arr1[2]);

	return (0);
}
