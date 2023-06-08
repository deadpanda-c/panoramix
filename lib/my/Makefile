##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## M-x doctor
##

AR	=	ar rc

SRC	=	$(find . -name '*.c')

OBJ	=	$(SRC:.c=.o)

NAME	=	../libmy.a

CFLAGS	=	-I./include -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJ)
	$(AR) $(NAME) $(OBJ)
	cp ./include/my.h ../../include

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean	all
