/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:44:19 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/03 17:57:50 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static int	char_in_set(char c, char const *set);
static char *trim(char const *s1, char const *set, int *trim_l, int *trim_r);
size_t		ft_strlen(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		trim_l;
	int		trim_r;
	char	*trimmed_str;

	i = 0;
	trim_l = 0;
	trim_r = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	else
	{
		trimmed_str = trim(s1, set, &trim_l, &trim_r);
		return (trimmed_str);
	}
}

static int	char_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (c == *(set + i))
			return (1);
		i++;
	}
	return (0);
}

static char	*trim(char const *s1, char const *set, int *trim_l, int *trim_r)
{
	size_t	i;
	size_t	len_s1;

	i = 0;
	len_s1 = ft_strlen(s1);
	while (i < len_s1)
	{
		if (char_in_set(*(s1 + i), set) == 1)
			*trim_l = *trim_l + 1;
		else
			break ;
		i++;
	}
	i = 0;
	while (i < len_s1)
	{
		if (char_in_set(*(s1 + len_s1 - i - 1), set) == 1)
			*trim_r = *trim_r + 1;
		else
			break ;
		i++;
	}
	return (ft_substr(s1, *trim_l, len_s1 - *trim_r - *trim_l));
}
