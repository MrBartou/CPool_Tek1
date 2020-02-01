##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make infinadd
##
NAME	=	infin_add

CC	=	gcc

SRC	= my_putchar.c\
	  my_strlen.c\
	  my_revstr.c\
	  my_putstr.c\
	  addition.c\
	  deduction.c\
	  height.c\
	  my_strcpy.c\
	  main.c\

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)	clean

$(NAME):	$(OBJ)
			$(CC) -o $(NAME) $(OBJ)

clean:
		rm -f *.o *~

fclean:	clean
		rm -f ./$(NAME)

re:	fclean all