/*
** my_strcat.c for my_strcat in /home/wuilla_j/rendu/Piscine_C_J07/ex_02
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 14:19:15 2015 Julien Wuillaume
** Last update Tue Oct  6 15:43:19 2015 Julien Wuillaume
*/

char	*my_strcat(char *dest, char *src)
{
  int	dest_len;
  int	i;

  dest_len = my_strlen(dest);
  i = 0;
  while (src[i] != '\0')
    {
      dest[i + dest_len] = src[i];
      i = i + 1;
    }
  dest[i + dest_len] = '\0';
  return dest;
}
