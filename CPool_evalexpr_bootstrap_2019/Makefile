##
## EPITECH PROJECT, 2019
## makefile
## File description
## makefile
##

SRC = main.c \
	  number.c \
	  summands.c \
	  my_str_to_word_array.c \
	  my_putstr.c \


OBJ = $(SRC:.c=.o)

NAME = eval_expr

all: $(NAME) clean

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all