/*
** my_show_wordtab.c for my_show_wordtab in /home/wuilla_j/rendu/Piscine_C_J08/ex_03
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Wed Oct  7 13:22:12 2015 Julien Wuillaume
** Last update Wed Oct  7 13:35:17 2015 Julien Wuillaume
*/

int	my_show_wordtab(char **tab)
{
  int	i;
  int	j;

  i = 0;
  j = 0;
  while (tab[i] != 0)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i = i + 1;
    }
}
