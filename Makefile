libft: ft_atoi.o ft_calloc.o
	gcc -o $@ $^

ft_atoi.o: ft_atoi.c
	gcc -Wall -Wextra -Werror -o $@ $<	
