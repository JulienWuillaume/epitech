/*
** colle2-5.c for colle 2 in /home/jordat_a/rendu/Piscine_C_colles-Semaine_02
** 
** Made by Adrien Jordat
** Login   <jordat_a@epitech.net>
** 
** Started on  Sat Oct 10 13:57:46 2015 Adrien Jordat
** Last update Sat Oct 10 18:49:11 2015 Adrien Jordat
*/

#include <stdlib.h>

int	my_error(int ac, char **av)
{
  int	i;
  int	j;

  if (ac > 3 || ac < 3)
    {
      my_puterror("Usage : colle2-5 text size\n");
      return (1);
    }
  i = my_strlen(av[1]);
  j = my_getnbr(av[2]);
  if (j < i + 3)
    {
      my_puterror("Size too small:\n");
      my_puterror("Number has to be bigger than (text + 3)\n");
      return (1);
    }
  return (0);
}

char	*my_print_colle(char **av, char *str, int j, int k)
{
  int	i;
  int	l;
  char	*s2;

  i = 0;
  l = k - my_strlen(av[1]) - 4;
  str = malloc(sizeof(char) * k);
  my_strcat(str, "*");
  my_strcat(str, av[1]);
  while (i <= l)
    {
      my_strcat(str, " ");
      i = i + 1;
    }
  my_strcat(str, "|");
  return (str);
}

int	my_loop(char *str, int k)
{
  int	i;

  i = 0;
  while (i < k - 3)
    {
      my_putchar('\r');
      str[i + 1] = '*';
      str[i] = ' ';
      my_putstr(str);
      usleep(100000);
      i = i + 1;
    }
  while (i > 0)
    {
      my_putchar('\r');
      str[i - 1] = '*';
      str[i] = ' ';
      my_putstr(str);
      usleep(100000);
      i = i - 1;
    }
}

int	main(int ac, char **av)
{
  int	i;
  int	j;
  int	k;
  char	*str;

  i = my_error(ac, av);
  j = my_strlen(av[1]);
  k = my_getnbr(av[2]);
  if (i == 1)
    return (1);
  str = my_print_colle(av, str, j, k);
  my_putstr(str);
  my_loop(str, k);
  return (0);
}
