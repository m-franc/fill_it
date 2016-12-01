#include "fillit.h"

void	ft_settab(int size, int *tminos, int sizetab)
{
	int		sizetab;
	int		*copy;
	t_place	*p;

	copy = ft_memcpy(copy, tminos, size);
	p->tab = ft_columnew(sizetab);
	if (p->tab == NULL)
		return (NULL);
	p->x = 0;
	p->y = 0;
	if (ft_check_tab(&copy, &p, size) == 0)
		ft_settab(size, tminos, sizetab++);
	ft_puttab(p->tab);
	free(p->tab);
}

int		ft_check_tab(int **copy, t_place **p, int size)
{
	int	write;

	write = 0;
	while ((*p)->tab[(*p)->y])
	{
		p->x = 0;
		while ((*p)->tab[(*p)->y][(*p)->x])
		{
			if ((*p)->tab[(*p)->y][(*p)->x] == '.')
			{
			 	if (ft_puttminos(&copy, &p, size) == 1)
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

int		ft_puttminos(int ***copy, t_place ***p, int size)
{
	int	o;

	o = 0;
	while (o < size)
	{
		if (ft_can_write(**copy[o], o, &p) == 1)
		{
			**copy[o] = 0;	
			return (1);
		}
		o++;
	}
	return (0);
}
