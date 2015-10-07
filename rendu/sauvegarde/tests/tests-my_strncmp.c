/*
** tests-my_strncmp.c for tests-my_strncmp in /home/wuilla_j/rendu/Piscine_C_J06/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 17:06:18 2015 Julien Wuillaume
** Last update Mon Oct  5 18:02:57 2015 Julien Wuillaume
*/

void	main()
{
  char	s1[] = "abcd";
  char	s2[] = "abce";

  my_putchar(my_strncmp(s1, s2, 4) + 48);
}
