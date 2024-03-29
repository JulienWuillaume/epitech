/*
** my_strncpy.c for my_strncpy in /home/wuilla_j/rendu/Piscine_C_J06/ex_03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 10:18:38 2015 Julien Wuillaume
** Last update Tue Oct  6 10:39:08 2015 Julien Wuillaume
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  if (n > sizeof(dest))
    {
      while (src[i] != '\0')
	{
	  dest[i] = src[i];
	  i = i + 1;
	}
    }
  else
    {
      while (i < n)
	{
	  dest[i] = src[i];
	  i = i + 1;
	}
    }
  return dest;
}
