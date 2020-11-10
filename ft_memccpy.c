/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:27:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/10 15:48:14 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*ptr_dest;
	const unsigned char	*ptr_src;

	i = 0;
	ptr_dest = dest;
	ptr_src = src;
	while (i < n)
	{
		*(ptr_dest + i) = *(ptr_src + i);
		if (*(ptr_src + i) == c)
		{
			return ((void*)ptr_dest + i + 1);
		}
		i++;
	}
	return (NULL);
}
