/*
** my_aff_alpha.c for my_aff_alpha in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 09:59:18 2015 Julien Wuillaume
** Last update Wed Sep 30 10:34:23 2015 Julien Wuillaume
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_aff_alpha()
{
  int i;

  i = 97;
  while (i <= 122)
    {
      my_putchar(i);
      i = i + 1;
    }
}

int	main()
{
  my_aff_alpha();
}
