/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 19:05:02 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/08 11:25:10 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	size_t				j;
	const unsigned char	*ptr_src;
	unsigned char		*ptr_dst;
	unsigned char		buff[len];

	i = 0;
	j = 0;
	ptr_src = src;
	ptr_dst = dst;
	while (i < len && *(ptr_dst + i) != '\0')
	{
		*(buff + i) = *(ptr_src + i);
		i++;
	}
	while (j < i)
	{
		*(ptr_dst + j) = *(buff + j);
		j++;
	}
	return ((void*)dst);
}
