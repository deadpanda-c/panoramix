##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## hey. real programmers use vim
##

CC	=	gcc

SRC	=	$(shell find src -name "*.c" -type f)

OBJ	=	$(SRC:.c=.o)

NAME	=	panoramix

CFLAGS	=	-Wall -Wextra -Werror -I./include

LDFLAGS	=	-L./lib -lmy -lpthread

all:	$(NAME)

$(NAME):	$(OBJ)
	make -C ./lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS) $(CFLAGS)

clean:
	make clean -C ./lib/my
	rm -f $(OBJ)

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all

