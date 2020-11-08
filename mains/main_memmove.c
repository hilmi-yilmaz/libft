#include <stdio.h>
#include <string.h>
#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int		main(void)
{
	/* DIFFERENCE BETWEEN MEMMOVE AND MEMCPY */
	char str[] = "abcde";  //For C memmove function
//	char str1[] = "abcde"; //For C memcpy  function
	char str2[] = "abcde"; //For Own memmove function

//	printf("C     memcpy: %s\n", memcpy(str1 + 2, str1, 6 * sizeof(char)));
	printf("C    memmove: %s\n", memmove(str + 2, str, 3 * sizeof(char)));
	printf("Own  memmove: %s\n\n", ft_memmove(str2 + 2, str2, 3 * sizeof(char)));
	
	/* SECOND CHECK 

	char dest[] = "abc";
	char dest1[] = "abc";
	const char src[] = "123456";
	size_t len = 3;

	printf("Address of dest : %p\n", dest);
	printf("Address of dest1: %p\n", dest1);

	memmove(dest, src, len);
	ft_memmove(dest1, src, len);

	printf("C    memmove: %s\n", dest);
	printf("Own  memmove: %s\n\n", dest1);
	*/
	/* THIRD CHECK 
	int arr[] = {1, 2, 3};
	int arr1[] = {1, 2, 3};
	const int arr_src[] = {45, 19};
	size_t len1 = 2 * sizeof(int);

	int *result;
	int *my_result;

	result = memmove(arr, arr_src, len1);
	my_result = ft_memmove(arr1, arr_src, len1);

	printf("C    memmove: %d %d %d\n", result[0], result[1], result[2]);
	printf("Own  memmove: %d %d %d\n", my_result[0], my_result[1], my_result[2]);
	*/
	return (0);
}
