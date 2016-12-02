#include "fillit.h"
#include <stdio.h>

void	ft_settab(int size, int *tminos, int sizetab)
{
	t_place	*p;
	
	if ((p = malloc(sizeof(t_list))) != 0)
	{
		p->tab = ft_columnew(sizetab);
		if (p->tab != NULL)
		{
			p->x = 0;
			p->y = 0;
			p->ids = tminos;
			if (ft_check_tab(p, size) == 1)
				ft_puttab(p->tab);
			else
				ft_settab(size, tminos, sizetab + 1);
		}
	}
	free(p->tab);
}

int		ft_check_tab(t_place *p, int size)
{
	int	write;

	write = 0;
	while (p->tab[p->y])
	{
		p->x = 0;
		while (p->tab[p->y][p->x])
		{
			if (p->tab[p->y][p->x] == '.')
			{
				if (ft_puttminos(p, size) == 1)
					write++;
			}
			p->x++;
		}
		p->y++;
	}
	if (write == size)
		return (1);
	else
		return (0);
}

int		ft_puttminos(t_place *p, int size)
{
	int	o;
	int tmp;

	o = 0;
	while (o < size)
	{
		tmp = p->ids[o];
		if (ft_can_write(tmp, o, p) == 1)
		{
			return (1);
		}
		o++;
	}
	return (0);
}
