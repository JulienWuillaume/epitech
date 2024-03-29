/*
** my_revstr.c for my_revstr in /home/wuilla_j/rendu/Piscine_C_J06/ex_04
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 11:04:17 2015 Julien Wuillaume
** Last update Tue Oct  6 20:22:39 2015 Julien Wuillaume
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

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      i = i + 1;
    }
  return (i);
}

char	*my_revstr(char *str)
{
  int	i;
  int	j;
  char	tmp[my_strlen(str) + 1];
  int	my_len;

  i = 0;
  my_len = my_strlen(str);
  j = my_len - 1;
  while (i < my_len)
    {
      tmp[i] = str[i];
      i = i + 1;
    }
  i = 0;
  while (i <= my_len)
    {
      str[i] = tmp[j];
      i = i + 1;
      j = j - 1;
    }
  str[i + 1] = '\0';
  return (str);
}
