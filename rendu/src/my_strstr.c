/*
** my_strstr.c for my_strstr in /home/wuilla_j/rendu/Piscine_C_J06/ex_05
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 14:15:42 2015 Julien Wuillaume
** Last update Tue Oct  6 10:41:13 2015 Julien Wuillaume
*/

void	write_str(char *str, int start)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      str[i] = str[i + start];
      i = i + 1;
    }
}

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	j;
  int	count;
  int	to_find_len;

  i = 0;
  j = 0;
  count = 0;
  while (i <= my_strlen(str))
    {
      if (str[i] == to_find[j])
	{
	  count = count + 1;
	  j = j + 1;
	}
      else
	{
	  count = 0;
	}
      i = i + 1;
      if (count == my_strlen(to_find))
	{
	  write_str(str, i - my_strlen(to_find));
	}
    }
}
