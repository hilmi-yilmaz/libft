/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 18:00:56 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/04 13:23:51 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set);
int		count_delims(char const *s, char c);
char	*chr_to_str(char c);
int		len_of_split(char *str, char c);

int		**ft_split(char const *s, char c)
{	
	int delims;
	int len_split;
	char *after_trim;
	char *str_delim;

	str_delim = chr_to_str(c);
	printf("Input string: %s\n", s);
	after_trim = ft_strtrim(s, str_delim);
	printf("after trimming delimiter: %s\n", after_trim);
	delims = count_delims(after_trim, c);
	printf("delims = %d\n", delims);
	len_split = len_of_split(after_trim, c);
	printf("len_split = %d\n", len_split);
	if (s == NULL)
		return (NULL);

	char **2d_array;
	char *temp;
	int i;
	int j;

	i = 0;
	j = 0;
	**2d_array = (char**)malloc(sizeof(char*) * delims + 1);

	while (i < delims)
	{
		temp = *(2d_array + i);
		len_split = len_of_split(after_trim, c);
		
	}
	
	free(str_delim);
	free(after_trim);

	
	return (0);
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

int		len_of_split(char *str, char c)
{
	int i;
	
	i = 0;
	while (*(str + i) != c)
		i++;
	return (i);
}
