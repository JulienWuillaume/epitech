/*
** unix_square_julien.c for unix_square in /home/wuilla_j/rendu/Piscine_C_colles-Semaine_01
** 
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
** 
** Started on  Sat Oct  3 15:10:07 2015 Julien Wuillaume
** Last update Sun Oct  4 10:52:04 2015 Julien Wuillaume
*/

void	my_putchar(char c)
{
  write(1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

void	draw_line(int x, int y, int a, int b)
{ 
  if ((b == 1) || (b == y))
    {
      if ((a == 1) || (a == x))
	{
	  my_putchar(111);
	}
      else
	{
	  my_putchar(45);
	}
    }
  else
    {
      if ((a == 1) || (a == x))
	{
	  my_putchar(124);
	}
      else
	{
	  my_putchar(' ');
	}
    }
}

int	colle(int x, int y)
{
  int	a;
  int	b;

  a = 1;
  b = 1;
  if ((x < 1) || (y < 1))
    {
      my_putstr("Erreur. Les paramètres doivent être positif.\n");
      return (0);
    }
  while (b <= y)
    {
      while (a <= x)
	{
	  draw_line(x, y, a, b);
	  a = a + 1;
	}
      my_putchar('\n');
      a = 1;
      b = b + 1;
    }
}

int	main()
{
  colle(10,5);
  return (0);
}
