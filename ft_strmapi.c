/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 17:03:24 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/04 18:50:53 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(const char *s);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len_s;
	size_t	i;
	char	*mapped_str;

	len_s = ft_strlen(s);
	i = 0;
	mapped_str = (char*)malloc(len_s + 1);
	if (mapped_str == NULL)
		return (NULL);
	while (i < len_s)
	{
		*(mapped_str + i) = (*f)(32, *(s + i));
		i++;
	}
	*(mapped_str + i) = '\0';
	return (mapped_str);
}
