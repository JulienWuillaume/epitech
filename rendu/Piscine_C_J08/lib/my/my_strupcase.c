/*
** my_strupcase.c for my_strupcase in /home/wuilla_j/rendu/Piscine_C_J06/ex_08
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 18:12:42 2015 Julien Wuillaume
** Last update Tue Oct  6 10:43:30 2015 Julien Wuillaume
*/

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
