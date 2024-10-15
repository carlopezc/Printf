CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = printflibft.a

SRC = ft_printf.c ft_print_types.c ft_print_types2.c ft_isalpha.c

AR = ar rcs
LIB = printf.h
OBJ = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c $(LIB) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
