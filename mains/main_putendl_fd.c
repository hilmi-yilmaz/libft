void	ft_putendl_fd(char *s, int fd);

int		main(void)
{
	char str[] = "hilmiyilmazhqhahah";
	int fd = 1;

	ft_putendl_fd(str, fd);
	return (0);
}
