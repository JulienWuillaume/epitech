/*
** my_getnbr.c for getnbr in /home/jordat_a/rendu/Piscine_C_colles-Semaine_02
** 
** Made by Adrien Jordat
** Login   <jordat_a@epitech.net>
** 
** Started on  Sat Oct 10 14:19:54 2015 Adrien Jordat
** Last update Sat Oct 10 15:07:02 2015 Adrien Jordat
*/

char	*my_strcat(char *dest, char *src)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (dest[i] != '\0')
    i = i + 1;
  while (src[j] != '\0')
    {
      dest[i + j] = src[j];
      j = j + 1;
    }
  dest[i + j] = '\0';
  return (dest);
}

int	my_getnbr(char *str)
{
  int	a;
  int	b;
  int	c;

  a = 0;
  b = 0;
  c = 1;
  if (str == "\0")
    return (0);
  while (str[a] != '\0')
    {
      b = b * 10;
      if (str[a] >= '0' && str[a] <= '9')
        {
          b = b + (str[a] - 48);
          if (str[a + 1] < '0' || str[a + 1] > '9')
            return (b * c);
          if (str[a - 1] == '-')
            c = c * -1;
        }
      a = a + 1;
    }
  return (b * c);
}
