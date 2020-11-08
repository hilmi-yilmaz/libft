/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 23:51:25 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/07 19:02:42 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_src;

	i = 0;
	len_src = ft_strlen(src);
	if (size == 0)
		return (len_src);
	else
	{
		while ((i < size - 1) && *(src + i) != '\0')
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
		return (len_src);
	}
}
