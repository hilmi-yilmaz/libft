/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:51:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/07 19:03:34 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;
	size_t len_little;

	i = 0;
	j = 0;
	len_little = ft_strlen(little);
	if (len_little == 0)
		return ((char*)big);
	while (i < len && *(big + i) != '\0')
	{
		if (*(little + j) == *(big + i))
		{
			while (i + j < len && *(little + j) != '\0')
			{
				if (*(little + j) == *(big + i + j))
					j++;
			}
			if (j == len_little)
				return ((char*)(big + i));
		}
		i++;
	}
	return (NULL);
}
