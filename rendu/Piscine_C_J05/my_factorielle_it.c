/*
** my_factorielle_it.c for my_factorielle_it in /home/wuilla_j/rendu/Piscine_C_J05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Fri Oct  2 09:29:48 2015 Julien Wuillaume
** Last update Fri Oct  2 10:45:05 2015 Julien Wuillaume
*/

int	my_factorielle_it(int nb)
{
  int	i;

  if (nb == 0)
    {
      return (1);
    }
  if (nb < 0)
    {
      return (0);
    }
  i = nb;
  while (i > 1)
    {
      nb = nb * (i - 1);
      i = i - 1;
    }
  return nb;
}
