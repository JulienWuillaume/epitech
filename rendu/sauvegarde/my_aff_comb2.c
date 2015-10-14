/*
** my_aff_comb2.c for my_aff_comb2 in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 11:33:29 2015 Julien Wuillaume
** Last update Wed Sep 30 20:13:04 2015 Julien Wuillaume
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	number_to_char(int n)
{
  my_putchar(n/10 + 48);
  my_putchar(n%10 + 48);
}

int	my_aff_comb2()
{
  int	number_1;
  int	number_2;

  number_1 = 0;
  number_2 = 1;
  while (number_1 <= 99)
    {
      while (number_2 <= 99 && number_2 > number_1)
	{
	  number_to_char(number_1);
	  my_putchar(32);
	  number_to_char(number_2);
	  number_2 = number_2 + 1;
	  if (number_1 != 98 && number_2 != 99)
	    {
	      my_putchar(44);
	    }
	}
      number_1 = number_1 + 1;
      number_2 = number_1 + 1;
    }

}

int	main()
{
  my_aff_comb2();
}
