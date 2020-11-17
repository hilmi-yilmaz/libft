/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 18:00:56 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/15 16:25:51 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static char	*chr_to_str(char c)
{
	char *str;

	str = (char*)malloc(2);
	if (str == NULL)
		return (NULL);
	str[0] = c;
	str[1] = '\0';
	return (str);
}

static int	skip_delims(char *str, char c)
{
	int i;

	i = 0;
	while (*(str + i) == c)
		i++;
	return (i);
}

static int	count_delims(char const *s, char c)
{
	int		i;
	int		delim;
	char	*trimmed_s;
	char	*str_delim;

	i = 0;
	delim = 0;
	str_delim = chr_to_str(c);
	trimmed_s = ft_strtrim(s, str_delim);
	if (trimmed_s == NULL)
		return (0);
	while (*(trimmed_s + i) != '\0')
	{
		if (*(trimmed_s + i) == c)
		{
			while (*(trimmed_s + i) == c)
				i++;
			delim++;
			i--;
		}
		i++;
	}
	free(trimmed_s);
	free(str_delim);
	return (delim);
}

static char	**split(char **ndarray, const char *s, char c, int delims)
{
	int		i;
	char	*ptr;
	int		len;
	int		start;

	i = 0;
	ptr = (char*)s;
	start = 0;
	len = 0;
	while (i < delims + 1)
	{
		start = len + skip_delims(ptr + len, c);
		ptr = ptr + start;
		len = 0;
		while (*(ptr + len) != c && *(ptr + len) != '\0')
			len++;
		*(ndarray + i) = ft_substr(ptr, 0, len);
		i++;
	}
	*(ndarray + i) = NULL;
	return (ndarray);
}

char		**ft_split(char const *s, char c)
{
	int		delims;
	char	**ndarray;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (*(s + i) == c)
		i++;
	if (i == ft_strlen(s))
	{
		ndarray = (char**)malloc(sizeof(char*) * 1);
		if (ndarray == NULL)
			return (NULL);
		*ndarray = NULL;
		return (ndarray);
	}
	delims = count_delims(s, c);
	ndarray = (char**)malloc(sizeof(char*) * (delims + 1 + 1));
	if (ndarray == NULL)
		return (NULL);
	ndarray = split(ndarray, s, c, delims);
	return (ndarray);
}
