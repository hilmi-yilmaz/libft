#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

void	test_atoi(int expected, int actual, const char *test_case);
void	test_bzero(void *input1, void *input2, size_t n, const char *test_case);

int		main(void)
{
	printf("Testing ft_atoi...\n");
	test_atoi(atoi("0"), ft_atoi("0"), "0");
	test_atoi(atoi("-0"), ft_atoi("-0"), "-0");
	test_atoi(atoi("+0"), ft_atoi("+0"), "+0");
	test_atoi(atoi("-1234"), ft_atoi("-1234"), "-1234");
	test_atoi(atoi("1234"), ft_atoi("1234"), "1234");
	test_atoi(atoi("-1234--999"), ft_atoi("-1234--999"), "-1234--999");
	test_atoi(atoi("01234"), ft_atoi("01234"), "01234");
	test_atoi(atoi("-2147483648"), ft_atoi("-2147483648"), "-2147483648");
	test_atoi(atoi("2147483647"), ft_atoi("2147483647"), "2147483647");
	test_atoi(atoi("+-123456789"), ft_atoi("+-123456789"), "+-123456789");
	test_atoi(atoi("i+1234"), ft_atoi("i+1234"), "i+1234");
	test_atoi(atoi("-2147483648"), ft_atoi("-2147483648"), "-2147483648");
	test_atoi(atoi("2147483647"), ft_atoi("2147483647"), "2147483647");
	test_atoi(atoi("\f\n\r\t\v   -1234"), ft_atoi("\f\n\r\t\v   -1234"), "\\f\\n\\r\\t\\v   -1234");
	test_atoi(atoi("\f\n\r\t\v   -1234aa123"), ft_atoi("\f\n\r\t\v   -1234aa123"), "\\f\\n\\r\\t\\v   -1234aa123");
	test_atoi(atoi("\f\n\r\t\v   - 1234"), ft_atoi("\f\n\r\t\v   - 1234"), "\\f\\n\\r\\t\\v   - 1234");
	test_atoi(atoi("\f\n\r\t\v   - \t1234"), ft_atoi("\f\n\r\t\v   - \t1234"), "\\f\\n\\r\\t\\v   - \\t1234");
	test_atoi(atoi("\f\n\r\t\v   - \t1234 a0"), ft_atoi("\f\n\r\t\v   - \t1234 a0"), "\\f\\n\\r\\t\\v   - \\t1234 a0");
	test_atoi(atoi("\f\n\r\t\v   - \t123\n\v4"), ft_atoi("\f\n\r\t\v   - \t123\n\v4"), "\\f\\n\\r\\t\\v   - \\t123\\n\\v4");
	test_atoi(atoi("\f\n\r\t\v   - \t12-34 a0"), ft_atoi("\f\n\r\t\v   - \t12-34 a0"), "\\f\\n\\r\\t\\v   - \\t12-34 a0");

	printf("\nTesting ft_bzero...\n");
	//char str[] = "hilmiyilmaz";
	//size_t n = 2;
	test_bzero("123", "123", 2, "s = 123, n = 2");
	return (0);
}

void	test_atoi(int expected, int actual, const char *test_case)
{
	printf("Input=%s, ", test_case);
    if (expected == actual)
        printf("Passed\n");
    else
	{
        printf("Failed\n");
	}
}

void	test_bzero(void *input1, void *input2, size_t n, const char *test_case)
{
	printf("Input=%s, ", test_case);
	unsigned char *input1_;
	unsigned char *input2_;

	input1_ = input1;
	input2_ = input2;
	bzero(input1_, n);
	ft_bzero(input2_, n);
    
	size_t i;
	i = 0;
	while (i < n)
	{
		if (!(*(input1_ + i) == *(input2_ + i)))
		{
			printf("Failed\n");
		}
		i++;
	}
	printf("Passed\n");
}
