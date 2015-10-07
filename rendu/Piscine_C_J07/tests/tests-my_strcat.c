/*
** tests-my_strcat.c for tests-my_strcat in /home/wuilla_j/rendu/Piscine_C_J07/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 14:19:30 2015 Julien Wuillaume
** Last update Tue Oct  6 15:01:58 2015 Julien Wuillaume
*/

void	main()
{
  char	str[50] = "Salut.";
  char	str2[] = " Ca va ?";
  
  my_strcat(str, str2);
  my_putstr(str);
}
