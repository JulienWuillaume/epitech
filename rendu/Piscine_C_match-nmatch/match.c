/*
** match.c for match in /home/wuilla_j/rendu/Piscine_C_match-nmatch
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Wed Oct  7 19:51:51 2015 Julien Wuillaume
** Last update Sun Oct 11 13:32:18 2015 Julien Wuillaume
*/

#include <stdlib.h>

int	process_data(char **data)
{

}

int	str_len_cmp(char *s1, char *s2)
{
  int	s1_len;
  int	s2_len;

  s1_len = my_strlen(s1);
  s2_len = my_strlen(s2);
  if (s1_len >= s2_len)
    return s1_len;
  else
    return s2_len;
}


char	**initialize_array(char *s1, char *s2, char **array, int size)
{
  int	i;

  i = 0;
  array = malloc((size + 1) * sizeof(char *));
  while (i <= (size + 1))
    {
      array[i] = malloc(str_len_cmp(s1, s2) * sizeof(char));
      i = i + 1;
    }
  return array;
}

int	match(char *s1, char *s2)
{
  char	**data;
  int	chars_nb[2];
  int	return_value;

  data = initialize_array(s1, s2, data, 3);
  data[0] = s1;
  data[1] = s2;
  return_value = process_data(data);
  return return_value;
}

int	main(int argc, char **argv)
{
  int	return_value;

  return_value = 0;
  if ((argc < 3) || (argc > 3))
    {
      my_putstr("USAGE: ./match src pattern\n");
    }
  else
    {
      return_value = match(argv[1], argv[2]);
      //my_put_nbr(return_value);
    }

  //my_put_nbr(match(argv[1], argv[2]));
  return (return_value);
}
