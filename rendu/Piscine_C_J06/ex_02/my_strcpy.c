/*
** my_strcpy.c for my_strcpy in /home/wuilla_j/rendu/Piscine_C_J06/ex_02
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Mon Oct  5 09:19:32 2015 Julien Wuillaume
** Last update Tue Oct  6 20:40:12 2015 Julien Wuillaume
*/

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

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
  return (dest);
}
