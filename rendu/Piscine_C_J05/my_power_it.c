/*
** my_power_it.c for my_power_it in /home/wuilla_j/rendu/Piscine_C_J05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Fri Oct  2 10:52:09 2015 Julien Wuillaume
** Last update Fri Oct  2 11:01:43 2015 Julien Wuillaume
*/

int	my_power_it(int nb, int power)
{
  int	my_nb;

  if (nb < 0)
    {
      nb = -nb;
    }
  if (power == 0)
    {
      return (1);
    }
  my_nb = nb;
  while (power > 1)
    {
      nb = my_nb * nb;
      power = power - 1;
    }
  return nb;
}
