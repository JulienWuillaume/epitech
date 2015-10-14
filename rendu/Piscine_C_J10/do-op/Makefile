##
## Makefile for Makefile in /home/wuilla_j/rendu/Piscine_C_J10/do-op
##
## Made by Julien Wuillaume
## Login   <wuilla_j@epitech.net>
##
## Started on  Fri Oct  9 11:10:32 2015 Julien Wuillaume
## Last update Mon Oct 12 16:29:19 2015 Julien Wuillaume
##

NAME		= do-op

CC		= cc

SRC		= $(NAME).c \
		operations.c

LIB		= my

LIB_PATH	= ../lib/

all: $(NAME)

$(NAME):
		cc -o $(NAME) $(SRC) -L$(LIB_PATH) -l$(LIB)

clean:
		rm $(NAME)

re:		clean $(NAME)
