/*
** my_str_isalpha.c for my_str_isalpha in /home/wuilla_j/rendu/Piscine_C_J06/ex_11
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct  5 20:26:42 2015 Julien Wuillaume
** Last update Tue Oct  6 20:54:24 2015 Julien Wuillaume
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

int	my_str_isalpha(char *str)
{
  int	i;
  int	return_value;

  i = 0;
  return_value = 1;
  while (str[i] != '\0' && return_value == 1)
    {
      if ((str[i] < 65) || (str[i] > 122))
	{
	  return_value = 0;
	}
      if ((str[i] > 90) && (str[i] < 97))
	{
	  return_value = 0;
	}
      i = i + 1;
    }
  return (return_value);
}
