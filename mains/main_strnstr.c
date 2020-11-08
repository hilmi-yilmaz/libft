#include <stdio.h>
#include <string.h>
//#include <bsd/string.h>
#include <stddef.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int		main(void)
{
	char big[] = "lorem ipsum dolor sit amet";
	char little[] = "ipsumm";
	size_t len = 30;
	char *c_result;
	char *own_result;

	c_result = strnstr(big, little, len);
	own_result = ft_strnstr(big, little, len);
	printf("C   function: %s\n", c_result);
	printf("Own function: %s\n", own_result);
	return (0);
}

/* Tests to perform, (big, little, len)
 * hilmi yilmaz hallo, "hilmi ", 4
 * hilmi yilmaz hallo, "hilmi ", 6
 * we are codam students, "codamm", 12
 * we are codamm students, "codamm", 13
 * utrecht is the city, "", 10
 * hello guys, "gu", 0
 * stack overflow, "flo", 50

