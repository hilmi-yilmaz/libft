/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <marvin@codam.nl>                    +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 13:01:02 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/07 17:00:13 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*sub;

	i = 0;
	sub = (char*)malloc(len + 1);
	if (sub == NULL || s == NULL)
		return (NULL);
	else
	{
		while (i < len && *(s + start + i) != '\0')
		{
			*(sub + i) = *(s + start + i);
			i++;
		}
		*(sub + i) = '\0';
		return (sub);
	}
}
