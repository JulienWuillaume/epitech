/*
** tests-my_strncpy.c for tests-my_strncpy in /home/wuilla_j/rendu/Piscine_C_J06/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 10:18:08 2015 Julien Wuillaume
** Last update Mon Oct  5 10:54:07 2015 Julien Wuillaume
*/

void	main()
{
  char	str[] = "Pomme";
  char	str2[] = "ABC";
  
  my_putstr(str2);
  my_putchar('\n');
  my_strncpy(str2, str, 2);
  my_putstr(str2);
}
