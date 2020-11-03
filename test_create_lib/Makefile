NAME = libtest.a
CFLAGS = -Wall -Wextra -Werror
OBJ = add.o sub.o mul.o
HEADER_FILE = libft.h 

all: $(NAME)

$(NAME): $(OBJ)
	ar cr $@ $^

%.o: %.c $(HEADER_FILE)
	gcc $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re


#add.o: add.c
#	gcc $(CFLAGS) -c $<
#
#sub.o: sub.c
#	gcc $(CFLAGS) -c $<
#
#mul.o: mul.c
#	gcc $(CFLAGS) -c $<

