/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   skip_chr.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/11/28 18:34:44 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/12/14 13:07:40 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	skip_chr(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] == c)
		i++;
	return (i);
}
