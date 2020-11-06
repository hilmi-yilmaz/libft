/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 18:00:56 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/06 19:27:00 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
int		count_delims(char const *s, char c);
char	*chr_to_str(char c);
int		skip_delims(char *str, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

char		**ft_split(char const *s, char c)
{	
	int delims;
	char *after_trim;
	char *str_delim;

	str_delim = chr_to_str(c);
	printf("Input string: %s\n", s);
	after_trim = ft_strtrim(s, str_delim);
	printf("after trimming delimiter: %s\n", after_trim);
	delims = count_delims(after_trim, c);
	printf("delims = %d\n", delims);
	if (s == NULL)
		return (NULL);
	
	char **ndarray = (char **)malloc(sizeof(char *) * (delims + 1 + 1));

	if (ndarray == NULL)
		return (NULL);

	int i;
	int len;
	int start;
	char *ptr;

	i = 0;
	len = 0;
	ptr = after_trim;
	while (i < delims + 1) //Loop over 2d array
	{
		printf("while loop %d\n", i);
		printf("After_trim = %s\n", ptr);
		while (*(ptr + len) != c && *(ptr + len) != '\0')
		{
			printf("*(after_trim + %d) = %c\n", len, *(ptr + len)); 
			len++;
		}
		printf("len = %d\n", len);
		*(ndarray + i) = ft_substr(ptr, 0, len);
		printf("*(ndarray + %d) = %s\n", i, *(ndarray + i));
		start = len + skip_delims(ptr + len, c);
		ptr = ptr + start;
		printf("%s\n", ptr);
		printf("start = %d\n", start);
		len = 0;
		i++;
	}
	*(ndarray + i) = NULL;
	free(str_delim);
	free(after_trim);
	return (ndarray);
}

int count_delims(char const *s, char c)
{
	int i;
	int delim;

	i = 0;
	delim = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			while (*(s + i) == c)
				i++;
			delim++;
			i--;
		}
		i++;
	}
	
	return (delim);
}

char	*chr_to_str(char c)
{
	char *str;

	str = (char*)malloc(2);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

int		skip_delims(char *str, char c)
{
	int i;
	
	i = 0;
	while (*(str + i) == c)
		i++;
	return (i);
}
