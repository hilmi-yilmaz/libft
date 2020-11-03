#include <stdio.h>
#include <stddef.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int		main(void)
{
	const char src[] = "abcde";
	char dest[] = "aaaaaa";
	char dest1[] = "aaaaaa";
	size_t n = 3;

	ft_memcpy(dest, src, n);
	printf("Own function: %s\n", dest);

	memcpy(dest, src, n);
	printf("C   function: %s\n", dest1);

	int arr[] = {1, 2, 3};
	int arr1[] = {1, 2, 3};
	const int k[] = {1024, 5, 4};

	ft_memcpy(arr, k, 3 * sizeof(int));
	printf("Own function: %d %d %d\n", arr[0], arr[1], arr[2]);

	memcpy(arr1, k, 3 * sizeof(int));
	printf("C   function: %d %d %d\n", arr1[0], arr1[1], arr[2]);

	/* Problem with memory overlap example */
	char str[10] = "abcde";
	printf("%s\n", memcpy(str + 2, str, 5 * sizeof(char)));

	return (0);
}
