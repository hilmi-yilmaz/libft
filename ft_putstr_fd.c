/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 19:39:38 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/04 19:43:12 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
		write(fd, (s + i), 1);
		i++;
	}
}