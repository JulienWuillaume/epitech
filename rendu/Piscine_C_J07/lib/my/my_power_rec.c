/*
** my_power_rec.c for my_power_rec in /home/wuilla_j/rendu/Piscine_C_J05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Fri Oct  2 11:06:36 2015 Julien Wuillaume
** Last update Tue Oct  6 10:32:49 2015 Julien Wuillaume
*/

int	my_power_rec(int nb, int power)
{
  if (nb < 0)
    {
      nb = -nb;
    }
  if (power == 0)
    {
      return (1);
    }
  if (power > 1)
    {
      return nb * my_power_rec(nb, power - 1);
    }
}
