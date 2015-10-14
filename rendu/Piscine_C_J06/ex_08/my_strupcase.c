/*
** my_strupcase.c for my_strupcase in /home/wuilla_j/rendu/Piscine_C_J06/ex_08
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct  5 18:12:42 2015 Julien Wuillaume
** Last update Tue Oct  6 20:45:59 2015 Julien Wuillaume
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

char	*my_strupcase(char *str)
{
  int	i;

  i = 0;
  while (i <= my_strlen(str))
    {
      if ((str[i] >= 97) && (str[i] <= 122))
	{
	  str[i] = str[i] - 32;
	}
      i = i + 1;
    }
  return str;
}
