/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 19:44:09 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/14 18:49:59 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int i;

	i = 0;
	if (s == NULL)
		return ;
	while (*(s + i) != '\0')
	{
		write(fd, (s + i), 1);
		i++;
	}
	write(fd, "\n", 1);
}
