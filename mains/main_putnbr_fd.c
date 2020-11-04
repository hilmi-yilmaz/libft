void	ft_putnbr_fd(int n, int fd);

int		main(void)
{
	int n = -2147483648;
	int fd = 1;

	ft_putnbr_fd(n, fd);
	return (0);
}
