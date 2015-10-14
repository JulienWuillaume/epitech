/*
** my_aff_revalpha.c for my_aff_revalpha in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 10:10:37 2015 Julien Wuillaume
** Last update Thu Oct  1 22:37:23 2015 Julien Wuillaume
*/

int	my_aff_revalpha()
{
  int	i;

  i = 122;
  while (i >= 97)
    {
      my_putchar(i);
      i = i - 1;
    }
}
