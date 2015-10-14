/*
** my_str_isupper.c for my_str_isupper in /home/wuilla_j/rendu/Piscine_C_J06/ex_14
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Tue Oct  6 13:51:10 2015 Julien Wuillaume
** Last update Tue Oct  6 20:55:58 2015 Julien Wuillaume
*/

int	my_str_isupper(char *str)
{
  int	i;
  int	return_value;

  i = 0;
  return_value = 1;
  while ((str[i] != '\0') && (return_value == 1))
    {
      if ((str[i] < 65) || (str[i] > 90))
	{
	  return_value = 0;
	}
      i = i + 1;
    }
  return (return_value);
}
