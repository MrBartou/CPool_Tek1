##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

CC		=	gcc

SRC		=	src/main.c	\
			src/rush1.c	\
			src/rush2.c	\
			src/rush3.c	\
			src/rush4.c	\
			src/rush5.c


OBJ		=	$(SRC:.c=.o)

NAME	=	rush3

CFLAGS  =  -W -Wall -Wextra -pedantic -I./include/

all:		$(NAME)

$(NAME):	$(OBJ)
		make -C ./lib/
		$(CC) -o $(NAME) $(OBJ) -L./lib/ -lmy

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re:		fclean all

test_run:
		make -C ./tests/

sweet: 	all clean
