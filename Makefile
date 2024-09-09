##
## Makefile
## File description:
## oh bordel
##

SRC	=	meme.c 	\
		my_putchar.c 	\
		my_atoi.c 		\
		test.c 			\
		my_put_nbr_str.c \
		my_strcat.c   \
		my_strcmp.c \
		my_strcpy.c \
		my_strlen.c \
		my_strdup.c \
		test2.c	\

NAME	= bsq

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

