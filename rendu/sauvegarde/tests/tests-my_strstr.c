/*
** tests-my_strstr.c for tests-my_strstr in /home/wuilla_j/rendu/Piscine_C_J06/tests
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Mon Oct  5 14:15:34 2015 Julien Wuillaume
** Last update Mon Oct  5 20:53:08 2015 Julien Wuillaume
*/

void	main()
{
  char	str[] = "Je mange des pommes et des bananes";
  char	to_find[] = "des";
  
  my_strstr(str, to_find);
  my_putstr(str);
}
