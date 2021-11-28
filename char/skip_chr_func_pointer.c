/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   skip_chr_func_pointer.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/18 09:27:49 by hyilmaz       #+#    #+#                 */
/*   Updated: 2021/11/28 18:33:43 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	skip_chr_func_pointer(char *str, int (func)(int))
{
	int	i;

	i = 0;
	while (func(str[i]) != 0)
		i++;
	return (i);
}
