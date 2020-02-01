##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##
SRC =	main.c \
		infinite.c \
		print_error.c \
		my_putstr.c \
		my_putchar.c \
		my_strlen.c \

OBJ = $(SRC:.c=.o)

NAME = cat

all: $(NAME)

$(NAME): $(OBJ)
		 gcc -o $(NAME) $(OBJ)

clean:
	    rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all