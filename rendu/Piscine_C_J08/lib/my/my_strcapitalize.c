/*
** my_strcapitalize.c for my_strcapitalize in /home/wuilla_j/rendu/Piscine_C_J06/ex_10
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 18:31:41 2015 Julien Wuillaume
** Last update Tue Oct  6 10:44:25 2015 Julien Wuillaume
*/

char	*my_strcapitalize(char *str)
{
  int	i;
  int	space;

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
	  if ((str[i - 1] >= 32) && (str[i - 1] <= 64) || (str[i - 1] >= 91) && (str[i - 1] <= 96))
	    {
	      str[i] = str[i] - 32;
	    }
	}
      i = i + 1;
    }
}
