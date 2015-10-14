##
## Makefile for makefile in /home/wuilla_j/github/epitech
##
## Made by Julien Wuillaume
## Login   <wuilla_j@epitech.net>
##
## Started on  Wed Oct 14 11:34:48 2015 Julien Wuillaume
## Last update Wed Oct 14 11:39:38 2015 Julien Wuillaume
##

NAME =		my

SRC =		$(NAME).c

OBJ =

CFLAGS =	-o

CC =		cc

LIB =		my

LIB_PATH =	../lib/

all:		$(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(NAME) $(SRC) $(LIB_PATH) $(LIB)

clean:
		rm $(OBJ)

fclean:
		rm $(NAME)

re:		fclean all
