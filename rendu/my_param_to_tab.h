/*
** my_param_to_tab.h for my_param_to_tab in /home/wuilla_j/rendu/Piscine_C_J09/include
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Thu Oct  8 11:25:33 2015 Julien Wuillaume
** Last update Fri Oct  9 09:05:03 2015 Julien Wuillaume
*/

#ifndef MY_H_
#define MY_H_
struct s_stock_par
{
  int	size_param;
  char	*str;
  char	*copy;
  char	**tab;
};
typedef struct s_stock_par t_stock_par;
t_stock_par	*my_param_to_tab(int ac, char **av);
#endif
