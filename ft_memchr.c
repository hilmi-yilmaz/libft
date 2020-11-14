/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:37:08 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/14 17:36:34 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char *ptr_s;
	unsigned char		c_typecasted;

	i = 0;
	ptr_s = s;
	c_typecasted = (unsigned char)c;
	while (i < n)
	{
		if (*(ptr_s + i) == c_typecasted)
		{
			return ((void *)ptr_s + i);
		}
		i++;
	}
	return (NULL);
}
