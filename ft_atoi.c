/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 10:24:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/11/01 11:29:52 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

static char		*skip_spaces(char *nptr, int *sign);
static int		str_to_int(char *str);
static int		pow(int base, int pow);
static int		count_digits(char *str);

int				ft_atoi(const char *nptr)
{
	char	*str;
	int		sign;
	int		result;

	sign = 0;
	str = (char*)nptr;
	str = skip_spaces(str, &sign);
	result = str_to_int(str) * sign;
	return (result);
}

static char		*skip_spaces(char *str, int *sign)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (*(str + i) == ' ')
		i++;
	while (!(*(str + i + j) >= '0' && *(str + i + j) <= '9'))
		j++;
	if (j == 1 && *(str + i) == '-')
		*sign = -1;
	else if (j == 1 && *(str + i) == '+')
		*sign = 1;
	else if (j == 0 && *(str + i) >= '0' && *(str + i) <= '9')
		*sign = 1;
	return (str + i + j);
}

static int		str_to_int(char *str)
{
	int i;
	int digit;
	int result;
	int digits_amount;

	i = 0;
	result = 0;
	digits_amount = count_digits(str);
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		digit = *(str + i) - '0';
		digit = digit * pow(10, digits_amount - 1 - i);
		result = result + digit;
		i++;
	}
	return (result);
}

static int		pow(int base, int pow)
{
	int result;

	result = 1;
	while (pow != 0)
	{
		result = result * base;
		pow--;
	}
	return (result);
}

static int		count_digits(char *str)
{
	int i;

	i = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		i++;
	}
	return (i);
}
