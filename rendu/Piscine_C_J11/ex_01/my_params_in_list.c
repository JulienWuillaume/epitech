/*
** my_params_in_list.c for my_params_in_list in /home/wuilla_j/rendu/Piscine_C_J11/ex_01
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct 12 10:36:31 2015 Julien Wuillaume
** Last update Mon Oct 12 14:29:32 2015 Julien Wuillaume
*/

#include <stdlib.h>
#include "../include/mylist.h"

t_list		*my_params_in_list(int ac, char **av)
{
  t_list	*list;
  int		i;

  list = malloc(sizeof(t_list));
  if (list == NULL)
    return (NULL);
  list = NULL;
  i = 0;
  while (i < ac)
    {
      my_put_in_list(&list, av[i]);
      i = i + 1;
    }
  return (list);
}

int		my_put_in_list(t_list **list, void *data)
{
  t_list	*elem;

  elem = malloc(sizeof(t_list));
  if (elem == NULL)
    return (1);
  elem->data = data;
  elem->next = *list;
  *list = elem;
  return (0);

}

void		my_show_list(t_list *list)
{
  t_list	*tmp;

  tmp = malloc(sizeof(t_list));
  tmp = list;
  while (tmp != NULL)
    {
      my_putstr(tmp->data);
      my_putchar('\n');
      tmp = tmp->next;
    }
}

int		main(int argc, char **argv)
{
  t_list	*arg_list;

  arg_list = my_params_in_list(argc, argv);
  my_show_list(arg_list);
  return (0);
}
