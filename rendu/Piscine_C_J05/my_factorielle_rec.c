/*
** my_factorielle_rec.c for my_factorielle_rec in /home/wuilla_j/rendu/Piscine_C_J05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Fri Oct  2 09:29:48 2015 Julien Wuillaume
** Last update Fri Oct  2 10:31:43 2015 Julien Wuillaume
*/

int	my_factorielle_rec(int nb)
{
  if (nb == 0)
    {
      return (1);
    }
  if (nb > 12)
    {
      return (0);
    }
  if (nb > 1)
    {
      return nb * my_factorielle_it(nb - 1);
    }
}
