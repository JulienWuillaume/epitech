/*
** my_strcpy.c for my_strcpy in /home/wuilla_j/rendu/Piscine_C_J06/ex_02
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 09:19:32 2015 Julien Wuillaume
** Last update Tue Oct  6 10:37:37 2015 Julien Wuillaume
*/

char	*my_strcpy(char *dest, char *src)
{
  int	i;

  i = 0;
  while (src[i] != '\0')
    {
      dest[i] = src[i];
      i = i + 1;
    }
  dest[i] = '\0';
  return dest;
}
