/*
** tests-my_swap.c for tests-my_swap in /home/wuilla_j/rendu/Piscine_C_J04/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Thu Oct  1 09:14:09 2015 Julien Wuillaume
** Last update Fri Oct  2 21:51:52 2015 Julien Wuillaume
*/

int	main()
{
  int	a;
  int	b;
  int	*ptr_a;
  int	*ptr_b;

  a = 5;
  b = 42;
  ptr_a = &a;
  ptr_b = &b;
  my_put_nbr(a);
  my_put_nbr(b);
  my_swap(ptr_a, ptr_b);
  my_put_nbr(a);
  my_put_nbr(b);
}
