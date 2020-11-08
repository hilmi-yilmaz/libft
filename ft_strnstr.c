/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:51:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/08 12:00:18 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

static char	*find_little(const char *big, const char *little, size_t len, int n)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	i = 0;
	j = 0;
	len_little = (size_t)n;
	while (i < len && *(big + i) != '\0')
	{
		if (*(little + j) == *(big + i))
		{
			while (i + j < len && *(little + j) != '\0')
			{
				if (*(little + j) == *(big + i + j))
					j++;
				else
					break ;
			}
			if (j == len_little)
				return ((char*)(big + i));
		}
		j = 0;
		i++;
	}
	return (NULL);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	char	*result;

	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char*)big);
	else
	{
		result = find_little(big, little, len, len_little);
		return (result);
	}
}
