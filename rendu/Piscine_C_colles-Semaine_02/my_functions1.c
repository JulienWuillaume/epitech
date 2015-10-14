/*
** my_functions.c for colle 2 in /home/jordat_a/rendu/Piscine_C_colles-Semaine_02
** 
** Made by Adrien Jordat
** Login   <jordat_a@epitech.net>
** 
** Started on  Sat Oct 10 13:51:38 2015 Adrien Jordat
** Last update Sat Oct 10 14:19:39 2015 Adrien Jordat
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putchar_error(char c)
{
  write(2, &c, 1);
}

int	my_puterror(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (0);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
