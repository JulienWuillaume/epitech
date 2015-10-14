/*
** my_str_islower.c for my_str_islower in /home/wuilla_j/rendu/Piscine_C_J06/ex_13
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Tue Oct  6 13:44:52 2015 Julien Wuillaume
** Last update Tue Oct  6 20:55:08 2015 Julien Wuillaume
*/

int	my_str_islower(char *str)
{
  int	i;
  int	return_value;

  i = 0;
  return_value = 1;
  while ((str[i] != '\0') && (return_value == 1))
    {
      if ((str[i] < 97) || (str[i] > 122))
	{
	  return_value = 0;
	}
      i = i + 1;
    }
  return (return_value);
}
