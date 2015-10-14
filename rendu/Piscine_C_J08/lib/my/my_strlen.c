/*
** my_strlen.c for my_strlen in /home/wuilla_j/rendu/Piscine_C_J04
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Thu Oct  1 12:44:49 2015 Julien Wuillaume
** Last update Tue Oct  6 10:32:13 2015 Julien Wuillaume
*/

int	my_strlen(char *str)
{
  int	count;

  count = 0;
  while (str[count] != '\0')
    {
      count = count + 1;
    }
  return count;
}
