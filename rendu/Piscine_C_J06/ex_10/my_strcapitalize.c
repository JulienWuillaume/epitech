/*
** my_strcapitalize.c for my_strcapitalize in /home/wuilla_j/rendu/Piscine_C_J06/ex_10
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct  5 18:31:41 2015 Julien Wuillaume
** Last update Tue Oct  6 20:49:52 2015 Julien Wuillaume
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

char	*my_strcapitalize(char *str)
{
  int	i;
  int	space;
  char	a;

  i = 0;
  space = 0;
  while (i <= my_strlen(str))
    {
      if (i == 0)
	{
	  str[i] = str[i] - 32;
	}
      if ((str[i] >= 97) && (str[i] <= 122))
	{
	  a = str[i - 1];
	  if ((a >= 32) && (a <= 64) || (a >= 91) && (a <= 96))
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
}
