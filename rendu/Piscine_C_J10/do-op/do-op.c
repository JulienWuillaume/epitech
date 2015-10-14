/*
** do-op.c for do-op in /home/wuilla_j/rendu/Piscine_C_J10/do-op
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Fri Oct  9 11:08:37 2015 Julien Wuillaume
** Last update Mon Oct 12 21:51:28 2015 Julien Wuillaume
*/

#include "../include/do-op.h"

int	main(int argc, char **argv)
{
  if ((argc < 4) || (argc > 4))
    return (1);
  else
    {
      my_put_nbr(gl_opptab[1].func(2, 2));
    }
  return (0);
}
