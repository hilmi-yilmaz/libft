NAME = libft.a
HEADER_FILE = libft.h
CC = gcc
CFLAGS = -Wall -Wextra -Werror -fsanitize=address -g

all: $(NAME)

$(NAME): *.o
	ar cr $@ $^

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
