int	skip_chr(char *str, int(func)(int))
{
	int	i;

	i = 0;
	while (func(str[i]) != 0)
		i++;
	return (i);
}
