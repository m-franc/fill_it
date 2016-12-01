#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	char	**tetris;
//	char	**lauch;

	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	tetris = ft_check(open(av[1], O_RDONLY));
	if (tetris == 0)
		ft_exit();
	free(tetris);
}
