/*
** my_param_to_tab.c for my_param_to_tab in /home/wuilla_j/rendu/Piscine_C_J09/ex_03
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Thu Oct  8 11:25:05 2015 Julien Wuillaume
** Last update Fri Oct  9 21:26:34 2015 Julien Wuillaume
*/

#include <stdlib.h>
#include "../include/my.h"
#include "../include/my_param_to_tab.h"

t_stock_par	**fill_array(t_stock_par **data, int ac, char **av)
{
  int		i;

  i = 0;
  while (i < ac)
    {
      data[i]->size_param = my_strlen(av[i]);
      data[i]->str = av[i];
      data[i]->copy = my_strdup(av[i]);
      data[i]->tab = my_str_to_wordtab(av[i]);
      i = i + 1;
    }
  data[i]->str = '\0';
  return data;
}

t_stock_par	**initialize_array(t_stock_par **data, int size)
{
  int		i;
  int		return_value;

  i = 0;
  data = malloc((size + 1) * sizeof(t_stock_par *));
  while (i < size + 1)
    {
      data[i] = malloc(sizeof(t_stock_par));
      i = i + 1;
    }
  return data;
}

t_stock_par	*my_param_to_tab(int ac, char **av)
{
  t_stock_par	**data;

  data = initialize_array(data, ac);
  data = fill_array(data, ac, av);
  return (data);
}

int	main(int argc, char **argv)
{
  my_param_to_tab(argc, argv);
  return (0);
}
