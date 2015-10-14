/*
** my_strdup.c for my_strdup in /home/wuilla_j/rendu/Piscine_C_J08/ex_01
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Wed Oct  7 09:15:54 2015 Julien Wuillaume
** Last update Wed Oct  7 10:13:10 2015 Julien Wuillaume
*/

#include <stdlib.h>

char	*my_strdup(char *src)
{
  char	*dest;
  int	i;

  i = 0;
  dest = malloc(my_strlen(src));
  while (i < my_strlen(src))
    {
      dest[i] = src[i];
      i = i + 1;
    }
  return (dest);
}
