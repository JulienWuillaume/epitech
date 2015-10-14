/*
** my_aff_chiffre.c for my_aff_chiffre in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 10:17:17 2015 Julien Wuillaume
** Last update Thu Oct  1 22:36:01 2015 Julien Wuillaume
*/

int	my_aff_chiffre()
{
  int	i;

  i = 48;
  while (i <= 57)
    {
      my_putchar(i);
      i = i + 1;
    }
}
