/*
** sum_params.c for sum_params in /home/wuilla_j/rendu/Piscine_C_J08/ex_02
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Wed Oct  7 10:14:17 2015 Julien Wuillaume
** Last update Thu Oct  8 08:40:14 2015 Julien Wuillaume
*/

#include <stdlib.h>

char	*sum_params(int argc, char **argv)
{
  char	*str;
  int	i;
  int	j;
  int	k;

  str = malloc(my_strlen(argv));
  i = 0;
  j = 0;
  k = 0;
  while (i < argc)
    {
      while (j < my_strlen(argv[i]))
	{
	  str[k] = argv[i][j];
	  j = j + 1;
	  k = k + 1;
	}
      str[k] = '\n';
      k = k + 1;
      j = 0;
      i = i + 1;
    }
  return str;
}
