/*
** tests-my_strncat.c for tests-my_strncat in /home/wuilla_j/rendu/Piscine_C_J07/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Tue Oct  6 15:41:21 2015 Julien Wuillaume
** Last update Tue Oct  6 15:50:38 2015 Julien Wuillaume
*/

void	main()
{
  char	str[] = "Salut Patrick";
  char	str2[] = " et bob.";

  my_strncat(str, str2, 3);
  my_putstr(str);
}
