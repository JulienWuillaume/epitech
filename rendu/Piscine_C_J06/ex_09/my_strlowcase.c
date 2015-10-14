/*
** my_strlowcase.c for my_strlowcase in /home/wuilla_j/rendu/Piscine_C_J06/ex_09
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct  5 18:12:42 2015 Julien Wuillaume
** Last update Tue Oct  6 20:46:46 2015 Julien Wuillaume
*/

int	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
  return (i);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char	*my_strlowcase(char *str)
{
  int	i;

  i = 0;
  while (i <= my_strlen(str))
    {
      if ((str[i] >= 65) && (str[i] <= 90))
	{
	  str[i] = str[i] + 32;
	}
      i = i + 1;
    }
  return str;
}
