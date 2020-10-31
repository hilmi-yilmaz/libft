/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: hyilmaz <hyilmaz@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 10:24:30 by hyilmaz       #+#    #+#                 */
/*   Updated: 2020/10/31 19:59:11 by hyilmaz       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

//static int count_digits(char *str);

static char	*skip_spaces(char *nptr);
static int 	sign(char **str, int *min, int *plus);
//static int	str_to_int(char *str);
//static int	pow(int base, int pow);

int		ft_atoi(const char *nptr)
{
	char *str;
	int nb_sign;
	int min = 0;
	int plus = 0;

	str = (char*)nptr;
	printf("Input string         :%s\n", str);
	str = skip_spaces(str);
	printf("After skipping spaces:%s\n", str);
	nb_sign = sign(&str, &min, &plus);
	printf("min = %d\n", min);
	printf("After sign           :%s\n", str);
	printf("sign = %d\n", nb_sign);	
	return (0);	
}

static char *skip_spaces(char *str)
{
	int i;
	
	i = 0;
	while (*(str + i) == ' ')
	{
		i++;
	}
	return (str + i);
}

static int sign(char **str, int *min, int *plus)
{
	int i;

	i = 0;
	printf("str + i = %c\n", **(str + i));
	while (!(**(str + i) >= '0' && **(str + i) <= '9'))
	{
		printf("i = %d while loop\n", i);
		if (**(str + i) == '-')
			*min = *min + 1;
		else if (**(str + i) == '+')
			*plus = *plus + 1;
		i++;
	}
	printf("i = %d\n", i);
	if (i > 1)
		return (0);
	else if (i == 0)
		return (1);
	else
	{
		str = str + 1;
		printf("str = %s\n", *str);
		if (*plus == 1)
			return (1);
		else
			return (-1);
	}
}

/*
static int	str_to_int(char *str)
{
	int i;
	int digit;
	int result;
	int digits_amount;

	i = 0;
	result = 0;
	digits_amount = count_digits(str);
	printf("Amount of digits: %d\n", digits_amount);
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		digit = *(str + i) - '0';
		digit = digit * pow(10, digits_amount - 1 - i);
		result = result + digit;
		i++;
	}
	return (result);
}

static int	pow(int base, int pow)
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

static int count_digits(char *str)
{
	int i;

	i = 0;
	while (*(str + i) >= '0' && *(str + i) <= '9')
	{
		i++;
	}
	return (i);
}*/
