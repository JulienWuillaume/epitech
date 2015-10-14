/*
** my_square_root.c for my_square_root in /home/wuilla_j/rendu/Piscine_C_J09/lib/my
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Thu Oct  8 10:15:41 2015 Julien Wuillaume
** Last update Thu Oct  8 10:36:22 2015 Julien Wuillaume
*/

int	my_square_root(int nbr)
{
  int	i;

  i = 0;
  while ((i * i) != nbr)
    {
      i = i + 1;
    }
  return (i);
}
