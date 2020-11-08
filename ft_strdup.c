/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 15:16:24 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/07 19:01:25 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len_s1;
	char	*copy;
	size_t	i;

	len_s1 = ft_strlen(s1) + 1;
	copy = (char*)malloc(len_s1 * sizeof(char));
	i = 0;
	if (copy == NULL)
		return (NULL);
	else
	{
		while (i < len_s1)
		{
			*(copy + i) = *(s1 + i);
			i++;
		}
		return (copy);
	}
}
