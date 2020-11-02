NAME = libtest.a
CFLAGS = -Wall -Wextra -Werror
OBJ = add.o sub.o mul.o

all: $(NAME)

$(NAME): $(OBJ)
	ar cr $@ $^

%.o: %.c
	gcc $(CFLAGS) -c $^

#add.o: add.c
#	gcc $(CFLAGS) -c $<
#
#sub.o: sub.c
#	gcc $(CFLAGS) -c $<
#
#mul.o: mul.c
#	gcc $(CFLAGS) -c $<

clean:
	rm $(OBJ) $(NAME)
