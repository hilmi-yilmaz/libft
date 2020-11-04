void	ft_putstr_fd(char *s, int fd);

int		main(void)
{
	char str[] = "hilmiyilmazhqhahah";
	int fd = 1;

	ft_putstr_fd(str, fd);
	return (0);
}
