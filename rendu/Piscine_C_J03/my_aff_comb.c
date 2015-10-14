/*
** my_aff_comb.c for my_aff_comb in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 10:36:52 2015 Julien Wuillaume
** Last update Thu Oct  1 22:35:53 2015 Julien Wuillaume
*/

int	my_aff_comb()
{
  int	digit_1;
  int	digit_2;
  int	digit_3;

  digit_1 = 48;
  digit_2 = 48;
  digit_3 = 48;
  while (digit_1 <= 57)
    {
      while (digit_2 <= 57)
	{
	  while (digit_3 <= 57)
	    {
	      if ((digit_1 < digit_2) && (digit_2 < digit_3))
		{
		  my_putchar(digit_1);
		  my_putchar(digit_2);
		  my_putchar(digit_3);
		  if ((digit_1 != 55) || (digit_2 != 56) || (digit_3 != 57))
		    {
		      my_putchar(44);
		      my_putchar(32);
		    }
		}
	      digit_3 = digit_3 + 1;
	    }
	  digit_3 = 48;
	  digit_2 = digit_2 + 1;
	}
      digit_2 = 48;
      digit_1 = digit_1 + 1;
    }
}
