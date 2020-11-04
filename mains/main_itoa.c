#include <stdio.h>
#include <stdlib.h>

char	*ft_itoa(int n);

int		main(void)
{
	int n = -2147483648;
	char *n_str;

	printf("Input : %d\n", n); 
	n_str = ft_itoa(n);
	printf("Output: %s\n", n_str);
	free(n_str);
	return (0);

}
