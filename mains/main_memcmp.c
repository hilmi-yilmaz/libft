#include <stdio.h>
#include <stddef.h>
#include <string.h>

int ft_memcmp(const void *s1, const void *s2, size_t n);

int		main(void)
{

	/* TEST 1*/
	const char str[] = "hil";
	const char str1[] = "hI";
	size_t n = 2;

	int result;
	int own_result;
	result = memcmp(str, str1, n);
	own_result = ft_memcmp(str, str1, n);
	printf("C   function: %d\n", result);
	printf("Own function: %d\n", own_result);

	/* TEST 2 */
	const int arr[] = {1, 2, 3};
	const int arr1[] = {1, 0, 3};
	size_t n1 = 0;

	int result1;
	int own_result1;
	result1 = memcmp(arr, arr1, n1);
	own_result1 = ft_memcmp(arr, arr1, n1);
	printf("C   function: %d\n", result1);
	printf("Own function: %d\n", own_result1);
	return (0);

}
