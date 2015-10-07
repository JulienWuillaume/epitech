/*
** my_rev_params.c for my_rev_params in /home/wuilla_j/rendu/Piscine_C_J07/ex_05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 16:05:42 2015 Julien Wuillaume
** Last update Tue Oct  6 16:09:50 2015 Julien Wuillaume
*/

int	main(int argc, char **argv)
{
  int	i;

  i = argc - 1;
  while (i >= 0)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i - 1;
    }
  return (0);
}
