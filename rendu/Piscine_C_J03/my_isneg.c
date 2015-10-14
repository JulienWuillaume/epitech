/*
** my_isneg.c for my_isneg in /home/wuilla_j/rendu/Piscine_C_J03
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Wed Sep 30 10:25:02 2015 Julien Wuillaume
** Last update Thu Oct  1 22:37:38 2015 Julien Wuillaume
*/

int	my_isneg(int n)
{
  int	character;

  if (n < 0)
    {
      character = 78;
    }
  else
    {
      character = 80;
    }
  my_putchar(character);
}
