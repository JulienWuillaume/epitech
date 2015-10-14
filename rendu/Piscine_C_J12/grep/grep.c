/*
** grep.c for grep in /home/wuilla_j/rendu/Piscine_C_J12/grep
**
** Made by Julien Wuillaume
** Login   <wuilla_j@epitech.net>
**
** Started on  Tue Oct 13 14:30:01 2015 Julien Wuillaume
** Last update Tue Oct 13 14:41:06 2015 Julien Wuillaume
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int	read_file(int fd)
{
  int   ret;
  char  buffer[1];

  ret = 1;
  while (ret != 0)
    {
      ret = read(fd, buffer, 1);
      if (ret != 0)
	{
	  my_putchar(buffer[0]);
	}
    }
}

int	open_file(char *file)
{
  int	fd;

  fd = open(file, O_RDONLY);
  if (fd == -1)
    {
      my_putstr("Open error: no such file\n");
    }
  else
    read_file(fd);
  close(fd);
}

int	main(int argc, char **argv)
{
  int	i;

  i = 1;
  while (i < argc)
    {
      open_file(argv[i]);
      i = i + 1;
    }
  return (0);
}
