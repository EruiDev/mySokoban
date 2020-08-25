##
## EPITECH PROJECT, 2019
## makefile
## File description:
## makefile
##

SRC	=	src/put_functions.c \
		src/sokoban.c \
		src/usage.c \
		src/errors.c \
		src/get_file_content.c \
		src/middler.c \
		src/mover.c \

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -g -o $(NAME) $(OBJ) -lncurses

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
