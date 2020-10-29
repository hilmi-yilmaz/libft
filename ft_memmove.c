/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 19:05:02 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/10/27 20:34:21 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;
	unsigned char		buff[len];

	i = 0;
	ptr_src = src;
	ptr_dst = dst;
	while (i < len)
	{
		*(buff + i) = *(ptr_src + i);
		i++;
	}
	i = 0;
	while (i < len)
	{
		*(ptr_dst + i) = *(buff + i);
		printf("*(ptr_dst + %lu) = %d\n", i, *(ptr_dst + i));
		i++;
	}
	return ((void*)dst);
}
