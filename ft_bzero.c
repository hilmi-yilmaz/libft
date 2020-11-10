/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/29 22:53:23 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/10 12:35:17 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr_s;

	i = 0;
	ptr_s = s;
	while (i < n)
	{
		*(ptr_s + i) = '\0';
		i++;
	}
}
