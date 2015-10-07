/*
** my_evil_str.c for my_evil_str in /home/wuilla_j/rendu/sauvegarde
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Thu Oct  1 17:01:04 2015 Julien Wuillaume
** Last update Thu Oct  1 22:11:17 2015 Julien Wuillaume
*/
#include "../../my.c"
#include "string.h"

char	my_evil_str(char *str)
{
  int	i;
  int	jmp;
  char	*str_cpy;

  i = 0;
  jmp = 0;
  while (str[i] != '\0')
    {
      str_cpy[i] = str[i];
      i = i + 1;
    }
  i = my_strlen(str) - 1;
  while (i > 0)
    {
      str[i] = str_cpy[my_strlen(str) - i];
      i = i - 1;
    }
  return *str;
}

void	main()
{
  char	*str;

  str = strdup("piscine");
  my_evil_str(str);
  my_putstr(str);
}
