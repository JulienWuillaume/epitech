/*
** do-op.h for do-op in /home/wuilla_j/rendu/Piscine_C_J10/include
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Sun Oct 11 13:41:46 2015 Julien Wuillaume
** Last update Mon Oct 12 17:08:51 2015 Julien Wuillaume
*/

#ifndef DO_OP_H_
# define DO_OP_H_

typedef struct s_op
{
  char	*operator;
  int	(*func)(int nb1, int nb2);
} t_opp;
int	my_add(int nb1, int nb2);
int	my_sub(int nb1, int nb2);
int	my_div(int nb1, int nb2);
int	my_mul(int nb1, int nb2);
int	my_mod(int nb1, int nb2);
t_opp gl_opptab[] =
  {
    {"+", &my_add},
    {"-", &my_sub},
    {"/", &my_div},
    {"*", &my_mul},
    {"%", &my_mod},
  };
#endif
