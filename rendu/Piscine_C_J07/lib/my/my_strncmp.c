/*
** my_strncmp.c for my_strncmp in /home/wuilla_j/rendu/Piscine_C_J06/ex_06
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 17:05:57 2015 Julien Wuillaume
** Last update Tue Oct  6 10:42:19 2015 Julien Wuillaume
*/

int	get_longest_string(char *s1, char *s2)
{
  int	s1_len;
  int	s2_len;

  s1_len = my_strlen(s1);
  s2_len = my_strlen(s2);
  if (s1_len >= s2_len)
    {
      return s1_len;
    }
  else
    {
      return s2_len;
    }
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	char_size;
  int	i;
  int	count;
  int	limite;

  i = 0;
  char_size = sizeof(char);
  count = 0;
  if (n < get_longest_string(s1, s2))
    {
      limite = n;
    }
  else
    {
      limite = get_longest_string(s1, s2);
    }
  while (i < limite)
    {
      if ((count >= my_strlen(s1)) || (count >= my_strlen(s2)))
        return (0);
      
      if (s1[i] < s2[i])
        return (-1);
      
      if (s1[i] == s2[i])
        count = count + 1;
      else
        {
          return (1);
        } 
      i = i + 1;
    }
}
