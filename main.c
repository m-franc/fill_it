#include "fillit.h"
#include <stdio.h>

int		main(int ac, char **av)
{
	int		ok;

	if (ac != 2)
	{
		ft_putendl("usage : fillit t_file");
		return (0);
	}
	ok = ft_check(open(av[1], O_RDONLY));
	if (ok == 0)
		ft_exit();
}
