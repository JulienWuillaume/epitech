/*
** my_str_isprintable.c for my_str_isprintable in /home/wuilla_j/rendu/Piscine_C_J06/ex_15
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Tue Oct  6 13:58:43 2015 Julien Wuillaume
** Last update Tue Oct  6 20:56:41 2015 Julien Wuillaume
*/

int	my_str_isprintable(char *str)
{
  int	i;
  int	return_value;

  i = 0;
  return_value = 1;
  while ((str[i] != '\0') && (return_value == 1))
    {
      if (str[i] < 32)
	{
	  return_value = 0;
	}
      i = i + 1;
    }
  return (return_value);
}
