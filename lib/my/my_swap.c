/*
** my_swap.c for my_swap in /home/wuilla_j/rendu/Piscine_C_J04
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Thu Oct  1 09:11:09 2015 Julien Wuillaume
** Last update Tue Oct  6 10:30:38 2015 Julien Wuillaume
*/

int	my_swap(int *a, int *b)
{
  int	tmp;

  tmp = *a;
  *a = *b;
  *b = tmp;
}
