/*
** my_str_isnum.c for my_str_isnum in /home/wuilla_j/rendu/Piscine_C_J06/ex_12
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Tue Oct  6 13:31:52 2015 Julien Wuillaume
** Last update Tue Oct  6 20:53:59 2015 Julien Wuillaume
*/

int	my_str_isnum(char *str)
{
  int	i;
  int	return_value;

  i = 0;
  return_value = 1;
  while ((str[i] != '\0') && (return_value == 1))
    {
      if ((str[i] < 48) || (str[i] > 71))
	{
	  return_value = 0;
	}
      i = i + 1;
    }
  return (return_value);
}
