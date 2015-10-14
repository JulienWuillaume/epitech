##
## Makefile for Makefile in /home/wuilla_j/rendu/Piscine_C_J12/cat
##
## Made by Julien Wuillaume
## Login   <wuilla_j@epitech.net>
##
## Started on  Tue Oct 13 09:47:38 2015 Julien Wuillaume
## Last update Tue Oct 13 09:58:19 2015 Julien Wuillaume
##

NAME =		cat

SRC =		$(NAME).c

LIB =		my

LIB_PATH =	../lib/

CC =		cc

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC) -L$(LIB_PATH) -l$(LIB)

fclean:
	rm $(NAME)

re: fclean all
