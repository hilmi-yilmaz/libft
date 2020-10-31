/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 10:24:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/10/31 10:54:04 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

static char *ft_check_sign(const char *nptr);

int		ft_atoi(const char *nptr)
{
	char *char_nb;
	int nb = 1;

	char_nb = ft_check_sign(nptr);
	printf("char_nb = %s\n", char_nb);
	return (nb);
}

static char *ft_check_sign(const char *nptr)
{
	if (!(*nptr >= '0' && *nptr <= '9'))
	{	
		if (*nptr != '-' && *nptr != '+')
		{
			return (0);
		}
		else
			return 
	}
	else
		return ((char*)nptr + 1);
}
