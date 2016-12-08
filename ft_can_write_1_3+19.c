#include "fillit.h"

int		ft_can_write(int o, int x, int y, t_place *p)
{
	int id;

	id = p->ids[o];
	C * tv[] = {ft_can_write1, ft_can_write2, ft_can_write3,
		ft_can_write4, ft_can_write5, ft_can_write6, ft_can_write7,
		ft_can_write8, ft_can_write9, ft_can_write10, ft_can_write11,
		ft_can_write12, ft_can_write13, ft_can_write14, 
		ft_can_write15,	ft_can_write16, ft_can_write17, 
		ft_can_write18, ft_can_write19};
	if (tv[id - 1](o, x, y, p) == 1)
		return (1);
	return (0); 
}

int		ft_can_write1(int o, int x, int y, t_place *p)
{
	if (x + 1 >= p->max || y + 1 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.'
	|| p->tab[y + 1][x] != '.'
	|| p->tab[y + 1][x + 1] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 1][x + 1] = 'A' + o;
	return (1);
}

int		ft_can_write2(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || y + 2 >= p->max || y + 3 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y + 2][x] != '.'
	|| p->tab[y + 3][x] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 2][x] = 'A' + o;
	p->tab[y + 3][x] = 'A' + o;
	return (1);
}

int		ft_can_write3(int o, int x, int y, t_place *p)
{
	if (x + 1 >= p->max || x + 2 >= p->max || x + 3 >= p->max)
		return (0);
	if (p->tab[y][x + 1] != '.'
	|| p->tab[y][x + 2] != '.'
	|| p->tab[y][x + 3] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y][x + 1] = 'A' + o;
	p->tab[y][x + 2] = 'A' + o;
	p->tab[y][x + 3] = 'A' + o;
	return (1);
}

int		ft_can_write19(int o, int x, int y, t_place *p)
{
	if (y + 1 >= p->max || y + 2 >= p->max || x + 1 >= p->max)
		return (0);
	if (p->tab[y + 1][x] != '.'
	|| p->tab[y + 1][x + 1] != '.'
	|| p->tab[y + 2][x] != '.')
		return (0);
	p->tab[y][x] = 'A' + o;
	p->tab[y + 1][x] = 'A' + o;
	p->tab[y + 1][x + 1] = 'A' + o;
	p->tab[y + 2][x] = 'A' + o;
	return (1);
}
