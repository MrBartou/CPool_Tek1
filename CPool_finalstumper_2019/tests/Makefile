##
## EPITECH PROJECT, 2018
## Makefile
## File description:
## Task01 Day10
##

SRC	=	../src/main.c	/


TEST 	= 	*.c	/

OBJ	=	$(SRC:.c=.o)

NAME	=	unit_test

all:	$(NAME)

$(NAME):
	gcc -o $(NAME) test_my_fonctions.c -L./../lib/ -lmy --coverage -lcriterion    

clean:
	rm -f $(OBJ)

re:
	rm $(NAME)
	rm *.gcno
	rm *.gcda
