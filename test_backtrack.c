#include "fillit.h"

int		test_backtrack_1st_dim(t_place *p, int x, int y, int o)
{
	if (p->write == p->size)
		return (1);
	if (p->write != p->size && p->tab[y] == 0)
		return (0);
	y = 0;
	while (p->tab[y])
	{
		x = 0;
		while (p->tab[y][x])
		{
			if (p->tab[y][x] == '.')
			{
				if (sous_sous_backtrack(p, x, y, o) == 1)
					return (1);
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		sous_sous_backtrack(t_place *p, int x, int y, int o)
{
	if (ft_can_write(o, x, y, p) == 1)
	{
		ft_puttab(p->tab);
		ft_putchar('\n');
		p->write++;
		if ((test_backtrack_1st_dim(p, 0, 0, o + 1)) == 1)
			return (1);
		else
		{
			ft_delete(o, x, y, p);
			p->write--;
		}
	}
	return (0);
}
