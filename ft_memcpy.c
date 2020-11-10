/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 15:51:09 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/10 15:50:23 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	const unsigned char *ptr_src;
	unsigned char		*ptr_dest;

	i = 0;
	ptr_src = src;
	ptr_dest = dest;
	while (i < n)
	{
		*(ptr_dest + i) = *(ptr_src + i);
		i++;
	}
	return (dest);
}
