#include "fillit.h"
#include <stdio.h>

void	ft_settab(int size, int *tminos, int sizetab)
{
	int		x;
	int		y;
	t_place	*p;
	int		prepare;
	int		o;

	if ((p = malloc(sizeof(t_list))) != 0)
	{
		p->tab = ft_columnew(sizetab);
		if (p->tab != NULL)
		{
			x = 0;
			y = 0;
			o = 0;
			if ((prepare = ft_prepare_tab(p, tminos, sizetab, size)) == 1)
			{
				if (ft_select_place(p, x, y, o)  == 1)
					ft_puttab(p->tab);
				else
					ft_settab(size, tminos, sizetab + 1);
			}
		}
		free(p->tab);
	}
}

int		ft_prepare_tab(t_place *p, int *tminos, int sizetab, int size)
{	
	int	i;

	i = 0;
	p->ids = tminos;
	p->max= sizetab;
	p->size = size;
	return (1);
}

int		ft_select_place(t_place *p, int x, int y, int o)
{
	if (o == p->size)
		return (1);
	y = 0;
	while (p->tab[y])
	{
		x = 0;
		while (p->tab[y][x])
		{
			if (p->tab[y][x] == '.')
			{
				if (ft_puttminos(p, x, y, o) == 1)
				{
					if (ft_select_place(p, 0, 0, o + 1) != 1)
						ft_delete(o, x, y, p);
					else
						return (1);
				}
			}
			x++;
		}
		y++;
	}
	return (0);
}

int		ft_puttminos(t_place *p, int x, int y, int o)
{
	if (ft_can_write(o, x, y, p) == 1)
	{
		ft_puttab(p->tab);
		ft_putchar('\n');
		return (1);
	}
	return (0);
}
