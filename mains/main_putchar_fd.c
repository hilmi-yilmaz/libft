void	ft_putchar_fd(char c, int fd);

int		main(void)
{
	char c = 'K';
	int fd = 1; //stdout

	ft_putchar_fd(c, fd);
	return (0);
}
