/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 15:02:45 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/14 17:44:20 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	size_t			len;
	unsigned char	*s1_unsig;
	unsigned char	*s2_unsig;

	i = 0;
	s1_unsig = (unsigned char *)s1;
	s2_unsig = (unsigned char *)s2;
	if (n != 0)
	{
		if (ft_strlen(s1) == 0 || ft_strlen(s2) == 0)
			len = 1;
		else
			len = n;
	}
	else
		len = 0;
	while (i < len)
	{
		if (*(s1_unsig + i) != *(s2_unsig + i))
			return (*(s1_unsig + i) - *(s2_unsig + i));
		i++;
	}
	return (0);
}
