/*
** mylist.h for mylist in /home/wuilla_j/rendu/Piscine_C_J11/include
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct 12 10:31:28 2015 Julien Wuillaume
** Last update Mon Oct 12 11:10:21 2015 Julien Wuillaume
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	s_list
{
  void		*data;
  struct s_list	*next;
} t_list;

#endif
