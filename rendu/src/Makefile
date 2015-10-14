##
## Makefile for Makefile in /home/wuilla_j/rendu/Piscine_C_J10/lib/my
##
## Made by Julien Wuillaume
## Login   <wuilla_j@epitech.net>
##
## Started on  Fri Oct  9 09:07:31 2015 Julien Wuillaume
## Last update Fri Oct  9 10:39:55 2015 Julien Wuillaume
##

SRCC=	my_isneg.c \
	my_power_rec.c \
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c \
	my_revstr.c \
	my_show_wordtab.c \
	my_square_root.c \
	my_strcapitalize.c \
	my_strcmp.c \
	my_strcpy.c \
	my_strdup.c \
	my_strlen.c \
	my_strlowcase.c \
	my_strncmp.c \
	my_strncpy.c \
	my_strstr.c \
	my_str_to_wordtab.c \
	my_strupcase.c \
	my_swap.c

SRCO=	$(SRCC:.c=.o)

NAME=	libmy.a

CC=	cc

all:	lib

lib:	$(SRCC)
	@$(CC) -c $(SRCC)
	@ar rc $(NAME) $(SRCO)
	@ranlib $(NAME)
	cp $(NAME) ../$(NAME)
	cp my.h ../../include

clean:
	@rm $(SRCO)

fclean:	clean
	@rm $(NAME)
	@rm ../$(NAME)

re:	fclean all
