/*
** my_list_size.c for my_list_size in /home/wuilla_j/rendu/Piscine_C_J11/ex_02
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct 12 11:43:43 2015 Julien Wuillaume
** Last update Mon Oct 12 12:58:43 2015 Julien Wuillaume
*/

#include <stdlib.h>
#include "../include/mylist.h"

int		my_list_size(t_list *begin)
{
  t_list	*tmp;
  int		i;

  i = 0;
  tmp = malloc(sizeof(tmp));
  tmp = begin;
  while (tmp != NULL)
    {
      i = i + 1;
      tmp = tmp->next;
    }
  return (i);
}
