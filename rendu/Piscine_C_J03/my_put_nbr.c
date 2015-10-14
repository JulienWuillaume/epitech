/*
** my_put_nbr.c for my_put_nbr in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 13:32:33 2015 Julien Wuillaume
** Last update Thu Oct  1 22:39:49 2015 Julien Wuillaume
*/

void	display_number()
{
  my_putchar('2');
  my_putchar('1');
  my_putchar('4');
  my_putchar('7');
  my_putchar('4');
  my_putchar('8');
  my_putchar('3');
  my_putchar('6');
  my_putchar('4');
  my_putchar('8');
}

int	my_put_nbr(int nb)
{
  int	tmp;
  int	divisor;
  int	last_value;

  divisor = 1000000000;
  last_value = 0;
  if (nb < 0)
    {
      my_putchar(45);
      nb = -nb;
    }
  if (nb == 0)
    {
      my_putchar(48);
    }
  if ((nb == -2147483648) || (nb == 2147483648))
    {
      display_number();
    }
  while (divisor >= 1)
    {
      if ((nb == -2147483648) || (nb == 2147483648))
	{
	  break;
	}
      tmp = (nb / divisor) % 10;
      if (tmp + last_value != 0)
	{
	  my_putchar(tmp + 48);
	}
      last_value = tmp;
      divisor = divisor / 10;
    }
}
