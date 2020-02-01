##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Task01 Day10
##

SRC	=	   *.c		\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)
	rm *.o

clean:
	rm -f $(OBJ)

re:
	rm libmy.a