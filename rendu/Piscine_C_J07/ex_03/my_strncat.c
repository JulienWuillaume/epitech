/*
** my_strncat.c for my_strncat in /home/wuilla_j/rendu/Piscine_C_J07/ex_03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 15:41:03 2015 Julien Wuillaume
** Last update Tue Oct  6 15:51:28 2015 Julien Wuillaume
*/

char	*my_strncat(char *dest, char *src, int nb)
{
  int	i;
  int	dest_len;

  i = 0;
  dest_len = my_strlen(dest);
  while ((src[i] != '\0') && (i < nb))
    {
      dest[i + dest_len] = src[i];
      i = i + 1;
    }
  dest[i + dest_len] = '\0';
  return (dest);
}
