/*
** my_getnbr.c for my_getnbr in /home/wuilla_j/rendu/Piscine_C_J04
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Fri Oct  9 16:32:03 2015 Julien Wuillaume
** Last update Wed Oct 14 10:44:58 2015 Julien Wuillaume
*/

int	char_to_int(char *str)
{
  int	nbr;
  int	i;
  int	stop;
  int	count;

  i = 0;
  stop = 0;
  nbr = 0;
  count = my_power_rec(10, my_strlen(str) - 1);
  while (str[i] != '\0' && stop == 0)
    {
      if (str[i] >= 48 && str[i] <= 57)
	{
	  nbr = nbr + (str[i] - 48) * count;
	  count = count / 10;
	}
      i = i + 1;
    }
  return (nbr);
}

int	get_nbr_sign(char *str)
{
  int	sign;
  int	i;

  i = 0;
  sign = 43;
  while (i <= my_strlen(str))
    {
      if ((str[i] >= 48) && (str[i] <= 57))
	{
	  break;
	}
      if ((str[i] == 43) || (str[i] == 45))
	{
	  sign = str[i];
	}
      i = i + 1;
    }
  if (sign == 43)
    return (1);
  else
    return (0);
}

int	my_getnbr(char *str)
{
  int	nbr;
  int	sign;

  sign = get_nbr_sign(str);
  nbr = char_to_int(str);
  my_put_nbr(nbr);
}

int	main(int argc, char **argv)
{
  my_getnbr(argv[1]);
  return (0);
}
