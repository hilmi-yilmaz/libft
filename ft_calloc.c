/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 14:39:08 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/14 17:47:39 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (count == 0 || size == 0)
	{
		ptr = (unsigned char*)malloc(sizeof(char) * 1);
		*ptr = '\0';
		return (ptr);
	}
	ptr = (unsigned char*)malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		*(ptr + i) = 0;
		i++;
	}
	return (ptr);
}
