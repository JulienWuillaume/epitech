/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/wuilla_j/rendu/Piscine_C_J08/ex_04
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Wed Oct  7 13:37:35 2015 Julien Wuillaume
** Last update Wed Oct  7 18:20:21 2015 Julien Wuillaume
*/

#include <stdlib.h>

char	**parse_str(char *src, char **dest)
{
  int	i;
  int	j;
  int	k;

  i = 0;
  j = 0;
  k = 0;
  while (src[i] != '\0')
    {
      if (((src[i] < 65) || (src[i] > 90)) && ((src[i] < 97) || src[i] > 122))
	{
	  j = j + 1;
	  i = i + 1;
	  k = 0;
	  continue;
	}
      dest[j][k] = src[i];
      i = i + 1;
      k = k + 1;
    }
  dest[j + 1] = 0;
  return (dest);
}

int	str_word_count(char *src)
{
  int	i;
  int	word_count;

  i = 0;
  word_count = 0;
  while (src[i] != '\0')
    {
      if (((src[i] < 65) || (src[i] > 90)) && ((src[i] < 97) || src[i] > 122))
	{
	  word_count = word_count + 1;
	}
      i = i + 1;
    }
  return (word_count + 1);
}

char	**initialize_array(char **array, int size)
{
  int	i;

  i = 0;
  array = malloc((size + 1) * sizeof(char *));
  while (i <= size + 1)
    {
      array[i] = malloc(sizeof(char));
      i = i + 1;
    }
  return array;
}

char	**my_str_to_wordtab(char *str)
{
  char	**words;

  words = initialize_array(words, str_word_count(str));
  words = parse_str(str, words);
  return words;
}

int	main()
{
  char	**str;
  int	i;

  str = my_str_to_wordtab("Je vais manger");
  my_show_wordtab(str);
  free(str);
}
