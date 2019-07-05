##
## EPITECH PROJECT, 2018
## PSU_my_sokoban_2018
## File description:
## Makefile
##

SRC	=	src/my_sokoban.c	\
		src/str_compare.c	\
		src/error_gestion.c	\
		src/make_map.c	\
		src/libmy.c	\
		src/check_pos_player.c	\
		src/display_map.c	\
		src/change_pos_player.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	my_sokoban

CFLAGS = -g3

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -lncurses -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	re all clean fclean