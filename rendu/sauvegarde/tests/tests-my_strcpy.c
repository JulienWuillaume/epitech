/*
** tests-my_strcpy.c for tests-my_strcpy in /home/wuilla_j/rendu/Piscine_C_J06/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 09:26:34 2015 Julien Wuillaume
** Last update Mon Oct  5 10:03:08 2015 Julien Wuillaume
*/

void	main()
{
  char	str[] = "Bonjour";
  char	str2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  
  my_putstr(str);
  my_putstr(str2);
  my_strcpy(str2, str);
  my_putstr(str2);
}
