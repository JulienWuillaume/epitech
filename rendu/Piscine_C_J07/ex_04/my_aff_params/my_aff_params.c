/*
** my_aff_params.c for my_aff_params in /home/wuilla_j/rendu/Piscine_C_J07/ex_04
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 15:54:02 2015 Julien Wuillaume
** Last update Tue Oct  6 16:04:52 2015 Julien Wuillaume
*/

int	main(int argc, char **argv)
{
  int	i;

  while (i < argc)
    {
      my_putstr(argv[i]);
      my_putchar('\n');
      i = i + 1;
    }
  return (0);
}
