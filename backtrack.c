#include "fillit.h"

void	ft_prepare(t_place *p, int *tminos, int sizetab, int size)
{
	p->ids = tminos;
	p->max = sizetab;
	p->size = size;
	p->write = 0;
}

char	**ft_build_tab(int sizetab, int x, int y)
{
	char **tableau;

	if ((tableau = (char**)malloc(sizeof(char*) * (sizetab + 1))) != 0)
	{
		while (y < sizetab)
		{
			x = 0;
			if ((tableau[y] = (char*)malloc(sizeof(char) * (sizetab + 1))) != 0)
			{
				while (x < sizetab)
				{
					tableau[y][x] = '.';
					x++;
				}
				tableau[y][x] = '\0';
				y++;
			}
		}
		tableau[y] = 0;
	}
	return (tableau);
}

void	ft_settab(int size, int *tminos, int sizetab)
{
	t_place p;
	int		x;
	int		y;
	int		o;
	char	**tableau;

	x = 0;
	y = 0;
	o = 0;
	tableau = ft_build_tab(sizetab, x, y);
	p.tab = tableau;
	if (p.tab != 0)
	{
		ft_prepare(&p, tminos, sizetab, size);
		if (test_backtrack_1st_dim(&p, x, y, o) == 1)
			ft_puttab(p.tab);
		else
			ft_settab(size, tminos, sizetab + 1);
		free(p.tab);
	}
}
